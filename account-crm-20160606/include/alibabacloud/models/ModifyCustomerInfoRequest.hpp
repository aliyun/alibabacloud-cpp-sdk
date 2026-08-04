// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ModifyCustomerInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomerInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(CustomerCategory, customerCategory_);
      DARABONBA_PTR_TO_JSON(CustomerSubCategory, customerSubCategory_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomerInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(CustomerCategory, customerCategory_);
      DARABONBA_PTR_FROM_JSON(CustomerSubCategory, customerSubCategory_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    ModifyCustomerInfoRequest() = default ;
    ModifyCustomerInfoRequest(const ModifyCustomerInfoRequest &) = default ;
    ModifyCustomerInfoRequest(ModifyCustomerInfoRequest &&) = default ;
    ModifyCustomerInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomerInfoRequest() = default ;
    ModifyCustomerInfoRequest& operator=(const ModifyCustomerInfoRequest &) = default ;
    ModifyCustomerInfoRequest& operator=(ModifyCustomerInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && this->customerCategory_ == nullptr && this->customerSubCategory_ == nullptr && this->userId_ == nullptr && this->website_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline ModifyCustomerInfoRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // customerCategory Field Functions 
    bool hasCustomerCategory() const { return this->customerCategory_ != nullptr;};
    void deleteCustomerCategory() { this->customerCategory_ = nullptr;};
    inline string getCustomerCategory() const { DARABONBA_PTR_GET_DEFAULT(customerCategory_, "") };
    inline ModifyCustomerInfoRequest& setCustomerCategory(string customerCategory) { DARABONBA_PTR_SET_VALUE(customerCategory_, customerCategory) };


    // customerSubCategory Field Functions 
    bool hasCustomerSubCategory() const { return this->customerSubCategory_ != nullptr;};
    void deleteCustomerSubCategory() { this->customerSubCategory_ = nullptr;};
    inline string getCustomerSubCategory() const { DARABONBA_PTR_GET_DEFAULT(customerSubCategory_, "") };
    inline ModifyCustomerInfoRequest& setCustomerSubCategory(string customerSubCategory) { DARABONBA_PTR_SET_VALUE(customerSubCategory_, customerSubCategory) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ModifyCustomerInfoRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline string getWebsite() const { DARABONBA_PTR_GET_DEFAULT(website_, "") };
    inline ModifyCustomerInfoRequest& setWebsite(string website) { DARABONBA_PTR_SET_VALUE(website_, website) };


  protected:
    shared_ptr<string> biz_ {};
    shared_ptr<string> customerCategory_ {};
    shared_ptr<string> customerSubCategory_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
    shared_ptr<string> website_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
