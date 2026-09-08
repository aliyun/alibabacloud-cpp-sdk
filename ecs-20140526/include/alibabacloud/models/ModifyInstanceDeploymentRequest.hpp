// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveFromDeploymentSet, removeFromDeploymentSet_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MigrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveFromDeploymentSet, removeFromDeploymentSet_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
    };
    ModifyInstanceDeploymentRequest() = default ;
    ModifyInstanceDeploymentRequest(const ModifyInstanceDeploymentRequest &) = default ;
    ModifyInstanceDeploymentRequest(ModifyInstanceDeploymentRequest &&) = default ;
    ModifyInstanceDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceDeploymentRequest() = default ;
    ModifyInstanceDeploymentRequest& operator=(const ModifyInstanceDeploymentRequest &) = default ;
    ModifyInstanceDeploymentRequest& operator=(ModifyInstanceDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affinity_ == nullptr
        && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr && this->deploymentSetGroupNo_ == nullptr && this->deploymentSetId_ == nullptr && this->force_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->migrationType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->removeFromDeploymentSet_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tenancy_ == nullptr; };
    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline ModifyInstanceDeploymentRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline ModifyInstanceDeploymentRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline ModifyInstanceDeploymentRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deploymentSetGroupNo Field Functions 
    bool hasDeploymentSetGroupNo() const { return this->deploymentSetGroupNo_ != nullptr;};
    void deleteDeploymentSetGroupNo() { this->deploymentSetGroupNo_ = nullptr;};
    inline int32_t getDeploymentSetGroupNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetGroupNo_, 0) };
    inline ModifyInstanceDeploymentRequest& setDeploymentSetGroupNo(int32_t deploymentSetGroupNo) { DARABONBA_PTR_SET_VALUE(deploymentSetGroupNo_, deploymentSetGroupNo) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline ModifyInstanceDeploymentRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline ModifyInstanceDeploymentRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceDeploymentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyInstanceDeploymentRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string getMigrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ModifyInstanceDeploymentRequest& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceDeploymentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceDeploymentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceDeploymentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeFromDeploymentSet Field Functions 
    bool hasRemoveFromDeploymentSet() const { return this->removeFromDeploymentSet_ != nullptr;};
    void deleteRemoveFromDeploymentSet() { this->removeFromDeploymentSet_ = nullptr;};
    inline bool getRemoveFromDeploymentSet() const { DARABONBA_PTR_GET_DEFAULT(removeFromDeploymentSet_, false) };
    inline ModifyInstanceDeploymentRequest& setRemoveFromDeploymentSet(bool removeFromDeploymentSet) { DARABONBA_PTR_SET_VALUE(removeFromDeploymentSet_, removeFromDeploymentSet) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceDeploymentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceDeploymentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline ModifyInstanceDeploymentRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


  protected:
    // Specifies whether the instance is associated with the dedicated host. Valid values:
    // 
    // - host: The instance is associated with the dedicated host. When an instance that has economical mode enabled is restarted after being stopped, the instance is still deployed on the original dedicated host.
    // 
    // - default: The instance is not associated with the dedicated host. When an instance that has economical mode enabled is restarted after being stopped, if the resources of the original dedicated host are insufficient, the instance can be migrated to another dedicated host in the automatic deployment resource pool.
    // 
    // Default value when migrating an instance from a shared host to a dedicated host: default.
    shared_ptr<string> affinity_ {};
    // The ID of the dedicated host cluster.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // The ID of the dedicated host. You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query available dedicated hosts.
    // 
    // When you modify the host of an ECS instance (migrate the instance from a shared host to a dedicated host or between dedicated hosts):
    // - To migrate the instance to a specified dedicated host, you must specify this parameter.
    // - To migrate the instance to a dedicated host that is automatically selected by the system, you must set this parameter to empty and set the `Tenancy` parameter to host.
    // 
    // For more information about the automatic deployment feature, see [Features of dedicated hosts](https://help.aliyun.com/document_detail/118938.html).
    shared_ptr<string> dedicatedHostId_ {};
    // The group number of the instance in the deployment set when the deployment set uses the availability group strategy (AvailabilityGroup). Valid values: 1 to 7.
    // 
    // > If you change the deployment set of an ECS instance and the deployment set uses the availability group strategy (`AvailablilityGroup`), the system automatically distributes ECS instances evenly across groups when this parameter is not specified. If you specify the same deployment set that the instance currently belongs to, the system also redistributes ECS instances evenly across groups.
    shared_ptr<int32_t> deploymentSetGroupNo_ {};
    // The ID of the deployment set.
    // 
    // This parameter is required when you add an ECS instance to a deployment set or change the deployment set of an ECS instance.
    // 
    // > When you modify dedicated host-related parameters (`Tenancy`, `Affinity`, and `DedicatedHostId`), you cannot modify the deployment set at the same time.
    shared_ptr<string> deploymentSetId_ {};
    // Specifies whether to forcefully change the host when the instance is added to a deployment set. Valid values:
    //          
    // - true: Allows the operation. Allows restarting ECS instances in the Running or Stopped state. Stopped instances do not include pay-as-you-go ECS instances that have economical mode enabled.
    //     > If the specified ECS instance has local disks attached, the local disks are also forcefully replaced. This may cause data loss on the local disks during host replacement. Proceed with caution.
    // 
    // - false: Does not allow the operation. The instance is added to the deployment set only on the current host. This may cause the deployment set change to fail.
    // 
    // Default value: false.
    shared_ptr<bool> force_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The target instance type of the ECS instance. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the most recent instance type list.
    // 
    // When you modify the host of an ECS instance, you can also change ECS instance type. The target instance type must match the specifications of the specified dedicated host. For more information, see [Dedicated host types](https://help.aliyun.com/document_detail/68564.html).
    // - To change ECS instance type, you must specify the dedicated host ID by setting the `DedicatedHostId` parameter.
    // - You cannot change ECS instance type when using the automatic deployment feature to migrate an ECS instance.
    shared_ptr<string> instanceType_ {};
    // Specifies whether to stop ECS instance before migrating it to the destination dedicated host. Valid values:
    // 
    // - reboot: Stops ECS instance before migration.
    // 
    // - live: Migrates ECS instance without stopping it. In this case, you must specify the DedicatedHostId parameter. This value does not support changing ECS instance type while migrating ECS instance.
    // 
    // Default value: reboot.
    shared_ptr<string> migrationType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to remove the selected instance from the selected deployment set. Valid values:
    // 
    // - true: Yes.
    // 
    // - false: No.
    // 
    // Default value: false.
    // 
    // > When this parameter is set to true, you must specify the InstanceId and DeploymentSetId that have an ownership relationship.
    shared_ptr<bool> removeFromDeploymentSet_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether the instance is deployed on a dedicated host. Valid values: host. The instance is deployed only on a dedicated host.
    shared_ptr<string> tenancy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
