// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICECHANNELSRESPONSEBODYCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICECHANNELSRESPONSEBODYCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDeviceChannelsResponseBodyChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceChannelsResponseBodyChannels& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
      DARABONBA_PTR_TO_JSON(GbId, gbId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(StreamId, streamId_);
      DARABONBA_PTR_TO_JSON(StreamStatus, streamStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceChannelsResponseBodyChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
      DARABONBA_PTR_FROM_JSON(GbId, gbId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
      DARABONBA_PTR_FROM_JSON(StreamStatus, streamStatus_);
    };
    DescribeDeviceChannelsResponseBodyChannels() = default ;
    DescribeDeviceChannelsResponseBodyChannels(const DescribeDeviceChannelsResponseBodyChannels &) = default ;
    DescribeDeviceChannelsResponseBodyChannels(DescribeDeviceChannelsResponseBodyChannels &&) = default ;
    DescribeDeviceChannelsResponseBodyChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceChannelsResponseBodyChannels() = default ;
    DescribeDeviceChannelsResponseBodyChannels& operator=(const DescribeDeviceChannelsResponseBodyChannels &) = default ;
    DescribeDeviceChannelsResponseBodyChannels& operator=(DescribeDeviceChannelsResponseBodyChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->deviceId_ != nullptr && this->deviceStatus_ != nullptr && this->gbId_ != nullptr && this->name_ != nullptr && this->params_ != nullptr
        && this->streamId_ != nullptr && this->streamStatus_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int64_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
    inline DescribeDeviceChannelsResponseBodyChannels& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceStatus Field Functions 
    bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
    void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
    inline string deviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


    // gbId Field Functions 
    bool hasGbId() const { return this->gbId_ != nullptr;};
    void deleteGbId() { this->gbId_ = nullptr;};
    inline string gbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // streamId Field Functions 
    bool hasStreamId() const { return this->streamId_ != nullptr;};
    void deleteStreamId() { this->streamId_ = nullptr;};
    inline string streamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


    // streamStatus Field Functions 
    bool hasStreamStatus() const { return this->streamStatus_ != nullptr;};
    void deleteStreamStatus() { this->streamStatus_ = nullptr;};
    inline string streamStatus() const { DARABONBA_PTR_GET_DEFAULT(streamStatus_, "") };
    inline DescribeDeviceChannelsResponseBodyChannels& setStreamStatus(string streamStatus) { DARABONBA_PTR_SET_VALUE(streamStatus_, streamStatus) };


  protected:
    std::shared_ptr<int64_t> channelId_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceStatus_ = nullptr;
    std::shared_ptr<string> gbId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> streamId_ = nullptr;
    std::shared_ptr<string> streamStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
