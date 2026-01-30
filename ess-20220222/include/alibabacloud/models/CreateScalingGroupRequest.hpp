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
        // The port number used by each ECS instance as a backend server in the vServer group. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The ID of the vServer group.
        shared_ptr<string> VServerGroupId_ {};
        // The weight of each ECS instance as a backend server in the vServer group. If you increase the weight for an ECS instance, the number of requests that are forwarded to the ECS instance also increases. If you set the weight for an ECS instance to 0, no requests are forwarded to the ECS instance. Valid values: 0 to 100.
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
      // The ID of the CLB instance to which the backend vServer group belongs.
      shared_ptr<string> loadBalancerId_ {};
      // The attributes of the backend vServer group.
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
      // Identifies whether the tag is a propagatable tag. Valid values:
      // 
      // *   true: propagates the tag to only instances that are newly created.
      // *   false: does not propagate the tag to any instances.
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
      // The port number used by each ECS instance as backend server in the vServer group. Valid values: 1 to 65535.
      shared_ptr<int32_t> port_ {};
      // The ID of the server group.
      shared_ptr<string> serverGroupId_ {};
      // The type of server group N. Valid Values:
      // 
      // *   ALB
      // *   NLB
      // *   GWLB
      shared_ptr<string> type_ {};
      // The weight of each ECS instance as a backend server in the server group. Valid values: 0 to 100.
      // 
      // The higher the weight, the more access requests the instance will be assigned. If the weight is 0, the instance will not receive any access requests.
      // 
      // > For ALB and NLB types, this parameter is required. GWLB type cannot be set.
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
      // The weight of each ECS instance as a backend server in the CLB backend server group. If you increase the weight for an ECS instance, the number of requests that are forwarded to the ECS instance also increases. If you set the weight for an ECS instance to 0, no requests are forwarded to the ECS instance. Valid values: 0 to 100.
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
      // The action that Auto Scaling performs when the lifecycle hook times out. Valid values:
      // 
      // *   CONTINUE: Auto Scaling continues to respond to the scaling request.
      // *   ABANDON: Auto Scaling releases ECS instances that are created during scale-out events, or removes ECS instances from the scaling group during scale-in events.
      // 
      // If multiple lifecycle hooks in the scaling group are triggered during scale-in events, and you set DefaultResult to ABANDON for one of the lifecycle hooks, Auto Scaling immediately performs the action after the lifecycle hook whose DefaultResult is set to ABANDON times out. In this case, other lifecycle hooks time out ahead of schedule. In other cases, Auto Scaling performs the action only after all lifecycle hooks time out. The action that Auto Scaling performs is determined by the value of DefaultResult that you specify for the lifecycle hook that most recently times out.
      // 
      // Default value: CONTINUE.
      shared_ptr<string> defaultResult_ {};
      // The period of time before the lifecycle hook times out. When the lifecycle hook times out, Auto Scaling performs the action that is specified by DefaultResult. Valid values: 30 to 21600. Unit: seconds.
      // 
      // After you create a lifecycle hook, you can call the RecordLifecycleActionHeartbeat operation to extend the timeout period of the lifecycle hook. You can also call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule.
      // 
      // Default value: 600.
      shared_ptr<int32_t> heartbeatTimeout_ {};
      // The name of the lifecycle hook. After you specify this parameter, you cannot change the name of the lifecycle hook. If you do not specify this parameter, the name of the lifecycle hook is the same as the ID of the lifecycle hook.
      shared_ptr<string> lifecycleHookName_ {};
      // The type of the scaling activity to which you want to apply the lifecycle hook. Valid values:
      // 
      // *   SCALE_OUT
      // *   SCALE_IN
      // 
      // >  If you specify lifecycle hooks for the scaling group, you must specify LifecycleTransition. Other parameters are optional.
      shared_ptr<string> lifecycleTransition_ {};
      // The Alibaba Cloud Resource Name (ARN) of the notification recipient party. You can specify a Simple Message Queue (SMQ, formerly MNS) topic or queue as the recipient party. The value is in the acs:ess:{region}:{account-id}:{resource-relative-id} format.
      // 
      // *   region: the region ID of the scaling group
      // *   account-id: the ID of your Alibaba Cloud account.
      // 
      // Examples:
      // 
      // *   SMQ queue: acs:ess:{region}:{account-id}:queue/{queuename}
      // *   SMQ topic: acs:ess:{region}:{account-id}:topic/{topicname}
      shared_ptr<string> notificationArn_ {};
      // The fixed string that you want to include in notifications. When a lifecycle hook takes effect, Auto Scaling sends a notification. The fixed string can contain up to 4,096 characters in length. When Auto Scaling sends a notification to the recipient party, it includes predefined notification metadata into the notification. This helps in managing and labeling notifications of different categories. NotificationMetadata takes effect only if you specify NotificationArn.
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
      // The instance type that you want to use to override the instance type that is specified in the launch template.
      // 
      // If you want to scale instances based on the weighted capacities of the instances, you must specify both the InstanceType and WeightedCapacity parameters.
      // 
      // > This parameter is available only if you specify the LaunchTemplateId parameter.
      // 
      // You can use the InstanceType parameter to specify only instance types that are available for purchase.
      shared_ptr<string> instanceType_ {};
      // The maximum bid price of the instance type that is specified by the `InstanceType` parameter. You can specify 1 to 10 instance types by using the Extended Configurations feature of the launch template.
      // 
      // > This parameter is available only if you specify the `LaunchTemplateId` parameter.
      shared_ptr<float> spotPriceLimit_ {};
      // The weight of the instance type. The weight specifies the capacity of an instance of the specified instance type in the scaling group. If you want to scale instances based on the weighted capacities of the instances, you must specify the WeightedCapacity parameter after you specify the InstanceType parameter.
      // 
      // A higher weight specifies that a smaller number of instances of the specified instance type are required to meet the expected capacity requirement.
      // 
      // Performance metrics, such as the number of vCPUs and the memory size of each instance type, may vary. You can specify different weights for different instance types based on your business requirements.
      // 
      // Example:
      // 
      // *   Current capacity: 0
      // *   Expected capacity: 6
      // *   Capacity of ecs.c5.xlarge: 4
      // 
      // To meet the expected capacity requirement, Auto Scaling must create and add two ecs.c5.xlarge instances.
      // 
      // > The capacity of the scaling group cannot exceed the sum of the maximum number of instances that is specified by the MaxSize parameter and the maximum weight of the instance types.
      // 
      // Valid values of the WeightedCapacity parameter: 1 to 500.
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
      // The mode in which you want to attach the database to the scaling group. Valid values:
      // 
      // *   SecurityIp: the mode in which Auto Scaling automatically adds the private IP addresses of ECS instances to the IP address whitelist of the database during scale-out events. You can set the value to SecurityIp only if you set Type to RDS.
      // *   SecurityGroup: the mode in which Auto Scaling adds the security group of the applied scaling configuration to the security group whitelist of the database. This setting allows ECS instances created from the scaling configuration to access the database.
      shared_ptr<string> attachMode_ {};
      // The database ID.
      shared_ptr<string> DBInstanceId_ {};
      // The database type. Valid values:
      // 
      // *   RDS
      // *   Redis
      // *   MongoDB
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
      // Specifies whether to automatically create pay-as-you-go ECS instances to reach the required number of ECS instances when preemptible ECS instances cannot be created due to high prices or insufficient inventory of resources. This parameter takes effect when you set `MultiAZPolicy` to `COST_OPTIMIZED`. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: true.
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The minimum number of pay-as-you-go instances required in the scaling group. When the number of pay-as-you-go instances drops below the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
      // 
      // If you set `MultiAZPolicy` to `COMPOSABLE`, the default value is 0.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances is reached. `OnDemandBaseCapacity` specifies the minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 100.
      // 
      // If you set `MultiAZPolicy` to `COMPOSABLE`, the default value is 100.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The cost comparison method. Valid values:
      // 
      // *   PricePerUnit: Prices are compared based on the price per instance capacity.
      // 
      //     Capacity is determined by the weights assigned to instance types in the scaling group. If no weight is specified, a default weight of 1 is used, meaning each instance is assigned a capacity of 1.
      // 
      // *   PricePerVCpu: Prices are compared based on the price per vCPU.
      // 
      // Default value: PricePerUnit.
      shared_ptr<string> priceComparisonMode_ {};
      // Specifies whether to replace pay-as-you-go instances with preemptible instances. If you specify `CompensateWithOnDemand`, it may result in a higher percentage of pay-as-you-go instances compared to the value of `OnDemandPercentageAboveBaseCapacity`. In this scenario, Auto Scaling will try to deploy preemptible instances to replace the surplus pay-as-you-go instances. When `CompensateWithOnDemand` is specified, Auto Scaling creates pay-as-you-go instances if there are not enough preemptible instance types. To avoid keeping these pay-as-you-go ECS instances for long periods, Auto Scaling tries to replace them with preemptible instances as soon as enough of preemptible instance types become available. Valid values:
      // 
      // *   true
      // *   false
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
      // You can attach only a limited number of ALB server groups to a scaling group. To view the predefined quota limit or manually request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
      shared_ptr<string> albServerGroupId_ {};
      // The port number used by each ECS instance as a backend server in the ALB server group. Valid values: 1 to 65535.
      shared_ptr<int32_t> port_ {};
      // The weight of an ECS instance as a backend server in the ALB server group. If you increase the weight for an ECS instance, the number of requests that are forwarded to the ECS instance also increases. If you set the weight for an ECS instance to 0, no requests are forwarded to the ECS instance. Valid values: 0 to 100.
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
        && this->VServerGroups_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr; };
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


  protected:
    // The Application Load Balancer (ALB) server groups.
    shared_ptr<vector<CreateScalingGroupRequest::AlbServerGroups>> albServerGroups_ {};
    // The allocation policy of instances. Auto Scaling selects instance types based on the allocation policy to create the required number of instances. The policy can be applied to pay-as-you-go instances and preemptible instances. This parameter takes effect only when you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order of the instance types to create the required number of instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of instances.
    // 
    // Default value: priority.
    shared_ptr<string> allocationStrategy_ {};
    // Whether to enable automatic rebalancing for the scaling group. This takes effect only when BalancedOnly is enabled for the scaling group. Valid values:
    // 
    // *   false: Auto rebalancing is disabled for the scaling group.
    // *   true: If Auto rebalancing is enabled, the scaling group automatically detects the capacity of the zone. If the capacity of the zone is unbalanced, the scaling group actively scales out the zone and re-balances the capacity of the zone.
    // 
    // Default value: false.
    shared_ptr<bool> autoRebalance_ {};
    // Specifies whether to evenly distribute instances in the scaling group across multiple zones. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  If you set `MultiAZPolicy` to `COMPOSABLE` and enable `AzBalance` to `true`, this setting has an equivalent effect to setting `MultiAZPolicy` to `BALANCE`.
    // 
    // Default value: false.
    shared_ptr<bool> azBalance_ {};
    // The zone balancing mode. This mode takes effect only when the zone balancing mode is enabled. Valid values:
    // 
    // *   BalancedBestEffort: If a resource fails to be created in a zone, it is downgraded to another zone to ensure best-effort delivery of the resource.
    // *   BalancedOnly: If a resource fails to be created in a zone, it is not downgraded to another zone. The scale-out activity is partially successful to avoid excessive imbalance of resources in different zones.
    // 
    // Default value: BalancedBestEffort.
    shared_ptr<string> balanceMode_ {};
    // The capacity options.
    shared_ptr<CreateScalingGroupRequest::CapacityOptions> capacityOptions_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to automatically create pay-as-you-go instances to meet the requirement on the number of ECS instances when the expected capacity of preemptible instances cannot be provided due to reasons such as cost-related issues and insufficient resources. This parameter is available only if you set the MultiAZPolicy parameter to COST_OPTIMIZED. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    shared_ptr<bool> compensateWithOnDemand_ {};
    // The ID of the elastic container instance.
    shared_ptr<string> containerGroupId_ {};
    // The Alibaba Cloud Resource Name (ARN) of the custom scale-in policy (Function). This parameter is available only if you specify CustomPolicy as the first step to remove instances.
    shared_ptr<string> customPolicyARN_ {};
    // The IDs of the ApsaraDB RDS instances that you want to associate with the scaling group. The value can be a JSON array that contains multiple ApsaraDB RDS instance IDs. Separate multiple IDs with commas (,).
    // 
    // You can associate only a limited number of ApsaraDB RDS instances with a scaling group. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the maximum number of ApsaraDB RDS instances that you can associate with a scaling group.
    shared_ptr<string> DBInstanceIds_ {};
    // The databases that you want to attach to the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::DBInstances>> DBInstances_ {};
    // The cooldown period of the scaling group after a scaling activity is complete in the scaling group. Valid values: 0 to 86400. Unit: seconds.
    // 
    // During the cooldown period, Auto Scaling does not execute scaling activities that are triggered by CloudMonitor event-triggered tasks.
    // 
    // Default value: 300.
    shared_ptr<int32_t> defaultCooldown_ {};
    // The expected number of ECS instances in the scaling group. Auto Scaling automatically maintains the specified expected number of ECS instances. The DesiredCapacity value cannot be greater than the MaxSize value or less than the MinSize value.
    shared_ptr<int32_t> desiredCapacity_ {};
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // *   true: enables deletion protection for the scaling group. This way, the scaling group cannot be deleted.
    // *   false: disables deletion protection for the scaling group.
    // 
    // Default value: false.
    shared_ptr<bool> groupDeletionProtection_ {};
    // The type of the instances that are managed by the scaling group. Valid values:
    // 
    // *   ECS: ECS instances.
    // *   ECI: elastic container instances.
    // 
    // Default value: ECS.
    shared_ptr<string> groupType_ {};
    // The health check mode of the scaling group. Valid values:
    // 
    // *   NONE: Auto Scaling does not check the health status of instances.
    // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
    // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of Classic Load Balancer (CLB) instances are not supported as the health check basis for instances in the scaling group.
    // 
    // Default value: ECS.
    // 
    // >  If you want to enable instance health check and load balancer health check at the same time, we recommend that you specify `HealthCheckTypes`.
    shared_ptr<string> healthCheckType_ {};
    // The health check mode of the scaling group.
    // 
    // >  You can specify multiple values for this parameter to enable multiple health check options at the same time. If you specify `HealthCheckType`, this parameter is ignored.
    shared_ptr<vector<string>> healthCheckTypes_ {};
    // The ID of the ECS instance. When you create a scaling group, you can specify an existing ECS instance. Auto Scaling obtains the configurations of the ECS instance and automatically creates a scaling configuration from the obtained configurations.
    shared_ptr<string> instanceId_ {};
    // The ID of the launch template that provides instance configurations for Auto Scaling to create instances.
    shared_ptr<string> launchTemplateId_ {};
    // Details of the instance types that you specify by using the Extended Configurations feature of the launch template.
    shared_ptr<vector<CreateScalingGroupRequest::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
    // The version number of the launch template. Valid values:
    // 
    // *   A fixed template version number.
    // *   Default: the default template version.
    // *   Latest: the latest template version.
    shared_ptr<string> launchTemplateVersion_ {};
    // The lifecycle hooks.
    shared_ptr<vector<CreateScalingGroupRequest::LifecycleHooks>> lifecycleHooks_ {};
    // The load balancer configurations.
    shared_ptr<vector<CreateScalingGroupRequest::LoadBalancerConfigs>> loadBalancerConfigs_ {};
    // The IDs of the CLB instances that you want to associate with the scaling group. The value can be a JSON array that contains multiple CLB instance IDs. Separate multiple IDs with commas (,).
    // 
    // You can associate only a limited number of CLB instances with a scaling group. Go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check the maximum number of CLB instances that you can associate with a scaling group.
    shared_ptr<string> loadBalancerIds_ {};
    // The maximum life span of an instance in the scaling group. Unit: seconds.
    // 
    // Valid values: 86400 to the value of the Integer.maxValue parameter.
    // 
    // Default value: null.
    shared_ptr<int32_t> maxInstanceLifetime_ {};
    // The maximum number of instances that can be contained in the scaling group. When the total number of ECS instances in the scaling group exceeds the value of MaxSize, Auto Scaling automatically removes ECS instances from the scaling group until the total number equals the maximum number.
    // 
    // The value range of MaxSize is directly correlated with the degree of dependency your business has on Auto Scaling. You can go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas) to check **the maximum number of instances that a single scaling group can contain.**
    // 
    // If **a single scaling group can contain up to 2,000 ECS instances**, the value range of MaxSize is 0 to 2,000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxSize_ {};
    // The minimum number of instances that must be contained in the scaling group. When the total number of ECS instances in the scaling group is less than the value of MinSize, Auto Scaling automatically creates ECS instances in the scaling group until the total number reaches the minimum number.
    // 
    // >  The value of MinSize must be less than or equal to the value of MaxSize.
    // 
    // This parameter is required.
    shared_ptr<int32_t> minSize_ {};
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
    shared_ptr<string> multiAZPolicy_ {};
    // The minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
    shared_ptr<int32_t> onDemandBaseCapacity_ {};
    // The percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances reaches the requirement. Valid values: 0 to 100.
    shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
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
    shared_ptr<vector<string>> removalPolicies_ {};
    // The ID of the resource group to which you want to add the scaling group.
    // 
    // > If you specify this parameter, new scaling groups are added to the specified resource group. If you do not specify this parameter, new scaling groups are added to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The name of the scaling group. The name of each scaling group must be unique in a region.
    // 
    // The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). The name must start with a letter or a digit.
    // 
    // If you do not specify this parameter, the value of the ScalingGroupId parameter is used.
    shared_ptr<string> scalingGroupName_ {};
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
    shared_ptr<string> scalingPolicy_ {};
    // The information about the server groups.
    // 
    // > You cannot use AlbServerGroups and ServerGroups to specify the same server group.
    shared_ptr<vector<CreateScalingGroupRequest::ServerGroups>> serverGroups_ {};
    // The allocation policy of preemptible instances. You can use this parameter to individually specify the allocation policy of preemptible instances. This parameter takes effect only if you set the `MultiAZPolicy` parameter to `COMPOSABLE`. Valid values:
    // 
    // *   priority: Auto Scaling selects instance types based on the specified order of the instance types to create the required number of preemptible instances.
    // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of preemptible instances.
    // 
    // Default value: priority.
    shared_ptr<string> spotAllocationStrategy_ {};
    // The number of available instance types. Auto Scaling evenly creates preemptible instances of multiple instance types that are provided at the lowest cost in the scaling group. Valid values: 1 to 10.
    shared_ptr<int32_t> spotInstancePools_ {};
    // Specifies whether to supplement preemptible instances. If you set this parameter to true, Auto Scaling creates an instance to replace a preemptible instance when Auto Scaling receives a system message which indicates that the preemptible instance is to be reclaimed.
    shared_ptr<bool> spotInstanceRemedy_ {};
    // The period of time required by the ECS instance to enter the Stopped state. Unit: seconds. Valid values: 30 to 240.
    // 
    // > 
    // 
    // *   This parameter takes effect only if you set ScalingPolicy to release.
    // 
    // *   If you specify this parameter, the system will wait for the ECS instance to enter the Stopped state for the specified period of time before continuing with the scale-in operation, regardless of the status of the ECS instance.
    // 
    // *   If you do not specify this parameter, the system will wait for the ECS instance to stop before continuing with the scale-in operation. If the ECS instance is not successfully stopped, the scale-in process will be rolled back and considered failed.
    shared_ptr<int32_t> stopInstanceTimeout_ {};
    // > This parameter is unavailable.
    shared_ptr<bool> syncAlarmRuleToCms_ {};
    // The collection of tag information for the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::Tags>> tags_ {};
    // The backend vServer group that you want to associate with the scaling group.
    shared_ptr<vector<CreateScalingGroupRequest::VServerGroups>> VServerGroups_ {};
    // The ID of the vSwitch. If you specify the VSwitchId parameter, the network type of the scaling group is VPC.
    // 
    // > If you do not specify the VSwitchId or VSwitchIds parameter, the network type of the scaling group is classic network.
    shared_ptr<string> vSwitchId_ {};
    // The IDs of the vSwitches. If you specify VSwitchIds, VSwitchId is ignored. If you specify VSwitchIds, the network type of the scaling group is VPC.
    // 
    // If you specify multiple vSwitches, take note of the following items:
    // 
    // *   The vSwitches must belong to the same VPC.
    // *   The vSwitches can belong to different zones.
    // *   vSwitches are sorted in ascending order based on their priorities. The first vSwitch has the highest priority. If Auto Scaling fails to create ECS instances in the zone where the vSwitch of the highest priority resides, Auto Scaling attempts to create ECS instances in the zone where the vSwitch of the next highest priority resides.
    // 
    // >  If you do not specify VSwitchId or VSwitchIds for your scaling group, the network type of the scaling group is classic network.
    shared_ptr<vector<string>> vSwitchIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
