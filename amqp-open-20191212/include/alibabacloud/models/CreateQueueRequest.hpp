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
        && this->autoExpireState_ == nullptr && this->deadLetterExchange_ == nullptr && this->deadLetterRoutingKey_ == nullptr && this->exclusiveState_ == nullptr && this->instanceId_ == nullptr
        && this->maxLength_ == nullptr && this->maximumPriority_ == nullptr && this->messageTTL_ == nullptr && this->queueName_ == nullptr && this->virtualHost_ == nullptr; };
    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool getAutoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline CreateQueueRequest& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // autoExpireState Field Functions 
    bool hasAutoExpireState() const { return this->autoExpireState_ != nullptr;};
    void deleteAutoExpireState() { this->autoExpireState_ = nullptr;};
    inline int64_t getAutoExpireState() const { DARABONBA_PTR_GET_DEFAULT(autoExpireState_, 0L) };
    inline CreateQueueRequest& setAutoExpireState(int64_t autoExpireState) { DARABONBA_PTR_SET_VALUE(autoExpireState_, autoExpireState) };


    // deadLetterExchange Field Functions 
    bool hasDeadLetterExchange() const { return this->deadLetterExchange_ != nullptr;};
    void deleteDeadLetterExchange() { this->deadLetterExchange_ = nullptr;};
    inline string getDeadLetterExchange() const { DARABONBA_PTR_GET_DEFAULT(deadLetterExchange_, "") };
    inline CreateQueueRequest& setDeadLetterExchange(string deadLetterExchange) { DARABONBA_PTR_SET_VALUE(deadLetterExchange_, deadLetterExchange) };


    // deadLetterRoutingKey Field Functions 
    bool hasDeadLetterRoutingKey() const { return this->deadLetterRoutingKey_ != nullptr;};
    void deleteDeadLetterRoutingKey() { this->deadLetterRoutingKey_ = nullptr;};
    inline string getDeadLetterRoutingKey() const { DARABONBA_PTR_GET_DEFAULT(deadLetterRoutingKey_, "") };
    inline CreateQueueRequest& setDeadLetterRoutingKey(string deadLetterRoutingKey) { DARABONBA_PTR_SET_VALUE(deadLetterRoutingKey_, deadLetterRoutingKey) };


    // exclusiveState Field Functions 
    bool hasExclusiveState() const { return this->exclusiveState_ != nullptr;};
    void deleteExclusiveState() { this->exclusiveState_ = nullptr;};
    inline bool getExclusiveState() const { DARABONBA_PTR_GET_DEFAULT(exclusiveState_, false) };
    inline CreateQueueRequest& setExclusiveState(bool exclusiveState) { DARABONBA_PTR_SET_VALUE(exclusiveState_, exclusiveState) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateQueueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
    inline CreateQueueRequest& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maximumPriority Field Functions 
    bool hasMaximumPriority() const { return this->maximumPriority_ != nullptr;};
    void deleteMaximumPriority() { this->maximumPriority_ = nullptr;};
    inline int32_t getMaximumPriority() const { DARABONBA_PTR_GET_DEFAULT(maximumPriority_, 0) };
    inline CreateQueueRequest& setMaximumPriority(int32_t maximumPriority) { DARABONBA_PTR_SET_VALUE(maximumPriority_, maximumPriority) };


    // messageTTL Field Functions 
    bool hasMessageTTL() const { return this->messageTTL_ != nullptr;};
    void deleteMessageTTL() { this->messageTTL_ = nullptr;};
    inline int64_t getMessageTTL() const { DARABONBA_PTR_GET_DEFAULT(messageTTL_, 0L) };
    inline CreateQueueRequest& setMessageTTL(int64_t messageTTL) { DARABONBA_PTR_SET_VALUE(messageTTL_, messageTTL) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string getVirtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateQueueRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // Specifies whether to automatically delete the queue. Valid values:
    // 
    // - true: The queue is automatically deleted after the last consumer unsubscribes from it.
    // 
    // - false: The queue is not automatically deleted.
    shared_ptr<bool> autoDeleteState_ {};
    // The auto-expiration time for the queue. The queue is automatically deleted if it is not accessed within the specified time period.
    // 
    // Unit: milliseconds.
    // 
    // > This feature must be enabled before you can use this parameter. To enable the feature, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex)<props="intl">[submit a ticket](https://ticket-intl.console.aliyun.com/#/ticket/createIndex).
    shared_ptr<int64_t> autoExpireState_ {};
    // The dead-letter exchange. This type of exchange is used to receive rejected messages.
    // 
    // If a consumer rejects a message and the message is not requeued, ApsaraMQ for RabbitMQ routes the message to the specified dead-letter exchange. The dead-letter exchange then routes the message to a bound queue for storage.
    shared_ptr<string> deadLetterExchange_ {};
    // The dead-letter routing key.
    // The key can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@). The key must be 1 to 255 characters in length.
    shared_ptr<string> deadLetterRoutingKey_ {};
    // Specifies whether the queue is an exclusive queue. Valid values:
    // 
    // - true: The queue is an exclusive queue. An exclusive queue can be used only by the connection that declares it. The queue is automatically deleted after the connection is closed.
    // 
    // - false: The queue is not an exclusive queue.
    shared_ptr<bool> exclusiveState_ {};
    // The ID of the ApsaraMQ for RabbitMQ instance to which the queue belongs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is not supported in the current version.
    // 
    // The maximum number of messages that can be stored in the queue. If this limit is exceeded, the earliest messages in the queue are deleted.
    shared_ptr<int64_t> maxLength_ {};
    // The priority of the queue. The recommended value is an integer from 1 to 10.
    // 
    // > This parameter is used for message priority. It is supported only by dedicated instances and can be used only after the message priority feature is enabled. To enable the feature, <props="china">[submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex)<props="intl">[submit a ticket](https://ticket-intl.console.aliyun.com/#/ticket/createIndex).
    shared_ptr<int32_t> maximumPriority_ {};
    // The time to live (TTL) of a message in the queue.
    // 
    // - A message expires if its retention time in the queue exceeds the configured TTL.
    // 
    // - The message TTL must be a non-negative integer. The maximum value is 1 day. The unit is milliseconds. For example, if the value is 1000, the message can be stored in the queue for a maximum of 1 second.
    shared_ptr<int64_t> messageTTL_ {};
    // The name of the queue to create.
    // 
    // - The queue name can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@). The name must be 1 to 255 characters in length.
    // 
    // - After a queue is created, its name cannot be changed. To change the name, delete the queue and create a new one.
    // 
    // This parameter is required.
    shared_ptr<string> queueName_ {};
    // The name of the vhost to which the queue belongs.
    // The name can contain only letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slashes (/), and at signs (@). The name must be 1 to 255 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> virtualHost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
