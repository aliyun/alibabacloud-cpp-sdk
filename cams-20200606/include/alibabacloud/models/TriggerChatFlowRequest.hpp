// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERCHATFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERCHATFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class TriggerChatFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerChatFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClaimTimeMillis, claimTimeMillis_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DiscardTimeMillis, discardTimeMillis_);
      DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerChatFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClaimTimeMillis, claimTimeMillis_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DiscardTimeMillis, discardTimeMillis_);
      DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    TriggerChatFlowRequest() = default ;
    TriggerChatFlowRequest(const TriggerChatFlowRequest &) = default ;
    TriggerChatFlowRequest(TriggerChatFlowRequest &&) = default ;
    TriggerChatFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerChatFlowRequest() = default ;
    TriggerChatFlowRequest& operator=(const TriggerChatFlowRequest &) = default ;
    TriggerChatFlowRequest& operator=(TriggerChatFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claimTimeMillis_ == nullptr
        && this->data_ == nullptr && this->discardTimeMillis_ == nullptr && this->flowCode_ == nullptr && this->outId_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->uuid_ == nullptr; };
    // claimTimeMillis Field Functions 
    bool hasClaimTimeMillis() const { return this->claimTimeMillis_ != nullptr;};
    void deleteClaimTimeMillis() { this->claimTimeMillis_ = nullptr;};
    inline int64_t getClaimTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(claimTimeMillis_, 0L) };
    inline TriggerChatFlowRequest& setClaimTimeMillis(int64_t claimTimeMillis) { DARABONBA_PTR_SET_VALUE(claimTimeMillis_, claimTimeMillis) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline TriggerChatFlowRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline TriggerChatFlowRequest& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // discardTimeMillis Field Functions 
    bool hasDiscardTimeMillis() const { return this->discardTimeMillis_ != nullptr;};
    void deleteDiscardTimeMillis() { this->discardTimeMillis_ = nullptr;};
    inline int64_t getDiscardTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(discardTimeMillis_, 0L) };
    inline TriggerChatFlowRequest& setDiscardTimeMillis(int64_t discardTimeMillis) { DARABONBA_PTR_SET_VALUE(discardTimeMillis_, discardTimeMillis) };


    // flowCode Field Functions 
    bool hasFlowCode() const { return this->flowCode_ != nullptr;};
    void deleteFlowCode() { this->flowCode_ = nullptr;};
    inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
    inline TriggerChatFlowRequest& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline TriggerChatFlowRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TriggerChatFlowRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TriggerChatFlowRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TriggerChatFlowRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline TriggerChatFlowRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The declared occurrence time of the event, usually the time when the request was constructed, in milliseconds timestamp.
    shared_ptr<int64_t> claimTimeMillis_ {};
    // Input parameters in Key-Value format. The Key must match the input strategy configured at the start node of your flow.
    Darabonba::Json data_ {};
    // The time when the event should be discarded, i.e., the expiration time. If this field is specified, the message will be discarded if it exceeds this time, in milliseconds timestamp.
    shared_ptr<int64_t> discardTimeMillis_ {};
    // Flow code.
    // 
    // This parameter is required.
    shared_ptr<string> flowCode_ {};
    // External system transaction number, used to associate with external business system transactions. You can retrieve this parameter within the flow after triggering.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Unique event ID used for idempotent triggers. Do not include any business semantics; you can retrieve this parameter within the flow after triggering.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
