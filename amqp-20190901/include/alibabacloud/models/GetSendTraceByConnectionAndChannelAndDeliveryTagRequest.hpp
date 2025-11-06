// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSENDTRACEBYCONNECTIONANDCHANNELANDDELIVERYTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetSendTraceByConnectionAndChannelAndDeliveryTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(DeliveryTag, deliveryTag_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest(const GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest(GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &&) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSendTraceByConnectionAndChannelAndDeliveryTagRequest() = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& operator=(const GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &) = default ;
    GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& operator=(GetSendTraceByConnectionAndChannelAndDeliveryTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->clientToken_ == nullptr && return this->connectionId_ == nullptr && return this->consoleSessionId_ == nullptr && return this->deliveryTag_ == nullptr && return this->endTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->startTime_ == nullptr && return this->vhostName_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // deliveryTag Field Functions 
    bool hasDeliveryTag() const { return this->deliveryTag_ != nullptr;};
    void deleteDeliveryTag() { this->deliveryTag_ = nullptr;};
    inline int64_t deliveryTag() const { DARABONBA_PTR_GET_DEFAULT(deliveryTag_, 0L) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setDeliveryTag(int64_t deliveryTag) { DARABONBA_PTR_SET_VALUE(deliveryTag_, deliveryTag) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetSendTraceByConnectionAndChannelAndDeliveryTagRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> connectionId_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> deliveryTag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
