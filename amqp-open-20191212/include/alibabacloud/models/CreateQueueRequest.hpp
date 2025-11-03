// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_TO_JSON(AutoExpireState, autoExpireState_);
      DARABONBA_PTR_TO_JSON(DeadLetterExchange, deadLetterExchange_);
      DARABONBA_PTR_TO_JSON(DeadLetterRoutingKey, deadLetterRoutingKey_);
      DARABONBA_PTR_TO_JSON(ExclusiveState, exclusiveState_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(MaximumPriority, maximumPriority_);
      DARABONBA_PTR_TO_JSON(MessageTTL, messageTTL_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_FROM_JSON(AutoExpireState, autoExpireState_);
      DARABONBA_PTR_FROM_JSON(DeadLetterExchange, deadLetterExchange_);
      DARABONBA_PTR_FROM_JSON(DeadLetterRoutingKey, deadLetterRoutingKey_);
      DARABONBA_PTR_FROM_JSON(ExclusiveState, exclusiveState_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(MaximumPriority, maximumPriority_);
      DARABONBA_PTR_FROM_JSON(MessageTTL, messageTTL_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
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
    virtual bool empty() const override { return this->autoDeleteState_ == nullptr
        && return this->autoExpireState_ == nullptr && return this->deadLetterExchange_ == nullptr && return this->deadLetterRoutingKey_ == nullptr && return this->exclusiveState_ == nullptr && return this->instanceId_ == nullptr
        && return this->maxLength_ == nullptr && return this->maximumPriority_ == nullptr && return this->messageTTL_ == nullptr && return this->queueName_ == nullptr && return this->virtualHost_ == nullptr; };
    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool autoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline CreateQueueRequest& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // autoExpireState Field Functions 
    bool hasAutoExpireState() const { return this->autoExpireState_ != nullptr;};
    void deleteAutoExpireState() { this->autoExpireState_ = nullptr;};
    inline int64_t autoExpireState() const { DARABONBA_PTR_GET_DEFAULT(autoExpireState_, 0L) };
    inline CreateQueueRequest& setAutoExpireState(int64_t autoExpireState) { DARABONBA_PTR_SET_VALUE(autoExpireState_, autoExpireState) };


    // deadLetterExchange Field Functions 
    bool hasDeadLetterExchange() const { return this->deadLetterExchange_ != nullptr;};
    void deleteDeadLetterExchange() { this->deadLetterExchange_ = nullptr;};
    inline string deadLetterExchange() const { DARABONBA_PTR_GET_DEFAULT(deadLetterExchange_, "") };
    inline CreateQueueRequest& setDeadLetterExchange(string deadLetterExchange) { DARABONBA_PTR_SET_VALUE(deadLetterExchange_, deadLetterExchange) };


    // deadLetterRoutingKey Field Functions 
    bool hasDeadLetterRoutingKey() const { return this->deadLetterRoutingKey_ != nullptr;};
    void deleteDeadLetterRoutingKey() { this->deadLetterRoutingKey_ = nullptr;};
    inline string deadLetterRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(deadLetterRoutingKey_, "") };
    inline CreateQueueRequest& setDeadLetterRoutingKey(string deadLetterRoutingKey) { DARABONBA_PTR_SET_VALUE(deadLetterRoutingKey_, deadLetterRoutingKey) };


    // exclusiveState Field Functions 
    bool hasExclusiveState() const { return this->exclusiveState_ != nullptr;};
    void deleteExclusiveState() { this->exclusiveState_ = nullptr;};
    inline bool exclusiveState() const { DARABONBA_PTR_GET_DEFAULT(exclusiveState_, false) };
    inline CreateQueueRequest& setExclusiveState(bool exclusiveState) { DARABONBA_PTR_SET_VALUE(exclusiveState_, exclusiveState) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateQueueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int64_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
    inline CreateQueueRequest& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maximumPriority Field Functions 
    bool hasMaximumPriority() const { return this->maximumPriority_ != nullptr;};
    void deleteMaximumPriority() { this->maximumPriority_ = nullptr;};
    inline int32_t maximumPriority() const { DARABONBA_PTR_GET_DEFAULT(maximumPriority_, 0) };
    inline CreateQueueRequest& setMaximumPriority(int32_t maximumPriority) { DARABONBA_PTR_SET_VALUE(maximumPriority_, maximumPriority) };


    // messageTTL Field Functions 
    bool hasMessageTTL() const { return this->messageTTL_ != nullptr;};
    void deleteMessageTTL() { this->messageTTL_ = nullptr;};
    inline int64_t messageTTL() const { DARABONBA_PTR_GET_DEFAULT(messageTTL_, 0L) };
    inline CreateQueueRequest& setMessageTTL(int64_t messageTTL) { DARABONBA_PTR_SET_VALUE(messageTTL_, messageTTL) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateQueueRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // Specifies whether to automatically delete the queue. Valid values:
    // 
    // *   true: The queue is automatically deleted. After the last consumer unsubscribes from the queue, the queue is automatically deleted.
    // *   false: The queue is not automatically deleted.
    std::shared_ptr<bool> autoDeleteState_ = nullptr;
    // The validity period after which the queue is automatically deleted. If the queue is not accessed within the specified period of time, the queue is automatically deleted.
    // 
    // Unit: milliseconds.
    // 
    // >  You can use the feature that corresponds to this parameter only after you enable the feature. To enable the feature, [submit a ticket](https://ticket-intl.console.aliyun.com/#/ticket/createIndex).
    std::shared_ptr<int64_t> autoExpireState_ = nullptr;
    // The dead-letter exchange. A dead-letter exchange is used to receive rejected messages.
    // 
    // If a consumer rejects a message that cannot be redelivered, ApsaraMQ for RabbitMQ routes the message to the specified dead-letter exchange. Then, the dead-letter exchange routes the message to the queue that is bound to the dead-letter exchange for storage.
    std::shared_ptr<string> deadLetterExchange_ = nullptr;
    // The dead-letter routing key. The key must be 1 to 255 characters in length, and can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@).
    std::shared_ptr<string> deadLetterRoutingKey_ = nullptr;
    // Specifies whether the exchange is an exclusive exchange. Valid values:
    // 
    // *   true: The exchange is an exclusive exchange. Only the connection that declares the exclusive exchange can use the exclusive exchange. After the connection is closed, the exclusive exchange is automatically deleted.
    // *   false: The exchange is not an exclusive exchange.
    std::shared_ptr<bool> exclusiveState_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance on which you want to create a queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is unavailable in the current version of ApsaraMQ for RabbitMQ.
    // 
    // The maximum number of messages that can be stored in the queue. If this threshold is exceeded, the earliest stored messages in the queue are deleted.
    std::shared_ptr<int64_t> maxLength_ = nullptr;
    // Queue priorities are not supported. The value does not affect the call or return results.
    std::shared_ptr<int32_t> maximumPriority_ = nullptr;
    // The message time to live (TTL) of the queue.
    // 
    // *   If the retention period of a message in the queue exceeds the message TTL of the queue, the message expires.
    // *   The message TTL must be set to a non-negative integer. The maximum message TTL is one day. Unit: milliseconds. For example, if the message TTL is 1,000 milliseconds, the message can be retained for up to 1 second in the queue.
    std::shared_ptr<int64_t> messageTTL_ = nullptr;
    // The name of the queue that you want to create.
    // 
    // *   The name must be 1 to 255 characters in length, and can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@).
    // *   After the queue is created, you cannot change the name of the queue. If you want to change the name of the queue, delete the queue and create another queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // The name of the vhost to which the queue that you want to create belongs. The name must be 1 to 255 characters in length, and can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@).
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
