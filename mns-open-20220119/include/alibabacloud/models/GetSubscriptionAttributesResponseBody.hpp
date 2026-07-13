// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetSubscriptionAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSubscriptionAttributesResponseBody() = default ;
    GetSubscriptionAttributesResponseBody(const GetSubscriptionAttributesResponseBody &) = default ;
    GetSubscriptionAttributesResponseBody(GetSubscriptionAttributesResponseBody &&) = default ;
    GetSubscriptionAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionAttributesResponseBody() = default ;
    GetSubscriptionAttributesResponseBody& operator=(const GetSubscriptionAttributesResponseBody &) = default ;
    GetSubscriptionAttributesResponseBody& operator=(GetSubscriptionAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(FilterTag, filterTag_);
        DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_TO_JSON(NotifyContentFormat, notifyContentFormat_);
        DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
        DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
        DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        DARABONBA_PTR_TO_JSON(TopicOwner, topicOwner_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(FilterTag, filterTag_);
        DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
        DARABONBA_PTR_FROM_JSON(NotifyContentFormat, notifyContentFormat_);
        DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
        DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
        DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        DARABONBA_PTR_FROM_JSON(TopicOwner, topicOwner_);
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
        shared_ptr<bool> enabled_ {};
        shared_ptr<int32_t> maxReceivesPerSecond_ {};
      };

      class DlqPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DlqPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, DlqPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
        && this->enabled_ == nullptr; };
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


      protected:
        // The target queue to which dead-letter messages are delivered.
        shared_ptr<string> deadLetterTargetQueue_ {};
        // Indicates whether dead-letter message delivery is enabled.
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dlqPolicy_ == nullptr && this->endpoint_ == nullptr && this->filterTag_ == nullptr && this->lastModifyTime_ == nullptr && this->notifyContentFormat_ == nullptr
        && this->notifyStrategy_ == nullptr && this->subscriptionName_ == nullptr && this->tenantRateLimitPolicy_ == nullptr && this->topicName_ == nullptr && this->topicOwner_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dlqPolicy Field Functions 
      bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
      void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
      inline const Data::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, Data::DlqPolicy) };
      inline Data::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, Data::DlqPolicy) };
      inline Data& setDlqPolicy(const Data::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
      inline Data& setDlqPolicy(Data::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // filterTag Field Functions 
      bool hasFilterTag() const { return this->filterTag_ != nullptr;};
      void deleteFilterTag() { this->filterTag_ = nullptr;};
      inline string getFilterTag() const { DARABONBA_PTR_GET_DEFAULT(filterTag_, "") };
      inline Data& setFilterTag(string filterTag) { DARABONBA_PTR_SET_VALUE(filterTag_, filterTag) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline int64_t getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
      inline Data& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // notifyContentFormat Field Functions 
      bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
      void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
      inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
      inline Data& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


      // notifyStrategy Field Functions 
      bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
      void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
      inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
      inline Data& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


      // subscriptionName Field Functions 
      bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
      void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
      inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
      inline Data& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


      // tenantRateLimitPolicy Field Functions 
      bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
      void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
      inline const Data::TenantRateLimitPolicy & getTenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, Data::TenantRateLimitPolicy) };
      inline Data::TenantRateLimitPolicy getTenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, Data::TenantRateLimitPolicy) };
      inline Data& setTenantRateLimitPolicy(const Data::TenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
      inline Data& setTenantRateLimitPolicy(Data::TenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // topicOwner Field Functions 
      bool hasTopicOwner() const { return this->topicOwner_ != nullptr;};
      void deleteTopicOwner() { this->topicOwner_ = nullptr;};
      inline string getTopicOwner() const { DARABONBA_PTR_GET_DEFAULT(topicOwner_, "") };
      inline Data& setTopicOwner(string topicOwner) { DARABONBA_PTR_SET_VALUE(topicOwner_, topicOwner) };


    protected:
      // The time when the subscription was created. The value is a UNIX timestamp that represents the number of seconds that have elapsed since 00:00:00 on January 1, 1970.
      shared_ptr<int64_t> createTime_ {};
      // The dead-letter queue policy.
      shared_ptr<Data::DlqPolicy> dlqPolicy_ {};
      // The endpoint of the subscription.
      shared_ptr<string> endpoint_ {};
      // The tag used for message filtering. Only messages that have a matching tag are pushed.
      shared_ptr<string> filterTag_ {};
      // The time when the subscription properties were last modified. The value is a UNIX timestamp that represents the number of seconds that have elapsed since 00:00:00 on January 1, 1970.
      shared_ptr<int64_t> lastModifyTime_ {};
      // The format of the message content that is pushed to an endpoint.
      // Valid values:
      // 
      // - XML
      // 
      // - JSON
      // 
      // - SIMPLIFIED
      shared_ptr<string> notifyContentFormat_ {};
      // The retry policy that is used when a message fails to be pushed to an endpoint. Valid values:
      // 
      // - BACKOFF_RETRY: backoff retry.
      // 
      // - EXPONENTIAL_DECAY_RETRY: exponential decay retry.
      shared_ptr<string> notifyStrategy_ {};
      // The name of the subscription.
      shared_ptr<string> subscriptionName_ {};
      shared_ptr<Data::TenantRateLimitPolicy> tenantRateLimitPolicy_ {};
      // The name of the topic to which the subscription belongs.
      shared_ptr<string> topicName_ {};
      // The AccountId of the owner of the topic to which the subscription belongs.
      shared_ptr<string> topicOwner_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetSubscriptionAttributesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSubscriptionAttributesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSubscriptionAttributesResponseBody::Data) };
    inline GetSubscriptionAttributesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSubscriptionAttributesResponseBody::Data) };
    inline GetSubscriptionAttributesResponseBody& setData(const GetSubscriptionAttributesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSubscriptionAttributesResponseBody& setData(GetSubscriptionAttributesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubscriptionAttributesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscriptionAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSubscriptionAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSubscriptionAttributesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<GetSubscriptionAttributesResponseBody::Data> data_ {};
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
