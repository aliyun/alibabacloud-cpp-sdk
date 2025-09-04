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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->edition_ != nullptr && this->encryptedInstance_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->kmsKeyId_ != nullptr
        && this->maxConnections_ != nullptr && this->maxEipTps_ != nullptr && this->maxPrivateTps_ != nullptr && this->modifyType_ != nullptr && this->provisionedCapacity_ != nullptr
        && this->queueCapacity_ != nullptr && this->serverlessChargeType_ != nullptr && this->storageSize_ != nullptr && this->supportEip_ != nullptr && this->supportTracing_ != nullptr
        && this->tracingStorageTime_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline UpdateInstanceRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // encryptedInstance Field Functions 
    bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
    void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
    inline bool encryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
    inline UpdateInstanceRequest& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline UpdateInstanceRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline UpdateInstanceRequest& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxEipTps Field Functions 
    bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
    void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
    inline int64_t maxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0L) };
    inline UpdateInstanceRequest& setMaxEipTps(int64_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


    // maxPrivateTps Field Functions 
    bool hasMaxPrivateTps() const { return this->maxPrivateTps_ != nullptr;};
    void deleteMaxPrivateTps() { this->maxPrivateTps_ = nullptr;};
    inline int64_t maxPrivateTps() const { DARABONBA_PTR_GET_DEFAULT(maxPrivateTps_, 0L) };
    inline UpdateInstanceRequest& setMaxPrivateTps(int64_t maxPrivateTps) { DARABONBA_PTR_SET_VALUE(maxPrivateTps_, maxPrivateTps) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string modifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline UpdateInstanceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int32_t provisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
    inline UpdateInstanceRequest& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // queueCapacity Field Functions 
    bool hasQueueCapacity() const { return this->queueCapacity_ != nullptr;};
    void deleteQueueCapacity() { this->queueCapacity_ = nullptr;};
    inline int32_t queueCapacity() const { DARABONBA_PTR_GET_DEFAULT(queueCapacity_, 0) };
    inline UpdateInstanceRequest& setQueueCapacity(int32_t queueCapacity) { DARABONBA_PTR_SET_VALUE(queueCapacity_, queueCapacity) };


    // serverlessChargeType Field Functions 
    bool hasServerlessChargeType() const { return this->serverlessChargeType_ != nullptr;};
    void deleteServerlessChargeType() { this->serverlessChargeType_ = nullptr;};
    inline string serverlessChargeType() const { DARABONBA_PTR_GET_DEFAULT(serverlessChargeType_, "") };
    inline UpdateInstanceRequest& setServerlessChargeType(string serverlessChargeType) { DARABONBA_PTR_SET_VALUE(serverlessChargeType_, serverlessChargeType) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline UpdateInstanceRequest& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEip Field Functions 
    bool hasSupportEip() const { return this->supportEip_ != nullptr;};
    void deleteSupportEip() { this->supportEip_ = nullptr;};
    inline bool supportEip() const { DARABONBA_PTR_GET_DEFAULT(supportEip_, false) };
    inline UpdateInstanceRequest& setSupportEip(bool supportEip) { DARABONBA_PTR_SET_VALUE(supportEip_, supportEip) };


    // supportTracing Field Functions 
    bool hasSupportTracing() const { return this->supportTracing_ != nullptr;};
    void deleteSupportTracing() { this->supportTracing_ = nullptr;};
    inline bool supportTracing() const { DARABONBA_PTR_GET_DEFAULT(supportTracing_, false) };
    inline UpdateInstanceRequest& setSupportTracing(bool supportTracing) { DARABONBA_PTR_SET_VALUE(supportTracing_, supportTracing) };


    // tracingStorageTime Field Functions 
    bool hasTracingStorageTime() const { return this->tracingStorageTime_ != nullptr;};
    void deleteTracingStorageTime() { this->tracingStorageTime_ = nullptr;};
    inline int32_t tracingStorageTime() const { DARABONBA_PTR_GET_DEFAULT(tracingStorageTime_, 0) };
    inline UpdateInstanceRequest& setTracingStorageTime(int32_t tracingStorageTime) { DARABONBA_PTR_SET_VALUE(tracingStorageTime_, tracingStorageTime) };


  protected:
    // The client token.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // 实例是否开通数据存储加密功能
    std::shared_ptr<bool> encryptedInstance_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance edition. Valid values for subscription instances:
    // 
    // *   professional: Professional Edition
    // *   enterprise: Enterprise Edition
    // *   vip: Enterprise Platinum Edition.
    // 
    // If your instance is a pay-as-you-go instance, you do not need to configure this parameter.
    std::shared_ptr<string> instanceType_ = nullptr;
    // 使用同地域下KMS密钥ID
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // The maximum number of connections that can be created on the instance.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The peak TPS for accessing the instance over the Internet.
    std::shared_ptr<int64_t> maxEipTps_ = nullptr;
    // The peak transactions per second (TPS) for accessing the instance in a virtual private cloud (VPC).
    std::shared_ptr<int64_t> maxPrivateTps_ = nullptr;
    // The type of the configuration change. Valid values:
    // 
    // *   UPGRADE
    // *   DOWNGRADE
    // 
    // This parameter is required.
    std::shared_ptr<string> modifyType_ = nullptr;
    std::shared_ptr<int32_t> provisionedCapacity_ = nullptr;
    // The maximum number of queues that can be created on the instance.
    std::shared_ptr<int32_t> queueCapacity_ = nullptr;
    // The billing method of the serverless instance. Valid values:
    // 
    // *   onDemand: You are charged based on your actual usage.
    std::shared_ptr<string> serverlessChargeType_ = nullptr;
    // The size of the storage space that can be used to store messages.
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    // Specifies whether elastic IP addresses (EIPs) are supported.
    std::shared_ptr<bool> supportEip_ = nullptr;
    // Specifies whether to enable the message trace feature.
    std::shared_ptr<bool> supportTracing_ = nullptr;
    // The retention period of message traces.
    // 
    // Valid values:
    // 
    // *   3
    // *   7
    // *   15
    std::shared_ptr<int32_t> tracingStorageTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
