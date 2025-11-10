// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConsumerGroupRequestConsumeRetryPolicy.hpp>
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
    virtual bool empty() const override { return this->consumeRetryPolicy_ == nullptr
        && return this->deliveryOrderType_ == nullptr && return this->maxReceiveTps_ == nullptr && return this->messageModel_ == nullptr && return this->remark_ == nullptr && return this->topicName_ == nullptr; };
    // consumeRetryPolicy Field Functions 
    bool hasConsumeRetryPolicy() const { return this->consumeRetryPolicy_ != nullptr;};
    void deleteConsumeRetryPolicy() { this->consumeRetryPolicy_ = nullptr;};
    inline const CreateConsumerGroupRequestConsumeRetryPolicy & consumeRetryPolicy() const { DARABONBA_PTR_GET_CONST(consumeRetryPolicy_, CreateConsumerGroupRequestConsumeRetryPolicy) };
    inline CreateConsumerGroupRequestConsumeRetryPolicy consumeRetryPolicy() { DARABONBA_PTR_GET(consumeRetryPolicy_, CreateConsumerGroupRequestConsumeRetryPolicy) };
    inline CreateConsumerGroupRequest& setConsumeRetryPolicy(const CreateConsumerGroupRequestConsumeRetryPolicy & consumeRetryPolicy) { DARABONBA_PTR_SET_VALUE(consumeRetryPolicy_, consumeRetryPolicy) };
    inline CreateConsumerGroupRequest& setConsumeRetryPolicy(CreateConsumerGroupRequestConsumeRetryPolicy && consumeRetryPolicy) { DARABONBA_PTR_SET_RVALUE(consumeRetryPolicy_, consumeRetryPolicy) };


    // deliveryOrderType Field Functions 
    bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
    void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
    inline string deliveryOrderType() const { DARABONBA_PTR_GET_DEFAULT(deliveryOrderType_, "") };
    inline CreateConsumerGroupRequest& setDeliveryOrderType(string deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };


    // maxReceiveTps Field Functions 
    bool hasMaxReceiveTps() const { return this->maxReceiveTps_ != nullptr;};
    void deleteMaxReceiveTps() { this->maxReceiveTps_ = nullptr;};
    inline int64_t maxReceiveTps() const { DARABONBA_PTR_GET_DEFAULT(maxReceiveTps_, 0L) };
    inline CreateConsumerGroupRequest& setMaxReceiveTps(int64_t maxReceiveTps) { DARABONBA_PTR_SET_VALUE(maxReceiveTps_, maxReceiveTps) };


    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string messageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline CreateConsumerGroupRequest& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateConsumerGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateConsumerGroupRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The consumption retry policy of the consumer group. For more information, see [Consumption retry](https://help.aliyun.com/document_detail/440356.html).
    // 
    // This parameter is required.
    std::shared_ptr<CreateConsumerGroupRequestConsumeRetryPolicy> consumeRetryPolicy_ = nullptr;
    // The message delivery method of the consumer group.
    // 
    // Valid values:
    // 
    // *   Concurrently: concurrent delivery
    // *   Orderly: ordered delivery
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryOrderType_ = nullptr;
    // The maximum number of messages that can be processed by consumers per second.
    std::shared_ptr<int64_t> maxReceiveTps_ = nullptr;
    std::shared_ptr<string> messageModel_ = nullptr;
    // The description of the consumer group.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
