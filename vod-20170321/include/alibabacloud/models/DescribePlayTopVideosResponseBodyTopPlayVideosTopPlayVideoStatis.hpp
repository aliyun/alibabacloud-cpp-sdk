// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODYTOPPLAYVIDEOSTOPPLAYVIDEOSTATIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYTOPVIDEOSRESPONSEBODYTOPPLAYVIDEOSTOPPLAYVIDEOSTATIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& obj) { 
      DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UV, UV_);
      DARABONBA_PTR_TO_JSON(VV, VV_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UV, UV_);
      DARABONBA_PTR_FROM_JSON(VV, VV_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis() = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis(const DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis &) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis(DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis &&) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis() = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& operator=(const DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis &) = default ;
    DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& operator=(DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playDuration_ == nullptr
        && return this->title_ == nullptr && return this->UV_ == nullptr && return this->VV_ == nullptr && return this->videoId_ == nullptr; };
    // playDuration Field Functions 
    bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
    void deletePlayDuration() { this->playDuration_ = nullptr;};
    inline string playDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, "") };
    inline DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& setPlayDuration(string playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // UV Field Functions 
    bool hasUV() const { return this->UV_ != nullptr;};
    void deleteUV() { this->UV_ = nullptr;};
    inline string UV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
    inline DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


    // VV Field Functions 
    bool hasVV() const { return this->VV_ != nullptr;};
    void deleteVV() { this->VV_ = nullptr;};
    inline string VV() const { DARABONBA_PTR_GET_DEFAULT(VV_, "") };
    inline DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& setVV(string VV) { DARABONBA_PTR_SET_VALUE(VV_, VV) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DescribePlayTopVideosResponseBodyTopPlayVideosTopPlayVideoStatis& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The total playback duration. Unit: milliseconds.
    std::shared_ptr<string> playDuration_ = nullptr;
    // The title of the video.
    std::shared_ptr<string> title_ = nullptr;
    // The number of unique visitors.
    std::shared_ptr<string> UV_ = nullptr;
    // The number of video views.
    std::shared_ptr<string> VV_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
