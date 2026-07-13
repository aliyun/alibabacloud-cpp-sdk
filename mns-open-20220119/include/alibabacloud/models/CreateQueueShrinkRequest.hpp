// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
      DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_TO_JSON(SseType, sseType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(EnableLogging, enableLogging_);
      DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
      DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
      DARABONBA_PTR_FROM_JSON(SseType, sseType_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->delaySeconds_ == nullptr
        && this->dlqPolicyShrink_ == nullptr && this->enableLogging_ == nullptr && this->enableSSE_ == nullptr && this->kmsKeyId_ == nullptr && this->maximumMessageSize_ == nullptr
        && this->messageRetentionPeriod_ == nullptr && this->pollingWaitSeconds_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr && this->sseAlgorithm_ == nullptr
        && this->sseType_ == nullptr && this->tag_ == nullptr && this->tenantRateLimitPolicyShrink_ == nullptr && this->visibilityTimeout_ == nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline CreateQueueShrinkRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string getDlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline CreateQueueShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool getEnableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline CreateQueueShrinkRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // enableSSE Field Functions 
    bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
    void deleteEnableSSE() { this->enableSSE_ = nullptr;};
    inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
    inline CreateQueueShrinkRequest& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateQueueShrinkRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t getMaximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline CreateQueueShrinkRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t getMessageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline CreateQueueShrinkRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t getPollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline CreateQueueShrinkRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueShrinkRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline CreateQueueShrinkRequest& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // sseAlgorithm Field Functions 
    bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
    void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
    inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
    inline CreateQueueShrinkRequest& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


    // sseType Field Functions 
    bool hasSseType() const { return this->sseType_ != nullptr;};
    void deleteSseType() { this->sseType_ = nullptr;};
    inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
    inline CreateQueueShrinkRequest& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateQueueShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateQueueShrinkRequest::Tag>) };
    inline vector<CreateQueueShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateQueueShrinkRequest::Tag>) };
    inline CreateQueueShrinkRequest& setTag(const vector<CreateQueueShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateQueueShrinkRequest& setTag(vector<CreateQueueShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string getTenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline CreateQueueShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t getVisibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline CreateQueueShrinkRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The delay period for all messages sent to the queue. A message sent to the queue can be consumed only after the delay period specified by this parameter elapses. Unit: seconds.
    // 
    // Valid values: 0 to 604800.
    // 
    // Default value: 0.
    shared_ptr<int64_t> delaySeconds_ {};
    // The dead-letter policy.
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
    // The maximum size of a message body that can be sent to the queue. Unit: bytes.
    // 
    // Valid values: 1024 to 65536.
    // 
    // Default value: 65536.
    shared_ptr<int64_t> maximumMessageSize_ {};
    // The maximum duration for which a message is retained in the queue. After the specified duration elapses from the time the message is sent to the queue, the message is deleted regardless of whether it has been consumed. Unit: seconds.
    // 
    // Valid values: 60 to 604800.
    // 
    // Default value: 345600.
    shared_ptr<int64_t> messageRetentionPeriod_ {};
    // The maximum wait time for a ReceiveMessage request when the queue is empty. Unit: seconds.
    // 
    // Valid values: 0 to 30.
    // 
    // Default value: 0.
    shared_ptr<int64_t> pollingWaitSeconds_ {};
    // The name of the queue.
    // 
    // This parameter is required.
    shared_ptr<string> queueName_ {};
    // The type of the queue. Valid values:
    //    * normal: standard queue.
    //    * fifo: FIFO queue.
    shared_ptr<string> queueType_ {};
    shared_ptr<string> sseAlgorithm_ {};
    shared_ptr<string> sseType_ {};
    // The list of resource tags.
    shared_ptr<vector<CreateQueueShrinkRequest::Tag>> tag_ {};
    // The rate limiting policy.
    shared_ptr<string> tenantRateLimitPolicyShrink_ {};
    // The duration for which a consumed message stays in the Inactive state after it is changed from the Active state. Unit: seconds.
    // 
    // Valid values: 1 to 43200.
    // 
    // Default value: 30.
    shared_ptr<int64_t> visibilityTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
