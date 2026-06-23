// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxEipTps, maxEipTps_);
      DARABONBA_PTR_TO_JSON(MaxPrivateTps, maxPrivateTps_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(ProvisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_TO_JSON(QueueCapacity, queueCapacity_);
      DARABONBA_PTR_TO_JSON(ServerlessChargeType, serverlessChargeType_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SupportEip, supportEip_);
      DARABONBA_PTR_TO_JSON(SupportTracing, supportTracing_);
      DARABONBA_PTR_TO_JSON(TracingStorageTime, tracingStorageTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxEipTps, maxEipTps_);
      DARABONBA_PTR_FROM_JSON(MaxPrivateTps, maxPrivateTps_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(ProvisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_FROM_JSON(QueueCapacity, queueCapacity_);
      DARABONBA_PTR_FROM_JSON(ServerlessChargeType, serverlessChargeType_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SupportEip, supportEip_);
      DARABONBA_PTR_FROM_JSON(SupportTracing, supportTracing_);
      DARABONBA_PTR_FROM_JSON(TracingStorageTime, tracingStorageTime_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->edition_ == nullptr && this->encryptedInstance_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->kmsKeyId_ == nullptr
        && this->maxConnections_ == nullptr && this->maxEipTps_ == nullptr && this->maxPrivateTps_ == nullptr && this->modifyType_ == nullptr && this->provisionedCapacity_ == nullptr
        && this->queueCapacity_ == nullptr && this->serverlessChargeType_ == nullptr && this->storageSize_ == nullptr && this->supportEip_ == nullptr && this->supportTracing_ == nullptr
        && this->tracingStorageTime_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UpdateInstanceRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // encryptedInstance Field Functions 
    bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
    void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
    inline bool getEncryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
    inline UpdateInstanceRequest& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline UpdateInstanceRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline UpdateInstanceRequest& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxEipTps Field Functions 
    bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
    void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
    inline int64_t getMaxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0L) };
    inline UpdateInstanceRequest& setMaxEipTps(int64_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


    // maxPrivateTps Field Functions 
    bool hasMaxPrivateTps() const { return this->maxPrivateTps_ != nullptr;};
    void deleteMaxPrivateTps() { this->maxPrivateTps_ = nullptr;};
    inline int64_t getMaxPrivateTps() const { DARABONBA_PTR_GET_DEFAULT(maxPrivateTps_, 0L) };
    inline UpdateInstanceRequest& setMaxPrivateTps(int64_t maxPrivateTps) { DARABONBA_PTR_SET_VALUE(maxPrivateTps_, maxPrivateTps) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdateInstanceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int32_t getProvisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
    inline UpdateInstanceRequest& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // queueCapacity Field Functions 
    bool hasQueueCapacity() const { return this->queueCapacity_ != nullptr;};
    void deleteQueueCapacity() { this->queueCapacity_ = nullptr;};
    inline int32_t getQueueCapacity() const { DARABONBA_PTR_GET_DEFAULT(queueCapacity_, 0) };
    inline UpdateInstanceRequest& setQueueCapacity(int32_t queueCapacity) { DARABONBA_PTR_SET_VALUE(queueCapacity_, queueCapacity) };


    // serverlessChargeType Field Functions 
    bool hasServerlessChargeType() const { return this->serverlessChargeType_ != nullptr;};
    void deleteServerlessChargeType() { this->serverlessChargeType_ = nullptr;};
    inline string getServerlessChargeType() const { DARABONBA_PTR_GET_DEFAULT(serverlessChargeType_, "") };
    inline UpdateInstanceRequest& setServerlessChargeType(string serverlessChargeType) { DARABONBA_PTR_SET_VALUE(serverlessChargeType_, serverlessChargeType) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline UpdateInstanceRequest& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEip Field Functions 
    bool hasSupportEip() const { return this->supportEip_ != nullptr;};
    void deleteSupportEip() { this->supportEip_ = nullptr;};
    inline bool getSupportEip() const { DARABONBA_PTR_GET_DEFAULT(supportEip_, false) };
    inline UpdateInstanceRequest& setSupportEip(bool supportEip) { DARABONBA_PTR_SET_VALUE(supportEip_, supportEip) };


    // supportTracing Field Functions 
    bool hasSupportTracing() const { return this->supportTracing_ != nullptr;};
    void deleteSupportTracing() { this->supportTracing_ = nullptr;};
    inline bool getSupportTracing() const { DARABONBA_PTR_GET_DEFAULT(supportTracing_, false) };
    inline UpdateInstanceRequest& setSupportTracing(bool supportTracing) { DARABONBA_PTR_SET_VALUE(supportTracing_, supportTracing) };


    // tracingStorageTime Field Functions 
    bool hasTracingStorageTime() const { return this->tracingStorageTime_ != nullptr;};
    void deleteTracingStorageTime() { this->tracingStorageTime_ = nullptr;};
    inline int32_t getTracingStorageTime() const { DARABONBA_PTR_GET_DEFAULT(tracingStorageTime_, 0) };
    inline UpdateInstanceRequest& setTracingStorageTime(int32_t tracingStorageTime) { DARABONBA_PTR_SET_VALUE(tracingStorageTime_, tracingStorageTime) };


  protected:
    // The client token.
    shared_ptr<string> clientToken_ {};
    // The deployment architecture of the Serverless instance. Valid values:
    // 
    // - shared: A shared architecture. This applies to reserved plus elastic (shared) and pay-as-you-go instances.
    // 
    // - dedicated: A dedicated architecture. This applies to reserved plus elastic (dedicated) instances.
    shared_ptr<string> edition_ {};
    // This feature is for dedicated instances only. Specifies whether to enable data encryption.
    // 
    // - You cannot change the EncryptedInstance and KmsKeyId properties of a dedicated instance. This includes changing its encryption status or downgrading it to a shared instance. Do not include the EncryptedInstance and KmsKeyId parameters when you call UpdateInstance to upgrade or downgrade a dedicated instance.
    // 
    // - The EncryptedInstance and KmsKeyId parameters are used only when you upgrade a shared instance to an encrypted dedicated instance.
    shared_ptr<bool> encryptedInstance_ {};
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The instance type. This parameter is required for subscription instances. Valid values:
    // 
    // - professional: Professional Edition
    // 
    // - enterprise: Enterprise Edition
    // 
    // - vip: Platinum Edition
    // 
    // You do not need to specify this parameter for pay-as-you-go instances.
    shared_ptr<string> instanceType_ {};
    // This feature is for dedicated instances only. This parameter is required if EncryptedInstance is set to true.
    // It specifies the ID of the KMS key used for data encryption.
    // The key must meet the following requirements:
    // 
    // - The KMS key must be in the same region as the ApsaraMQ for RabbitMQ instance.
    // 
    // - The key cannot be a service key.
    // 
    // - The key must be active.
    // 
    // - The key must be a symmetric key.
    // 
    // - The key must be used for encryption and decryption.
    // 
    // - If the KMS key expires or is deleted, data reads and writes will fail, and the ApsaraMQ for RabbitMQ instance will become unavailable.
    shared_ptr<string> kmsKeyId_ {};
    // The maximum number of connections.
    shared_ptr<int32_t> maxConnections_ {};
    // The peak TPS for public network traffic.
    shared_ptr<int64_t> maxEipTps_ {};
    // The peak transactions per second (TPS) for private network traffic.
    shared_ptr<int64_t> maxPrivateTps_ {};
    // The type of specification change. Valid values:
    // 
    // - UPGRADE: Upgrade
    // 
    // - DOWNGRADE: Downgrade
    // 
    // This parameter is required.
    shared_ptr<string> modifyType_ {};
    // The provisioned TPS capacity for a reserved plus elastic instance.
    shared_ptr<int32_t> provisionedCapacity_ {};
    // The maximum number of queues.
    shared_ptr<int32_t> queueCapacity_ {};
    // The billing method of the pay-as-you-go (Serverless) instance. Valid value:
    // 
    // - onDemand: Pay-as-you-go
    shared_ptr<string> serverlessChargeType_ {};
    // The message storage capacity. Unit: GB.
    shared_ptr<int32_t> storageSize_ {};
    // Specifies whether to enable Internet access.
    shared_ptr<bool> supportEip_ {};
    // Specifies whether to enable the message trace feature.
    shared_ptr<bool> supportTracing_ {};
    // The retention period for message traces. Unit: days.
    shared_ptr<int32_t> tracingStorageTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
