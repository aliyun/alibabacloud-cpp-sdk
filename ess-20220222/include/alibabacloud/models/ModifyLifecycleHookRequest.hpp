// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIFECYCLEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIFECYCLEHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
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
        && this->heartbeatTimeout_ == nullptr && this->lifecycleHookId_ == nullptr && this->lifecycleHookName_ == nullptr && this->lifecycleHookStatus_ == nullptr && this->lifecycleTransition_ == nullptr
        && this->notificationArn_ == nullptr && this->notificationMetadata_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr; };
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
    // The action that you want Auto Scaling to perform after the lifecycle hook ends. Valid values:
    // 
    // *   CONTINUE: Auto Scaling continues to respond to scaling requests.
    // *   ABANDON: Auto Scaling releases Elastic Compute Service (ECS) instances that are created during scale-out activities, or removes ECS instances from the scaling group during scale-in activities.
    // 
    // If multiple lifecycle hooks in a scaling group are triggered during scale-in activities and you set the DefaultResult parameter to ABANDON for the lifecycle hook that you want to modify, Auto Scaling immediately performs the action after the lifecycle hook that you want to modify ends. As a result, other lifecycle hooks end ahead of schedule. In other cases, Auto Scaling performs the action only after all lifecycle hooks end.
    shared_ptr<string> defaultResult_ {};
    // The period of time before the lifecycle hook ends. Auto Scaling performs the specified action after the lifecycle hook ends. Valid values: 30 to 21600. Unit: seconds.
    // 
    // You can call the RecordLifecycleActionHeartbeat operation to prolong the length of a lifecycle hook. You can also call the CompleteLifecycleAction operation to end a lifecycle hook ahead of schedule.
    shared_ptr<int32_t> heartbeatTimeout_ {};
    // The ID of the lifecycle hook that you want to modify.
    shared_ptr<string> lifecycleHookId_ {};
    // The name of the lifecycle hook that you want to modify.
    shared_ptr<string> lifecycleHookName_ {};
    // The status into which you want to put the lifecycle hook. Valid values:
    // 
    // *   Active
    // *   InActive
    // 
    // If you do not specify this parameter, the status of the lifecycle hook remains unchanged after you call this operation.
    // 
    // > By default, a lifecycle hook is in the Active state after you create it.
    shared_ptr<string> lifecycleHookStatus_ {};
    // The type of scaling activity to which the lifecycle hook applies. Valid values:
    // 
    // *   SCALE_OUT
    // *   SCALE_IN
    shared_ptr<string> lifecycleTransition_ {};
    // The Alibaba Cloud Resource Name (ARN) of the notification recipient. Specify the value in one of the following formats:
    // 
    // *   If you specify a Simple Message Queue (SMQ, formerly MNS) as the notification recipient, specify the value in the acs:mns:{region-id}:{account-id}:queue/{queuename} format.
    // *   If you specify an SMQ topic as the notification recipient, specify the value in the acs:mns:{region-id}:{account-id}:topic/{topicname} format.
    // *   If you specify a CloudOps Orchestration Service (OOS) template as the notification recipient, specify the value in the acs:oos:{region-id}:{account-id}:template/{templatename} format.
    // *   If you specify an event bus as the notification recipient, specify the value in the acs:eventbridge:{region-id}:{account-id}:eventbus/default format.
    // 
    // The variables in the preceding value formats have the following meanings:
    // 
    // *   region-id: the region ID of your scaling group.
    // *   account-id: the ID of your Alibaba Cloud account.
    // *   queuename: the name of the SMQ queue.
    // *   topicname: the name of the SMQ topic.
    // *   templatename: the name of the OOS template.
    shared_ptr<string> notificationArn_ {};
    // The fixed string that is included in a notification. Auto Scaling sends the notification when the lifecycle hook takes effect. The value of this parameter cannot exceed 4,096 characters in length.
    // 
    // Auto Scaling sends the value specified for the NotificationMetadata parameter together with the notification. This helps you categorize your notifications. The NotificationMetadata parameter takes effect only after you specify the NotificationArn parameter.
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
