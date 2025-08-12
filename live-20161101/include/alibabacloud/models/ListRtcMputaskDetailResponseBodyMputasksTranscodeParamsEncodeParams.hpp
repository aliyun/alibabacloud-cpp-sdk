// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSENCODEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSENCODEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_TO_JSON(AudioChannels, audioChannels_);
      DARABONBA_PTR_TO_JSON(AudioOnly, audioOnly_);
      DARABONBA_PTR_TO_JSON(AudioSampleRate, audioSampleRate_);
      DARABONBA_PTR_TO_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(VideoFramerate, videoFramerate_);
      DARABONBA_PTR_TO_JSON(VideoGop, videoGop_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_FROM_JSON(AudioChannels, audioChannels_);
      DARABONBA_PTR_FROM_JSON(AudioOnly, audioOnly_);
      DARABONBA_PTR_FROM_JSON(AudioSampleRate, audioSampleRate_);
      DARABONBA_PTR_FROM_JSON(EnhancedParam, enhancedParam_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(VideoFramerate, videoFramerate_);
      DARABONBA_PTR_FROM_JSON(VideoGop, videoGop_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioBitrate_ != nullptr
        && this->audioChannels_ != nullptr && this->audioOnly_ != nullptr && this->audioSampleRate_ != nullptr && this->enhancedParam_ != nullptr && this->videoBitrate_ != nullptr
        && this->videoCodec_ != nullptr && this->videoFramerate_ != nullptr && this->videoGop_ != nullptr && this->videoHeight_ != nullptr && this->videoWidth_ != nullptr; };
    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline string audioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setAudioBitrate(string audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannels Field Functions 
    bool hasAudioChannels() const { return this->audioChannels_ != nullptr;};
    void deleteAudioChannels() { this->audioChannels_ = nullptr;};
    inline string audioChannels() const { DARABONBA_PTR_GET_DEFAULT(audioChannels_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setAudioChannels(string audioChannels) { DARABONBA_PTR_SET_VALUE(audioChannels_, audioChannels) };


    // audioOnly Field Functions 
    bool hasAudioOnly() const { return this->audioOnly_ != nullptr;};
    void deleteAudioOnly() { this->audioOnly_ = nullptr;};
    inline string audioOnly() const { DARABONBA_PTR_GET_DEFAULT(audioOnly_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setAudioOnly(string audioOnly) { DARABONBA_PTR_SET_VALUE(audioOnly_, audioOnly) };


    // audioSampleRate Field Functions 
    bool hasAudioSampleRate() const { return this->audioSampleRate_ != nullptr;};
    void deleteAudioSampleRate() { this->audioSampleRate_ = nullptr;};
    inline string audioSampleRate() const { DARABONBA_PTR_GET_DEFAULT(audioSampleRate_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setAudioSampleRate(string audioSampleRate) { DARABONBA_PTR_SET_VALUE(audioSampleRate_, audioSampleRate) };


    // enhancedParam Field Functions 
    bool hasEnhancedParam() const { return this->enhancedParam_ != nullptr;};
    void deleteEnhancedParam() { this->enhancedParam_ = nullptr;};
    inline string enhancedParam() const { DARABONBA_PTR_GET_DEFAULT(enhancedParam_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setEnhancedParam(string enhancedParam) { DARABONBA_PTR_SET_VALUE(enhancedParam_, enhancedParam) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline string videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoBitrate(string videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // videoFramerate Field Functions 
    bool hasVideoFramerate() const { return this->videoFramerate_ != nullptr;};
    void deleteVideoFramerate() { this->videoFramerate_ = nullptr;};
    inline string videoFramerate() const { DARABONBA_PTR_GET_DEFAULT(videoFramerate_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoFramerate(string videoFramerate) { DARABONBA_PTR_SET_VALUE(videoFramerate_, videoFramerate) };


    // videoGop Field Functions 
    bool hasVideoGop() const { return this->videoGop_ != nullptr;};
    void deleteVideoGop() { this->videoGop_ = nullptr;};
    inline string videoGop() const { DARABONBA_PTR_GET_DEFAULT(videoGop_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoGop(string videoGop) { DARABONBA_PTR_SET_VALUE(videoGop_, videoGop) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline string videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoHeight(string videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline string videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsEncodeParams& setVideoWidth(string videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


  protected:
    // The bitrate of the audio. Unit: Kbit/s.
    std::shared_ptr<string> audioBitrate_ = nullptr;
    // The number of audio channels. Valid values: 1 and 2.
    std::shared_ptr<string> audioChannels_ = nullptr;
    // Indicates whether the output stream is an audio-only stream. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<string> audioOnly_ = nullptr;
    // The audio sampling rate. Unit: Hz.
    std::shared_ptr<string> audioSampleRate_ = nullptr;
    // The parameter for advanced video encoding. The value is a JSON string. Optional fields:
    // 
    // *   profile: the encoding level. If the video encoding format is set to H.264, the valid values of this field are baseline, main, and high.
    // *   preset: adjusts the trade-off between encoding speed and video quality. Valid values: ultrafast, superfast, veryfast, faster, fast, medium, slow, slower, veryslow, and placebo. Each value specifies a level of trade-off between encoding speed and video quality. For example, the ultrafast preset has the fastest encoding speed but the lowest video quality, while the placebo preset sacrifices the encoding speed for the best video quality.
    std::shared_ptr<string> enhancedParam_ = nullptr;
    // The bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> videoBitrate_ = nullptr;
    // The video encoding format. Default value: H.264.
    std::shared_ptr<string> videoCodec_ = nullptr;
    // The frame rate of the video. Unit: frames per second (FPS).
    std::shared_ptr<string> videoFramerate_ = nullptr;
    // The group of pictures (GOP) size of the video.
    std::shared_ptr<string> videoGop_ = nullptr;
    // The height of the video. Unit: pixels.
    std::shared_ptr<string> videoHeight_ = nullptr;
    // The width of the video. Unit: pixels.
    std::shared_ptr<string> videoWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
