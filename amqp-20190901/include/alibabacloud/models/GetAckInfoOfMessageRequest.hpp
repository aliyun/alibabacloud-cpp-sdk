// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoOfMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoOfMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(ConsumeStatus, consumeStatus_);
      DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoOfMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(ConsumeStatus, consumeStatus_);
      DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetAckInfoOfMessageRequest() = default ;
    GetAckInfoOfMessageRequest(const GetAckInfoOfMessageRequest &) = default ;
    GetAckInfoOfMessageRequest(GetAckInfoOfMessageRequest &&) = default ;
    GetAckInfoOfMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoOfMessageRequest() = default ;
    GetAckInfoOfMessageRequest& operator=(const GetAckInfoOfMessageRequest &) = default ;
    GetAckInfoOfMessageRequest& operator=(GetAckInfoOfMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->consoleSessionId_ == nullptr && return this->consumeStatus_ == nullptr && return this->deliveryTag_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->msgId_ == nullptr && return this->queueName_ == nullptr && return this->startTime_ == nullptr && return this->timeStamp_ == nullptr && return this->vhostName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetAckInfoOfMessageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetAckInfoOfMessageRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // consumeStatus Field Functions 
    bool hasConsumeStatus() const { return this->consumeStatus_ != nullptr;};
    void deleteConsumeStatus() { this->consumeStatus_ = nullptr;};
    inline string consumeStatus() const { DARABONBA_PTR_GET_DEFAULT(consumeStatus_, "") };
    inline GetAckInfoOfMessageRequest& setConsumeStatus(string consumeStatus) { DARABONBA_PTR_SET_VALUE(consumeStatus_, consumeStatus) };


    // deliveryTag Field Functions 
    bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
    void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
    inline string deliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, "") };
    inline GetAckInfoOfMessageRequest& setDeliveryTag(string deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetAckInfoOfMessageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAckInfoOfMessageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline GetAckInfoOfMessageRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetAckInfoOfMessageRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetAckInfoOfMessageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetAckInfoOfMessageRequest& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetAckInfoOfMessageRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> consumeStatus_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deliveryTag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> msgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
