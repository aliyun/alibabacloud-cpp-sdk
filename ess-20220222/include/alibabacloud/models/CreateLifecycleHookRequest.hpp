// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKREQUEST_HPP_
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
  class CreateLifecycleHookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLifecycleHookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_TO_JSON(LifecycleActionSources, lifecycleActionSources_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLifecycleHookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionSources, lifecycleActionSources_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    CreateLifecycleHookRequest() = default ;
    CreateLifecycleHookRequest(const CreateLifecycleHookRequest &) = default ;
    CreateLifecycleHookRequest(CreateLifecycleHookRequest &&) = default ;
    CreateLifecycleHookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLifecycleHookRequest() = default ;
    CreateLifecycleHookRequest& operator=(const CreateLifecycleHookRequest &) = default ;
    CreateLifecycleHookRequest& operator=(CreateLifecycleHookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResult_ == nullptr
        && this->heartbeatTimeout_ == nullptr && this->lifecycleActionSources_ == nullptr && this->lifecycleHookName_ == nullptr && this->lifecycleTransition_ == nullptr && this->notificationArn_ == nullptr
        && this->notificationMetadata_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline CreateLifecycleHookRequest& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t getHeartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline CreateLifecycleHookRequest& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleActionSources Field Functions 
    bool hasLifecycleActionSources() const { return this->lifecycleActionSources_ != nullptr;};
    void deleteLifecycleActionSources() { this->lifecycleActionSources_ = nullptr;};
    inline const vector<string> & getLifecycleActionSources() const { DARABONBA_PTR_GET_CONST(lifecycleActionSources_, vector<string>) };
    inline vector<string> getLifecycleActionSources() { DARABONBA_PTR_GET(lifecycleActionSources_, vector<string>) };
    inline CreateLifecycleHookRequest& setLifecycleActionSources(const vector<string> & lifecycleActionSources) { DARABONBA_PTR_SET_VALUE(lifecycleActionSources_, lifecycleActionSources) };
    inline CreateLifecycleHookRequest& setLifecycleActionSources(vector<string> && lifecycleActionSources) { DARABONBA_PTR_SET_RVALUE(lifecycleActionSources_, lifecycleActionSources) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string getLifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline CreateLifecycleHookRequest& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // lifecycleTransition Field Functions 
    bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
    void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
    inline string getLifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
    inline CreateLifecycleHookRequest& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline CreateLifecycleHookRequest& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationMetadata Field Functions 
    bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
    void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
    inline string getNotificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
    inline CreateLifecycleHookRequest& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLifecycleHookRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLifecycleHookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLifecycleHookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateLifecycleHookRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The action to be performed after the wait state ends. Valid values: 
    // 
    // - CONTINUE: Continues the response to the scale-out or scale-in activity.
    // - ABANDON: Releases the ECS instances created by the scale-out activity or removes the ECS instances in the scale-in activity from the scaling group. 
    // - ROLLBACK: Rejects the release of ECS instances and rolls back the scale-in activity. For a scale-out activity, this value directly releases the created ECS instances, which has the same effect as ABANDON.
    // 
    // When a scale-in activity occurs in the scaling group and multiple lifecycle hooks are triggered, if the DefaultResult of one lifecycle hook is set to ABANDON or ROLLBACK and the wait state of the hook ends, the wait states of other lifecycle hooks are ended in advance. In other cases, the action to be performed is subject to the action of the last lifecycle hook whose wait state ends.
    // 
    // Default value: CONTINUE.
    shared_ptr<string> defaultResult_ {};
    // The wait time configured by the lifecycle hook for the scaling activity. After the wait state times out, the next action is performed. Valid values: 30 to 21600. Unit: seconds.
    // 
    // After you create a lifecycle hook, you can call RecordLifecycleActionHeartbeat to extend the wait time of the ECS instance, or call CompleteLifecycleAction to end the wait state of the scaling activity in advance. 
    // 
    // Default value: 600.
    shared_ptr<int32_t> heartbeatTimeout_ {};
    // The specific scenarios triggered by the lifecycle hook.
    shared_ptr<vector<string>> lifecycleActionSources_ {};
    // The name of the lifecycle hook. The name must be unique among all lifecycle hooks in the current scaling group. It must be 2 to 64 characters in length, start with a digit, an uppercase or lowercase letter, or a Chinese character, and can contain digits, underscores (_), hyphens (-), and periods (.).
    // 
    // Default value: the value of LifecycleHookId.
    shared_ptr<string> lifecycleHookName_ {};
    // The type of scaling activity to which the lifecycle hook applies. Valid values: 
    //          
    // - SCALE_OUT: scale-out activity of the scaling group. 
    // - SCALE_IN: scale-in activity of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> lifecycleTransition_ {};
    // The identifier of the notification recipient for the lifecycle hook. If you do not specify this parameter, no notifications are sent. If you specify this parameter, the following notification methods are supported:
    // - MNS queue. Format: acs:mns:{region-id}:{account-id}:queue/{queuename}.
    // - MNS topic. Format: acs:mns:{region-id}:{account-id}:topic/{topicname}.
    // - OOS template. Format: acs:oos:{region-id}:{account-id}:template/{templatename}.
    // - EventBridge. Format: acs:eventbridge:{region-id}:{account-id}:eventbus/default.
    // 
    // The variables in the formats have the following meanings:
    // - region-id: the ID of the region where the scaling group resides.
    // - account-id: the Alibaba Cloud account ID. The ID of a Resource Access Management (RAM) user is not supported.
    // - queuename: the name of the MNS queue.
    // - topicname: the name of the MNS topic.
    // - templatename: the name of the OOS template.
    shared_ptr<string> notificationArn_ {};
    // The notification message pushed to the NotificationArn (notification recipient) when the lifecycle hook pauses the scaling activity. This parameter helps you manage and mark different types of notification messages. You must specify NotificationArn together with this parameter. The value can be up to 4,096 characters in length.
    // 
    // If NotificationArn is set to an OOS template, including a public or custom template, NotificationMetadata must be specified as a JSON string that matches the parameters of the OOS template. For example, `{"dbInstanceId": "dds-bp17661e0135****", "modifyMode": "Append"}`, where `dbInstanceId` and `modifyMode` are parameters defined in the OOS template. Some parameters of the OOS template have default values. You must specify parameters without default values in NotificationMetadata. If you specify parameters with default values, the original default values are overwritten. However, keep the default values for the following parameters to obtain relevant information at runtime:
    // 
    // - `regionId`: the region where the scaling activity is executed. Default value: ${regionId}.
    // 
    // - `instanceIds`: the list of instances associated with the scaling activity. Default value: ${instanceIds}.
    // 
    // - `lifecycleHookId`: the ID of the lifecycle hook. Default value: ${lifecycleHookId}.
    // 
    // - `lifecycleActionToken`: the wait state identifier for the scaling activity, which is used to end the current suspended activity in advance. Default value: ${lifecycleActionToken}.
    // 
    // - `scalingGroupId`: the ID of the scaling group to which the scaling activity belongs. Default value: ${scalingGroupId}.
    // 
    // - `lifecycleActionResult`: the action to be performed after the wait state of the lifecycle hook ends. This parameter is used to end the current suspended activity in advance when the OOS template execution fails. When DefaultResult is set to ROLLBACK, the default value of this parameter is ROLLBACK. In other cases, the default value is ABANDON.
    // 
    // >- You can configure the value of lifecycleActionResult to overwrite the current default value as needed. Valid values: ABANDON, CONTINUE, ROLLBACK, and ${lifecycleActionResult}.
    // Among these values, ${lifecycleActionResult} indicates that the value of lifecycleActionResult is the same as that of DefaultResult.
    // - You can obtain detailed information about the parameters of the corresponding template in the [OOS console](https://oos.console.aliyun.com/).
    shared_ptr<string> notificationMetadata_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
