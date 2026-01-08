// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPHONEWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPHONEWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdatePhoneWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePhoneWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(HttpFlag, httpFlag_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(QueueFlag, queueFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StatusCallbackUrl, statusCallbackUrl_);
      DARABONBA_PTR_TO_JSON(UpCallbackUrl, upCallbackUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePhoneWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(HttpFlag, httpFlag_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(QueueFlag, queueFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StatusCallbackUrl, statusCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(UpCallbackUrl, upCallbackUrl_);
    };
    UpdatePhoneWebhookRequest() = default ;
    UpdatePhoneWebhookRequest(const UpdatePhoneWebhookRequest &) = default ;
    UpdatePhoneWebhookRequest(UpdatePhoneWebhookRequest &&) = default ;
    UpdatePhoneWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePhoneWebhookRequest() = default ;
    UpdatePhoneWebhookRequest& operator=(const UpdatePhoneWebhookRequest &) = default ;
    UpdatePhoneWebhookRequest& operator=(UpdatePhoneWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->httpFlag_ == nullptr && this->ownerId_ == nullptr && this->phoneNumber_ == nullptr && this->queueFlag_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->statusCallbackUrl_ == nullptr && this->upCallbackUrl_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdatePhoneWebhookRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // httpFlag Field Functions 
    bool hasHttpFlag() const { return this->httpFlag_ != nullptr;};
    void deleteHttpFlag() { this->httpFlag_ = nullptr;};
    inline string getHttpFlag() const { DARABONBA_PTR_GET_DEFAULT(httpFlag_, "") };
    inline UpdatePhoneWebhookRequest& setHttpFlag(string httpFlag) { DARABONBA_PTR_SET_VALUE(httpFlag_, httpFlag) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdatePhoneWebhookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdatePhoneWebhookRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // queueFlag Field Functions 
    bool hasQueueFlag() const { return this->queueFlag_ != nullptr;};
    void deleteQueueFlag() { this->queueFlag_ = nullptr;};
    inline string getQueueFlag() const { DARABONBA_PTR_GET_DEFAULT(queueFlag_, "") };
    inline UpdatePhoneWebhookRequest& setQueueFlag(string queueFlag) { DARABONBA_PTR_SET_VALUE(queueFlag_, queueFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdatePhoneWebhookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdatePhoneWebhookRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // statusCallbackUrl Field Functions 
    bool hasStatusCallbackUrl() const { return this->statusCallbackUrl_ != nullptr;};
    void deleteStatusCallbackUrl() { this->statusCallbackUrl_ = nullptr;};
    inline string getStatusCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(statusCallbackUrl_, "") };
    inline UpdatePhoneWebhookRequest& setStatusCallbackUrl(string statusCallbackUrl) { DARABONBA_PTR_SET_VALUE(statusCallbackUrl_, statusCallbackUrl) };


    // upCallbackUrl Field Functions 
    bool hasUpCallbackUrl() const { return this->upCallbackUrl_ != nullptr;};
    void deleteUpCallbackUrl() { this->upCallbackUrl_ = nullptr;};
    inline string getUpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(upCallbackUrl_, "") };
    inline UpdatePhoneWebhookRequest& setUpCallbackUrl(string upCallbackUrl) { DARABONBA_PTR_SET_VALUE(upCallbackUrl_, upCallbackUrl) };


  protected:
    // SpaceId for ISV sub clients.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // Whether to use HTTP to receive receipts. Value:
    // *   Y: Yes.
    // *   N: No.
    shared_ptr<string> httpFlag_ {};
    shared_ptr<int64_t> ownerId_ {};
    // phone number.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // Whether to use queue method to receive receipts. Value:
    // *   Y: Yes.
    // *   N: No.
    shared_ptr<string> queueFlag_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // HTTP status report interface callback address.
    shared_ptr<string> statusCallbackUrl_ {};
    // HTTP upstream message interface callback address.
    shared_ptr<string> upCallbackUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
