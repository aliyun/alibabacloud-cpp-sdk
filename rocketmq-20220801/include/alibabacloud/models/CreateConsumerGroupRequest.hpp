// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_TO_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_TO_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumeRetryPolicy, consumeRetryPolicy_);
      DARABONBA_PTR_FROM_JSON(deliveryOrderType, deliveryOrderType_);
      DARABONBA_PTR_FROM_JSON(maxReceiveTps, maxReceiveTps_);
      DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest(CreateConsumerGroupRequest &&) = default ;
    CreateConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest& operator=(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest& operator=(CreateConsumerGroupRequest &&) = default ;
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
      // If a message still fails to be consumed after the maximum number of retries specified in the consumption retry policy is reached, the message is delivered to the dead-letter topic for subsequent business recovery or backtracking. For more information, see [Consumption retry and dead-letter messages](https://help.aliyun.com/document_detail/440356.html).
      shared_ptr<string> deadLetterTargetTopic_ {};
      // The fixed interval. Unit: seconds. This parameter takes effect only if you set retryPolicy to FixedRetryPolicy. Valid values:
      // 
      // *   Concurrent delivery: 10 to 1800
      // *   Ordered delivery: 1 to 600
      shared_ptr<int32_t> fixedIntervalRetryTime_ {};
      // The maximum number of retries.
      shared_ptr<int32_t> maxRetryTimes_ {};
      // The retry policy. For more information, see [Message retry](https://help.aliyun.com/document_detail/440356.html).
      // 
      // Valid values:
      // 
      // *   FixedRetryPolicy: fixed-interval retry. This value is valid only if you set deliveryOrderType to Orderly.
      // *   DefaultRetryPolicy: exponential backoff retry. This value is valid only if you set deliveryOrderType to Concurrently.
      // 
      // This parameter is required.
      shared_ptr<string> retryPolicy_ {};
    };

    virtual bool empty() const override { return this->consumeRetryPolicy_ == nullptr
        && this->deliveryOrderType_ == nullptr && this->maxReceiveTps_ == nullptr && this->messageModel_ == nullptr && this->remark_ == nullptr && this->topicName_ == nullptr; };
    // consumeRetryPolicy Field Functions 
    bool hasConsumeRetryPolicy() const { return this->consumeRetryPolicy_ != nullptr;};
    void deleteConsumeRetryPolicy() { this->consumeRetryPolicy_ = nullptr;};
    inline const CreateConsumerGroupRequest::ConsumeRetryPolicy & getConsumeRetryPolicy() const { DARABONBA_PTR_GET_CONST(consumeRetryPolicy_, CreateConsumerGroupRequest::ConsumeRetryPolicy) };
    inline CreateConsumerGroupRequest::ConsumeRetryPolicy getConsumeRetryPolicy() { DARABONBA_PTR_GET(consumeRetryPolicy_, CreateConsumerGroupRequest::ConsumeRetryPolicy) };
    inline CreateConsumerGroupRequest& setConsumeRetryPolicy(const CreateConsumerGroupRequest::ConsumeRetryPolicy & consumeRetryPolicy) { DARABONBA_PTR_SET_VALUE(consumeRetryPolicy_, consumeRetryPolicy) };
    inline CreateConsumerGroupRequest& setConsumeRetryPolicy(CreateConsumerGroupRequest::ConsumeRetryPolicy && consumeRetryPolicy) { DARABONBA_PTR_SET_RVALUE(consumeRetryPolicy_, consumeRetryPolicy) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline string getDeliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
    inline CreateConsumerGroupRequest& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


    // maxReceiveTps Field Functions 
    bool hasMaxReceiveTps() const { return this->maxReceiveTps_ != nullptr;};
    void deleteMaxReceiveTps() { this->maxReceiveTps_ = nullptr;};
    inline int64_t getMaxReceiveTps() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveTps_, 0L) };
    inline CreateConsumerGroupRequest& setMaxReceiveTps(int64_t maxReceiveTps) { DARABONBA_PTR_SET_VALUE(maxReceiveTps_, maxReceiveTps) };


    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline CreateConsumerGroupRequest& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateConsumerGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateConsumerGroupRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The consumption retry policy of the consumer group. For more information, see [Consumption retry](https://help.aliyun.com/document_detail/440356.html).
    // 
    // This parameter is required.
    shared_ptr<CreateConsumerGroupRequest::ConsumeRetryPolicy> consumeRetryPolicy_ {};
    // The message delivery method of the consumer group.
    // 
    // Valid values:
    // 
    // *   Concurrently: concurrent delivery
    // *   Orderly: ordered delivery
    // 
    // This parameter is required.
    shared_ptr<string> deliveryOrderType_ {};
    // The maximum number of messages that can be processed by consumers per second.
    shared_ptr<int64_t> maxReceiveTps_ {};
    shared_ptr<string> messageModel_ {};
    // The description of the consumer group.
    shared_ptr<string> remark_ {};
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
