// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODY_HPP_
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
  class DescribeScalingInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingInstances, scalingInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalSpotCount, totalSpotCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingInstances, scalingInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalSpotCount, totalSpotCount_);
    };
    DescribeScalingInstancesResponseBody() = default ;
    DescribeScalingInstancesResponseBody(const DescribeScalingInstancesResponseBody &) = default ;
    DescribeScalingInstancesResponseBody(DescribeScalingInstancesResponseBody &&) = default ;
    DescribeScalingInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingInstancesResponseBody() = default ;
    DescribeScalingInstancesResponseBody& operator=(const DescribeScalingInstancesResponseBody &) = default ;
    DescribeScalingInstancesResponseBody& operator=(DescribeScalingInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CreationType, creationType_);
        DARABONBA_PTR_TO_JSON(Entrusted, entrusted_);
        DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(ReplaceStatus, replaceStatus_);
        DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(ScalingInstanceId, scalingInstanceId_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(WarmupState, warmupState_);
        DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
        DARABONBA_PTR_FROM_JSON(Entrusted, entrusted_);
        DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(ReplaceStatus, replaceStatus_);
        DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(ScalingInstanceId, scalingInstanceId_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(WarmupState, warmupState_);
        DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ScalingInstances() = default ;
      ScalingInstances(const ScalingInstances &) = default ;
      ScalingInstances(ScalingInstances &&) = default ;
      ScalingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingInstances() = default ;
      ScalingInstances& operator=(const ScalingInstances &) = default ;
      ScalingInstances& operator=(ScalingInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->creationTime_ == nullptr && this->creationType_ == nullptr && this->entrusted_ == nullptr && this->healthStatus_ == nullptr && this->instanceId_ == nullptr
        && this->launchTemplateId_ == nullptr && this->launchTemplateVersion_ == nullptr && this->lifecycleState_ == nullptr && this->loadBalancerWeight_ == nullptr && this->privateIpAddress_ == nullptr
        && this->replaceStatus_ == nullptr && this->scalingActivityId_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingInstanceId_ == nullptr
        && this->spotStrategy_ == nullptr && this->warmupState_ == nullptr && this->weightedCapacity_ == nullptr && this->zoneId_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline ScalingInstances& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ScalingInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // creationType Field Functions 
      bool hasCreationType() const { return this->creationType_ != nullptr;};
      void deleteCreationType() { this->creationType_ = nullptr;};
      inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
      inline ScalingInstances& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


      // entrusted Field Functions 
      bool hasEntrusted() const { return this->entrusted_ != nullptr;};
      void deleteEntrusted() { this->entrusted_ = nullptr;};
      inline bool getEntrusted() const { DARABONBA_PTR_GET_DEFAULT(entrusted_, false) };
      inline ScalingInstances& setEntrusted(bool entrusted) { DARABONBA_PTR_SET_VALUE(entrusted_, entrusted) };


      // healthStatus Field Functions 
      bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
      void deleteHealthStatus() { this->healthStatus_ = nullptr;};
      inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
      inline ScalingInstances& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ScalingInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // launchTemplateId Field Functions 
      bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
      void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
      inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
      inline ScalingInstances& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
      inline ScalingInstances& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline ScalingInstances& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // loadBalancerWeight Field Functions 
      bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
      void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
      inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
      inline ScalingInstances& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline ScalingInstances& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // replaceStatus Field Functions 
      bool hasReplaceStatus() const { return this->replaceStatus_ != nullptr;};
      void deleteReplaceStatus() { this->replaceStatus_ = nullptr;};
      inline string getReplaceStatus() const { DARABONBA_PTR_GET_DEFAULT(replaceStatus_, "") };
      inline ScalingInstances& setReplaceStatus(string replaceStatus) { DARABONBA_PTR_SET_VALUE(replaceStatus_, replaceStatus) };


      // scalingActivityId Field Functions 
      bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
      void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
      inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
      inline ScalingInstances& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


      // scalingConfigurationId Field Functions 
      bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
      void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
      inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
      inline ScalingInstances& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingInstances& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingInstanceId Field Functions 
      bool hasScalingInstanceId() const { return this->scalingInstanceId_ != nullptr;};
      void deleteScalingInstanceId() { this->scalingInstanceId_ = nullptr;};
      inline string getScalingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(scalingInstanceId_, "") };
      inline ScalingInstances& setScalingInstanceId(string scalingInstanceId) { DARABONBA_PTR_SET_VALUE(scalingInstanceId_, scalingInstanceId) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline ScalingInstances& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // warmupState Field Functions 
      bool hasWarmupState() const { return this->warmupState_ != nullptr;};
      void deleteWarmupState() { this->warmupState_ = nullptr;};
      inline string getWarmupState() const { DARABONBA_PTR_GET_DEFAULT(warmupState_, "") };
      inline ScalingInstances& setWarmupState(string warmupState) { DARABONBA_PTR_SET_VALUE(warmupState_, warmupState) };


      // weightedCapacity Field Functions 
      bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
      void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
      inline int32_t getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
      inline ScalingInstances& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ScalingInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The time when the ECS instance was added to the scaling group. The value is accurate to the second.
      shared_ptr<string> createdTime_ {};
      // The time when the ECS instance was added to the scaling group. The value is accurate to the minute.
      shared_ptr<string> creationTime_ {};
      // The method used to create the ECS instance. Valid values: 
      // 
      // - AutoCreated: The ECS instance is created by automatic creation based on the instance configuration source in Auto Scaling. 
      // - Attached: The ECS instance is not created by Auto Scaling but manually added to the scaling group.
      shared_ptr<string> creationType_ {};
      // Indicates whether the manually added instance is managed by the scaling group. A managed manually added instance is released when it is removed from the scaling group (excluding manual removal). Valid values:
      // - true: The instance is managed by the scaling group.
      // - false: The instance is not managed by the scaling group.
      shared_ptr<bool> entrusted_ {};
      // The health check status of the ECS instance in the scaling group. ECS instances that are not in the Running state are considered unhealthy. Valid values: 
      // 
      // - Healthy: The ECS instance is healthy. 
      // - Unhealthy: The ECS instance is unhealthy. 
      // 
      // Auto Scaling automatically removes unhealthy ECS instances from the scaling group and releases the ECS instances created by automatic creation.
      // 
      // Whether a manually added ECS instance is released depends on its managed state. If the instance lifecycle is not managed by the scaling group, the instance is only removed but not released. If the instance lifecycle is managed by the scaling group, the instance is removed and released.
      // 
      // > Make sure that your account has a sufficient available quota. If your account has an overdue payment, all pay-as-you-go ECS instances (including pay-as-you-go instances and spot instances) are stopped or even released. For information about how the status of ECS instances in a scaling group changes after an overdue payment occurs, see [Overdue payments](https://help.aliyun.com/document_detail/170589.html).
      shared_ptr<string> healthStatus_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the launch template.
      shared_ptr<string> launchTemplateId_ {};
      // The version of the launch template.
      shared_ptr<string> launchTemplateVersion_ {};
      // The lifecycle state of the ECS instance in the scaling group. Valid values:
      //  
      // - InService: The ECS instance is added to the scaling group and provides services in the Normal state. 
      // - Pending: The ECS instance is being added to the scaling group. During this procedure, the ECS instance is added to the backend server group of the associated load balancing instance and to the access whitelist of the associated ApsaraDB RDS instance.
      // - Pending:Wait: The ECS instance is waiting to be added to the scaling group. If a lifecycle hook that applies to scale-out activities is created for the scaling group, the ECS instance is suspended and waits for the lifecycle hook timeout to end.
      // - Protected: The ECS instance is protected. The ECS instance provides services as expected, but Auto Scaling does not manage the lifecycle of the ECS instance. You must manually manage the lifecycle.
      // - Standby: The ECS instance is in the standby state. The ECS instance does not provide services, the weight of SLB backend server is set to zero, and Auto Scaling does not manage the lifecycle of the ECS instance. You must manually manage the lifecycle.
      // - Stopped: The ECS instance is stopped and does not provide services.
      // - Removing: The ECS instance is being removed from the scaling group. During this procedure, the ECS instance is removed from the backend server group of the associated load balancing instance and from the access whitelist of the associated ApsaraDB RDS instance. 
      // - Removing:Wait: The ECS instance is waiting to be removed from the scaling group. If a lifecycle hook that applies to scale-down activities is created for the scaling group, the ECS instance is suspended and waits for the lifecycle hook timeout to end.
      shared_ptr<string> lifecycleState_ {};
      // The weight of the load balancing instance.
      // > This parameter is deprecated and is not recommended.
      shared_ptr<int32_t> loadBalancerWeight_ {};
      // The private IP address of the instance in the scaling group.
      shared_ptr<string> privateIpAddress_ {};
      shared_ptr<string> replaceStatus_ {};
      // The ID of the scaling activity during which the ECS instance was added to the scaling group.
      shared_ptr<string> scalingActivityId_ {};
      // The ID of the associated scaling configuration.
      shared_ptr<string> scalingConfigurationId_ {};
      // The ID of the scaling group to which the instance belongs.
      shared_ptr<string> scalingGroupId_ {};
      // The instance identity in the scaling group, which has a one-to-one mapping with the ECS instance ID or Elastic Container Instance (ECI) instance identity.
      shared_ptr<string> scalingInstanceId_ {};
      // The preemption policy of the spot instance. Valid values:
      // 
      // - SpotWithPriceLimit: The spot instance has a maximum price limit.
      // - SpotAsPriceGo: The system automatically bids at the current market price.
      shared_ptr<string> spotStrategy_ {};
      // The warmup state of the ECS instance. Valid values: 
      //          
      // - NoNeedWarmup: No warmup is required.
      // - WaitingForInstanceWarmup: The instance is waiting for warmup to complete.
      // - InstanceWarmupFinish: Warmup is complete.
      shared_ptr<string> warmupState_ {};
      // The weight of the instance type. The weight indicates the capacity that a single instance of this instance type represents in the scaling group. A higher weight means that fewer instances of this type are required to meet the expected capacity.
      shared_ptr<int32_t> weightedCapacity_ {};
      // The zone ID of the ECS instance.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scalingInstances_ == nullptr && this->totalCount_ == nullptr && this->totalSpotCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingInstances Field Functions 
    bool hasScalingInstances() const { return this->scalingInstances_ != nullptr;};
    void deleteScalingInstances() { this->scalingInstances_ = nullptr;};
    inline const vector<DescribeScalingInstancesResponseBody::ScalingInstances> & getScalingInstances() const { DARABONBA_PTR_GET_CONST(scalingInstances_, vector<DescribeScalingInstancesResponseBody::ScalingInstances>) };
    inline vector<DescribeScalingInstancesResponseBody::ScalingInstances> getScalingInstances() { DARABONBA_PTR_GET(scalingInstances_, vector<DescribeScalingInstancesResponseBody::ScalingInstances>) };
    inline DescribeScalingInstancesResponseBody& setScalingInstances(const vector<DescribeScalingInstancesResponseBody::ScalingInstances> & scalingInstances) { DARABONBA_PTR_SET_VALUE(scalingInstances_, scalingInstances) };
    inline DescribeScalingInstancesResponseBody& setScalingInstances(vector<DescribeScalingInstancesResponseBody::ScalingInstances> && scalingInstances) { DARABONBA_PTR_SET_RVALUE(scalingInstances_, scalingInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalSpotCount Field Functions 
    bool hasTotalSpotCount() const { return this->totalSpotCount_ != nullptr;};
    void deleteTotalSpotCount() { this->totalSpotCount_ = nullptr;};
    inline int32_t getTotalSpotCount() const { DARABONBA_PTR_GET_DEFAULT(totalSpotCount_, 0) };
    inline DescribeScalingInstancesResponseBody& setTotalSpotCount(int32_t totalSpotCount) { DARABONBA_PTR_SET_VALUE(totalSpotCount_, totalSpotCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The collection of ECS instance information.
    shared_ptr<vector<DescribeScalingInstancesResponseBody::ScalingInstances>> scalingInstances_ {};
    // The total number of ECS instances.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of running spot instances in the current scaling group.
    shared_ptr<int32_t> totalSpotCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
