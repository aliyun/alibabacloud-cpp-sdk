// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDALLCONTACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDALLCONTACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindAllContacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindAllContacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(LocaleString, localeString_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, FindAllContacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(LocaleString, localeString_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    FindAllContacterRequest() = default ;
    FindAllContacterRequest(const FindAllContacterRequest &) = default ;
    FindAllContacterRequest(FindAllContacterRequest &&) = default ;
    FindAllContacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindAllContacterRequest() = default ;
    FindAllContacterRequest& operator=(const FindAllContacterRequest &) = default ;
    FindAllContacterRequest& operator=(FindAllContacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->localeString_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline FindAllContacterRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // localeString Field Functions 
    bool hasLocaleString() const { return this->localeString_ != nullptr;};
    void deleteLocaleString() { this->localeString_ = nullptr;};
    inline string getLocaleString() const { DARABONBA_PTR_GET_DEFAULT(localeString_, "") };
    inline FindAllContacterRequest& setLocaleString(string localeString) { DARABONBA_PTR_SET_VALUE(localeString_, localeString) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FindAllContacterRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline FindAllContacterRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<string> localeString_ {};
    shared_ptr<string> type_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
