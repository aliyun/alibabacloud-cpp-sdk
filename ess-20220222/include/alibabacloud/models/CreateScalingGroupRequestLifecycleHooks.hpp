// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTLIFECYCLEHOOKS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTLIFECYCLEHOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestLifecycleHooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestLifecycleHooks& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationMetadata, notificationMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestLifecycleHooks& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationMetadata, notificationMetadata_);
    };
    CreateScalingGroupRequestLifecycleHooks() = default ;
    CreateScalingGroupRequestLifecycleHooks(const CreateScalingGroupRequestLifecycleHooks &) = default ;
    CreateScalingGroupRequestLifecycleHooks(CreateScalingGroupRequestLifecycleHooks &&) = default ;
    CreateScalingGroupRequestLifecycleHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestLifecycleHooks() = default ;
    CreateScalingGroupRequestLifecycleHooks& operator=(const CreateScalingGroupRequestLifecycleHooks &) = default ;
    CreateScalingGroupRequestLifecycleHooks& operator=(CreateScalingGroupRequestLifecycleHooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultResult_ != nullptr
        && this->heartbeatTimeout_ != nullptr && this->lifecycleHookName_ != nullptr && this->lifecycleTransition_ != nullptr && this->notificationArn_ != nullptr && this->notificationMetadata_ != nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string defaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline CreateScalingGroupRequestLifecycleHooks& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t heartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline CreateScalingGroupRequestLifecycleHooks& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string lifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline CreateScalingGroupRequestLifecycleHooks& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // lifecycleTransition Field Functions 
    bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
    void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
    inline string lifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
    inline CreateScalingGroupRequestLifecycleHooks& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string notificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline CreateScalingGroupRequestLifecycleHooks& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationMetadata Field Functions 
    bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
    void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
    inline string notificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
    inline CreateScalingGroupRequestLifecycleHooks& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


  protected:
    // The action that Auto Scaling performs when the lifecycle hook times out. Valid values:
    // 
    // *   CONTINUE: Auto Scaling continues to respond to the scaling request.
    // *   ABANDON: Auto Scaling releases ECS instances that are created during scale-out events, or removes ECS instances from the scaling group during scale-in events.
    // 
    // If multiple lifecycle hooks in the scaling group are triggered during scale-in events, and you set DefaultResult to ABANDON for one of the lifecycle hooks, Auto Scaling immediately performs the action after the lifecycle hook whose DefaultResult is set to ABANDON times out. In this case, other lifecycle hooks time out ahead of schedule. In other cases, Auto Scaling performs the action only after all lifecycle hooks time out. The action that Auto Scaling performs is determined by the value of DefaultResult that you specify for the lifecycle hook that most recently times out.
    // 
    // Default value: CONTINUE.
    std::shared_ptr<string> defaultResult_ = nullptr;
    // The period of time before the lifecycle hook times out. When the lifecycle hook times out, Auto Scaling performs the action that is specified by DefaultResult. Valid values: 30 to 21600. Unit: seconds.
    // 
    // After you create a lifecycle hook, you can call the RecordLifecycleActionHeartbeat operation to extend the timeout period of the lifecycle hook. You can also call the CompleteLifecycleAction operation to end the timeout period of the lifecycle hook ahead of schedule.
    // 
    // Default value: 600.
    std::shared_ptr<int32_t> heartbeatTimeout_ = nullptr;
    // The name of the lifecycle hook. After you specify this parameter, you cannot change the name of the lifecycle hook. If you do not specify this parameter, the name of the lifecycle hook is the same as the ID of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookName_ = nullptr;
    // The type of the scaling activity to which you want to apply the lifecycle hook. Valid values:
    // 
    // *   SCALE_OUT
    // *   SCALE_IN
    // 
    // >  If you specify lifecycle hooks for the scaling group, you must specify LifecycleTransition. Other parameters are optional.
    std::shared_ptr<string> lifecycleTransition_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the notification recipient party. You can specify a Simple Message Queue (SMQ, formerly MNS) topic or queue as the recipient party. The value is in the acs:ess:{region}:{account-id}:{resource-relative-id} format.
    // 
    // *   region: the region ID of the scaling group
    // *   account-id: the ID of your Alibaba Cloud account.
    // 
    // Examples:
    // 
    // *   SMQ queue: acs:ess:{region}:{account-id}:queue/{queuename}
    // *   SMQ topic: acs:ess:{region}:{account-id}:topic/{topicname}
    std::shared_ptr<string> notificationArn_ = nullptr;
    // The fixed string that you want to include in notifications. When a lifecycle hook takes effect, Auto Scaling sends a notification. The fixed string can contain up to 4,096 characters in length. When Auto Scaling sends a notification to the recipient party, it includes predefined notification metadata into the notification. This helps in managing and labeling notifications of different categories. NotificationMetadata takes effect only if you specify NotificationArn.
    std::shared_ptr<string> notificationMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
