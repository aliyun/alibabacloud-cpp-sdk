// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthModel, authModel_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(ListenerMode, listenerMode_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxEipTps, maxEipTps_);
      DARABONBA_PTR_TO_JSON(MaxPrivateTps, maxPrivateTps_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodCycle, periodCycle_);
      DARABONBA_PTR_TO_JSON(ProvisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_TO_JSON(QueueCapacity, queueCapacity_);
      DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_TO_JSON(RenewalDurationUnit, renewalDurationUnit_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServerlessChargeType, serverlessChargeType_);
      DARABONBA_PTR_TO_JSON(ServerlessSwitch, serverlessSwitch_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SupportEip, supportEip_);
      DARABONBA_PTR_TO_JSON(SupportTracing, supportTracing_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TracingStorageTime, tracingStorageTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthModel, authModel_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EncryptedInstance, encryptedInstance_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(ListenerMode, listenerMode_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxEipTps, maxEipTps_);
      DARABONBA_PTR_FROM_JSON(MaxPrivateTps, maxPrivateTps_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodCycle, periodCycle_);
      DARABONBA_PTR_FROM_JSON(ProvisionedCapacity, provisionedCapacity_);
      DARABONBA_PTR_FROM_JSON(QueueCapacity, queueCapacity_);
      DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_FROM_JSON(RenewalDurationUnit, renewalDurationUnit_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerlessChargeType, serverlessChargeType_);
      DARABONBA_PTR_FROM_JSON(ServerlessSwitch, serverlessSwitch_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SupportEip, supportEip_);
      DARABONBA_PTR_FROM_JSON(SupportTracing, supportTracing_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TracingStorageTime, tracingStorageTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIdsShrink_);
    };
    CreateInstanceShrinkRequest() = default ;
    CreateInstanceShrinkRequest(const CreateInstanceShrinkRequest &) = default ;
    CreateInstanceShrinkRequest(CreateInstanceShrinkRequest &&) = default ;
    CreateInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceShrinkRequest() = default ;
    CreateInstanceShrinkRequest& operator=(const CreateInstanceShrinkRequest &) = default ;
    CreateInstanceShrinkRequest& operator=(CreateInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authModel_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->clientToken_ == nullptr && this->edition_ == nullptr && this->encryptedInstance_ == nullptr
        && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->kmsKeyId_ == nullptr && this->listenerMode_ == nullptr && this->maxConnections_ == nullptr
        && this->maxEipTps_ == nullptr && this->maxPrivateTps_ == nullptr && this->paymentType_ == nullptr && this->period_ == nullptr && this->periodCycle_ == nullptr
        && this->provisionedCapacity_ == nullptr && this->queueCapacity_ == nullptr && this->renewStatus_ == nullptr && this->renewalDurationUnit_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->serverlessChargeType_ == nullptr && this->serverlessSwitch_ == nullptr && this->storageSize_ == nullptr && this->supportEip_ == nullptr
        && this->supportTracing_ == nullptr && this->tagsShrink_ == nullptr && this->tracingStorageTime_ == nullptr && this->vpcId_ == nullptr && this->vswitchIdsShrink_ == nullptr; };
    // authModel Field Functions 
    bool hasAuthModel() const { return this->authModel_ != nullptr;};
    void deleteAuthModel() { this->authModel_ = nullptr;};
    inline string getAuthModel() const { DARABONBA_PTR_GET_DEFAULT(authModel_, "") };
    inline CreateInstanceShrinkRequest& setAuthModel(string authModel) { DARABONBA_PTR_SET_VALUE(authModel_, authModel) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateInstanceShrinkRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateInstanceShrinkRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // encryptedInstance Field Functions 
    bool hasEncryptedInstance() const { return this->encryptedInstance_ != nullptr;};
    void deleteEncryptedInstance() { this->encryptedInstance_ = nullptr;};
    inline bool getEncryptedInstance() const { DARABONBA_PTR_GET_DEFAULT(encryptedInstance_, false) };
    inline CreateInstanceShrinkRequest& setEncryptedInstance(bool encryptedInstance) { DARABONBA_PTR_SET_VALUE(encryptedInstance_, encryptedInstance) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateInstanceShrinkRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // listenerMode Field Functions 
    bool hasListenerMode() const { return this->listenerMode_ != nullptr;};
    void deleteListenerMode() { this->listenerMode_ = nullptr;};
    inline string getListenerMode() const { DARABONBA_PTR_GET_DEFAULT(listenerMode_, "") };
    inline CreateInstanceShrinkRequest& setListenerMode(string listenerMode) { DARABONBA_PTR_SET_VALUE(listenerMode_, listenerMode) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline CreateInstanceShrinkRequest& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxEipTps Field Functions 
    bool hasMaxEipTps() const { return this->maxEipTps_ != nullptr;};
    void deleteMaxEipTps() { this->maxEipTps_ = nullptr;};
    inline int64_t getMaxEipTps() const { DARABONBA_PTR_GET_DEFAULT(maxEipTps_, 0L) };
    inline CreateInstanceShrinkRequest& setMaxEipTps(int64_t maxEipTps) { DARABONBA_PTR_SET_VALUE(maxEipTps_, maxEipTps) };


    // maxPrivateTps Field Functions 
    bool hasMaxPrivateTps() const { return this->maxPrivateTps_ != nullptr;};
    void deleteMaxPrivateTps() { this->maxPrivateTps_ = nullptr;};
    inline int64_t getMaxPrivateTps() const { DARABONBA_PTR_GET_DEFAULT(maxPrivateTps_, 0L) };
    inline CreateInstanceShrinkRequest& setMaxPrivateTps(int64_t maxPrivateTps) { DARABONBA_PTR_SET_VALUE(maxPrivateTps_, maxPrivateTps) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateInstanceShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodCycle Field Functions 
    bool hasPeriodCycle() const { return this->periodCycle_ != nullptr;};
    void deletePeriodCycle() { this->periodCycle_ = nullptr;};
    inline string getPeriodCycle() const { DARABONBA_PTR_GET_DEFAULT(periodCycle_, "") };
    inline CreateInstanceShrinkRequest& setPeriodCycle(string periodCycle) { DARABONBA_PTR_SET_VALUE(periodCycle_, periodCycle) };


    // provisionedCapacity Field Functions 
    bool hasProvisionedCapacity() const { return this->provisionedCapacity_ != nullptr;};
    void deleteProvisionedCapacity() { this->provisionedCapacity_ = nullptr;};
    inline int32_t getProvisionedCapacity() const { DARABONBA_PTR_GET_DEFAULT(provisionedCapacity_, 0) };
    inline CreateInstanceShrinkRequest& setProvisionedCapacity(int32_t provisionedCapacity) { DARABONBA_PTR_SET_VALUE(provisionedCapacity_, provisionedCapacity) };


    // queueCapacity Field Functions 
    bool hasQueueCapacity() const { return this->queueCapacity_ != nullptr;};
    void deleteQueueCapacity() { this->queueCapacity_ = nullptr;};
    inline int32_t getQueueCapacity() const { DARABONBA_PTR_GET_DEFAULT(queueCapacity_, 0) };
    inline CreateInstanceShrinkRequest& setQueueCapacity(int32_t queueCapacity) { DARABONBA_PTR_SET_VALUE(queueCapacity_, queueCapacity) };


    // renewStatus Field Functions 
    bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
    void deleteRenewStatus() { this->renewStatus_ = nullptr;};
    inline string getRenewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
    inline CreateInstanceShrinkRequest& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


    // renewalDurationUnit Field Functions 
    bool hasRenewalDurationUnit() const { return this->renewalDurationUnit_ != nullptr;};
    void deleteRenewalDurationUnit() { this->renewalDurationUnit_ = nullptr;};
    inline string getRenewalDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalDurationUnit_, "") };
    inline CreateInstanceShrinkRequest& setRenewalDurationUnit(string renewalDurationUnit) { DARABONBA_PTR_SET_VALUE(renewalDurationUnit_, renewalDurationUnit) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateInstanceShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serverlessChargeType Field Functions 
    bool hasServerlessChargeType() const { return this->serverlessChargeType_ != nullptr;};
    void deleteServerlessChargeType() { this->serverlessChargeType_ = nullptr;};
    inline string getServerlessChargeType() const { DARABONBA_PTR_GET_DEFAULT(serverlessChargeType_, "") };
    inline CreateInstanceShrinkRequest& setServerlessChargeType(string serverlessChargeType) { DARABONBA_PTR_SET_VALUE(serverlessChargeType_, serverlessChargeType) };


    // serverlessSwitch Field Functions 
    bool hasServerlessSwitch() const { return this->serverlessSwitch_ != nullptr;};
    void deleteServerlessSwitch() { this->serverlessSwitch_ = nullptr;};
    inline bool getServerlessSwitch() const { DARABONBA_PTR_GET_DEFAULT(serverlessSwitch_, false) };
    inline CreateInstanceShrinkRequest& setServerlessSwitch(bool serverlessSwitch) { DARABONBA_PTR_SET_VALUE(serverlessSwitch_, serverlessSwitch) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline CreateInstanceShrinkRequest& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // supportEip Field Functions 
    bool hasSupportEip() const { return this->supportEip_ != nullptr;};
    void deleteSupportEip() { this->supportEip_ = nullptr;};
    inline bool getSupportEip() const { DARABONBA_PTR_GET_DEFAULT(supportEip_, false) };
    inline CreateInstanceShrinkRequest& setSupportEip(bool supportEip) { DARABONBA_PTR_SET_VALUE(supportEip_, supportEip) };


    // supportTracing Field Functions 
    bool hasSupportTracing() const { return this->supportTracing_ != nullptr;};
    void deleteSupportTracing() { this->supportTracing_ = nullptr;};
    inline bool getSupportTracing() const { DARABONBA_PTR_GET_DEFAULT(supportTracing_, false) };
    inline CreateInstanceShrinkRequest& setSupportTracing(bool supportTracing) { DARABONBA_PTR_SET_VALUE(supportTracing_, supportTracing) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateInstanceShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // tracingStorageTime Field Functions 
    bool hasTracingStorageTime() const { return this->tracingStorageTime_ != nullptr;};
    void deleteTracingStorageTime() { this->tracingStorageTime_ = nullptr;};
    inline int32_t getTracingStorageTime() const { DARABONBA_PTR_GET_DEFAULT(tracingStorageTime_, 0) };
    inline CreateInstanceShrinkRequest& setTracingStorageTime(int32_t tracingStorageTime) { DARABONBA_PTR_SET_VALUE(tracingStorageTime_, tracingStorageTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIdsShrink Field Functions 
    bool hasVswitchIdsShrink() const { return this->vswitchIdsShrink_ != nullptr;};
    void deleteVswitchIdsShrink() { this->vswitchIdsShrink_ = nullptr;};
    inline string getVswitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vswitchIdsShrink_, "") };
    inline CreateInstanceShrinkRequest& setVswitchIdsShrink(string vswitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vswitchIdsShrink_, vswitchIdsShrink) };


  protected:
    shared_ptr<string> authModel_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   true: enables auto-renewal.
    // *   false: disables auto-renewal. If you select this value, you must manually renew the instance.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period. The unit of the auto-renewal period is specified by RenewalDurationUnit. Default value: Month.
    // 
    // >  This parameter takes effect only if you set AutoRenew to true. Default value: 1.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> edition_ {};
    // Specifies whether to enable storage encryption for the instance. This parameter is available only for exclusive instances.
    shared_ptr<bool> encryptedInstance_ {};
    // The name of the instance. We recommend that you specify a name that does not exceed 64 characters in length.
    shared_ptr<string> instanceName_ {};
    // The instance edition. Valid values if you create a subscription instance:
    // 
    // *   professional: Professional Edition.
    // *   enterprise: Enterprise Edition
    // *   vip: Enterprise Platinum Edition
    // 
    // If you create a serverless instance, you do not need to specify this parameter.
    shared_ptr<string> instanceType_ {};
    // The ID of the Key Management Service (KMS)-managed key used for storage encryption. This parameter is available only for exclusive instances and required only if you set EncryptedInstance to true. The key must meet the following conditions:
    // 
    // *   The key cannot be a service key.
    // *   The key must be in the Enabled state.
    // *   The key must be a symmetric key.
    // *   The key must be used for encryption and decryption.
    // *   After the key is expired or deleted, you cannot read or write data and exceptions can occur in the ApsaraMQ for RabbitMQ instance.
    shared_ptr<string> kmsKeyId_ {};
    shared_ptr<string> listenerMode_ {};
    // The maximum number of connections that can be established to the instance.
    // 
    // Configure this parameter based on the values provided on the [ApsaraMQ for RocketMQ buy page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
    shared_ptr<int32_t> maxConnections_ {};
    // The maximum number of Internet-based TPS on the instance.
    // 
    // Configure this parameter based on the values provided on the [ApsaraMQ for RocketMQ buy page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
    shared_ptr<int64_t> maxEipTps_ {};
    // The maximum number of virtual private cloud (VPC)-based transactions per second (TPS) on the instance.
    // 
    // Configure this parameter based on the values provided on the [ApsaraMQ for RocketMQ buy page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
    shared_ptr<int64_t> maxPrivateTps_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   Subscription: subscription instance
    // *   PayAsYouGo: serverless instance
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The subscription period. The unit of the subscription period is specified by periodCycle.
    // 
    // >  This parameter takes effect only if you set PaymentType to Subscription. Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // This parameter is valid only if you set PaymentType to Subscription. Default value: Month.
    shared_ptr<string> periodCycle_ {};
    shared_ptr<int32_t> provisionedCapacity_ {};
    // The number of queues on the instance.
    // 
    // Configure this parameter based on the values provided on the [ApsaraMQ for RocketMQ buy page](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre).
    shared_ptr<int32_t> queueCapacity_ {};
    // The renewal status. This parameter is the same as AutoRenew. You can configure one of these parameters. Valid value:
    // 
    // *   AutoRenewal
    // 
    // >  If you configure both this parameter and AutoRenew, the value of this parameter is used.
    shared_ptr<string> renewStatus_ {};
    // The unit of the auto-renewal period. Valid values:
    // 
    // *   Month
    // *   Year
    shared_ptr<string> renewalDurationUnit_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The billing method of the serverless instance. Valid value:
    // 
    // *   onDemand: You are charged based on your actual usage.
    shared_ptr<string> serverlessChargeType_ {};
    shared_ptr<bool> serverlessSwitch_ {};
    // The storage capacity. Unit: GB. Valid values:
    // 
    // *   Professional Edition and Enterprise Edition instances: Set the value to 0.
    // 
    // >  The value 0 specifies that storage space is available for Professional Edition and Enterprise Edition instances, but no storage fees are generated.
    // 
    // *   Enterprise Platinum Edition instances: Set the value to m × 100, where m is an integer that ranges from 7 to 28.
    shared_ptr<int32_t> storageSize_ {};
    // Specifies whether elastic IP addresses (EIPs) are supported. Valid values:
    // 
    // *   True
    // *   False
    shared_ptr<bool> supportEip_ {};
    // Specifies whether to enable the message trace feature. Valid values:
    // 
    // *   true
    // *   false
    // 
    // > 
    // 
    // *   Enterprise Platinum Edition instances allow you to retain message traces for 15 days free of charge. If you create an Enterprise Platinum Edition instance, you can set this parameter only to true and TracingStorageTime only to 15.
    // 
    // *   For instances of other editions, you can set this parameter to true or false.
    shared_ptr<bool> supportTracing_ {};
    shared_ptr<string> tagsShrink_ {};
    // The retention period of messages. Unit: days. Valid values:
    // 
    // *   3
    // *   7
    // *   15
    // 
    // This parameter is valid only if you set SupportTracing to true.
    shared_ptr<int32_t> tracingStorageTime_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // This parameter is required.
    shared_ptr<string> vswitchIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
