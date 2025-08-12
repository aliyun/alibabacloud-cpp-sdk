// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFOCUSTOMTRANSCODEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFOCUSTOMTRANSCODEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_TO_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_TO_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_TO_JSON(Bframes, bframes_);
      DARABONBA_ANY_TO_JSON(BitrateWithSource, bitrateWithSource_);
      DARABONBA_ANY_TO_JSON(ExtWithSource, extWithSource_);
      DARABONBA_PTR_TO_JSON(FPS, FPS_);
      DARABONBA_ANY_TO_JSON(FpsWithSource, fpsWithSource_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_ANY_TO_JSON(ResWithSource, resWithSource_);
      DARABONBA_PTR_TO_JSON(RtsFlag, rtsFlag_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoProfile, videoProfile_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_FROM_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_FROM_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_FROM_JSON(Bframes, bframes_);
      DARABONBA_ANY_FROM_JSON(BitrateWithSource, bitrateWithSource_);
      DARABONBA_ANY_FROM_JSON(ExtWithSource, extWithSource_);
      DARABONBA_PTR_FROM_JSON(FPS, FPS_);
      DARABONBA_ANY_FROM_JSON(FpsWithSource, fpsWithSource_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_ANY_FROM_JSON(ResWithSource, resWithSource_);
      DARABONBA_PTR_FROM_JSON(RtsFlag, rtsFlag_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoProfile, videoProfile_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& operator=(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& operator=(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioBitrate_ != nullptr
        && this->audioChannelNum_ != nullptr && this->audioCodec_ != nullptr && this->audioProfile_ != nullptr && this->audioRate_ != nullptr && this->bframes_ != nullptr
        && this->bitrateWithSource_ != nullptr && this->extWithSource_ != nullptr && this->FPS_ != nullptr && this->fpsWithSource_ != nullptr && this->gop_ != nullptr
        && this->height_ != nullptr && this->resWithSource_ != nullptr && this->rtsFlag_ != nullptr && this->templateType_ != nullptr && this->videoBitrate_ != nullptr
        && this->videoProfile_ != nullptr && this->width_ != nullptr; };
    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t audioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t audioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string audioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string audioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t audioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // bframes Field Functions 
    bool hasBframes() const { return this->bframes_ != nullptr;};
    void deleteBframes() { this->bframes_ = nullptr;};
    inline string bframes() const { DARABONBA_PTR_GET_DEFAULT(bframes_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setBframes(string bframes) { DARABONBA_PTR_SET_VALUE(bframes_, bframes) };


    // bitrateWithSource Field Functions 
    bool hasBitrateWithSource() const { return this->bitrateWithSource_ != nullptr;};
    void deleteBitrateWithSource() { this->bitrateWithSource_ = nullptr;};
    inline     const Darabonba::Json & bitrateWithSource() const { DARABONBA_GET(bitrateWithSource_) };
    Darabonba::Json & bitrateWithSource() { DARABONBA_GET(bitrateWithSource_) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setBitrateWithSource(const Darabonba::Json & bitrateWithSource) { DARABONBA_SET_VALUE(bitrateWithSource_, bitrateWithSource) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setBitrateWithSource(Darabonba::Json & bitrateWithSource) { DARABONBA_SET_RVALUE(bitrateWithSource_, bitrateWithSource) };


    // extWithSource Field Functions 
    bool hasExtWithSource() const { return this->extWithSource_ != nullptr;};
    void deleteExtWithSource() { this->extWithSource_ = nullptr;};
    inline     const Darabonba::Json & extWithSource() const { DARABONBA_GET(extWithSource_) };
    Darabonba::Json & extWithSource() { DARABONBA_GET(extWithSource_) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setExtWithSource(const Darabonba::Json & extWithSource) { DARABONBA_SET_VALUE(extWithSource_, extWithSource) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setExtWithSource(Darabonba::Json & extWithSource) { DARABONBA_SET_RVALUE(extWithSource_, extWithSource) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t FPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // fpsWithSource Field Functions 
    bool hasFpsWithSource() const { return this->fpsWithSource_ != nullptr;};
    void deleteFpsWithSource() { this->fpsWithSource_ = nullptr;};
    inline     const Darabonba::Json & fpsWithSource() const { DARABONBA_GET(fpsWithSource_) };
    Darabonba::Json & fpsWithSource() { DARABONBA_GET(fpsWithSource_) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setFpsWithSource(const Darabonba::Json & fpsWithSource) { DARABONBA_SET_VALUE(fpsWithSource_, fpsWithSource) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setFpsWithSource(Darabonba::Json & fpsWithSource) { DARABONBA_SET_RVALUE(fpsWithSource_, fpsWithSource) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // resWithSource Field Functions 
    bool hasResWithSource() const { return this->resWithSource_ != nullptr;};
    void deleteResWithSource() { this->resWithSource_ = nullptr;};
    inline     const Darabonba::Json & resWithSource() const { DARABONBA_GET(resWithSource_) };
    Darabonba::Json & resWithSource() { DARABONBA_GET(resWithSource_) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setResWithSource(const Darabonba::Json & resWithSource) { DARABONBA_SET_VALUE(resWithSource_, resWithSource) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setResWithSource(Darabonba::Json & resWithSource) { DARABONBA_SET_RVALUE(resWithSource_, resWithSource) };


    // rtsFlag Field Functions 
    bool hasRtsFlag() const { return this->rtsFlag_ != nullptr;};
    void deleteRtsFlag() { this->rtsFlag_ = nullptr;};
    inline string rtsFlag() const { DARABONBA_PTR_GET_DEFAULT(rtsFlag_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setRtsFlag(string rtsFlag) { DARABONBA_PTR_SET_VALUE(rtsFlag_, rtsFlag) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoProfile Field Functions 
    bool hasVideoProfile() const { return this->videoProfile_ != nullptr;};
    void deleteVideoProfile() { this->videoProfile_ = nullptr;};
    inline string videoProfile() const { DARABONBA_PTR_GET_DEFAULT(videoProfile_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setVideoProfile(string videoProfile) { DARABONBA_PTR_SET_VALUE(videoProfile_, videoProfile) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the output audio. Unit: Kbit/s. Valid values: **1 to 1000**.
    std::shared_ptr<int32_t> audioBitrate_ = nullptr;
    // The number of sound channels. Valid values:
    // 
    // *   **1**: mono
    // *   **2**: binaural
    std::shared_ptr<int32_t> audioChannelNum_ = nullptr;
    // The audio encoding format.
    std::shared_ptr<string> audioCodec_ = nullptr;
    // The audio encoding profile. Valid values:
    // 
    // *   **aac_low**
    // *   **aac_he**
    // *   **aac_he_v2**
    // *   **aac_ld**
    std::shared_ptr<string> audioProfile_ = nullptr;
    // The audio sampling rate. Valid values: **22050 to 96000**.
    // 
    // >  If the value of AudioProfile is **aac_ld**, the audio sampling rate cannot exceed 44100.
    std::shared_ptr<int32_t> audioRate_ = nullptr;
    // Indicates whether B-frame removal is enabled. Fixed value: **0**.
    std::shared_ptr<string> bframes_ = nullptr;
    // The source-based bitrate settings.
    Darabonba::Json bitrateWithSource_ = nullptr;
    // Other source-based settings.
    Darabonba::Json extWithSource_ = nullptr;
    // The frame rate of the output video. Unit: frames per second (FPS).
    std::shared_ptr<int32_t> FPS_ = nullptr;
    // The source-based frame rate settings.
    Darabonba::Json fpsWithSource_ = nullptr;
    // The group of pictures (GOP) size of the output video. Unit: frames. Valid values: **1 to 3000**.
    std::shared_ptr<string> gop_ = nullptr;
    // The height of the output video.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The source-based resolution settings.
    Darabonba::Json resWithSource_ = nullptr;
    // The Real-Time Transcoding (RTS) flag. Fixed value: **true**.
    // 
    // >  This parameter is returned only if RTS is used for transcoding.
    std::shared_ptr<string> rtsFlag_ = nullptr;
    // The type of the custom transcoding template. Valid values:
    // 
    // *   **h264**: custom H.264 standard transcoding
    // *   **h264-nbhd**: custom H.264 Narrowband HD™ transcoding
    // *   **h265**: custom H.265 standard transcoding
    // *   **h265-nbhd**: custom H.265 Narrowband HD™ transcoding
    // *   **audio**: audio-only transcoding
    std::shared_ptr<string> templateType_ = nullptr;
    // The bitrate of the output video. Unit: Kbit/s.
    std::shared_ptr<int32_t> videoBitrate_ = nullptr;
    // The video encoding profile. Valid values:
    // 
    // *   **baseline**: suitable for mobile devices.
    // *   **main**: suitable for standard-definition devices.
    // *   **high**: suitable for high-definition devices.
    std::shared_ptr<string> videoProfile_ = nullptr;
    // The width of the output video.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
