// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnableScalingGroupRequestLaunchTemplateOverrides.hpp>
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
    virtual bool empty() const override { return this->activeScalingConfigurationId_ == nullptr
        && return this->instanceIds_ == nullptr && return this->launchTemplateId_ == nullptr && return this->launchTemplateOverrides_ == nullptr && return this->launchTemplateVersion_ == nullptr && return this->loadBalancerWeights_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->scalingGroupId_ == nullptr; };
    // activeScalingConfigurationId Field Functions 
    bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
    void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
    inline string activeScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
    inline EnableScalingGroupRequest& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline EnableScalingGroupRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline EnableScalingGroupRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline EnableScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<EnableScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<EnableScalingGroupRequestLaunchTemplateOverrides>) };
    inline vector<EnableScalingGroupRequestLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<EnableScalingGroupRequestLaunchTemplateOverrides>) };
    inline EnableScalingGroupRequest& setLaunchTemplateOverrides(const vector<EnableScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline EnableScalingGroupRequest& setLaunchTemplateOverrides(vector<EnableScalingGroupRequestLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline EnableScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // loadBalancerWeights Field Functions 
    bool hasLoadBalancerWeights() const { return this->loadBalancerWeights_ != nullptr;};
    void deleteLoadBalancerWeights() { this->loadBalancerWeights_ = nullptr;};
    inline const vector<int32_t> & loadBalancerWeights() const { DARABONBA_PTR_GET_CONST(loadBalancerWeights_, vector<int32_t>) };
    inline vector<int32_t> loadBalancerWeights() { DARABONBA_PTR_GET(loadBalancerWeights_, vector<int32_t>) };
    inline EnableScalingGroupRequest& setLoadBalancerWeights(const vector<int32_t> & loadBalancerWeights) { DARABONBA_PTR_SET_VALUE(loadBalancerWeights_, loadBalancerWeights) };
    inline EnableScalingGroupRequest& setLoadBalancerWeights(vector<int32_t> && loadBalancerWeights) { DARABONBA_PTR_SET_RVALUE(loadBalancerWeights_, loadBalancerWeights) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableScalingGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline EnableScalingGroupRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The ID of the scaling configuration that you want to enable in the scaling group.
    std::shared_ptr<string> activeScalingConfigurationId_ = nullptr;
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
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the launch template that is used by Auto Scaling to create ECS instances.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The information about the instance types that you want to extend in the launch template.
    std::shared_ptr<vector<EnableScalingGroupRequestLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    // The version number of the launch template. Valid values:
    // 
    // *   A fixed template version number.
    // *   Default: The default template version is always used.
    // *   Latest: The latest template version is always used.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The weights of ECS instances or elastic container instances as backend servers.
    // 
    // Default value: 50.
    std::shared_ptr<vector<int32_t>> loadBalancerWeights_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
