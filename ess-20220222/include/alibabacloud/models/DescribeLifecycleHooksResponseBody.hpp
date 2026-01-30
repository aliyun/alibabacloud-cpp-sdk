// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEHOOKSRESPONSEBODY_HPP_
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
  class DescribeLifecycleHooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleHooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleHooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleHooks, lifecycleHooks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecycleHooksResponseBody() = default ;
    DescribeLifecycleHooksResponseBody(const DescribeLifecycleHooksResponseBody &) = default ;
    DescribeLifecycleHooksResponseBody(DescribeLifecycleHooksResponseBody &&) = default ;
    DescribeLifecycleHooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleHooksResponseBody() = default ;
    DescribeLifecycleHooksResponseBody& operator=(const DescribeLifecycleHooksResponseBody &) = default ;
    DescribeLifecycleHooksResponseBody& operator=(DescribeLifecycleHooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecycleHooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleHooks& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LifecycleHooks& obj) { 
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
      LifecycleHooks() = default ;
      LifecycleHooks(const LifecycleHooks &) = default ;
      LifecycleHooks(LifecycleHooks &&) = default ;
      LifecycleHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleHooks() = default ;
      LifecycleHooks& operator=(const LifecycleHooks &) = default ;
      LifecycleHooks& operator=(LifecycleHooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultResult_ == nullptr
        && this->heartbeatTimeout_ == nullptr && this->lifecycleHookId_ == nullptr && this->lifecycleHookName_ == nullptr && this->lifecycleHookStatus_ == nullptr && this->lifecycleTransition_ == nullptr
        && this->notificationArn_ == nullptr && this->notificationMetadata_ == nullptr && this->scalingGroupId_ == nullptr; };
      // defaultResult Field Functions 
      bool hasDefaultResult() const { return this->defaultResult_ != nullptr;};
      void deleteDefaultResult() { this->defaultResult_ = nullptr;};
      inline string getDefaultResult() const { DARABONBA_PTR_GET_DEFAULT(defaultResult_, "") };
      inline LifecycleHooks& setDefaultResult(string defaultResult) { DARABONBA_PTR_SET_VALUE(defaultResult_, defaultResult) };


      // heartbeatTimeout Field Functions 
      bool hasHeartbeatTimeout() const { return this->heartbeatTimeout_ != nullptr;};
      void deleteHeartbeatTimeout() { this->heartbeatTimeout_ = nullptr;};
      inline int32_t getHeartbeatTimeout() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTimeout_, 0) };
      inline LifecycleHooks& setHeartbeatTimeout(int32_t heartbeatTimeout) { DARABONBA_PTR_SET_VALUE(heartbeatTimeout_, heartbeatTimeout) };


      // lifecycleHookId Field Functions 
      bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
      void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
      inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
      inline LifecycleHooks& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


      // lifecycleHookName Field Functions 
      bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
      void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
      inline string getLifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
      inline LifecycleHooks& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


      // lifecycleHookStatus Field Functions 
      bool hasLifecycleHookStatus() const { return this->lifecycleHookStatus_ != nullptr;};
      void deleteLifecycleHookStatus() { this->lifecycleHookStatus_ = nullptr;};
      inline string getLifecycleHookStatus() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookStatus_, "") };
      inline LifecycleHooks& setLifecycleHookStatus(string lifecycleHookStatus) { DARABONBA_PTR_SET_VALUE(lifecycleHookStatus_, lifecycleHookStatus) };


      // lifecycleTransition Field Functions 
      bool hasLifecycleTransition() const { return this->lifecycleTransition_ != nullptr;};
      void deleteLifecycleTransition() { this->lifecycleTransition_ = nullptr;};
      inline string getLifecycleTransition() const { DARABONBA_PTR_GET_DEFAULT(lifecycleTransition_, "") };
      inline LifecycleHooks& setLifecycleTransition(string lifecycleTransition) { DARABONBA_PTR_SET_VALUE(lifecycleTransition_, lifecycleTransition) };


      // notificationArn Field Functions 
      bool hasNotificationArn() const { return this->notificationArn_ != nullptr;};
      void deleteNotificationArn() { this->notificationArn_ = nullptr;};
      inline string getNotificationArn() const { DARABONBA_PTR_GET_DEFAULT(notificationArn_, "") };
      inline LifecycleHooks& setNotificationArn(string notificationArn) { DARABONBA_PTR_SET_VALUE(notificationArn_, notificationArn) };


      // notificationMetadata Field Functions 
      bool hasNotificationMetadata() const { return this->notificationMetadata_ != nullptr;};
      void deleteNotificationMetadata() { this->notificationMetadata_ = nullptr;};
      inline string getNotificationMetadata() const { DARABONBA_PTR_GET_DEFAULT(notificationMetadata_, "") };
      inline LifecycleHooks& setNotificationMetadata(string notificationMetadata) { DARABONBA_PTR_SET_VALUE(notificationMetadata_, notificationMetadata) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline LifecycleHooks& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    protected:
      // The next action that is performed after the lifecycle hook times out.
      shared_ptr<string> defaultResult_ {};
      // The period of time before the lifecycle hook times out. When the lifecycle hook times out, Auto Scaling performs the action that is specified by DefaultResult.
      shared_ptr<int32_t> heartbeatTimeout_ {};
      // The ID of the lifecycle hook.
      shared_ptr<string> lifecycleHookId_ {};
      // The name of the lifecycle hook.
      shared_ptr<string> lifecycleHookName_ {};
      // The status of the lifecycle hook. Valid values:
      // 
      // *   Active: The lifecycle hook is enabled.
      // *   InActive: The lifecycle hook is disabled.
      shared_ptr<string> lifecycleHookStatus_ {};
      // The type of the scaling activity to which the lifecycle hook applies.
      shared_ptr<string> lifecycleTransition_ {};
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
      shared_ptr<string> notificationArn_ {};
      // The fixed string that is included in a notification that Auto Scaling sends when the lifecycle hook takes effect.
      shared_ptr<string> notificationMetadata_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
    };

    virtual bool empty() const override { return this->lifecycleHooks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // lifecycleHooks Field Functions 
    bool hasLifecycleHooks() const { return this->lifecycleHooks_ != nullptr;};
    void deleteLifecycleHooks() { this->lifecycleHooks_ = nullptr;};
    inline const vector<DescribeLifecycleHooksResponseBody::LifecycleHooks> & getLifecycleHooks() const { DARABONBA_PTR_GET_CONST(lifecycleHooks_, vector<DescribeLifecycleHooksResponseBody::LifecycleHooks>) };
    inline vector<DescribeLifecycleHooksResponseBody::LifecycleHooks> getLifecycleHooks() { DARABONBA_PTR_GET(lifecycleHooks_, vector<DescribeLifecycleHooksResponseBody::LifecycleHooks>) };
    inline DescribeLifecycleHooksResponseBody& setLifecycleHooks(const vector<DescribeLifecycleHooksResponseBody::LifecycleHooks> & lifecycleHooks) { DARABONBA_PTR_SET_VALUE(lifecycleHooks_, lifecycleHooks) };
    inline DescribeLifecycleHooksResponseBody& setLifecycleHooks(vector<DescribeLifecycleHooksResponseBody::LifecycleHooks> && lifecycleHooks) { DARABONBA_PTR_SET_RVALUE(lifecycleHooks_, lifecycleHooks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLifecycleHooksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLifecycleHooksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecycleHooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecycleHooksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the lifecycle hooks.
    shared_ptr<vector<DescribeLifecycleHooksResponseBody::LifecycleHooks>> lifecycleHooks_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of lifecycle hooks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
