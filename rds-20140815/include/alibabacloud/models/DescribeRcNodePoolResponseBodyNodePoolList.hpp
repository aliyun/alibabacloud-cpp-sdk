// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODYNODEPOOLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODYNODEPOOLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCNodePoolResponseBodyNodePoolListDataDisk.hpp>
#include <alibabacloud/models/DescribeRCNodePoolResponseBodyNodePoolListSystemDisk.hpp>
#include <alibabacloud/models/DescribeRCNodePoolResponseBodyNodePoolListTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCNodePoolResponseBodyNodePoolList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNodePoolResponseBodyNodePoolList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_TO_JSON(NodePoolName, nodePoolName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNodePoolResponseBodyNodePoolList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(NodePoolId, nodePoolId_);
      DARABONBA_PTR_FROM_JSON(NodePoolName, nodePoolName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRCNodePoolResponseBodyNodePoolList() = default ;
    DescribeRCNodePoolResponseBodyNodePoolList(const DescribeRCNodePoolResponseBodyNodePoolList &) = default ;
    DescribeRCNodePoolResponseBodyNodePoolList(DescribeRCNodePoolResponseBodyNodePoolList &&) = default ;
    DescribeRCNodePoolResponseBodyNodePoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNodePoolResponseBodyNodePoolList() = default ;
    DescribeRCNodePoolResponseBodyNodePoolList& operator=(const DescribeRCNodePoolResponseBodyNodePoolList &) = default ;
    DescribeRCNodePoolResponseBodyNodePoolList& operator=(DescribeRCNodePoolResponseBodyNodePoolList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->clusterId_ == nullptr && return this->createMode_ == nullptr && return this->dataDisk_ == nullptr && return this->deploymentSetId_ == nullptr
        && return this->description_ == nullptr && return this->hostName_ == nullptr && return this->imageId_ == nullptr && return this->instanceChargeType_ == nullptr && return this->instanceName_ == nullptr
        && return this->instanceType_ == nullptr && return this->internetChargeType_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr && return this->ioOptimized_ == nullptr && return this->keyPairName_ == nullptr
        && return this->nodePoolId_ == nullptr && return this->nodePoolName_ == nullptr && return this->password_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityEnhancementStrategy_ == nullptr && return this->securityGroupId_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->systemDisk_ == nullptr && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string createMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk>) };
    inline vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk>) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setDataDisk(const vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setDataDisk(vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string deploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string ioOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // nodePoolId Field Functions 
    bool hasNodePoolId() const { return this->nodePoolId_ != nullptr;};
    void deleteNodePoolId() { this->nodePoolId_ = nullptr;};
    inline string nodePoolId() const { DARABONBA_PTR_GET_DEFAULT(nodePoolId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setNodePoolId(string nodePoolId) { DARABONBA_PTR_SET_VALUE(nodePoolId_, nodePoolId) };


    // nodePoolName Field Functions 
    bool hasNodePoolName() const { return this->nodePoolName_ != nullptr;};
    void deleteNodePoolName() { this->nodePoolName_ = nullptr;};
    inline string nodePoolName() const { DARABONBA_PTR_GET_DEFAULT(nodePoolName_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setNodePoolName(string nodePoolName) { DARABONBA_PTR_SET_VALUE(nodePoolName_, nodePoolName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string securityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk & systemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk) };
    inline Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk systemDisk() { DARABONBA_PTR_GET(systemDisk_, Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setSystemDisk(const Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setSystemDisk(Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag>) };
    inline vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag>) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setTag(const vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setTag(vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether to enable automatic payment. Valid values:
    // 
    // *   **true** (default): enables the feature. You must make sure that your account balance is sufficient.
    // *   **false**: disables the feature. An unpaid order is generated.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Indicates whether to enable auto-renewal for the instance. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The ID of the container cluster in which the RDS Custom instance resides.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Indicates whether to add the instance to the ACK cluster.
    std::shared_ptr<string> createMode_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<Models::DescribeRCNodePoolResponseBodyNodePoolListDataDisk>> dataDisk_ = nullptr;
    // The ID of the deployment set.
    std::shared_ptr<string> deploymentSetId_ = nullptr;
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // The instance hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the image used by the instance.
    std::shared_ptr<string> imageId_ = nullptr;
    // The billing method. Valid value:
    // 
    // *   **Prepaid**: subscription
    // *   **Postpaid**: pay-as-you-go
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> ioOptimized_ = nullptr;
    // The key pair name.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodePoolId_ = nullptr;
    // The name of the node pool.
    std::shared_ptr<string> nodePoolName_ = nullptr;
    // The password of the root user of the instance.
    std::shared_ptr<string> password_ = nullptr;
    // The subscription duration.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription period. Valid values:
    // 
    // *   **Year**
    // *   **Month** (default)
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> securityEnhancementStrategy_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The specification of the system disk.
    std::shared_ptr<Models::DescribeRCNodePoolResponseBodyNodePoolListSystemDisk> systemDisk_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeRCNodePoolResponseBodyNodePoolListTag>> tag_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
