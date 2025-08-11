// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGINSTANCESREQUEST_HPP_
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
  class DescribeScalingInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationType, creationType_);
      DARABONBA_PTR_TO_JSON(CreationTypes, creationTypes_);
      DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_TO_JSON(LifecycleStates, lifecycleStates_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationType, creationType_);
      DARABONBA_PTR_FROM_JSON(CreationTypes, creationTypes_);
      DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
      DARABONBA_PTR_FROM_JSON(LifecycleStates, lifecycleStates_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeScalingInstancesRequest() = default ;
    DescribeScalingInstancesRequest(const DescribeScalingInstancesRequest &) = default ;
    DescribeScalingInstancesRequest(DescribeScalingInstancesRequest &&) = default ;
    DescribeScalingInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingInstancesRequest() = default ;
    DescribeScalingInstancesRequest& operator=(const DescribeScalingInstancesRequest &) = default ;
    DescribeScalingInstancesRequest& operator=(DescribeScalingInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationType_ != nullptr
        && this->creationTypes_ != nullptr && this->healthStatus_ != nullptr && this->instanceIds_ != nullptr && this->lifecycleState_ != nullptr && this->lifecycleStates_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->scalingActivityId_ != nullptr && this->scalingConfigurationId_ != nullptr && this->scalingGroupId_ != nullptr; };
    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string creationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline DescribeScalingInstancesRequest& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // creationTypes Field Functions 
    bool hasCreationTypes() const { return this->creationTypes_ != nullptr;};
    void deleteCreationTypes() { this->creationTypes_ = nullptr;};
    inline const vector<string> & creationTypes() const { DARABONBA_PTR_GET_CONST(creationTypes_, vector<string>) };
    inline vector<string> creationTypes() { DARABONBA_PTR_GET(creationTypes_, vector<string>) };
    inline DescribeScalingInstancesRequest& setCreationTypes(const vector<string> & creationTypes) { DARABONBA_PTR_SET_VALUE(creationTypes_, creationTypes) };
    inline DescribeScalingInstancesRequest& setCreationTypes(vector<string> && creationTypes) { DARABONBA_PTR_SET_RVALUE(creationTypes_, creationTypes) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeScalingInstancesRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeScalingInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeScalingInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string lifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeScalingInstancesRequest& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // lifecycleStates Field Functions 
    bool hasLifecycleStates() const { return this->lifecycleStates_ != nullptr;};
    void deleteLifecycleStates() { this->lifecycleStates_ = nullptr;};
    inline const vector<string> & lifecycleStates() const { DARABONBA_PTR_GET_CONST(lifecycleStates_, vector<string>) };
    inline vector<string> lifecycleStates() { DARABONBA_PTR_GET(lifecycleStates_, vector<string>) };
    inline DescribeScalingInstancesRequest& setLifecycleStates(const vector<string> & lifecycleStates) { DARABONBA_PTR_SET_VALUE(lifecycleStates_, lifecycleStates) };
    inline DescribeScalingInstancesRequest& setLifecycleStates(vector<string> && lifecycleStates) { DARABONBA_PTR_SET_RVALUE(lifecycleStates_, lifecycleStates) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DescribeScalingInstancesRequest& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string scalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeScalingInstancesRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The instance creation method. Valid values:
    // 
    // *   AutoCreated: The ECS instances are created by Auto Scaling based on the instance configuration source.
    // *   Attached: The ECS instances are manually added to the scaling group.
    // *   Managed: The Alibaba Cloud-managed third-party instances are manually added to the scaling group.
    std::shared_ptr<string> creationType_ = nullptr;
    // The instance creation methods. If you specify this parameter, you cannot specify CreationType.
    std::shared_ptr<vector<string>> creationTypes_ = nullptr;
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
    // The IDs of the ECS instances.
    // 
    // The IDs of inactive instances are not displayed in the query result, and no errors are returned.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
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
    // The lifecycle status of the ECS instances in the scaling group. You can specify only one of LifecycleStates and LifecycleState at a time. We recommend that you specify this parameter.
    std::shared_ptr<vector<string>> lifecycleStates_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling activity.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
    // The ID of the scaling configuration.
    std::shared_ptr<string> scalingConfigurationId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
