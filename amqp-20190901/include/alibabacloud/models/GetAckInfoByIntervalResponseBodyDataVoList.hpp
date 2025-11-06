// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOBYINTERVALRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoByIntervalResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoByIntervalResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RocketMqMsgId, rocketMqMsgId_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoByIntervalResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RocketMqMsgId, rocketMqMsgId_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    GetAckInfoByIntervalResponseBodyDataVoList() = default ;
    GetAckInfoByIntervalResponseBodyDataVoList(const GetAckInfoByIntervalResponseBodyDataVoList &) = default ;
    GetAckInfoByIntervalResponseBodyDataVoList(GetAckInfoByIntervalResponseBodyDataVoList &&) = default ;
    GetAckInfoByIntervalResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoByIntervalResponseBodyDataVoList() = default ;
    GetAckInfoByIntervalResponseBodyDataVoList& operator=(const GetAckInfoByIntervalResponseBodyDataVoList &) = default ;
    GetAckInfoByIntervalResponseBodyDataVoList& operator=(GetAckInfoByIntervalResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->channelId_ == nullptr && return this->connectionId_ == nullptr && return this->deliveryTag_ == nullptr && return this->queueName_ == nullptr && return this->rocketMqMsgId_ == nullptr
        && return this->rt_ == nullptr && return this->timeStamp_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // deliveryTag Field Functions 
    bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
    void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
    inline int64_t deliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, 0L) };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setDeliveryTag(int64_t deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // rocketMqMsgId Field Functions 
    bool hasRocketMqMsgId() const { return this->rocketMqMsgId_ != nullptr;};
    void deleteRocketMqMsgId() { this->rocketMqMsgId_ = nullptr;};
    inline string rocketMqMsgId() const { DARABONBA_PTR_GET_DEFAULT(rocketMqMsgId_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setRocketMqMsgId(string rocketMqMsgId) { DARABONBA_PTR_SET_VALUE(rocketMqMsgId_, rocketMqMsgId) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int32_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetAckInfoByIntervalResponseBodyDataVoList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> connectionId_ = nullptr;
    std::shared_ptr<int64_t> deliveryTag_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> rocketMqMsgId_ = nullptr;
    std::shared_ptr<int32_t> rt_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
