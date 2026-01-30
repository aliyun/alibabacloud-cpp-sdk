// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class EnableScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeights, loadBalancerWeights_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeights, loadBalancerWeights_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    EnableScalingGroupRequest() = default ;
    EnableScalingGroupRequest(const EnableScalingGroupRequest &) = default ;
    EnableScalingGroupRequest(EnableScalingGroupRequest &&) = default ;
    EnableScalingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableScalingGroupRequest() = default ;
    EnableScalingGroupRequest& operator=(const EnableScalingGroupRequest &) = default ;
    EnableScalingGroupRequest& operator=(EnableScalingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchTemplateOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateOverrides& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateOverrides& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
      };
      LaunchTemplateOverrides() = default ;
      LaunchTemplateOverrides(const LaunchTemplateOverrides &) = default ;
      LaunchTemplateOverrides(LaunchTemplateOverrides &&) = default ;
      LaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateOverrides() = default ;
      LaunchTemplateOverrides& operator=(const LaunchTemplateOverrides &) = default ;
      LaunchTemplateOverrides& operator=(LaunchTemplateOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->weightedCapacity_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline LaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // weightedCapacity Field Functions 
      bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
      void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
      inline int32_t getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
      inline LaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


    protected:
      // The instance type. If you want to scale instances based on instance type weights in the scaling group, you must specify `LaunchTemplateOverrides.WeightedCapacity` after you specify this parameter.
      // 
      // The instance type specified by using this parameter overwrites the instance type of the launch template.
      // 
      // >  This parameter takes effect only if you specify LaunchTemplateId.
      // 
      // You can use this parameter to specify any instance types that are available for purchase.
      shared_ptr<string> instanceType_ {};
      // The weight of the instance type. If you want to scale instances based on instance type weights in the scaling group, you must specify this parameter after you specify `LaunchTemplateOverrides.InstanceType`.
      // 
      // The weight specifies the capacity of an instance of the specified instance type in the scaling group. A higher weight specifies that a smaller number of instances of the specified instance type are required to meet the expected capacity requirement.
      // 
      // Performance metrics such as the number of vCPUs and the memory size of each instance type may vary. You can specify different weights for different instance types based on your business requirements.
      // 
      // Example:
      // 
      // *   Current capacity: 0
      // *   Expected capacity: 6
      // *   Capacity of ecs.c5.xlarge: 4
      // 
      // To reach the expected capacity, Auto Scaling must scale out two instances of ecs.c5.xlarge.
      // 
      // >  The total capacity of the scaling group is constrained and cannot surpass the combined total of the maximum group size defined by MaxSize and the highest weight assigned to any instance type.
      // 
      // Valid values of WeightedCapacity: 1 to 500.
      shared_ptr<int32_t> weightedCapacity_ {};
    };

    virtual bool empty() const override { return this->activeScalingConfigurationId_ == nullptr
        && this->instanceIds_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr && this->launchTemplateVersion_ == nullptr && this->loadBalancerWeights_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->scalingGroupId_ == nullptr; };
    // activeScalingConfigurationId Field Functions 
    bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
    void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
    inline string getActiveScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
    inline EnableScalingGroupRequest& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline EnableScalingGroupRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline EnableScalingGroupRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline EnableScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<EnableScalingGroupRequest::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<EnableScalingGroupRequest::LaunchTemplateOverrides>) };
    inline vector<EnableScalingGroupRequest::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<EnableScalingGroupRequest::LaunchTemplateOverrides>) };
    inline EnableScalingGroupRequest& setLaunchTemplateOverrides(const vector<EnableScalingGroupRequest::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline EnableScalingGroupRequest& setLaunchTemplateOverrides(vector<EnableScalingGroupRequest::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline EnableScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // loadBalancerWeights Field Functions 
    bool hasLoadBalancerWeights() const { return this->loadBalancerWeights_ != nullptr;};
    void deleteLoadBalancerWeights() { this->loadBalancerWeights_ = nullptr;};
    inline const vector<int32_t> & getLoadBalancerWeights() const { DARABONBA_PTR_GET_CONST(loadBalancerWeights_, vector<int32_t>) };
    inline vector<int32_t> getLoadBalancerWeights() { DARABONBA_PTR_GET(loadBalancerWeights_, vector<int32_t>) };
    inline EnableScalingGroupRequest& setLoadBalancerWeights(const vector<int32_t> & loadBalancerWeights) { DARABONBA_PTR_SET_VALUE(loadBalancerWeights_, loadBalancerWeights) };
    inline EnableScalingGroupRequest& setLoadBalancerWeights(vector<int32_t> && loadBalancerWeights) { DARABONBA_PTR_SET_RVALUE(loadBalancerWeights_, loadBalancerWeights) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableScalingGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline EnableScalingGroupRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The ID of the scaling configuration that you want to enable in the scaling group.
    shared_ptr<string> activeScalingConfigurationId_ {};
    // The IDs of the ECS instances that you want to add to the scaling group after the scaling group is enabled.
    // 
    // Before you add ECS instances to the scaling group, make sure that the instances meet the following requirements:
    // 
    // *   The instances must reside in the same region as the scaling group.
    // *   The instances must be in the Running state.
    // *   The instances do not belong to another scaling group.
    // *   The instances are billed on a subscription or pay-as-you-go basis, or the instances are preemptible instances.
    // *   If you specify VswitchID for the scaling group, the instances must share the same VPC as the scaling group.
    // *   If you do not specify VswitchID for the scaling group, the instances must use the classic network.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the launch template that is used by Auto Scaling to create ECS instances.
    shared_ptr<string> launchTemplateId_ {};
    // The information about the instance types that you want to extend in the launch template.
    shared_ptr<vector<EnableScalingGroupRequest::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
    // The version number of the launch template. Valid values:
    // 
    // *   A fixed template version number.
    // *   Default: The default template version is always used.
    // *   Latest: The latest template version is always used.
    shared_ptr<string> launchTemplateVersion_ {};
    // The weights of ECS instances or elastic container instances as backend servers.
    // 
    // Default value: 50.
    shared_ptr<vector<int32_t>> loadBalancerWeights_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
