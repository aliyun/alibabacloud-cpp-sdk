// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetQueueAttributesRequestDlqPolicy.hpp>
#include <alibabacloud/models/SetQueueAttributesRequestTenantRateLimitPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetQueueAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetQueueAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, SetQueueAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    SetQueueAttributesRequest() = default ;
    SetQueueAttributesRequest(const SetQueueAttributesRequest &) = default ;
    SetQueueAttributesRequest(SetQueueAttributesRequest &&) = default ;
    SetQueueAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetQueueAttributesRequest() = default ;
    SetQueueAttributesRequest& operator=(const SetQueueAttributesRequest &) = default ;
    SetQueueAttributesRequest& operator=(SetQueueAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delaySeconds_ != nullptr
        && this->dlqPolicy_ != nullptr && this->enableLogging_ != nullptr && this->maximumMessageSize_ != nullptr && this->messageRetentionPeriod_ != nullptr && this->pollingWaitSeconds_ != nullptr
        && this->queueName_ != nullptr && this->tenantRateLimitPolicy_ != nullptr && this->visibilityTimeout_ != nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline SetQueueAttributesRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const SetQueueAttributesRequestDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, SetQueueAttributesRequestDlqPolicy) };
    inline SetQueueAttributesRequestDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, SetQueueAttributesRequestDlqPolicy) };
    inline SetQueueAttributesRequest& setDlqPolicy(const SetQueueAttributesRequestDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline SetQueueAttributesRequest& setDlqPolicy(SetQueueAttributesRequestDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool enableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline SetQueueAttributesRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t maximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline SetQueueAttributesRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline SetQueueAttributesRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t pollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline SetQueueAttributesRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline SetQueueAttributesRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const SetQueueAttributesRequestTenantRateLimitPolicy & tenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, SetQueueAttributesRequestTenantRateLimitPolicy) };
    inline SetQueueAttributesRequestTenantRateLimitPolicy tenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, SetQueueAttributesRequestTenantRateLimitPolicy) };
    inline SetQueueAttributesRequest& setTenantRateLimitPolicy(const SetQueueAttributesRequestTenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline SetQueueAttributesRequest& setTenantRateLimitPolicy(SetQueueAttributesRequestTenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t visibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline SetQueueAttributesRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The period after which all messages sent to the queue are consumed. Valid values: 0 to 604800. Unit: seconds. Default value: 0
    std::shared_ptr<int64_t> delaySeconds_ = nullptr;
    // The dead-letter queue policy.
    std::shared_ptr<SetQueueAttributesRequestDlqPolicy> dlqPolicy_ = nullptr;
    // Specifies whether to enable the log management feature. Valid values:
    // 
    // *   true: enabled.
    // *   false: disabled. Default value: false.
    std::shared_ptr<bool> enableLogging_ = nullptr;
    // The maximum length of the message that is sent to the queue. Valid values: 1024 to 65536. Unit: bytes. Default value: 65536.
    std::shared_ptr<int64_t> maximumMessageSize_ = nullptr;
    // The maximum duration for which a message is retained in the queue. After the specified retention period ends, the message is deleted regardless of whether the message is received. Valid values: 60 to 604800. Unit: seconds. Default value: 345600.
    std::shared_ptr<int64_t> messageRetentionPeriod_ = nullptr;
    // The maximum duration for which long polling requests are held after the ReceiveMessage operation is called. Valid values: 0 to 30. Unit: seconds. Default value: 0
    std::shared_ptr<int64_t> pollingWaitSeconds_ = nullptr;
    // The name of the queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<SetQueueAttributesRequestTenantRateLimitPolicy> tenantRateLimitPolicy_ = nullptr;
    // The duration for which a message stays in the Inactive state after the message is received from the queue. Valid values: 1 to 43200. Unit: seconds. Default value: 30.
    std::shared_ptr<int64_t> visibilityTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
