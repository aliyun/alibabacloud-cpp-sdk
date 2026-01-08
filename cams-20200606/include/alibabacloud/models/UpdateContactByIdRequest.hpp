// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateContactByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_ANY_TO_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_TO_JSON(ContactDetails, contactDetails_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_ANY_FROM_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_FROM_JSON(ContactDetails, contactDetails_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateContactByIdRequest() = default ;
    UpdateContactByIdRequest(const UpdateContactByIdRequest &) = default ;
    UpdateContactByIdRequest(UpdateContactByIdRequest &&) = default ;
    UpdateContactByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactByIdRequest() = default ;
    UpdateContactByIdRequest& operator=(const UpdateContactByIdRequest &) = default ;
    UpdateContactByIdRequest& operator=(UpdateContactByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->bizExtend_ == nullptr && this->contactDetails_ == nullptr && this->contactId_ == nullptr && this->contactName_ == nullptr && this->country_ == nullptr
        && this->email_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline UpdateContactByIdRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtend Field Functions 
    bool hasBizExtend() const { return this->bizExtend_ != nullptr;};
    void deleteBizExtend() { this->bizExtend_ = nullptr;};
    inline     const Darabonba::Json & getBizExtend() const { DARABONBA_GET(bizExtend_) };
    Darabonba::Json & getBizExtend() { DARABONBA_GET(bizExtend_) };
    inline UpdateContactByIdRequest& setBizExtend(const Darabonba::Json & bizExtend) { DARABONBA_SET_VALUE(bizExtend_, bizExtend) };
    inline UpdateContactByIdRequest& setBizExtend(Darabonba::Json && bizExtend) { DARABONBA_SET_RVALUE(bizExtend_, bizExtend) };


    // contactDetails Field Functions 
    bool hasContactDetails() const { return this->contactDetails_ != nullptr;};
    void deleteContactDetails() { this->contactDetails_ = nullptr;};
    inline string getContactDetails() const { DARABONBA_PTR_GET_DEFAULT(contactDetails_, "") };
    inline UpdateContactByIdRequest& setContactDetails(string contactDetails) { DARABONBA_PTR_SET_VALUE(contactDetails_, contactDetails) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline UpdateContactByIdRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline UpdateContactByIdRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline UpdateContactByIdRequest& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateContactByIdRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateContactByIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateContactByIdRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateContactByIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateContactByIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> bizCode_ {};
    Darabonba::Json bizExtend_ {};
    // This parameter is required.
    shared_ptr<string> contactDetails_ {};
    // This parameter is required.
    shared_ptr<string> contactId_ {};
    // This parameter is required.
    shared_ptr<string> contactName_ {};
    // This parameter is required.
    shared_ptr<string> country_ {};
    shared_ptr<string> email_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
