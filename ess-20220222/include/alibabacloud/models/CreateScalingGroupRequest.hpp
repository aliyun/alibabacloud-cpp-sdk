// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUEST_HPP_
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
  class CreateScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_TO_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_TO_JSON(BalanceMode, balanceMode_);
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
      DARABONBA_PTR_TO_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(AutoRebalance, autoRebalance_);
      DARABONBA_PTR_FROM_JSON(AzBalance, azBalance_);
      DARABONBA_PTR_FROM_JSON(BalanceMode, balanceMode_);
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
      DARABONBA_PTR_FROM_JSON(ZoneShiftPolicy, zoneShiftPolicy_);
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
      // - ReplaceUnhealthy: Replaces unhealthy instances in all zones normally. 
      // - IgnoreUnhealthy: Does not replace unhealthy instances in impaired zones. Healthy zones are not affected. 
      // 
      // Default value: ReplaceUnhealthy.
      shared_ptr<string> impairedZoneHealthCheckBehavior_ {};
      // Blocks scale-in triggered by specified types of scaling rules. The blocking scope applies to all zones under the scaling group, not just the impaired zones. This prevents false scale-in caused by fake improvements in monitoring metrics due to unreachable instances in impaired zones. Valid values: 
      // 
      // - StepScalingRule: Blocks scale-in triggered by step scaling rules. 
      // - TargetTrackingScalingRule: Blocks scale-in triggered by target tracking scaling rules. 
      // - None: Does not block. 
      // 
      // Default value: None.
      shared_ptr<vector<string>> scaleInBlockedRuleTypes_ {};
      // Specifies whether scale-out creates instances only in healthy zones during zone shift. Valid values: 
      // 
      // - true: Scale-out creates instances only in healthy zones and skips impaired zones. 
      // - false: Scale-out is not restricted by zone and can create instances in any zone of the scaling group. 
      // 
      // Default value: false.
      shared_ptr<bool> scaleOutInHealthyZonesOnly_ {};
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
        // The port number used by the instance after Auto Scaling adds the instance to the virtual server group. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The ID of the virtual server group.
        shared_ptr<string> VServerGroupId_ {};
        // The weight of the instance as a backend server after Auto Scaling adds the instance to the virtual server group. A higher weight indicates that more access requests are allocated to the instance. If the weight is 0, the instance does not receive access requests. Valid values: 0 to 100.
        // 
        // Default value: 50.
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
      // The ID of the Classic Load Balancer (CLB) instance to which the virtual server group belongs.
      shared_ptr<string> loadBalancerId_ {};
      // The attributes of the backend server group.
      shared_ptr<vector<VServerGroups::VServerGroupAttributes>> VServerGroupAttributes_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Propagate, propagate_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Propagate, propagate_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->propagate_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // propagate Field Functions 
      bool hasPropagate() const { return this->propagate_ != nullptr;};
      void deletePropagate() { this->propagate_ = nullptr;};
      inline bool getPropagate() const { DARABONBA_PTR_GET_DEFAULT(propagate_, false) };
      inline Tags& setPropagate(bool propagate) { DARABONBA_PTR_SET_VALUE(propagate_, propagate) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the scaling group.
      shared_ptr<string> key_ {};
      // Specifies whether the tag is a propagatable tag. Valid values:
      // - true: tags on the scaling group are propagated only to newly created instances, not to existing instances in the scaling group.
      // - false: tags on the scaling group are not propagated to instances.
      // 
      // Default value: false.
      shared_ptr<bool> propagate_ {};
      // The tag value of the scaling group.
      shared_ptr<string> value_ {};
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
      // The port number used by the instance after Auto Scaling adds the instance to the server group. Valid values: 1 to 65535.
      shared_ptr<int32_t> port_ {};
      // The ID of the server group.
      shared_ptr<string> serverGroupId_ {};
      // The type of the server group. Valid values:
      // 
      // - ALB: Application Load Balancer (ALB).
      // - NLB: Network Load Balancer (NLB).
      // - GWLB: Gateway Load Balancer (GWLB).
      shared_ptr<string> type_ {};
      // The weight of the instance as a backend server after Auto Scaling adds the instance to the server group. Valid values: 0 to 100.
      // 
      // A higher weight specifies that more access requests are allocated to the instance. If the weight is 0, the instance does not receive access requests.
      // 
      // > This parameter is required for ALB and NLB. You cannot configure this parameter for GWLB.
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
      // The ID of the CLB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The weight of the instance as a backend server after Auto Scaling adds the instance to the CLB server group. A higher weight specifies that more requests are distributed to the instance. If the weight is 0, the instance does not receive requests. Valid values: 0 to 100.
      shared_ptr<int32_t> weight_ {};
    };

    class LifecycleHooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleHooks& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
        DARABONBA_PTR_TO_JSON(HeartbeatTimeout, heartbeatTimeout_);
        DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
        DARABONBA_PTR_TO_JSON(LifecycleTransition, lifecycleTransition_);
        DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
        DARABONBA_PTR_TO_JSON(NotificationMetadata, notificationMetadata_);
      };
      friend void from_json(const Darabonba::Json& j, LifecycleHooks& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
        DARABONBA_PTR_FROM_JSON(HeartbeatTimeout, heartbeatTimeout_);
        DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
        DARABONBA_PTR_FROM_JSON(LifecycleTransition, lifecycleTransition_);
        DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
        DARABONBA_PTR_FROM_JSON(NotificationMetadata, notificationMetadata_);
      };
      LifecycleHooks() = default ;
      LifecycleHooks(const LifecycleHooks &) = default ;
      LifecycleHooks(LifecycleHooks &&) = default ;
      LifecycleHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleHooks() = default ;
      LifecycleHooks& operator=(const LifecycleHooks &) = default ;
      LifecycleHooks& operator=(LifecycleHooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultResult_ == nullptr
        && this->heartbeatTimeout_ == nullptr && this->lifecycleHookName_ == nullptr && this->lifecycleTransition_ == nullptr && this->notificationArn_ == nullptr && this->notificationMetadata_ == nullptr; };
      // defaultResult Field Functions 
      bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
      void deleteDefaultResult() { this->defaultResult_ = nullptr;};
      inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
      inline LifecycleHooks& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


      // heartbeatTimeout Field Functions 
      bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
      void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
      inline int32_t getHeartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
      inline LifecycleHooks& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


      // lifecycleHookName Field Functions 
      bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
      void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
      inline string getLifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
      inline LifecycleHooks& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


      // lifecycleTransition Field Functions 
      bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
      void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
      inline string getLifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
      inline LifecycleHooks& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


      // notificationArn Field Functions 
      bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
      void deleteNotificationArn() { this->notificationArn_ = nullptr;};
      inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
      inline LifecycleHooks& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


      // notificationMetadata Field Functions 
      bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
      void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
      inline string getNotificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
      inline LifecycleHooks& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


    protected:
      // The action to be performed after the wait state ends. Valid values:
      // 
      // - CONTINUE: continues the response to the scale-out activity or continues the response to the scale-down activity.
      // 
      // - ABANDON: directly releases the instances created by the scale-out activity or directly removes the instances in the scale-down activity from the scaling group.
      // 
      // When a scale-down activity (SCALE_IN) occurs in the scaling group and triggers multiple lifecycle hooks, if the wait state triggered by a lifecycle hook whose DefaultResult is ABANDON ends, the other corresponding wait states end in advance. In other cases, the next action is subject to the next action of the last wait state that ends.
      // 
      // Default value: CONTINUE.
      shared_ptr<string> defaultResult_ {};
      // The wait time set by the lifecycle hook for the scaling group activity. After the wait state times out, the next action is performed. Valid values: 30 to 21600. Unit: seconds.
      // 
      // After you create a lifecycle hook, you can call RecordLifecycleActionHeartbeat to extend the wait time of the instance, or call CompleteLifecycleAction to end the wait state of the scaling activity in advance.
      // 
      // Default value: 600.
      shared_ptr<int32_t> heartbeatTimeout_ {};
      // The name of the lifecycle hook. The name cannot be modified after it is specified. If you do not specify this parameter, the default value is the same as the lifecycle hook ID.
      shared_ptr<string> lifecycleHookName_ {};
      // The type of scaling activity to which the lifecycle hook applies. Valid values:
      // 
      // - SCALE_OUT: scale-out activities of the scaling group.
      // 
      // - SCALE_IN: scale-down activities of the scaling group.
      // 
      // > If you specify a lifecycle hook for the scaling group, this parameter is required, and other related parameters are optional.
      shared_ptr<string> lifecycleTransition_ {};
      // The identifier of the notification recipient for the lifecycle hook. Simple Message Queue (formerly MNS) queues or topics are supported. The parameter value format is acs:ess:{region}:{account-id}:{resource-relative-id}.
      // 
      // - region: the region where the scaling group resides.
      // 
      // - account-id: the Alibaba Cloud account ID.
      // 
      // Examples:
      // 
      // - Simple Message Queue (formerly MNS) queue: acs:ess:{region}:{account-id}:queue/{queuename}.
      // 
      // - Simple Message Queue (formerly MNS) topic: acs:ess:{region}:{account-id}:topic/{topicname}.
      shared_ptr<string> notificationArn_ {};
      // The fixed string information for the wait state of the scaling activity. The value cannot exceed 4,096 characters in length. Each time Auto Scaling pushes a message to the notification recipient, it also sends the predefined value of the NotificationMetadata parameter to help you manage and mark different types of notification information. The NotificationMetadata parameter takes effect only when you also specify the NotificationArn parameter.
      shared_ptr<string> notificationMetadata_ {};
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
      // If you want the scaling group to scale based on the capacity of the instance type, specify both this parameter and LaunchTemplateOverrides.WeightedCapacity.
      // 
      // This parameter is used to specify the instance type and overrides the instance type in the launch template.
      // 
      // > This parameter takes effect only when the LaunchTemplateId parameter is specified.
      // 
      // Valid values of InstanceType: available ECS instance types.
      shared_ptr<string> instanceType_ {};
      // This parameter is used to specify the maximum price for the overridden instance type (namely, `LaunchTemplateOverride.InstanceType`) in the launch template.
      // > This parameter takes effect only when the `LaunchTemplateId` parameter is specified.
      shared_ptr<float> spotPriceLimit_ {};
      // If you want the scaling group to scale based on the capacity of the instance type, specify this parameter after you specify LaunchTemplateOverrides.InstanceType.
      // 
      // This parameter is used to specify the weight of the instance type, which indicates the capacity represented by a single instance of the instance type in the scaling group. A larger weight indicates that fewer instances of this instance type are required to meet the expected capacity.
      // 
      // Because performance metrics such as the number of vCPUs and memory size vary among instance types, you can configure different weights for different instance types based on your needs.
      // 
      // Example:
      // 
      // - Current capacity: 0.
      // 
      // - Expected capacity: 6.
      // 
      // - Capacity of the ecs.c5.xlarge instance type: 4.
      // 
      // To meet the expected capacity, the scaling group scales out two ecs.c5.xlarge instances for you.
      // 
      // > During scale-out, the capacity of the scaling group cannot exceed the sum of the maximum capacity (MaxSize) and the maximum weight of the instance type.
      // 
      // Valid values of WeightedCapacity: 1 to 500.
      shared_ptr<int32_t> weightedCapacity_ {};
    };

    class DBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AttachMode, attachMode_);
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachMode, attachMode_);
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
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
      virtual bool empty() const override { return this->attachMode_ == nullptr
        && this->DBInstanceId_ == nullptr && this->type_ == nullptr; };
      // attachMode Field Functions 
      bool hasAttachMode() const { return this->attachMode_ != nullptr;};
      void deleteAttachMode() { this->attachMode_ = nullptr;};
      inline string getAttachMode() const { DARABONBA_PTR_GET_DEFAULT(attachMode_, "") };
      inline DBInstances& setAttachMode(string attachMode) { DARABONBA_PTR_SET_VALUE(attachMode_, attachMode) };


      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline DBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The association mode between the scaling group and the database. Valid values:
      // - SecurityIp: Modifies the IP whitelist mode by automatically adding scaled-out instances to the IP whitelist of the database. Only ApsaraDB RDS databases are supported.
      // - SecurityGroup: Uses the security group mode by adding the security group of the scaling configuration to the security group whitelist of the database to allow instances in the security group to access the database.
      shared_ptr<string> attachMode_ {};
      // The database instance ID.
      shared_ptr<string> DBInstanceId_ {};
      // The type of the database. Valid values:
      // - RDS
      // - Redis
      // - MongoDB
      // 
      // Default value: RDS.
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
      // Specifies whether to allow the system to automatically attempt to create pay-as-you-go instances to meet the required number of ECS instances when the MultiAZPolicy parameter is set to COST_OPTIMIZED and sufficient spot instances cannot be created due to price or inventory reasons. Valid values:
      // 
      // - true: Allowed.
      // - false: Not allowed.
      // 
      // Default value: true.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The minimum number of pay-as-you-go instances required in the scaling group. When the number of pay-as-you-go instances in the scaling group is less than this value, the system preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
      // 
      // When the MultiAZPolicy parameter is set to COMPOSABLE, the default value is 0.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances in the excess instances after the scaling group meets the minimum number of pay-as-you-go instances specified by OnDemandBaseCapacity. Valid values: 0 to 100.
      // 
      // When the MultiAZPolicy parameter is set to COMPOSABLE, the default value is 100.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The price comparison mode for the cost optimization policy of the scaling group. Valid values:
      // - PricePerUnit: Compares prices based on the price per unit of capacity.
      // 
      //   The capacity of an instance in the scaling group is equal to the weight set for the instance type. The default weight is 1, which means one ECS instance occupies a capacity of 1.
      // 
      // - PricePerVCpu: Compares prices based on the price per vCPU.
      // 
      // Default value: PricePerUnit.
      shared_ptr<string> priceComparisonMode_ {};
      // Specifies whether to attempt to use spot instances to replace pay-as-you-go capacity when CompensateWithOnDemand is enabled and the proportion of pay-as-you-go instances exceeds the OnDemandPercentageAboveBaseCapacity value. In common scenarios where CompensateWithOnDemand downgrades spot instances to pay-as-you-go instances due to spot inventory or price reasons, this parameter attempts to use spot instances to replace the excess pay-as-you-go capacity to avoid long-term existence of pay-as-you-go instances. Valid values:
      // 
      // - true: Allowed.
      // - false: Not allowed.
      // 
      // Default value: false.
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
      // 
      // A scaling group supports a limited number of associated ALB server groups. To view or manually apply for a quota increase, go to the [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
      shared_ptr<string> albServerGroupId_ {};
      // The port number used by the instance after Auto Scaling adds the instance to the ALB server group. Valid values: 1 to 65535.
      shared_ptr<int32_t> port_ {};
      // The weight of the instance as a backend server after Auto Scaling adds the instance to the ALB server group. A higher weight specifies that more requests are distributed to the instance. If the weight is 0, the instance does not receive requests. Valid values: 0 to 100.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->albServerGroups_ == nullptr
        && this->allocationStrategy_ == nullptr && this->autoRebalance_ == nullptr && this->azBalance_ == nullptr && this->balanceMode_ == nullptr && this->capacityOptions_ == nullptr
        && this->clientToken_ == nullptr && this->compensateWithOnDemand_ == nullptr && this->containerGroupId_ == nullptr && this->customPolicyARN_ == nullptr && this->DBInstanceIds_ == nullptr
        && this->DBInstances_ == nullptr && this->defaultCooldown_ == nullptr && this->desiredCapacity_ == nullptr && this->groupDeletionProtection_ == nullptr && this->groupType_ == nullptr
        && this->healthCheckType_ == nullptr && this->healthCheckTypes_ == nullptr && this->instanceId_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr
        && this->launchTemplateVersion_ == nullptr && this->lifecycleHooks_ == nullptr && this->loadBalancerConfigs_ == nullptr && this->loadBalancerIds_ == nullptr && this->maxInstanceLifetime_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->multiAZPolicy_ == nullptr && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->removalPolicies_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->scalingGroupName_ == nullptr && this->scalingPolicy_ == nullptr && this->serverGroups_ == nullptr && this->spotAllocationStrategy_ == nullptr
        && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->stopInstanceTimeout_ == nullptr && this->syncAlarmRuleToCms_ == nullptr && this->tags_ == nullptr
        && this->VServerGroups_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->zoneShiftPolicy_ == nullptr; };
    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::AlbServerGroups> & getAlbServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<CreateScalingGroupRequest::AlbServerGroups>) };
    inline vector<CreateScalingGroupRequest::AlbServerGroups> getAlbServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<CreateScalingGroupRequest::AlbServerGroups>) };
    inline CreateScalingGroupRequest& setAlbServerGroups(const vector<CreateScalingGroupRequest::AlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline CreateScalingGroupRequest& setAlbServerGroups(vector<CreateScalingGroupRequest::AlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline CreateScalingGroupRequest& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // autoRebalance Field Functions 
    bool hasAutoRebalance() const { return this->autoRebalance_ != nullptr;};
    void deleteAutoRebalance() { this->autoRebalance_ = nullptr;};
    inline bool getAutoRebalance() const { DARABONBA_PTR_GET_DEFAULT(autoRebalance_, false) };
    inline CreateScalingGroupRequest& setAutoRebalance(bool autoRebalance) { DARABONBA_PTR_SET_VALUE(autoRebalance_, autoRebalance) };


    // azBalance Field Functions 
    bool hasAzBalance() const { return this->azBalance_ != nullptr;};
    void deleteAzBalance() { this->azBalance_ = nullptr;};
    inline bool getAzBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
    inline CreateScalingGroupRequest& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


    // balanceMode Field Functions 
    bool hasBalanceMode() const { return this->balanceMode_ != nullptr;};
    void deleteBalanceMode() { this->balanceMode_ = nullptr;};
    inline string getBalanceMode() const { DARABONBA_PTR_GET_DEFAULT(balanceMode_, "") };
    inline CreateScalingGroupRequest& setBalanceMode(string balanceMode) { DARABONBA_PTR_SET_VALUE(balanceMode_, balanceMode) };


    // capacityOptions Field Functions 
    bool hasCapacityOptions() const { return this->capacityOptions_ != nullptr;};
    void deleteCapacityOptions() { this->capacityOptions_ = nullptr;};
    inline const CreateScalingGroupRequest::CapacityOptions & getCapacityOptions() const { DARABONBA_PTR_GET_CONST(capacityOptions_, CreateScalingGroupRequest::CapacityOptions) };
    inline CreateScalingGroupRequest::CapacityOptions getCapacityOptions() { DARABONBA_PTR_GET(capacityOptions_, CreateScalingGroupRequest::CapacityOptions) };
    inline CreateScalingGroupRequest& setCapacityOptions(const CreateScalingGroupRequest::CapacityOptions & capacityOptions) { DARABONBA_PTR_SET_VALUE(capacityOptions_, capacityOptions) };
    inline CreateScalingGroupRequest& setCapacityOptions(CreateScalingGroupRequest::CapacityOptions && capacityOptions) { DARABONBA_PTR_SET_RVALUE(capacityOptions_, capacityOptions) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateScalingGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compensateWithOnDemand Field Functions 
    bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
    void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
    inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
    inline CreateScalingGroupRequest& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


    // containerGroupId Field Functions 
    bool hasContainerGroupId() const { return this->containerGroupId_ != nullptr;};
    void deleteContainerGroupId() { this->containerGroupId_ = nullptr;};
    inline string getContainerGroupId() const { DARABONBA_PTR_GET_DEFAULT(containerGroupId_, "") };
    inline CreateScalingGroupRequest& setContainerGroupId(string containerGroupId) { DARABONBA_PTR_SET_VALUE(containerGroupId_, containerGroupId) };


    // customPolicyARN Field Functions 
    bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
    void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
    inline string getCustomPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
    inline CreateScalingGroupRequest& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


    // DBInstanceIds Field Functions 
    bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
    void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
    inline string getDBInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceIds_, "") };
    inline CreateScalingGroupRequest& setDBInstanceIds(string DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::DBInstances> & getDBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<CreateScalingGroupRequest::DBInstances>) };
    inline vector<CreateScalingGroupRequest::DBInstances> getDBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<CreateScalingGroupRequest::DBInstances>) };
    inline CreateScalingGroupRequest& setDBInstances(const vector<CreateScalingGroupRequest::DBInstances> & dBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, dBInstances) };
    inline CreateScalingGroupRequest& setDBInstances(vector<CreateScalingGroupRequest::DBInstances> && dBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, dBInstances) };


    // defaultCooldown Field Functions 
    bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
    void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
    inline int32_t getDefaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
    inline CreateScalingGroupRequest& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


    // desiredCapacity Field Functions 
    bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
    void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
    inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
    inline CreateScalingGroupRequest& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool getGroupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline CreateScalingGroupRequest& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateScalingGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline CreateScalingGroupRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckTypes Field Functions 
    bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
    void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
    inline const vector<string> & getHealthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
    inline vector<string> getHealthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
    inline CreateScalingGroupRequest& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
    inline CreateScalingGroupRequest& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScalingGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateScalingGroupRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateOverrides Field Functions 
    bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
    void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<CreateScalingGroupRequest::LaunchTemplateOverrides>) };
    inline vector<CreateScalingGroupRequest::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<CreateScalingGroupRequest::LaunchTemplateOverrides>) };
    inline CreateScalingGroupRequest& setLaunchTemplateOverrides(const vector<CreateScalingGroupRequest::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
    inline CreateScalingGroupRequest& setLaunchTemplateOverrides(vector<CreateScalingGroupRequest::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline CreateScalingGroupRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // lifecycleHooks Field Functions 
    bool hasLifecycleHooks() const { return this->lifecycleHooks_ != nullptr;};
    void deleteLifecycleHooks() { this->lifecycleHooks_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::LifecycleHooks> & getLifecycleHooks() const { DARABONBA_PTR_GET_CONST(lifecycleHooks_, vector<CreateScalingGroupRequest::LifecycleHooks>) };
    inline vector<CreateScalingGroupRequest::LifecycleHooks> getLifecycleHooks() { DARABONBA_PTR_GET(lifecycleHooks_, vector<CreateScalingGroupRequest::LifecycleHooks>) };
    inline CreateScalingGroupRequest& setLifecycleHooks(const vector<CreateScalingGroupRequest::LifecycleHooks> & lifecycleHooks) { DARABONBA_PTR_SET_VALUE(lifecycleHooks_, lifecycleHooks) };
    inline CreateScalingGroupRequest& setLifecycleHooks(vector<CreateScalingGroupRequest::LifecycleHooks> && lifecycleHooks) { DARABONBA_PTR_SET_RVALUE(lifecycleHooks_, lifecycleHooks) };


    // loadBalancerConfigs Field Functions 
    bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
    void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::LoadBalancerConfigs> & getLoadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<CreateScalingGroupRequest::LoadBalancerConfigs>) };
    inline vector<CreateScalingGroupRequest::LoadBalancerConfigs> getLoadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<CreateScalingGroupRequest::LoadBalancerConfigs>) };
    inline CreateScalingGroupRequest& setLoadBalancerConfigs(const vector<CreateScalingGroupRequest::LoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
    inline CreateScalingGroupRequest& setLoadBalancerConfigs(vector<CreateScalingGroupRequest::LoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline string getLoadBalancerIds() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerIds_, "") };
    inline CreateScalingGroupRequest& setLoadBalancerIds(string loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };


    // maxInstanceLifetime Field Functions 
    bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
    void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
    inline int32_t getMaxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
    inline CreateScalingGroupRequest& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
    inline CreateScalingGroupRequest& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline CreateScalingGroupRequest& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


    // multiAZPolicy Field Functions 
    bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
    void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
    inline string getMultiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
    inline CreateScalingGroupRequest& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


    // onDemandBaseCapacity Field Functions 
    bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
    void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
    inline CreateScalingGroupRequest& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


    // onDemandPercentageAboveBaseCapacity Field Functions 
    bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
    void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
    inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
    inline CreateScalingGroupRequest& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removalPolicies Field Functions 
    bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
    void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
    inline const vector<string> & getRemovalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
    inline vector<string> getRemovalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
    inline CreateScalingGroupRequest& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
    inline CreateScalingGroupRequest& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateScalingGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string getScalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline CreateScalingGroupRequest& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string getScalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline CreateScalingGroupRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // serverGroups Field Functions 
    bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
    void deleteServerGroups() { this->serverGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::ServerGroups> & getServerGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<CreateScalingGroupRequest::ServerGroups>) };
    inline vector<CreateScalingGroupRequest::ServerGroups> getServerGroups() { DARABONBA_PTR_GET(serverGroups_, vector<CreateScalingGroupRequest::ServerGroups>) };
    inline CreateScalingGroupRequest& setServerGroups(const vector<CreateScalingGroupRequest::ServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
    inline CreateScalingGroupRequest& setServerGroups(vector<CreateScalingGroupRequest::ServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string getSpotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline CreateScalingGroupRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstancePools Field Functions 
    bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
    void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
    inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
    inline CreateScalingGroupRequest& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


    // spotInstanceRemedy Field Functions 
    bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
    void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
    inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
    inline CreateScalingGroupRequest& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


    // stopInstanceTimeout Field Functions 
    bool hasStopInstanceTimeout() const { return this->stopInstanceTimeout_ != nullptr;};
    void deleteStopInstanceTimeout() { this->stopInstanceTimeout_ = nullptr;};
    inline int32_t getStopInstanceTimeout() const { DARABONBA_PTR_GET_DEFAULT(stopInstanceTimeout_, 0) };
    inline CreateScalingGroupRequest& setStopInstanceTimeout(int32_t stopInstanceTimeout) { DARABONBA_PTR_SET_VALUE(stopInstanceTimeout_, stopInstanceTimeout) };


    // syncAlarmRuleToCms Field Functions 
    bool hasSyncAlarmRuleToCms() const { return this->syncAlarmRuleToCms_ != nullptr;};
    void deleteSyncAlarmRuleToCms() { this->syncAlarmRuleToCms_ = nullptr;};
    inline bool getSyncAlarmRuleToCms() const { DARABONBA_PTR_GET_DEFAULT(syncAlarmRuleToCms_, false) };
    inline CreateScalingGroupRequest& setSyncAlarmRuleToCms(bool syncAlarmRuleToCms) { DARABONBA_PTR_SET_VALUE(syncAlarmRuleToCms_, syncAlarmRuleToCms) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateScalingGroupRequest::Tags>) };
    inline vector<CreateScalingGroupRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateScalingGroupRequest::Tags>) };
    inline CreateScalingGroupRequest& setTags(const vector<CreateScalingGroupRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateScalingGroupRequest& setTags(vector<CreateScalingGroupRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const vector<CreateScalingGroupRequest::VServerGroups> & getVServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<CreateScalingGroupRequest::VServerGroups>) };
    inline vector<CreateScalingGroupRequest::VServerGroups> getVServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<CreateScalingGroupRequest::VServerGroups>) };
    inline CreateScalingGroupRequest& setVServerGroups(const vector<CreateScalingGroupRequest::VServerGroups> & vServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, vServerGroups) };
    inline CreateScalingGroupRequest& setVServerGroups(vector<CreateScalingGroupRequest::VServerGroups> && vServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, vServerGroups) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateScalingGroupRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateScalingGroupRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateScalingGroupRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneShiftPolicy Field Functions 
    bool hasZoneShiftPolicy() const { return this->zoneShiftPolicy_ != nullptr;};
    void deleteZoneShiftPolicy() { this->zoneShiftPolicy_ = nullptr;};
    inline const CreateScalingGroupRequest::ZoneShiftPolicy & getZoneShiftPolicy() const { DARABONBA_PTR_GET_CONST(zoneShiftPolicy_, CreateScalingGroupRequest::ZoneShiftPolicy) };
    inline CreateScalingGroupRequest::ZoneShiftPolicy getZoneShiftPolicy() { DARABONBA_PTR_GET(zoneShiftPolicy_, CreateScalingGroupRequest::ZoneShiftPolicy) };
    inline CreateScalingGroupRequest& setZoneShiftPolicy(const CreateScalingGroupRequest::ZoneShiftPolicy & zoneShiftPolicy) { DARABONBA_PTR_SET_VALUE(zoneShiftPolicy_, zoneShiftPolicy) };
    inline CreateScalingGroupRequest& setZoneShiftPolicy(CreateScalingGroupRequest::ZoneShiftPolicy && zoneShiftPolicy) { DARABONBA_PTR_SET_RVALUE(zoneShiftPolicy_, zoneShiftPolicy) };


  protected:
    // The collection of information about the ALB server groups.
    shared_ptr<vector<CreateScalingGroupRequest::AlbServerGroups>> albServerGroups_ {};
    // The capacity allocation policy, which determines how the scaling group selects available instance types to meet the capacity requirements. The capacity distribution policy applies to both pay-as-you-go and spot capacities. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
    // 
    // - priority: Creates instances based on the order of the configured instance types.
    // - lowestPrice: Creates instances based on the unit price per vCPU of the instance types in ascending order.
    // 
    // Default value: priority.
    shared_ptr<string> allocationStrategy_ {};
    // Specifies whether to enable automatic balancing for the scaling group. This parameter takes effect only when BalancedOnly is enabled for the zone-balanced scaling group. Valid values:
    // - false: Does not enable automatic balancing for the scaling group.
    // - true: Enables automatic balancing for the scaling group. The scaling group automatically detects the capacity across zones. When the capacity is unbalanced across zones, the scaling group proactively scales out or in to rebalance the capacity across zones.
    // 
    // Default value: false.
    shared_ptr<bool> autoRebalance_ {};
    // Specifies whether the capacity of the scaling group is evenly distributed across multiple zones. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
    // 
    // - true: The capacity of the scaling group is evenly distributed across multiple zones.
    // - false: The capacity of the scaling group is not evenly distributed across multiple zones.
    // 
    // > If the MultiAZPolicy parameter is set to COMPOSABLE and the AzBalance parameter is set to true, the effect is the same as when the MultiAZPolicy parameter is set to BALANCE.
    // 
    // Default value: false.
    shared_ptr<bool> azBalance_ {};
    // The zone balancing mode. This parameter takes effect only when the zone balancing mode is enabled. Valid values:
    //  
    // - BalancedBestEffort: When resource creation fails in a zone, the system falls back to other zones to ensure best-effort delivery of resources.
    // 
    // - BalancedOnly: When resource creation fails in a zone, the system does not fall back to other zones. The scale-out activity partially succeeds to avoid excessive imbalance of resources across different zones.
    // 
    // Default value: BalancedBestEffort.
    shared_ptr<string> balanceMode_ {};
    // The capacity options.
    shared_ptr<CreateScalingGroupRequest::CapacityOptions> capacityOptions_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to automatically attempt to create pay-as-you-go instances to meet the required number of ECS instances when the MultiAZPolicy parameter is set to COST_OPTIMIZED and sufficient spot instances cannot be created due to price or inventory reasons. Valid values:
    // 
    // - true: allows the creation.
    // - false: does not allow the creation.
    // 
    // Default value: true.
    shared_ptr<bool> compensateWithOnDemand_ {};
    // The ECI instance ID, which is the container group ID.
    shared_ptr<string> containerGroupId_ {};
    // The ARN of the Function Compute function for the custom scale-in policy. This parameter takes effect only when the first removal policy configured in RemovalPolicies is CustomPolicy.
    shared_ptr<string> customPolicyARN_ {};
    // The IDs of the ApsaraDB RDS instances. The value can be a JSON array that contains multiple ApsaraDB RDS instance IDs. Separate multiple IDs with commas (,). 
    // 
    // <props="china">The maximum number of ApsaraDB RDS instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of ApsaraDB RDS instances that can be associated with a scaling group**.
    // 
    // <props="intl">The maximum number of ApsaraDB RDS instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of ApsaraDB RDS instances that can be associated with a scaling group**.
    // 
    // <props="partner">The maximum number of ApsaraDB RDS instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to Quota Center to check the quota for the **maximum number of ApsaraDB RDS instances that can be associated with a scaling group**.
    shared_ptr<string> DBInstanceIds_ {};
    // The list of databases associated with the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::DBInstances>> DBInstances_ {};
    // The cooldown time after a scaling activity (adding or removing instances) is completed. Valid values: 0 to 86400. Unit: seconds.
    // 
    // During the cooldown time, the scaling group does not execute other scaling activities. This parameter takes effect only for scaling activities triggered by CloudMonitor event-triggered tasks.  
    // 
    // Default value: 300.
    shared_ptr<int32_t> defaultCooldown_ {};
    // The expected number of instances in the scaling group. The scaling group automatically maintains the number of instances at the expected number. The value cannot be greater than MaxSize or less than MinSize.
    shared_ptr<int32_t> desiredCapacity_ {};
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // - true: enables deletion protection for the scaling group. In this case, the scaling group cannot be deleted.
    // - false: disables deletion protection for the scaling group.
    // 
    // Default value: false.
    shared_ptr<bool> groupDeletionProtection_ {};
    // The type of instances managed by the scaling group. Valid values:
    // 
    // - ECS: the scaling group manages ECS instances.
    // 
    // - ECI: the scaling group manages ECI instances.
    // 
    // Default value: ECS.
    shared_ptr<string> groupType_ {};
    // The health check type of the scaling group. Valid values:
    // 
    // - NONE: disables health checks.
    // - ECS: performs health checks on instances in the scaling group. This value is used to enable instance health checks for both ECS and ECI scaling groups.
    // - LOAD_BALANCER: determines the health status of instances based on the health check results of the load balancer. CLB is not supported.
    // 
    // 
    // Default value: ECS.
    // 
    // > If you want to enable both instance health checks and load balancer health checks, use the `HealthCheckTypes` parameter.
    shared_ptr<string> healthCheckType_ {};
    // The health check modes of the scaling group.
    // > You can set multiple values for this parameter to enable multiple health check options. If the HealthCheckType parameter is specified, this parameter is ignored.
    shared_ptr<vector<string>> healthCheckTypes_ {};
    // The ID of the instance. When you create a scaling group, Auto Scaling obtains the required configuration information from the specified instance and automatically creates a scaling configuration.
    shared_ptr<string> instanceId_ {};
    // The ID of the launch template. This parameter is used to specify the launch template from which the scaling group obtains launch configurations.
    shared_ptr<string> launchTemplateId_ {};
    // The extended instance type information of the launch template.
    shared_ptr<vector<CreateScalingGroupRequest::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
    // The version of the launch template. Valid values:
    // 
    // - A specific version number.
    // 
    // - Default: always uses the default version of the launch template.
    // 
    // - Latest: always uses the latest version of the launch template.
    shared_ptr<string> launchTemplateVersion_ {};
    // The list of lifecycle hook information.
    shared_ptr<vector<CreateScalingGroupRequest::LifecycleHooks>> lifecycleHooks_ {};
    // The list of load balancing configurations.
    shared_ptr<vector<CreateScalingGroupRequest::LoadBalancerConfigs>> loadBalancerConfigs_ {};
    // The IDs of the Classic Load Balancer (CLB) instances. The value can be a JSON array that contains multiple CLB instance IDs. Separate multiple IDs with commas (,).
    // 
    // <props="china">The maximum number of CLB instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of load balancing instances that can be associated with a scaling group**.
    // 
    // <props="intl">The maximum number of CLB instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of load balancing instances that can be associated with a scaling group**.
    // 
    // <props="partner">The maximum number of CLB instances that can be associated with a scaling group depends on your Auto Scaling usage. Go to Quota Center to check the quota for the **maximum number of load balancing instances that can be associated with a scaling group**.
    shared_ptr<string> loadBalancerIds_ {};
    // The maximum lifetime of an instance in the scaling group. Unit: seconds.
    // 
    // Valid values: [86400, Integer.maxValue].
    // 
    // Default value: null.
    shared_ptr<int32_t> maxInstanceLifetime_ {};
    // The maximum number of instances in the scaling group. If the number of instances in the scaling group is greater than the value of MaxSize, Auto Scaling automatically removes instances. 
    // 
    // <props="china">The value range of MaxSize depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of instances in a scaling group**.
    // 
    // <props="intl">The value range of MaxSize depends on your Auto Scaling usage. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the quota for the **maximum number of instances in a scaling group**.
    // 
    // <props="partner">The value range of MaxSize depends on your Auto Scaling usage. Go to Quota Center to check the quota for the **maximum number of instances in a scaling group**.
    // 
    // If the quota for the **maximum number of instances in a scaling group** is 2000, the value range of MaxSize is 0 to 2000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxSize_ {};
    // The minimum number of instances in the scaling group. If the number of instances in the scaling group is less than the value of MinSize, Auto Scaling automatically creates instances. 
    // 
    // > The value of MinSize must be less than or equal to the value of MaxSize.
    // 
    // This parameter is required.
    shared_ptr<int32_t> minSize_ {};
    // The multi-zone scaling policy for ECS instances in the scaling group. Valid values: 
    //          
    // - PRIORITY: the vSwitches specified by VSwitchIds are prioritized. Auto Scaling preferentially attempts to scale ECS instances in the zone where the highest-priority vSwitch resides. If the scaling fails, Auto Scaling automatically attempts to scale instances in the zone of the next highest-priority vSwitch.  
    // - COST_OPTIMIZED: during scale-out, Auto Scaling attempts to create ECS instances in ascending order of vCPU unit price. During scale-in, Auto Scaling attempts to remove ECS instances in descending order of vCPU unit price. If the scaling configuration settings specify multiple instance types that use the preemptible billing method, spot instances are preferentially created. You can use the CompensateWithOnDemand parameter to specify whether to automatically attempt to create pay-as-you-go instances when spot instances cannot be created due to insufficient inventory or other reasons. 
    // 
    //     > COST_OPTIMIZED takes effect only when the scaling configuration settings specify multiple instance types or use spot instances. 
    // - BALANCE: evenly distributes ECS instances across the zones specified for the scaling group. If the instances are unevenly allocated across zones due to insufficient inventory or other reasons, you can invoke the [RebalanceInstance](https://help.aliyun.com/document_detail/71516.html) operation to balance the resources.
    // 
    //     > If the `MultiAZPolicy` parameter is set to `BALANCE`, the effect is the same as when the `MultiAZPolicy` parameter is set to `COMPOSABLE` and the `AzBalance` parameter is set to `true`. 
    // - COMPOSABLE: a combined policy that allows you to combine the preceding multi-zone scaling policies for ECS instances based on your needs. You can also specify additional parameters to control the capacity of the scaling group in a more fine-grained manner.
    // 
    // Default value: PRIORITY.
    shared_ptr<string> multiAZPolicy_ {};
    // The minimum number of pay-as-you-go instances required in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than this value, pay-as-you-go instances are preferentially created.
    shared_ptr<int32_t> onDemandBaseCapacity_ {};
    // The percentage of pay-as-you-go instances in the excess instances after the scaling group meets the minimum number of pay-as-you-go instances (OnDemandBaseCapacity). Valid values: 0 to 100.
    shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The filtering policy for the instance removal policy. Valid values:
    // 
    // - OldestInstance: removes the ECS instances that were added to the scaling group at the earliest point in time.
    // - NewestInstance: removes the ECS instances that were added to the scaling group at the latest point in time.
    // - OldestScalingConfiguration: removes the ECS instances that were created based on the earliest scaling configuration.
    // - CustomPolicy: removes ECS instances based on a custom scale-in policy function.
    // 
    // The scaling configuration mentioned in OldestScalingConfiguration refers to the instance configuration source in the scaling group, including scaling configurations and launch templates. CustomPolicy can only be set as the first removal policy. If you specify CustomPolicy, you must also specify the CustomPolicyARN parameter.
    // 
    // > The removal of ECS instances from a scaling group is also affected by the multi-zone scaling policy (MultiAZPolicy) of the scaling group. For more information, see [Configure a combined policy for removing instances](https://help.aliyun.com/document_detail/254822.html).
    shared_ptr<vector<string>> removalPolicies_ {};
    // The ID of the resource group to which the newly created scaling group belongs.
    // > Assigns the newly created scaling group to the specified resource group. If you do not specify this parameter, the scaling group belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The name of the scaling group. The name must be unique within a region.
    // 
    // It must be 2 to 64 characters in length. It must start with a digit, a letter, or a Chinese character, and can contain digits, underscores (_), hyphens (-), and periods (.).
    // 
    // Default value: the value of ScalingGroupId.
    shared_ptr<string> scalingGroupName_ {};
    // The reclaim mode of the scaling group. Valid values: 
    //          
    // - recycle: sets the reclaim mode of the scaling group to shutdown and reclaim mode.  
    // - release: sets the reclaim mode of the scaling group to release mode.
    // - forcerelease: sets the reclaim mode of the scaling group to force release mode.
    //     > If you select forcerelease, the system forcibly releases instances in the `Running` state during scale-down activities. Forcibly releasing an instance is equivalent to a power-off operation, which erases temporary data in the memory and storage of the instance. The data cannot be recovered. Proceed with caution.
    // - forcerecycle: sets the reclaim mode of the scaling group to force shutdown and reclaim mode.
    //     > If you select forcerecycle, the system forcibly shuts down instances in the `Running` state during scale-down activities. Forcibly shutting down an instance is equivalent to a power-off operation, which erases temporary data in the memory and storage of the instance. The data cannot be recovered. Proceed with caution.
    // 
    // 
    // The ScalingPolicy parameter specifies the reclaim mode of the scaling group, but the specific action taken when an instance is removed from the scaling group is determined by the RemovePolicy parameter of RemoveInstances. For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    shared_ptr<string> scalingPolicy_ {};
    // The collection of information about the server groups.
    // > You cannot configure the same server group settings in both AlbServerGroups and ServerGroups at the same time.
    shared_ptr<vector<CreateScalingGroupRequest::ServerGroups>> serverGroups_ {};
    // The spot capacity distribution policy. You can use this parameter to separately specify the distribution policy for spot capacity. This parameter takes effect only when the MultiAZPolicy parameter is set to COMPOSABLE. Valid values:
    // 
    // - priority: Creates instances based on the order of the configured instance types.
    // - lowestPrice: Creates instances based on the unit price per vCPU of the instance types in ascending order.
    // 
    // Default value: priority.
    shared_ptr<string> spotAllocationStrategy_ {};
    // The number of available instance types. The scaling group evenly creates spot instances across multiple instance types with the lowest cost. Valid values: 1 to 10.
    shared_ptr<int32_t> spotInstancePools_ {};
    // Specifies whether to enable the Auto Scaling policy to supplement spot instances. After this feature is enabled, when a system message indicating that a spot instance is to be reclaimed is received, the scaling group attempts to create a new instance to replace the spot instance to be reclaimed.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The timeout period for waiting for an ECS instance to be stopped during the scale-in process. Unit: seconds.
    // Valid values: 30 to 240.
    // 
    // > - This parameter takes effect only in the scale-in process when ScalingPolicy is set to release.  
    // > - If this parameter is specified, the system waits for a maximum of the StopInstanceTimeout period for the instance to be stopped. After the timeout period elapses, the scale-in process continues regardless of whether the instance is stopped.  
    // > - If this parameter is not specified, the system waits for a long time for the instance to be stopped. The scale-in process continues only after the instance is stopped. If the instance fails to be stopped, the scale-in process is rolled back and the scale-in fails.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
    // > This parameter is not available.
    shared_ptr<bool> syncAlarmRuleToCms_ {};
    // The collection of tag information for the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::Tags>> tags_ {};
    // The collection of information about the virtual server groups associated with the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::VServerGroups>> VServerGroups_ {};
    // The ID of the vSwitch. After this parameter is specified, the network type of the scaling group is VPC.
    // 
    // > If neither VSwitchId nor VSwitchIds is specified for the scaling group, the network type of the scaling group is classic network by default.
    shared_ptr<string> vSwitchId_ {};
    // The IDs of one or more vSwitches. If you use the VSwitchIds parameter, the VSwitchId parameter is ignored. After this parameter is specified, the network type of the scaling group is VPC.
    // 
    // When you specify multiple vSwitches:
    // 
    // - The vSwitches must belong to the same VPC.
    // 
    // - The vSwitches can belong to different zones.
    // 
    // - The vSwitches are prioritized in ascending order of numbers. 1 indicates the highest priority. If instances cannot be created in the zone of a higher-priority vSwitch, the system automatically selects the next highest-priority vSwitch to create instances.
    // 
    // > If neither VSwitchId nor VSwitchIds is specified for the scaling group, the network type of the scaling group is classic network by default.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // The behavior policy of the scaling group during zone shift.
    shared_ptr<CreateScalingGroupRequest::ZoneShiftPolicy> zoneShiftPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
