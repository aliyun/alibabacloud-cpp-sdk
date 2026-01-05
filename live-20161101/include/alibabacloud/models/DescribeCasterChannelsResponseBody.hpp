// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterChannelsResponseBody() = default ;
    DescribeCasterChannelsResponseBody(const DescribeCasterChannelsResponseBody &) = default ;
    DescribeCasterChannelsResponseBody(DescribeCasterChannelsResponseBody &&) = default ;
    DescribeCasterChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterChannelsResponseBody() = default ;
    DescribeCasterChannelsResponseBody& operator=(const DescribeCasterChannelsResponseBody &) = default ;
    DescribeCasterChannelsResponseBody& operator=(DescribeCasterChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
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
      class Channel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Channel& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(FaceBeauty, faceBeauty_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
          DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Channel& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(FaceBeauty, faceBeauty_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
          DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        };
        Channel() = default ;
        Channel(const Channel &) = default ;
        Channel(Channel &&) = default ;
        Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Channel() = default ;
        Channel& operator=(const Channel &) = default ;
        Channel& operator=(Channel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->faceBeauty_ == nullptr && this->resourceId_ == nullptr && this->rtmpUrl_ == nullptr && this->streamUrl_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline Channel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // faceBeauty Field Functions 
        bool hasFaceBeauty() const { return this->faceBeauty_ != nullptr;};
        void deleteFaceBeauty() { this->faceBeauty_ = nullptr;};
        inline string getFaceBeauty() const { DARABONBA_PTR_GET_DEFAULT(faceBeauty_, "") };
        inline Channel& setFaceBeauty(string faceBeauty) { DARABONBA_PTR_SET_VALUE(faceBeauty_, faceBeauty) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Channel& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // rtmpUrl Field Functions 
        bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
        void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
        inline string getRtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
        inline Channel& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline Channel& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      protected:
        // The ID of the channel.
        // 
        // The layout references the channel ID when the channel is enabled. You can specify up to one video resource for the channel. The value of this parameter must be in the RV[Number] format, such as RV01 and RV12.
        shared_ptr<string> channelId_ {};
        // The face retouching effect. Valid values: 0 (all effects), 1 (skin smoothing), 2 (skin whitening), 3 (dark circles removal), and 4 (nasolabial folds removal).
        shared_ptr<string> faceBeauty_ {};
        // The ID of the video resource.
        shared_ptr<string> resourceId_ {};
        // The URL in the Real-Time Messaging Protocol (RTMP) format.
        shared_ptr<string> rtmpUrl_ {};
        // The URL of the output content in the channel.
        shared_ptr<string> streamUrl_ {};
      };

      virtual bool empty() const override { return this->channel_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline const vector<Channels::Channel> & getChannel() const { DARABONBA_PTR_GET_CONST(channel_, vector<Channels::Channel>) };
      inline vector<Channels::Channel> getChannel() { DARABONBA_PTR_GET(channel_, vector<Channels::Channel>) };
      inline Channels& setChannel(const vector<Channels::Channel> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
      inline Channels& setChannel(vector<Channels::Channel> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    protected:
      shared_ptr<vector<Channels::Channel>> channel_ {};
    };

    virtual bool empty() const override { return this->channels_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const DescribeCasterChannelsResponseBody::Channels & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, DescribeCasterChannelsResponseBody::Channels) };
    inline DescribeCasterChannelsResponseBody::Channels getChannels() { DARABONBA_PTR_GET(channels_, DescribeCasterChannelsResponseBody::Channels) };
    inline DescribeCasterChannelsResponseBody& setChannels(const DescribeCasterChannelsResponseBody::Channels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeCasterChannelsResponseBody& setChannels(DescribeCasterChannelsResponseBody::Channels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterChannelsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The channels.
    shared_ptr<DescribeCasterChannelsResponseBody::Channels> channels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of channels.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
