// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRTSLIVESTREAMTRANSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRTSLIVESTREAMTRANSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddRtsLiveStreamTranscodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRtsLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_TO_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_TO_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_TO_JSON(DeleteBframes, deleteBframes_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(FPS, FPS_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Lazy, lazy_);
      DARABONBA_PTR_TO_JSON(Opus, opus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, AddRtsLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_FROM_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_FROM_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_FROM_JSON(DeleteBframes, deleteBframes_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(FPS, FPS_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Lazy, lazy_);
      DARABONBA_PTR_FROM_JSON(Opus, opus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    AddRtsLiveStreamTranscodeRequest() = default ;
    AddRtsLiveStreamTranscodeRequest(const AddRtsLiveStreamTranscodeRequest &) = default ;
    AddRtsLiveStreamTranscodeRequest(AddRtsLiveStreamTranscodeRequest &&) = default ;
    AddRtsLiveStreamTranscodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRtsLiveStreamTranscodeRequest() = default ;
    AddRtsLiveStreamTranscodeRequest& operator=(const AddRtsLiveStreamTranscodeRequest &) = default ;
    AddRtsLiveStreamTranscodeRequest& operator=(AddRtsLiveStreamTranscodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->audioBitrate_ == nullptr && this->audioChannelNum_ == nullptr && this->audioCodec_ == nullptr && this->audioProfile_ == nullptr && this->audioRate_ == nullptr
        && this->deleteBframes_ == nullptr && this->domain_ == nullptr && this->FPS_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr
        && this->lazy_ == nullptr && this->opus_ == nullptr && this->ownerId_ == nullptr && this->profile_ == nullptr && this->regionId_ == nullptr
        && this->template_ == nullptr && this->templateType_ == nullptr && this->videoBitrate_ == nullptr && this->width_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t getAudioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string getAudioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string getAudioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t getAudioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // deleteBframes Field Functions 
    bool hasDeleteBframes() const { return this->deleteBframes_ != nullptr;};
    void deleteDeleteBframes() { this->deleteBframes_ = nullptr;};
    inline bool getDeleteBframes() const { DARABONBA_PTR_GET_DEFAULT(deleteBframes_, false) };
    inline AddRtsLiveStreamTranscodeRequest& setDeleteBframes(bool deleteBframes) { DARABONBA_PTR_SET_VALUE(deleteBframes_, deleteBframes) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t getFPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string getLazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // opus Field Functions 
    bool hasOpus() const { return this->opus_ != nullptr;};
    void deleteOpus() { this->opus_ = nullptr;};
    inline bool getOpus() const { DARABONBA_PTR_GET_DEFAULT(opus_, false) };
    inline AddRtsLiveStreamTranscodeRequest& setOpus(bool opus) { DARABONBA_PTR_SET_VALUE(opus_, opus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddRtsLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline int32_t getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setProfile(int32_t profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The AppName of the live stream. Requirements:
    // 
    // - Supports letters, digits, underscores (_), and hyphens (-).
    // 
    // - Must start with a letter or a digit. A name longer than three characters is recommended.
    // 
    // This parameter is required.
    shared_ptr<string> app_ {};
    // The output audio bitrate. Unit: kbps. Valid values: 1 to **1000**.
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to audio.
    shared_ptr<int32_t> audioBitrate_ {};
    // The number of audio channels. Valid values:
    // 
    // - **1**: mono.
    // 
    // - **2**: stereo.
    shared_ptr<int32_t> audioChannelNum_ {};
    // The audio codec. Valid values:
    // 
    // - **aac**
    // 
    // - **mp3**
    // 
    // > To use the Opus codec, set the Opus parameter to true.
    shared_ptr<string> audioCodec_ {};
    // The audio codec profile. Valid values:
    // 
    // - **aac_low**
    // 
    // - **aac_he**
    // 
    // - **aac_he_v2**
    // 
    // - **aac_ld**
    shared_ptr<string> audioProfile_ {};
    // The audio sample rate. Valid values: **22050** to **96000**. Recommended: 44100. Unit: Hz.
    // 
    // > If AudioProfile is set to aac_ld, the sample rate cannot exceed 44100.
    shared_ptr<int32_t> audioRate_ {};
    // Controls whether to remove B-frames from the transcoded output video. Valid values:
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to h264, h264-nbhd, or h264-origin.
    // 
    // 
    // 
    // - **true**: The transcoded video has no B-frames.
    // 
    // - **false**: The transcoded video contains B-frames. This is the default value.
    shared_ptr<bool> deleteBframes_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The frame rate of the output video. Unit: frames per second (FPS). Valid values: 1 to **60**.
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to h264, h264-nbhd, or h264-origin.
    shared_ptr<int32_t> FPS_ {};
    // The Group of Pictures (GOP) size, which specifies the keyframe interval. Unit: seconds. Valid values: **1** to **3**.
    shared_ptr<string> gop_ {};
    // Output video height in pixels.
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to h264, h264-nbhd, or h264-origin.
    // 
    // 
    // 
    // Requirements:
    // 
    // - **Height ≥ 100**
    // 
    // - **max(Height, Width) ≤ 2560**
    // 
    // - **min(Height, Width) ≤ 1440**
    // 
    // For example, a resolution of 1560 × 1560 (a square video) is invalid.
    // 
    // > For h264-origin templates, the resolution can be up to 4K to retain the information of the source stream.
    shared_ptr<int32_t> height_ {};
    // Specifies whether to enable on-demand transcoding. Valid values:
    // 
    // - **yes**: Transcoding only starts when the first viewer requests this transcoded stream.
    // 
    // - **no**: Transcoding starts immediately after the stream is published.
    shared_ptr<string> lazy_ {};
    // Specifies whether to use the Opus codec for audio transcoding. This is mainly for compatibility with native WebRTC. Valid values:
    // 
    // - **true**: Transcodes the audio to the Opus format.
    // 
    // - **false**: Does not use the Opus format for transcoding. This is the default value.
    shared_ptr<bool> opus_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The video codec profile. A larger value indicates better video quality and higher resource consumption for encoding and decoding. Valid values:
    // 
    // - **1**: baseline (for mobile devices).
    // 
    // - **2**: main (for SD devices).
    // 
    // - **3**: high (for HD devices).
    shared_ptr<int32_t> profile_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The name of the custom transcoding template. Requirements:
    // 
    // - Supports letters, digits, underscores (_), and hyphens (-).
    // 
    // - Must start with a letter or a digit. A name longer than three characters is recommended.
    // 
    // > The name cannot be the same as that of a standard transcoding template.
    // 
    // This parameter is required.
    shared_ptr<string> template_ {};
    // The type of the custom transcoding template. Valid values:
    // 
    // - **h264**: custom H.264 standard transcoding.
    // 
    // - **h264-nbhd**: custom H.264 Narrowband HD™ transcoding.
    // 
    // - **h264-origin**: original quality H.264 standard transcoding. It preserves the parameters of the source video as closely as possible.
    // 
    // - **audio**: audio-only transcoding. The output file contains only audio. If you set this parameter to audio, you must set AudioBitrate.
    // 
    // > For video types, Height, Width, FPS, VideoBitrate, and DeleteBframe are required.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    // The output video bitrate. Unit: kbps. Valid values: 1 to **6000**.
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to h264, h264-nbhd, or h264-origin.
    // 
    // 
    // 
    // > The system tries to transcode the video at the specified bitrate. However, the actual bitrate may not be the same as the specified value, especially when the specified value is too high or too low.
    shared_ptr<int32_t> videoBitrate_ {};
    // Output video width in pixels.
    // 
    // >Notice: 
    // 
    // Required if you set TemplateType to h264, h264-nbhd, or h264-origin.
    // 
    // 
    // 
    // Requirements:
    // 
    // - **Width ≥ 100**
    // 
    // - **max(Height, Width) ≤ 2560**
    // 
    // - **min(Height, Width) ≤ 1440**
    // 
    // For example, a resolution of 1560 × 1560 (a square video) is invalid.
    // 
    // > For h264-origin templates, the resolution can be up to 4K to retain the information of the source stream.
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
