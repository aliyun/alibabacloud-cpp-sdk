// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScalingGroupRequestAlbServerGroups.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestCapacityOptions.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestDBInstances.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestLaunchTemplateOverrides.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestLifecycleHooks.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestLoadBalancerConfigs.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestServerGroups.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestTags.hpp>
#include <alibabacloud/models/CreateScalingGroupRequestVServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_TO_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(ContainerGroupId, containerGroupId_);
      DARABONBA_PTR_TO_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_TO_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
      DARABONBA_PTR_TO_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_TO_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_TO_JSON(SyncAlarmRuleToCms, syncAlarmRuleToCms_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VServerGroups, VServerGroups_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_FROM_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(ContainerGroupId, containerGroupId_);
      DARABONBA_PTR_FROM_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
      DARABONBA_PTR_FROM_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_FROM_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_FROM_JSON(SyncAlarmRuleToCms, syncAlarmRuleToCms_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VServerGroups, VServerGroups_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    CreateScalingGroupRequest() = default ;
    CreateScalingGroupRequest(const CreateScalingGroupRequest &) = default ;
    CreateScalingGroupRequest(CreateScalingGroupRequest &&) = default ;
    CreateScalingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequest() = default ;
    CreateScalingGroupRequest& operator=(const CreateScalingGroupRequest &) = default ;
    CreateScalingGroupRequest& operator=(CreateScalingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->albServerGroups_ != nullptr
        && this->allocationStrategy_ != nullptr && this->azBalance_ != nullptr && this->capacityOptions_ != nullptr && this->clientToken_ != nullptr && this->compensateWithOnDemand_ != nullptr
        && this->containerGroupId_ != nullptr && this->customPolicyARN_ != nullptr && this->DBInstanceIds_ != nullptr && this->DBInstances_ != nullptr && this->defaultCooldown_ != nullptr
        && this->desiredCapacity_ != nullptr && this->groupDeletionProtection_ != nullptr && this->groupType_ != nullptr && this->healthCheckType_ != nullptr && this->healthCheckTypes_ != nullptr
        && this->instanceId_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateOverrides_ != nullptr && this->launchTemplateVersion_ != nullptr && this->lifecycleHooks_ != nullptr
        && this->loadBalancerConfigs_ != nullptr && this->loadBalancerIds_ != nullptr && this->maxInstanceLifetime_ != nullptr && this->maxSize_ != nullptr && this->minSize_ != nullptr
        && this->multiAZPolicy_ != nullptr && this->onDemandBaseCapacity_ != nullptr && this->onDemandPercentageAboveBaseCapacity_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->removalPolicies_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupName_ != nullptr
        && this->scalingPolicy_ != nullptr && this->serverGroups_ != nullptr && this->spotAllocationStrategy_ != nullptr && this->spotInstancePools_ != nullptr && this->spotInstanceRemedy_ != nullptr
        && this->stopInstanceTimeout_ != nullptr && this->syncAlarmRuleToCms_ != nullptr && this->tags_ != nullptr && this->VServerGroups_ != nullptr && this->vSwitchId_ != nullptr
        && this->vSwitchIds_ != nullptr; };
    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequestAlbServerGroups> & albServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<CreateScalingGroupRequestAlbServerGroups>) };
    inline vector<CreateScalingGroupRequestAlbServerGroups> albServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<CreateScalingGroupRequestAlbServerGroups>) };
    inline CreateScalingGroupRequest& setAlbServerGroups(const vector<CreateScalingGroupRequestAlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline CreateScalingGroupRequest& setAlbServerGroups(vector<CreateScalingGroupRequestAlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string allocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline CreateScalingGroupRequest& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // azBalance Field Functions 
    bool hasAzBalance() const { return this->azBalance_ != nullptr;};
    void deleteAzBalance() { this->azBalance_ = nullptr;};
    inline bool azBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
    inline CreateScalingGroupRequest& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const CreateScalingGroupRequestCapacityOptions & capacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, CreateScalingGroupRequestCapacityOptions) };
    inline CreateScalingGroupRequestCapacityOptions capacityOptions() { DARABONBA_PTR_GET(capacityOptions_, CreateScalingGroupRequestCapacityOptions) };
    inline CreateScalingGroupRequest& setCapacityOptions(const CreateScalingGroupRequestCapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline CreateScalingGroupRequest& setCapacityOptions(CreateScalingGroupRequestCapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateScalingGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline CreateScalingGroupRequest& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // containerGroupId Field Functions 
    bool hasContainerGroupId() const { return this->containerGroupId_ != nullptr;};
    void deleteContainerGroupId() { this->containerGroupId_ = nullptr;};
    inline string containerGroupId() const { DARABONBA_PTR_GET_DEFAULT(containerGroupId_, "") };
    inline CreateScalingGroupRequest& setContainerGroupId(string containerGroupId) { DARABONBA_PTR_SET_VALUE(containerGroupId_, containerGroupId) };


    // customPolicyARN Field Functions 
    bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
    void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
    inline string customPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
    inline CreateScalingGroupRequest& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline string DBInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIds_, "") };
    inline CreateScalingGroupRequest& setDBInstanceIds(string DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<CreateScalingGroupRequestDBInstances> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<CreateScalingGroupRequestDBInstances>) };
    inline vector<CreateScalingGroupRequestDBInstances> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<CreateScalingGroupRequestDBInstances>) };
    inline CreateScalingGroupRequest& setDBInstances(const vector<CreateScalingGroupRequestDBInstances> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline CreateScalingGroupRequest& setDBInstances(vector<CreateScalingGroupRequestDBInstances> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // defaultCooldown Field Functions 
    bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
    void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
    inline int32_t defaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
    inline CreateScalingGroupRequest& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline CreateScalingGroupRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool groupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline CreateScalingGroupRequest& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateScalingGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline CreateScalingGroupRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckTypes Field Functions 
    bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
    void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
    inline const vector<string> & healthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
    inline vector<string> healthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
    inline CreateScalingGroupRequest& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
    inline CreateScalingGroupRequest& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScalingGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<CreateScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<CreateScalingGroupRequestLaunchTemplateOverrides>) };
    inline vector<CreateScalingGroupRequestLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<CreateScalingGroupRequestLaunchTemplateOverrides>) };
    inline CreateScalingGroupRequest& setLaunchTemplateOverrides(const vector<CreateScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline CreateScalingGroupRequest& setLaunchTemplateOverrides(vector<CreateScalingGroupRequestLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline CreateScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // lifecycleHooks Field Functions 
    bool hasLifecycleHooks() const { return this->lifecycleHooks_ != nullptr;};
    void deleteLifecycleHooks() { this->lifecycleHooks_ = nullptr;};
    inline const vector<CreateScalingGroupRequestLifecycleHooks> & lifecycleHooks() const { DARABONBA_PTR_GET_CONST(lifecycleHooks_, vector<CreateScalingGroupRequestLifecycleHooks>) };
    inline vector<CreateScalingGroupRequestLifecycleHooks> lifecycleHooks() { DARABONBA_PTR_GET(lifecycleHooks_, vector<CreateScalingGroupRequestLifecycleHooks>) };
    inline CreateScalingGroupRequest& setLifecycleHooks(const vector<CreateScalingGroupRequestLifecycleHooks> & lifecycleHooks) { DARABONBA_PTR_SET_VALUE(lifecycleHooks_, lifecycleHooks) };
    inline CreateScalingGroupRequest& setLifecycleHooks(vector<CreateScalingGroupRequestLifecycleHooks> && lifecycleHooks) { DARABONBA_PTR_SET_RVALUE(lifecycleHooks_, lifecycleHooks) };


    // loadBalancerConfigs Field Functions 
    bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
    void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
    inline const vector<CreateScalingGroupRequestLoadBalancerConfigs> & loadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<CreateScalingGroupRequestLoadBalancerConfigs>) };
    inline vector<CreateScalingGroupRequestLoadBalancerConfigs> loadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<CreateScalingGroupRequestLoadBalancerConfigs>) };
    inline CreateScalingGroupRequest& setLoadBalancerConfigs(const vector<CreateScalingGroupRequestLoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
    inline CreateScalingGroupRequest& setLoadBalancerConfigs(vector<CreateScalingGroupRequestLoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline string loadBalancerIds() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerIds_, "") };
    inline CreateScalingGroupRequest& setLoadBalancerIds(string loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };


    // maxInstanceLifetime Field Functions 
    bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
    void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
    inline int32_t maxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
    inline CreateScalingGroupRequest& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline CreateScalingGroupRequest& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline CreateScalingGroupRequest& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // multiAZPolicy Field Functions 
    bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
    void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
    inline string multiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
    inline CreateScalingGroupRequest& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline CreateScalingGroupRequest& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline CreateScalingGroupRequest& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removalPolicies Field Functions 
    bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
    void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
    inline const vector<string> & removalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
    inline vector<string> removalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
    inline CreateScalingGroupRequest& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
    inline CreateScalingGroupRequest& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateScalingGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string scalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline CreateScalingGroupRequest& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline CreateScalingGroupRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // serverGroups Field Functions 
    bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
    void deleteServerGroups() { this->serverGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequestServerGroups> & serverGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<CreateScalingGroupRequestServerGroups>) };
    inline vector<CreateScalingGroupRequestServerGroups> serverGroups() { DARABONBA_PTR_GET(serverGroups_, vector<CreateScalingGroupRequestServerGroups>) };
    inline CreateScalingGroupRequest& setServerGroups(const vector<CreateScalingGroupRequestServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
    inline CreateScalingGroupRequest& setServerGroups(vector<CreateScalingGroupRequestServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string spotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline CreateScalingGroupRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline CreateScalingGroupRequest& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline CreateScalingGroupRequest& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t stopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline CreateScalingGroupRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


    // syncAlarmRuleToCms Field Functions 
    bool hasSyncAlarmRuleToCms() const { return this->syncAlarmRuleToCms_ != nullptr;};
    void deleteSyncAlarmRuleToCms() { this->syncAlarmRuleToCms_ = nullptr;};
    inline bool syncAlarmRuleToCms() const { DARABONBA_PTR_GET_DEFAULT(syncAlarmRuleToCms_, false) };
    inline CreateScalingGroupRequest& setSyncAlarmRuleToCms(bool syncAlarmRuleToCms) { DARABONBA_PTR_SET_VALUE(syncAlarmRuleToCms_, syncAlarmRuleToCms) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateScalingGroupRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateScalingGroupRequestTags>) };
    inline vector<CreateScalingGroupRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateScalingGroupRequestTags>) };
    inline CreateScalingGroupRequest& setTags(const vector<CreateScalingGroupRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateScalingGroupRequest& setTags(vector<CreateScalingGroupRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequestVServerGroups> & VServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<CreateScalingGroupRequestVServerGroups>) };
    inline vector<CreateScalingGroupRequestVServerGroups> VServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<CreateScalingGroupRequestVServerGroups>) };
    inline CreateScalingGroupRequest& setVServerGroups(const vector<CreateScalingGroupRequestVServerGroups> & VServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, VServerGroups) };
    inline CreateScalingGroupRequest& setVServerGroups(vector<CreateScalingGroupRequestVServerGroups> && VServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, VServerGroups) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateScalingGroupRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateScalingGroupRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateScalingGroupRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The Application Load Balancer (ALB) server groups.
    std::shared_ptr<vector<CreateScalingGroupRequestAlbServerGroups>> albServerGroups_ = nullptr;
    // The allocation policy of instances. Auto Scaling selects instance types based on the allocation policy to create the required number of instances. The policy can be applied to pay-as-you-go instances and preemptible instances. This parameter takes effect only when you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order of the instance types to create the required number of instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of instances.
    // 
    // Default value: priority.
    std::shared_ptr<string> allocationStrategy_ = nullptr;
    // Specifies whether to evenly distribute instances in the scaling group across multiple zones. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  If you set `MultiAZPolicy` to `COMPOSABLE` and enable `AzBalance` to `true`, this setting has an equivalent effect to setting `MultiAZPolicy` to `BALANCE`.
    // 
    // Default value: false.
    std::shared_ptr<bool> azBalance_ = nullptr;
    // The capacity options.
    std::shared_ptr<CreateScalingGroupRequestCapacityOptions> capacityOptions_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to automatically create pay-as-you-go instances to meet the requirement on the number of ECS instances when the expected capacity of preemptible instances cannot be provided due to reasons such as cost-related issues and insufficient resources. This parameter is available only if you set the MultiAZPolicy parameter to COST_OPTIMIZED. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The ID of the elastic container instance.
    std::shared_ptr<string> containerGroupId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the custom scale-in policy (Function). This parameter is available only if you specify CustomPolicy as the first step to remove instances.
    std::shared_ptr<string> customPolicyARN_ = nullptr;
    // The IDs of the ApsaraDB RDS instances that you want to associate with the scaling group. The value can be a JSON array that contains multiple ApsaraDB RDS instance IDs. Separate multiple IDs with commas (,).
    // 
    // You can associate only a limited number of ApsaraDB RDS instances with a scaling group. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the maximum number of ApsaraDB RDS instances that you can associate with a scaling group.
    std::shared_ptr<string> DBInstanceIds_ = nullptr;
    // The databases that you want to attach to the scaling group.
    std::shared_ptr<vector<CreateScalingGroupRequestDBInstances>> DBInstances_ = nullptr;
    // The cooldown period of the scaling group after a scaling activity is complete in the scaling group. Valid values: 0 to 86400. Unit: seconds.
    // 
    // During the cooldown period, Auto Scaling does not execute scaling activities that are triggered by CloudMonitor event-triggered tasks.
    // 
    // Default value: 300.
    std::shared_ptr<int32_t> defaultCooldown_ = nullptr;
    // The expected number of ECS instances in the scaling group. Auto Scaling automatically maintains the specified expected number of ECS instances. The DesiredCapacity value cannot be greater than the MaxSize value or less than the MinSize value.
    std::shared_ptr<int32_t> desiredCapacity_ = nullptr;
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // *   true: enables deletion protection for the scaling group. This way, the scaling group cannot be deleted.
    // *   false: disables deletion protection for the scaling group.
    // 
    // Default value: false.
    std::shared_ptr<bool> groupDeletionProtection_ = nullptr;
    // The type of the instances that are managed by the scaling group. Valid values:
    // 
    // *   ECS: ECS instances.
    // *   ECI: elastic container instances.
    // 
    // Default value: ECS.
    std::shared_ptr<string> groupType_ = nullptr;
    // The health check mode of the scaling group. Valid values:
    // 
    // *   NONE: Auto Scaling does not check the health status of instances.
    // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
    // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of Classic Load Balancer (CLB) instances are not supported as the health check basis for instances in the scaling group.
    // 
    // Default value: ECS.
    // 
    // >  If you want to enable instance health check and load balancer health check at the same time, we recommend that you specify `HealthCheckTypes`.
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The health check mode of the scaling group.
    // 
    // >  You can specify multiple values for this parameter to enable multiple health check options at the same time. If you specify `HealthCheckType`, this parameter is ignored.
    std::shared_ptr<vector<string>> healthCheckTypes_ = nullptr;
    // The ID of the ECS instance. When you create a scaling group, you can specify an existing ECS instance. Auto Scaling obtains the configurations of the ECS instance and automatically creates a scaling configuration from the obtained configurations.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the launch template that provides instance configurations for Auto Scaling to create instances.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // Details of the instance types that you specify by using the Extended Configurations feature of the launch template.
    std::shared_ptr<vector<CreateScalingGroupRequestLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    // The version number of the launch template. Valid values:
    // 
    // *   A fixed template version number.
    // *   Default: the default template version.
    // *   Latest: the latest template version.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The lifecycle hooks.
    std::shared_ptr<vector<CreateScalingGroupRequestLifecycleHooks>> lifecycleHooks_ = nullptr;
    // The load balancer configurations.
    std::shared_ptr<vector<CreateScalingGroupRequestLoadBalancerConfigs>> loadBalancerConfigs_ = nullptr;
    // The IDs of the CLB instances that you want to associate with the scaling group. The value can be a JSON array that contains multiple CLB instance IDs. Separate multiple IDs with commas (,).
    // 
    // You can associate only a limited number of CLB instances with a scaling group. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the maximum number of CLB instances that you can associate with a scaling group.
    std::shared_ptr<string> loadBalancerIds_ = nullptr;
    // The maximum life span of an instance in the scaling group. Unit: seconds.
    // 
    // Valid values: 86400 to the value of the Integer.maxValue parameter.
    // 
    // Default value: null.
    std::shared_ptr<int32_t> maxInstanceLifetime_ = nullptr;
    // The maximum number of instances that can be contained in the scaling group. When the total number of ECS instances in the scaling group exceeds the value of MaxSize, Auto Scaling automatically removes ECS instances from the scaling group until the total number equals the maximum number.
    // 
    // The value range of MaxSize is directly correlated with the degree of dependency your business has on Auto Scaling. You can go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check **the maximum number of instances that a single scaling group can contain.**
    // 
    // If **a single scaling group can contain up to 2,000 ECS instances**, the value range of MaxSize is 0 to 2,000.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    // The minimum number of instances that must be contained in the scaling group. When the total number of ECS instances in the scaling group is less than the value of MinSize, Auto Scaling automatically creates ECS instances in the scaling group until the total number reaches the minimum number.
    // 
    // >  The value of MinSize must be less than or equal to the value of MaxSize.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> minSize_ = nullptr;
    // The scaling policy for ECS instances in the multi-zone scaling group. Valid values:
    // 
    // *   PRIORITY: scale ECS instances based on the priority of the vSwitches specified by VSwitchIds. Auto Scaling preferentially scales instances in the zone where the vSwitch of the highest priority resides. If the scaling fails, Auto Scaling scales instances in the zone where the vSwitch of the next highest priority resides.
    // 
    // *   COST_OPTIMIZED: create ECS instances that have the lowest unit price of vCPUs during scale-out events and removes ECS instances that have the highest unit price of vCPUs during scale-in events. If you specify preemptible instance types in your scaling configuration, Auto Scaling will preferentially create preemptible instances. You can also specify CompensateWithOnDemand to allow Auto Scaling to create pay-as-you-go instances in the case that preemptible instances cannot be created due to limited stock.
    // 
    //     **
    // 
    //     **Note** The COST_OPTIMIZED setting takes effect only when your scaling configuration contains multiple instance types or specifically contains preemptible instance types.
    // 
    // *   BALANCE: evenly distribute ECS instances across the zones that are specified for the scaling group. If ECS instances are unevenly distributed across the specified zones due to insufficient inventory, you can call the [RebalanceInstance](https://help.aliyun.com/document_detail/71516.html) operation to evenly distribute the instances across the zones.
    // 
    //     **
    // 
    //     **Note** When you set `MultiAZPolicy` to `BALANCE`, this setting has an equivalent effect to setting `MultiAZPolicy` to `COMPOSABLE` and enabling `AzBalance` to `true`.
    // 
    // *   COMPOSABLE: combine the preceding policies into a custom scaling policy based on your business requirements. Alternatively, you can specify custom parameters to finely control the capacity of the scaling group.
    // 
    // Default value: PRIORITY.
    std::shared_ptr<string> multiAZPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances reaches the requirement. Valid values: 0 to 100.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance removal policies. Valid values:
    // 
    // *   OldestInstance: removes ECS instances that are added at the earliest point in time to the scaling group.
    // *   NewestInstance: removes ECS instances that are most recently added to the scaling group.
    // *   OldestScalingConfiguration: removes ECS instances that are created based on the earliest scaling configuration.
    // *   CustomPolicy: removes ECS instances based on the custom scale-in policy (Function).
    // 
    // The scaling configuration source specified by the OldestScalingConfiguration setting can be a scaling configuration or a launch template. The CustomPolicy setting takes effect only if you specify it as the first step to remove instances. If you specify CustomPolicy, you must also specify the CustomPolicyARN parameter.
    // 
    // > The removal of ECS instances from a scaling group is also affected by the value of the MultiAZPolicy parameter. For more information, see the [Configure a combination policy for removing instances](https://help.aliyun.com/document_detail/254822.html) topic.
    std::shared_ptr<vector<string>> removalPolicies_ = nullptr;
    // The ID of the resource group to which you want to add the scaling group.
    // 
    // > If you specify this parameter, new scaling groups are added to the specified resource group. If you do not specify this parameter, new scaling groups are added to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The name of the scaling group. The name of each scaling group must be unique in a region.
    // 
    // The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // If you do not specify this parameter, the value of the ScalingGroupId parameter is used.
    std::shared_ptr<string> scalingGroupName_ = nullptr;
    // The reclaim mode of the scaling group. Valid values:
    // 
    // *   recycle: the economical mode
    // 
    // *   release: the release mode
    // 
    // *   forcerelease: the forced release mode
    // 
    //     **
    // 
    //     **Note** If you set the value to forcerelease, Auto Scaling will forcibly release the ECS instances that are in the `Running` state during the scale-out events. Forced release equates to an immediate power-off, resulting in the irreversible deletion of all ephemeral data stored on the instance. Once executed, this action cannot be undone and the lost data cannot be recovered. Exercise caution when you select this option.
    // 
    // *   forcerecycle: the forced recycle mode
    // 
    //     **
    // 
    //     **Note** If you set the value to forcerecycle, Auto Scaling will forcibly shut down the ECS instances that are in the `Running` state during the scale-out events. Forced recycle equates to an immediate power-off, resulting in the irreversible deletion of all ephemeral data stored on the instance. Once executed, this action cannot be undone and the lost data cannot be recovered. Exercise caution when you select this option.
    // 
    // ScalingPolicy specifies the reclaim mode of the scaling group. RemovePolicy of the RemoveInstances operation specifies the specific instance removal action. For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The server groups.
    // 
    // >  You cannot use AlbServerGroups and ServerGroups to specify the same server group.
    std::shared_ptr<vector<CreateScalingGroupRequestServerGroups>> serverGroups_ = nullptr;
    // The allocation policy of preemptible instances. You can use this parameter to individually specify the allocation policy of preemptible instances. This parameter takes effect only if you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order of the instance types to create the required number of preemptible instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of preemptible instances.
    // 
    // Default value: priority.
    std::shared_ptr<string> spotAllocationStrategy_ = nullptr;
    // The number of available instance types. Auto Scaling evenly creates preemptible instances of multiple instance types that are provided at the lowest cost in the scaling group. Valid values: 1 to 10.
    std::shared_ptr<int32_t> spotInstancePools_ = nullptr;
    // Specifies whether to supplement preemptible instances. If you set this parameter to true, Auto Scaling creates an instance to replace a preemptible instance when Auto Scaling receives a system message which indicates that the preemptible instance is to be reclaimed.
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The period of time required by the ECS instance to enter the Stopped state. Unit: seconds. Valid values: 30 to 240.
    // 
    // > 
    // 
    // *   This parameter takes effect only if you set ScalingPolicy to release.
    // 
    // *   If you specify this parameter, the system will wait for the ECS instance to enter the Stopped state for the specified period of time before continuing with the scale-in operation, regardless of the status of the ECS instance.
    // 
    // *   If you do not specify this parameter, the system will wait for the ECS instance to stop before continuing with the scale-in operation. If the ECS instance is not successfully stopped, the scale-in process will be rolled back and considered failed.
    std::shared_ptr<int32_t> stopInstanceTimeout_ = nullptr;
    // > This parameter is unavailable.
    std::shared_ptr<bool> syncAlarmRuleToCms_ = nullptr;
    // The tags that you want to add to the scaling group.
    std::shared_ptr<vector<CreateScalingGroupRequestTags>> tags_ = nullptr;
    // The backend vServer group that you want to associate with the scaling group.
    std::shared_ptr<vector<CreateScalingGroupRequestVServerGroups>> VServerGroups_ = nullptr;
    // The ID of the vSwitch. If you specify the VSwitchId parameter, the network type of the scaling group is VPC.
    // 
    // > If you do not specify the VSwitchId or VSwitchIds parameter, the network type of the scaling group is classic network.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The IDs of the vSwitches. If you specify VSwitchIds, VSwitchId is ignored. If you specify VSwitchIds, the network type of the scaling group is VPC.
    // 
    // If you specify multiple vSwitches, take note of the following items:
    // 
    // *   The vSwitches must belong to the same VPC.
    // *   The vSwitches can belong to different zones.
    // *   vSwitches are sorted in ascending order based on their priorities. The first vSwitch has the highest priority. If Auto Scaling fails to create ECS instances in the zone where the vSwitch of the highest priority resides, Auto Scaling attempts to create ECS instances in the zone where the vSwitch of the next highest priority resides.
    // 
    // >  If you do not specify VSwitchId or VSwitchIds for your scaling group, the network type of the scaling group is classic network.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
