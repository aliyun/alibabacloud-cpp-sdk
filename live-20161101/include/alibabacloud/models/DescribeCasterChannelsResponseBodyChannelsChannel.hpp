// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODYCHANNELSCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODYCHANNELSCHANNEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterChannelsResponseBodyChannelsChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterChannelsResponseBodyChannelsChannel& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(FaceBeauty, faceBeauty_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterChannelsResponseBodyChannelsChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(FaceBeauty, faceBeauty_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    DescribeCasterChannelsResponseBodyChannelsChannel() = default ;
    DescribeCasterChannelsResponseBodyChannelsChannel(const DescribeCasterChannelsResponseBodyChannelsChannel &) = default ;
    DescribeCasterChannelsResponseBodyChannelsChannel(DescribeCasterChannelsResponseBodyChannelsChannel &&) = default ;
    DescribeCasterChannelsResponseBodyChannelsChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterChannelsResponseBodyChannelsChannel() = default ;
    DescribeCasterChannelsResponseBodyChannelsChannel& operator=(const DescribeCasterChannelsResponseBodyChannelsChannel &) = default ;
    DescribeCasterChannelsResponseBodyChannelsChannel& operator=(DescribeCasterChannelsResponseBodyChannelsChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->faceBeauty_ != nullptr && this->resourceId_ != nullptr && this->rtmpUrl_ != nullptr && this->streamUrl_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeCasterChannelsResponseBodyChannelsChannel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // faceBeauty Field Functions 
    bool hasFaceBeauty() const { return this->faceBeauty_ != nullptr;};
    void deleteFaceBeauty() { this->faceBeauty_ = nullptr;};
    inline string faceBeauty() const { DARABONBA_PTR_GET_DEFAULT(faceBeauty_, "") };
    inline DescribeCasterChannelsResponseBodyChannelsChannel& setFaceBeauty(string faceBeauty) { DARABONBA_PTR_SET_VALUE(faceBeauty_, faceBeauty) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeCasterChannelsResponseBodyChannelsChannel& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // rtmpUrl Field Functions 
    bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
    void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
    inline string rtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
    inline DescribeCasterChannelsResponseBodyChannelsChannel& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeCasterChannelsResponseBodyChannelsChannel& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // The ID of the channel.
    // 
    // The layout references the channel ID when the channel is enabled. You can specify up to one video resource for the channel. The value of this parameter must be in the RV[Number] format, such as RV01 and RV12.
    std::shared_ptr<string> channelId_ = nullptr;
    // The face retouching effect. Valid values: 0 (all effects), 1 (skin smoothing), 2 (skin whitening), 3 (dark circles removal), and 4 (nasolabial folds removal).
    std::shared_ptr<string> faceBeauty_ = nullptr;
    // The ID of the video resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The URL in the Real-Time Messaging Protocol (RTMP) format.
    std::shared_ptr<string> rtmpUrl_ = nullptr;
    // The URL of the output content in the channel.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
