// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCESINSTANCESVO_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCESINSTANCESVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InstancePreivewResponseBodyDataInstancesInstancesVOTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewResponseBodyDataInstancesInstancesVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewResponseBodyDataInstancesInstancesVO& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CeaseStatus, ceaseStatus_);
      DARABONBA_PTR_TO_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_TO_JSON(EnableDlqTtl, enableDlqTtl_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InvisibleTime, invisibleTime_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaxBindingCount, maxBindingCount_);
      DARABONBA_PTR_TO_JSON(MaxConnectionChannelCount, maxConnectionChannelCount_);
      DARABONBA_PTR_TO_JSON(MaxConnectionCount, maxConnectionCount_);
      DARABONBA_PTR_TO_JSON(MaxConsumeRetryTime, maxConsumeRetryTime_);
      DARABONBA_PTR_TO_JSON(MaxEIPTPS, maxEIPTPS_);
      DARABONBA_PTR_TO_JSON(MaxExchangeCount, maxExchangeCount_);
      DARABONBA_PTR_TO_JSON(MaxMsgBodyByte, maxMsgBodyByte_);
      DARABONBA_PTR_TO_JSON(MaxMsgDelayHour, maxMsgDelayHour_);
      DARABONBA_PTR_TO_JSON(MaxMsgTraceTime, maxMsgTraceTime_);
      DARABONBA_PTR_TO_JSON(MaxQueue, maxQueue_);
      DARABONBA_PTR_TO_JSON(MaxQueueConsumerCount, maxQueueConsumerCount_);
      DARABONBA_PTR_TO_JSON(MaxRetryInterval, maxRetryInterval_);
      DARABONBA_PTR_TO_JSON(MaxRetryTimes, maxRetryTimes_);
      DARABONBA_PTR_TO_JSON(MaxTPS, maxTPS_);
      DARABONBA_PTR_TO_JSON(MaxVhost, maxVhost_);
      DARABONBA_PTR_TO_JSON(OrderCreate, orderCreate_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PrivateEndpoint, privateEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicEndpoint, publicEndpoint_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerlessRate, serverlessRate_);
      DARABONBA_PTR_TO_JSON(ServerlessSwitch, serverlessSwitch_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_TO_JSON(SupportMsgTrace, supportMsgTrace_);
      DARABONBA_PTR_TO_JSON(SupportOpenSourceAuth, supportOpenSourceAuth_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UsedQueue, usedQueue_);
      DARABONBA_PTR_TO_JSON(UsedVhost, usedVhost_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewResponseBodyDataInstancesInstancesVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CeaseStatus, ceaseStatus_);
      DARABONBA_PTR_FROM_JSON(ClassicEndpoint, classicEndpoint_);
      DARABONBA_PTR_FROM_JSON(EnableDlqTtl, enableDlqTtl_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InvisibleTime, invisibleTime_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaxBindingCount, maxBindingCount_);
      DARABONBA_PTR_FROM_JSON(MaxConnectionChannelCount, maxConnectionChannelCount_);
      DARABONBA_PTR_FROM_JSON(MaxConnectionCount, maxConnectionCount_);
      DARABONBA_PTR_FROM_JSON(MaxConsumeRetryTime, maxConsumeRetryTime_);
      DARABONBA_PTR_FROM_JSON(MaxEIPTPS, maxEIPTPS_);
      DARABONBA_PTR_FROM_JSON(MaxExchangeCount, maxExchangeCount_);
      DARABONBA_PTR_FROM_JSON(MaxMsgBodyByte, maxMsgBodyByte_);
      DARABONBA_PTR_FROM_JSON(MaxMsgDelayHour, maxMsgDelayHour_);
      DARABONBA_PTR_FROM_JSON(MaxMsgTraceTime, maxMsgTraceTime_);
      DARABONBA_PTR_FROM_JSON(MaxQueue, maxQueue_);
      DARABONBA_PTR_FROM_JSON(MaxQueueConsumerCount, maxQueueConsumerCount_);
      DARABONBA_PTR_FROM_JSON(MaxRetryInterval, maxRetryInterval_);
      DARABONBA_PTR_FROM_JSON(MaxRetryTimes, maxRetryTimes_);
      DARABONBA_PTR_FROM_JSON(MaxTPS, maxTPS_);
      DARABONBA_PTR_FROM_JSON(MaxVhost, maxVhost_);
      DARABONBA_PTR_FROM_JSON(OrderCreate, orderCreate_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PrivateEndpoint, privateEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicEndpoint, publicEndpoint_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerlessRate, serverlessRate_);
      DARABONBA_PTR_FROM_JSON(ServerlessSwitch, serverlessSwitch_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SupportEIP, supportEIP_);
      DARABONBA_PTR_FROM_JSON(SupportMsgTrace, supportMsgTrace_);
      DARABONBA_PTR_FROM_JSON(SupportOpenSourceAuth, supportOpenSourceAuth_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UsedQueue, usedQueue_);
      DARABONBA_PTR_FROM_JSON(UsedVhost, usedVhost_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    InstancePreivewResponseBodyDataInstancesInstancesVO() = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVO(const InstancePreivewResponseBodyDataInstancesInstancesVO &) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVO(InstancePreivewResponseBodyDataInstancesInstancesVO &&) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewResponseBodyDataInstancesInstancesVO() = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVO& operator=(const InstancePreivewResponseBodyDataInstancesInstancesVO &) = default ;
    InstancePreivewResponseBodyDataInstancesInstancesVO& operator=(InstancePreivewResponseBodyDataInstancesInstancesVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->ceaseStatus_ == nullptr && return this->classicEndpoint_ == nullptr && return this->enableDlqTtl_ == nullptr && return this->encrypted_ == nullptr && return this->expire_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->invisibleTime_ == nullptr && return this->kmsKeyId_ == nullptr
        && return this->maxBindingCount_ == nullptr && return this->maxConnectionChannelCount_ == nullptr && return this->maxConnectionCount_ == nullptr && return this->maxConsumeRetryTime_ == nullptr && return this->maxEIPTPS_ == nullptr
        && return this->maxExchangeCount_ == nullptr && return this->maxMsgBodyByte_ == nullptr && return this->maxMsgDelayHour_ == nullptr && return this->maxMsgTraceTime_ == nullptr && return this->maxQueue_ == nullptr
        && return this->maxQueueConsumerCount_ == nullptr && return this->maxRetryInterval_ == nullptr && return this->maxRetryTimes_ == nullptr && return this->maxTPS_ == nullptr && return this->maxVhost_ == nullptr
        && return this->orderCreate_ == nullptr && return this->orderType_ == nullptr && return this->privateEndpoint_ == nullptr && return this->publicEndpoint_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->serverlessRate_ == nullptr && return this->serverlessSwitch_ == nullptr && return this->status_ == nullptr && return this->storageSize_ == nullptr && return this->supportEIP_ == nullptr
        && return this->supportMsgTrace_ == nullptr && return this->supportOpenSourceAuth_ == nullptr && return this->tags_ == nullptr && return this->usedQueue_ == nullptr && return this->usedVhost_ == nullptr
        && return this->version_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // ceaseStatus Field Functions 
    bool hasCeaseStatus() const { return this->ceaseStatus_ != nullptr;};
    void deleteCeaseStatus() { this->ceaseStatus_ = nullptr;};
    inline bool ceaseStatus() const { DARABONBA_PTR_GET_DEFAULT(ceaseStatus_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setCeaseStatus(bool ceaseStatus) { DARABONBA_PTR_SET_VALUE(ceaseStatus_, ceaseStatus) };


    // classicEndpoint Field Functions 
    bool hasClassicEndpoint() const { return this->classicEndpoint_ != nullptr;};
    void deleteClassicEndpoint() { this->classicEndpoint_ = nullptr;};
    inline string classicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(classicEndpoint_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setClassicEndpoint(string classicEndpoint) { DARABONBA_PTR_SET_VALUE(classicEndpoint_, classicEndpoint) };


    // enableDlqTtl Field Functions 
    bool hasEnableDlqTtl() const { return this->enableDlqTtl_ != nullptr;};
    void deleteEnableDlqTtl() { this->enableDlqTtl_ = nullptr;};
    inline bool enableDlqTtl() const { DARABONBA_PTR_GET_DEFAULT(enableDlqTtl_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setEnableDlqTtl(bool enableDlqTtl) { DARABONBA_PTR_SET_VALUE(enableDlqTtl_, enableDlqTtl) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // invisibleTime Field Functions 
    bool hasInvisibleTime() const { return this->invisibleTime_ != nullptr;};
    void deleteInvisibleTime() { this->invisibleTime_ = nullptr;};
    inline int32_t invisibleTime() const { DARABONBA_PTR_GET_DEFAULT(invisibleTime_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setInvisibleTime(int32_t invisibleTime) { DARABONBA_PTR_SET_VALUE(invisibleTime_, invisibleTime) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maxBindingCount Field Functions 
    bool hasMaxBindingCount() const { return this->maxBindingCount_ != nullptr;};
    void deleteMaxBindingCount() { this->maxBindingCount_ = nullptr;};
    inline int32_t maxBindingCount() const { DARABONBA_PTR_GET_DEFAULT(maxBindingCount_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxBindingCount(int32_t maxBindingCount) { DARABONBA_PTR_SET_VALUE(maxBindingCount_, maxBindingCount) };


    // maxConnectionChannelCount Field Functions 
    bool hasMaxConnectionChannelCount() const { return this->maxConnectionChannelCount_ != nullptr;};
    void deleteMaxConnectionChannelCount() { this->maxConnectionChannelCount_ = nullptr;};
    inline int32_t maxConnectionChannelCount() const { DARABONBA_PTR_GET_DEFAULT(maxConnectionChannelCount_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxConnectionChannelCount(int32_t maxConnectionChannelCount) { DARABONBA_PTR_SET_VALUE(maxConnectionChannelCount_, maxConnectionChannelCount) };


    // maxConnectionCount Field Functions 
    bool hasMaxConnectionCount() const { return this->maxConnectionCount_ != nullptr;};
    void deleteMaxConnectionCount() { this->maxConnectionCount_ = nullptr;};
    inline int32_t maxConnectionCount() const { DARABONBA_PTR_GET_DEFAULT(maxConnectionCount_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxConnectionCount(int32_t maxConnectionCount) { DARABONBA_PTR_SET_VALUE(maxConnectionCount_, maxConnectionCount) };


    // maxConsumeRetryTime Field Functions 
    bool hasMaxConsumeRetryTime() const { return this->maxConsumeRetryTime_ != nullptr;};
    void deleteMaxConsumeRetryTime() { this->maxConsumeRetryTime_ = nullptr;};
    inline int32_t maxConsumeRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxConsumeRetryTime_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxConsumeRetryTime(int32_t maxConsumeRetryTime) { DARABONBA_PTR_SET_VALUE(maxConsumeRetryTime_, maxConsumeRetryTime) };


    // maxEIPTPS Field Functions 
    bool hasMaxEIPTPS() const { return this->maxEIPTPS_ != nullptr;};
    void deleteMaxEIPTPS() { this->maxEIPTPS_ = nullptr;};
    inline int32_t maxEIPTPS() const { DARABONBA_PTR_GET_DEFAULT(maxEIPTPS_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxEIPTPS(int32_t maxEIPTPS) { DARABONBA_PTR_SET_VALUE(maxEIPTPS_, maxEIPTPS) };


    // maxExchangeCount Field Functions 
    bool hasMaxExchangeCount() const { return this->maxExchangeCount_ != nullptr;};
    void deleteMaxExchangeCount() { this->maxExchangeCount_ = nullptr;};
    inline int32_t maxExchangeCount() const { DARABONBA_PTR_GET_DEFAULT(maxExchangeCount_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxExchangeCount(int32_t maxExchangeCount) { DARABONBA_PTR_SET_VALUE(maxExchangeCount_, maxExchangeCount) };


    // maxMsgBodyByte Field Functions 
    bool hasMaxMsgBodyByte() const { return this->maxMsgBodyByte_ != nullptr;};
    void deleteMaxMsgBodyByte() { this->maxMsgBodyByte_ = nullptr;};
    inline int32_t maxMsgBodyByte() const { DARABONBA_PTR_GET_DEFAULT(maxMsgBodyByte_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxMsgBodyByte(int32_t maxMsgBodyByte) { DARABONBA_PTR_SET_VALUE(maxMsgBodyByte_, maxMsgBodyByte) };


    // maxMsgDelayHour Field Functions 
    bool hasMaxMsgDelayHour() const { return this->maxMsgDelayHour_ != nullptr;};
    void deleteMaxMsgDelayHour() { this->maxMsgDelayHour_ = nullptr;};
    inline int32_t maxMsgDelayHour() const { DARABONBA_PTR_GET_DEFAULT(maxMsgDelayHour_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxMsgDelayHour(int32_t maxMsgDelayHour) { DARABONBA_PTR_SET_VALUE(maxMsgDelayHour_, maxMsgDelayHour) };


    // maxMsgTraceTime Field Functions 
    bool hasMaxMsgTraceTime() const { return this->maxMsgTraceTime_ != nullptr;};
    void deleteMaxMsgTraceTime() { this->maxMsgTraceTime_ = nullptr;};
    inline int32_t maxMsgTraceTime() const { DARABONBA_PTR_GET_DEFAULT(maxMsgTraceTime_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxMsgTraceTime(int32_t maxMsgTraceTime) { DARABONBA_PTR_SET_VALUE(maxMsgTraceTime_, maxMsgTraceTime) };


    // maxQueue Field Functions 
    bool hasMaxQueue() const { return this->maxQueue_ != nullptr;};
    void deleteMaxQueue() { this->maxQueue_ = nullptr;};
    inline int32_t maxQueue() const { DARABONBA_PTR_GET_DEFAULT(maxQueue_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxQueue(int32_t maxQueue) { DARABONBA_PTR_SET_VALUE(maxQueue_, maxQueue) };


    // maxQueueConsumerCount Field Functions 
    bool hasMaxQueueConsumerCount() const { return this->maxQueueConsumerCount_ != nullptr;};
    void deleteMaxQueueConsumerCount() { this->maxQueueConsumerCount_ = nullptr;};
    inline int32_t maxQueueConsumerCount() const { DARABONBA_PTR_GET_DEFAULT(maxQueueConsumerCount_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxQueueConsumerCount(int32_t maxQueueConsumerCount) { DARABONBA_PTR_SET_VALUE(maxQueueConsumerCount_, maxQueueConsumerCount) };


    // maxRetryInterval Field Functions 
    bool hasMaxRetryInterval() const { return this->maxRetryInterval_ != nullptr;};
    void deleteMaxRetryInterval() { this->maxRetryInterval_ = nullptr;};
    inline int32_t maxRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(maxRetryInterval_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxRetryInterval(int32_t maxRetryInterval) { DARABONBA_PTR_SET_VALUE(maxRetryInterval_, maxRetryInterval) };


    // maxRetryTimes Field Functions 
    bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
    void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
    inline int32_t maxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


    // maxTPS Field Functions 
    bool hasMaxTPS() const { return this->maxTPS_ != nullptr;};
    void deleteMaxTPS() { this->maxTPS_ = nullptr;};
    inline int32_t maxTPS() const { DARABONBA_PTR_GET_DEFAULT(maxTPS_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxTPS(int32_t maxTPS) { DARABONBA_PTR_SET_VALUE(maxTPS_, maxTPS) };


    // maxVhost Field Functions 
    bool hasMaxVhost() const { return this->maxVhost_ != nullptr;};
    void deleteMaxVhost() { this->maxVhost_ = nullptr;};
    inline int32_t maxVhost() const { DARABONBA_PTR_GET_DEFAULT(maxVhost_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setMaxVhost(int32_t maxVhost) { DARABONBA_PTR_SET_VALUE(maxVhost_, maxVhost) };


    // orderCreate Field Functions 
    bool hasOrderCreate() const { return this->orderCreate_ != nullptr;};
    void deleteOrderCreate() { this->orderCreate_ = nullptr;};
    inline int64_t orderCreate() const { DARABONBA_PTR_GET_DEFAULT(orderCreate_, 0L) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setOrderCreate(int64_t orderCreate) { DARABONBA_PTR_SET_VALUE(orderCreate_, orderCreate) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // privateEndpoint Field Functions 
    bool hasPrivateEndpoint() const { return this->privateEndpoint_ != nullptr;};
    void deletePrivateEndpoint() { this->privateEndpoint_ = nullptr;};
    inline string privateEndpoint() const { DARABONBA_PTR_GET_DEFAULT(privateEndpoint_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setPrivateEndpoint(string privateEndpoint) { DARABONBA_PTR_SET_VALUE(privateEndpoint_, privateEndpoint) };


    // publicEndpoint Field Functions 
    bool hasPublicEndpoint() const { return this->publicEndpoint_ != nullptr;};
    void deletePublicEndpoint() { this->publicEndpoint_ = nullptr;};
    inline string publicEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicEndpoint_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setPublicEndpoint(string publicEndpoint) { DARABONBA_PTR_SET_VALUE(publicEndpoint_, publicEndpoint) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessRate Field Functions 
    bool hasServerlessRate() const { return this->serverlessRate_ != nullptr;};
    void deleteServerlessRate() { this->serverlessRate_ = nullptr;};
    inline double serverlessRate() const { DARABONBA_PTR_GET_DEFAULT(serverlessRate_, 0.0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setServerlessRate(double serverlessRate) { DARABONBA_PTR_SET_VALUE(serverlessRate_, serverlessRate) };


    // serverlessSwitch Field Functions 
    bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
    void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
    inline bool serverlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEIP Field Functions 
    bool hasSupportEIP() const { return this->supportEIP_ != nullptr;};
    void deleteSupportEIP() { this->supportEIP_ = nullptr;};
    inline bool supportEIP() const { DARABONBA_PTR_GET_DEFAULT(supportEIP_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setSupportEIP(bool supportEIP) { DARABONBA_PTR_SET_VALUE(supportEIP_, supportEIP) };


    // supportMsgTrace Field Functions 
    bool hasSupportMsgTrace() const { return this->supportMsgTrace_ != nullptr;};
    void deleteSupportMsgTrace() { this->supportMsgTrace_ = nullptr;};
    inline bool supportMsgTrace() const { DARABONBA_PTR_GET_DEFAULT(supportMsgTrace_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setSupportMsgTrace(bool supportMsgTrace) { DARABONBA_PTR_SET_VALUE(supportMsgTrace_, supportMsgTrace) };


    // supportOpenSourceAuth Field Functions 
    bool hasSupportOpenSourceAuth() const { return this->supportOpenSourceAuth_ != nullptr;};
    void deleteSupportOpenSourceAuth() { this->supportOpenSourceAuth_ = nullptr;};
    inline bool supportOpenSourceAuth() const { DARABONBA_PTR_GET_DEFAULT(supportOpenSourceAuth_, false) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setSupportOpenSourceAuth(bool supportOpenSourceAuth) { DARABONBA_PTR_SET_VALUE(supportOpenSourceAuth_, supportOpenSourceAuth) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags) };
    inline Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags tags() { DARABONBA_PTR_GET(tags_, Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setTags(const Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setTags(Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // usedQueue Field Functions 
    bool hasUsedQueue() const { return this->usedQueue_ != nullptr;};
    void deleteUsedQueue() { this->usedQueue_ = nullptr;};
    inline int32_t usedQueue() const { DARABONBA_PTR_GET_DEFAULT(usedQueue_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setUsedQueue(int32_t usedQueue) { DARABONBA_PTR_SET_VALUE(usedQueue_, usedQueue) };


    // usedVhost Field Functions 
    bool hasUsedVhost() const { return this->usedVhost_ != nullptr;};
    void deleteUsedVhost() { this->usedVhost_ = nullptr;};
    inline int32_t usedVhost() const { DARABONBA_PTR_GET_DEFAULT(usedVhost_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setUsedVhost(int32_t usedVhost) { DARABONBA_PTR_SET_VALUE(usedVhost_, usedVhost) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline InstancePreivewResponseBodyDataInstancesInstancesVO& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<bool> ceaseStatus_ = nullptr;
    std::shared_ptr<string> classicEndpoint_ = nullptr;
    std::shared_ptr<bool> enableDlqTtl_ = nullptr;
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> invisibleTime_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    std::shared_ptr<int32_t> maxBindingCount_ = nullptr;
    std::shared_ptr<int32_t> maxConnectionChannelCount_ = nullptr;
    std::shared_ptr<int32_t> maxConnectionCount_ = nullptr;
    std::shared_ptr<int32_t> maxConsumeRetryTime_ = nullptr;
    std::shared_ptr<int32_t> maxEIPTPS_ = nullptr;
    std::shared_ptr<int32_t> maxExchangeCount_ = nullptr;
    std::shared_ptr<int32_t> maxMsgBodyByte_ = nullptr;
    std::shared_ptr<int32_t> maxMsgDelayHour_ = nullptr;
    std::shared_ptr<int32_t> maxMsgTraceTime_ = nullptr;
    std::shared_ptr<int32_t> maxQueue_ = nullptr;
    std::shared_ptr<int32_t> maxQueueConsumerCount_ = nullptr;
    std::shared_ptr<int32_t> maxRetryInterval_ = nullptr;
    std::shared_ptr<int32_t> maxRetryTimes_ = nullptr;
    std::shared_ptr<int32_t> maxTPS_ = nullptr;
    std::shared_ptr<int32_t> maxVhost_ = nullptr;
    std::shared_ptr<int64_t> orderCreate_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> privateEndpoint_ = nullptr;
    std::shared_ptr<string> publicEndpoint_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<double> serverlessRate_ = nullptr;
    std::shared_ptr<bool> serverlessSwitch_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    std::shared_ptr<bool> supportEIP_ = nullptr;
    std::shared_ptr<bool> supportMsgTrace_ = nullptr;
    std::shared_ptr<bool> supportOpenSourceAuth_ = nullptr;
    std::shared_ptr<Models::InstancePreivewResponseBodyDataInstancesInstancesVOTags> tags_ = nullptr;
    std::shared_ptr<int32_t> usedQueue_ = nullptr;
    std::shared_ptr<int32_t> usedVhost_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
