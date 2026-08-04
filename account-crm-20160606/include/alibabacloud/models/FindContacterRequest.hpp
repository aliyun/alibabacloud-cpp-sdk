// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCONTACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCONTACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class FindContacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindContacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContacterId, contacterId_);
      DARABONBA_PTR_TO_JSON(LocaleString, localeString_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FindContacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContacterId, contacterId_);
      DARABONBA_PTR_FROM_JSON(LocaleString, localeString_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    FindContacterRequest() = default ;
    FindContacterRequest(const FindContacterRequest &) = default ;
    FindContacterRequest(FindContacterRequest &&) = default ;
    FindContacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindContacterRequest() = default ;
    FindContacterRequest& operator=(const FindContacterRequest &) = default ;
    FindContacterRequest& operator=(FindContacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacterId_ == nullptr
        && this->localeString_ == nullptr && this->type_ == nullptr; };
    // contacterId Field Functions 
    bool hasContacterId() const { return this->contacterId_ != nullptr;};
    void deleteContacterId() { this->contacterId_ = nullptr;};
    inline int64_t getContacterId() const { DARABONBA_PTR_GET_DEFAULT(contacterId_, 0L) };
    inline FindContacterRequest& setContacterId(int64_t contacterId) { DARABONBA_PTR_SET_VALUE(contacterId_, contacterId) };


    // localeString Field Functions 
    bool hasLocaleString() const { return this->localeString_ != nullptr;};
    void deleteLocaleString() { this->localeString_ = nullptr;};
    inline string getLocaleString() const { DARABONBA_PTR_GET_DEFAULT(localeString_, "") };
    inline FindContacterRequest& setLocaleString(string localeString) { DARABONBA_PTR_SET_VALUE(localeString_, localeString) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FindContacterRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> contacterId_ {};
    shared_ptr<string> localeString_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
