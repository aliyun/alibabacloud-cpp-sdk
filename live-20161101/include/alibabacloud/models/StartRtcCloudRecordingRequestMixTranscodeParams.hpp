// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXTRANSCODEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXTRANSCODEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestMixTranscodeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestMixTranscodeParams& obj) { 
      DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_TO_JSON(AudioChannels, audioChannels_);
      DARABONBA_PTR_TO_JSON(AudioSampleRate, audioSampleRate_);
      DARABONBA_PTR_TO_JSON(FrameFillType, frameFillType_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(VideoFramerate, videoFramerate_);
      DARABONBA_PTR_TO_JSON(VideoGop, videoGop_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestMixTranscodeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_FROM_JSON(AudioChannels, audioChannels_);
      DARABONBA_PTR_FROM_JSON(AudioSampleRate, audioSampleRate_);
      DARABONBA_PTR_FROM_JSON(FrameFillType, frameFillType_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(VideoFramerate, videoFramerate_);
      DARABONBA_PTR_FROM_JSON(VideoGop, videoGop_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
    };
    StartRtcCloudRecordingRequestMixTranscodeParams() = default ;
    StartRtcCloudRecordingRequestMixTranscodeParams(const StartRtcCloudRecordingRequestMixTranscodeParams &) = default ;
    StartRtcCloudRecordingRequestMixTranscodeParams(StartRtcCloudRecordingRequestMixTranscodeParams &&) = default ;
    StartRtcCloudRecordingRequestMixTranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestMixTranscodeParams() = default ;
    StartRtcCloudRecordingRequestMixTranscodeParams& operator=(const StartRtcCloudRecordingRequestMixTranscodeParams &) = default ;
    StartRtcCloudRecordingRequestMixTranscodeParams& operator=(StartRtcCloudRecordingRequestMixTranscodeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioBitrate_ == nullptr
        && return this->audioChannels_ == nullptr && return this->audioSampleRate_ == nullptr && return this->frameFillType_ == nullptr && return this->videoBitrate_ == nullptr && return this->videoCodec_ == nullptr
        && return this->videoFramerate_ == nullptr && return this->videoGop_ == nullptr && return this->videoHeight_ == nullptr && return this->videoWidth_ == nullptr; };
    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int64_t audioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0L) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setAudioBitrate(int64_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannels Field Functions 
    bool hasAudioChannels() const { return this->audioChannels_ != nullptr;};
    void deleteAudioChannels() { this->audioChannels_ = nullptr;};
    inline int32_t audioChannels() const { DARABONBA_PTR_GET_DEFAULT(audioChannels_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setAudioChannels(int32_t audioChannels) { DARABONBA_PTR_SET_VALUE(audioChannels_, audioChannels) };


    // audioSampleRate Field Functions 
    bool hasAudioSampleRate() const { return this->audioSampleRate_ != nullptr;};
    void deleteAudioSampleRate() { this->audioSampleRate_ = nullptr;};
    inline int64_t audioSampleRate() const { DARABONBA_PTR_GET_DEFAULT(audioSampleRate_, 0L) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setAudioSampleRate(int64_t audioSampleRate) { DARABONBA_PTR_SET_VALUE(audioSampleRate_, audioSampleRate) };


    // frameFillType Field Functions 
    bool hasFrameFillType() const { return this->frameFillType_ != nullptr;};
    void deleteFrameFillType() { this->frameFillType_ = nullptr;};
    inline int32_t frameFillType() const { DARABONBA_PTR_GET_DEFAULT(frameFillType_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setFrameFillType(int32_t frameFillType) { DARABONBA_PTR_SET_VALUE(frameFillType_, frameFillType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // videoFramerate Field Functions 
    bool hasVideoFramerate() const { return this->videoFramerate_ != nullptr;};
    void deleteVideoFramerate() { this->videoFramerate_ = nullptr;};
    inline int32_t videoFramerate() const { DARABONBA_PTR_GET_DEFAULT(videoFramerate_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoFramerate(int32_t videoFramerate) { DARABONBA_PTR_SET_VALUE(videoFramerate_, videoFramerate) };


    // videoGop Field Functions 
    bool hasVideoGop() const { return this->videoGop_ != nullptr;};
    void deleteVideoGop() { this->videoGop_ = nullptr;};
    inline int32_t videoGop() const { DARABONBA_PTR_GET_DEFAULT(videoGop_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoGop(int32_t videoGop) { DARABONBA_PTR_SET_VALUE(videoGop_, videoGop) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int32_t videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoHeight(int32_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int32_t videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0) };
    inline StartRtcCloudRecordingRequestMixTranscodeParams& setVideoWidth(int32_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> audioBitrate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> audioChannels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> audioSampleRate_ = nullptr;
    std::shared_ptr<int32_t> frameFillType_ = nullptr;
    std::shared_ptr<int32_t> videoBitrate_ = nullptr;
    std::shared_ptr<string> videoCodec_ = nullptr;
    std::shared_ptr<int32_t> videoFramerate_ = nullptr;
    std::shared_ptr<int32_t> videoGop_ = nullptr;
    std::shared_ptr<int32_t> videoHeight_ = nullptr;
    std::shared_ptr<int32_t> videoWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
