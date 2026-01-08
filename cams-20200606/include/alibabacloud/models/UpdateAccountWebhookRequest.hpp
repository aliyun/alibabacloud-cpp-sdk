// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class UpdateAccountWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(HttpFlag, httpFlag_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueueFlag, queueFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StatusCallbackUrl, statusCallbackUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(HttpFlag, httpFlag_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueueFlag, queueFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StatusCallbackUrl, statusCallbackUrl_);
    };
    UpdateAccountWebhookRequest() = default ;
    UpdateAccountWebhookRequest(const UpdateAccountWebhookRequest &) = default ;
    UpdateAccountWebhookRequest(UpdateAccountWebhookRequest &&) = default ;
    UpdateAccountWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountWebhookRequest() = default ;
    UpdateAccountWebhookRequest& operator=(const UpdateAccountWebhookRequest &) = default ;
    UpdateAccountWebhookRequest& operator=(UpdateAccountWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->custSpaceId_ == nullptr
        && this->httpFlag_ == nullptr && this->ownerId_ == nullptr && this->queueFlag_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->statusCallbackUrl_ == nullptr; };
    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateAccountWebhookRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // httpFlag Field Functions 
    bool hasHttpFlag() const { return this->httpFlag_ != nullptr;};
    void deleteHttpFlag() { this->httpFlag_ = nullptr;};
    inline string getHttpFlag() const { DARABONBA_PTR_GET_DEFAULT(httpFlag_, "") };
    inline UpdateAccountWebhookRequest& setHttpFlag(string httpFlag) { DARABONBA_PTR_SET_VALUE(httpFlag_, httpFlag) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAccountWebhookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queueFlag Field Functions 
    bool hasQueueFlag() const { return this->queueFlag_ != nullptr;};
    void deleteQueueFlag() { this->queueFlag_ = nullptr;};
    inline string getQueueFlag() const { DARABONBA_PTR_GET_DEFAULT(queueFlag_, "") };
    inline UpdateAccountWebhookRequest& setQueueFlag(string queueFlag) { DARABONBA_PTR_SET_VALUE(queueFlag_, queueFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAccountWebhookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAccountWebhookRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // statusCallbackUrl Field Functions 
    bool hasStatusCallbackUrl() const { return this->statusCallbackUrl_ != nullptr;};
    void deleteStatusCallbackUrl() { this->statusCallbackUrl_ = nullptr;};
    inline string getStatusCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(statusCallbackUrl_, "") };
    inline UpdateAccountWebhookRequest& setStatusCallbackUrl(string statusCallbackUrl) { DARABONBA_PTR_SET_VALUE(statusCallbackUrl_, statusCallbackUrl) };


  protected:
    // The space ID of the RAM user within the independent software vendor (ISV) account.
    // 
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // Specifies whether to use HTTP callbacks to receive message receipts. Valid values:
    // 
    // *   Y: indicates that HTTP callbacks are used to receive receipts.
    // *   N: indicates that HTTP callbacks are not used to receive receipts.
    shared_ptr<string> httpFlag_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to use Message Service (MNS) queues to receive receipts. Valid values:
    // 
    // *   Y: indicates that MNS queues are used to receive receipts.
    // *   N: indicates that MNS queues are not used to receive receipts.
    shared_ptr<string> queueFlag_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The callback URL to which status reports are sent by using HTTP callbacks.
    shared_ptr<string> statusCallbackUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
