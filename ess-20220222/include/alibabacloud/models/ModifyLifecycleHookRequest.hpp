// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIFECYCLEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIFECYCLEHOOKREQUEST_HPP_
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
  class ModifyLifecycleHookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLifecycleHookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_TO_JSON(LifecycleActionSources, lifecycleActionSources_);
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(LifecycleHookStatus, lifecycleHookStatus_);
      DARABONBA_PTR_TO_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLifecycleHookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionSources, lifecycleActionSources_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookStatus, lifecycleHookStatus_);
      DARABONBA_PTR_FROM_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    ModifyLifecycleHookRequest() = default ;
    ModifyLifecycleHookRequest(const ModifyLifecycleHookRequest &) = default ;
    ModifyLifecycleHookRequest(ModifyLifecycleHookRequest &&) = default ;
    ModifyLifecycleHookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLifecycleHookRequest() = default ;
    ModifyLifecycleHookRequest& operator=(const ModifyLifecycleHookRequest &) = default ;
    ModifyLifecycleHookRequest& operator=(ModifyLifecycleHookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResult_ == nullptr
        && this->heartbeatTimeout_ == nullptr && this->lifecycleActionSources_ == nullptr && this->lifecycleHookId_ == nullptr && this->lifecycleHookName_ == nullptr && this->lifecycleHookStatus_ == nullptr
        && this->lifecycleTransition_ == nullptr && this->notificationArn_ == nullptr && this->notificationMetadata_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline ModifyLifecycleHookRequest& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t getHeartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline ModifyLifecycleHookRequest& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleActionSources Field Functions 
    bool hasLifecycleActionSources() const { return this->lifecycleActionSources_ != nullptr;};
    void deleteLifecycleActionSources() { this->lifecycleActionSources_ = nullptr;};
    inline const vector<string> & getLifecycleActionSources() const { DARABONBA_PTR_GET_CONST(lifecycleActionSources_, vector<string>) };
    inline vector<string> getLifecycleActionSources() { DARABONBA_PTR_GET(lifecycleActionSources_, vector<string>) };
    inline ModifyLifecycleHookRequest& setLifecycleActionSources(const vector<string> & lifecycleActionSources) { DARABONBA_PTR_SET_VALUE(lifecycleActionSources_, lifecycleActionSources) };
    inline ModifyLifecycleHookRequest& setLifecycleActionSources(vector<string> && lifecycleActionSources) { DARABONBA_PTR_SET_RVALUE(lifecycleActionSources_, lifecycleActionSources) };


    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline ModifyLifecycleHookRequest& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string getLifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline ModifyLifecycleHookRequest& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // lifecycleHookStatus Field Functions 
    bool hasLifecycleHookStatus() const { return this->lifecycleHookStatus_ != nullptr;};
    void deleteLifecycleHookStatus() { this->lifecycleHookStatus_ = nullptr;};
    inline string getLifecycleHookStatus() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookStatus_, "") };
    inline ModifyLifecycleHookRequest& setLifecycleHookStatus(string lifecycleHookStatus) { DARABONBA_PTR_SET_VALUE(lifecycleHookStatus_, lifecycleHookStatus) };


    // lifecycleTransition Field Functions 
    bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
    void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
    inline string getLifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
    inline ModifyLifecycleHookRequest& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline ModifyLifecycleHookRequest& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationMetadata Field Functions 
    bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
    void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
    inline string getNotificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
    inline ModifyLifecycleHookRequest& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLifecycleHookRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLifecycleHookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLifecycleHookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLifecycleHookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ModifyLifecycleHookRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The subsequent action to perform after the wait state ends. Valid values: 
    // 
    // - CONTINUE: Continues the response to the scale-out or scale-down activity.
    // - ABANDON: Releases the ECS instances created during the scale-out activity or removes the ECS instances from the scaling group during the scale-down activity.
    // - ROLLBACK: Rejects the release of ECS instances and rolls back the scale-down activity. For a scale-out activity, releases the created ECS instances, which has the same effect as ABANDON.
    // 
    // If a scale-down activity is triggered and multiple lifecycle hooks are invoked, and the DefaultResult of one lifecycle hook is set to ABANDON or ROLLBACK, the wait states of other lifecycle hooks are ended in advance when the wait state of this hook ends. In other cases, the subsequent action is determined by the last lifecycle hook that ends its wait state.
    shared_ptr<string> defaultResult_ {};
    // The wait time set by the lifecycle hook for the scaling activity. The subsequent action is performed after the wait state times out. Valid values: 30 to 21600. Unit: seconds.
    // 
    // You can call the RecordLifecycleActionHeartbeat operation to extend the wait time of the ECS instance, or call the CompleteLifecycleAction operation to end the wait state of the scaling activity in advance.
    shared_ptr<int32_t> heartbeatTimeout_ {};
    // The specific scenarios that trigger the lifecycle hook.
    shared_ptr<vector<string>> lifecycleActionSources_ {};
    // The ID of the lifecycle hook to be modified.
    shared_ptr<string> lifecycleHookId_ {};
    // The name of the lifecycle hook to be modified.
    shared_ptr<string> lifecycleHookName_ {};
    // The status of the lifecycle hook. Valid values:
    // - Active: Enables the lifecycle hook.
    // - InActive: Disables the lifecycle hook.
    // 
    // If you do not specify this parameter, the status of the lifecycle hook remains unchanged.
    // > After a lifecycle hook is created, it is enabled by default.
    shared_ptr<string> lifecycleHookStatus_ {};
    // The type of scaling activity to which the lifecycle hook applies. Valid values:
    // - SCALE_OUT: Scale-out activity of the scaling group.
    // - SCALE_IN: Scale-in activity of the scaling group.
    shared_ptr<string> lifecycleTransition_ {};
    // The identifier of the notification recipient for the lifecycle hook. The following notification methods are supported:
    // - Message Service (MNS) queue. Format: acs:mns:{region-id}:{account-id}:queue/{queuename}.
    // - MNS topic. Format: acs:mns:{region-id}:{account-id}:topic/{topicname}.
    // - Operation Orchestration Service (OOS) template. Format: acs:oos:{region-id}:{account-id}:template/{templatename}.
    // - EventBridge. Format: acs:eventbridge:{region-id}:{account-id}:eventbus/default.
    // 
    // Variables in the formats:
    // - region-id: The ID of the region where the scaling group resides.
    // - account-id: The Alibaba Cloud account ID.
    // - queuename: The name of the MNS queue.
    // - topicname: The name of the MNS topic.
    // - templatename: The name of the OOS template.
    shared_ptr<string> notificationArn_ {};
    // The fixed string information for the wait state of the scaling activity. The value can be up to 4,096 characters in length.
    // 
    // When Auto Scaling pushes a message to the notification recipient, it also sends the predefined NotificationMetadata value to help you manage and tag different types of notifications. This parameter takes effect only when the NotificationArn parameter is specified.
    shared_ptr<string> notificationMetadata_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group to which the lifecycle hook belongs.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
