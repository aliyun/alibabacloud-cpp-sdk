// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateQueueRequestDlqPolicy.hpp>
#include <vector>
#include <alibabacloud/models/CreateQueueRequestTag.hpp>
#include <alibabacloud/models/CreateQueueRequestTenantRateLimitPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class CreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    CreateQueueRequest() = default ;
    CreateQueueRequest(const CreateQueueRequest &) = default ;
    CreateQueueRequest(CreateQueueRequest &&) = default ;
    CreateQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueueRequest() = default ;
    CreateQueueRequest& operator=(const CreateQueueRequest &) = default ;
    CreateQueueRequest& operator=(CreateQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delaySeconds_ != nullptr
        && this->dlqPolicy_ != nullptr && this->enableLogging_ != nullptr && this->maximumMessageSize_ != nullptr && this->messageRetentionPeriod_ != nullptr && this->pollingWaitSeconds_ != nullptr
        && this->queueName_ != nullptr && this->tag_ != nullptr && this->tenantRateLimitPolicy_ != nullptr && this->visibilityTimeout_ != nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline CreateQueueRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const CreateQueueRequestDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, CreateQueueRequestDlqPolicy) };
    inline CreateQueueRequestDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, CreateQueueRequestDlqPolicy) };
    inline CreateQueueRequest& setDlqPolicy(const CreateQueueRequestDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline CreateQueueRequest& setDlqPolicy(CreateQueueRequestDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool enableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline CreateQueueRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t maximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline CreateQueueRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline CreateQueueRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t pollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline CreateQueueRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateQueueRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateQueueRequestTag>) };
    inline vector<CreateQueueRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateQueueRequestTag>) };
    inline CreateQueueRequest& setTag(const vector<CreateQueueRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateQueueRequest& setTag(vector<CreateQueueRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const CreateQueueRequestTenantRateLimitPolicy & tenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, CreateQueueRequestTenantRateLimitPolicy) };
    inline CreateQueueRequestTenantRateLimitPolicy tenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, CreateQueueRequestTenantRateLimitPolicy) };
    inline CreateQueueRequest& setTenantRateLimitPolicy(const CreateQueueRequestTenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline CreateQueueRequest& setTenantRateLimitPolicy(CreateQueueRequestTenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t visibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline CreateQueueRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The period after which all messages sent to the queue are consumed. Valid values: 0 to 604800. Unit: seconds. Default value: 0
    std::shared_ptr<int64_t> delaySeconds_ = nullptr;
    // The dead-letter queue policy.
    std::shared_ptr<CreateQueueRequestDlqPolicy> dlqPolicy_ = nullptr;
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
    std::shared_ptr<vector<CreateQueueRequestTag>> tag_ = nullptr;
    std::shared_ptr<CreateQueueRequestTenantRateLimitPolicy> tenantRateLimitPolicy_ = nullptr;
    // The duration for which a message stays in the Inactive state after the message is received from the queue. Valid values: 1 to 43200. Unit: seconds. Default value: 30.
    std::shared_ptr<int64_t> visibilityTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
