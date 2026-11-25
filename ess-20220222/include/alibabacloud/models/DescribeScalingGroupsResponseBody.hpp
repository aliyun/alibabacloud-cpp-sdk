// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODY_HPP_
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
  class DescribeScalingGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingGroups, scalingGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroups, scalingGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingGroupsResponseBody() = default ;
    DescribeScalingGroupsResponseBody(const DescribeScalingGroupsResponseBody &) = default ;
    DescribeScalingGroupsResponseBody(DescribeScalingGroupsResponseBody &&) = default ;
    DescribeScalingGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBody() = default ;
    DescribeScalingGroupsResponseBody& operator=(const DescribeScalingGroupsResponseBody &) = default ;
    DescribeScalingGroupsResponseBody& operator=(DescribeScalingGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingGroups& obj) { 
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
        DARABONBA_PTR_TO_JSON(WarmPoolCapacity, warmPoolCapacity_);
        DARABONBA_PTR_TO_JSON(WarmPoolConfiguration, warmPoolConfiguration_);
        DARABONBA_PTR_TO_JSON(ZoneShiftOptions, zoneShiftOptions_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingGroups& obj) { 
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
        DARABONBA_PTR_FROM_JSON(WarmPoolCapacity, warmPoolCapacity_);
        DARABONBA_PTR_FROM_JSON(WarmPoolConfiguration, warmPoolConfiguration_);
        DARABONBA_PTR_FROM_JSON(ZoneShiftOptions, zoneShiftOptions_);
      };
      ScalingGroups() = default ;
      ScalingGroups(const ScalingGroups &) = default ;
      ScalingGroups(ScalingGroups &&) = default ;
      ScalingGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingGroups() = default ;
      ScalingGroups& operator=(const ScalingGroups &) = default ;
      ScalingGroups& operator=(ScalingGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneShiftOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneShiftOptions& obj) { 
          DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_TO_JSON(ImpairedZoneIds, impairedZoneIds_);
          DARABONBA_PTR_TO_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneShiftOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_FROM_JSON(ImpairedZoneIds, impairedZoneIds_);
          DARABONBA_PTR_FROM_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
        };
        ZoneShiftOptions() = default ;
        ZoneShiftOptions(const ZoneShiftOptions &) = default ;
        ZoneShiftOptions(ZoneShiftOptions &&) = default ;
        ZoneShiftOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneShiftOptions() = default ;
        ZoneShiftOptions& operator=(const ZoneShiftOptions &) = default ;
        ZoneShiftOptions& operator=(ZoneShiftOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ZoneShiftPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ZoneShiftPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(ImpairedZoneHealthCheckBehavior, impairedZoneHealthCheckBehavior_);
            DARABONBA_PTR_TO_JSON(ScaleInBlockedRuleTypes, scaleInBlockedRuleTypes_);
            DARABONBA_PTR_TO_JSON(ScaleOutInHealthyZonesOnly, scaleOutInHealthyZonesOnly_);
          };
          friend void from_json(const Darabonba::Json& j, ZoneShiftPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(ImpairedZoneHealthCheckBehavior, impairedZoneHealthCheckBehavior_);
            DARABONBA_PTR_FROM_JSON(ScaleInBlockedRuleTypes, scaleInBlockedRuleTypes_);
            DARABONBA_PTR_FROM_JSON(ScaleOutInHealthyZonesOnly, scaleOutInHealthyZonesOnly_);
          };
          ZoneShiftPolicy() = default ;
          ZoneShiftPolicy(const ZoneShiftPolicy &) = default ;
          ZoneShiftPolicy(ZoneShiftPolicy &&) = default ;
          ZoneShiftPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ZoneShiftPolicy() = default ;
          ZoneShiftPolicy& operator=(const ZoneShiftPolicy &) = default ;
          ZoneShiftPolicy& operator=(ZoneShiftPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->impairedZoneHealthCheckBehavior_ == nullptr
        && this->scaleInBlockedRuleTypes_ == nullptr && this->scaleOutInHealthyZonesOnly_ == nullptr; };
          // impairedZoneHealthCheckBehavior Field Functions 
          bool hasImpairedZoneHealthCheckBehavior() const { return this->impairedZoneHealthCheckBehavior_ != nullptr;};
          void deleteImpairedZoneHealthCheckBehavior() { this->impairedZoneHealthCheckBehavior_ = nullptr;};
          inline string getImpairedZoneHealthCheckBehavior() const { DARABONBA_PTR_GET_DEFAULT(impairedZoneHealthCheckBehavior_, "") };
          inline ZoneShiftPolicy& setImpairedZoneHealthCheckBehavior(string impairedZoneHealthCheckBehavior) { DARABONBA_PTR_SET_VALUE(impairedZoneHealthCheckBehavior_, impairedZoneHealthCheckBehavior) };


          // scaleInBlockedRuleTypes Field Functions 
          bool hasScaleInBlockedRuleTypes() const { return this->scaleInBlockedRuleTypes_ != nullptr;};
          void deleteScaleInBlockedRuleTypes() { this->scaleInBlockedRuleTypes_ = nullptr;};
          inline const vector<string> & getScaleInBlockedRuleTypes() const { DARABONBA_PTR_GET_CONST(scaleInBlockedRuleTypes_, vector<string>) };
          inline vector<string> getScaleInBlockedRuleTypes() { DARABONBA_PTR_GET(scaleInBlockedRuleTypes_, vector<string>) };
          inline ZoneShiftPolicy& setScaleInBlockedRuleTypes(const vector<string> & scaleInBlockedRuleTypes) { DARABONBA_PTR_SET_VALUE(scaleInBlockedRuleTypes_, scaleInBlockedRuleTypes) };
          inline ZoneShiftPolicy& setScaleInBlockedRuleTypes(vector<string> && scaleInBlockedRuleTypes) { DARABONBA_PTR_SET_RVALUE(scaleInBlockedRuleTypes_, scaleInBlockedRuleTypes) };


          // scaleOutInHealthyZonesOnly Field Functions 
          bool hasScaleOutInHealthyZonesOnly() const { return this->scaleOutInHealthyZonesOnly_ != nullptr;};
          void deleteScaleOutInHealthyZonesOnly() { this->scaleOutInHealthyZonesOnly_ = nullptr;};
          inline bool getScaleOutInHealthyZonesOnly() const { DARABONBA_PTR_GET_DEFAULT(scaleOutInHealthyZonesOnly_, false) };
          inline ZoneShiftPolicy& setScaleOutInHealthyZonesOnly(bool scaleOutInHealthyZonesOnly) { DARABONBA_PTR_SET_VALUE(scaleOutInHealthyZonesOnly_, scaleOutInHealthyZonesOnly) };


        protected:
          // The health check behavior in impaired zones. Valid values: 
          // 
          // - ReplaceUnhealthy: Unhealthy instances in all zones are replaced normally.
          // - IgnoreUnhealthy: Unhealthy instances in impaired zones are not replaced. Healthy zones are not affected.
          shared_ptr<string> impairedZoneHealthCheckBehavior_ {};
          // Blocks scale-in triggered by specified types of scaling rules. The blocking scope covers all zones under the scaling group, not just the impaired zones. This prevents false scale-in caused by seemingly improved monitoring metrics due to unreachable instances in impaired zones. Valid values: 
          // 
          // - StepScalingRule: Blocks scale-in triggered by step scaling rules. 
          // - TargetTrackingScalingRule: Blocks scale-in triggered by target tracking scaling rules. 
          // - None: No blocking.
          shared_ptr<vector<string>> scaleInBlockedRuleTypes_ {};
          // Specifies whether scale-out creates instances only in healthy zones during the shift. Valid values: 
          // 
          // - true: Scale-out creates instances only in healthy zones and skips impaired zones. 
          // - false: Scale-out is not restricted by zone and can create instances in any zone under the scaling group.
          shared_ptr<bool> scaleOutInHealthyZonesOnly_ {};
        };

        virtual bool empty() const override { return this->expiryTime_ == nullptr
        && this->impairedZoneIds_ == nullptr && this->zoneShiftPolicy_ == nullptr; };
        // expiryTime Field Functions 
        bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
        void deleteExpiryTime() { this->expiryTime_ = nullptr;};
        inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
        inline ZoneShiftOptions& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


        // impairedZoneIds Field Functions 
        bool hasImpairedZoneIds() const { return this->impairedZoneIds_ != nullptr;};
        void deleteImpairedZoneIds() { this->impairedZoneIds_ = nullptr;};
        inline const vector<string> & getImpairedZoneIds() const { DARABONBA_PTR_GET_CONST(impairedZoneIds_, vector<string>) };
        inline vector<string> getImpairedZoneIds() { DARABONBA_PTR_GET(impairedZoneIds_, vector<string>) };
        inline ZoneShiftOptions& setImpairedZoneIds(const vector<string> & impairedZoneIds) { DARABONBA_PTR_SET_VALUE(impairedZoneIds_, impairedZoneIds) };
        inline ZoneShiftOptions& setImpairedZoneIds(vector<string> && impairedZoneIds) { DARABONBA_PTR_SET_RVALUE(impairedZoneIds_, impairedZoneIds) };


        // zoneShiftPolicy Field Functions 
        bool hasZoneShiftPolicy() const { return this->zoneShiftPolicy_ != nullptr;};
        void deleteZoneShiftPolicy() { this->zoneShiftPolicy_ = nullptr;};
        inline const ZoneShiftOptions::ZoneShiftPolicy & getZoneShiftPolicy() const { DARABONBA_PTR_GET_CONST(zoneShiftPolicy_, ZoneShiftOptions::ZoneShiftPolicy) };
        inline ZoneShiftOptions::ZoneShiftPolicy getZoneShiftPolicy() { DARABONBA_PTR_GET(zoneShiftPolicy_, ZoneShiftOptions::ZoneShiftPolicy) };
        inline ZoneShiftOptions& setZoneShiftPolicy(const ZoneShiftOptions::ZoneShiftPolicy & zoneShiftPolicy) { DARABONBA_PTR_SET_VALUE(zoneShiftPolicy_, zoneShiftPolicy) };
        inline ZoneShiftOptions& setZoneShiftPolicy(ZoneShiftOptions::ZoneShiftPolicy && zoneShiftPolicy) { DARABONBA_PTR_SET_RVALUE(zoneShiftPolicy_, zoneShiftPolicy) };


      protected:
        // The expiration time of the zone shift. After the expiration time, the system automatically ends the shift and restores the related zones. The time is displayed in UTC and follows the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format.
        shared_ptr<string> expiryTime_ {};
        // The list of impaired zone IDs.
        shared_ptr<vector<string>> impairedZoneIds_ {};
        // The behavior policy of the scaling group during the zone shift.
        shared_ptr<ZoneShiftOptions::ZoneShiftPolicy> zoneShiftPolicy_ {};
      };

      class WarmPoolConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarmPoolConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(CapacityOptions, capacityOptions_);
          DARABONBA_PTR_TO_JSON(InstanceReusePolicy, instanceReusePolicy_);
          DARABONBA_PTR_TO_JSON(PoolState, poolState_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, WarmPoolConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(CapacityOptions, capacityOptions_);
          DARABONBA_PTR_FROM_JSON(InstanceReusePolicy, instanceReusePolicy_);
          DARABONBA_PTR_FROM_JSON(PoolState, poolState_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        WarmPoolConfiguration() = default ;
        WarmPoolConfiguration(const WarmPoolConfiguration &) = default ;
        WarmPoolConfiguration(WarmPoolConfiguration &&) = default ;
        WarmPoolConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarmPoolConfiguration() = default ;
        WarmPoolConfiguration& operator=(const WarmPoolConfiguration &) = default ;
        WarmPoolConfiguration& operator=(WarmPoolConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceReusePolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceReusePolicy& obj) { 
            DARABONBA_PTR_TO_JSON(ReuseOnScaleIn, reuseOnScaleIn_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceReusePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(ReuseOnScaleIn, reuseOnScaleIn_);
          };
          InstanceReusePolicy() = default ;
          InstanceReusePolicy(const InstanceReusePolicy &) = default ;
          InstanceReusePolicy(InstanceReusePolicy &&) = default ;
          InstanceReusePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceReusePolicy() = default ;
          InstanceReusePolicy& operator=(const InstanceReusePolicy &) = default ;
          InstanceReusePolicy& operator=(InstanceReusePolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reuseOnScaleIn_ == nullptr; };
          // reuseOnScaleIn Field Functions 
          bool hasReuseOnScaleIn() const { return this->reuseOnScaleIn_ != nullptr;};
          void deleteReuseOnScaleIn() { this->reuseOnScaleIn_ = nullptr;};
          inline bool getReuseOnScaleIn() const { DARABONBA_PTR_GET_DEFAULT(reuseOnScaleIn_, false) };
          inline InstanceReusePolicy& setReuseOnScaleIn(bool reuseOnScaleIn) { DARABONBA_PTR_SET_VALUE(reuseOnScaleIn_, reuseOnScaleIn) };


        protected:
          // Specifies whether instances are returned to the warm pool when the scaling group scales in.
          shared_ptr<bool> reuseOnScaleIn_ {};
        };

        class CapacityOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CapacityOptions& obj) { 
            DARABONBA_PTR_TO_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
            DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
          };
          friend void from_json(const Darabonba::Json& j, CapacityOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(DesiredGroupPreparedCapacity, desiredGroupPreparedCapacity_);
            DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
          };
          CapacityOptions() = default ;
          CapacityOptions(const CapacityOptions &) = default ;
          CapacityOptions(CapacityOptions &&) = default ;
          CapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CapacityOptions() = default ;
          CapacityOptions& operator=(const CapacityOptions &) = default ;
          CapacityOptions& operator=(CapacityOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desiredGroupPreparedCapacity_ == nullptr
        && this->minCapacity_ == nullptr; };
          // desiredGroupPreparedCapacity Field Functions 
          bool hasDesiredGroupPreparedCapacity() const { return this->desiredGroupPreparedCapacity_ != nullptr;};
          void deleteDesiredGroupPreparedCapacity() { this->desiredGroupPreparedCapacity_ = nullptr;};
          inline int32_t getDesiredGroupPreparedCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredGroupPreparedCapacity_, 0) };
          inline CapacityOptions& setDesiredGroupPreparedCapacity(int32_t desiredGroupPreparedCapacity) { DARABONBA_PTR_SET_VALUE(desiredGroupPreparedCapacity_, desiredGroupPreparedCapacity) };


          // minCapacity Field Functions 
          bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
          void deleteMinCapacity() { this->minCapacity_ = nullptr;};
          inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
          inline CapacityOptions& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


        protected:
          // The expected number of pre-warmed instances to cover. The system maintains the sum of the current number of instances in the scaling group and the number of instances in the warm pool at this value.
          shared_ptr<int32_t> desiredGroupPreparedCapacity_ {};
          // The minimum number of instances in the warm pool. The system always retains no less than this number of pre-warmed instances in the warm pool to ensure rapid scale-out from the warm pool at any time.
          shared_ptr<int32_t> minCapacity_ {};
        };

        virtual bool empty() const override { return this->capacityOptions_ == nullptr
        && this->instanceReusePolicy_ == nullptr && this->poolState_ == nullptr && this->status_ == nullptr; };
        // capacityOptions Field Functions 
        bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
        void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
        inline const WarmPoolConfiguration::CapacityOptions & getCapacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, WarmPoolConfiguration::CapacityOptions) };
        inline WarmPoolConfiguration::CapacityOptions getCapacityOptions() { DARABONBA_PTR_GET(capacityOptions_, WarmPoolConfiguration::CapacityOptions) };
        inline WarmPoolConfiguration& setCapacityOptions(const WarmPoolConfiguration::CapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
        inline WarmPoolConfiguration& setCapacityOptions(WarmPoolConfiguration::CapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


        // instanceReusePolicy Field Functions 
        bool hasInstanceReusePolicy() const { return this->instanceReusePolicy_ != nullptr;};
        void deleteInstanceReusePolicy() { this->instanceReusePolicy_ = nullptr;};
        inline const WarmPoolConfiguration::InstanceReusePolicy & getInstanceReusePolicy() const { DARABONBA_PTR_GET_CONST(instanceReusePolicy_, WarmPoolConfiguration::InstanceReusePolicy) };
        inline WarmPoolConfiguration::InstanceReusePolicy getInstanceReusePolicy() { DARABONBA_PTR_GET(instanceReusePolicy_, WarmPoolConfiguration::InstanceReusePolicy) };
        inline WarmPoolConfiguration& setInstanceReusePolicy(const WarmPoolConfiguration::InstanceReusePolicy & instanceReusePolicy) { DARABONBA_PTR_SET_VALUE(instanceReusePolicy_, instanceReusePolicy) };
        inline WarmPoolConfiguration& setInstanceReusePolicy(WarmPoolConfiguration::InstanceReusePolicy && instanceReusePolicy) { DARABONBA_PTR_SET_RVALUE(instanceReusePolicy_, instanceReusePolicy) };


        // poolState Field Functions 
        bool hasPoolState() const { return this->poolState_ != nullptr;};
        void deletePoolState() { this->poolState_ = nullptr;};
        inline string getPoolState() const { DARABONBA_PTR_GET_DEFAULT(poolState_, "") };
        inline WarmPoolConfiguration& setPoolState(string poolState) { DARABONBA_PTR_SET_VALUE(poolState_, poolState) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline WarmPoolConfiguration& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The capacity configuration of the warm pool.
        shared_ptr<WarmPoolConfiguration::CapacityOptions> capacityOptions_ {};
        // The instance reuse policy.
        shared_ptr<WarmPoolConfiguration::InstanceReusePolicy> instanceReusePolicy_ {};
        // The state of instances in the warm pool. Valid values:
        // 
        // - Running: The instances are in the running state. Scale-out is faster, but you are charged for the full cost of the instances.
        // 
        // - Stopped: The instances are in the economical mode. You are charged only for resources such as cloud disks, elastic IP addresses (EIPs), and snapshots of the instances. However, instance startup may fail during scale-out due to insufficient inventory.
        shared_ptr<string> poolState_ {};
        // The status of the warm pool. Valid values:
        // 
        // - Active: Active.
        // 
        // - Deleting: Deleting.
        shared_ptr<string> status_ {};
      };

      class VServerGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VServerGroups& obj) { 
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(VServerGroupAttributes, VServerGroupAttributes_);
        };
        friend void from_json(const Darabonba::Json& j, VServerGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(VServerGroupAttributes, VServerGroupAttributes_);
        };
        VServerGroups() = default ;
        VServerGroups(const VServerGroups &) = default ;
        VServerGroups(VServerGroups &&) = default ;
        VServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VServerGroups() = default ;
        VServerGroups& operator=(const VServerGroups &) = default ;
        VServerGroups& operator=(VServerGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VServerGroupAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VServerGroupAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, VServerGroupAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          VServerGroupAttributes() = default ;
          VServerGroupAttributes(const VServerGroupAttributes &) = default ;
          VServerGroupAttributes(VServerGroupAttributes &&) = default ;
          VServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VServerGroupAttributes() = default ;
          VServerGroupAttributes& operator=(const VServerGroupAttributes &) = default ;
          VServerGroupAttributes& operator=(VServerGroupAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->port_ == nullptr
        && this->VServerGroupId_ == nullptr && this->weight_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline VServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // VServerGroupId Field Functions 
          bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
          void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
          inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
          inline VServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline VServerGroupAttributes& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // The port number used by the load balancing instance to provide services.
          shared_ptr<int32_t> port_ {};
          // The attributes of the backend server group.
          shared_ptr<string> VServerGroupId_ {};
          // The weight of the backend server group.
          shared_ptr<int32_t> weight_ {};
        };

        virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->VServerGroupAttributes_ == nullptr; };
        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline VServerGroups& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // VServerGroupAttributes Field Functions 
        bool hasVServerGroupAttributes() const { return this->VServerGroupAttributes_ != nullptr;};
        void deleteVServerGroupAttributes() { this->VServerGroupAttributes_ = nullptr;};
        inline const vector<VServerGroups::VServerGroupAttributes> & getVServerGroupAttributes() const { DARABONBA_PTR_GET_CONST(VServerGroupAttributes_, vector<VServerGroups::VServerGroupAttributes>) };
        inline vector<VServerGroups::VServerGroupAttributes> getVServerGroupAttributes() { DARABONBA_PTR_GET(VServerGroupAttributes_, vector<VServerGroups::VServerGroupAttributes>) };
        inline VServerGroups& setVServerGroupAttributes(const vector<VServerGroups::VServerGroupAttributes> & vServerGroupAttributes) { DARABONBA_PTR_SET_VALUE(VServerGroupAttributes_, vServerGroupAttributes) };
        inline VServerGroups& setVServerGroupAttributes(vector<VServerGroups::VServerGroupAttributes> && vServerGroupAttributes) { DARABONBA_PTR_SET_RVALUE(VServerGroupAttributes_, vServerGroupAttributes) };


      protected:
        // The ID of the load balancing instance to which the backend server group belongs.
        shared_ptr<string> loadBalancerId_ {};
        // The attributes of the backend server group.
        shared_ptr<vector<VServerGroups::VServerGroupAttributes>> VServerGroupAttributes_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Propagate, propagate_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Propagate, propagate_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->propagate_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // propagate Field Functions 
        bool hasPropagate() const { return this->propagate_ != nullptr;};
        void deletePropagate() { this->propagate_ = nullptr;};
        inline bool getPropagate() const { DARABONBA_PTR_GET_DEFAULT(propagate_, false) };
        inline Tags& setPropagate(bool propagate) { DARABONBA_PTR_SET_VALUE(propagate_, propagate) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // Specifies whether the tag is propagated. Valid values:
        // - true: Tags on the scaling group are propagated only to newly created instances, but not to existing instances in the scaling group.
        // - false: Tags on the scaling group are not propagated to instances.
        // 
        // Default value: false.
        shared_ptr<bool> propagate_ {};
        // The tag key of the scaling group.
        shared_ptr<string> tagKey_ {};
        // The tag value of the scaling group.
        shared_ptr<string> tagValue_ {};
      };

      class ServerGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServerGroups& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, ServerGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        ServerGroups() = default ;
        ServerGroups(const ServerGroups &) = default ;
        ServerGroups(ServerGroups &&) = default ;
        ServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServerGroups() = default ;
        ServerGroups& operator=(const ServerGroups &) = default ;
        ServerGroups& operator=(ServerGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->serverGroupId_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // serverGroupId Field Functions 
        bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
        void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
        inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
        inline ServerGroups& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ServerGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline ServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The port number used by the ECS instance after Auto Scaling adds the ECS instance to the server group.
        shared_ptr<int32_t> port_ {};
        // The ID of the server group.
        shared_ptr<string> serverGroupId_ {};
        // The type of the server group. Valid values:
        // - ALB: Application Load Balancer (ALB).
        // - NLB: Network Load Balancer (NLB).
        // - GWLB: Gateway Load Balancer (GWLB).
        shared_ptr<string> type_ {};
        // The weight of the ECS instance as a backend server after Auto Scaling adds the ECS instance to the server group.
        shared_ptr<int32_t> weight_ {};
      };

      class LoadBalancerConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancerConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancerConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        LoadBalancerConfigs() = default ;
        LoadBalancerConfigs(const LoadBalancerConfigs &) = default ;
        LoadBalancerConfigs(LoadBalancerConfigs &&) = default ;
        LoadBalancerConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancerConfigs() = default ;
        LoadBalancerConfigs& operator=(const LoadBalancerConfigs &) = default ;
        LoadBalancerConfigs& operator=(LoadBalancerConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->weight_ == nullptr; };
        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline LoadBalancerConfigs& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline LoadBalancerConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The ID of the Classic Load Balancer (CLB) instance for load balancing.
        shared_ptr<string> loadBalancerId_ {};
        // The weight of the ECS instance as a backend server after Auto Scaling adds the ECS instance to the SLB server group. A higher weight indicates that more access requests are distributed to the ECS instance. If the weight is 0, the ECS instance does not receive access requests. Valid values: 0 to 100.
        shared_ptr<int32_t> weight_ {};
      };

      class LaunchTemplateOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchTemplateOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
          DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchTemplateOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
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
        && this->spotPriceLimit_ == nullptr && this->weightedCapacity_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline LaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // spotPriceLimit Field Functions 
        bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
        void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
        inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
        inline LaunchTemplateOverrides& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


        // weightedCapacity Field Functions 
        bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
        void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
        inline int32_t getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
        inline LaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


      protected:
        // The specified instance type, which overrides the instance type in the launch template.
        shared_ptr<string> instanceType_ {};
        // The maximum hourly price for the instance type specified in the launch template override (namely LaunchTemplateOverride.InstanceType).
        // > This parameter takes effect only when the LaunchTemplateId parameter is specified.
        shared_ptr<float> spotPriceLimit_ {};
        // The weight of the specified instance type, which indicates the capacity of a single instance of this type in the scaling group. A higher weight indicates that fewer instances of this type are required to meet the expected capacity.
        shared_ptr<int32_t> weightedCapacity_ {};
      };

      class DBInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DBInstances() = default ;
        DBInstances(const DBInstances &) = default ;
        DBInstances(DBInstances &&) = default ;
        DBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstances() = default ;
        DBInstances& operator=(const DBInstances &) = default ;
        DBInstances& operator=(DBInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->securityGroupIds_ == nullptr && this->type_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
        inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
        inline DBInstances& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline DBInstances& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The database instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The list of security group whitelists added to the database by the scaling group.
        shared_ptr<vector<string>> securityGroupIds_ {};
        // The type of the database. Valid values:
        // - RDS
        // - Redis
        // - MongoDB
        shared_ptr<string> type_ {};
      };

      class CapacityOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CapacityOptions& obj) { 
          DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
          DARABONBA_PTR_TO_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
          DARABONBA_PTR_TO_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
          DARABONBA_PTR_TO_JSON(PriceComparisonMode, priceComparisonMode_);
          DARABONBA_PTR_TO_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
        };
        friend void from_json(const Darabonba::Json& j, CapacityOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
          DARABONBA_PTR_FROM_JSON(OnDemandBaseCapacity, onDemandBaseCapacity_);
          DARABONBA_PTR_FROM_JSON(OnDemandPercentageAboveBaseCapacity, onDemandPercentageAboveBaseCapacity_);
          DARABONBA_PTR_FROM_JSON(PriceComparisonMode, priceComparisonMode_);
          DARABONBA_PTR_FROM_JSON(SpotAutoReplaceOnDemand, spotAutoReplaceOnDemand_);
        };
        CapacityOptions() = default ;
        CapacityOptions(const CapacityOptions &) = default ;
        CapacityOptions(CapacityOptions &&) = default ;
        CapacityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CapacityOptions() = default ;
        CapacityOptions& operator=(const CapacityOptions &) = default ;
        CapacityOptions& operator=(CapacityOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compensateWithOnDemand_ == nullptr
        && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->priceComparisonMode_ == nullptr && this->spotAutoReplaceOnDemand_ == nullptr; };
        // compensateWithOnDemand Field Functions 
        bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
        void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
        inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
        inline CapacityOptions& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


        // onDemandBaseCapacity Field Functions 
        bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
        void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
        inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
        inline CapacityOptions& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


        // onDemandPercentageAboveBaseCapacity Field Functions 
        bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
        void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
        inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
        inline CapacityOptions& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


        // priceComparisonMode Field Functions 
        bool hasPriceComparisonMode() const { return this->priceComparisonMode_ != nullptr;};
        void deletePriceComparisonMode() { this->priceComparisonMode_ = nullptr;};
        inline string getPriceComparisonMode() const { DARABONBA_PTR_GET_DEFAULT(priceComparisonMode_, "") };
        inline CapacityOptions& setPriceComparisonMode(string priceComparisonMode) { DARABONBA_PTR_SET_VALUE(priceComparisonMode_, priceComparisonMode) };


        // spotAutoReplaceOnDemand Field Functions 
        bool hasSpotAutoReplaceOnDemand() const { return this->spotAutoReplaceOnDemand_ != nullptr;};
        void deleteSpotAutoReplaceOnDemand() { this->spotAutoReplaceOnDemand_ = nullptr;};
        inline bool getSpotAutoReplaceOnDemand() const { DARABONBA_PTR_GET_DEFAULT(spotAutoReplaceOnDemand_, false) };
        inline CapacityOptions& setSpotAutoReplaceOnDemand(bool spotAutoReplaceOnDemand) { DARABONBA_PTR_SET_VALUE(spotAutoReplaceOnDemand_, spotAutoReplaceOnDemand) };


      protected:
        // Specifies whether to automatically create pay-as-you-go instances to meet the required number of ECS instances when the MultiAZPolicy parameter is set to COST_OPTIMIZED and sufficient spot instances cannot be created due to price or inventory reasons. Valid values:
        // 
        // - true: Allowed.
        // - false: Not allowed.
        shared_ptr<bool> compensateWithOnDemand_ {};
        // The minimum number of pay-as-you-go instances required in the scaling group. If the number of pay-as-you-go instances in the scaling group is less than this value, the system preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
        shared_ptr<int32_t> onDemandBaseCapacity_ {};
        // The percentage of pay-as-you-go instances among the excess instances after the scaling group meets the minimum number of pay-as-you-go instances specified by OnDemandBaseCapacity. Valid values: 0 to 100.
        shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
        // The price comparison mode of the cost optimization strategy for the scaling group. Valid values:
        // - PricePerUnit: Compares prices based on the price per unit of capacity.
        // 
        //   The capacity of an instance in the scaling group is equal to the weight set for the instance type. The default weight is 1, which means one ECS instance occupies one unit of capacity.
        // 
        // - PricePerVCpu: Compares prices based on the price per vCPU.
        shared_ptr<string> priceComparisonMode_ {};
        // Specifies whether to use spot instances to replace pay-as-you-go capacity when CompensateWithOnDemand is enabled and the percentage of pay-as-you-go instances exceeds the value of OnDemandPercentageAboveBaseCapacity. In common scenarios where CompensateWithOnDemand downgrades spot instances to pay-as-you-go instances due to spot inventory or price reasons, this feature attempts to use spot instances to replace the excess pay-as-you-go capacity to avoid long-term retention of pay-as-you-go instances. Valid values:
        // 
        // - true: Allowed.
        // - false: Not allowed.
        shared_ptr<bool> spotAutoReplaceOnDemand_ {};
      };

      class AlbServerGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlbServerGroups& obj) { 
          DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, AlbServerGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        AlbServerGroups() = default ;
        AlbServerGroups(const AlbServerGroups &) = default ;
        AlbServerGroups(AlbServerGroups &&) = default ;
        AlbServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlbServerGroups() = default ;
        AlbServerGroups& operator=(const AlbServerGroups &) = default ;
        AlbServerGroups& operator=(AlbServerGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->albServerGroupId_ == nullptr
        && this->port_ == nullptr && this->weight_ == nullptr; };
        // albServerGroupId Field Functions 
        bool hasAlbServerGroupId() const { return this->albServerGroupId_ != nullptr;};
        void deleteAlbServerGroupId() { this->albServerGroupId_ = nullptr;};
        inline string getAlbServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(albServerGroupId_, "") };
        inline AlbServerGroups& setAlbServerGroupId(string albServerGroupId) { DARABONBA_PTR_SET_VALUE(albServerGroupId_, albServerGroupId) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline AlbServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline AlbServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The ID of the ALB server group.
        shared_ptr<string> albServerGroupId_ {};
        // The port number used by the ECS instance after Auto Scaling adds the ECS instance to the ALB server group.
        shared_ptr<int32_t> port_ {};
        // The weight of the ECS instance as a backend server after Auto Scaling adds the ECS instance to the ALB server group.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->activeCapacity_ == nullptr
        && this->activeScalingConfigurationId_ == nullptr && this->albServerGroups_ == nullptr && this->allocationStrategy_ == nullptr && this->autoRebalance_ == nullptr && this->azBalance_ == nullptr
        && this->balanceMode_ == nullptr && this->capacityOptions_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->creationTime_ == nullptr && this->currentHostName_ == nullptr
        && this->customPolicyARN_ == nullptr && this->DBInstanceIds_ == nullptr && this->DBInstances_ == nullptr && this->defaultCooldown_ == nullptr && this->desiredCapacity_ == nullptr
        && this->enableDesiredCapacity_ == nullptr && this->groupDeletionProtection_ == nullptr && this->groupType_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckTypes_ == nullptr
        && this->initCapacity_ == nullptr && this->isElasticStrengthInAlarm_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr && this->launchTemplateVersion_ == nullptr
        && this->lifecycleState_ == nullptr && this->loadBalancerConfigs_ == nullptr && this->loadBalancerIds_ == nullptr && this->maxInstanceLifetime_ == nullptr && this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->modificationTime_ == nullptr && this->monitorGroupId_ == nullptr && this->multiAZPolicy_ == nullptr && this->onDemandBaseCapacity_ == nullptr
        && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->pendingCapacity_ == nullptr && this->pendingWaitCapacity_ == nullptr && this->protectedCapacity_ == nullptr && this->regionId_ == nullptr
        && this->removalPolicies_ == nullptr && this->removingCapacity_ == nullptr && this->removingWaitCapacity_ == nullptr && this->resourceGroupId_ == nullptr && this->scalingGroupId_ == nullptr
        && this->scalingGroupName_ == nullptr && this->scalingPolicy_ == nullptr && this->serverGroups_ == nullptr && this->spotAllocationStrategy_ == nullptr && this->spotCapacity_ == nullptr
        && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->standbyCapacity_ == nullptr && this->stopInstanceTimeout_ == nullptr && this->stoppedCapacity_ == nullptr
        && this->suspendedProcesses_ == nullptr && this->systemSuspended_ == nullptr && this->tags_ == nullptr && this->totalCapacity_ == nullptr && this->totalInstanceCount_ == nullptr
        && this->VServerGroups_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->warmPoolCapacity_ == nullptr
        && this->warmPoolConfiguration_ == nullptr && this->zoneShiftOptions_ == nullptr; };
      // activeCapacity Field Functions 
      bool hasActiveCapacity() const { return this->activeCapacity_ != nullptr;};
      void deleteActiveCapacity() { this->activeCapacity_ = nullptr;};
      inline int32_t getActiveCapacity() const { DARABONBA_PTR_GET_DEFAULT(activeCapacity_, 0) };
      inline ScalingGroups& setActiveCapacity(int32_t activeCapacity) { DARABONBA_PTR_SET_VALUE(activeCapacity_, activeCapacity) };


      // activeScalingConfigurationId Field Functions 
      bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
      void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
      inline string getActiveScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
      inline ScalingGroups& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


      // albServerGroups Field Functions 
      bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
      void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
      inline const vector<ScalingGroups::AlbServerGroups> & getAlbServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<ScalingGroups::AlbServerGroups>) };
      inline vector<ScalingGroups::AlbServerGroups> getAlbServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<ScalingGroups::AlbServerGroups>) };
      inline ScalingGroups& setAlbServerGroups(const vector<ScalingGroups::AlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
      inline ScalingGroups& setAlbServerGroups(vector<ScalingGroups::AlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


      // allocationStrategy Field Functions 
      bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
      void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
      inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
      inline ScalingGroups& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


      // autoRebalance Field Functions 
      bool hasAutoRebalance() const { return this->autoRebalance_ != nullptr;};
      void deleteAutoRebalance() { this->autoRebalance_ = nullptr;};
      inline bool getAutoRebalance() const { DARABONBA_PTR_GET_DEFAULT(autoRebalance_, false) };
      inline ScalingGroups& setAutoRebalance(bool autoRebalance) { DARABONBA_PTR_SET_VALUE(autoRebalance_, autoRebalance) };


      // azBalance Field Functions 
      bool hasAzBalance() const { return this->azBalance_ != nullptr;};
      void deleteAzBalance() { this->azBalance_ = nullptr;};
      inline bool getAzBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
      inline ScalingGroups& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


      // balanceMode Field Functions 
      bool hasBalanceMode() const { return this->balanceMode_ != nullptr;};
      void deleteBalanceMode() { this->balanceMode_ = nullptr;};
      inline string getBalanceMode() const { DARABONBA_PTR_GET_DEFAULT(balanceMode_, "") };
      inline ScalingGroups& setBalanceMode(string balanceMode) { DARABONBA_PTR_SET_VALUE(balanceMode_, balanceMode) };


      // capacityOptions Field Functions 
      bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
      void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
      inline const ScalingGroups::CapacityOptions & getCapacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, ScalingGroups::CapacityOptions) };
      inline ScalingGroups::CapacityOptions getCapacityOptions() { DARABONBA_PTR_GET(capacityOptions_, ScalingGroups::CapacityOptions) };
      inline ScalingGroups& setCapacityOptions(const ScalingGroups::CapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
      inline ScalingGroups& setCapacityOptions(ScalingGroups::CapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


      // compensateWithOnDemand Field Functions 
      bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
      void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
      inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
      inline ScalingGroups& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ScalingGroups& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // currentHostName Field Functions 
      bool hasCurrentHostName() const { return this->currentHostName_ != nullptr;};
      void deleteCurrentHostName() { this->currentHostName_ = nullptr;};
      inline string getCurrentHostName() const { DARABONBA_PTR_GET_DEFAULT(currentHostName_, "") };
      inline ScalingGroups& setCurrentHostName(string currentHostName) { DARABONBA_PTR_SET_VALUE(currentHostName_, currentHostName) };


      // customPolicyARN Field Functions 
      bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
      void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
      inline string getCustomPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
      inline ScalingGroups& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


      // DBInstanceIds Field Functions 
      bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
      void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
      inline const vector<string> & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
      inline vector<string> getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
      inline ScalingGroups& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
      inline ScalingGroups& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


      // DBInstances Field Functions 
      bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
      void deleteDBInstances() { this->DBInstances_ = nullptr;};
      inline const vector<ScalingGroups::DBInstances> & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<ScalingGroups::DBInstances>) };
      inline vector<ScalingGroups::DBInstances> getDBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<ScalingGroups::DBInstances>) };
      inline ScalingGroups& setDBInstances(const vector<ScalingGroups::DBInstances> & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
      inline ScalingGroups& setDBInstances(vector<ScalingGroups::DBInstances> && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


      // defaultCooldown Field Functions 
      bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
      void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
      inline int32_t getDefaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
      inline ScalingGroups& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


      // desiredCapacity Field Functions 
      bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
      void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
      inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
      inline ScalingGroups& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


      // enableDesiredCapacity Field Functions 
      bool hasEnableDesiredCapacity() const { return this->enableDesiredCapacity_ != nullptr;};
      void deleteEnableDesiredCapacity() { this->enableDesiredCapacity_ = nullptr;};
      inline bool getEnableDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(enableDesiredCapacity_, false) };
      inline ScalingGroups& setEnableDesiredCapacity(bool enableDesiredCapacity) { DARABONBA_PTR_SET_VALUE(enableDesiredCapacity_, enableDesiredCapacity) };


      // groupDeletionProtection Field Functions 
      bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
      void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
      inline bool getGroupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
      inline ScalingGroups& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline ScalingGroups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // healthCheckType Field Functions 
      bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
      void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
      inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
      inline ScalingGroups& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


      // healthCheckTypes Field Functions 
      bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
      void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
      inline const vector<string> & getHealthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
      inline vector<string> getHealthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
      inline ScalingGroups& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
      inline ScalingGroups& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


      // initCapacity Field Functions 
      bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
      void deleteInitCapacity() { this->initCapacity_ = nullptr;};
      inline int32_t getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0) };
      inline ScalingGroups& setInitCapacity(int32_t initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


      // isElasticStrengthInAlarm Field Functions 
      bool hasIsElasticStrengthInAlarm() const { return this->isElasticStrengthInAlarm_ != nullptr;};
      void deleteIsElasticStrengthInAlarm() { this->isElasticStrengthInAlarm_ = nullptr;};
      inline bool getIsElasticStrengthInAlarm() const { DARABONBA_PTR_GET_DEFAULT(isElasticStrengthInAlarm_, false) };
      inline ScalingGroups& setIsElasticStrengthInAlarm(bool isElasticStrengthInAlarm) { DARABONBA_PTR_SET_VALUE(isElasticStrengthInAlarm_, isElasticStrengthInAlarm) };


      // launchTemplateId Field Functions 
      bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
      void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
      inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
      inline ScalingGroups& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


      // launchTemplateOverrides Field Functions 
      bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
      void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
      inline const vector<ScalingGroups::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<ScalingGroups::LaunchTemplateOverrides>) };
      inline vector<ScalingGroups::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<ScalingGroups::LaunchTemplateOverrides>) };
      inline ScalingGroups& setLaunchTemplateOverrides(const vector<ScalingGroups::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
      inline ScalingGroups& setLaunchTemplateOverrides(vector<ScalingGroups::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
      inline ScalingGroups& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline ScalingGroups& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // loadBalancerConfigs Field Functions 
      bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
      void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
      inline const vector<ScalingGroups::LoadBalancerConfigs> & getLoadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<ScalingGroups::LoadBalancerConfigs>) };
      inline vector<ScalingGroups::LoadBalancerConfigs> getLoadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<ScalingGroups::LoadBalancerConfigs>) };
      inline ScalingGroups& setLoadBalancerConfigs(const vector<ScalingGroups::LoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
      inline ScalingGroups& setLoadBalancerConfigs(vector<ScalingGroups::LoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


      // loadBalancerIds Field Functions 
      bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
      void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
      inline const vector<string> & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
      inline vector<string> getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
      inline ScalingGroups& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
      inline ScalingGroups& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


      // maxInstanceLifetime Field Functions 
      bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
      void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
      inline int32_t getMaxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
      inline ScalingGroups& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
      inline ScalingGroups& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // minSize Field Functions 
      bool hasMinSize() const { return this->minSize_ != nullptr;};
      void deleteMinSize() { this->minSize_ = nullptr;};
      inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
      inline ScalingGroups& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline ScalingGroups& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // monitorGroupId Field Functions 
      bool hasMonitorGroupId() const { return this->monitorGroupId_ != nullptr;};
      void deleteMonitorGroupId() { this->monitorGroupId_ = nullptr;};
      inline string getMonitorGroupId() const { DARABONBA_PTR_GET_DEFAULT(monitorGroupId_, "") };
      inline ScalingGroups& setMonitorGroupId(string monitorGroupId) { DARABONBA_PTR_SET_VALUE(monitorGroupId_, monitorGroupId) };


      // multiAZPolicy Field Functions 
      bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
      void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
      inline string getMultiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
      inline ScalingGroups& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


      // onDemandBaseCapacity Field Functions 
      bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
      void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
      inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
      inline ScalingGroups& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


      // onDemandPercentageAboveBaseCapacity Field Functions 
      bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
      void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
      inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
      inline ScalingGroups& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


      // pendingCapacity Field Functions 
      bool hasPendingCapacity() const { return this->pendingCapacity_ != nullptr;};
      void deletePendingCapacity() { this->pendingCapacity_ = nullptr;};
      inline int32_t getPendingCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingCapacity_, 0) };
      inline ScalingGroups& setPendingCapacity(int32_t pendingCapacity) { DARABONBA_PTR_SET_VALUE(pendingCapacity_, pendingCapacity) };


      // pendingWaitCapacity Field Functions 
      bool hasPendingWaitCapacity() const { return this->pendingWaitCapacity_ != nullptr;};
      void deletePendingWaitCapacity() { this->pendingWaitCapacity_ = nullptr;};
      inline int32_t getPendingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingWaitCapacity_, 0) };
      inline ScalingGroups& setPendingWaitCapacity(int32_t pendingWaitCapacity) { DARABONBA_PTR_SET_VALUE(pendingWaitCapacity_, pendingWaitCapacity) };


      // protectedCapacity Field Functions 
      bool hasProtectedCapacity() const { return this->protectedCapacity_ != nullptr;};
      void deleteProtectedCapacity() { this->protectedCapacity_ = nullptr;};
      inline int32_t getProtectedCapacity() const { DARABONBA_PTR_GET_DEFAULT(protectedCapacity_, 0) };
      inline ScalingGroups& setProtectedCapacity(int32_t protectedCapacity) { DARABONBA_PTR_SET_VALUE(protectedCapacity_, protectedCapacity) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ScalingGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // removalPolicies Field Functions 
      bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
      void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
      inline const vector<string> & getRemovalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
      inline vector<string> getRemovalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
      inline ScalingGroups& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
      inline ScalingGroups& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


      // removingCapacity Field Functions 
      bool hasRemovingCapacity() const { return this->removingCapacity_ != nullptr;};
      void deleteRemovingCapacity() { this->removingCapacity_ = nullptr;};
      inline int32_t getRemovingCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingCapacity_, 0) };
      inline ScalingGroups& setRemovingCapacity(int32_t removingCapacity) { DARABONBA_PTR_SET_VALUE(removingCapacity_, removingCapacity) };


      // removingWaitCapacity Field Functions 
      bool hasRemovingWaitCapacity() const { return this->removingWaitCapacity_ != nullptr;};
      void deleteRemovingWaitCapacity() { this->removingWaitCapacity_ = nullptr;};
      inline int32_t getRemovingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingWaitCapacity_, 0) };
      inline ScalingGroups& setRemovingWaitCapacity(int32_t removingWaitCapacity) { DARABONBA_PTR_SET_VALUE(removingWaitCapacity_, removingWaitCapacity) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ScalingGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingGroups& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingGroupName Field Functions 
      bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
      void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
      inline string getScalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
      inline ScalingGroups& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


      // scalingPolicy Field Functions 
      bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
      void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
      inline string getScalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
      inline ScalingGroups& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


      // serverGroups Field Functions 
      bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
      void deleteServerGroups() { this->serverGroups_ = nullptr;};
      inline const vector<ScalingGroups::ServerGroups> & getServerGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<ScalingGroups::ServerGroups>) };
      inline vector<ScalingGroups::ServerGroups> getServerGroups() { DARABONBA_PTR_GET(serverGroups_, vector<ScalingGroups::ServerGroups>) };
      inline ScalingGroups& setServerGroups(const vector<ScalingGroups::ServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
      inline ScalingGroups& setServerGroups(vector<ScalingGroups::ServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


      // spotAllocationStrategy Field Functions 
      bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
      void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
      inline string getSpotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
      inline ScalingGroups& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


      // spotCapacity Field Functions 
      bool hasSpotCapacity() const { return this->spotCapacity_ != nullptr;};
      void deleteSpotCapacity() { this->spotCapacity_ = nullptr;};
      inline int32_t getSpotCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotCapacity_, 0) };
      inline ScalingGroups& setSpotCapacity(int32_t spotCapacity) { DARABONBA_PTR_SET_VALUE(spotCapacity_, spotCapacity) };


      // spotInstancePools Field Functions 
      bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
      void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
      inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
      inline ScalingGroups& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


      // spotInstanceRemedy Field Functions 
      bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
      void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
      inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
      inline ScalingGroups& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


      // standbyCapacity Field Functions 
      bool hasStandbyCapacity() const { return this->standbyCapacity_ != nullptr;};
      void deleteStandbyCapacity() { this->standbyCapacity_ = nullptr;};
      inline int32_t getStandbyCapacity() const { DARABONBA_PTR_GET_DEFAULT(standbyCapacity_, 0) };
      inline ScalingGroups& setStandbyCapacity(int32_t standbyCapacity) { DARABONBA_PTR_SET_VALUE(standbyCapacity_, standbyCapacity) };


      // stopInstanceTimeout Field Functions 
      bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
      void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
      inline int32_t getStopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
      inline ScalingGroups& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


      // stoppedCapacity Field Functions 
      bool hasStoppedCapacity() const { return this->stoppedCapacity_ != nullptr;};
      void deleteStoppedCapacity() { this->stoppedCapacity_ = nullptr;};
      inline int32_t getStoppedCapacity() const { DARABONBA_PTR_GET_DEFAULT(stoppedCapacity_, 0) };
      inline ScalingGroups& setStoppedCapacity(int32_t stoppedCapacity) { DARABONBA_PTR_SET_VALUE(stoppedCapacity_, stoppedCapacity) };


      // suspendedProcesses Field Functions 
      bool hasSuspendedProcesses() const { return this->suspendedProcesses_ != nullptr;};
      void deleteSuspendedProcesses() { this->suspendedProcesses_ = nullptr;};
      inline const vector<string> & getSuspendedProcesses() const { DARABONBA_PTR_GET_CONST(suspendedProcesses_, vector<string>) };
      inline vector<string> getSuspendedProcesses() { DARABONBA_PTR_GET(suspendedProcesses_, vector<string>) };
      inline ScalingGroups& setSuspendedProcesses(const vector<string> & suspendedProcesses) { DARABONBA_PTR_SET_VALUE(suspendedProcesses_, suspendedProcesses) };
      inline ScalingGroups& setSuspendedProcesses(vector<string> && suspendedProcesses) { DARABONBA_PTR_SET_RVALUE(suspendedProcesses_, suspendedProcesses) };


      // systemSuspended Field Functions 
      bool hasSystemSuspended() const { return this->systemSuspended_ != nullptr;};
      void deleteSystemSuspended() { this->systemSuspended_ = nullptr;};
      inline bool getSystemSuspended() const { DARABONBA_PTR_GET_DEFAULT(systemSuspended_, false) };
      inline ScalingGroups& setSystemSuspended(bool systemSuspended) { DARABONBA_PTR_SET_VALUE(systemSuspended_, systemSuspended) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ScalingGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScalingGroups::Tags>) };
      inline vector<ScalingGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ScalingGroups::Tags>) };
      inline ScalingGroups& setTags(const vector<ScalingGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingGroups& setTags(vector<ScalingGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline int32_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0) };
      inline ScalingGroups& setTotalCapacity(int32_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // totalInstanceCount Field Functions 
      bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
      void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
      inline int32_t getTotalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0) };
      inline ScalingGroups& setTotalInstanceCount(int32_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


      // VServerGroups Field Functions 
      bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
      void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
      inline const vector<ScalingGroups::VServerGroups> & getVServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<ScalingGroups::VServerGroups>) };
      inline vector<ScalingGroups::VServerGroups> getVServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<ScalingGroups::VServerGroups>) };
      inline ScalingGroups& setVServerGroups(const vector<ScalingGroups::VServerGroups> & vServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, vServerGroups) };
      inline ScalingGroups& setVServerGroups(vector<ScalingGroups::VServerGroups> && vServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, vServerGroups) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ScalingGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline ScalingGroups& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline ScalingGroups& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ScalingGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // warmPoolCapacity Field Functions 
      bool hasWarmPoolCapacity() const { return this->warmPoolCapacity_ != nullptr;};
      void deleteWarmPoolCapacity() { this->warmPoolCapacity_ = nullptr;};
      inline int32_t getWarmPoolCapacity() const { DARABONBA_PTR_GET_DEFAULT(warmPoolCapacity_, 0) };
      inline ScalingGroups& setWarmPoolCapacity(int32_t warmPoolCapacity) { DARABONBA_PTR_SET_VALUE(warmPoolCapacity_, warmPoolCapacity) };


      // warmPoolConfiguration Field Functions 
      bool hasWarmPoolConfiguration() const { return this->warmPoolConfiguration_ != nullptr;};
      void deleteWarmPoolConfiguration() { this->warmPoolConfiguration_ = nullptr;};
      inline const ScalingGroups::WarmPoolConfiguration & getWarmPoolConfiguration() const { DARABONBA_PTR_GET_CONST(warmPoolConfiguration_, ScalingGroups::WarmPoolConfiguration) };
      inline ScalingGroups::WarmPoolConfiguration getWarmPoolConfiguration() { DARABONBA_PTR_GET(warmPoolConfiguration_, ScalingGroups::WarmPoolConfiguration) };
      inline ScalingGroups& setWarmPoolConfiguration(const ScalingGroups::WarmPoolConfiguration & warmPoolConfiguration) { DARABONBA_PTR_SET_VALUE(warmPoolConfiguration_, warmPoolConfiguration) };
      inline ScalingGroups& setWarmPoolConfiguration(ScalingGroups::WarmPoolConfiguration && warmPoolConfiguration) { DARABONBA_PTR_SET_RVALUE(warmPoolConfiguration_, warmPoolConfiguration) };


      // zoneShiftOptions Field Functions 
      bool hasZoneShiftOptions() const { return this->zoneShiftOptions_ != nullptr;};
      void deleteZoneShiftOptions() { this->zoneShiftOptions_ = nullptr;};
      inline const ScalingGroups::ZoneShiftOptions & getZoneShiftOptions() const { DARABONBA_PTR_GET_CONST(zoneShiftOptions_, ScalingGroups::ZoneShiftOptions) };
      inline ScalingGroups::ZoneShiftOptions getZoneShiftOptions() { DARABONBA_PTR_GET(zoneShiftOptions_, ScalingGroups::ZoneShiftOptions) };
      inline ScalingGroups& setZoneShiftOptions(const ScalingGroups::ZoneShiftOptions & zoneShiftOptions) { DARABONBA_PTR_SET_VALUE(zoneShiftOptions_, zoneShiftOptions) };
      inline ScalingGroups& setZoneShiftOptions(ScalingGroups::ZoneShiftOptions && zoneShiftOptions) { DARABONBA_PTR_SET_RVALUE(zoneShiftOptions_, zoneShiftOptions) };


    protected:
      // The number of ECS instances that have been added to the scaling group and are running normally.
      shared_ptr<int32_t> activeCapacity_ {};
      // The ID of the active scaling configuration in the scaling group.
      shared_ptr<string> activeScalingConfigurationId_ {};
      // The collection of information about Application Load Balancer (ALB) server groups.
      shared_ptr<vector<ScalingGroups::AlbServerGroups>> albServerGroups_ {};
      // The capacity allocation strategy, which determines how the scaling group selects available instance types to meet the capacity requirements. The capacity distribution strategy applies to both pay-as-you-go and spot capacity. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
      // 
      // - priority: Creates instances based on the order of the configured instance types.
      // - lowestPrice: Creates instances based on the unit vCPU price of the instance types in ascending order.
      shared_ptr<string> allocationStrategy_ {};
      // Specifies whether to enable automatic balancing for the scaling group. This parameter takes effect only when BalancedOnly is enabled for the zone balance scaling group. Valid values:
      // - false: Automatic balancing for the scaling group is disabled.
      // - true: Automatic balancing for the scaling group is enabled. The scaling group automatically detects the capacity across zones. If the capacity is unbalanced, the scaling group proactively scales in or out to rebalance the capacity across zones.
      shared_ptr<bool> autoRebalance_ {};
      // Specifies whether the capacity of the scaling group is evenly distributed across multiple zones. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
      // 
      // - true: The capacity of the scaling group is evenly distributed across multiple zones.
      // - false: The capacity of the scaling group is not evenly distributed across multiple zones.
      shared_ptr<bool> azBalance_ {};
      // The zone balance mode. This parameter takes effect only when the zone balance mode is enabled. Valid values:
      //  
      // - BalancedBestEffort: If resource creation fails in a zone, the system falls back to other zones to ensure best-effort delivery of resources.
      // 
      // - BalancedOnly: If resource creation fails in a zone, the system does not fall back to other zones. The scale-out activity partially succeeds to avoid excessive imbalance of resources across different zones.
      shared_ptr<string> balanceMode_ {};
      // The capacity options.
      shared_ptr<ScalingGroups::CapacityOptions> capacityOptions_ {};
      // Specifies whether to automatically create pay-as-you-go instances to meet the requirement for the number of ECS instances when the MultiAZPolicy parameter is set to COST_OPTIMIZED and spot instances cannot be created due to price or inventory issues. Valid values:
      // - true: Allowed.
      // - false: Not allowed.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The time when the scaling group was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mmZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // > This parameter is not available.
      shared_ptr<string> currentHostName_ {};
      // The Alibaba Cloud Resource Name (ARN) of the Function Compute function for the custom scale-in policy. This parameter takes effect only when the first removal policy in RemovalPolicies is set to CustomPolicy.
      shared_ptr<string> customPolicyARN_ {};
      // The IDs of the ApsaraDB RDS instances associated with the scaling group.
      shared_ptr<vector<string>> DBInstanceIds_ {};
      // The list of databases associated with the scaling group.
      shared_ptr<vector<ScalingGroups::DBInstances>> DBInstances_ {};
      // The default cooldown time of the scaling group. During the cooldown time, the scaling group does not execute any other scaling activity. This parameter takes effect only for a scaling activity triggered by [CloudMonitor](https://help.aliyun.com/document_detail/35170.html) event-triggered tasks.
      shared_ptr<int32_t> defaultCooldown_ {};
      // The expected number of ECS instances in the scaling group. The scaling group automatically maintains the number of ECS instances at the expected number of instances.
      shared_ptr<int32_t> desiredCapacity_ {};
      // Specifies whether the expected number of instances feature is enabled. Valid values:
      // - true: The expected number of instances feature is enabled.
      // - false: The expected number of instances feature is disabled.
      shared_ptr<bool> enableDesiredCapacity_ {};
      // Indicates whether deletion protection is enabled for the scaling group. Valid values:
      // - true: Deletion protection is enabled. The scaling group cannot be deleted.
      // - false: Deletion protection is disabled.
      shared_ptr<bool> groupDeletionProtection_ {};
      // The type of instances managed by the scaling group.
      shared_ptr<string> groupType_ {};
      // The health check mode of the scaling group. Valid values:
      // - NONE: No health check is performed.
      // - ECS: Health checks are performed on instances in the scaling group. This value is used to enable instance health checks for both ECS and ECI scaling groups.
      // - LOAD_BALANCER: The health status of instances is determined based on the health check results of load balancing (CLB load balancing is not supported).
      shared_ptr<string> healthCheckType_ {};
      // The health check mode of the scaling group. Valid values:
      // 
      // - NONE: No health check is performed.
      // - ECS: Health checks are performed on instances in the scaling group. This value is used to enable instance health checks for both ECS and ECI scaling groups.
      // - LOAD_BALANCER: The health status of instances is determined based on the load balancing health check results (the CLB load balancing type is not currently supported).
      shared_ptr<vector<string>> healthCheckTypes_ {};
      // The number of instances in the initialization state before scale-out in the scaling group.
      shared_ptr<int32_t> initCapacity_ {};
      // > This parameter is not available.
      shared_ptr<bool> isElasticStrengthInAlarm_ {};
      // The ID of the launch template used by the scaling group.
      shared_ptr<string> launchTemplateId_ {};
      // The instance type information that extends the launch template.
      shared_ptr<vector<ScalingGroups::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
      // The version of the launch template used by the scaling group.
      shared_ptr<string> launchTemplateVersion_ {};
      // The lifecycle state of the scaling group. Valid values:
      // - Active: The scaling group is active. Only active scaling groups can accept requests to execute scaling rules and trigger a scaling activity.
      // - Inactive: The scaling group is inactive. Inactive scaling groups do not receive any requests to execute scaling rules.
      // - Deleting: The scaling group is being deleted. Scaling groups in the deleting state do not receive any requests to execute scaling rules, and their parameters cannot be modified.
      shared_ptr<string> lifecycleState_ {};
      // The list of load balancing configurations.
      shared_ptr<vector<ScalingGroups::LoadBalancerConfigs>> loadBalancerConfigs_ {};
      // The list of IDs of the load balancing instances associated with the scaling group.
      shared_ptr<vector<string>> loadBalancerIds_ {};
      // The maximum lifetime of an instance in the scaling group. Unit: seconds.
      // 
      // Valid values: 0 or [86400, Integer.maxValue]. A value of 0 indicates that the configured value of MaxInstanceLifetime is cleared, which means MaxInstanceLifetime is not configured.
      // 
      // Default value: null.
      // 
      // >This parameter is not supported for scaling groups of the Elastic Container Instance (ECI) type or scaling groups that have the No Fees for Stopped Instances feature enabled.
      shared_ptr<int32_t> maxInstanceLifetime_ {};
      // The maximum number of ECS instances in the scaling group.
      shared_ptr<int32_t> maxSize_ {};
      // The minimum number of ECS instances in the scaling group.
      shared_ptr<int32_t> minSize_ {};
      // The time when the scaling group was modified. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mmZ format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The ID of the CloudMonitor application group associated with the scaling group.
      shared_ptr<string> monitorGroupId_ {};
      // The scale-out and scale-in policy for ECS instances in a multi-zone scaling group. Valid values:
      // - PRIORITY: Scales out and scales in instances based on the vSwitches defined in VSwitchIds. If ECS instances cannot be created in the active zone of the vSwitch with the highest priority, the system automatically uses the vSwitch with the next highest priority to create ECS instances.
      // - COST_OPTIMIZED: Attempts to create instances based on the unit price of vCPUs from low to high. When the scaling configuration specifies multiple instance types with the spot billing method, the system preferentially creates spot instances. You can use the CompensateWithOnDemand parameter to specify whether to automatically attempt to create pay-as-you-go instances when spot instances cannot be created due to inventory issues.
      //     > COST_OPTIMIZED takes effect only when the scaling configuration specifies multiple instance types or uses spot instances.
      // - BALANCE: Evenly allocates ECS instances across the active zones specified for the scaling group. If the distribution becomes unbalanced due to insufficient inventory, you can call the RebalanceInstance operation to balance the resources.
      shared_ptr<string> multiAZPolicy_ {};
      // The minimum number of pay-as-you-go instances required in the scaling group. Valid values: 0 to 1000. When the number of pay-as-you-go instances in the scaling group is less than this value, the system preferentially creates pay-as-you-go instances.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances to be created when the scaling group exceeds the minimum number of pay-as-you-go instances specified by OnDemandBaseCapacity. Valid values: 0 to 100.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The number of ECS instances that are being added to the scaling group but have not completed the related configurations.
      shared_ptr<int32_t> pendingCapacity_ {};
      // The number of ECS instances that are in the pending wait state in the scaling group.
      shared_ptr<int32_t> pendingWaitCapacity_ {};
      // The number of ECS instances that are in the protected state in the scaling group.
      shared_ptr<int32_t> protectedCapacity_ {};
      // The ID of the region to which the scaling group belongs.
      shared_ptr<string> regionId_ {};
      // The collection of policies for removing ECS instances from the scaling group. Valid values:
      // - OldestInstance: Removes the ECS instance that was created earliest.
      // - NewestInstance: Removes the ECS instance that was created latest.
      // - OldestScalingConfiguration: Removes the ECS instance that was created earliest based on the scaling configuration.
      shared_ptr<vector<string>> removalPolicies_ {};
      // The number of ECS instances that are being removed from the scaling group.
      shared_ptr<int32_t> removingCapacity_ {};
      // The number of ECS instances that are in the removing wait state in the scaling group.
      shared_ptr<int32_t> removingWaitCapacity_ {};
      // The ID of the resource group to which the scaling group belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The name of the scaling group.
      shared_ptr<string> scalingGroupName_ {};
      // The reclaim mode of the scaling group. Valid values:
      // - recycle: The scaling group uses the shutdown and reclaim mode.
      // - release: The scaling group uses the release mode.
      // - forcerelease: The scaling group uses the force release mode.
      // For more information about the actions on removed instances, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
      shared_ptr<string> scalingPolicy_ {};
      // The collection of information about load balancing server groups.
      // > You can use this parameter to obtain the collection of information about ALB service groups, NLB server groups, and GWLB service groups associated with the scaling group.
      // >
      shared_ptr<vector<ScalingGroups::ServerGroups>> serverGroups_ {};
      // The spot capacity distribution strategy. You can use this parameter to separately specify the distribution strategy for spot capacity. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
      // 
      // - priority: Creates instances based on the order of the configured instance types.
      // - lowestPrice: Creates instances based on the unit vCPU price of the instance types in ascending order.
      // 
      // Default value: priority.
      shared_ptr<string> spotAllocationStrategy_ {};
      // The number of spot instances in the scaling group.
      shared_ptr<int32_t> spotCapacity_ {};
      // The number of available instance types specified. The scaling group evenly creates spot instances based on the most cost-effective instance types. Valid values: 0 to 10.
      shared_ptr<int32_t> spotInstancePools_ {};
      // Indicates whether the spot instance replacement feature is enabled. After this feature is enabled, when the scaling group receives a system message indicating that a spot instance will be reclaimed, the scaling group attempts to create a new instance to replace the spot instance to be reclaimed.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The number of instances that are in the standby state in the scaling group.
      shared_ptr<int32_t> standbyCapacity_ {};
      // The timeout period for waiting for an ECS instance to be stopped during the scale-in process. Unit: seconds.
      shared_ptr<int32_t> stopInstanceTimeout_ {};
      // The number of instances in the scaling group that are in the economical mode.
      shared_ptr<int32_t> stoppedCapacity_ {};
      // The suspended processes. If no process is suspended, an empty value is returned. Valid values:
      // - ScaleIn: The scale-in process.
      // - ScaleOut: The scale-out process.
      // - HealthCheck: The health check process.
      // - AlarmNotification: The event-triggered task process.
      // - ScheduledAction: The scheduled task process.
      shared_ptr<vector<string>> suspendedProcesses_ {};
      // Indicates whether Auto Scaling stops executing any scaling activity in the scaling group. Valid values:
      // - true: Auto Scaling stops executing any scaling activity in the scaling group. This indicates that the scaling group has failed to execute scale-out or scale-in for more than seven consecutive days. You must modify the scaling group or scaling configuration to resume the execution of the scaling activity.
      // - false: Auto Scaling executes the scaling activity in the scaling group.
      shared_ptr<bool> systemSuspended_ {};
      // The tags of the scaling group.
      shared_ptr<vector<ScalingGroups::Tags>> tags_ {};
      // The total weighted capacity of all ECS instances in the scaling group if instance type weights are configured. Otherwise, this parameter indicates the total number of ECS instances in the scaling group.
      shared_ptr<int32_t> totalCapacity_ {};
      // The total number of ECS instances in the scaling group.
      shared_ptr<int32_t> totalInstanceCount_ {};
      // The list of backend server groups.
      shared_ptr<vector<ScalingGroups::VServerGroups>> VServerGroups_ {};
      // The ID of the vSwitch associated with the scaling group.
      shared_ptr<string> vSwitchId_ {};
      // The collection of IDs of the vSwitches associated with the scaling group. If you use the VSwitchIds parameter, the VSwitchId parameter is ignored.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The ID of the VPC to which the scaling group belongs.
      shared_ptr<string> vpcId_ {};
      // The number of instances in the warm pool.
      shared_ptr<int32_t> warmPoolCapacity_ {};
      // The current warm pool configuration of the scaling group.
      shared_ptr<ScalingGroups::WarmPoolConfiguration> warmPoolConfiguration_ {};
      // The zone shift options.
      shared_ptr<ScalingGroups::ZoneShiftOptions> zoneShiftOptions_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scalingGroups_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingGroups Field Functions 
    bool hasScalingGroups() const { return this->scalingGroups_ != nullptr;};
    void deleteScalingGroups() { this->scalingGroups_ = nullptr;};
    inline const vector<DescribeScalingGroupsResponseBody::ScalingGroups> & getScalingGroups() const { DARABONBA_PTR_GET_CONST(scalingGroups_, vector<DescribeScalingGroupsResponseBody::ScalingGroups>) };
    inline vector<DescribeScalingGroupsResponseBody::ScalingGroups> getScalingGroups() { DARABONBA_PTR_GET(scalingGroups_, vector<DescribeScalingGroupsResponseBody::ScalingGroups>) };
    inline DescribeScalingGroupsResponseBody& setScalingGroups(const vector<DescribeScalingGroupsResponseBody::ScalingGroups> & scalingGroups) { DARABONBA_PTR_SET_VALUE(scalingGroups_, scalingGroups) };
    inline DescribeScalingGroupsResponseBody& setScalingGroups(vector<DescribeScalingGroupsResponseBody::ScalingGroups> && scalingGroups) { DARABONBA_PTR_SET_RVALUE(scalingGroups_, scalingGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scaling groups.
    shared_ptr<vector<DescribeScalingGroupsResponseBody::ScalingGroups>> scalingGroups_ {};
    // The total number of scaling groups.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
