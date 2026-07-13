// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETQUEUEATTRIBUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetQueueAttributesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetQueueAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_TO_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_TO_JSON(SseType, sseType_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, SetQueueAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SseType, sseType_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    SetQueueAttributesShrinkRequest() = default ;
    SetQueueAttributesShrinkRequest(const SetQueueAttributesShrinkRequest &) = default ;
    SetQueueAttributesShrinkRequest(SetQueueAttributesShrinkRequest &&) = default ;
    SetQueueAttributesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetQueueAttributesShrinkRequest() = default ;
    SetQueueAttributesShrinkRequest& operator=(const SetQueueAttributesShrinkRequest &) = default ;
    SetQueueAttributesShrinkRequest& operator=(SetQueueAttributesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delaySeconds_ == nullptr
        && this->dlqPolicyShrink_ == nullptr && this->enableLogging_ == nullptr && this->enableSSE_ == nullptr && this->kmsKeyId_ == nullptr && this->maximumMessageSize_ == nullptr
        && this->messageRetentionPeriod_ == nullptr && this->pollingWaitSeconds_ == nullptr && this->queueName_ == nullptr && this->sseAlgorithm_ == nullptr && this->sseType_ == nullptr
        && this->tenantRateLimitPolicyShrink_ == nullptr && this->visibilityTimeout_ == nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline SetQueueAttributesShrinkRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string getDlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline SetQueueAttributesShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool getEnableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline SetQueueAttributesShrinkRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // enableSSE Field Functions 
    bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
    void deleteEnableSSE() { this->enableSSE_ = nullptr;};
    inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
    inline SetQueueAttributesShrinkRequest& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline SetQueueAttributesShrinkRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t getMaximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline SetQueueAttributesShrinkRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t getMessageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline SetQueueAttributesShrinkRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t getPollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline SetQueueAttributesShrinkRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline SetQueueAttributesShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // sseAlgorithm Field Functions 
    bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
    void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
    inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
    inline SetQueueAttributesShrinkRequest& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


    // sseType Field Functions 
    bool hasSseType() const { return this->sseType_ != nullptr;};
    void deleteSseType() { this->sseType_ = nullptr;};
    inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
    inline SetQueueAttributesShrinkRequest& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string getTenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline SetQueueAttributesShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t getVisibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline SetQueueAttributesShrinkRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The delay time for all messages sent to this queue. Messages sent to the queue can be consumed only after the delay time specified by this parameter has elapsed.
    // 
    // Valid values: 0 to 604800. Unit: seconds.
    // 
    // Default value: 0.
    shared_ptr<int64_t> delaySeconds_ {};
    // The dead-letter queue policy.
    shared_ptr<string> dlqPolicyShrink_ {};
    // Specifies whether to enable the log management feature. Valid values:
    // 
    // - true: Enabled.
    // 
    // - false: Disabled.
    // 
    // Default value: false.
    shared_ptr<bool> enableLogging_ {};
    shared_ptr<bool> enableSSE_ {};
    shared_ptr<string> kmsKeyId_ {};
    // The maximum length of the message body sent to this queue.
    // 
    // Valid values: 1024 to 65536. Unit: bytes.
    // 
    // Default value: 65536.
    shared_ptr<int64_t> maximumMessageSize_ {};
    // The maximum duration for which a message is retained in this queue. After the time specified by this parameter has elapsed since the message was sent to the queue, the message is deleted regardless of whether it has been consumed.
    // 
    // Valid values: 60 to 604800. Unit: seconds.
    // 
    // Default value: 345600.
    shared_ptr<int64_t> messageRetentionPeriod_ {};
    // The maximum wait time for a ReceiveMessage request on this queue when no messages are available in the queue.
    // 
    // Valid values: 0 to 30. Unit: seconds.
    // 
    // Default value: 0.
    shared_ptr<int64_t> pollingWaitSeconds_ {};
    // The name of the queue.
    // 
    // This parameter is required.
    shared_ptr<string> queueName_ {};
    shared_ptr<string> sseAlgorithm_ {};
    shared_ptr<string> sseType_ {};
    shared_ptr<string> tenantRateLimitPolicyShrink_ {};
    // The duration for which a message stays in the Inactive state after it is consumed from the queue and changes from the Active state to the Inactive state.
    // 
    // Valid values: 1 to 43200. Unit: seconds.
    // 
    // Default value: 30.
    shared_ptr<int64_t> visibilityTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
