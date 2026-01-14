// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetConsumerGroupResponseBody() = default ;
    GetConsumerGroupResponseBody(const GetConsumerGroupResponseBody &) = default ;
    GetConsumerGroupResponseBody(GetConsumerGroupResponseBody &&) = default ;
    GetConsumerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupResponseBody() = default ;
    GetConsumerGroupResponseBody& operator=(const GetConsumerGroupResponseBody &) = default ;
    GetConsumerGroupResponseBody& operator=(GetConsumerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumeRetryPolicy, consumeRetryPolicy_);
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(maxReceiveTps, maxReceiveTps_);
        DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumeRetryPolicy, consumeRetryPolicy_);
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(maxReceiveTps, maxReceiveTps_);
        DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
      class ConsumeRetryPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumeRetryPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(deadLetterTargetTopic, deadLetterTargetTopic_);
          DARABONBA_PTR_TO_JSON(fixedIntervalRetryTime, fixedIntervalRetryTime_);
          DARABONBA_PTR_TO_JSON(maxRetryTimes, maxRetryTimes_);
          DARABONBA_PTR_TO_JSON(retryPolicy, retryPolicy_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumeRetryPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(deadLetterTargetTopic, deadLetterTargetTopic_);
          DARABONBA_PTR_FROM_JSON(fixedIntervalRetryTime, fixedIntervalRetryTime_);
          DARABONBA_PTR_FROM_JSON(maxRetryTimes, maxRetryTimes_);
          DARABONBA_PTR_FROM_JSON(retryPolicy, retryPolicy_);
        };
        ConsumeRetryPolicy() = default ;
        ConsumeRetryPolicy(const ConsumeRetryPolicy &) = default ;
        ConsumeRetryPolicy(ConsumeRetryPolicy &&) = default ;
        ConsumeRetryPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumeRetryPolicy() = default ;
        ConsumeRetryPolicy& operator=(const ConsumeRetryPolicy &) = default ;
        ConsumeRetryPolicy& operator=(ConsumeRetryPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deadLetterTargetTopic_ == nullptr
        && this->fixedIntervalRetryTime_ == nullptr && this->maxRetryTimes_ == nullptr && this->retryPolicy_ == nullptr; };
        // deadLetterTargetTopic Field Functions 
        bool hasDeadLetterTargetTopic() const { return this->deadLetterTargetTopic_ != nullptr;};
        void deleteDeadLetterTargetTopic() { this->deadLetterTargetTopic_ = nullptr;};
        inline string getDeadLetterTargetTopic() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetTopic_, "") };
        inline ConsumeRetryPolicy& setDeadLetterTargetTopic(string deadLetterTargetTopic) { DARABONBA_PTR_SET_VALUE(deadLetterTargetTopic_, deadLetterTargetTopic) };


        // fixedIntervalRetryTime Field Functions 
        bool hasFixedIntervalRetryTime() const { return this->fixedIntervalRetryTime_ != nullptr;};
        void deleteFixedIntervalRetryTime() { this->fixedIntervalRetryTime_ = nullptr;};
        inline int32_t getFixedIntervalRetryTime() const { DARABONBA_PTR_GET_DEFAULT(fixedIntervalRetryTime_, 0) };
        inline ConsumeRetryPolicy& setFixedIntervalRetryTime(int32_t fixedIntervalRetryTime) { DARABONBA_PTR_SET_VALUE(fixedIntervalRetryTime_, fixedIntervalRetryTime) };


        // maxRetryTimes Field Functions 
        bool hasMaxRetryTimes() const { return this->maxRetryTimes_ != nullptr;};
        void deleteMaxRetryTimes() { this->maxRetryTimes_ = nullptr;};
        inline int32_t getMaxRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTimes_, 0) };
        inline ConsumeRetryPolicy& setMaxRetryTimes(int32_t maxRetryTimes) { DARABONBA_PTR_SET_VALUE(maxRetryTimes_, maxRetryTimes) };


        // retryPolicy Field Functions 
        bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
        void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
        inline string getRetryPolicy() const { DARABONBA_PTR_GET_DEFAULT(retryPolicy_, "") };
        inline ConsumeRetryPolicy& setRetryPolicy(string retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };


      protected:
        // The dead-letter topic.
        // 
        // If a consumer still fails to consume a message after the message is retried for a specified number of times, the message is delivered to a dead-letter topic for subsequent business recovery or troubleshooting. For more information, see [Consumption retry and dead-letter messages](https://help.aliyun.com/document_detail/440356.html).
        shared_ptr<string> deadLetterTargetTopic_ {};
        // Fixed interval retry time,Value range, unit: seconds
        //  - Concurrently:10-1800
        //  - Orderly:1-600
        shared_ptr<int32_t> fixedIntervalRetryTime_ {};
        // The maximum number of retries.
        shared_ptr<int32_t> maxRetryTimes_ {};
        // The retry policy.
        // 
        // Valid values:
        // 
        // *   FixedRetryPolicy: fixed-interval retry
        // *   DefaultRetryPolicy: exponential backoff retry
        shared_ptr<string> retryPolicy_ {};
      };

      virtual bool empty() const override { return this->consumeRetryPolicy_ == nullptr
        && this->consumerGroupId_ == nullptr && this->createTime_ == nullptr && this->deliveryOrderType_ == nullptr && this->instanceId_ == nullptr && this->maxReceiveTps_ == nullptr
        && this->messageModel_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->topicName_ == nullptr
        && this->updateTime_ == nullptr; };
      // consumeRetryPolicy Field Functions 
      bool hasConsumeRetryPolicy() const { return this->consumeRetryPolicy_ != nullptr;};
      void deleteConsumeRetryPolicy() { this->consumeRetryPolicy_ = nullptr;};
      inline const Data::ConsumeRetryPolicy & getConsumeRetryPolicy() const { DARABONBA_PTR_GET_CONST(consumeRetryPolicy_, Data::ConsumeRetryPolicy) };
      inline Data::ConsumeRetryPolicy getConsumeRetryPolicy() { DARABONBA_PTR_GET(consumeRetryPolicy_, Data::ConsumeRetryPolicy) };
      inline Data& setConsumeRetryPolicy(const Data::ConsumeRetryPolicy & consumeRetryPolicy) { DARABONBA_PTR_SET_VALUE(consumeRetryPolicy_, consumeRetryPolicy) };
      inline Data& setConsumeRetryPolicy(Data::ConsumeRetryPolicy && consumeRetryPolicy) { DARABONBA_PTR_SET_RVALUE(consumeRetryPolicy_, consumeRetryPolicy) };


      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Data& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deliveryOrderType Field Functions 
      bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
      void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
      inline string getDeliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
      inline Data& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // maxReceiveTps Field Functions 
      bool hasMaxReceiveTps() const { return this->maxReceiveTps_ != nullptr;};
      void deleteMaxReceiveTps() { this->maxReceiveTps_ = nullptr;};
      inline int64_t getMaxReceiveTps() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveTps_, 0L) };
      inline Data& setMaxReceiveTps(int64_t maxReceiveTps) { DARABONBA_PTR_SET_VALUE(maxReceiveTps_, maxReceiveTps) };


      // messageModel Field Functions 
      bool hasMessageModel() const { return this->messageModel_ != nullptr;};
      void deleteMessageModel() { this->messageModel_ = nullptr;};
      inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
      inline Data& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The consumption retry policy of the consumer group. For more information, see [Consumption retry](https://help.aliyun.com/document_detail/440356.html).
      shared_ptr<Data::ConsumeRetryPolicy> consumeRetryPolicy_ {};
      // The ID of the consumer group.
      shared_ptr<string> consumerGroupId_ {};
      // The time when the consumer group was created.
      shared_ptr<string> createTime_ {};
      // The message delivery method of the consumer group.
      // 
      // Valid values:
      // 
      // *   Concurrently: concurrent delivery
      // *   Orderly: ordered delivery
      shared_ptr<string> deliveryOrderType_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // Maximum received message tps
      shared_ptr<int64_t> maxReceiveTps_ {};
      shared_ptr<string> messageModel_ {};
      // The ID of the region in which the instance resides.
      shared_ptr<string> regionId_ {};
      // The remarks on the consumer group.
      shared_ptr<string> remark_ {};
      // The status of the consumer group.
      // 
      // Valid values:
      // 
      // *   RUNNING
      // *   CREATING
      shared_ptr<string> status_ {};
      shared_ptr<string> topicName_ {};
      // The time when the consumer group was last updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumerGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumerGroupResponseBody::Data) };
    inline GetConsumerGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumerGroupResponseBody::Data) };
    inline GetConsumerGroupResponseBody& setData(const GetConsumerGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerGroupResponseBody& setData(GetConsumerGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetConsumerGroupResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetConsumerGroupResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConsumerGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetConsumerGroupResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request. The system generates a unique ID for each request. You can troubleshoot issues based on the request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
