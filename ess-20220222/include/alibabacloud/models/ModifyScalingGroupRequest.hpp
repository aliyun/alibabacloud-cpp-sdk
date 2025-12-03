// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyScalingGroupRequestCapacityOptions.hpp>
#include <vector>
#include <alibabacloud/models/ModifyScalingGroupRequestLaunchTemplateOverrides.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_TO_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_TO_JSON(BalanceMode, balanceMode_);
      DARABONBA_PTR_TO_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_TO_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(DisableDesiredCapacity, disableDesiredCapacity_);
      DARABONBA_PTR_TO_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
      DARABONBA_PTR_TO_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_FROM_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_FROM_JSON(BalanceMode, balanceMode_);
      DARABONBA_PTR_FROM_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_FROM_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(DisableDesiredCapacity, disableDesiredCapacity_);
      DARABONBA_PTR_FROM_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
      DARABONBA_PTR_FROM_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ModifyScalingGroupRequest() = default ;
    ModifyScalingGroupRequest(const ModifyScalingGroupRequest &) = default ;
    ModifyScalingGroupRequest(ModifyScalingGroupRequest &&) = default ;
    ModifyScalingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingGroupRequest() = default ;
    ModifyScalingGroupRequest& operator=(const ModifyScalingGroupRequest &) = default ;
    ModifyScalingGroupRequest& operator=(ModifyScalingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeScalingConfigurationId_ == nullptr
        && return this->allocationStrategy_ == nullptr && return this->autoRebalance_ == nullptr && return this->azBalance_ == nullptr && return this->balanceMode_ == nullptr && return this->capacityOptions_ == nullptr
        && return this->compensateWithOnDemand_ == nullptr && return this->customPolicyARN_ == nullptr && return this->defaultCooldown_ == nullptr && return this->desiredCapacity_ == nullptr && return this->disableDesiredCapacity_ == nullptr
        && return this->groupDeletionProtection_ == nullptr && return this->healthCheckType_ == nullptr && return this->healthCheckTypes_ == nullptr && return this->launchTemplateId_ == nullptr && return this->launchTemplateOverrides_ == nullptr
        && return this->launchTemplateVersion_ == nullptr && return this->maxInstanceLifetime_ == nullptr && return this->maxSize_ == nullptr && return this->minSize_ == nullptr && return this->multiAZPolicy_ == nullptr
        && return this->onDemandBaseCapacity_ == nullptr && return this->onDemandPercentageAboveBaseCapacity_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->removalPolicies_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scalingGroupName_ == nullptr && return this->scalingPolicy_ == nullptr
        && return this->spotAllocationStrategy_ == nullptr && return this->spotInstancePools_ == nullptr && return this->spotInstanceRemedy_ == nullptr && return this->stopInstanceTimeout_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // activeScalingConfigurationId Field Functions 
    bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
    void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
    inline string activeScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
    inline ModifyScalingGroupRequest& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string allocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline ModifyScalingGroupRequest& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // autoRebalance Field Functions 
    bool hasAutoRebalance() const { return this->autoRebalance_ != nullptr;};
    void deleteAutoRebalance() { this->autoRebalance_ = nullptr;};
    inline bool autoRebalance() const { DARABONBA_PTR_GET_DEFAULT(autoRebalance_, false) };
    inline ModifyScalingGroupRequest& setAutoRebalance(bool autoRebalance) { DARABONBA_PTR_SET_VALUE(autoRebalance_, autoRebalance) };


    // azBalance Field Functions 
    bool hasAzBalance() const { return this->azBalance_ != nullptr;};
    void deleteAzBalance() { this->azBalance_ = nullptr;};
    inline bool azBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
    inline ModifyScalingGroupRequest& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


    // balanceMode Field Functions 
    bool hasBalanceMode() const { return this->balanceMode_ != nullptr;};
    void deleteBalanceMode() { this->balanceMode_ = nullptr;};
    inline string balanceMode() const { DARABONBA_PTR_GET_DEFAULT(balanceMode_, "") };
    inline ModifyScalingGroupRequest& setBalanceMode(string balanceMode) { DARABONBA_PTR_SET_VALUE(balanceMode_, balanceMode) };


    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const ModifyScalingGroupRequestCapacityOptions & capacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, ModifyScalingGroupRequestCapacityOptions) };
    inline ModifyScalingGroupRequestCapacityOptions capacityOptions() { DARABONBA_PTR_GET(capacityOptions_, ModifyScalingGroupRequestCapacityOptions) };
    inline ModifyScalingGroupRequest& setCapacityOptions(const ModifyScalingGroupRequestCapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline ModifyScalingGroupRequest& setCapacityOptions(ModifyScalingGroupRequestCapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline ModifyScalingGroupRequest& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // customPolicyARN Field Functions 
    bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
    void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
    inline string customPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
    inline ModifyScalingGroupRequest& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


    // defaultCooldown Field Functions 
    bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
    void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
    inline int32_t defaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
    inline ModifyScalingGroupRequest& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline ModifyScalingGroupRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // disableDesiredCapacity Field Functions 
    bool hasDisableDesiredCapacity() const { return this->disableDesiredCapacity_ != nullptr;};
    void deleteDisableDesiredCapacity() { this->disableDesiredCapacity_ = nullptr;};
    inline bool disableDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(disableDesiredCapacity_, false) };
    inline ModifyScalingGroupRequest& setDisableDesiredCapacity(bool disableDesiredCapacity) { DARABONBA_PTR_SET_VALUE(disableDesiredCapacity_, disableDesiredCapacity) };


    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool groupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline ModifyScalingGroupRequest& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline ModifyScalingGroupRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckTypes Field Functions 
    bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
    void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
    inline const vector<string> & healthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
    inline vector<string> healthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
    inline ModifyScalingGroupRequest& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
    inline ModifyScalingGroupRequest& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline ModifyScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<ModifyScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<ModifyScalingGroupRequestLaunchTemplateOverrides>) };
    inline vector<ModifyScalingGroupRequestLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<ModifyScalingGroupRequestLaunchTemplateOverrides>) };
    inline ModifyScalingGroupRequest& setLaunchTemplateOverrides(const vector<ModifyScalingGroupRequestLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline ModifyScalingGroupRequest& setLaunchTemplateOverrides(vector<ModifyScalingGroupRequestLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline ModifyScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxInstanceLifetime Field Functions 
    bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
    void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
    inline int32_t maxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
    inline ModifyScalingGroupRequest& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline ModifyScalingGroupRequest& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline ModifyScalingGroupRequest& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // multiAZPolicy Field Functions 
    bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
    void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
    inline string multiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
    inline ModifyScalingGroupRequest& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline ModifyScalingGroupRequest& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline ModifyScalingGroupRequest& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // removalPolicies Field Functions 
    bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
    void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
    inline const vector<string> & removalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
    inline vector<string> removalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
    inline ModifyScalingGroupRequest& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
    inline ModifyScalingGroupRequest& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScalingGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ModifyScalingGroupRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string scalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline ModifyScalingGroupRequest& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline ModifyScalingGroupRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string spotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline ModifyScalingGroupRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline ModifyScalingGroupRequest& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline ModifyScalingGroupRequest& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t stopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline ModifyScalingGroupRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ModifyScalingGroupRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ModifyScalingGroupRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The ID of the active scaling configuration in the scaling group.
    std::shared_ptr<string> activeScalingConfigurationId_ = nullptr;
    // The allocation policy. Auto Scaling selects instance types based on the allocation policy to create the required number of instances. The policy can be applied to pay-as-you-go instances and preemptible instances at the same time. This parameter takes effect only when you set the MultiAZPolicy parameter to COMPOSABLE. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order to create the required number of instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of instances.
    // 
    // Default value: priority.
    std::shared_ptr<string> allocationStrategy_ = nullptr;
    // Whether to enable automatic rebalancing for the scaling group. This takes effect only when BalancedOnly is enabled for the scaling group. Valid values:
    // 
    // *   false: Auto rebalancing is disabled for the scaling group.
    // *   true: If Auto rebalancing is enabled, the scaling group automatically detects the capacity of the zone. If the capacity of the zone is unbalanced, the scaling group actively scales out the zone and re-balances the capacity of the zone.
    // 
    // Default value: false.
    std::shared_ptr<bool> autoRebalance_ = nullptr;
    // Specifies whether to evenly distribute instances in the scaling group across zones. This parameter takes effect only when you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> azBalance_ = nullptr;
    // The zone balancing mode. This mode takes effect only when the zone balancing mode is enabled. Valid values:
    // 
    // *   BalancedBestEffort: If a resource fails to be created in a zone, the resource is downgraded to another zone. This ensures best-effort delivery of the resource.
    // *   BalancedOnly: If a resource fails to be created in a zone, the resource is not downgraded to another zone. The scale-out activity is partially successful to avoid excessive imbalance of resources in different zones.
    // 
    // Default value: BalancedBestEffort.
    std::shared_ptr<string> balanceMode_ = nullptr;
    // The capacity options.
    std::shared_ptr<ModifyScalingGroupRequestCapacityOptions> capacityOptions_ = nullptr;
    // Specifies whether to automatically create pay-as-you-go instances to meet the requirements on the number of ECS instances in the scaling group when the number of preemptible instances cannot be reached due to reasons such as cost-related issues and insufficient resources. This parameter takes effect only if you set `MultiAZPolicy` in the `CreateScalingGroup` operation to `COST_OPTIMIZED`. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The ARN of the custom scaling policy (Function). This parameter takes effect only when you specify CustomPolicy as the first step of the instance removal policy.
    std::shared_ptr<string> customPolicyARN_ = nullptr;
    // The cooldown period of the scaling group. This parameter is available only if you set ScalingRuleType to SimpleScalingRule. Valid values: 0 to 86400. Unit: seconds.
    // 
    // During the cooldown period, Auto Scaling does not execute scaling activities that are triggered by CloudMonitor event-triggered tasks.
    std::shared_ptr<int32_t> defaultCooldown_ = nullptr;
    // The expected number of ECS instances or elastic container instances in the scaling group. Auto Scaling maintains the expected number of ECS instances or elastic container instances in the scaling group. Make sure that you adhere to the following rule when specifying this parameter: Value of MaxSize ≥ Value of DesiredCapacity ≥ Value of MinSize
    // 
    // >  If you re-enable the Expected Number of Instances feature, you must specify a value for `DesiredCapacity` again.
    std::shared_ptr<int32_t> desiredCapacity_ = nullptr;
    std::shared_ptr<bool> disableDesiredCapacity_ = nullptr;
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // *   true: enables deletion protection for the scaling group. This way, the scaling group cannot be deleted.
    // *   false: disables deletion protection for the scaling group.
    std::shared_ptr<bool> groupDeletionProtection_ = nullptr;
    // The health check mode of the scaling group. Valid values:
    // 
    // *   NONE: Auto Scaling does not check the health status of instances.
    // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
    // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of Classic Load Balancer (CLB) instances are not supported as the health check basis for instances in the scaling group. Default value: ECS.
    // 
    // >  If you want to enable instance health check and load balancer health check at the same time, we recommend that you specify `HealthCheckTypes`.
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The health check mode of the scaling group.
    // 
    // >  You can specify multiple values for this parameter to enable multiple health check options at the same time. If you specify HealthCheckType, this parameter is ignored.
    std::shared_ptr<vector<string>> healthCheckTypes_ = nullptr;
    // The ID of the launch template that is used by Auto Scaling to create instances.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // Details of the instance types that are specified in the extended configurations of the launch template.
    std::shared_ptr<vector<ModifyScalingGroupRequestLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    // The version number of the launch template. Valid values:
    // 
    // *   A fixed template version number.
    // *   Default: The default template version is always used.
    // *   Latest: The latest template version is always used.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The maximum life span of the instance in the scaling group. Unit: seconds.
    // 
    // Valid values: 86400 to Integer.maxValue. ``You can also set this parameter to 0. A value of 0 indicates that the instance has an unlimited life span in the scaling group.
    // 
    // Default value: null.
    // 
    // > You cannot specify this parameter for scaling groups that manage elastic container instances or scaling groups whose ScalingPolicy is set to recycle.
    std::shared_ptr<int32_t> maxInstanceLifetime_ = nullptr;
    // The maximum number of ECS instances or elastic container instances that can be contained in the scaling group. If the total number of instances in the scaling group is greater than the value of MaxSize, Auto Scaling proactively removes the surplus instances from the scaling group to restore the total number to match the maximum limit.
    // 
    // The value range of MaxSize is directly correlated with the degree of dependency your business has on Auto Scaling. You can go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check **the maximum number of instances that a single scaling group can contain.**
    // 
    // For example, if a scaling group can contain up to **2,000** instances, the value range of MaxSize is 0 to 2000.
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    // The minimum number of ECS instances or elastic container instances that must be contained in the scaling group. If the total number of instances in the scaling group is less than the value of MinSize, Auto Scaling proactively adds instances to the scaling group to ensure that the total number aligns with the minimum threshold.
    // 
    // >  The value of MinSize must be less than or equal to the value of MaxSize.
    std::shared_ptr<int32_t> minSize_ = nullptr;
    // The scaling policy for the multi-zone scaling group that contains ECS instances. Valid values:
    // 
    // *   PRIORITY: ECS instances are scaled based on the vSwitch priority. The first vSwitch specified by using the VSwitchIds parameter has the highest priority. Auto Scaling preferentially scales instances in the zone where the vSwitch that has the highest priority resides. If the scaling fails, Auto Scaling scales instances in the zone where the vSwitch that has the next highest priority resides.
    // *   COST_OPTIMIZED: During a scale-out activity, Auto Scaling preferentially creates ECS instances of the instance type that has the lowest unit price of vCPU. During a scale-in activity, Auto Scaling preferentially removes ECS instances of the instance types that have the highest unit price of vCPU. Auto Scaling preferentially creates preemptible instances when preemptible instance types are specified in the scaling configuration. You can use the `CompensateWithOnDemand` parameter to specify whether to automatically create pay-as-you-go instances when Auto Scaling fails to create preemptible instances.
    // 
    // > The `COST_OPTIMIZED` setting takes effect only when multiple instance types are specified or at least one instance type is specified for preemptible instances.
    // 
    // *   BALANCE: ECS instances are evenly distributed across zones that are specified in the scaling group. If ECS instances are unevenly distributed among zones due to insufficient resources, you can call the RebalanceInstance operation to evenly distribute the instances among the zones.
    // *   COMPOSABLE: You can flexibly combine the preceding policies based on your business requirements.
    std::shared_ptr<string> multiAZPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be included in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
    // 
    // If you set the `MultiAZPolicy` parameter to `COMPOSABLE` Policy, the default value is 0.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // The expected percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances reaches the requirement. Valid values: 0 to 100.
    // 
    // If you set the `MultiAZPolicy` parameter to `COMPOSABLE` Policy, the default value is 100.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The policy that is used to remove ECS instances from the scaling group. Valid values:
    // 
    // *   OldestInstance: removes ECS instances that are added at the earliest point in time to the scaling group.
    // *   NewestInstance: removes ECS instances that are most recently added to the scaling group.
    // *   OldestScalingConfiguration: removes ECS instances that are created based on the earliest scaling configuration.
    std::shared_ptr<vector<string>> removalPolicies_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling group that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The name of the scaling group. The name of each scaling group must be unique in a region. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    std::shared_ptr<string> scalingGroupName_ = nullptr;
    // The reclaim mode of the scaling group. Valid values:
    // 
    // *   recycle: economical mode
    // 
    // *   release: release mode
    // 
    // *   forcerelease: forced release mode
    // 
    //     **
    // 
    //     **Note** If you set the value to `forcerelease`, Auto Scaling forcibly releases instances that are in the `Running` state during scale-ins. Forced release is equivalent to power outage. If an instance is forcibly released, ephemeral data on the instance will be cleared and cannot be recovered. Exercise caution when you select this option.
    // 
    // *   forcerecycle: forced recycle mode
    // 
    //     **
    // 
    //     **Note** If you set the value to `forcerecycle`, Auto Scaling forcibly shuts down instances that are in the `Running` state during scale-ins. Forced shutdown is equivalent to power outage. If an instance is forcibly shut down, ephemeral data on the instance will be cleared and cannot be recovered. Exercise caution when you select this option.
    // 
    // ScalingPolicy specifies only the reclaim mode of the scaling group. RemovePolicy of the RemoveInstances operation specifies the manner how instances are removed from the scaling group. For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The allocation policy of preemptible instances. You can use this parameter to individually specify the allocation policy of preemptible instances. This parameter takes effect only when you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order to create the required number of preemptible instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of preemptible instances.
    // 
    // Default value: priority.
    std::shared_ptr<string> spotAllocationStrategy_ = nullptr;
    // The number of instance types that you specify. Auto Scaling creates preemptible instances of multiple instance types that are provided at the lowest price. Valid values: 0 to 10.
    // 
    // If you set the `MultiAZPolicy` parameter to `COMPOSABLE` Policy, the default value is 2.
    std::shared_ptr<int32_t> spotInstancePools_ = nullptr;
    // Specifies whether to supplement preemptible instances. If this parameter is set to true, Auto Scaling creates an instance to replace a preemptible instance when Auto Scaling receives the system message that the preemptible instance is to be reclaimed.
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The period of time that is required by the Elastic Compute Service (ECS) instance to enter the Stopped state during the scale-in process. Unit: seconds. Valid values: 30 to 240.
    // 
    // > 
    // 
    // *   This parameter takes effect only if you set ScalingPolicy to release.\\
    //     If you specify this parameter, the system proceeds with the scale-in process only after the period of time specified by StopInstanceTimeout ends. In this case, the scale-in operation continues regardless of whether the ECS instance enters the Stopped state or not.\\
    //     If you do not specify this parameter, the system proceeds with the scale-in process only after the ECS instance enters the Stopped state. If the ECS instance fails to enter the Stopped state, the scale-in process rolls back, and the scale-in operation is considered as failed.
    // 
    // *   When you call the ModifyScalingGroup operation, you can set the value to 0. In this case, the system ignores this parameter.
    std::shared_ptr<int32_t> stopInstanceTimeout_ = nullptr;
    // The IDs of vSwitches.
    // 
    // This parameter takes effect only when the network type of the scaling group is virtual private cloud (VPC). The specified vSwitches and the scaling group must reside in the same VPC.
    // 
    // The vSwitches can reside in different zones. The vSwitches are sorted in ascending order. The first vSwitch specified by using the VSwitchIds parameter has the highest priority. If Auto Scaling fails to create ECS instances in the zone where the vSwitch that has the highest priority resides, Auto Scaling creates ECS instances in the zone where the vSwitch that has the next highest priority resides.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
