// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODYQOEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMEDIAPLAYDATARESPONSEBODYQOEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMediaPlayDataResponseBodyQoeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMediaPlayDataResponseBodyQoeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DAU, DAU_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_TO_JSON(PlayDurationPerUv, playDurationPerUv_);
      DARABONBA_PTR_TO_JSON(PlayPerVv, playPerVv_);
      DARABONBA_PTR_TO_JSON(PlaySuccessVv, playSuccessVv_);
      DARABONBA_PTR_TO_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_TO_JSON(VideoTitle, videoTitle_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMediaPlayDataResponseBodyQoeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DAU, DAU_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(PlayDuration, playDuration_);
      DARABONBA_PTR_FROM_JSON(PlayDurationPerUv, playDurationPerUv_);
      DARABONBA_PTR_FROM_JSON(PlayPerVv, playPerVv_);
      DARABONBA_PTR_FROM_JSON(PlaySuccessVv, playSuccessVv_);
      DARABONBA_PTR_FROM_JSON(VideoDuration, videoDuration_);
      DARABONBA_PTR_FROM_JSON(VideoTitle, videoTitle_);
    };
    DescribeVodMediaPlayDataResponseBodyQoeInfoList() = default ;
    DescribeVodMediaPlayDataResponseBodyQoeInfoList(const DescribeVodMediaPlayDataResponseBodyQoeInfoList &) = default ;
    DescribeVodMediaPlayDataResponseBodyQoeInfoList(DescribeVodMediaPlayDataResponseBodyQoeInfoList &&) = default ;
    DescribeVodMediaPlayDataResponseBodyQoeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMediaPlayDataResponseBodyQoeInfoList() = default ;
    DescribeVodMediaPlayDataResponseBodyQoeInfoList& operator=(const DescribeVodMediaPlayDataResponseBodyQoeInfoList &) = default ;
    DescribeVodMediaPlayDataResponseBodyQoeInfoList& operator=(DescribeVodMediaPlayDataResponseBodyQoeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DAU_ == nullptr
        && return this->mediaId_ == nullptr && return this->playDuration_ == nullptr && return this->playDurationPerUv_ == nullptr && return this->playPerVv_ == nullptr && return this->playSuccessVv_ == nullptr
        && return this->videoDuration_ == nullptr && return this->videoTitle_ == nullptr; };
    // DAU Field Functions 
    bool hasDAU() const { return this->DAU_ != nullptr;};
    void deleteDAU() { this->DAU_ = nullptr;};
    inline float DAU() const { DARABONBA_PTR_GET_DEFAULT(DAU_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setDAU(float DAU) { DARABONBA_PTR_SET_VALUE(DAU_, DAU) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // playDuration Field Functions 
    bool hasPlayDuration() const { return this->playDuration_ != nullptr;};
    void deletePlayDuration() { this->playDuration_ = nullptr;};
    inline float playDuration() const { DARABONBA_PTR_GET_DEFAULT(playDuration_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setPlayDuration(float playDuration) { DARABONBA_PTR_SET_VALUE(playDuration_, playDuration) };


    // playDurationPerUv Field Functions 
    bool hasPlayDurationPerUv() const { return this->playDurationPerUv_ != nullptr;};
    void deletePlayDurationPerUv() { this->playDurationPerUv_ = nullptr;};
    inline float playDurationPerUv() const { DARABONBA_PTR_GET_DEFAULT(playDurationPerUv_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setPlayDurationPerUv(float playDurationPerUv) { DARABONBA_PTR_SET_VALUE(playDurationPerUv_, playDurationPerUv) };


    // playPerVv Field Functions 
    bool hasPlayPerVv() const { return this->playPerVv_ != nullptr;};
    void deletePlayPerVv() { this->playPerVv_ = nullptr;};
    inline float playPerVv() const { DARABONBA_PTR_GET_DEFAULT(playPerVv_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setPlayPerVv(float playPerVv) { DARABONBA_PTR_SET_VALUE(playPerVv_, playPerVv) };


    // playSuccessVv Field Functions 
    bool hasPlaySuccessVv() const { return this->playSuccessVv_ != nullptr;};
    void deletePlaySuccessVv() { this->playSuccessVv_ = nullptr;};
    inline float playSuccessVv() const { DARABONBA_PTR_GET_DEFAULT(playSuccessVv_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setPlaySuccessVv(float playSuccessVv) { DARABONBA_PTR_SET_VALUE(playSuccessVv_, playSuccessVv) };


    // videoDuration Field Functions 
    bool hasVideoDuration() const { return this->videoDuration_ != nullptr;};
    void deleteVideoDuration() { this->videoDuration_ = nullptr;};
    inline float videoDuration() const { DARABONBA_PTR_GET_DEFAULT(videoDuration_, 0.0) };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setVideoDuration(float videoDuration) { DARABONBA_PTR_SET_VALUE(videoDuration_, videoDuration) };


    // videoTitle Field Functions 
    bool hasVideoTitle() const { return this->videoTitle_ != nullptr;};
    void deleteVideoTitle() { this->videoTitle_ = nullptr;};
    inline string videoTitle() const { DARABONBA_PTR_GET_DEFAULT(videoTitle_, "") };
    inline DescribeVodMediaPlayDataResponseBodyQoeInfoList& setVideoTitle(string videoTitle) { DARABONBA_PTR_SET_VALUE(videoTitle_, videoTitle) };


  protected:
    // The number of visits to the audio or video per day.
    std::shared_ptr<float> DAU_ = nullptr;
    // The ID of the media file (VideoId).
    std::shared_ptr<string> mediaId_ = nullptr;
    // The total playback duration of the audio or video. Unit: seconds.
    std::shared_ptr<float> playDuration_ = nullptr;
    // The average playback duration of the audio or video per viewer. Unit: seconds.
    std::shared_ptr<float> playDurationPerUv_ = nullptr;
    // The average number of times that the audio or video was played per viewer.
    std::shared_ptr<float> playPerVv_ = nullptr;
    // The total number of times the audio or video has been played.
    std::shared_ptr<float> playSuccessVv_ = nullptr;
    // The duration of the audio or video file. Unit: seconds.
    std::shared_ptr<float> videoDuration_ = nullptr;
    // The name of the audio or video file.
    std::shared_ptr<string> videoTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
