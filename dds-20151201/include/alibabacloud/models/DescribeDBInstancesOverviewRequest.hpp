// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstancesOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShowTags, showTags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShowTags, showTags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesOverviewRequest() = default ;
    DescribeDBInstancesOverviewRequest(const DescribeDBInstancesOverviewRequest &) = default ;
    DescribeDBInstancesOverviewRequest(DescribeDBInstancesOverviewRequest &&) = default ;
    DescribeDBInstancesOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesOverviewRequest() = default ;
    DescribeDBInstancesOverviewRequest& operator=(const DescribeDBInstancesOverviewRequest &) = default ;
    DescribeDBInstancesOverviewRequest& operator=(DescribeDBInstancesOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->engineVersion_ == nullptr && this->instanceClass_ == nullptr && this->instanceIds_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->showTags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstancesOverviewRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDBInstancesOverviewRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeDBInstancesOverviewRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeDBInstancesOverviewRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeDBInstancesOverviewRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDBInstancesOverviewRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeDBInstancesOverviewRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDBInstancesOverviewRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBInstancesOverviewRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBInstancesOverviewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDBInstancesOverviewRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDBInstancesOverviewRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDBInstancesOverviewRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // showTags Field Functions 
    bool hasShowTags() const { return this->showTags_ != nullptr;};
    void deleteShowTags() { this->showTags_ = nullptr;};
    inline bool getShowTags() const { DARABONBA_PTR_GET_DEFAULT(showTags_, false) };
    inline DescribeDBInstancesOverviewRequest& setShowTags(bool showTags) { DARABONBA_PTR_SET_VALUE(showTags_, showTags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstancesOverviewRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBInstancesOverviewRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesOverviewRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The billing method of the instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    shared_ptr<string> chargeType_ {};
    // The database engine version of the instance. Valid values: **5.0**, **4.4**, **4.2**, **4.0**, and **3.4**.
    shared_ptr<string> engineVersion_ {};
    // The instance type. The instance type varies based on the instance architecture. For more information about instance types supported by different instance architectures, see the following references:
    // 
    // *   [Standalone instance types](https://help.aliyun.com/document_detail/311407.html)
    // *   [Replica set instance types](https://help.aliyun.com/document_detail/311410.html)
    // *   [Sharded cluster instance types](https://help.aliyun.com/document_detail/311414.html)
    shared_ptr<string> instanceClass_ {};
    // The ID of the instance for which you want to query the overview information.
    // 
    // > 
    // 
    // *   If you do not specify this parameter, the overview information of all instances within this account is queried.
    // 
    // *   Separate the instance IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    // The state of the instance. For more information about valid values, see [Instance states](https://help.aliyun.com/document_detail/63870.html).
    shared_ptr<string> instanceStatus_ {};
    // The architecture of the instance. Valid values:
    // 
    // *   **sharding**: sharded cluster instance
    // *   **replicate**: replica set or standalone instance
    // 
    // > 
    // 
    // *   To query the overview information of a sharded cluster instance, you must set the parameter to **sharding**.
    // 
    // *   If you do not specify this parameter, the overview information of all instances within this account is queried.
    shared_ptr<string> instanceType_ {};
    // The network type of the instance. Valid values:
    // 
    // *   **Classic**: classic network
    // *   **VPC**: Virtual Private Cloud (VPC)
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the instance belongs. For more information, see [View the basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to display instance tags. Default value: False.
    shared_ptr<bool> showTags_ {};
    // The ID of the vSwitch to which the instance is connected.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC in which the instance is deployed.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
