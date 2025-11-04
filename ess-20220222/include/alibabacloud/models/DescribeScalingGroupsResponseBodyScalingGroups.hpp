// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsDBInstances.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsServerGroups.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsTags.hpp>
#include <alibabacloud/models/DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveCapacity, activeCapacity_);
      DARABONBA_PTR_TO_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_TO_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_TO_JSON(BalanceMode, balanceMode_);
      DARABONBA_PTR_TO_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CurrentHostName, currentHostName_);
      DARABONBA_PTR_TO_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_TO_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_TO_JSON(EnableDesiredCapacity, enableDesiredCapacity_);
      DARABONBA_PTR_TO_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_TO_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_TO_JSON(IsElasticStrengthInAlarm, isElasticStrengthInAlarm_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_TO_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(MonitorGroupId, monitorGroupId_);
      DARABONBA_PTR_TO_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_TO_JSON(PendingCapacity, pendingCapacity_);
      DARABONBA_PTR_TO_JSON(PendingWaitCapacity, pendingWaitCapacity_);
      DARABONBA_PTR_TO_JSON(ProtectedCapacity, protectedCapacity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_TO_JSON(RemovingCapacity, removingCapacity_);
      DARABONBA_PTR_TO_JSON(RemovingWaitCapacity, removingWaitCapacity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_TO_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(SpotCapacity, spotCapacity_);
      DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_TO_JSON(StandbyCapacity, standbyCapacity_);
      DARABONBA_PTR_TO_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_TO_JSON(StoppedCapacity, stoppedCapacity_);
      DARABONBA_PTR_TO_JSON(SuspendedProcesses, suspendedProcesses_);
      DARABONBA_PTR_TO_JSON(SystemSuspended, systemSuspended_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
      DARABONBA_PTR_TO_JSON(VServerGroups, VServerGroups_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveCapacity, activeCapacity_);
      DARABONBA_PTR_FROM_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_FROM_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_FROM_JSON(BalanceMode, balanceMode_);
      DARABONBA_PTR_FROM_JSON(CapacityOptions, capacityOptions_);
      DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CurrentHostName, currentHostName_);
      DARABONBA_PTR_FROM_JSON(CustomPolicyARN, customPolicyARN_);
      DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(DefaultCooldown, defaultCooldown_);
      DARABONBA_PTR_FROM_JSON(DesiredCapacity, desiredCapacity_);
      DARABONBA_PTR_FROM_JSON(EnableDesiredCapacity, enableDesiredCapacity_);
      DARABONBA_PTR_FROM_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTypes, healthCheckTypes_);
      DARABONBA_PTR_FROM_JSON(InitCapacity, initCapacity_);
      DARABONBA_PTR_FROM_JSON(IsElasticStrengthInAlarm, isElasticStrengthInAlarm_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateOverrides, launchTemplateOverrides_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerConfigs, loadBalancerConfigs_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(MaxInstanceLifetime, maxInstanceLifetime_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(MonitorGroupId, monitorGroupId_);
      DARABONBA_PTR_FROM_JSON(MultiAZPolicy, multiAZPolicy_);
      DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
      DARABONBA_PTR_FROM_JSON(PendingCapacity, pendingCapacity_);
      DARABONBA_PTR_FROM_JSON(PendingWaitCapacity, pendingWaitCapacity_);
      DARABONBA_PTR_FROM_JSON(ProtectedCapacity, protectedCapacity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovalPolicies, removalPolicies_);
      DARABONBA_PTR_FROM_JSON(RemovingCapacity, removingCapacity_);
      DARABONBA_PTR_FROM_JSON(RemovingWaitCapacity, removingWaitCapacity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_FROM_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(SpotCapacity, spotCapacity_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
      DARABONBA_PTR_FROM_JSON(StandbyCapacity, standbyCapacity_);
      DARABONBA_PTR_FROM_JSON(StopInstanceTimeout, stopInstanceTimeout_);
      DARABONBA_PTR_FROM_JSON(StoppedCapacity, stoppedCapacity_);
      DARABONBA_PTR_FROM_JSON(SuspendedProcesses, suspendedProcesses_);
      DARABONBA_PTR_FROM_JSON(SystemSuspended, systemSuspended_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
      DARABONBA_PTR_FROM_JSON(VServerGroups, VServerGroups_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeScalingGroupsResponseBodyScalingGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroups(const DescribeScalingGroupsResponseBodyScalingGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroups(DescribeScalingGroupsResponseBodyScalingGroups &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroups() = default ;
    DescribeScalingGroupsResponseBodyScalingGroups& operator=(const DescribeScalingGroupsResponseBodyScalingGroups &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroups& operator=(DescribeScalingGroupsResponseBodyScalingGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeCapacity_ == nullptr
        && return this->activeScalingConfigurationId_ == nullptr && return this->albServerGroups_ == nullptr && return this->allocationStrategy_ == nullptr && return this->autoRebalance_ == nullptr && return this->azBalance_ == nullptr
        && return this->balanceMode_ == nullptr && return this->capacityOptions_ == nullptr && return this->compensateWithOnDemand_ == nullptr && return this->creationTime_ == nullptr && return this->currentHostName_ == nullptr
        && return this->customPolicyARN_ == nullptr && return this->DBInstanceIds_ == nullptr && return this->DBInstances_ == nullptr && return this->defaultCooldown_ == nullptr && return this->desiredCapacity_ == nullptr
        && return this->enableDesiredCapacity_ == nullptr && return this->groupDeletionProtection_ == nullptr && return this->groupType_ == nullptr && return this->healthCheckType_ == nullptr && return this->healthCheckTypes_ == nullptr
        && return this->initCapacity_ == nullptr && return this->isElasticStrengthInAlarm_ == nullptr && return this->launchTemplateId_ == nullptr && return this->launchTemplateOverrides_ == nullptr && return this->launchTemplateVersion_ == nullptr
        && return this->lifecycleState_ == nullptr && return this->loadBalancerConfigs_ == nullptr && return this->loadBalancerIds_ == nullptr && return this->maxInstanceLifetime_ == nullptr && return this->maxSize_ == nullptr
        && return this->minSize_ == nullptr && return this->modificationTime_ == nullptr && return this->monitorGroupId_ == nullptr && return this->multiAZPolicy_ == nullptr && return this->onDemandBaseCapacity_ == nullptr
        && return this->onDemandPercentageAboveBaseCapacity_ == nullptr && return this->pendingCapacity_ == nullptr && return this->pendingWaitCapacity_ == nullptr && return this->protectedCapacity_ == nullptr && return this->regionId_ == nullptr
        && return this->removalPolicies_ == nullptr && return this->removingCapacity_ == nullptr && return this->removingWaitCapacity_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scalingGroupId_ == nullptr
        && return this->scalingGroupName_ == nullptr && return this->scalingPolicy_ == nullptr && return this->serverGroups_ == nullptr && return this->spotAllocationStrategy_ == nullptr && return this->spotCapacity_ == nullptr
        && return this->spotInstancePools_ == nullptr && return this->spotInstanceRemedy_ == nullptr && return this->standbyCapacity_ == nullptr && return this->stopInstanceTimeout_ == nullptr && return this->stoppedCapacity_ == nullptr
        && return this->suspendedProcesses_ == nullptr && return this->systemSuspended_ == nullptr && return this->tags_ == nullptr && return this->totalCapacity_ == nullptr && return this->totalInstanceCount_ == nullptr
        && return this->VServerGroups_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // activeCapacity Field Functions 
    bool hasActiveCapacity() const { return this->activeCapacity_ != nullptr;};
    void deleteActiveCapacity() { this->activeCapacity_ = nullptr;};
    inline int32_t activeCapacity() const { DARABONBA_PTR_GET_DEFAULT(activeCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setActiveCapacity(int32_t activeCapacity) { DARABONBA_PTR_SET_VALUE(activeCapacity_, activeCapacity) };


    // activeScalingConfigurationId Field Functions 
    bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
    void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
    inline string activeScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups> & albServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups> albServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setAlbServerGroups(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setAlbServerGroups(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string allocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // autoRebalance Field Functions 
    bool hasAutoRebalance() const { return this->autoRebalance_ != nullptr;};
    void deleteAutoRebalance() { this->autoRebalance_ = nullptr;};
    inline bool autoRebalance() const { DARABONBA_PTR_GET_DEFAULT(autoRebalance_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setAutoRebalance(bool autoRebalance) { DARABONBA_PTR_SET_VALUE(autoRebalance_, autoRebalance) };


    // azBalance Field Functions 
    bool hasAzBalance() const { return this->azBalance_ != nullptr;};
    void deleteAzBalance() { this->azBalance_ = nullptr;};
    inline bool azBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


    // balanceMode Field Functions 
    bool hasBalanceMode() const { return this->balanceMode_ != nullptr;};
    void deleteBalanceMode() { this->balanceMode_ = nullptr;};
    inline string balanceMode() const { DARABONBA_PTR_GET_DEFAULT(balanceMode_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setBalanceMode(string balanceMode) { DARABONBA_PTR_SET_VALUE(balanceMode_, balanceMode) };


    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions & capacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions) };
    inline Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions capacityOptions() { DARABONBA_PTR_GET(capacityOptions_, Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCapacityOptions(const Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCapacityOptions(Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool compensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // currentHostName Field Functions 
    bool hasCurrentHostName() const { return this->currentHostName_ != nullptr;};
    void deleteCurrentHostName() { this->currentHostName_ = nullptr;};
    inline string currentHostName() const { DARABONBA_PTR_GET_DEFAULT(currentHostName_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCurrentHostName(string currentHostName) { DARABONBA_PTR_SET_VALUE(currentHostName_, currentHostName) };


    // customPolicyARN Field Functions 
    bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
    void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
    inline string customPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline const vector<string> & DBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
    inline vector<string> DBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDBInstances(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDBInstances(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // defaultCooldown Field Functions 
    bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
    void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
    inline int32_t defaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t desiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // enableDesiredCapacity Field Functions 
    bool hasEnableDesiredCapacity() const { return this->enableDesiredCapacity_ != nullptr;};
    void deleteEnableDesiredCapacity() { this->enableDesiredCapacity_ = nullptr;};
    inline bool enableDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(enableDesiredCapacity_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setEnableDesiredCapacity(bool enableDesiredCapacity) { DARABONBA_PTR_SET_VALUE(enableDesiredCapacity_, enableDesiredCapacity) };


    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool groupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckTypes Field Functions 
    bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
    void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
    inline const vector<string> & healthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
    inline vector<string> healthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


    // initCapacity Field Functions 
    bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
    void deleteInitCapacity() { this->initCapacity_ = nullptr;};
    inline int32_t initCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setInitCapacity(int32_t initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


    // isElasticStrengthInAlarm Field Functions 
    bool hasIsElasticStrengthInAlarm() const { return this->isElasticStrengthInAlarm_ != nullptr;};
    void deleteIsElasticStrengthInAlarm() { this->isElasticStrengthInAlarm_ = nullptr;};
    inline bool isElasticStrengthInAlarm() const { DARABONBA_PTR_GET_DEFAULT(isElasticStrengthInAlarm_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setIsElasticStrengthInAlarm(bool isElasticStrengthInAlarm) { DARABONBA_PTR_SET_VALUE(isElasticStrengthInAlarm_, isElasticStrengthInAlarm) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides> & launchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides> launchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLaunchTemplateOverrides(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLaunchTemplateOverrides(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string lifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // loadBalancerConfigs Field Functions 
    bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
    void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs> & loadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs> loadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLoadBalancerConfigs(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLoadBalancerConfigs(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // maxInstanceLifetime Field Functions 
    bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
    void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
    inline int32_t maxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t maxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // monitorGroupId Field Functions 
    bool hasMonitorGroupId() const { return this->monitorGroupId_ != nullptr;};
    void deleteMonitorGroupId() { this->monitorGroupId_ = nullptr;};
    inline string monitorGroupId() const { DARABONBA_PTR_GET_DEFAULT(monitorGroupId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setMonitorGroupId(string monitorGroupId) { DARABONBA_PTR_SET_VALUE(monitorGroupId_, monitorGroupId) };


    // multiAZPolicy Field Functions 
    bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
    void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
    inline string multiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t onDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t onDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // pendingCapacity Field Functions 
    bool hasPendingCapacity() const { return this->pendingCapacity_ != nullptr;};
    void deletePendingCapacity() { this->pendingCapacity_ = nullptr;};
    inline int32_t pendingCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setPendingCapacity(int32_t pendingCapacity) { DARABONBA_PTR_SET_VALUE(pendingCapacity_, pendingCapacity) };


    // pendingWaitCapacity Field Functions 
    bool hasPendingWaitCapacity() const { return this->pendingWaitCapacity_ != nullptr;};
    void deletePendingWaitCapacity() { this->pendingWaitCapacity_ = nullptr;};
    inline int32_t pendingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingWaitCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setPendingWaitCapacity(int32_t pendingWaitCapacity) { DARABONBA_PTR_SET_VALUE(pendingWaitCapacity_, pendingWaitCapacity) };


    // protectedCapacity Field Functions 
    bool hasProtectedCapacity() const { return this->protectedCapacity_ != nullptr;};
    void deleteProtectedCapacity() { this->protectedCapacity_ = nullptr;};
    inline int32_t protectedCapacity() const { DARABONBA_PTR_GET_DEFAULT(protectedCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setProtectedCapacity(int32_t protectedCapacity) { DARABONBA_PTR_SET_VALUE(protectedCapacity_, protectedCapacity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removalPolicies Field Functions 
    bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
    void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
    inline const vector<string> & removalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
    inline vector<string> removalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


    // removingCapacity Field Functions 
    bool hasRemovingCapacity() const { return this->removingCapacity_ != nullptr;};
    void deleteRemovingCapacity() { this->removingCapacity_ = nullptr;};
    inline int32_t removingCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setRemovingCapacity(int32_t removingCapacity) { DARABONBA_PTR_SET_VALUE(removingCapacity_, removingCapacity) };


    // removingWaitCapacity Field Functions 
    bool hasRemovingWaitCapacity() const { return this->removingWaitCapacity_ != nullptr;};
    void deleteRemovingWaitCapacity() { this->removingWaitCapacity_ = nullptr;};
    inline int32_t removingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingWaitCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setRemovingWaitCapacity(int32_t removingWaitCapacity) { DARABONBA_PTR_SET_VALUE(removingWaitCapacity_, removingWaitCapacity) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string scalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // serverGroups Field Functions 
    bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
    void deleteServerGroups() { this->serverGroups_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups> & serverGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups> serverGroups() { DARABONBA_PTR_GET(serverGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setServerGroups(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setServerGroups(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string spotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotCapacity Field Functions 
    bool hasSpotCapacity() const { return this->spotCapacity_ != nullptr;};
    void deleteSpotCapacity() { this->spotCapacity_ = nullptr;};
    inline int32_t spotCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSpotCapacity(int32_t spotCapacity) { DARABONBA_PTR_SET_VALUE(spotCapacity_, spotCapacity) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t spotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool spotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // standbyCapacity Field Functions 
    bool hasStandbyCapacity() const { return this->standbyCapacity_ != nullptr;};
    void deleteStandbyCapacity() { this->standbyCapacity_ = nullptr;};
    inline int32_t standbyCapacity() const { DARABONBA_PTR_GET_DEFAULT(standbyCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setStandbyCapacity(int32_t standbyCapacity) { DARABONBA_PTR_SET_VALUE(standbyCapacity_, standbyCapacity) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t stopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


    // stoppedCapacity Field Functions 
    bool hasStoppedCapacity() const { return this->stoppedCapacity_ != nullptr;};
    void deleteStoppedCapacity() { this->stoppedCapacity_ = nullptr;};
    inline int32_t stoppedCapacity() const { DARABONBA_PTR_GET_DEFAULT(stoppedCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setStoppedCapacity(int32_t stoppedCapacity) { DARABONBA_PTR_SET_VALUE(stoppedCapacity_, stoppedCapacity) };


    // suspendedProcesses Field Functions 
    bool hasSuspendedProcesses() const { return this->suspendedProcesses_ != nullptr;};
    void deleteSuspendedProcesses() { this->suspendedProcesses_ = nullptr;};
    inline const vector<string> & suspendedProcesses() const { DARABONBA_PTR_GET_CONST(suspendedProcesses_, vector<string>) };
    inline vector<string> suspendedProcesses() { DARABONBA_PTR_GET(suspendedProcesses_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSuspendedProcesses(const vector<string> & suspendedProcesses) { DARABONBA_PTR_SET_VALUE(suspendedProcesses_, suspendedProcesses) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSuspendedProcesses(vector<string> && suspendedProcesses) { DARABONBA_PTR_SET_RVALUE(suspendedProcesses_, suspendedProcesses) };


    // systemSuspended Field Functions 
    bool hasSystemSuspended() const { return this->systemSuspended_ != nullptr;};
    void deleteSystemSuspended() { this->systemSuspended_ = nullptr;};
    inline bool systemSuspended() const { DARABONBA_PTR_GET_DEFAULT(systemSuspended_, false) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setSystemSuspended(bool systemSuspended) { DARABONBA_PTR_SET_VALUE(systemSuspended_, systemSuspended) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setTags(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setTags(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline int32_t totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setTotalCapacity(int32_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // totalInstanceCount Field Functions 
    bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
    void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
    inline int32_t totalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setTotalInstanceCount(int32_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups> & VServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups>) };
    inline vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups> VServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVServerGroups(const vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups> & VServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, VServerGroups) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVServerGroups(vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups> && VServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, VServerGroups) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of ECS instances that are in the In Service state in the scaling group.
    std::shared_ptr<int32_t> activeCapacity_ = nullptr;
    // The ID of the active scaling configuration in the scaling group.
    std::shared_ptr<string> activeScalingConfigurationId_ = nullptr;
    // The Application Load Balancer (ALB) server groups.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsAlbServerGroups>> albServerGroups_ = nullptr;
    // The instance allocation policy. Auto Scaling selects instance types based on the allocation policy to create the required number of preemptible instances. The policy is suitable for pay-as-you-go instances and preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling adopts the predefined instance type sequence to create the required number of preemptible instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the most economical vCPU pricing to create the required number of instances.
    std::shared_ptr<string> allocationStrategy_ = nullptr;
    std::shared_ptr<bool> autoRebalance_ = nullptr;
    // Indicates whether instances in the scaling group are evenly distributed across the specified zones. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> azBalance_ = nullptr;
    std::shared_ptr<string> balanceMode_ = nullptr;
    // The capacity options.
    std::shared_ptr<Models::DescribeScalingGroupsResponseBodyScalingGroupsCapacityOptions> capacityOptions_ = nullptr;
    // Indicates whether Auto Scaling can create pay-as-you-go instances to supplement preemptible instances if preemptible instances cannot be created due to price-related factors or insufficient inventory when MultiAZPolicy is set to COST_OPTIMIZED. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> compensateWithOnDemand_ = nullptr;
    // The time when the scaling group was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // >  This parameter is unavailable.
    std::shared_ptr<string> currentHostName_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the function that is specified in the custom scale-in policy. This parameter takes effect only if you set the first value of RemovalPolicies to CustomPolicy.
    std::shared_ptr<string> customPolicyARN_ = nullptr;
    // The IDs of the ApsaraDB RDS instances that are attached to the scaling group.
    std::shared_ptr<vector<string>> DBInstanceIds_ = nullptr;
    // The databases that are attached to the scaling group.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsDBInstances>> DBInstances_ = nullptr;
    // The cooldown period of the scaling group. During the cooldown period, Auto Scaling does not execute the scaling activities that are triggered by [CloudMonitor](https://help.aliyun.com/document_detail/35170.html) event-triggered tasks.
    std::shared_ptr<int32_t> defaultCooldown_ = nullptr;
    // The expected number of ECS instances in the scaling group. Auto Scaling automatically maintains the expected number of ECS instances.
    std::shared_ptr<int32_t> desiredCapacity_ = nullptr;
    // Indicates whether the Expected Number of Instances feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableDesiredCapacity_ = nullptr;
    // Indicates whether the Deletion Protection feature is enabled for the scaling group. Valid values:
    // 
    // *   true: The Deletion Protection feature is enabled for the scaling group. The scaling group cannot be deleted.
    // *   false: The Deletion Protection feature is disabled for the scaling group.
    std::shared_ptr<bool> groupDeletionProtection_ = nullptr;
    // The type of instances that are managed by the scaling group.
    std::shared_ptr<string> groupType_ = nullptr;
    // The health check mode of the scaling group. Valid values:
    // 
    // *   NONE: Auto Scaling does not perform health checks.
    // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
    // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of Classic Load Balancer (CLB) instances are not supported as the health check basis for instances in the scaling group.
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The health check mode of the scaling group. Valid values:
    // 
    // *   NONE: Auto Scaling does not perform health checks.
    // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
    // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of CLB instances are not supported as the health check basis for instances in the scaling group.
    std::shared_ptr<vector<string>> healthCheckTypes_ = nullptr;
    // The number of instances that are initialized before they are added into the scaling group.
    std::shared_ptr<int32_t> initCapacity_ = nullptr;
    // >  This parameter is not available for use.
    std::shared_ptr<bool> isElasticStrengthInAlarm_ = nullptr;
    // The ID of the launch template that is used by the scaling group.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The instance types that are extended in the launch template.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides>> launchTemplateOverrides_ = nullptr;
    // The version of the launch template that is used by the scaling group.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The status of the scaling group. Valid values:
    // 
    // *   Active: The scaling group is active. Active scaling groups can receive requests to execute scaling rules and trigger scaling activities.
    // *   Inactive: The scaling group is in the Disabled state. Disabled scaling groups cannot receive requests to execute scaling rules.
    // *   Deleting: The scaling group is being deleted. Scaling groups that are being deleted cannot receive requests to execute scaling rules, and the parameter settings of the scaling groups cannot be modified.
    std::shared_ptr<string> lifecycleState_ = nullptr;
    // The load balancer configurations.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsLoadBalancerConfigs>> loadBalancerConfigs_ = nullptr;
    // The IDs of the load balancers that are attached to the scaling group.
    std::shared_ptr<vector<string>> loadBalancerIds_ = nullptr;
    // The maximum life span of each ECS instance in the scaling group. Unit: seconds.
    // 
    // Valid values: 0 or `[86400, Integer.maxValue]`. A value of 0 for MaxInstanceLifetime indicates that a previously set limit has been removed. This effectively disables the maximum instance lifetime constraint.
    // 
    // Default value: null.
    // 
    // >  This parameter is not supported by scaling groups of the Elastic Container Instance type and scaling groups whose ScalingPolicy is set to Recycle.
    std::shared_ptr<int32_t> maxInstanceLifetime_ = nullptr;
    // The maximum number of ECS instances that can be contained in the scaling group.
    std::shared_ptr<int32_t> maxSize_ = nullptr;
    // The minimum number of ECS instances that must be contained in the scaling group.
    std::shared_ptr<int32_t> minSize_ = nullptr;
    // The time when the scaling group was last modified.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The ID of the CloudMonitor application group that is associated with the scaling group.
    std::shared_ptr<string> monitorGroupId_ = nullptr;
    // The scaling policy of the ECS instances in the multi-zone scaling group. Valid values:
    // 
    // *   PRIORITY: ECS instances are created based on the value of VSwitchIds. If Auto Scaling cannot create ECS instances in the zone where the vSwitch of the highest priority resides, Auto Scaling creates ECS instances in the zone where the vSwitch of the next highest priority resides.
    // 
    // *   COST_OPTIMIZED: ECS instances are created based on the unit prices of their vCPUs. Auto Scaling preferentially creates ECS instances whose vCPUs are provided at the lowest price. If preemptible instance types are specified in the scaling configuration, Auto Scaling preferentially creates preemptible instances. You can also specify CompensateWithOnDemand to allow Auto Scaling to create pay-as-you-go instances if preemptible instances cannot be created due to limited stock.
    // 
    //     **
    // 
    //     **Note** The COST_OPTIMIZED setting takes effect only if your scaling configuration contains multiple instance types or contains preemptible instance types.
    // 
    // *   BALANCE: ECS instances are evenly distributed across the zones that are specified for the scaling group. If ECS instances become unevenly distributed across the specified zones due to limited instance type availability, you can call the RebalanceInstance operation to balance the distribution of the ECS instances.
    std::shared_ptr<string> multiAZPolicy_ = nullptr;
    // The minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
    std::shared_ptr<int32_t> onDemandBaseCapacity_ = nullptr;
    // The percentage of pay-as-you-go instances in excess when the minimum number of pay-as-you-go instances reaches the threshold. Valid values: 0 to 100.
    std::shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ = nullptr;
    // The number of ECS instances that are being added to the scaling group and configured.
    std::shared_ptr<int32_t> pendingCapacity_ = nullptr;
    // The number of ECS instances that are in the Pending Add state in the scaling group.
    std::shared_ptr<int32_t> pendingWaitCapacity_ = nullptr;
    // The number of ECS instances that are in the Protected state in the scaling group.
    std::shared_ptr<int32_t> protectedCapacity_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance removal policies. Valid values:
    // 
    // *   OldestInstance: Auto Scaling removes ECS instances that are added at the earliest point in time to the scaling group.
    // *   NewestInstance: Auto Scaling removes ECS instances that are most recently added to the scaling group.
    // *   OldestScalingConfiguration: Auto Scaling removes ECS instances that are created from the earliest scaling configuration.
    std::shared_ptr<vector<string>> removalPolicies_ = nullptr;
    // The number of ECS instances that are being removed from the scaling group.
    std::shared_ptr<int32_t> removingCapacity_ = nullptr;
    // The number of ECS instances that are in the Pending Remove state in the scaling group.
    std::shared_ptr<int32_t> removingWaitCapacity_ = nullptr;
    // The ID of the resource group to which the scaling group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The name of the scaling group.
    std::shared_ptr<string> scalingGroupName_ = nullptr;
    // The instance reclaim mode of the scaling group. Valid values:
    // 
    // *   recycle: economical mode.
    // *   release: release mode.
    // *   forcerelease: forced release mode.
    // 
    // For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The server groups.
    // 
    // >  You can use this parameter to obtain information about ALB server groups and Network Load Balancer (NLB) server groups attached to the scaling group.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsServerGroups>> serverGroups_ = nullptr;
    // The allocation policy of preemptible instances. This parameter indicates the manner in which Auto Scaling selects instance types to create the required number of preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling adopts the predefined instance type sequence to create the required number of preemptible instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the most economical vCPU pricing to create the required number of preemptible instances.
    // 
    // Default value: priority.
    std::shared_ptr<string> spotAllocationStrategy_ = nullptr;
    // The number of preemptible instances in the scaling group.
    std::shared_ptr<int32_t> spotCapacity_ = nullptr;
    // The number of instance types in the scaling group. Auto Scaling evenly creates preemptible instances of multiple instance types that are provided at the lowest price across the zones of the scaling group. Valid values: 0 to 10.
    std::shared_ptr<int32_t> spotInstancePools_ = nullptr;
    // Indicates whether preemptible instances can be supplemented. If this parameter is set to true, Auto Scaling proactively creates instances to replace the preemptible instances for reclamation when Auto Scaling receives a system notification.
    std::shared_ptr<bool> spotInstanceRemedy_ = nullptr;
    // The number of ECS instances that are in the Standby state in the scaling group.
    std::shared_ptr<int32_t> standbyCapacity_ = nullptr;
    // The period of time that is required by the Elastic Compute Service (ECS) instance to enter the Stopped state during the scale-in process. Unit: seconds.
    std::shared_ptr<int32_t> stopInstanceTimeout_ = nullptr;
    // The number of instances that was stopped in Economical Mode in the scaling group.
    std::shared_ptr<int32_t> stoppedCapacity_ = nullptr;
    // The processes that are suspended. If no process is suspended, null is returned. Valid values:
    // 
    // *   ScaleIn: scale-in processes.
    // *   ScaleOut: scale-out processes.
    // *   HealthCheck: health check processes.
    // *   AlarmNotification: event-triggered task processes.
    // *   ScheduledAction: scheduled task processes.
    std::shared_ptr<vector<string>> suspendedProcesses_ = nullptr;
    // Indicates whether Auto Scaling stops executing scaling activities in the scaling group. Valid values:
    // 
    // *   true: Auto Scaling stops executing scaling activities in the scaling group if the scaling activities failed for more than seven consecutive days in the scaling group. In this case, you must modify the scaling group or scaling configuration to resume the scaling activities.
    // *   false: Auto Scaling does not stop executing scaling activities in the scaling group.
    std::shared_ptr<bool> systemSuspended_ = nullptr;
    // The tags of the scaling group.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsTags>> tags_ = nullptr;
    // The total weighted capacity of all ECS instances in the scaling group if Weighted is specified. In other cases, this parameter specifies the total number of ECS instances in the scaling group.
    std::shared_ptr<int32_t> totalCapacity_ = nullptr;
    // The total number of ECS instances in the scaling group.
    std::shared_ptr<int32_t> totalInstanceCount_ = nullptr;
    // The backend vServer groups.
    std::shared_ptr<vector<Models::DescribeScalingGroupsResponseBodyScalingGroupsVServerGroups>> VServerGroups_ = nullptr;
    // The vSwitch ID of the scaling group.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The IDs of the vSwitches that are associated with the scaling group. If you specify VSwitchIds, VSwitchId is ignored.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the scaling group resides.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
