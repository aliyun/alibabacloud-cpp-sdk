// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTACTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTACTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class UpdateContactsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContactsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(ContactPhone, contactPhone_);
      DARABONBA_PTR_TO_JSON(MailStatus, mailStatus_);
      DARABONBA_PTR_TO_JSON(OpenStatusWarning, openStatusWarning_);
      DARABONBA_PTR_TO_JSON(OpentAttributionWarning, opentAttributionWarning_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneStatus, phoneStatus_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContactsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactEmail, contactEmail_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(ContactPhone, contactPhone_);
      DARABONBA_PTR_FROM_JSON(MailStatus, mailStatus_);
      DARABONBA_PTR_FROM_JSON(OpenStatusWarning, openStatusWarning_);
      DARABONBA_PTR_FROM_JSON(OpentAttributionWarning, opentAttributionWarning_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneStatus, phoneStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateContactsRequest() = default ;
    UpdateContactsRequest(const UpdateContactsRequest &) = default ;
    UpdateContactsRequest(UpdateContactsRequest &&) = default ;
    UpdateContactsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContactsRequest() = default ;
    UpdateContactsRequest& operator=(const UpdateContactsRequest &) = default ;
    UpdateContactsRequest& operator=(UpdateContactsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->mailStatus_ == nullptr && this->openStatusWarning_ == nullptr
        && this->opentAttributionWarning_ == nullptr && this->ownerId_ == nullptr && this->phoneStatus_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // contactEmail Field Functions 
    bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
    void deleteContactEmail() { this->contactEmail_ = nullptr;};
    inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
    inline UpdateContactsRequest& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline UpdateContactsRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline UpdateContactsRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // contactPhone Field Functions 
    bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
    void deleteContactPhone() { this->contactPhone_ = nullptr;};
    inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
    inline UpdateContactsRequest& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


    // mailStatus Field Functions 
    bool hasMailStatus() const { return this->mailStatus_ != nullptr;};
    void deleteMailStatus() { this->mailStatus_ = nullptr;};
    inline int32_t getMailStatus() const { DARABONBA_PTR_GET_DEFAULT(mailStatus_, 0) };
    inline UpdateContactsRequest& setMailStatus(int32_t mailStatus) { DARABONBA_PTR_SET_VALUE(mailStatus_, mailStatus) };


    // openStatusWarning Field Functions 
    bool hasOpenStatusWarning() const { return this->openStatusWarning_ != nullptr;};
    void deleteOpenStatusWarning() { this->openStatusWarning_ = nullptr;};
    inline bool getOpenStatusWarning() const { DARABONBA_PTR_GET_DEFAULT(openStatusWarning_, false) };
    inline UpdateContactsRequest& setOpenStatusWarning(bool openStatusWarning) { DARABONBA_PTR_SET_VALUE(openStatusWarning_, openStatusWarning) };


    // opentAttributionWarning Field Functions 
    bool hasOpentAttributionWarning() const { return this->opentAttributionWarning_ != nullptr;};
    void deleteOpentAttributionWarning() { this->opentAttributionWarning_ = nullptr;};
    inline bool getOpentAttributionWarning() const { DARABONBA_PTR_GET_DEFAULT(opentAttributionWarning_, false) };
    inline UpdateContactsRequest& setOpentAttributionWarning(bool opentAttributionWarning) { DARABONBA_PTR_SET_VALUE(opentAttributionWarning_, opentAttributionWarning) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateContactsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneStatus Field Functions 
    bool hasPhoneStatus() const { return this->phoneStatus_ != nullptr;};
    void deletePhoneStatus() { this->phoneStatus_ = nullptr;};
    inline int32_t getPhoneStatus() const { DARABONBA_PTR_GET_DEFAULT(phoneStatus_, 0) };
    inline UpdateContactsRequest& setPhoneStatus(int32_t phoneStatus) { DARABONBA_PTR_SET_VALUE(phoneStatus_, phoneStatus) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateContactsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateContactsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> contactEmail_ {};
    // This parameter is required.
    shared_ptr<int64_t> contactId_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> contactPhone_ {};
    shared_ptr<int32_t> mailStatus_ {};
    shared_ptr<bool> openStatusWarning_ {};
    shared_ptr<bool> opentAttributionWarning_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<int32_t> phoneStatus_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
