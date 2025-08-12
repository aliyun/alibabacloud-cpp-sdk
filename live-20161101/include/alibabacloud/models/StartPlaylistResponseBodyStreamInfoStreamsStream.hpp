// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFOSTREAMSSTREAM_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODYSTREAMINFOSTREAMSSTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistResponseBodyStreamInfoStreamsStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistResponseBodyStreamInfoStreamsStream& obj) { 
      DARABONBA_PTR_TO_JSON(PullFlvUrl, pullFlvUrl_);
      DARABONBA_PTR_TO_JSON(PullM3U8Url, pullM3U8Url_);
      DARABONBA_PTR_TO_JSON(PullRtmpUrl, pullRtmpUrl_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistResponseBodyStreamInfoStreamsStream& obj) { 
      DARABONBA_PTR_FROM_JSON(PullFlvUrl, pullFlvUrl_);
      DARABONBA_PTR_FROM_JSON(PullM3U8Url, pullM3U8Url_);
      DARABONBA_PTR_FROM_JSON(PullRtmpUrl, pullRtmpUrl_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
    };
    StartPlaylistResponseBodyStreamInfoStreamsStream() = default ;
    StartPlaylistResponseBodyStreamInfoStreamsStream(const StartPlaylistResponseBodyStreamInfoStreamsStream &) = default ;
    StartPlaylistResponseBodyStreamInfoStreamsStream(StartPlaylistResponseBodyStreamInfoStreamsStream &&) = default ;
    StartPlaylistResponseBodyStreamInfoStreamsStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistResponseBodyStreamInfoStreamsStream() = default ;
    StartPlaylistResponseBodyStreamInfoStreamsStream& operator=(const StartPlaylistResponseBodyStreamInfoStreamsStream &) = default ;
    StartPlaylistResponseBodyStreamInfoStreamsStream& operator=(StartPlaylistResponseBodyStreamInfoStreamsStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pullFlvUrl_ != nullptr
        && this->pullM3U8Url_ != nullptr && this->pullRtmpUrl_ != nullptr && this->quality_ != nullptr; };
    // pullFlvUrl Field Functions 
    bool hasPullFlvUrl() const { return this->pullFlvUrl_ != nullptr;};
    void deletePullFlvUrl() { this->pullFlvUrl_ = nullptr;};
    inline string pullFlvUrl() const { DARABONBA_PTR_GET_DEFAULT(pullFlvUrl_, "") };
    inline StartPlaylistResponseBodyStreamInfoStreamsStream& setPullFlvUrl(string pullFlvUrl) { DARABONBA_PTR_SET_VALUE(pullFlvUrl_, pullFlvUrl) };


    // pullM3U8Url Field Functions 
    bool hasPullM3U8Url() const { return this->pullM3U8Url_ != nullptr;};
    void deletePullM3U8Url() { this->pullM3U8Url_ = nullptr;};
    inline string pullM3U8Url() const { DARABONBA_PTR_GET_DEFAULT(pullM3U8Url_, "") };
    inline StartPlaylistResponseBodyStreamInfoStreamsStream& setPullM3U8Url(string pullM3U8Url) { DARABONBA_PTR_SET_VALUE(pullM3U8Url_, pullM3U8Url) };


    // pullRtmpUrl Field Functions 
    bool hasPullRtmpUrl() const { return this->pullRtmpUrl_ != nullptr;};
    void deletePullRtmpUrl() { this->pullRtmpUrl_ = nullptr;};
    inline string pullRtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(pullRtmpUrl_, "") };
    inline StartPlaylistResponseBodyStreamInfoStreamsStream& setPullRtmpUrl(string pullRtmpUrl) { DARABONBA_PTR_SET_VALUE(pullRtmpUrl_, pullRtmpUrl) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline string quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, "") };
    inline StartPlaylistResponseBodyStreamInfoStreamsStream& setQuality(string quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


  protected:
    // The streaming URL in the Flash Video (FLV) format.
    std::shared_ptr<string> pullFlvUrl_ = nullptr;
    // The streaming URL in the Real-Time Messaging Protocol (RTMP) format.
    std::shared_ptr<string> pullM3U8Url_ = nullptr;
    // The streaming URL in the M3U8 format.
    std::shared_ptr<string> pullRtmpUrl_ = nullptr;
    // The video quality of the live stream. Valid values: **original**: original quality
    std::shared_ptr<string> quality_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
