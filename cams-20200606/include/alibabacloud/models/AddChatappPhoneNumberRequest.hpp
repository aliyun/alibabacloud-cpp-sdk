// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHATAPPPHONENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHATAPPPHONENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddChatappPhoneNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddChatappPhoneNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cc, cc_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PreValidateId, preValidateId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VerifiedName, verifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, AddChatappPhoneNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cc, cc_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PreValidateId, preValidateId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VerifiedName, verifiedName_);
    };
    AddChatappPhoneNumberRequest() = default ;
    AddChatappPhoneNumberRequest(const AddChatappPhoneNumberRequest &) = default ;
    AddChatappPhoneNumberRequest(AddChatappPhoneNumberRequest &&) = default ;
    AddChatappPhoneNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddChatappPhoneNumberRequest() = default ;
    AddChatappPhoneNumberRequest& operator=(const AddChatappPhoneNumberRequest &) = default ;
    AddChatappPhoneNumberRequest& operator=(AddChatappPhoneNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cc_ == nullptr
        && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->preValidateId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->verifiedName_ == nullptr; };
    // cc Field Functions 
    bool hasCc() const { return this->cc_ != nullptr;};
    void deleteCc() { this->cc_ = nullptr;};
    inline string getCc() const { DARABONBA_PTR_GET_DEFAULT(cc_, "") };
    inline AddChatappPhoneNumberRequest& setCc(string cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline AddChatappPhoneNumberRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddChatappPhoneNumberRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline AddChatappPhoneNumberRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // preValidateId Field Functions 
    bool hasPreValidateId() const { return this->preValidateId_ != nullptr;};
    void deletePreValidateId() { this->preValidateId_ = nullptr;};
    inline string getPreValidateId() const { DARABONBA_PTR_GET_DEFAULT(preValidateId_, "") };
    inline AddChatappPhoneNumberRequest& setPreValidateId(string preValidateId) { DARABONBA_PTR_SET_VALUE(preValidateId_, preValidateId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddChatappPhoneNumberRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddChatappPhoneNumberRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // verifiedName Field Functions 
    bool hasVerifiedName() const { return this->verifiedName_ != nullptr;};
    void deleteVerifiedName() { this->verifiedName_ = nullptr;};
    inline string getVerifiedName() const { DARABONBA_PTR_GET_DEFAULT(verifiedName_, "") };
    inline AddChatappPhoneNumberRequest& setVerifiedName(string verifiedName) { DARABONBA_PTR_SET_VALUE(verifiedName_, verifiedName) };


  protected:
    // You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
    // 
    // This parameter is required.
    shared_ptr<string> cc_ {};
    // Adds a phone number for a WhatsApp Business account (WABA).
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // AddChatappPhoneNumber
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // cams:ChatappPhoneNumberRegister
    shared_ptr<string> preValidateId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Private
    // 
    // This parameter is required.
    shared_ptr<string> verifiedName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
