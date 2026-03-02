// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMETRACEBYQUEUEANDROCKETMQMSGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetConsumeTraceByQueueAndRocketMqMsgIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumeTraceByQueueAndRocketMqMsgIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumeTraceByQueueAndRocketMqMsgIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest(const GetConsumeTraceByQueueAndRocketMqMsgIdRequest &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest(GetConsumeTraceByQueueAndRocketMqMsgIdRequest &&) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumeTraceByQueueAndRocketMqMsgIdRequest() = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest& operator=(const GetConsumeTraceByQueueAndRocketMqMsgIdRequest &) = default ;
    GetConsumeTraceByQueueAndRocketMqMsgIdRequest& operator=(GetConsumeTraceByQueueAndRocketMqMsgIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->consoleSessionId_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->msgId_ == nullptr && this->queueName_ == nullptr
        && this->startTime_ == nullptr && this->vhostName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string getConsoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetConsumeTraceByQueueAndRocketMqMsgIdRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> consoleSessionId_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> msgId_ {};
    // This parameter is required.
    shared_ptr<string> queueName_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // This parameter is required.
    shared_ptr<string> vhostName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
