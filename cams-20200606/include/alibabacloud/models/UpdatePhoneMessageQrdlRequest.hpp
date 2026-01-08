// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPHONEMESSAGEQRDLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPHONEMESSAGEQRDLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdatePhoneMessageQrdlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePhoneMessageQrdlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(GenerateQrImage, generateQrImage_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PrefilledMessage, prefilledMessage_);
      DARABONBA_PTR_TO_JSON(QrdlCode, qrdlCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePhoneMessageQrdlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(GenerateQrImage, generateQrImage_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PrefilledMessage, prefilledMessage_);
      DARABONBA_PTR_FROM_JSON(QrdlCode, qrdlCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdatePhoneMessageQrdlRequest() = default ;
    UpdatePhoneMessageQrdlRequest(const UpdatePhoneMessageQrdlRequest &) = default ;
    UpdatePhoneMessageQrdlRequest(UpdatePhoneMessageQrdlRequest &&) = default ;
    UpdatePhoneMessageQrdlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePhoneMessageQrdlRequest() = default ;
    UpdatePhoneMessageQrdlRequest& operator=(const UpdatePhoneMessageQrdlRequest &) = default ;
    UpdatePhoneMessageQrdlRequest& operator=(UpdatePhoneMessageQrdlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->generateQrImage_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->prefilledMessage_ == nullptr && this->qrdlCode_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdatePhoneMessageQrdlRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // generateQrImage Field Functions 
    bool hasGenerateQrImage() const { return this->generateQrImage_ != nullptr;};
    void deleteGenerateQrImage() { this->generateQrImage_ = nullptr;};
    inline string getGenerateQrImage() const { DARABONBA_PTR_GET_DEFAULT(generateQrImage_, "") };
    inline UpdatePhoneMessageQrdlRequest& setGenerateQrImage(string generateQrImage) { DARABONBA_PTR_SET_VALUE(generateQrImage_, generateQrImage) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdatePhoneMessageQrdlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdatePhoneMessageQrdlRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // prefilledMessage Field Functions 
    bool hasPrefilledMessage() const { return this->prefilledMessage_ != nullptr;};
    void deletePrefilledMessage() { this->prefilledMessage_ = nullptr;};
    inline string getPrefilledMessage() const { DARABONBA_PTR_GET_DEFAULT(prefilledMessage_, "") };
    inline UpdatePhoneMessageQrdlRequest& setPrefilledMessage(string prefilledMessage) { DARABONBA_PTR_SET_VALUE(prefilledMessage_, prefilledMessage) };


    // qrdlCode Field Functions 
    bool hasQrdlCode() const { return this->qrdlCode_ != nullptr;};
    void deleteQrdlCode() { this->qrdlCode_ = nullptr;};
    inline string getQrdlCode() const { DARABONBA_PTR_GET_DEFAULT(qrdlCode_, "") };
    inline UpdatePhoneMessageQrdlRequest& setQrdlCode(string qrdlCode) { DARABONBA_PTR_SET_VALUE(qrdlCode_, qrdlCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdatePhoneMessageQrdlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdatePhoneMessageQrdlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> custSpaceId_ {};
    // This parameter is required.
    shared_ptr<string> generateQrImage_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // This parameter is required.
    shared_ptr<string> prefilledMessage_ {};
    // This parameter is required.
    shared_ptr<string> qrdlCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
