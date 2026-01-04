// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateExpressConnectTrafficQosQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectTrafficQosQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectTrafficQosQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPercent, bandwidthPercent_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QueueDescription, queueDescription_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    CreateExpressConnectTrafficQosQueueRequest() = default ;
    CreateExpressConnectTrafficQosQueueRequest(const CreateExpressConnectTrafficQosQueueRequest &) = default ;
    CreateExpressConnectTrafficQosQueueRequest(CreateExpressConnectTrafficQosQueueRequest &&) = default ;
    CreateExpressConnectTrafficQosQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectTrafficQosQueueRequest() = default ;
    CreateExpressConnectTrafficQosQueueRequest& operator=(const CreateExpressConnectTrafficQosQueueRequest &) = default ;
    CreateExpressConnectTrafficQosQueueRequest& operator=(CreateExpressConnectTrafficQosQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthPercent_ == nullptr
        && this->clientToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->qosId_ == nullptr && this->queueDescription_ == nullptr
        && this->queueName_ == nullptr && this->queueType_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr; };
    // bandwidthPercent Field Functions 
    bool hasBandwidthPercent() const { return this->bandwidthPercent_ != nullptr;};
    void deleteBandwidthPercent() { this->bandwidthPercent_ = nullptr;};
    inline string getBandwidthPercent() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPercent_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setBandwidthPercent(string bandwidthPercent) { DARABONBA_PTR_SET_VALUE(bandwidthPercent_, bandwidthPercent) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateExpressConnectTrafficQosQueueRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // queueDescription Field Functions 
    bool hasQueueDescription() const { return this->queueDescription_ != nullptr;};
    void deleteQueueDescription() { this->queueDescription_ = nullptr;};
    inline string getQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(queueDescription_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setQueueDescription(string queueDescription) { DARABONBA_PTR_SET_VALUE(queueDescription_, queueDescription) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateExpressConnectTrafficQosQueueRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The percentage of bandwidth allocated to the QoS queue.
    // 
    // *   If QueueType is set to **Medium**, this parameter is required. Valid values: 1 to 100.
    // *   If QueueType is set to **Default**, a value of - is returned.
    shared_ptr<string> bandwidthPercent_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. ClientToken can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the QoS policy.
    // 
    // This parameter is required.
    shared_ptr<string> qosId_ {};
    // The description of the QoS queue.
    // 
    // It must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> queueDescription_ {};
    // The name of the QoS queue.
    // 
    // It must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> queueName_ {};
    // The priority of the QoS queue. Valid values:
    // 
    // *   **High**
    // *   **Medium**
    // *   **Default**: default queue.
    // 
    // > You cannot create a QoS queue of the default priority.
    // 
    // This parameter is required.
    shared_ptr<string> queueType_ {};
    // The region ID of the QoS policy.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
