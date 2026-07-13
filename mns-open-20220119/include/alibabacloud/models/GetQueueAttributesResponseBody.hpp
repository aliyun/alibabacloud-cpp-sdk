// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEATTRIBUTESRESPONSEBODY_HPP_
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
  class GetQueueAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueueAttributesResponseBody() = default ;
    GetQueueAttributesResponseBody(const GetQueueAttributesResponseBody &) = default ;
    GetQueueAttributesResponseBody(GetQueueAttributesResponseBody &&) = default ;
    GetQueueAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueAttributesResponseBody() = default ;
    GetQueueAttributesResponseBody& operator=(const GetQueueAttributesResponseBody &) = default ;
    GetQueueAttributesResponseBody& operator=(GetQueueAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveMessages, activeMessages_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DelayMessages, delayMessages_);
        DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
        DARABONBA_PTR_TO_JSON(EnableSSE, enableSSE_);
        DARABONBA_PTR_TO_JSON(EncryptionEnabled, encryptionEnabled_);
        DARABONBA_PTR_TO_JSON(InactiveMessages, inactiveMessages_);
        DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(LoggingEnabled, loggingEnabled_);
        DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
        DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
        DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(QueueType, queueType_);
        DARABONBA_PTR_TO_JSON(SseAlgorithm, sseAlgorithm_);
        DARABONBA_PTR_TO_JSON(SseType, sseType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
        DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveMessages, activeMessages_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DelayMessages, delayMessages_);
        DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
        DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
        DARABONBA_PTR_FROM_JSON(EnableSSE, enableSSE_);
        DARABONBA_PTR_FROM_JSON(EncryptionEnabled, encryptionEnabled_);
        DARABONBA_PTR_FROM_JSON(InactiveMessages, inactiveMessages_);
        DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(LoggingEnabled, loggingEnabled_);
        DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
        DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
        DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
        DARABONBA_PTR_FROM_JSON(SseAlgorithm, sseAlgorithm_);
        DARABONBA_PTR_FROM_JSON(SseType, sseType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
        DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // Specifies whether rate limiting is enabled. Valid values:
        // - true
        // - false
        shared_ptr<bool> enabled_ {};
        // The maximum number of receives per second.
        shared_ptr<int32_t> maxReceivesPerSecond_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
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
        inline string getMaxReceiveCount() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveCount_, "") };
        inline DlqPolicy& setMaxReceiveCount(string maxReceiveCount) { DARABONBA_PTR_SET_VALUE(maxReceiveCount_, maxReceiveCount) };


      protected:
        // The target queue for dead-letter message delivery.
        shared_ptr<string> deadLetterTargetQueue_ {};
        // Indicates whether dead-letter message delivery is enabled.
        shared_ptr<bool> enabled_ {};
        // The maximum number of times a message can be delivered.
        shared_ptr<string> maxReceiveCount_ {};
      };

      virtual bool empty() const override { return this->activeMessages_ == nullptr
        && this->createTime_ == nullptr && this->delayMessages_ == nullptr && this->delaySeconds_ == nullptr && this->dlqPolicy_ == nullptr && this->enableSSE_ == nullptr
        && this->encryptionEnabled_ == nullptr && this->inactiveMessages_ == nullptr && this->kmsKeyId_ == nullptr && this->lastModifyTime_ == nullptr && this->loggingEnabled_ == nullptr
        && this->maximumMessageSize_ == nullptr && this->messageRetentionPeriod_ == nullptr && this->pollingWaitSeconds_ == nullptr && this->queueName_ == nullptr && this->queueType_ == nullptr
        && this->sseAlgorithm_ == nullptr && this->sseType_ == nullptr && this->tags_ == nullptr && this->tenantRateLimitPolicy_ == nullptr && this->visibilityTimeout_ == nullptr; };
      // activeMessages Field Functions 
      bool hasActiveMessages() const { return this->activeMessages_ != nullptr;};
      void deleteActiveMessages() { this->activeMessages_ = nullptr;};
      inline int64_t getActiveMessages() const { DARABONBA_PTR_GET_DEFAULT(activeMessages_, 0L) };
      inline Data& setActiveMessages(int64_t activeMessages) { DARABONBA_PTR_SET_VALUE(activeMessages_, activeMessages) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // delayMessages Field Functions 
      bool hasDelayMessages() const { return this->delayMessages_ != nullptr;};
      void deleteDelayMessages() { this->delayMessages_ = nullptr;};
      inline int64_t getDelayMessages() const { DARABONBA_PTR_GET_DEFAULT(delayMessages_, 0L) };
      inline Data& setDelayMessages(int64_t delayMessages) { DARABONBA_PTR_SET_VALUE(delayMessages_, delayMessages) };


      // delaySeconds Field Functions 
      bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
      void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
      inline int64_t getDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
      inline Data& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


      // dlqPolicy Field Functions 
      bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
      void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
      inline const Data::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, Data::DlqPolicy) };
      inline Data::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, Data::DlqPolicy) };
      inline Data& setDlqPolicy(const Data::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
      inline Data& setDlqPolicy(Data::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


      // enableSSE Field Functions 
      bool hasEnableSSE() const { return this->enableSSE_ != nullptr;};
      void deleteEnableSSE() { this->enableSSE_ = nullptr;};
      inline bool getEnableSSE() const { DARABONBA_PTR_GET_DEFAULT(enableSSE_, false) };
      inline Data& setEnableSSE(bool enableSSE) { DARABONBA_PTR_SET_VALUE(enableSSE_, enableSSE) };


      // encryptionEnabled Field Functions 
      bool hasEncryptionEnabled() const { return this->encryptionEnabled_ != nullptr;};
      void deleteEncryptionEnabled() { this->encryptionEnabled_ = nullptr;};
      inline bool getEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptionEnabled_, false) };
      inline Data& setEncryptionEnabled(bool encryptionEnabled) { DARABONBA_PTR_SET_VALUE(encryptionEnabled_, encryptionEnabled) };


      // inactiveMessages Field Functions 
      bool hasInactiveMessages() const { return this->inactiveMessages_ != nullptr;};
      void deleteInactiveMessages() { this->inactiveMessages_ = nullptr;};
      inline int64_t getInactiveMessages() const { DARABONBA_PTR_GET_DEFAULT(inactiveMessages_, 0L) };
      inline Data& setInactiveMessages(int64_t inactiveMessages) { DARABONBA_PTR_SET_VALUE(inactiveMessages_, inactiveMessages) };


      // kmsKeyId Field Functions 
      bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
      void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
      inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
      inline Data& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
      inline Data& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // loggingEnabled Field Functions 
      bool hasLoggingEnabled() const { return this->loggingEnabled_ != nullptr;};
      void deleteLoggingEnabled() { this->loggingEnabled_ = nullptr;};
      inline bool getLoggingEnabled() const { DARABONBA_PTR_GET_DEFAULT(loggingEnabled_, false) };
      inline Data& setLoggingEnabled(bool loggingEnabled) { DARABONBA_PTR_SET_VALUE(loggingEnabled_, loggingEnabled) };


      // maximumMessageSize Field Functions 
      bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
      void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
      inline int64_t getMaximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
      inline Data& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


      // messageRetentionPeriod Field Functions 
      bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
      void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
      inline int64_t getMessageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
      inline Data& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


      // pollingWaitSeconds Field Functions 
      bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
      void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
      inline int64_t getPollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
      inline Data& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Data& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // queueType Field Functions 
      bool hasQueueType() const { return this->queueType_ != nullptr;};
      void deleteQueueType() { this->queueType_ = nullptr;};
      inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
      inline Data& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      // sseAlgorithm Field Functions 
      bool hasSseAlgorithm() const { return this->sseAlgorithm_ != nullptr;};
      void deleteSseAlgorithm() { this->sseAlgorithm_ = nullptr;};
      inline string getSseAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(sseAlgorithm_, "") };
      inline Data& setSseAlgorithm(string sseAlgorithm) { DARABONBA_PTR_SET_VALUE(sseAlgorithm_, sseAlgorithm) };


      // sseType Field Functions 
      bool hasSseType() const { return this->sseType_ != nullptr;};
      void deleteSseType() { this->sseType_ = nullptr;};
      inline string getSseType() const { DARABONBA_PTR_GET_DEFAULT(sseType_, "") };
      inline Data& setSseType(string sseType) { DARABONBA_PTR_SET_VALUE(sseType_, sseType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantRateLimitPolicy Field Functions 
      bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
      void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
      inline const Data::TenantRateLimitPolicy & getTenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, Data::TenantRateLimitPolicy) };
      inline Data::TenantRateLimitPolicy getTenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, Data::TenantRateLimitPolicy) };
      inline Data& setTenantRateLimitPolicy(const Data::TenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
      inline Data& setTenantRateLimitPolicy(Data::TenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


      // visibilityTimeout Field Functions 
      bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
      void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
      inline int64_t getVisibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
      inline Data& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


    protected:
      // The approximate total number of messages in the Active state in the queue.
      // 
      // <warning>This field will be deprecated and defaults to 0. Use the CloudMonitor API to retrieve this metric instead.</warning>
      shared_ptr<int64_t> activeMessages_ {};
      // The time when the queue was created.
      shared_ptr<int64_t> createTime_ {};
      // The approximate total number of messages in the Delayed state in the queue.
      // 
      // <warning>This field will be deprecated and defaults to 0. Use the CloudMonitor API to retrieve this metric instead.</warning>
      shared_ptr<int64_t> delayMessages_ {};
      // The delay period for all messages sent to the queue. Messages sent to the queue can be consumed only after the delay period specified by this parameter elapses. Unit: seconds.
      shared_ptr<int64_t> delaySeconds_ {};
      // The dead-letter queue policy.
      shared_ptr<Data::DlqPolicy> dlqPolicy_ {};
      shared_ptr<bool> enableSSE_ {};
      shared_ptr<bool> encryptionEnabled_ {};
      // The approximate total number of messages in the Inactive state in the queue.
      // 
      // <warning>This field will be deprecated and defaults to 0. Use the CloudMonitor API to retrieve this metric instead.</warning>
      shared_ptr<int64_t> inactiveMessages_ {};
      shared_ptr<string> kmsKeyId_ {};
      // The most recent time when the queue attributes were modified. The value is a UNIX timestamp representing the number of seconds elapsed since 1970-01-01 00:00:00.
      shared_ptr<int64_t> lastModifyTime_ {};
      // Indicates whether the log management feature is enabled.
      // 
      // - True: Enabled.
      // 
      // - False: Disabled.
      shared_ptr<bool> loggingEnabled_ {};
      // The maximum length of the message body sent to the queue. Unit: bytes.
      shared_ptr<int64_t> maximumMessageSize_ {};
      // The maximum duration for which a message is retained in the queue. After the period specified by this parameter elapses since the message is sent to the queue, the message is deleted regardless of whether it has been consumed. Unit: seconds.
      shared_ptr<int64_t> messageRetentionPeriod_ {};
      // The maximum wait time for a ReceiveMessage request on the queue when the queue has no messages. Unit: seconds.
      shared_ptr<int64_t> pollingWaitSeconds_ {};
      // The name of the queue.
      shared_ptr<string> queueName_ {};
      // The type of the queue. Valid values:
      //    * normal: standard queue
      //    * fifo: FIFO queue
      shared_ptr<string> queueType_ {};
      shared_ptr<string> sseAlgorithm_ {};
      shared_ptr<string> sseType_ {};
      // The list of resource tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The rate limiting policy.
      shared_ptr<Data::TenantRateLimitPolicy> tenantRateLimitPolicy_ {};
      // The duration for which a message stays in the Inactive state after it is consumed from the queue and changes from the Active state to the Inactive state.
      // Valid values: 1 to 43200. Unit: seconds.
      // Default value: 30.
      shared_ptr<int64_t> visibilityTimeout_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetQueueAttributesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQueueAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQueueAttributesResponseBody::Data) };
    inline GetQueueAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQueueAttributesResponseBody::Data) };
    inline GetQueueAttributesResponseBody& setData(const GetQueueAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueueAttributesResponseBody& setData(GetQueueAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueueAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueueAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQueueAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQueueAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetQueueAttributesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the response.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
