// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODYSCALINGINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESRESPONSEBODYSCALINGINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingInstancesResponseBodyScalingInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingInstancesResponseBodyScalingInstances& obj) { 
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
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingInstanceId, scalingInstanceId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(WarmupState, warmupState_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingInstancesResponseBodyScalingInstances& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingInstanceId, scalingInstanceId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(WarmupState, warmupState_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeScalingInstancesResponseBodyScalingInstances() = default ;
    DescribeScalingInstancesResponseBodyScalingInstances(const DescribeScalingInstancesResponseBodyScalingInstances &) = default ;
    DescribeScalingInstancesResponseBodyScalingInstances(DescribeScalingInstancesResponseBodyScalingInstances &&) = default ;
    DescribeScalingInstancesResponseBodyScalingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingInstancesResponseBodyScalingInstances() = default ;
    DescribeScalingInstancesResponseBodyScalingInstances& operator=(const DescribeScalingInstancesResponseBodyScalingInstances &) = default ;
    DescribeScalingInstancesResponseBodyScalingInstances& operator=(DescribeScalingInstancesResponseBodyScalingInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->creationTime_ == nullptr && return this->creationType_ == nullptr && return this->entrusted_ == nullptr && return this->healthStatus_ == nullptr && return this->instanceId_ == nullptr
        && return this->launchTemplateId_ == nullptr && return this->launchTemplateVersion_ == nullptr && return this->lifecycleState_ == nullptr && return this->loadBalancerWeight_ == nullptr && return this->privateIpAddress_ == nullptr
        && return this->scalingActivityId_ == nullptr && return this->scalingConfigurationId_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scalingInstanceId_ == nullptr && return this->spotStrategy_ == nullptr
        && return this->warmupState_ == nullptr && return this->weightedCapacity_ == nullptr && return this->zoneId_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string creationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // entrusted Field Functions 
    bool hasEntrusted() const { return this->entrusted_ != nullptr;};
    void deleteEntrusted() { this->entrusted_ = nullptr;};
    inline bool entrusted() const { DARABONBA_PTR_GET_DEFAULT(entrusted_, false) };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setEntrusted(bool entrusted) { DARABONBA_PTR_SET_VALUE(entrusted_, entrusted) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string lifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t loadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingInstanceId Field Functions 
    bool hasScalingInstanceId() const { return this->scalingInstanceId_ != nullptr;};
    void deleteScalingInstanceId() { this->scalingInstanceId_ = nullptr;};
    inline string scalingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(scalingInstanceId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setScalingInstanceId(string scalingInstanceId) { DARABONBA_PTR_SET_VALUE(scalingInstanceId_, scalingInstanceId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // warmupState Field Functions 
    bool hasWarmupState() const { return this->warmupState_ != nullptr;};
    void deleteWarmupState() { this->warmupState_ = nullptr;};
    inline string warmupState() const { DARABONBA_PTR_GET_DEFAULT(warmupState_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setWarmupState(string warmupState) { DARABONBA_PTR_SET_VALUE(warmupState_, warmupState) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeScalingInstancesResponseBodyScalingInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the ECS instances were added to the scaling group. The value is accurate to the second.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The time when the ECS instances were added to the scaling group. The value is accurate to the minute.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The instance creation method. Valid values:
    // 
    // *   AutoCreated: The ECS instances are created by Auto Scaling based on the instance configuration source.
    // *   Attached: The ECS instances are manually added to the scaling group.
    std::shared_ptr<string> creationType_ = nullptr;
    // Indicates whether the scaling group is allowed to manage the instance lifecycles when ECS instances are manually added. If the scaling group is allowed to manage the instance lifecycles, Auto Scaling can release the ECS instances when the instances are automatically removed from the scaling group. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> entrusted_ = nullptr;
    // The health status of the ECS instance in the scaling group. If an ECS instance is not in the Running state, the instance is considered unhealthy. Valid values:
    // 
    // *   Healthy
    // *   Unhealthy
    // 
    // Auto Scaling automatically removes unhealthy ECS instances from the scaling group and then releases the automatically created instances among the unhealthy instances.
    // 
    // Unhealthy ECS instances that are manually added to the scaling group are released based on the management mode of the lifecycles of the instances. If the lifecycles of the ECS instances are not managed by the scaling group, Auto Scaling removes the instances from the scaling group but does not release the instances. If the lifecycles of the ECS instances are managed by the scaling group, Auto Scaling removes the instances from the scaling group and releases the instances.
    // 
    // >  Make sure that you have sufficient balance within your Alibaba Cloud account. If your Alibaba Cloud account has an overdue payment, all pay-as-you-go ECS instances, including preemptible instances, may be stopped or even released. For information about how the status of ECS instances changes when you have an overdue payment in your Alibaba Cloud account, see [Overdue payments](https://help.aliyun.com/document_detail/170589.html).
    std::shared_ptr<string> healthStatus_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version number of the launch template.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The lifecycle status of the ECS instance in the scaling group. Valid values:
    // 
    // *   InService: The ECS instance is added to the scaling group and provides services as expected.
    // *   Pending: The ECS instance is being added to the scaling group. When an ECS instance is being added to the scaling group, Auto Scaling also adds the instance to the backend server groups of the attached load balancers and adds the private IP address of the instance to the IP address whitelists of the attached ApsaraDB RDS instances.
    // *   Pending:Wait: The ECS instance is waiting to be added to the scaling group. If a scale-out lifecycle hook is in effect, the ECS instance remains in the Pending:Wait state until the timeout period for the lifecycle hook expires.
    // *   Protected: The ECS instance is protected. Protected ECS instances can continue to provide services as expected, but Auto Scaling does not manage the lifecycles of the ECS instances. You must manually manage the lifecycles of the ECS instances.
    // *   Standby: The ECS instance is on standby. Standby ECS instances do not provide services as expected, and the weights of the ECS instances as backend servers are reset to zero. Auto Scaling does not manage the lifecycles of the ECS instances. Therefore, you must manually manage the lifecycles of the ECS instances.
    // *   Stopped: The ECS instance is stopped. Stopped ECS instances no longer provide services.
    // *   Removing: The ECS instance is being removed from the scaling group. When an ECS instance is being removed from the scaling group, Auto Scaling also removes the instance from the backend server groups of the attached load balancers and removes the private IP address of the instance from the IP address whitelists of the attached ApsaraDB RDS instances.
    // *   Removing:Wait: The ECS instance is waiting to be removed from the scaling group. If a scale-in lifecycle hook is in effect, the ECS instance remains in the Removing:Wait state until the timeout period for the lifecycle hook expires.
    std::shared_ptr<string> lifecycleState_ = nullptr;
    // The weight of each ECS instance as a backend server.
    // 
    // >  This parameter is deprecated and is not recommended.
    std::shared_ptr<int32_t> loadBalancerWeight_ = nullptr;
    // The private IP address of the ECS instance.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The ID of the scaling activity during which the ECS instances were added to the scaling group.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The ID of the ECS instance or elastic container instance.
    std::shared_ptr<string> scalingInstanceId_ = nullptr;
    // The bidding policy for the preemptible instances. Valid values:
    // 
    // *   SpotWithPriceLimit: The instances are preemptible instances that have a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are preemptible instances for which the market price at the time of purchase is automatically used as the bidding price.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The warm-up status of the ECS instances. Valid values:
    // 
    // *   NoNeedWarmup: The ECS instances do not need to undergo a warm-up process.
    // *   WaitingForInstanceWarmup: The ECS instances are undergoing the warm-up process.
    // *   InstanceWarmupFinish: The warm-up process for the ECS instances is complete.
    std::shared_ptr<string> warmupState_ = nullptr;
    // The weight of the instance type. The weight indicates the capacity of a single instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the instance type are required to meet the expected capacity requirement.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
    // The zone ID of the ECS instances.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
