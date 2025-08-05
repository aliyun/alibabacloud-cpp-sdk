// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSUMERCHANNELRESPONSEBODYCONSUMERCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSUMERCHANNELRESPONSEBODYCONSUMERCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConsumerChannelResponseBodyConsumerChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsumerChannelResponseBodyConsumerChannels& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_TO_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(MessageDelay, messageDelay_);
      DARABONBA_PTR_TO_JSON(UnconsumedData, unconsumedData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsumerChannelResponseBodyConsumerChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupName, consumerGroupName_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroupUserName, consumerGroupUserName_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(MessageDelay, messageDelay_);
      DARABONBA_PTR_FROM_JSON(UnconsumedData, unconsumedData_);
    };
    DescribeConsumerChannelResponseBodyConsumerChannels() = default ;
    DescribeConsumerChannelResponseBodyConsumerChannels(const DescribeConsumerChannelResponseBodyConsumerChannels &) = default ;
    DescribeConsumerChannelResponseBodyConsumerChannels(DescribeConsumerChannelResponseBodyConsumerChannels &&) = default ;
    DescribeConsumerChannelResponseBodyConsumerChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsumerChannelResponseBodyConsumerChannels() = default ;
    DescribeConsumerChannelResponseBodyConsumerChannels& operator=(const DescribeConsumerChannelResponseBodyConsumerChannels &) = default ;
    DescribeConsumerChannelResponseBodyConsumerChannels& operator=(DescribeConsumerChannelResponseBodyConsumerChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerGroupId_ != nullptr
        && this->consumerGroupName_ != nullptr && this->consumerGroupUserName_ != nullptr && this->consumptionCheckpoint_ != nullptr && this->messageDelay_ != nullptr && this->unconsumedData_ != nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // consumerGroupName Field Functions 
    bool hasConsumerGroupName() const { return this->consumerGroupName_ != nullptr;};
    void deleteConsumerGroupName() { this->consumerGroupName_ = nullptr;};
    inline string consumerGroupName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupName_, "") };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setConsumerGroupName(string consumerGroupName) { DARABONBA_PTR_SET_VALUE(consumerGroupName_, consumerGroupName) };


    // consumerGroupUserName Field Functions 
    bool hasConsumerGroupUserName() const { return this->consumerGroupUserName_ != nullptr;};
    void deleteConsumerGroupUserName() { this->consumerGroupUserName_ = nullptr;};
    inline string consumerGroupUserName() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupUserName_, "") };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setConsumerGroupUserName(string consumerGroupUserName) { DARABONBA_PTR_SET_VALUE(consumerGroupUserName_, consumerGroupUserName) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // messageDelay Field Functions 
    bool hasMessageDelay() const { return this->messageDelay_ != nullptr;};
    void deleteMessageDelay() { this->messageDelay_ = nullptr;};
    inline int64_t messageDelay() const { DARABONBA_PTR_GET_DEFAULT(messageDelay_, 0L) };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setMessageDelay(int64_t messageDelay) { DARABONBA_PTR_SET_VALUE(messageDelay_, messageDelay) };


    // unconsumedData Field Functions 
    bool hasUnconsumedData() const { return this->unconsumedData_ != nullptr;};
    void deleteUnconsumedData() { this->unconsumedData_ = nullptr;};
    inline int64_t unconsumedData() const { DARABONBA_PTR_GET_DEFAULT(unconsumedData_, 0L) };
    inline DescribeConsumerChannelResponseBodyConsumerChannels& setUnconsumedData(int64_t unconsumedData) { DARABONBA_PTR_SET_VALUE(unconsumedData_, unconsumedData) };


  protected:
    // The ID of the consumer group.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The name of the consumer group.
    std::shared_ptr<string> consumerGroupName_ = nullptr;
    // The username of the consumer group.
    std::shared_ptr<string> consumerGroupUserName_ = nullptr;
    // The consumption checkpoint, which is the time when the latest data record was consumed by the change tracking client. The time is displayed in the yyyy-MM-ddTHH:mm:ssZ format in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The message latency, which is the timestamp of the latest data consumed by the downstream client minus the timestamp of the latest data tracked by the change tracking task. The value is a UNIX timestamp. Unit: seconds.
    // 
    // For example, the latest data in the source database is generated at 10:00. The change tracking task reads the data generated at 09:55, and the downstream client consumes the data generated at 09:30. In this case, the message latency is the UNIX timestamp difference between 09:55 and 09:30.
    // 
    // >  If the return value of this parameter is **-1**, no client is connected to the consumer group.
    std::shared_ptr<int64_t> messageDelay_ = nullptr;
    // The total number of unconsumed messages, which is the number of unconsumed data records plus the number of heartbeat messages.
    // 
    // >  If the return value of this parameter is -1, no client is connected to the consumer group.
    std::shared_ptr<int64_t> unconsumedData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
