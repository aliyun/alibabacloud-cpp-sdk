// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODY_HPP_
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
  class DescribeScalingGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingGroup, scalingGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroup, scalingGroup_);
    };
    DescribeScalingGroupDetailResponseBody() = default ;
    DescribeScalingGroupDetailResponseBody(const DescribeScalingGroupDetailResponseBody &) = default ;
    DescribeScalingGroupDetailResponseBody(DescribeScalingGroupDetailResponseBody &&) = default ;
    DescribeScalingGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailResponseBody() = default ;
    DescribeScalingGroupDetailResponseBody& operator=(const DescribeScalingGroupDetailResponseBody &) = default ;
    DescribeScalingGroupDetailResponseBody& operator=(DescribeScalingGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveCapacity, activeCapacity_);
        DARABONBA_PTR_TO_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
        DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
        DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
        DARABONBA_PTR_TO_JSON(AzBalance, azBalance_);
        DARABONBA_PTR_TO_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CurrentHostName, currentHostName_);
        DARABONBA_PTR_TO_JSON(CustomPolicyARN, customPolicyARN_);
        DARABONBA_PTR_TO_JSON(DBInstanceIds, DBInstanceIds_);
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
        DARABONBA_PTR_TO_JSON(SpotInstancePools, spotInstancePools_);
        DARABONBA_PTR_TO_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
        DARABONBA_PTR_TO_JSON(StandbyCapacity, standbyCapacity_);
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
      friend void from_json(const Darabonba::Json& j, ScalingGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveCapacity, activeCapacity_);
        DARABONBA_PTR_FROM_JSON(ActiveScalingConfigurationId, activeScalingConfigurationId_);
        DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
        DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
        DARABONBA_PTR_FROM_JSON(AzBalance, azBalance_);
        DARABONBA_PTR_FROM_JSON(CompensateWithOnDemand, compensateWithOnDemand_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CurrentHostName, currentHostName_);
        DARABONBA_PTR_FROM_JSON(CustomPolicyARN, customPolicyARN_);
        DARABONBA_PTR_FROM_JSON(DBInstanceIds, DBInstanceIds_);
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
        DARABONBA_PTR_FROM_JSON(SpotInstancePools, spotInstancePools_);
        DARABONBA_PTR_FROM_JSON(SpotInstanceRemedy, spotInstanceRemedy_);
        DARABONBA_PTR_FROM_JSON(StandbyCapacity, standbyCapacity_);
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
      ScalingGroup() = default ;
      ScalingGroup(const ScalingGroup &) = default ;
      ScalingGroup(ScalingGroup &&) = default ;
      ScalingGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingGroup() = default ;
      ScalingGroup& operator=(const ScalingGroup &) = default ;
      ScalingGroup& operator=(ScalingGroup &&) = default ;
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
          // The port number of a backend vServer.
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
        // The ID of the Classic Load Balancer (CLB, formerly known as Server Load Balancer or SLB) instance to which the backend vServer group belongs.
        shared_ptr<string> loadBalancerId_ {};
        // The attributes of the backend vServer group.
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
        // *   true: The tags of the scaling group can be propagated to only instances that are newly created.
        // *   false: The tags of the scaling group cannot be propagated to any instances.
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
        // The port number used by an ECS instance as a backend server in the server group.
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
        // The weight of a backend server.
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
        // The instance type. The instance type that is specified by using this parameter overwrites the instance type of the launch template.
        shared_ptr<string> instanceType_ {};
        // The maximum bid price of the instance type that is specified by `LaunchTemplateOverride.InstanceType`.
        // 
        // >  This parameter takes effect only if you specify `LaunchTemplateId`.
        shared_ptr<float> spotPriceLimit_ {};
        // The weight of the instance type. The value of this parameter indicates the capacity of an instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the specified instance type are required to meet the expected capacity requirement.
        shared_ptr<int32_t> weightedCapacity_ {};
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
        // The ID of the Application Load Balancer (ALB) server group.
        shared_ptr<string> albServerGroupId_ {};
        // The port number used by an ECS instance as a backend server in the ALB server group.
        shared_ptr<int32_t> port_ {};
        // The weight of an ECS instance as a backend server in the ALB server group.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->activeCapacity_ == nullptr
        && this->activeScalingConfigurationId_ == nullptr && this->albServerGroups_ == nullptr && this->allocationStrategy_ == nullptr && this->azBalance_ == nullptr && this->compensateWithOnDemand_ == nullptr
        && this->creationTime_ == nullptr && this->currentHostName_ == nullptr && this->customPolicyARN_ == nullptr && this->DBInstanceIds_ == nullptr && this->defaultCooldown_ == nullptr
        && this->desiredCapacity_ == nullptr && this->enableDesiredCapacity_ == nullptr && this->groupDeletionProtection_ == nullptr && this->groupType_ == nullptr && this->healthCheckType_ == nullptr
        && this->healthCheckTypes_ == nullptr && this->initCapacity_ == nullptr && this->isElasticStrengthInAlarm_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateOverrides_ == nullptr
        && this->launchTemplateVersion_ == nullptr && this->lifecycleState_ == nullptr && this->loadBalancerConfigs_ == nullptr && this->loadBalancerIds_ == nullptr && this->maxInstanceLifetime_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->modificationTime_ == nullptr && this->monitorGroupId_ == nullptr && this->multiAZPolicy_ == nullptr
        && this->onDemandBaseCapacity_ == nullptr && this->onDemandPercentageAboveBaseCapacity_ == nullptr && this->pendingCapacity_ == nullptr && this->pendingWaitCapacity_ == nullptr && this->protectedCapacity_ == nullptr
        && this->regionId_ == nullptr && this->removalPolicies_ == nullptr && this->removingCapacity_ == nullptr && this->removingWaitCapacity_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scalingGroupId_ == nullptr && this->scalingGroupName_ == nullptr && this->scalingPolicy_ == nullptr && this->serverGroups_ == nullptr && this->spotAllocationStrategy_ == nullptr
        && this->spotInstancePools_ == nullptr && this->spotInstanceRemedy_ == nullptr && this->standbyCapacity_ == nullptr && this->stoppedCapacity_ == nullptr && this->suspendedProcesses_ == nullptr
        && this->systemSuspended_ == nullptr && this->tags_ == nullptr && this->totalCapacity_ == nullptr && this->totalInstanceCount_ == nullptr && this->VServerGroups_ == nullptr
        && this->vSwitchId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // activeCapacity Field Functions 
      bool hasActiveCapacity() const { return this->activeCapacity_ != nullptr;};
      void deleteActiveCapacity() { this->activeCapacity_ = nullptr;};
      inline int32_t getActiveCapacity() const { DARABONBA_PTR_GET_DEFAULT(activeCapacity_, 0) };
      inline ScalingGroup& setActiveCapacity(int32_t activeCapacity) { DARABONBA_PTR_SET_VALUE(activeCapacity_, activeCapacity) };


      // activeScalingConfigurationId Field Functions 
      bool hasActiveScalingConfigurationId() const { return this->activeScalingConfigurationId_ != nullptr;};
      void deleteActiveScalingConfigurationId() { this->activeScalingConfigurationId_ = nullptr;};
      inline string getActiveScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(activeScalingConfigurationId_, "") };
      inline ScalingGroup& setActiveScalingConfigurationId(string activeScalingConfigurationId) { DARABONBA_PTR_SET_VALUE(activeScalingConfigurationId_, activeScalingConfigurationId) };


      // albServerGroups Field Functions 
      bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
      void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
      inline const vector<ScalingGroup::AlbServerGroups> & getAlbServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<ScalingGroup::AlbServerGroups>) };
      inline vector<ScalingGroup::AlbServerGroups> getAlbServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<ScalingGroup::AlbServerGroups>) };
      inline ScalingGroup& setAlbServerGroups(const vector<ScalingGroup::AlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
      inline ScalingGroup& setAlbServerGroups(vector<ScalingGroup::AlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


      // allocationStrategy Field Functions 
      bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
      void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
      inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
      inline ScalingGroup& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


      // azBalance Field Functions 
      bool hasAzBalance() const { return this->azBalance_ != nullptr;};
      void deleteAzBalance() { this->azBalance_ = nullptr;};
      inline bool getAzBalance() const { DARABONBA_PTR_GET_DEFAULT(azBalance_, false) };
      inline ScalingGroup& setAzBalance(bool azBalance) { DARABONBA_PTR_SET_VALUE(azBalance_, azBalance) };


      // compensateWithOnDemand Field Functions 
      bool hasCompensateWithOnDemand() const { return this->compensateWithOnDemand_ != nullptr;};
      void deleteCompensateWithOnDemand() { this->compensateWithOnDemand_ = nullptr;};
      inline bool getCompensateWithOnDemand() const { DARABONBA_PTR_GET_DEFAULT(compensateWithOnDemand_, false) };
      inline ScalingGroup& setCompensateWithOnDemand(bool compensateWithOnDemand) { DARABONBA_PTR_SET_VALUE(compensateWithOnDemand_, compensateWithOnDemand) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ScalingGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // currentHostName Field Functions 
      bool hasCurrentHostName() const { return this->currentHostName_ != nullptr;};
      void deleteCurrentHostName() { this->currentHostName_ = nullptr;};
      inline string getCurrentHostName() const { DARABONBA_PTR_GET_DEFAULT(currentHostName_, "") };
      inline ScalingGroup& setCurrentHostName(string currentHostName) { DARABONBA_PTR_SET_VALUE(currentHostName_, currentHostName) };


      // customPolicyARN Field Functions 
      bool hasCustomPolicyARN() const { return this->customPolicyARN_ != nullptr;};
      void deleteCustomPolicyARN() { this->customPolicyARN_ = nullptr;};
      inline string getCustomPolicyARN() const { DARABONBA_PTR_GET_DEFAULT(customPolicyARN_, "") };
      inline ScalingGroup& setCustomPolicyARN(string customPolicyARN) { DARABONBA_PTR_SET_VALUE(customPolicyARN_, customPolicyARN) };


      // DBInstanceIds Field Functions 
      bool hasDBInstanceIds() const { return this->DBInstanceIds_ != nullptr;};
      void deleteDBInstanceIds() { this->DBInstanceIds_ = nullptr;};
      inline const vector<string> & getDBInstanceIds() const { DARABONBA_PTR_GET_CONST(DBInstanceIds_, vector<string>) };
      inline vector<string> getDBInstanceIds() { DARABONBA_PTR_GET(DBInstanceIds_, vector<string>) };
      inline ScalingGroup& setDBInstanceIds(const vector<string> & DBInstanceIds) { DARABONBA_PTR_SET_VALUE(DBInstanceIds_, DBInstanceIds) };
      inline ScalingGroup& setDBInstanceIds(vector<string> && DBInstanceIds) { DARABONBA_PTR_SET_RVALUE(DBInstanceIds_, DBInstanceIds) };


      // defaultCooldown Field Functions 
      bool hasDefaultCooldown() const { return this->defaultCooldown_ != nullptr;};
      void deleteDefaultCooldown() { this->defaultCooldown_ = nullptr;};
      inline int32_t getDefaultCooldown() const { DARABONBA_PTR_GET_DEFAULT(defaultCooldown_, 0) };
      inline ScalingGroup& setDefaultCooldown(int32_t defaultCooldown) { DARABONBA_PTR_SET_VALUE(defaultCooldown_, defaultCooldown) };


      // desiredCapacity Field Functions 
      bool hasDesiredCapacity() const { return this->desiredCapacity_ != nullptr;};
      void deleteDesiredCapacity() { this->desiredCapacity_ = nullptr;};
      inline int32_t getDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(desiredCapacity_, 0) };
      inline ScalingGroup& setDesiredCapacity(int32_t desiredCapacity) { DARABONBA_PTR_SET_VALUE(desiredCapacity_, desiredCapacity) };


      // enableDesiredCapacity Field Functions 
      bool hasEnableDesiredCapacity() const { return this->enableDesiredCapacity_ != nullptr;};
      void deleteEnableDesiredCapacity() { this->enableDesiredCapacity_ = nullptr;};
      inline bool getEnableDesiredCapacity() const { DARABONBA_PTR_GET_DEFAULT(enableDesiredCapacity_, false) };
      inline ScalingGroup& setEnableDesiredCapacity(bool enableDesiredCapacity) { DARABONBA_PTR_SET_VALUE(enableDesiredCapacity_, enableDesiredCapacity) };


      // groupDeletionProtection Field Functions 
      bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
      void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
      inline bool getGroupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
      inline ScalingGroup& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline ScalingGroup& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // healthCheckType Field Functions 
      bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
      void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
      inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
      inline ScalingGroup& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


      // healthCheckTypes Field Functions 
      bool hasHealthCheckTypes() const { return this->healthCheckTypes_ != nullptr;};
      void deleteHealthCheckTypes() { this->healthCheckTypes_ = nullptr;};
      inline const vector<string> & getHealthCheckTypes() const { DARABONBA_PTR_GET_CONST(healthCheckTypes_, vector<string>) };
      inline vector<string> getHealthCheckTypes() { DARABONBA_PTR_GET(healthCheckTypes_, vector<string>) };
      inline ScalingGroup& setHealthCheckTypes(const vector<string> & healthCheckTypes) { DARABONBA_PTR_SET_VALUE(healthCheckTypes_, healthCheckTypes) };
      inline ScalingGroup& setHealthCheckTypes(vector<string> && healthCheckTypes) { DARABONBA_PTR_SET_RVALUE(healthCheckTypes_, healthCheckTypes) };


      // initCapacity Field Functions 
      bool hasInitCapacity() const { return this->initCapacity_ != nullptr;};
      void deleteInitCapacity() { this->initCapacity_ = nullptr;};
      inline int32_t getInitCapacity() const { DARABONBA_PTR_GET_DEFAULT(initCapacity_, 0) };
      inline ScalingGroup& setInitCapacity(int32_t initCapacity) { DARABONBA_PTR_SET_VALUE(initCapacity_, initCapacity) };


      // isElasticStrengthInAlarm Field Functions 
      bool hasIsElasticStrengthInAlarm() const { return this->isElasticStrengthInAlarm_ != nullptr;};
      void deleteIsElasticStrengthInAlarm() { this->isElasticStrengthInAlarm_ = nullptr;};
      inline bool getIsElasticStrengthInAlarm() const { DARABONBA_PTR_GET_DEFAULT(isElasticStrengthInAlarm_, false) };
      inline ScalingGroup& setIsElasticStrengthInAlarm(bool isElasticStrengthInAlarm) { DARABONBA_PTR_SET_VALUE(isElasticStrengthInAlarm_, isElasticStrengthInAlarm) };


      // launchTemplateId Field Functions 
      bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
      void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
      inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
      inline ScalingGroup& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


      // launchTemplateOverrides Field Functions 
      bool hasLaunchTemplateOverrides() const { return this->launchTemplateOverrides_ != nullptr;};
      void deleteLaunchTemplateOverrides() { this->launchTemplateOverrides_ = nullptr;};
      inline const vector<ScalingGroup::LaunchTemplateOverrides> & getLaunchTemplateOverrides() const { DARABONBA_PTR_GET_CONST(launchTemplateOverrides_, vector<ScalingGroup::LaunchTemplateOverrides>) };
      inline vector<ScalingGroup::LaunchTemplateOverrides> getLaunchTemplateOverrides() { DARABONBA_PTR_GET(launchTemplateOverrides_, vector<ScalingGroup::LaunchTemplateOverrides>) };
      inline ScalingGroup& setLaunchTemplateOverrides(const vector<ScalingGroup::LaunchTemplateOverrides> & launchTemplateOverrides) { DARABONBA_PTR_SET_VALUE(launchTemplateOverrides_, launchTemplateOverrides) };
      inline ScalingGroup& setLaunchTemplateOverrides(vector<ScalingGroup::LaunchTemplateOverrides> && launchTemplateOverrides) { DARABONBA_PTR_SET_RVALUE(launchTemplateOverrides_, launchTemplateOverrides) };


      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
      inline ScalingGroup& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline ScalingGroup& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // loadBalancerConfigs Field Functions 
      bool hasLoadBalancerConfigs() const { return this->loadBalancerConfigs_ != nullptr;};
      void deleteLoadBalancerConfigs() { this->loadBalancerConfigs_ = nullptr;};
      inline const vector<ScalingGroup::LoadBalancerConfigs> & getLoadBalancerConfigs() const { DARABONBA_PTR_GET_CONST(loadBalancerConfigs_, vector<ScalingGroup::LoadBalancerConfigs>) };
      inline vector<ScalingGroup::LoadBalancerConfigs> getLoadBalancerConfigs() { DARABONBA_PTR_GET(loadBalancerConfigs_, vector<ScalingGroup::LoadBalancerConfigs>) };
      inline ScalingGroup& setLoadBalancerConfigs(const vector<ScalingGroup::LoadBalancerConfigs> & loadBalancerConfigs) { DARABONBA_PTR_SET_VALUE(loadBalancerConfigs_, loadBalancerConfigs) };
      inline ScalingGroup& setLoadBalancerConfigs(vector<ScalingGroup::LoadBalancerConfigs> && loadBalancerConfigs) { DARABONBA_PTR_SET_RVALUE(loadBalancerConfigs_, loadBalancerConfigs) };


      // loadBalancerIds Field Functions 
      bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
      void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
      inline const vector<string> & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
      inline vector<string> getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
      inline ScalingGroup& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
      inline ScalingGroup& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


      // maxInstanceLifetime Field Functions 
      bool hasMaxInstanceLifetime() const { return this->maxInstanceLifetime_ != nullptr;};
      void deleteMaxInstanceLifetime() { this->maxInstanceLifetime_ = nullptr;};
      inline int32_t getMaxInstanceLifetime() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceLifetime_, 0) };
      inline ScalingGroup& setMaxInstanceLifetime(int32_t maxInstanceLifetime) { DARABONBA_PTR_SET_VALUE(maxInstanceLifetime_, maxInstanceLifetime) };


      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
      inline ScalingGroup& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // minSize Field Functions 
      bool hasMinSize() const { return this->minSize_ != nullptr;};
      void deleteMinSize() { this->minSize_ = nullptr;};
      inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
      inline ScalingGroup& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline ScalingGroup& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // monitorGroupId Field Functions 
      bool hasMonitorGroupId() const { return this->monitorGroupId_ != nullptr;};
      void deleteMonitorGroupId() { this->monitorGroupId_ = nullptr;};
      inline string getMonitorGroupId() const { DARABONBA_PTR_GET_DEFAULT(monitorGroupId_, "") };
      inline ScalingGroup& setMonitorGroupId(string monitorGroupId) { DARABONBA_PTR_SET_VALUE(monitorGroupId_, monitorGroupId) };


      // multiAZPolicy Field Functions 
      bool hasMultiAZPolicy() const { return this->multiAZPolicy_ != nullptr;};
      void deleteMultiAZPolicy() { this->multiAZPolicy_ = nullptr;};
      inline string getMultiAZPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAZPolicy_, "") };
      inline ScalingGroup& setMultiAZPolicy(string multiAZPolicy) { DARABONBA_PTR_SET_VALUE(multiAZPolicy_, multiAZPolicy) };


      // onDemandBaseCapacity Field Functions 
      bool hasOnDemandBaseCapacity() const { return this->onDemandBaseCapacity_ != nullptr;};
      void deleteOnDemandBaseCapacity() { this->onDemandBaseCapacity_ = nullptr;};
      inline int32_t getOnDemandBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandBaseCapacity_, 0) };
      inline ScalingGroup& setOnDemandBaseCapacity(int32_t onDemandBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandBaseCapacity_, onDemandBaseCapacity) };


      // onDemandPercentageAboveBaseCapacity Field Functions 
      bool hasOnDemandPercentageAboveBaseCapacity() const { return this->onDemandPercentageAboveBaseCapacity_ != nullptr;};
      void deleteOnDemandPercentageAboveBaseCapacity() { this->onDemandPercentageAboveBaseCapacity_ = nullptr;};
      inline int32_t getOnDemandPercentageAboveBaseCapacity() const { DARABONBA_PTR_GET_DEFAULT(onDemandPercentageAboveBaseCapacity_, 0) };
      inline ScalingGroup& setOnDemandPercentageAboveBaseCapacity(int32_t onDemandPercentageAboveBaseCapacity) { DARABONBA_PTR_SET_VALUE(onDemandPercentageAboveBaseCapacity_, onDemandPercentageAboveBaseCapacity) };


      // pendingCapacity Field Functions 
      bool hasPendingCapacity() const { return this->pendingCapacity_ != nullptr;};
      void deletePendingCapacity() { this->pendingCapacity_ = nullptr;};
      inline int32_t getPendingCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingCapacity_, 0) };
      inline ScalingGroup& setPendingCapacity(int32_t pendingCapacity) { DARABONBA_PTR_SET_VALUE(pendingCapacity_, pendingCapacity) };


      // pendingWaitCapacity Field Functions 
      bool hasPendingWaitCapacity() const { return this->pendingWaitCapacity_ != nullptr;};
      void deletePendingWaitCapacity() { this->pendingWaitCapacity_ = nullptr;};
      inline int32_t getPendingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(pendingWaitCapacity_, 0) };
      inline ScalingGroup& setPendingWaitCapacity(int32_t pendingWaitCapacity) { DARABONBA_PTR_SET_VALUE(pendingWaitCapacity_, pendingWaitCapacity) };


      // protectedCapacity Field Functions 
      bool hasProtectedCapacity() const { return this->protectedCapacity_ != nullptr;};
      void deleteProtectedCapacity() { this->protectedCapacity_ = nullptr;};
      inline int32_t getProtectedCapacity() const { DARABONBA_PTR_GET_DEFAULT(protectedCapacity_, 0) };
      inline ScalingGroup& setProtectedCapacity(int32_t protectedCapacity) { DARABONBA_PTR_SET_VALUE(protectedCapacity_, protectedCapacity) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ScalingGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // removalPolicies Field Functions 
      bool hasRemovalPolicies() const { return this->removalPolicies_ != nullptr;};
      void deleteRemovalPolicies() { this->removalPolicies_ = nullptr;};
      inline const vector<string> & getRemovalPolicies() const { DARABONBA_PTR_GET_CONST(removalPolicies_, vector<string>) };
      inline vector<string> getRemovalPolicies() { DARABONBA_PTR_GET(removalPolicies_, vector<string>) };
      inline ScalingGroup& setRemovalPolicies(const vector<string> & removalPolicies) { DARABONBA_PTR_SET_VALUE(removalPolicies_, removalPolicies) };
      inline ScalingGroup& setRemovalPolicies(vector<string> && removalPolicies) { DARABONBA_PTR_SET_RVALUE(removalPolicies_, removalPolicies) };


      // removingCapacity Field Functions 
      bool hasRemovingCapacity() const { return this->removingCapacity_ != nullptr;};
      void deleteRemovingCapacity() { this->removingCapacity_ = nullptr;};
      inline int32_t getRemovingCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingCapacity_, 0) };
      inline ScalingGroup& setRemovingCapacity(int32_t removingCapacity) { DARABONBA_PTR_SET_VALUE(removingCapacity_, removingCapacity) };


      // removingWaitCapacity Field Functions 
      bool hasRemovingWaitCapacity() const { return this->removingWaitCapacity_ != nullptr;};
      void deleteRemovingWaitCapacity() { this->removingWaitCapacity_ = nullptr;};
      inline int32_t getRemovingWaitCapacity() const { DARABONBA_PTR_GET_DEFAULT(removingWaitCapacity_, 0) };
      inline ScalingGroup& setRemovingWaitCapacity(int32_t removingWaitCapacity) { DARABONBA_PTR_SET_VALUE(removingWaitCapacity_, removingWaitCapacity) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ScalingGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingGroup& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingGroupName Field Functions 
      bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
      void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
      inline string getScalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
      inline ScalingGroup& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


      // scalingPolicy Field Functions 
      bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
      void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
      inline string getScalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
      inline ScalingGroup& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


      // serverGroups Field Functions 
      bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
      void deleteServerGroups() { this->serverGroups_ = nullptr;};
      inline const vector<ScalingGroup::ServerGroups> & getServerGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<ScalingGroup::ServerGroups>) };
      inline vector<ScalingGroup::ServerGroups> getServerGroups() { DARABONBA_PTR_GET(serverGroups_, vector<ScalingGroup::ServerGroups>) };
      inline ScalingGroup& setServerGroups(const vector<ScalingGroup::ServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
      inline ScalingGroup& setServerGroups(vector<ScalingGroup::ServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


      // spotAllocationStrategy Field Functions 
      bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
      void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
      inline string getSpotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
      inline ScalingGroup& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


      // spotInstancePools Field Functions 
      bool hasSpotInstancePools() const { return this->spotInstancePools_ != nullptr;};
      void deleteSpotInstancePools() { this->spotInstancePools_ = nullptr;};
      inline int32_t getSpotInstancePools() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePools_, 0) };
      inline ScalingGroup& setSpotInstancePools(int32_t spotInstancePools) { DARABONBA_PTR_SET_VALUE(spotInstancePools_, spotInstancePools) };


      // spotInstanceRemedy Field Functions 
      bool hasSpotInstanceRemedy() const { return this->spotInstanceRemedy_ != nullptr;};
      void deleteSpotInstanceRemedy() { this->spotInstanceRemedy_ = nullptr;};
      inline bool getSpotInstanceRemedy() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceRemedy_, false) };
      inline ScalingGroup& setSpotInstanceRemedy(bool spotInstanceRemedy) { DARABONBA_PTR_SET_VALUE(spotInstanceRemedy_, spotInstanceRemedy) };


      // standbyCapacity Field Functions 
      bool hasStandbyCapacity() const { return this->standbyCapacity_ != nullptr;};
      void deleteStandbyCapacity() { this->standbyCapacity_ = nullptr;};
      inline int32_t getStandbyCapacity() const { DARABONBA_PTR_GET_DEFAULT(standbyCapacity_, 0) };
      inline ScalingGroup& setStandbyCapacity(int32_t standbyCapacity) { DARABONBA_PTR_SET_VALUE(standbyCapacity_, standbyCapacity) };


      // stoppedCapacity Field Functions 
      bool hasStoppedCapacity() const { return this->stoppedCapacity_ != nullptr;};
      void deleteStoppedCapacity() { this->stoppedCapacity_ = nullptr;};
      inline int32_t getStoppedCapacity() const { DARABONBA_PTR_GET_DEFAULT(stoppedCapacity_, 0) };
      inline ScalingGroup& setStoppedCapacity(int32_t stoppedCapacity) { DARABONBA_PTR_SET_VALUE(stoppedCapacity_, stoppedCapacity) };


      // suspendedProcesses Field Functions 
      bool hasSuspendedProcesses() const { return this->suspendedProcesses_ != nullptr;};
      void deleteSuspendedProcesses() { this->suspendedProcesses_ = nullptr;};
      inline const vector<string> & getSuspendedProcesses() const { DARABONBA_PTR_GET_CONST(suspendedProcesses_, vector<string>) };
      inline vector<string> getSuspendedProcesses() { DARABONBA_PTR_GET(suspendedProcesses_, vector<string>) };
      inline ScalingGroup& setSuspendedProcesses(const vector<string> & suspendedProcesses) { DARABONBA_PTR_SET_VALUE(suspendedProcesses_, suspendedProcesses) };
      inline ScalingGroup& setSuspendedProcesses(vector<string> && suspendedProcesses) { DARABONBA_PTR_SET_RVALUE(suspendedProcesses_, suspendedProcesses) };


      // systemSuspended Field Functions 
      bool hasSystemSuspended() const { return this->systemSuspended_ != nullptr;};
      void deleteSystemSuspended() { this->systemSuspended_ = nullptr;};
      inline bool getSystemSuspended() const { DARABONBA_PTR_GET_DEFAULT(systemSuspended_, false) };
      inline ScalingGroup& setSystemSuspended(bool systemSuspended) { DARABONBA_PTR_SET_VALUE(systemSuspended_, systemSuspended) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ScalingGroup::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScalingGroup::Tags>) };
      inline vector<ScalingGroup::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ScalingGroup::Tags>) };
      inline ScalingGroup& setTags(const vector<ScalingGroup::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingGroup& setTags(vector<ScalingGroup::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // totalCapacity Field Functions 
      bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
      void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
      inline int32_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0) };
      inline ScalingGroup& setTotalCapacity(int32_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


      // totalInstanceCount Field Functions 
      bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
      void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
      inline int32_t getTotalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0) };
      inline ScalingGroup& setTotalInstanceCount(int32_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


      // VServerGroups Field Functions 
      bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
      void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
      inline const vector<ScalingGroup::VServerGroups> & getVServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<ScalingGroup::VServerGroups>) };
      inline vector<ScalingGroup::VServerGroups> getVServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<ScalingGroup::VServerGroups>) };
      inline ScalingGroup& setVServerGroups(const vector<ScalingGroup::VServerGroups> & vServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, vServerGroups) };
      inline ScalingGroup& setVServerGroups(vector<ScalingGroup::VServerGroups> && vServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, vServerGroups) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ScalingGroup& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline ScalingGroup& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline ScalingGroup& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ScalingGroup& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The number of ECS instances that are in the In Service state in the scaling group.
      shared_ptr<int32_t> activeCapacity_ {};
      // The ID of the active scaling configuration in the scaling group.
      shared_ptr<string> activeScalingConfigurationId_ {};
      // The information about the Application Load Balancer (ALB) server groups.
      shared_ptr<vector<ScalingGroup::AlbServerGroups>> albServerGroups_ {};
      // The allocation policy of instances. Auto Scaling selects instance types based on the allocation policy to create the required number of instances. You can apply the policy to pay-as-you-go instances and preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   priority: Auto Scaling selects instance types based on the specified order to create the required number of instances.
      // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of instances.
      shared_ptr<string> allocationStrategy_ {};
      // Indicates whether instances in the scaling group are evenly distributed across zones. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> azBalance_ {};
      // Indicates whether pay-as-you-go ECS instances can be automatically created to reach the required number of ECS instances when preemptible ECS instances cannot be created due to high prices or insufficient inventory of resources. This parameter takes effect when you set `MultiAZPolicy` to `COST_OPTIMIZED`. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> compensateWithOnDemand_ {};
      // The time when the scaling group was created.
      shared_ptr<string> creationTime_ {};
      // >  This parameter is not available for use.
      shared_ptr<string> currentHostName_ {};
      // The Alibaba Cloud Resource Name (ARN) of the function that is specified in the custom scale-in policy. This parameter takes effect only if you set the first value of RemovalPolicies to CustomPolicy.
      shared_ptr<string> customPolicyARN_ {};
      // The IDs of the ApsaraDB RDS instances that are associated with the scaling group.
      shared_ptr<vector<string>> DBInstanceIds_ {};
      // The cooldown period of the scaling group. Unit: seconds.
      shared_ptr<int32_t> defaultCooldown_ {};
      // The expected number of ECS instances in the scaling group. Auto Scaling automatically maintains the expected number of ECS instances.
      shared_ptr<int32_t> desiredCapacity_ {};
      // Indicates whether the Expected Number of Instances feature is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableDesiredCapacity_ {};
      // Indicates whether Deletion Protection is enabled for the scaling group. Valid values:
      // 
      // *   true: Deletion Protection is enabled for the scaling group. This way, the scaling group cannot be deleted.
      // *   false: Deletion Protection is disabled for the scaling group.
      shared_ptr<bool> groupDeletionProtection_ {};
      // The type of the instances that are managed by the scaling group. Valid values:
      // 
      // *   ECS: ECS instances
      // *   ECI: elastic container instances
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
      // The number of instances that are in the Initialized state and not added to the scaling group.
      shared_ptr<int32_t> initCapacity_ {};
      // >  This parameter is not available for use.
      shared_ptr<bool> isElasticStrengthInAlarm_ {};
      // The ID of the launch template that is used by the scaling group.
      shared_ptr<string> launchTemplateId_ {};
      // The information about the instance types that are extended in the launch template.
      shared_ptr<vector<ScalingGroup::LaunchTemplateOverrides>> launchTemplateOverrides_ {};
      // The version number of the launch template.
      shared_ptr<string> launchTemplateVersion_ {};
      // The status of the scaling group. Valid values:
      // 
      // *   Active: The scaling group is in the Enabled state. Enabled scaling groups can receive requests to execute scaling rules and trigger scaling activities.
      // *   Inactive: The scaling group is in the Disabled state. Disabled scaling groups cannot receive requests to execute scaling rules.
      // *   Deleting: The scaling group is being deleted. Scaling groups that are being deleted cannot receive requests to execute scaling rules, and the parameter settings of the scaling groups cannot be modified.
      shared_ptr<string> lifecycleState_ {};
      // The CLB configurations.
      shared_ptr<vector<ScalingGroup::LoadBalancerConfigs>> loadBalancerConfigs_ {};
      // The IDs of the SLB instances that are associated with the scaling group.
      shared_ptr<vector<string>> loadBalancerIds_ {};
      // The maximum life span of an instance in the scaling group. Unit: seconds.
      // 
      // Valid values: 0 or from 86400 to `Integer.maxValue`. A value of 0 for MaxInstanceLifetime indicates that any previously set limit has been removed, which effectively disables the maximum instance lifetime constraint.
      // 
      // Default value: null.
      // 
      // >  This parameter is not supported by scaling groups of the Elastic Container Instance type and scaling groups whose ScalingPolicy is set to Recycle.
      shared_ptr<int32_t> maxInstanceLifetime_ {};
      // The maximum number of ECS instances that can be contained in the scaling group.
      shared_ptr<int32_t> maxSize_ {};
      // The minimum number of ECS instances that must be contained in the scaling group.
      shared_ptr<int32_t> minSize_ {};
      // The time when the scaling group was modified.
      shared_ptr<string> modificationTime_ {};
      // The ID of the CloudMonitor application group that is associated with the scaling group.
      shared_ptr<string> monitorGroupId_ {};
      // The scaling policy of the ECS instances in the multi-zone scaling group. Valid values:
      // 
      // *   PRIORITY: ECS instances are created based on the value of VSwitchIds. If Auto Scaling cannot create ECS instances in the zone where the vSwitch of the highest priority resides, Auto Scaling creates ECS instances in the zone where the vSwitch of the next highest priority resides.
      // 
      // *   COST_OPTIMIZED: ECS instances are created based on the unit prices of their vCPUs. Auto Scaling preferentially creates ECS instances that use the lowest-priced vCPUs. If preemptible instance types are specified in the scaling configuration, Auto Scaling preferentially creates preemptible instances. You can also specify CompensateWithOnDemand to allow Auto Scaling to create pay-as-you-go instances in the case that preemptible instances cannot be created due to insufficient inventory of preemptible instance types.
      // 
      //     **
      // 
      //     **Note** The COST_OPTIMIZED setting takes effect only if you specified multiple instance types or preemptible instance types in your scaling configuration.
      // 
      // *   BALANCE: ECS instances are evenly distributed across the zones of the scaling group. If ECS instance are unevenly distributed across the specified zones due to insufficient inventory of instance types, you can call the RebalanceInstance operation to rebalance the distribution of the ECS instances.
      shared_ptr<string> multiAZPolicy_ {};
      // The minimum number of pay-as-you-go instances that must be contained in the scaling group. Valid values: 0 to 1000. If the number of pay-as-you-go instances in the scaling group is less than the value of this parameter, Auto Scaling preferentially creates pay-as-you-go instances.
      shared_ptr<int32_t> onDemandBaseCapacity_ {};
      // The percentage of pay-as-you-go instances among the excess instances when the minimum number of pay-as-you-go instances reaches the requirement. Valid values: 0 to 100.
      shared_ptr<int32_t> onDemandPercentageAboveBaseCapacity_ {};
      // The number of ECS instances that are being added to the scaling group and configured.
      shared_ptr<int32_t> pendingCapacity_ {};
      // The number of ECS instances that are in the Pending Add state in the scaling group.
      shared_ptr<int32_t> pendingWaitCapacity_ {};
      // The number of ECS instances that are in the Protected state in the scaling group.
      shared_ptr<int32_t> protectedCapacity_ {};
      // The region ID of the scaling group.
      shared_ptr<string> regionId_ {};
      // The instance removal policies.
      shared_ptr<vector<string>> removalPolicies_ {};
      // The number of ECS instances that are being removed from the scaling group.
      shared_ptr<int32_t> removingCapacity_ {};
      // The number of ECS instances that are in the Pending Remove state in the scaling group.
      shared_ptr<int32_t> removingWaitCapacity_ {};
      // The ID of the resource group to which the scaling group belongs.
      // 
      // >  If you specify this parameter, new scaling groups are added to the specified resource group. If you do not specify this parameter, new scaling groups are added to the default resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The name of the scaling group. The name of each scaling group must be unique in a region.
      // 
      // The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or digit.
      shared_ptr<string> scalingGroupName_ {};
      // The reclaim mode of the scaling group. Valid values:
      // 
      // *   recycle: economical mode
      // *   release: release mode
      // *   forcerelease: forced release mode
      // *   forcerecycle: forced recycle mode
      // 
      // For more information, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
      shared_ptr<string> scalingPolicy_ {};
      // The information about the server groups.
      // 
      // >  You can use this parameter to obtain the information about the ALB, NLB, and GWLB server groups associated with a scaling group.
      shared_ptr<vector<ScalingGroup::ServerGroups>> serverGroups_ {};
      // The allocation policy of preemptible instances. Auto Scaling selects instance types based on the allocation policy to create the required number of preemptible instances. You can apply the policy to pay-as-you-go instances and preemptible instances. This parameter takes effect only if you set `MultiAZPolicy` to `COMPOSABLE`. Valid values:
      // 
      // *   priority: Auto Scaling selects instance types based on the specified order to create the required number of preemptible instances.
      // *   lowestPrice: Auto Scaling selects instance types that have the lowest unit price of vCPUs to create the required number of preemptible instances.
      shared_ptr<string> spotAllocationStrategy_ {};
      // The number of instance types that are specified. Preemptible instances of multiple lowest-priced instance types are evenly distributed across the zones of the scaling group. Valid values: 0 to 10.
      shared_ptr<int32_t> spotInstancePools_ {};
      // Indicates whether preemptible instances can be supplemented. If this parameter is set to true, Auto Scaling creates an instance to replace a preemptible instance when Auto Scaling receives the system message which indicates that the preemptible instance is to be reclaimed.
      shared_ptr<bool> spotInstanceRemedy_ {};
      // The number of ECS instances that are in the Standby state in the scaling group.
      shared_ptr<int32_t> standbyCapacity_ {};
      // The number of instances that are stopped in Economical Mode in the scaling group.
      shared_ptr<int32_t> stoppedCapacity_ {};
      // The processes that are suspended. If no process is suspended, null is returned. Valid values:
      // 
      // *   ScaleIn: scale-in
      // *   ScaleOut: scale-out
      // *   HealthCheck: health check
      // *   AlarmNotification: event-triggered task
      // *   ScheduledAction: scheduled task
      shared_ptr<vector<string>> suspendedProcesses_ {};
      // Indicates whether Auto Scaling stops executing scaling activities in the scaling group. Valid values:
      // 
      // *   true: Auto Scaling stops executing scaling activities in the scaling group if the scaling activities failed for more than seven consecutive days in the scaling group. You must modify the scaling group or scaling configuration to resume the execution of the scaling activities.
      // *   false: Auto Scaling does not stop executing scaling activities in the scaling group.
      shared_ptr<bool> systemSuspended_ {};
      // The tags of the scaling group.
      shared_ptr<vector<ScalingGroup::Tags>> tags_ {};
      // The total weighted capacity of all ECS instances in the scaling group if Weighted is specified. In other cases, the value of this parameter indicates the total number of ECS instances in the scaling group.
      shared_ptr<int32_t> totalCapacity_ {};
      // The total number of Elastic Compute Service (ECS) instances in the scaling group.
      shared_ptr<int32_t> totalInstanceCount_ {};
      // The backend vServer groups.
      shared_ptr<vector<ScalingGroup::VServerGroups>> VServerGroups_ {};
      // The vSwitch ID of the scaling group.
      shared_ptr<string> vSwitchId_ {};
      // The IDs of the vSwitches that are associated with the scaling group. If you specify VSwitchIds, VSwitchId is ignored.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The virtual private cloud (VPC) ID of the scaling group.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->output_ == nullptr
        && this->requestId_ == nullptr && this->scalingGroup_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeScalingGroupDetailResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingGroup Field Functions 
    bool hasScalingGroup() const { return this->scalingGroup_ != nullptr;};
    void deleteScalingGroup() { this->scalingGroup_ = nullptr;};
    inline const DescribeScalingGroupDetailResponseBody::ScalingGroup & getScalingGroup() const { DARABONBA_PTR_GET_CONST(scalingGroup_, DescribeScalingGroupDetailResponseBody::ScalingGroup) };
    inline DescribeScalingGroupDetailResponseBody::ScalingGroup getScalingGroup() { DARABONBA_PTR_GET(scalingGroup_, DescribeScalingGroupDetailResponseBody::ScalingGroup) };
    inline DescribeScalingGroupDetailResponseBody& setScalingGroup(const DescribeScalingGroupDetailResponseBody::ScalingGroup & scalingGroup) { DARABONBA_PTR_SET_VALUE(scalingGroup_, scalingGroup) };
    inline DescribeScalingGroupDetailResponseBody& setScalingGroup(DescribeScalingGroupDetailResponseBody::ScalingGroup && scalingGroup) { DARABONBA_PTR_SET_RVALUE(scalingGroup_, scalingGroup) };


  protected:
    // The output details of the scaling group of the Elastic Container Instance type. Currently, the output is displayed in a Kubernetes Deployment YAML file.
    shared_ptr<string> output_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scaling group.
    shared_ptr<DescribeScalingGroupDetailResponseBody::ScalingGroup> scalingGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
