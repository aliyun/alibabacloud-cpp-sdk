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
    virtual bool empty() const override { return this->creationType_ == nullptr
        && this->creationTypes_ == nullptr && this->healthStatus_ == nullptr && this->instanceIds_ == nullptr && this->lifecycleState_ == nullptr && this->lifecycleStates_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingActivityId_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingGroupId_ == nullptr; };
    // creationType Field Functions 
    bool hasCreationType() const { return this->creationType_ != nullptr;};
    void deleteCreationType() { this->creationType_ = nullptr;};
    inline string getCreationType() const { DARABONBA_PTR_GET_DEFAULT(creationType_, "") };
    inline DescribeScalingInstancesRequest& setCreationType(string creationType) { DARABONBA_PTR_SET_VALUE(creationType_, creationType) };


    // creationTypes Field Functions 
    bool hasCreationTypes() const { return this->creationTypes_ != nullptr;};
    void deleteCreationTypes() { this->creationTypes_ = nullptr;};
    inline const vector<string> & getCreationTypes() const { DARABONBA_PTR_GET_CONST(creationTypes_, vector<string>) };
    inline vector<string> getCreationTypes() { DARABONBA_PTR_GET(creationTypes_, vector<string>) };
    inline DescribeScalingInstancesRequest& setCreationTypes(const vector<string> & creationTypes) { DARABONBA_PTR_SET_VALUE(creationTypes_, creationTypes) };
    inline DescribeScalingInstancesRequest& setCreationTypes(vector<string> && creationTypes) { DARABONBA_PTR_SET_RVALUE(creationTypes_, creationTypes) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline DescribeScalingInstancesRequest& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeScalingInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeScalingInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleState Field Functions 
    bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
    void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
    inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
    inline DescribeScalingInstancesRequest& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


    // lifecycleStates Field Functions 
    bool hasLifecycleStates() const { return this->lifecycleStates_ != nullptr;};
    void deleteLifecycleStates() { this->lifecycleStates_ = nullptr;};
    inline const vector<string> & getLifecycleStates() const { DARABONBA_PTR_GET_CONST(lifecycleStates_, vector<string>) };
    inline vector<string> getLifecycleStates() { DARABONBA_PTR_GET(lifecycleStates_, vector<string>) };
    inline DescribeScalingInstancesRequest& setLifecycleStates(const vector<string> & lifecycleStates) { DARABONBA_PTR_SET_VALUE(lifecycleStates_, lifecycleStates) };
    inline DescribeScalingInstancesRequest& setLifecycleStates(vector<string> && lifecycleStates) { DARABONBA_PTR_SET_RVALUE(lifecycleStates_, lifecycleStates) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline DescribeScalingInstancesRequest& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline DescribeScalingInstancesRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The method used to create the instance in the scaling group. Valid values: 
    // 
    // - AutoCreated: The ECS instance is created by automatic creation based on the instance configuration source in Auto Scaling. 
    // - Attached: The ECS instance is not created by Auto Scaling but manually added to the scaling group.
    // - Managed: The managed instance is not created by Auto Scaling but manually added to the scaling group.
    shared_ptr<string> creationType_ {};
    // The methods used to create instances in the scaling group. You can specify only one of this parameter and CreationType.
    shared_ptr<vector<string>> creationTypes_ {};
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
    // The IDs of the ECS instances.
    // 
    // Invalid InstanceId values are ignored in the query results, and no error is returned.
    shared_ptr<vector<string>> instanceIds_ {};
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
    // The lifecycle states of ECS instances in the scaling group. You can specify only one of this parameter and LifecycleState. We recommend that you use this parameter.
    shared_ptr<vector<string>> lifecycleStates_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number of the ECS instance list. Minimum value: 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page in a paged query. Settings: Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the scaling activity.
    shared_ptr<string> scalingActivityId_ {};
    // The ID of the associated scaling configuration.
    shared_ptr<string> scalingConfigurationId_ {};
    // The ID of the scaling group.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
