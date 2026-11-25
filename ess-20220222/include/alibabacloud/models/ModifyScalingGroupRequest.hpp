// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUEST_HPP_
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
      DARABONBA_PTR_TO_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
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
      DARABONBA_PTR_FROM_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
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
      // - ReplaceUnhealthy: normally replaces unhealthy instances in all zones. 
      // - IgnoreUnhealthy: does not replace unhealthy instances in impaired zones. Healthy zones are not affected.
      shared_ptr<string> impairedZoneHealthCheckBehavior_ {};
      // Blocks scale-in activities triggered by specified types of scaling rules. The blocking scope covers all zones under the scaling group, not just the impaired zones. This prevents false scale-in activities caused by fake improvements in monitoring metrics due to unreachable instances in impaired zones. Valid values: 
      // 
      // - StepScalingRule: blocks scale-in activities triggered by step scaling rules. 
      // - TargetTrackingScalingRule: blocks scale-in activities triggered by target tracking scaling rules. 
      // - None: does not block any scale-in activities.
      shared_ptr<vector<string>> scaleInBlockedRuleTypes_ {};
      // Specifies whether scale-out creates instances only in healthy zones during zone shift. Valid values: 
      // 
      // - true: creates instances only in healthy zones during scale-out and skips impaired zones. 
      // - false: does not restrict zones, and scale-out can create instances in any zone under the scaling group.
      shared_ptr<bool> scaleOutInHealthyZonesOnly_ {};
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
      // When you need the scaling group to scale based on the instance type capacity, specify both this parameter and LaunchTemplateOverrides.WeightedCapacity.
      // 
      // This parameter is used to specify the instance type and overrides the instance type in the launch template.
      // 
      // > This parameter takes effect only when the LaunchTemplateId parameter is specified.
      // 
      // Valid values of InstanceType: available ECS instance types.
      shared_ptr<string> instanceType_ {};
      // This parameter is used to specify the maximum hourly price for the instance type that overrides the launch template (that is, LaunchTemplateOverride.N.InstanceType). You can specify N values for this parameter to extend the launch template to support N instance types. Valid values of N: 1 to 20.
      // > This parameter takes effect only when the LaunchTemplateId parameter is specified.
      shared_ptr<float> spotPriceLimit_ {};
      // When you need the scaling group to scale based on the instance type capacity, specify this parameter after you specify LaunchTemplateOverrides.InstanceType. The two parameters correspond to each other.
      // 
      // This parameter is used to specify the weight of the instance type, which indicates the capacity that a single instance of the instance type represents in the scaling group.
      // 
      // A greater weight indicates that fewer instances of this instance type are required to meet the expected capacity.
      // 
      // Because performance metrics such as the number of vCPUs and memory size vary with instance types, you can configure different weights for different instance types based on your needs.
      // 
      // Example:
      // 
      // - Current capacity: 0.
      // 
      // - Expected capacity: 6.
      // 
      // - Capacity of the ecs.c5.xlarge instance type: 4.
      // 
      // To meet the expected capacity, the scaling group scales out two ecs.c5.xlarge instances.
      // 
      // > During scale-out, the capacity of the scaling group cannot exceed the sum of the maximum capacity (MaxSize) and the maximum weight of the instance type.
      // 
      // Valid values of WeightedCapacity: 1 to 500.
      shared_ptr<int32_t> weightedCapacity_ {};
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
      // Specifies whether to automatically attempt to create pay-as-you-go instances to meet the required number of ECS instances if sufficient spot instances cannot be created due to price or inventory reasons when the MultiAZPolicy parameter of the CreateScalingGroup operation is set to COST_OPTIMIZED. Valid values:
      // 
      // - true: allows the creation of pay-as-you-go instances.
      // - false: does not allow the creation of pay-as-you-go instances.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The minimum number of pay-as-you-go instances required in the scaling group. If the number of pay-as-you-go instances in the scaling group is less than this value, the system preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
      // 
      // Default value: 0 when the MultiAZPolicy parameter is set to COMPOSABLE.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances among the extra instances that exceed the minimum number of pay-as-you-go instances specified by OnDemandBaseCapacity. Valid values: 0 to 100.
      // 
      // Default value: 100 when the MultiAZPolicy parameter is set to COMPOSABLE.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The price comparison mode for the cost optimization policy of the scaling group. Valid values:
      // - PricePerUnit: compares prices based on the price per unit of capacity.
      // 
      //   The capacity of an instance in the scaling group equals the weight configured for the instance type. The default weight is 1, which means one ECS instance occupies a capacity of 1.
      // 
      // - PricePerVCpu: compares prices based on the price per vCPU.
      // 
      // Default value: PricePerUnit.
      shared_ptr<string> priceComparisonMode_ {};
      // Specifies whether to attempt to use spot instances to replace pay-as-you-go capacity when the percentage of pay-as-you-go instances exceeds the OnDemandPercentageAboveBaseCapacity value after CompensateWithOnDemand is enabled. In common scenarios where CompensateWithOnDemand downgrades spot instances to pay-as-you-go instances due to spot inventory or price reasons, this feature attempts to use spot instances to replace the excess pay-as-you-go capacity to avoid long-term retention of pay-as-you-go instances. Valid values:
      // 
      // - true: allows the replacement.
      // - false: does not allow the replacement.
      // 
      // Default value: false.
      shared_ptr<bool> spotAutoReplaceOnDemand_ {};
    };

    virtual bool empty() const override { return this->activeScalingConfigurationId_ == nullptr
        && this->allocationStrategy_ == nullptr && this->autoRebalance_ == nullptr && this->azBalance_ == nullptr && this->balanceMode_ == nullptr && this->capacityOptions_ == nullptr
        && this->compensateWithOnDemand_ == nullptr && this->customPolicyARN_ == nullptr && this->defaultCooldown_ == nullptr && this->desiredCapacity_ == nullptr && this->disableDesiredCapacity_ == nullptr
        && this->groupDeletionProtection_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckTypes_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr
        && this->launchTemplateVersion_ == nullptr && this->maxInstanceLifetime_ == nullptr && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->multiAZPolicy_ == nullptr
        && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->removalPolicies_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingGroupName_ == nullptr && this->scalingPolicy_ == nullptr
        && this->spotAllocationStrategy_ == nullptr && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->stopInstanceTimeout_ == nullptr && this->vSwitchIds_ == nullptr
        && this->zoneShiftPolicy_ == nullptr; };
    // activeScalingConfigurationId Field Functions 
    bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
    void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
    inline string getActiveScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
    inline ModifyScalingGroupRequest& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline ModifyScalingGroupRequest& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // autoRebalance Field Functions 
    bool hasAutoRebalance() const { return this->autoRebalance_ != nullptr;};
    void deleteAutoRebalance() { this->autoRebalance_ = nullptr;};
    inline bool getAutoRebalance() const { DARABONBA_PTR_GET_DEFAULT(autoRebalance_, false) };
    inline ModifyScalingGroupRequest& setAutoRebalance(bool autoRebalance) { DARABONBA_PTR_SET_VALUE(autoRebalance_, autoRebalance) };


    // azBalance Field Functions 
    bool hasAzBalance() const { return this->azBalance_ != nullptr;};
    void deleteAzBalance() { this->azBalance_ = nullptr;};
    inline bool getAzBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
    inline ModifyScalingGroupRequest& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


    // balanceMode Field Functions 
    bool hasBalanceMode() const { return this->balanceMode_ != nullptr;};
    void deleteBalanceMode() { this->balanceMode_ = nullptr;};
    inline string getBalanceMode() const { DARABONBA_PTR_GET_DEFAULT(balanceMode_, "") };
    inline ModifyScalingGroupRequest& setBalanceMode(string balanceMode) { DARABONBA_PTR_SET_VALUE(balanceMode_, balanceMode) };


    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const ModifyScalingGroupRequest::CapacityOptions & getCapacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, ModifyScalingGroupRequest::CapacityOptions) };
    inline ModifyScalingGroupRequest::CapacityOptions getCapacityOptions() { DARABONBA_PTR_GET(capacityOptions_, ModifyScalingGroupRequest::CapacityOptions) };
    inline ModifyScalingGroupRequest& setCapacityOptions(const ModifyScalingGroupRequest::CapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline ModifyScalingGroupRequest& setCapacityOptions(ModifyScalingGroupRequest::CapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline ModifyScalingGroupRequest& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // customPolicyARN Field Functions 
    bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
    void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
    inline string getCustomPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
    inline ModifyScalingGroupRequest& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


    // defaultCooldown Field Functions 
    bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
    void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
    inline int32_t getDefaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
    inline ModifyScalingGroupRequest& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline ModifyScalingGroupRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // disableDesiredCapacity Field Functions 
    bool hasDisableDesiredCapacity() const { return this->disableDesiredCapacity_ != nullptr;};
    void deleteDisableDesiredCapacity() { this->disableDesiredCapacity_ = nullptr;};
    inline bool getDisableDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(disableDesiredCapacity_, false) };
    inline ModifyScalingGroupRequest& setDisableDesiredCapacity(bool disableDesiredCapacity) { DARABONBA_PTR_SET_VALUE(disableDesiredCapacity_, disableDesiredCapacity) };


    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool getGroupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline ModifyScalingGroupRequest& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline ModifyScalingGroupRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckTypes Field Functions 
    bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
    void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
    inline const vector<string> & getHealthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
    inline vector<string> getHealthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
    inline ModifyScalingGroupRequest& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
    inline ModifyScalingGroupRequest& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline ModifyScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<ModifyScalingGroupRequest::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<ModifyScalingGroupRequest::LaunchTemplateOverrides>) };
    inline vector<ModifyScalingGroupRequest::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<ModifyScalingGroupRequest::LaunchTemplateOverrides>) };
    inline ModifyScalingGroupRequest& setLaunchTemplateOverrides(const vector<ModifyScalingGroupRequest::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline ModifyScalingGroupRequest& setLaunchTemplateOverrides(vector<ModifyScalingGroupRequest::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline ModifyScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxInstanceLifetime Field Functions 
    bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
    void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
    inline int32_t getMaxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
    inline ModifyScalingGroupRequest& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline ModifyScalingGroupRequest& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline ModifyScalingGroupRequest& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // multiAZPolicy Field Functions 
    bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
    void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
    inline string getMultiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
    inline ModifyScalingGroupRequest& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline ModifyScalingGroupRequest& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline ModifyScalingGroupRequest& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // removalPolicies Field Functions 
    bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
    void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
    inline const vector<string> & getRemovalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
    inline vector<string> getRemovalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
    inline ModifyScalingGroupRequest& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
    inline ModifyScalingGroupRequest& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyScalingGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ModifyScalingGroupRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string getScalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline ModifyScalingGroupRequest& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string getScalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline ModifyScalingGroupRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string getSpotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline ModifyScalingGroupRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline ModifyScalingGroupRequest& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline ModifyScalingGroupRequest& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t getStopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline ModifyScalingGroupRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ModifyScalingGroupRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ModifyScalingGroupRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneShiftPolicy Field Functions 
    bool hasZoneShiftPolicy() const { return this->zoneShiftPolicy_ != nullptr;};
    void deleteZoneShiftPolicy() { this->zoneShiftPolicy_ = nullptr;};
    inline const ModifyScalingGroupRequest::ZoneShiftPolicy & getZoneShiftPolicy() const { DARABONBA_PTR_GET_CONST(zoneShiftPolicy_, ModifyScalingGroupRequest::ZoneShiftPolicy) };
    inline ModifyScalingGroupRequest::ZoneShiftPolicy getZoneShiftPolicy() { DARABONBA_PTR_GET(zoneShiftPolicy_, ModifyScalingGroupRequest::ZoneShiftPolicy) };
    inline ModifyScalingGroupRequest& setZoneShiftPolicy(const ModifyScalingGroupRequest::ZoneShiftPolicy & zoneShiftPolicy) { DARABONBA_PTR_SET_VALUE(zoneShiftPolicy_, zoneShiftPolicy) };
    inline ModifyScalingGroupRequest& setZoneShiftPolicy(ModifyScalingGroupRequest::ZoneShiftPolicy && zoneShiftPolicy) { DARABONBA_PTR_SET_RVALUE(zoneShiftPolicy_, zoneShiftPolicy) };


  protected:
    // The ID of the active scaling configuration in the scaling group.
    shared_ptr<string> activeScalingConfigurationId_ {};
    // The capacity allocation policy, which determines how the scaling group selects available instance types to meet the capacity requirements. The capacity distribution policy applies to both pay-as-you-go and spot capacities. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:                              
    // 
    // - priority: creates instances in the order of the configured instance types.
    // 
    // - lowestPrice: creates instances in ascending order of the vCPU unit price of the instance types.
    // 
    // Default value: priority.
    shared_ptr<string> allocationStrategy_ {};
    // Specifies whether to enable automatic balancing for the scaling group. This parameter takes effect only when BalancedOnly is enabled for a zone-balanced scaling group. Valid values:
    // - false: disables automatic balancing for the scaling group.
    // - true: enables automatic balancing for the scaling group. The scaling group automatically detects the capacity across zones. If the capacity is unbalanced across zones, the scaling group proactively scales across zones to rebalance the capacity.
    // 
    // Default value: false.
    shared_ptr<bool> autoRebalance_ {};
    // Specifies whether the capacity of the scaling group is evenly distributed across multiple zones. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
    // - true: The capacity of the scaling group is evenly distributed across multiple zones.
    // - false: The capacity of the scaling group is not evenly distributed across multiple zones.
    // 
    // Default value: false.
    shared_ptr<bool> azBalance_ {};
    // The zone balancing mode. This parameter takes effect only when the zone balancing mode is enabled. Valid values:
    //  
    // - BalancedBestEffort: If resource creation fails in a zone, the system degrades to other zones to ensure best-effort delivery of resources.
    // 
    // - BalancedOnly: If resource creation fails in a zone, the system does not degrade to other zones. The scale-out activity partially succeeds to avoid excessive imbalance of resources across different zones.
    // 
    // Default value: BalancedBestEffort.
    shared_ptr<string> balanceMode_ {};
    // The capacity options.
    shared_ptr<ModifyScalingGroupRequest::CapacityOptions> capacityOptions_ {};
    // Specifies whether to automatically attempt to create pay-as-you-go instances to meet the required number of ECS instances if sufficient spot instances cannot be created due to price or inventory reasons when the MultiAZPolicy parameter of the CreateScalingGroup operation is set to COST_OPTIMIZED. Valid values:
    // 
    // - true: allows the creation of pay-as-you-go instances.
    // 
    // - false: does not allow the creation of pay-as-you-go instances.
    shared_ptr<bool> compensateWithOnDemand_ {};
    // The Alibaba Cloud Resource Name (ARN) of the Function Compute function for the custom scale-in policy. This parameter takes effect only when the first removal policy configured in RemovalPolicies is CustomPolicy.
    shared_ptr<string> customPolicyARN_ {};
    // The default cooldown time of the scaling group. This parameter applies only to simple scaling rules. Valid values: 0 to 86400. Unit: seconds.
    // 
    // During the cooldown time, the scaling group does not execute any other scaling activities. This applies only to scaling activities triggered by CloudMonitor event-triggered tasks.
    shared_ptr<int32_t> defaultCooldown_ {};
    // The expected number of ECS instances or elastic container instances in the scaling group. The scaling group automatically maintains the number of ECS instances or elastic container instances at the expected number. Valid values: MinSize to MaxSize.
    // 
    // > If the expected number of instances feature is disabled and then re-enabled, you must reset the DesiredCapacity value.
    shared_ptr<int32_t> desiredCapacity_ {};
    // Specifies whether to disable the expected number of instances feature for the scaling group. Valid values:
    // 
    // - false: enables the expected number of instances feature.
    // - true: disables the expected number of instances feature.
    // 
    // > You can change the Settings of this parameter to true (that is, shutdown the expected number of instances feature) only when no scaling activity is in progress in the scaling group. When you shutdown the expected number of instances feature, the current DesiredCapacity property of the scaling group is cleared, but the current number of instances in the scaling group remains unchanged.
    shared_ptr<bool> disableDesiredCapacity_ {};
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // - true: enables deletion protection for the scaling group. In this case, the scaling group cannot be deleted.
    // - false: disables deletion protection for the scaling group.
    shared_ptr<bool> groupDeletionProtection_ {};
    // The health check mode of the scaling group. Valid values:
    // 
    // - NONE: disables health checks.
    // - ECS: performs health checks on instances in the scaling group. This value applies to both ECS and elastic container instance scaling groups.
    // - LOAD_BALANCER: determines the health status of instances based on the health check results of load balancing. Classic Load Balancer (CLB) is not supported.
    // Default value: ECS.
    // 
    // > To enable both instance health checks and load balancer health checks, use the HealthCheckTypes parameter.
    shared_ptr<string> healthCheckType_ {};
    // The health check modes of the scaling group.
    // 
    // > You can use this parameter to specify multiple values to enable multiple health check options. If the HealthCheckType parameter is configured, this parameter is ignored.
    shared_ptr<vector<string>> healthCheckTypes_ {};
    // The ID of the instance launch template, which is used to specify that the scaling group obtains launch configuration information from the instance launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The extended instance type information of the launch template.
    shared_ptr<vector<ModifyScalingGroupRequest::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
    // The version of the instance launch template. Valid values:
    //          
    // - A specific template version number.
    // - Default: always uses the default version of the template.
    // - Latest: always uses the latest version of the template.
    shared_ptr<string> launchTemplateVersion_ {};
    // The maximum lifetime of an instance in the scaling group. Unit: seconds.
    // 
    // Valid values: 0 or [86400, Integer.maxValue]. A value of 0 indicates that the configured value of MaxInstanceLifetime is cleared (that is, MaxInstanceLifetime is not configured).
    // 
    // Default value: null.
    // 
    // > This parameter cannot be configured for scaling groups of the elastic container instance type or scaling groups that have the no fees for stopped instances feature enabled.
    shared_ptr<int32_t> maxInstanceLifetime_ {};
    // The maximum number of ECS instances or elastic container instances in the scaling group. If the number of ECS instances or elastic container instances in the scaling group exceeds the value of MaxSize, Auto Scaling automatically removes ECS instances or elastic container instances.
    // 
    // <props="china">The value range of MaxSize varies based on the usage of Auto Scaling. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to view the quota value for the **maximum number of instances in a single scaling group**.
    // 
    // <props="intl">The value range of MaxSize varies based on the usage of Auto Scaling. Go to the [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to view the quota value for the **maximum number of instances in a single scaling group**.
    // 
    // <props="partner">The value range of MaxSize varies based on the usage of Auto Scaling. Go to the Quota Center to view the quota value for the **maximum number of instances in a single scaling group**.
    // 
    // For example, if the quota value for the **maximum number of instances in a single scaling group** is 2000, the value range of MaxSize is 0 to 2000.
    shared_ptr<int32_t> maxSize_ {};
    // The minimum number of ECS instances or elastic container instances in the scaling group. If the number of ECS instances or elastic container instances in the scaling group is less than the value of MinSize, Auto Scaling initiates the automatic creation of ECS instances or elastic container instances.
    // 
    // > The value of MinSize must be less than or equal to the value of MaxSize.
    shared_ptr<int32_t> minSize_ {};
    // The scaling policy for ECS instances in a multi-zone scaling group. Valid values:
    // 
    // - PRIORITY: scales the scaling group based on the priorities of vSwitches (VSwitchIds.N). Auto Scaling preferentially attempts to scale the scaling group in the zone where the vSwitch with the highest priority resides. If the scaling fails, Auto Scaling automatically attempts to scale the scaling group in the zone where the vSwitch with the next highest priority resides.
    // 
    // - COST_OPTIMIZED: during scale-out, Auto Scaling attempts to create ECS instances in ascending order of vCPU unit price. During scale-in, Auto Scaling attempts to remove ECS instances in descending order of vCPU unit price. If the scaling configuration specifies multiple instance types that use the spot billing method, spot instances are preferentially created. You can use the CompensateWithOnDemand parameter to specify whether Auto Scaling automatically attempts to create pay-as-you-go instances when spot instances cannot be created.
    // 
    // > COST_OPTIMIZED takes effect only when the scaling configuration specifies multiple instance types or uses spot instances.
    // 
    // - BALANCE: evenly allocate ECS instances across the active zones specified for the scaling group. If the instances are unevenly distributed across zones due to insufficient inventory, you can call the RebalanceInstance operation to balance the resources.
    // 
    // - COMPOSABLE: a composite policy that allows you to combine the preceding scaling policies for ECS instances in a multi-zone scaling group based on your needs.
    shared_ptr<string> multiAZPolicy_ {};
    // The minimum number of pay-as-you-go instances required in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than this value, pay-as-you-go instances are preferentially created.
    // 
    // Default value: 0 when the MultiAZPolicy parameter is set to COMPOSABLE.
    shared_ptr<int32_t> onDemandBaseCapacity_ {};
    // The percentage of pay-as-you-go instances among the extra instances that exceed the minimum number of pay-as-you-go instances specified by OnDemandBaseCapacity. Valid values: 0 to 100.
    // 
    // Default value: 100 when the MultiAZPolicy parameter is set to COMPOSABLE.
    shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The scale-in policy of the scaling group, which specifies the ECS instances to be removed. Valid values:
    // 
    // - OldestInstance: removes the ECS instances that were added to the scaling group at the earliest point in time.
    // 
    // - NewestInstance: removes the ECS instances that were added to the scaling group at the latest point in time.
    // 
    // - OldestScalingConfiguration: removes the ECS instances that were created by using the earliest scaling configuration.
    shared_ptr<vector<string>> removalPolicies_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling group to be modified.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The name of the scaling group. The name must be unique within a region. The name must be 2 to 64 characters in length and start with a letter, digit, or Chinese character. It can contain digits, underscores (_), hyphens (-), and periods (.).
    shared_ptr<string> scalingGroupName_ {};
    // The revoke pattern of the scaling group. Valid values: 
    // 
    // - recycle: The revoke pattern of the scaling group is shutdown and revoke pattern.  
    // - release: The revoke pattern of the scaling group is release pattern.
    // - forcerelease: The revoke pattern of the scaling group is forcible release pattern.
    // 
    //     > If you select forcerelease, the system forcibly releases instances in the Running state during scale-down activities. Forcibly releasing an instance is equivalent to a power-off operation, which erases temporary data in the memory and storage of the instance. The data cannot be recovered. Proceed with caution.
    // 
    // - forcerecycle: The revoke pattern of the scaling group is forcible shutdown and revoke pattern.
    // 
    //     > If you select forcerecycle, the system forcibly shuts down instances in the Running state during scale-down activities. Forcible shutdown is equivalent to a power-off operation, which erases temporary data in the memory and storage of the instance. The data cannot be recovered. Proceed with caution.
    // 
    // The ScalingPolicy parameter specifies the revoke pattern of the scaling group. However, the specific action when an instance is removed from the scaling group is determined by the RemovePolicy parameter of the RemoveInstances operation. For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    shared_ptr<string> scalingPolicy_ {};
    // The spot capacity distribution policy. You can use this parameter to separately specify the distribution policy for spot capacity. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
    // 
    // - priority: creates instances in the order of the configured instance types.
    // - lowestPrice: creates instances in ascending order of the vCPU unit price of the instance types.
    // 
    // Default value: priority.
    shared_ptr<string> spotAllocationStrategy_ {};
    // The number of available instance types. The scaling group evenly creates spot instances across multiple instance types with the lowest cost. Valid values: 0 to 10.
    // 
    // Default value: 2 when the MultiAZPolicy parameter is set to COMPOSABLE.
    shared_ptr<int32_t> spotInstancePools_ {};
    // Specifies whether to enable the spot instance replenishment feature. After this feature is enabled, when the scaling group receives a system message indicating that a spot instance will be reclaimed, the scaling group attempts to create a new instance to replace the spot instance to be reclaimed.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The timeout period for waiting for an ECS instance to be successfully stopped during the scale-in flow. Unit: seconds.
    // Valid values: 30 to 240.
    // 
    // > - This parameter takes effect only in the scale-in flow when ScalingPolicy is set to the release pattern.  
    // > - If the Settings of this parameter are configured, the system waits for a maximum of the StopInstanceTimeout period for the instance to be successfully stopped. After the timeout period elapses, the scale-in flow continues regardless of whether the instance is successfully stopped.  
    // > - If the Settings of this parameter are not configured, the system waits for a long time for the instance to be successfully stopped. The scale-in flow continues only after the instance is successfully stopped. If the instance stop has failed, the scale-in flow will rollback and the scale-in has failed.
    // > - A value of 0 indicates that the parameter settings of this parameter are canceled.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
    // The IDs of one or more vSwitches.
    // 
    // This parameter takes effect only when the network type of the scaling group is VPC. The VPC to which the specified vSwitches belong must be the same as the VPC to which the scaling group belongs.
    // 
    // The vSwitches can reside in different zones. The priorities of vSwitches are sorted in ascending order of numbers. 1 indicates the highest priority. If ECS instances cannot be created in the zone where the vSwitch with a higher priority resides, the vSwitch with the next highest priority is automatically selected to create ECS instances.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // The behavior policy of the scaling group during zone shift.
    shared_ptr<ModifyScalingGroupRequest::ZoneShiftPolicy> zoneShiftPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
