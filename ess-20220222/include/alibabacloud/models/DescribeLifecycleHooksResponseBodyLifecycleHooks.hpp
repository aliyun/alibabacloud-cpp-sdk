// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODYLIFECYCLEHOOKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODYLIFECYCLEHOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleHooksResponseBodyLifecycleHooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleHooksResponseBodyLifecycleHooks& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_TO_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(LifecycleHookStatus, lifecycleHookStatus_);
      DARABONBA_PTR_TO_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_TO_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_TO_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleHooksResponseBodyLifecycleHooks& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResult, defaultResult_);
      DARABONBA_PTR_FROM_JSON(HeartbeatTimeout, heartbeatTimeout_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookStatus, lifecycleHookStatus_);
      DARABONBA_PTR_FROM_JSON(LifecycleTransition, lifecycleTransition_);
      DARABONBA_PTR_FROM_JSON(NotificationArn, notificationArn_);
      DARABONBA_PTR_FROM_JSON(NotificationMetadata, notificationMetadata_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeLifecycleHooksResponseBodyLifecycleHooks() = default ;
    DescribeLifecycleHooksResponseBodyLifecycleHooks(const DescribeLifecycleHooksResponseBodyLifecycleHooks &) = default ;
    DescribeLifecycleHooksResponseBodyLifecycleHooks(DescribeLifecycleHooksResponseBodyLifecycleHooks &&) = default ;
    DescribeLifecycleHooksResponseBodyLifecycleHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleHooksResponseBodyLifecycleHooks() = default ;
    DescribeLifecycleHooksResponseBodyLifecycleHooks& operator=(const DescribeLifecycleHooksResponseBodyLifecycleHooks &) = default ;
    DescribeLifecycleHooksResponseBodyLifecycleHooks& operator=(DescribeLifecycleHooksResponseBodyLifecycleHooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResult_ == nullptr
        && return this->heartbeatTimeout_ == nullptr && return this->lifecycleHookId_ == nullptr && return this->lifecycleHookName_ == nullptr && return this->lifecycleHookStatus_ == nullptr && return this->lifecycleTransition_ == nullptr
        && return this->notificationArn_ == nullptr && return this->notificationMetadata_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // defaultResult Field Functions 
    bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
    void deleteDefaultResult() { this->defaultResult_ = nullptr;};
    inline string defaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


    // heartbeatTimeout Field Functions 
    bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
    void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
    inline int32_t heartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string lifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string lifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // lifecycleHookStatus Field Functions 
    bool hasLifecycleHookStatus() const { return this->lifecycleHookStatus_ != nullptr;};
    void deleteLifecycleHookStatus() { this->lifecycleHookStatus_ = nullptr;};
    inline string lifecycleHookStatus() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookStatus_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setLifecycleHookStatus(string lifecycleHookStatus) { DARABONBA_PTR_SET_VALUE(lifecycleHookStatus_, lifecycleHookStatus) };


    // lifecycleTransition Field Functions 
    bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
    void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
    inline string lifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


    // notificationArn Field Functions 
    bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
    void deleteNotificationArn() { this->notificationArn_ = nullptr;};
    inline string notificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


    // notificationMetadata Field Functions 
    bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
    void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
    inline string notificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeLifecycleHooksResponseBodyLifecycleHooks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The next action that is performed after the lifecycle hook times out.
    std::shared_ptr<string> defaultResult_ = nullptr;
    // The period of time before the lifecycle hook times out. When the lifecycle hook times out, Auto Scaling performs the action that is specified by DefaultResult.
    std::shared_ptr<int32_t> heartbeatTimeout_ = nullptr;
    // The ID of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookId_ = nullptr;
    // The name of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookName_ = nullptr;
    // The status of the lifecycle hook. Valid values:
    // 
    // *   Active: The lifecycle hook is enabled.
    // *   InActive: The lifecycle hook is disabled.
    std::shared_ptr<string> lifecycleHookStatus_ = nullptr;
    // The type of the scaling activity to which the lifecycle hook applies.
    std::shared_ptr<string> lifecycleTransition_ = nullptr;
    // The ARN of the notification recipient when the lifecycle hook takes effect. The value of this parameter must be in one of the following formats:
    // 
    // *   If you do not create a notification rule, specify the value in the `acs:ess:{region-id}:{account-id}:null/null` format.
    // *   If you specify a Simple Message Queue (SMQ, formerly MNS) queue as the notification recipient, specify the value in the `acs:mns:{region-id}:{account-id}:queue/{queuename}` format.
    // *   If you specify an SMQ as the notification recipient, specify the value in the `acs:mns:{region-id}:{account-id}:topic/{topicname}` format.
    // *   If you specify a CloudOps Orchestration Service (OOS) template as the notification recipient, specify the value in the `acs:oos:{region-id}:{account-id}:template/{templatename}` format.
    // *   If you specify an event bus as the notification recipient, specify the value in the `acs:eventbridge:{region-id}:{account-id}:eventbus/default` format.
    // 
    // The variables in the preceding value formats have the following meanings:
    // 
    // *   region-id: the region ID of your scaling group.
    // *   account-id: the ID of your Alibaba Cloud account.
    // *   queuename: the name of the SMQ queue.
    // *   topicname: the name of the SMQ topic.
    // *   templatename: the name of the OOS template.
    std::shared_ptr<string> notificationArn_ = nullptr;
    // The fixed string that is included in a notification that Auto Scaling sends when the lifecycle hook takes effect.
    std::shared_ptr<string> notificationMetadata_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
