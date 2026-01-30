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
          // The port number that is used by the load balancer to provide external services.
          shared_ptr<int32_t> port_ {};
          // The ID of the backend vServer group.
          shared_ptr<string> VServerGroupId_ {};
          // The weight of the backend vServer group.
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
        // The ID of the load balancer to which the backend vServer group belongs.
        shared_ptr<string> loadBalancerId_ {};
        // The attributes of the backend vServer groups.
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
        // Indicates whether the tags of the scaling group can be propagated to instances. Valid values:
        // 
        // *   true: The tags of the scaling group can be propagated only to new instances.
        // *   false: The tags of the scaling group cannot be propagated to instances.
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
        // The port number used by each ECS instance in the server group.
        shared_ptr<int32_t> port_ {};
        // The ID of the server group.
        shared_ptr<string> serverGroupId_ {};
        // The type of the server group. Valid values:
        // 
        // *   ALB
        // *   NLB
        // *   GWLB
        shared_ptr<string> type_ {};
        // The weight of an ECS instance as a backend server in the server group.
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
        // The weight of an ECS instance as a backend server in the CLB server group. An increase in the weight of an ECS instance indicates an increase in the number of access requests that are forwarded to the ECS instance. If you set the weight of an ECS instance to 0, no access requests are forwarded to the ECS instance. Valid values: 0 to 100.
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
        // The instance type. The instance type that is specified by this parameter overrides the instance type that is specified in the launch template.
        shared_ptr<string> instanceType_ {};
        // The maximum bid price of the instance type that is specified by `LaunchTemplateOverride.InstanceType`.
        // 
        // >  This parameter takes effect only if you use `LaunchTemplateId` to specify a launch template.
        shared_ptr<float> spotPriceLimit_ {};
        // The weight of the instance type. The value of this parameter indicates the capacity of a single instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the specified instance type are required to meet the expected capacity.
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
        // The ID of the database.
        shared_ptr<string> DBInstanceId_ {};
        // The IDs of the security groups that are added to the security group whitelist of the attached database.
        shared_ptr<vector<string>> securityGroupIds_ {};
        // The type of the database. Valid values:
        // 
        // *   RDS.
        // *   Redis.
        // *   MongoDB.
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
        // Indicates whether pay-as-you-go ECS instances can be automatically created to reach the required number of ECS instances when preemptible ECS instances cannot be created due to high prices or insufficient inventory of resources. This parameter takes effect when you set `MultiAZPolicy` to `COST_OPTIMIZED`. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> compensateWithOnDemand_ {};
        // The minimum number of pay-as-you-go instances required in the scaling group. When the actual number of pay-as-you-go instances drops below the minimum threshold, Auto Scaling preferentially creates pay-as-you-go instances. Valid values: 0 to 1000.
        shared_ptr<int32_t> onDemandBaseCapacity_ {};
        // The percentage of pay-as-you-go instances in the excess instances when the minimum number of pay-as-you-go instances is reached. `OnDemandBaseCapacity` specifies the minimum number of pay-as-you-go instances required in the scaling group. Valid values: 0 to 100.
        shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
        // Indicates how prices are compared. Valid values:
        // 
        // *   PricePerUnit: Prices are compared based on the price per instance capacity.
        // 
        //     Capacity is determined by the weights assigned to instance types in the scaling group. If no weight is specified, a default weight of 1 is used, meaning each instance is assigned a capacity of 1.
        // 
        // *   PricePerVCpu: Prices are compared based on the price per vCPU.
        shared_ptr<string> priceComparisonMode_ {};
        // Specifies whether to replace pay-as-you-go ECS instances with preemptible ECS instances. If you specify `CompensateWithOnDemand`, it may result in a higher percentage of pay-as-you-go instances compared to the value of `OnDemandPercentageAboveBaseCapacity`. In this scenario, Auto Scaling will try to deploy preemptible ECS instances to replace the surplus pay-as-you-go ECS instances. When `CompensateWithOnDemand` is specified, Auto Scaling creates pay-as-you-go ECS instances if there are not enough preemptible instance types available. To avoid keeping these pay-as-you-go ECS instances for long periods, Auto Scaling tries to replace them with preemptible instances as soon as enough of preemptible instance types become available. Valid values:
        // 
        // *   true
        // *   false
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
        // The port number used by an ECS instance as a backend server in the ALB server group.
        shared_ptr<int32_t> port_ {};
        // The weight of an ECS instance as a backend server in the ALB server group.
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
        && this->VServerGroups_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
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


    protected:
      // The number of ECS instances that are in the In Service state in the scaling group.
      shared_ptr<int32_t> activeCapacity_ {};
      // The ID of the active scaling configuration in the scaling group.
      shared_ptr<string> activeScalingConfigurationId_ {};
      // The Application Load Balancer (ALB) server groups.
      shared_ptr<vector<ScalingGroups::AlbServerGroups>> albServerGroups_ {};
      // The instance allocation policy. Auto Scaling selects instance types based on the allocation policy to create the required number of preemptible instances. The policy is suitable for pay-as-you-go instances and preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   priority: Auto Scaling adopts the predefined instance type sequence to create the required number of preemptible instances.
      // *   lowestPrice: Auto Scaling selects instance types that have the most economical vCPU pricing to create the required number of instances.
      shared_ptr<string> allocationStrategy_ {};
      // Whether to enable automatic rebalancing for the scaling group. This takes effect only when BalancedOnly is enabled for the scaling group. Valid value:
      // 
      // *   false: Auto rebalancing is disabled for the scaling group.
      // *   true: If Auto rebalancing is enabled, the scaling group automatically detects the capacity of the zone. If the capacity of the zone is unbalanced, the scaling group actively scales out the zone and re-balances the capacity of the zone.
      shared_ptr<bool> autoRebalance_ {};
      // Indicates whether instances in the scaling group are evenly distributed across the specified zones. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> azBalance_ {};
      // The zone balancing mode. This mode takes effect only when the zone balancing mode is enabled. Valid value:
      // 
      // *   Default value: BalancedBestEffort. If a resource fails to be created in a zone, the resource is downgraded to another zone. This ensures best-effort delivery of the resource.
      // *   BalancedOnly: If a resource fails to be created in a zone, the resource is not downgraded to another zone. The scale-out activity is partially successful to avoid excessive imbalance of resources in different zones.
      shared_ptr<string> balanceMode_ {};
      // The capacity options.
      shared_ptr<ScalingGroups::CapacityOptions> capacityOptions_ {};
      // Indicates whether Auto Scaling can create pay-as-you-go instances to supplement preemptible instances if preemptible instances cannot be created due to price-related factors or insufficient inventory when MultiAZPolicy is set to COST_OPTIMIZED. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The time when the scaling group was created.
      shared_ptr<string> creationTime_ {};
      // >  This parameter is unavailable.
      shared_ptr<string> currentHostName_ {};
      // The Alibaba Cloud Resource Name (ARN) of the function that is specified in the custom scale-in policy. This parameter takes effect only if you set the first value of RemovalPolicies to CustomPolicy.
      shared_ptr<string> customPolicyARN_ {};
      // The IDs of the ApsaraDB RDS instances that are attached to the scaling group.
      shared_ptr<vector<string>> DBInstanceIds_ {};
      // The databases that are attached to the scaling group.
      shared_ptr<vector<ScalingGroups::DBInstances>> DBInstances_ {};
      // The cooldown period of the scaling group. During the cooldown period, Auto Scaling does not execute the scaling activities that are triggered by [CloudMonitor](https://help.aliyun.com/document_detail/35170.html) event-triggered tasks.
      shared_ptr<int32_t> defaultCooldown_ {};
      // The expected number of ECS instances in the scaling group. Auto Scaling automatically maintains the expected number of ECS instances.
      shared_ptr<int32_t> desiredCapacity_ {};
      // Indicates whether the Expected Number of Instances feature is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableDesiredCapacity_ {};
      // Indicates whether the Deletion Protection feature is enabled for the scaling group. Valid values:
      // 
      // *   true: The Deletion Protection feature is enabled for the scaling group. The scaling group cannot be deleted.
      // *   false: The Deletion Protection feature is disabled for the scaling group.
      shared_ptr<bool> groupDeletionProtection_ {};
      // The type of instances that are managed by the scaling group.
      shared_ptr<string> groupType_ {};
      // The health check mode of the scaling group. Valid values:
      // 
      // *   NONE: Auto Scaling does not perform health checks.
      // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
      // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of Classic Load Balancer (CLB) instances are not supported as the health check basis for instances in the scaling group.
      shared_ptr<string> healthCheckType_ {};
      // The health check mode of the scaling group. Valid values:
      // 
      // *   NONE: Auto Scaling does not perform health checks.
      // *   ECS: Auto Scaling checks the health status of instances in the scaling group. If you want to enable instance health check, you can set the value to ECS, regardless of whether the scaling group is of ECS type or Elastic Container Instance type.
      // *   LOAD_BALANCER: Auto Scaling checks the health status of instances in the scaling group based on the health check results of load balancers. The health check results of CLB instances are not supported as the health check basis for instances in the scaling group.
      shared_ptr<vector<string>> healthCheckTypes_ {};
      // The number of instances that are initialized before they are added into the scaling group.
      shared_ptr<int32_t> initCapacity_ {};
      // >  This parameter is not available for use.
      shared_ptr<bool> isElasticStrengthInAlarm_ {};
      // The ID of the launch template that is used by the scaling group.
      shared_ptr<string> launchTemplateId_ {};
      // The instance types that are extended in the launch template.
      shared_ptr<vector<ScalingGroups::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
      // The version of the launch template that is used by the scaling group.
      shared_ptr<string> launchTemplateVersion_ {};
      // The status of the scaling group. Valid values:
      // 
      // *   Active: The scaling group is active. Active scaling groups can receive requests to execute scaling rules and trigger scaling activities.
      // *   Inactive: The scaling group is in the Disabled state. Disabled scaling groups cannot receive requests to execute scaling rules.
      // *   Deleting: The scaling group is being deleted. Scaling groups that are being deleted cannot receive requests to execute scaling rules, and the parameter settings of the scaling groups cannot be modified.
      shared_ptr<string> lifecycleState_ {};
      // The load balancer configurations.
      shared_ptr<vector<ScalingGroups::LoadBalancerConfigs>> loadBalancerConfigs_ {};
      // The IDs of the load balancers that are attached to the scaling group.
      shared_ptr<vector<string>> loadBalancerIds_ {};
      // The maximum life span of each ECS instance in the scaling group. Unit: seconds.
      // 
      // Valid values: 0 or `[86400, Integer.maxValue]`. A value of 0 for MaxInstanceLifetime indicates that a previously set limit has been removed. This effectively disables the maximum instance lifetime constraint.
      // 
      // Default value: null.
      // 
      // >  This parameter is not supported by scaling groups of the Elastic Container Instance type and scaling groups whose ScalingPolicy is set to Recycle.
      shared_ptr<int32_t> maxInstanceLifetime_ {};
      // The maximum number of ECS instances that can be contained in the scaling group.
      shared_ptr<int32_t> maxSize_ {};
      // The minimum number of ECS instances that must be contained in the scaling group.
      shared_ptr<int32_t> minSize_ {};
      // The time when the scaling group was last modified.
      shared_ptr<string> modificationTime_ {};
      // The ID of the CloudMonitor application group that is associated with the scaling group.
      shared_ptr<string> monitorGroupId_ {};
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
      shared_ptr<string> multiAZPolicy_ {};
      // The minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances in excess when the minimum number of pay-as-you-go instances reaches the threshold. Valid values: 0 to 100.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The number of ECS instances that are being added to the scaling group and configured.
      shared_ptr<int32_t> pendingCapacity_ {};
      // The number of ECS instances that are in the Pending Add state in the scaling group.
      shared_ptr<int32_t> pendingWaitCapacity_ {};
      // The number of ECS instances that are in the Protected state in the scaling group.
      shared_ptr<int32_t> protectedCapacity_ {};
      // The region ID of the scaling group.
      shared_ptr<string> regionId_ {};
      // The instance removal policies. Valid values:
      // 
      // *   OldestInstance: Auto Scaling removes ECS instances that are added at the earliest point in time to the scaling group.
      // *   NewestInstance: Auto Scaling removes ECS instances that are most recently added to the scaling group.
      // *   OldestScalingConfiguration: Auto Scaling removes ECS instances that are created from the earliest scaling configuration.
      shared_ptr<vector<string>> removalPolicies_ {};
      // The number of ECS instances that are being removed from the scaling group.
      shared_ptr<int32_t> removingCapacity_ {};
      // The number of ECS instances that are in the Pending Remove state in the scaling group.
      shared_ptr<int32_t> removingWaitCapacity_ {};
      // The ID of the resource group to which the scaling group belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The name of the scaling group.
      shared_ptr<string> scalingGroupName_ {};
      // The instance reclaim mode of the scaling group. Valid values:
      // 
      // *   recycle: economical mode.
      // *   release: release mode.
      // *   forcerelease: forced release mode.
      // 
      // For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
      shared_ptr<string> scalingPolicy_ {};
      // The information about the server groups.
      // 
      // >  You can use this parameter to obtain the information about the ALB, NLB, and GWLB server groups associated with a scaling group.
      shared_ptr<vector<ScalingGroups::ServerGroups>> serverGroups_ {};
      // The allocation policy of preemptible instances. This parameter indicates the manner in which Auto Scaling selects instance types to create the required number of preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   priority: Auto Scaling adopts the predefined instance type sequence to create the required number of preemptible instances.
      // *   lowestPrice: Auto Scaling selects instance types that have the most economical vCPU pricing to create the required number of preemptible instances.
      // 
      // Default value: priority.
      shared_ptr<string> spotAllocationStrategy_ {};
      // The number of preemptible instances in the scaling group.
      shared_ptr<int32_t> spotCapacity_ {};
      // The number of instance types in the scaling group. Auto Scaling evenly creates preemptible instances of multiple instance types that are provided at the lowest price across the zones of the scaling group. Valid values: 0 to 10.
      shared_ptr<int32_t> spotInstancePools_ {};
      // Indicates whether preemptible instances can be supplemented. If this parameter is set to true, Auto Scaling proactively creates instances to replace the preemptible instances for reclamation when Auto Scaling receives a system notification.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The number of ECS instances that are in the Standby state in the scaling group.
      shared_ptr<int32_t> standbyCapacity_ {};
      // The period of time that is required by the Elastic Compute Service (ECS) instance to enter the Stopped state during the scale-in process. Unit: seconds.
      shared_ptr<int32_t> stopInstanceTimeout_ {};
      // The number of instances that was stopped in Economical Mode in the scaling group.
      shared_ptr<int32_t> stoppedCapacity_ {};
      // The processes that are suspended. If no process is suspended, null is returned. Valid values:
      // 
      // *   ScaleIn: scale-in processes.
      // *   ScaleOut: scale-out processes.
      // *   HealthCheck: health check processes.
      // *   AlarmNotification: event-triggered task processes.
      // *   ScheduledAction: scheduled task processes.
      shared_ptr<vector<string>> suspendedProcesses_ {};
      // Indicates whether Auto Scaling stops executing scaling activities in the scaling group. Valid values:
      // 
      // *   true: Auto Scaling stops executing scaling activities in the scaling group if the scaling activities failed for more than seven consecutive days in the scaling group. In this case, you must modify the scaling group or scaling configuration to resume the scaling activities.
      // *   false: Auto Scaling does not stop executing scaling activities in the scaling group.
      shared_ptr<bool> systemSuspended_ {};
      // The tags of the scaling group.
      shared_ptr<vector<ScalingGroups::Tags>> tags_ {};
      // The total weighted capacity of all ECS instances in the scaling group if Weighted is specified. In other cases, this parameter specifies the total number of ECS instances in the scaling group.
      shared_ptr<int32_t> totalCapacity_ {};
      // The total number of ECS instances in the scaling group.
      shared_ptr<int32_t> totalInstanceCount_ {};
      // The backend vServer groups.
      shared_ptr<vector<ScalingGroups::VServerGroups>> VServerGroups_ {};
      // The vSwitch ID of the scaling group.
      shared_ptr<string> vSwitchId_ {};
      // The IDs of the vSwitches that are associated with the scaling group. If you specify VSwitchIds, VSwitchId is ignored.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The ID of the virtual private cloud (VPC) in which the scaling group resides.
      shared_ptr<string> vpcId_ {};
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
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scaling groups.
    shared_ptr<vector<DescribeScalingGroupsResponseBody::ScalingGroups>> scalingGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
