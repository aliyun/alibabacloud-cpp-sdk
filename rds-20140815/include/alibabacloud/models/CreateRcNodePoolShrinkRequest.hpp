// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCNODEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCNODEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRCNodePoolShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateRCNodePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(NodePoolName, nodePoolName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCNodePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDiskShrink_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(NodePoolName, nodePoolName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SupportCase, supportCase_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDiskShrink_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateRCNodePoolShrinkRequest() = default ;
    CreateRCNodePoolShrinkRequest(const CreateRCNodePoolShrinkRequest &) = default ;
    CreateRCNodePoolShrinkRequest(CreateRCNodePoolShrinkRequest &&) = default ;
    CreateRCNodePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCNodePoolShrinkRequest() = default ;
    CreateRCNodePoolShrinkRequest& operator=(const CreateRCNodePoolShrinkRequest &) = default ;
    CreateRCNodePoolShrinkRequest& operator=(CreateRCNodePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->clientToken_ == nullptr && return this->clusterId_ == nullptr && return this->createMode_ == nullptr
        && return this->dataDiskShrink_ == nullptr && return this->deploymentSetId_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr && return this->hostName_ == nullptr
        && return this->imageId_ == nullptr && return this->instanceChargeType_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr
        && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->keyPairName_ == nullptr && return this->nodePoolName_ == nullptr && return this->password_ == nullptr
        && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityEnhancementStrategy_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->spotStrategy_ == nullptr && return this->supportCase_ == nullptr && return this->systemDiskShrink_ == nullptr && return this->tag_ == nullptr
        && return this->userData_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateRCNodePoolShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateRCNodePoolShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateRCNodePoolShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRCNodePoolShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateRCNodePoolShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string createMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline CreateRCNodePoolShrinkRequest& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dataDiskShrink Field Functions 
    bool hasDataDiskShrink() const { return this->dataDiskShrink_ != nullptr;};
    void deleteDataDiskShrink() { this->dataDiskShrink_ = nullptr;};
    inline string dataDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(dataDiskShrink_, "") };
    inline CreateRCNodePoolShrinkRequest& setDataDiskShrink(string dataDiskShrink) { DARABONBA_PTR_SET_VALUE(dataDiskShrink_, dataDiskShrink) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateRCNodePoolShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRCNodePoolShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRCNodePoolShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateRCNodePoolShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateRCNodePoolShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateRCNodePoolShrinkRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateRCNodePoolShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateRCNodePoolShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateRCNodePoolShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateRCNodePoolShrinkRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateRCNodePoolShrinkRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateRCNodePoolShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // nodePoolName Field Functions 
    bool hasNodePoolName() const { return this->nodePoolName_ != nullptr;};
    void deleteNodePoolName() { this->nodePoolName_ = nullptr;};
    inline string nodePoolName() const { DARABONBA_PTR_GET_DEFAULT(nodePoolName_, "") };
    inline CreateRCNodePoolShrinkRequest& setNodePoolName(string nodePoolName) { DARABONBA_PTR_SET_VALUE(nodePoolName_, nodePoolName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateRCNodePoolShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateRCNodePoolShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateRCNodePoolShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRCNodePoolShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRCNodePoolShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateRCNodePoolShrinkRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateRCNodePoolShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateRCNodePoolShrinkRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // supportCase Field Functions 
    bool hasSupportCase() const { return this->supportCase_ != nullptr;};
    void deleteSupportCase() { this->supportCase_ = nullptr;};
    inline string supportCase() const { DARABONBA_PTR_GET_DEFAULT(supportCase_, "") };
    inline CreateRCNodePoolShrinkRequest& setSupportCase(string supportCase) { DARABONBA_PTR_SET_VALUE(supportCase_, supportCase) };


    // systemDiskShrink Field Functions 
    bool hasSystemDiskShrink() const { return this->systemDiskShrink_ != nullptr;};
    void deleteSystemDiskShrink() { this->systemDiskShrink_ = nullptr;};
    inline string systemDiskShrink() const { DARABONBA_PTR_GET_DEFAULT(systemDiskShrink_, "") };
    inline CreateRCNodePoolShrinkRequest& setSystemDiskShrink(string systemDiskShrink) { DARABONBA_PTR_SET_VALUE(systemDiskShrink_, systemDiskShrink) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateRCNodePoolShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateRCNodePoolShrinkRequestTag>) };
    inline vector<CreateRCNodePoolShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateRCNodePoolShrinkRequestTag>) };
    inline CreateRCNodePoolShrinkRequest& setTag(const vector<CreateRCNodePoolShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateRCNodePoolShrinkRequest& setTag(vector<CreateRCNodePoolShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateRCNodePoolShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateRCNodePoolShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateRCNodePoolShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of RDS Custom instances that you want to create. The parameter is available if you want to create multiple RDS Custom instances at a time.
    // 
    // Valid values: **1** to **5**. Default value: **1**.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true**: enables the feature. Make sure that your account balance is sufficient when you enable automatic payment.
    // *   **false**: does not automatically complete the payment. An unpaid order is generated.
    // 
    // >  Default value: true. If your account balance is insufficient, you can set AutoPay to false to generate an unpaid order. Then, you can log on to the ApsaraDB RDS console to complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal for the instance. If you specify the subscription billing method for the instance, you must specify this parameter. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > 
    // 
    // *   Monthly subscription: The auto-renewal period is one month.
    // 
    // *   Annually: The auto-renewal period is one year.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the ACK cluster to which the RDS Custom instance belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to add the instance to the ACK cluster. If this parameter is set to **1**, the created instances can be added to the ACK cluster. This allows you to efficiently manage container applications. Valid values:
    // 
    // *   **1**: adds the instance to the ACK cluster.
    // *   **0** (default): does not add the instance to the ACK cluster.
    std::shared_ptr<string> createMode_ = nullptr;
    // The data disks.
    std::shared_ptr<string> dataDiskShrink_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance description. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform a dry run. Default value: false. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, service limits, and insufficient inventory errors.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, the instance is directly created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The instance hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image used by the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Prepaid**: subscription.
    // *   **Postpaid**: pay-as-you-go.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type. For more information about the instance types that are supported by RDS Custom instances, see [Instance types for RDS Custom instances](https://help.aliyun.com/document_detail/2844823.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The name of the AccessKey pair. You can specify only one name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The name of the node pool.
    std::shared_ptr<string> nodePoolName_ = nullptr;
    // The password for the root account of the instance.
    std::shared_ptr<string> password_ = nullptr;
    // The subscription duration of the instance. Default value: **1**.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   **Year**
    // *   **Month** (default)
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The ID of the security group. You can enter an existing security group ID. If no security groups exist, a security group is automatically created.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The supported scenario. If you set the **createMode** parameter to **1**, you must also specify the SupportCase parameter. Valid value: **edge**.
    std::shared_ptr<string> supportCase_ = nullptr;
    // The specification of the system disk.
    std::shared_ptr<string> systemDiskShrink_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateRCNodePoolShrinkRequestTag>> tag_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> userData_ = nullptr;
    // The vSwitch ID.
    // 
    // >  The vSwitch must belong to the same zone as the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID of the instance.
    // 
    // >  If you specify the VSwitchId parameter, the zone specified by the ZoneId parameter must be the same as the zone in which the specified vSwitch resides. You can leave the ZoneId parameter empty. In this case, the system uses the zone in which the specified vSwitch resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
