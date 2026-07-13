// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
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
  class CreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
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
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
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
    class TenantRateLimitPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantRateLimitPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
      };
      friend void from_json(const Darabonba::Json& j, TenantRateLimitPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
      };
      TenantRateLimitPolicy() = default ;
      TenantRateLimitPolicy(const TenantRateLimitPolicy &) = default ;
      TenantRateLimitPolicy(TenantRateLimitPolicy &&) = default ;
      TenantRateLimitPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantRateLimitPolicy() = default ;
      TenantRateLimitPolicy& operator=(const TenantRateLimitPolicy &) = default ;
      TenantRateLimitPolicy& operator=(TenantRateLimitPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->maxReceivesPerSecond_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline TenantRateLimitPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // maxReceivesPerSecond Field Functions 
      bool hasMaxReceivesPerSecond() const { return this->maxReceivesPerSecond_ != nullptr;};
      void deleteMaxReceivesPerSecond() { this->maxReceivesPerSecond_ = nullptr;};
      inline int32_t getMaxReceivesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxReceivesPerSecond_, 0) };
      inline TenantRateLimitPolicy& setMaxReceivesPerSecond(int32_t maxReceivesPerSecond) { DARABONBA_PTR_SET_VALUE(maxReceivesPerSecond_, maxReceivesPerSecond) };


    protected:
      // Specifies whether to enable rate limiting. Valid values:
      // 
      // - true
      // - false
      shared_ptr<bool> enabled_ {};
      // The maximum number of receives per second.
      shared_ptr<int32_t> maxReceivesPerSecond_ {};
    };

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

    class DlqPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DlqPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MaxReceiveCount, maxReceiveCount_);
      };
      friend void from_json(const Darabonba::Json& j, DlqPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MaxReceiveCount, maxReceiveCount_);
      };
      DlqPolicy() = default ;
      DlqPolicy(const DlqPolicy &) = default ;
      DlqPolicy(DlqPolicy &&) = default ;
      DlqPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DlqPolicy() = default ;
      DlqPolicy& operator=(const DlqPolicy &) = default ;
      DlqPolicy& operator=(DlqPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deadLetterTargetQueue_ == nullptr
        && this->enabled_ == nullptr && this->maxReceiveCount_ == nullptr; };
      // deadLetterTargetQueue Field Functions 
      bool hasDeadLetterTargetQueue() const { return this->deadLetterTargetQueue_ != nullptr;};
      void deleteDeadLetterTargetQueue() { this->deadLetterTargetQueue_ = nullptr;};
      inline string getDeadLetterTargetQueue() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetQueue_, "") };
      inline DlqPolicy& setDeadLetterTargetQueue(string deadLetterTargetQueue) { DARABONBA_PTR_SET_VALUE(deadLetterTargetQueue_, deadLetterTargetQueue) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DlqPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // maxReceiveCount Field Functions 
      bool hasMaxReceiveCount() const { return this->maxReceiveCount_ != nullptr;};
      void deleteMaxReceiveCount() { this->maxReceiveCount_ = nullptr;};
      inline int32_t getMaxReceiveCount() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveCount_, 0) };
      inline DlqPolicy& setMaxReceiveCount(int32_t maxReceiveCount) { DARABONBA_PTR_SET_VALUE(maxReceiveCount_, maxReceiveCount) };


    protected:
      // The target queue for dead-letter message delivery.
      shared_ptr<string> deadLetterTargetQueue_ {};
      // Specifies whether to enable dead-letter message delivery.
      shared_ptr<bool> enabled_ {};
      // The maximum number of times a message can be delivered.
      shared_ptr<int32_t> maxReceiveCount_ {};
    };

    virtual bool empty() const override { return this->delaySeconds_ == nullptr
        && this->dlqPolicy_ == nullptr && this->enableLogging_ == nullptr && this->enableSSE_ == nullptr && this->kmsKeyId_ == nullptr && this->maximumMessageSize_ == nullptr
        && this->messageRetentionPeriod_ == nullptr && this->pollingWaitSeconds_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr && this->sseAlgorithm_ == nullptr
        && this->sseType_ == nullptr && this->tag_ == nullptr && this->tenantRateLimitPolicy_ == nullptr && this->visibilityTimeout_ == nullptr; };
    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline CreateQueueRequest& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const CreateQueueRequest::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, CreateQueueRequest::DlqPolicy) };
    inline CreateQueueRequest::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, CreateQueueRequest::DlqPolicy) };
    inline CreateQueueRequest& setDlqPolicy(const CreateQueueRequest::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline CreateQueueRequest& setDlqPolicy(CreateQueueRequest::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // enableLogging Field Functions 
    bool hasEnableLogging() const { return this->enableLogging_ != nullptr;};
    void deleteEnableLogging() { this->enableLogging_ = nullptr;};
    inline bool getEnableLogging() const { DARABONBA_PTR_GET_DEFAULT(enableLogging_, false) };
    inline CreateQueueRequest& setEnableLogging(bool enableLogging) { DARABONBA_PTR_SET_VALUE(enableLogging_, enableLogging) };


    // enableSSE Field Functions 
    bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
    void deleteEnableSSE() { this->enableSSE_ = nullptr;};
    inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
    inline CreateQueueRequest& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateQueueRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t getMaximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline CreateQueueRequest& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t getMessageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline CreateQueueRequest& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t getPollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline CreateQueueRequest& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline CreateQueueRequest& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // sseAlgorithm Field Functions 
    bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
    void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
    inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
    inline CreateQueueRequest& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


    // sseType Field Functions 
    bool hasSseType() const { return this->sseType_ != nullptr;};
    void deleteSseType() { this->sseType_ = nullptr;};
    inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
    inline CreateQueueRequest& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateQueueRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateQueueRequest::Tag>) };
    inline vector<CreateQueueRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateQueueRequest::Tag>) };
    inline CreateQueueRequest& setTag(const vector<CreateQueueRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateQueueRequest& setTag(vector<CreateQueueRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const CreateQueueRequest::TenantRateLimitPolicy & getTenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, CreateQueueRequest::TenantRateLimitPolicy) };
    inline CreateQueueRequest::TenantRateLimitPolicy getTenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, CreateQueueRequest::TenantRateLimitPolicy) };
    inline CreateQueueRequest& setTenantRateLimitPolicy(const CreateQueueRequest::TenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline CreateQueueRequest& setTenantRateLimitPolicy(CreateQueueRequest::TenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t getVisibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline CreateQueueRequest& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The delay period for all messages sent to the queue. A message sent to the queue can be consumed only after the delay period specified by this parameter elapses. Unit: seconds.
    // 
    // Valid values: 0 to 604800.
    // 
    // Default value: 0.
    shared_ptr<int64_t> delaySeconds_ {};
    // The dead-letter policy.
    shared_ptr<CreateQueueRequest::DlqPolicy> dlqPolicy_ {};
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
    shared_ptr<vector<CreateQueueRequest::Tag>> tag_ {};
    // The rate limiting policy.
    shared_ptr<CreateQueueRequest::TenantRateLimitPolicy> tenantRateLimitPolicy_ {};
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
