// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICECHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICECHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeDeviceChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeviceChannelsResponseBody() = default ;
    DescribeDeviceChannelsResponseBody(const DescribeDeviceChannelsResponseBody &) = default ;
    DescribeDeviceChannelsResponseBody(DescribeDeviceChannelsResponseBody &&) = default ;
    DescribeDeviceChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceChannelsResponseBody() = default ;
    DescribeDeviceChannelsResponseBody& operator=(const DescribeDeviceChannelsResponseBody &) = default ;
    DescribeDeviceChannelsResponseBody& operator=(DescribeDeviceChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_TO_JSON(GbId, gbId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(StreamId, streamId_);
        DARABONBA_PTR_TO_JSON(StreamStatus, streamStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_FROM_JSON(GbId, gbId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
        DARABONBA_PTR_FROM_JSON(StreamStatus, streamStatus_);
      };
      Channels() = default ;
      Channels(const Channels &) = default ;
      Channels(Channels &&) = default ;
      Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channels() = default ;
      Channels& operator=(const Channels &) = default ;
      Channels& operator=(Channels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelId_ == nullptr
        && this->deviceId_ == nullptr && this->deviceStatus_ == nullptr && this->gbId_ == nullptr && this->name_ == nullptr && this->params_ == nullptr
        && this->streamId_ == nullptr && this->streamStatus_ == nullptr; };
      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline int64_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
      inline Channels& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Channels& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceStatus Field Functions 
      bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
      void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
      inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
      inline Channels& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


      // gbId Field Functions 
      bool hasGbId() const { return this->gbId_ != nullptr;};
      void deleteGbId() { this->gbId_ = nullptr;};
      inline string getGbId() const { DARABONBA_PTR_GET_DEFAULT(gbId_, "") };
      inline Channels& setGbId(string gbId) { DARABONBA_PTR_SET_VALUE(gbId_, gbId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Channels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
      inline Channels& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


      // streamId Field Functions 
      bool hasStreamId() const { return this->streamId_ != nullptr;};
      void deleteStreamId() { this->streamId_ = nullptr;};
      inline string getStreamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
      inline Channels& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


      // streamStatus Field Functions 
      bool hasStreamStatus() const { return this->streamStatus_ != nullptr;};
      void deleteStreamStatus() { this->streamStatus_ = nullptr;};
      inline string getStreamStatus() const { DARABONBA_PTR_GET_DEFAULT(streamStatus_, "") };
      inline Channels& setStreamStatus(string streamStatus) { DARABONBA_PTR_SET_VALUE(streamStatus_, streamStatus) };


    protected:
      shared_ptr<int64_t> channelId_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceStatus_ {};
      shared_ptr<string> gbId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> params_ {};
      shared_ptr<string> streamId_ {};
      shared_ptr<string> streamStatus_ {};
    };

    virtual bool empty() const override { return this->channels_ == nullptr
        && this->pageCount_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<DescribeDeviceChannelsResponseBody::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<DescribeDeviceChannelsResponseBody::Channels>) };
    inline vector<DescribeDeviceChannelsResponseBody::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<DescribeDeviceChannelsResponseBody::Channels>) };
    inline DescribeDeviceChannelsResponseBody& setChannels(const vector<DescribeDeviceChannelsResponseBody::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeDeviceChannelsResponseBody& setChannels(vector<DescribeDeviceChannelsResponseBody::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeDeviceChannelsResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeDeviceChannelsResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDeviceChannelsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDeviceChannelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeDeviceChannelsResponseBody::Channels>> channels_ {};
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
