// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class CreateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(AutoExpire, autoExpire_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(DeadLetterExchange, deadLetterExchange_);
      DARABONBA_PTR_TO_JSON(DeadLetterRoutingKey, deadLetterRoutingKey_);
      DARABONBA_PTR_TO_JSON(Exclusive, exclusive_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(MaximunPrioty, maximunPrioty_);
      DARABONBA_PTR_TO_JSON(MessageTTL, messageTTL_);
      DARABONBA_PTR_TO_JSON(Ordered, ordered_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RetryInherit, retryInherit_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(SingleActiveConsumer, singleActiveConsumer_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(AutoExpire, autoExpire_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(DeadLetterExchange, deadLetterExchange_);
      DARABONBA_PTR_FROM_JSON(DeadLetterRoutingKey, deadLetterRoutingKey_);
      DARABONBA_PTR_FROM_JSON(Exclusive, exclusive_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(MaximunPrioty, maximunPrioty_);
      DARABONBA_PTR_FROM_JSON(MessageTTL, messageTTL_);
      DARABONBA_PTR_FROM_JSON(Ordered, ordered_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RetryInherit, retryInherit_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(SingleActiveConsumer, singleActiveConsumer_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
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
    virtual bool empty() const override { return this->autoDelete_ == nullptr
        && return this->autoExpire_ == nullptr && return this->consoleSessionId_ == nullptr && return this->deadLetterExchange_ == nullptr && return this->deadLetterRoutingKey_ == nullptr && return this->exclusive_ == nullptr
        && return this->instanceId_ == nullptr && return this->maxLength_ == nullptr && return this->maximunPrioty_ == nullptr && return this->messageTTL_ == nullptr && return this->ordered_ == nullptr
        && return this->queueName_ == nullptr && return this->retryInherit_ == nullptr && return this->retryInterval_ == nullptr && return this->retryTimes_ == nullptr && return this->singleActiveConsumer_ == nullptr
        && return this->vhostName_ == nullptr; };
    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline bool autoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
    inline CreateQueueRequest& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // autoExpire Field Functions 
    bool hasAutoExpire() const { return this->autoExpire_ != nullptr;};
    void deleteAutoExpire() { this->autoExpire_ = nullptr;};
    inline int64_t autoExpire() const { DARABONBA_PTR_GET_DEFAULT(autoExpire_, 0L) };
    inline CreateQueueRequest& setAutoExpire(int64_t autoExpire) { DARABONBA_PTR_SET_VALUE(autoExpire_, autoExpire) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline CreateQueueRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


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


    // exclusive Field Functions 
    bool hasExclusive() const { return this->exclusive_ != nullptr;};
    void deleteExclusive() { this->exclusive_ = nullptr;};
    inline bool exclusive() const { DARABONBA_PTR_GET_DEFAULT(exclusive_, false) };
    inline CreateQueueRequest& setExclusive(bool exclusive) { DARABONBA_PTR_SET_VALUE(exclusive_, exclusive) };


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


    // maximunPrioty Field Functions 
    bool hasMaximunPrioty() const { return this->maximunPrioty_ != nullptr;};
    void deleteMaximunPrioty() { this->maximunPrioty_ = nullptr;};
    inline int64_t maximunPrioty() const { DARABONBA_PTR_GET_DEFAULT(maximunPrioty_, 0L) };
    inline CreateQueueRequest& setMaximunPrioty(int64_t maximunPrioty) { DARABONBA_PTR_SET_VALUE(maximunPrioty_, maximunPrioty) };


    // messageTTL Field Functions 
    bool hasMessageTTL() const { return this->messageTTL_ != nullptr;};
    void deleteMessageTTL() { this->messageTTL_ = nullptr;};
    inline int64_t messageTTL() const { DARABONBA_PTR_GET_DEFAULT(messageTTL_, 0L) };
    inline CreateQueueRequest& setMessageTTL(int64_t messageTTL) { DARABONBA_PTR_SET_VALUE(messageTTL_, messageTTL) };


    // ordered Field Functions 
    bool hasOrdered() const { return this->ordered_ != nullptr;};
    void deleteOrdered() { this->ordered_ = nullptr;};
    inline bool ordered() const { DARABONBA_PTR_GET_DEFAULT(ordered_, false) };
    inline CreateQueueRequest& setOrdered(bool ordered) { DARABONBA_PTR_SET_VALUE(ordered_, ordered) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateQueueRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // retryInherit Field Functions 
    bool hasRetryInherit() const { return this->retryInherit_ != nullptr;};
    void deleteRetryInherit() { this->retryInherit_ = nullptr;};
    inline bool retryInherit() const { DARABONBA_PTR_GET_DEFAULT(retryInherit_, false) };
    inline CreateQueueRequest& setRetryInherit(bool retryInherit) { DARABONBA_PTR_SET_VALUE(retryInherit_, retryInherit) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateQueueRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline CreateQueueRequest& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // singleActiveConsumer Field Functions 
    bool hasSingleActiveConsumer() const { return this->singleActiveConsumer_ != nullptr;};
    void deleteSingleActiveConsumer() { this->singleActiveConsumer_ = nullptr;};
    inline bool singleActiveConsumer() const { DARABONBA_PTR_GET_DEFAULT(singleActiveConsumer_, false) };
    inline CreateQueueRequest& setSingleActiveConsumer(bool singleActiveConsumer) { DARABONBA_PTR_SET_VALUE(singleActiveConsumer_, singleActiveConsumer) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline CreateQueueRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<bool> autoDelete_ = nullptr;
    std::shared_ptr<int64_t> autoExpire_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    std::shared_ptr<string> deadLetterExchange_ = nullptr;
    std::shared_ptr<string> deadLetterRoutingKey_ = nullptr;
    std::shared_ptr<bool> exclusive_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> maxLength_ = nullptr;
    std::shared_ptr<int64_t> maximunPrioty_ = nullptr;
    std::shared_ptr<int64_t> messageTTL_ = nullptr;
    std::shared_ptr<bool> ordered_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<bool> retryInherit_ = nullptr;
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
    std::shared_ptr<bool> singleActiveConsumer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
