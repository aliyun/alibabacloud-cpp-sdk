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
    // The renewal method. Valid values:
    // 
    // - `true`: Enables auto-renewal.
    // 
    // - `false`: Disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. The `RenewalDurationUnit` parameter specifies the unit, which defaults to month.
    // 
    // > This parameter is required if you set `AutoRenew` to `true`. The default value is 1.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token used to ensure request idempotence.
    shared_ptr<string> clientToken_ {};
    // The deployment architecture for the serverless instance. Valid values:
    // 
    // - `shared`: The shared architecture, which is applicable to reserved and elastic (shared) instances and pay-as-you-go instances.
    // 
    // - `dedicated`: The dedicated architecture, which is applicable to reserved and elastic (dedicated) instances.
    shared_ptr<string> edition_ {};
    // This parameter is applicable only to dedicated instances. Specifies whether to enable data-at-rest encryption for the instance.
    shared_ptr<bool> encryptedInstance_ {};
    // The name of the instance. The name can be up to 64 characters long.
    shared_ptr<string> instanceName_ {};
    // The instance type.
    // This parameter is required for subscription instances. Valid values:
    // 
    // - `professional`: Professional Edition
    // 
    // - `enterprise`: Enterprise Edition
    // 
    // - `vip`: Platinum Edition
    // 
    // You do not need to specify this parameter for serverless instances.
    shared_ptr<string> instanceType_ {};
    // This parameter applies only to dedicated instances and is required if `EncryptedInstance` is set to `true`. It specifies the ID of the KMS key used for data-at-rest encryption. The key must meet the following requirements:
    // 
    // - The key cannot be a service key.
    // 
    // - The key must be in the Enabled state.
    // 
    // - The key must be a symmetric key, not an asymmetric key.
    // 
    // - The key usage must be for encryption and decryption.
    // 
    // - If the KMS key expires or is deleted, data reads and writes will become unavailable, and the ApsaraMQ for RabbitMQ instance may become inoperable.
    shared_ptr<string> kmsKeyId_ {};
    // Specifies whether to enable only the TLS-encrypted port. This parameter applies only to reserved and elastic (dedicated) instances, and Platinum Edition instances.
    shared_ptr<string> listenerMode_ {};
    // The maximum number of connections.
    // 
    // For information about the valid values, see the instance specifications on the [ApsaraMQ for RabbitMQ](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre) product page.
    shared_ptr<int32_t> maxConnections_ {};
    // The peak transactions per second (TPS) of the instance over the public network.
    // 
    // For information about the valid values, see the instance specifications on the [ApsaraMQ for RabbitMQ](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre) product page.
    shared_ptr<int64_t> maxEipTps_ {};
    // The peak transactions per second (TPS) of the instance over a private network.
    // 
    // For information about the valid values, see the instance specifications on the [ApsaraMQ for RabbitMQ](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre) product page.
    shared_ptr<int64_t> maxPrivateTps_ {};
    // The billing method of the instance. Valid values:
    // 
    // - `Subscription`: The subscription-based billing method.
    // 
    // - `PayAsYouGo`: The pay-as-you-go method for serverless instances.
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The subscription duration. The `PeriodCycle` parameter specifies the unit.
    // 
    // > This parameter is required if you set `PaymentType` to `Subscription`. The default value is 1.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration. Valid values:
    // 
    // - `Month`: month
    // 
    // - `Year`: year
    // 
    // This parameter is required if you set `PaymentType` to `Subscription`. The default value is `Month`.
    shared_ptr<string> periodCycle_ {};
    // The provisioned TPS capacity for a reserved and elastic instance.
    shared_ptr<int32_t> provisionedCapacity_ {};
    // The queue capacity of the instance.
    // 
    // For information about the valid values, see the instance specifications on the [ApsaraMQ for RabbitMQ](https://common-buy.aliyun.com/?commodityCode=ons_onsproxy_pre) product page.
    shared_ptr<int32_t> queueCapacity_ {};
    // The renewal status. This parameter is equivalent to `AutoRenew`. Valid value:
    // 
    // - `AutoRenewal`: Enables auto-renewal.
    // 
    // > Both `AutoRenew` and `RenewStatus` specify the renewal method. If you specify both parameters, the value of `RenewStatus` takes precedence.
    shared_ptr<string> renewStatus_ {};
    // The unit of the auto-renewal duration. Valid values:
    // 
    // - `Month`: month
    // 
    // - `Year`: year
    shared_ptr<string> renewalDurationUnit_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the security group. This security group is used for the PrivateLink-based endpoint. The security group must meet the following requirements:
    // 
    // 1. Add an inbound rule to allow traffic on TCP ports 5672 and 5671.
    // 
    // 2. Managed security groups are not supported.
    // 
    // 3. The security group must belong to the specified VPC.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
    // The billing type of the serverless instance. Valid value:
    // 
    // - `onDemand`: pay-as-you-go
    shared_ptr<string> serverlessChargeType_ {};
    shared_ptr<bool> serverlessSwitch_ {};
    // The message storage space. Unit: GB. Valid values:
    // 
    // - Professional Edition and Enterprise Edition instances: The value is fixed at 0.
    // 
    // > A value of 0 means storage is not charged for Professional Edition and Enterprise Edition instances; it does not mean the instances lack storage space.
    // 
    // - Platinum Edition instances: m × 100, where m is an integer from 7 to 28.
    shared_ptr<int32_t> storageSize_ {};
    // Specifies whether to enable access over the public network. Valid values:
    // 
    // - `true`: Enables access over the public network.
    // 
    // - `false`: Disables access over the public network.
    shared_ptr<bool> supportEip_ {};
    // Specifies whether to enable the message trace feature. Valid values:
    // 
    // - `true`: Enables the message trace feature.
    // 
    // - `false`: Disables the message trace feature.
    // 
    // > * The message trace feature is included for 15 days at no charge on Platinum Edition instances. For these instances, you must enable this feature and set the retention period to 15 days.
    // 
    // - For other instance types, you can enable or disable this feature.
    shared_ptr<bool> supportTracing_ {};
    // The resource tags.
    shared_ptr<string> tagsShrink_ {};
    // The retention period of message traces. Unit: days. Valid values:
    // 
    // - `3`
    // 
    // - `7`
    // 
    // - `15`
    // 
    // This parameter is required if you set `SupportTracing` to `true`.
    shared_ptr<int32_t> tracingStorageTime_ {};
    // The ID of the VPC. This parameter is used to create a PrivateLink-based endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The vSwitch IDs used to create a PrivateLink-based endpoint when you create the instance. The vSwitches must meet the following requirements:
    // 
    // 1. You must specify two vSwitches that reside in different availability zones, except for regions that have only a single availability zone.
    // 
    // 2. The vSwitches must belong to the specified VPC.
    // 
    // 3. The vSwitches must be in the Available state.
    // 
    // 4. Each vSwitch must have at least 20 available IP addresses.
    // 
    // 5. The availability zones for the specified vSwitches must support NLB instance creation.
    // 
    // This parameter is required.
    shared_ptr<string> vswitchIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
