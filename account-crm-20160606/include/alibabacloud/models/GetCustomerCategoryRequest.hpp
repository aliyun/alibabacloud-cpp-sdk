// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetCustomerCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LocaleString, localeString_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LocaleString, localeString_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetCustomerCategoryRequest() = default ;
    GetCustomerCategoryRequest(const GetCustomerCategoryRequest &) = default ;
    GetCustomerCategoryRequest(GetCustomerCategoryRequest &&) = default ;
    GetCustomerCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerCategoryRequest() = default ;
    GetCustomerCategoryRequest& operator=(const GetCustomerCategoryRequest &) = default ;
    GetCustomerCategoryRequest& operator=(GetCustomerCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localeString_ == nullptr
        && this->userId_ == nullptr; };
    // localeString Field Functions 
    bool hasLocaleString() const { return this->localeString_ != nullptr;};
    void deleteLocaleString() { this->localeString_ = nullptr;};
    inline string getLocaleString() const { DARABONBA_PTR_GET_DEFAULT(localeString_, "") };
    inline GetCustomerCategoryRequest& setLocaleString(string localeString) { DARABONBA_PTR_SET_VALUE(localeString_, localeString) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetCustomerCategoryRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> localeString_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
