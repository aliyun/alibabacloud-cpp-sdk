// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIFECYCLEHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    virtual bool empty() const override { this->defaultResult_ != nullptr
        && this->heartbeatTimeout_ != nullptr && this->lifecycleHookName_ != nullptr && this->lifecycleTransition_ != nullptr && this->notificationArn_ != nullptr && this->notificationMetadata_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string defaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline CreateLifecycleHookRequest& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t heartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline CreateLifecycleHookRequest& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string lifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline CreateLifecycleHookRequest& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // lifecycleTransition Field Functions 
    bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
    void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
    inline string lifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
    inline CreateLifecycleHookRequest& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string notificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline CreateLifecycleHookRequest& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationMetadata Field Functions 
    bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
    void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
    inline string notificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
    inline CreateLifecycleHookRequest& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLifecycleHookRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLifecycleHookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLifecycleHookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateLifecycleHookRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The action that you want Auto Scaling to perform after the lifecycle hook times out. Valid values:
    // 
    // *   CONTINUE: Auto Scaling continues to respond to scale-in or scale-out requests.
    // *   ABANDON: Auto Scaling releases Elastic Compute Service (ECS) instances that are created during scale-out activities, or removes ECS instances from the scaling group during scale-in activities.
    // 
    // If multiple lifecycle hooks in a scaling group are triggered during scale-in activities and you set the DefaultResult parameter to ABANDON for one of the lifecycle hooks, Auto Scaling immediately performs the action after the lifecycle hook whose DefaultResult is set to ABANDON times out. As a result, other lifecycle hooks time out ahead of schedule. In other cases, Auto Scaling performs the action only after all lifecycle hooks time out.
    // 
    // Default value: CONTINUE.
    std::shared_ptr<string> defaultResult_ = nullptr;
    // The period of time before the lifecycle hook times out. After the lifecycle hook times out, Auto Scaling performs the default action. Valid values: 30 to 21600. Unit: seconds.
    // 
    // After you create a lifecycle hook, you can call the RecordLifecycleActionHeartbeat operation to prolong the timeout period of the lifecycle hook. You can also call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule.
    // 
    // Default value: 600.
    std::shared_ptr<int32_t> heartbeatTimeout_ = nullptr;
    // The name of the lifecycle hook. Each lifecycle hook name must be unique within a scaling group. The name must be 2 to 64 characters in length, and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter or a digit.
    // 
    // If you do not specify this parameter, the value of the LifecycleHookId parameter is used.
    std::shared_ptr<string> lifecycleHookName_ = nullptr;
    // The type of the scaling activity to which the lifecycle hook applies. Valid values:
    // 
    // *   SCALE_OUT
    // *   SCALE_IN
    // 
    // This parameter is required.
    std::shared_ptr<string> lifecycleTransition_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the notification recipient. If you do not specify this parameter, no notification is sent when the lifecycle hook takes effect. If you specify this parameter, the value must be in one of the following formats:
    // 
    // *   If you specify a Simple Message Queue (SMQ, formerly MNS) as the notification recipient, specify the value in the acs:mns:{region-id}:{account-id}:queue/{queuename} format.
    // *   If you specify an SMQ topic as the notification recipient, specify the value in the acs:mns:{region-id}:{account-id}:topic/{topicname} format.
    // *   If you specify a CloudOps Orchestration Service (OOS) template as the notification recipient, specify the value in the acs:oos:{region-id}:{account-id}:template/{templatename} format.
    // *   If you specify an event bus as the notification recipient, specify the value in the acs:eventbridge:{region-id}:{account-id}:eventbus/default format.
    // 
    // The variables in the preceding value formats have the following meanings:
    // 
    // *   region-id: the region ID of your scaling group.
    // *   account-id: the ID of the Alibaba Cloud account. IDs of Resource Access Management (RAM) users are not supported.
    // *   queuename: the name of the SMQ queue.
    // *   topicname: the name of the SMQ topic.
    // *   templatename: the name of the OOS template.
    std::shared_ptr<string> notificationArn_ = nullptr;
    // The notification metadata that is sent when the lifecycle hook takes effect. This helps you manage and categorize notifications in an efficient manner. If you specify this parameter, you must specify the NotificationArn parameter. The parameter value cannot exceed 4,096 characters in length.
    // 
    // If you use the NotificationArn parameter to specify a public or customOOS template, the value of the NotificationMetadata parameter must be a JSON string that contains the OOS template parameters. For example, your OOS template includes the following parameters: `{"dbInstanceId": "dds-bp17661e0135****", "modifyMode": "Append"}`, `dbInstanceId`, and `modifyMode`. Some parameters defined in your OOS template have default values. When you specify the NotificationMetadata parameter, specify parameters that do not have default values. If you specify parameters that have default values, the default values are overwritten. However, the default values of the following parameters must be retained to obtain information about scaling activities that are in progress:
    // 
    // *   `regionId`: the region ID of the scaling activity that is in progress. Default value: ${regionId}.
    // *   `instanceIds`: the IDs of ECS instances that are scaled in in the scaling activity. Default value: ${instanceIds}.
    // *   `lifecycleHookId`: the ID of the lifecycle hook. Default value: ${lifecycleHookId}.
    // *   `lifecycleActionToken`: the token of the lifecycle action. You can use the token to end the timeout period of the lifecycle hook ahead of schedule. Default value: ${lifecycleActionToken}
    // *   `scalingGroupId`: the ID of the scaling group in which the scaling activity is executed. Default value: ${scalingGroupId}.
    // 
    // > You can obtain template parameter information in the [OOS console](https://oos.console.aliyun.com/).
    std::shared_ptr<string> notificationMetadata_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
