// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateQueueShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class CreateQueueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    CreateQueueShrinkRequest() = default ;
    CreateQueueShrinkRequest(const CreateQueueShrinkRequest &) = default ;
    CreateQueueShrinkRequest(CreateQueueShrinkRequest &&) = default ;
    CreateQueueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueueShrinkRequest() = default ;
    CreateQueueShrinkRequest& operator=(const CreateQueueShrinkRequest &) = default ;
    CreateQueueShrinkRequest& operator=(CreateQueueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delaySeconds_ != nullptr
        && this->dlqPolicyShrink_ != nullptr && this->enableLogging_ != nullptr && this->maximumMessageSize_ != nullptr && this->messageRetentionPeriod_ != nullptr && this->pollingWaitSeconds_ != nullptr
        && this->queueName_ != nullptr && this->tag_ != nullptr && this->tenantRateLimitPolicyShrink_ != nullptr && this->visibilityTimeout_ != nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline CreateQueueShrinkRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string dlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline CreateQueueShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool enableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline CreateQueueShrinkRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t maximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline CreateQueueShrinkRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline CreateQueueShrinkRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t pollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline CreateQueueShrinkRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateQueueShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateQueueShrinkRequestTag>) };
    inline vector<CreateQueueShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateQueueShrinkRequestTag>) };
    inline CreateQueueShrinkRequest& setTag(const vector<CreateQueueShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateQueueShrinkRequest& setTag(vector<CreateQueueShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string tenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline CreateQueueShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t visibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline CreateQueueShrinkRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The period after which all messages sent to the queue are consumed. Valid values: 0 to 604800. Unit: seconds. Default value: 0
    std::shared_ptr<int64_t> delaySeconds_ = nullptr;
    // The dead-letter queue policy.
    std::shared_ptr<string> dlqPolicyShrink_ = nullptr;
    // Specifies whether to enable the log management feature. Valid values:
    // 
    // *   true: enabled.
    // *   false: disabled.
    // 
    // Default value: false.
    std::shared_ptr<bool> enableLogging_ = nullptr;
    // The maximum length of the message that is sent to the queue. Valid values: 1024 to 65536. Unit: bytes. Default value: 65536.
    std::shared_ptr<int64_t> maximumMessageSize_ = nullptr;
    // The maximum duration for which a message is retained in the queue. After the specified retention period ends, the message is deleted regardless of whether the message is consumed. Valid values: 60 to 604800. Unit: seconds. Default value: 345600.
    std::shared_ptr<int64_t> messageRetentionPeriod_ = nullptr;
    // The maximum duration for which long polling requests are held after the ReceiveMessage operation is called. Valid values: 0 to 30. Unit: seconds. Default value: 0
    std::shared_ptr<int64_t> pollingWaitSeconds_ = nullptr;
    // The name of the queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateQueueShrinkRequestTag>> tag_ = nullptr;
    std::shared_ptr<string> tenantRateLimitPolicyShrink_ = nullptr;
    // The duration for which a message stays in the Inactive state after the message is received from the queue. Valid values: 1 to 43200. Unit: seconds. Default value: 30.
    std::shared_ptr<int64_t> visibilityTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
