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
        && return this->audioBitrate_ == nullptr && return this->audioChannelNum_ == nullptr && return this->audioCodec_ == nullptr && return this->audioProfile_ == nullptr && return this->audioRate_ == nullptr
        && return this->deleteBframes_ == nullptr && return this->domain_ == nullptr && return this->FPS_ == nullptr && return this->gop_ == nullptr && return this->height_ == nullptr
        && return this->lazy_ == nullptr && return this->opus_ == nullptr && return this->ownerId_ == nullptr && return this->profile_ == nullptr && return this->regionId_ == nullptr
        && return this->template_ == nullptr && return this->templateType_ == nullptr && return this->videoBitrate_ == nullptr && return this->width_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t audioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t audioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string audioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string audioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t audioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // deleteBframes Field Functions 
    bool hasDeleteBframes() const { return this->deleteBframes_ != nullptr;};
    void deleteDeleteBframes() { this->deleteBframes_ = nullptr;};
    inline bool deleteBframes() const { DARABONBA_PTR_GET_DEFAULT(deleteBframes_, false) };
    inline AddRtsLiveStreamTranscodeRequest& setDeleteBframes(bool deleteBframes) { DARABONBA_PTR_SET_VALUE(deleteBframes_, deleteBframes) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t FPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string lazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // opus Field Functions 
    bool hasOpus() const { return this->opus_ != nullptr;};
    void deleteOpus() { this->opus_ = nullptr;};
    inline bool opus() const { DARABONBA_PTR_GET_DEFAULT(opus_, false) };
    inline AddRtsLiveStreamTranscodeRequest& setOpus(bool opus) { DARABONBA_PTR_SET_VALUE(opus_, opus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddRtsLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline int32_t profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setProfile(int32_t profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddRtsLiveStreamTranscodeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AddRtsLiveStreamTranscodeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the application to which the live stream belongs. Value requirements:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   We recommend that you specify a name that is more than three characters in length. The name must start with a letter or digit.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The bitrate of the output audio. Unit: Kbit/s. Valid values: **1** to **1000**.
    // 
    // >  This parameter is required if you set the TemplateType parameter to audio.
    std::shared_ptr<int32_t> audioBitrate_ = nullptr;
    // The number of sound channels. Valid values:
    // 
    // *   **1**: mono
    // *   **2**: stereo
    std::shared_ptr<int32_t> audioChannelNum_ = nullptr;
    // The audio encoder. Valid values:
    // 
    // *   **aac**
    // *   **mp3**
    // 
    // > If you want to use the Opus encoding format, set the Opus parameter to true.
    std::shared_ptr<string> audioCodec_ = nullptr;
    // The audio codec profile. Valid values:
    // 
    // *   **aac_low**
    // *   **aac_he**
    // *   **aac_he_v2**
    // *   **aac_ld**
    std::shared_ptr<string> audioProfile_ = nullptr;
    // The audio sampling rate. Valid values: **22050 to 96000**. The value 44100 is commonly used. Unit: Hz.
    // 
    // > If you set the AudioProfile parameter to aac_ld, the audio sampling rate cannot exceed 44,100 Hz.
    std::shared_ptr<int32_t> audioRate_ = nullptr;
    // Specifies whether to remove B-frames during transcoding. Valid values:
    // 
    // >  This parameter is required if you set the TemplateType parameter to h264, h264-nbhd, or h264-origin.
    // 
    // *   **true**: removes B-frames.
    // *   **false**: retains B-frames. This is the default value.
    // 
    // > If you do not specify this parameter, the default value **false** is used.
    std::shared_ptr<bool> deleteBframes_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The frame rate of the output video. Unit: FPS. Valid values: **1** to **60**.
    // 
    // >  This parameter is required if you set the TemplateType parameter to h264, h264-nbhd, or h264-origin.
    std::shared_ptr<int32_t> FPS_ = nullptr;
    // The group of pictures (GOP) size of the output video. This parameter is used to specify the keyframe interval. Unit: seconds. Valid values: **1** to **3**.
    std::shared_ptr<string> gop_ = nullptr;
    // The height of the output video. Unit: pixels.
    // 
    // >  This parameter is required if you set the TemplateType parameter to h264, h264-nbhd, or h264-origin.
    // 
    // The value must comply with the following rules:****
    // 
    // *   **Height ≥ 100**: The height of the video is no less than 100 pixels.
    // *   **max(Height,Width) ≤ 2560**: The width or height of the video, whichever is greater, cannot exceed 2,560 pixels.
    // *   **min(Height,Width) ≤ 1440**: The width or height of the video, whichever is smaller, cannot exceed 1,440 pixels.
    // 
    // For example, a resolution of 1560 × 1560 pixels is invalid.
    // 
    // > An original quality template needs to retain the source information. Therefore, the video resolution cannot exceed 4K.
    std::shared_ptr<int32_t> height_ = nullptr;
    // Specifies whether to trigger transcoding only when a stream is pulled. Valid values:
    // 
    // *   **yes**: triggers transcoding only when a stream is pulled.
    // *   **no**: triggers transcoding whenever a stream is ingested, no matter whether the stream is pulled.
    std::shared_ptr<string> lazy_ = nullptr;
    // Specifies whether to transcode audio to the Opus format to be compatible with native WebRTC. Valid values:
    // 
    // *   **true**: transcodes audio to the Opus format.
    // *   **false**: does not transcode audio to the Opus format.
    // 
    // > If you do not specify this parameter, the default value **false** is used.
    std::shared_ptr<bool> opus_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The codec profile. The video codec profile determines how ApsaraVideo Live performs codec on the video. In normal cases, a greater value indicates a higher image quality and requires more codec resources. Valid values:
    // 
    // *   **1**: baseline, which is suitable for mobile devices.
    // *   **2**: main, which is suitable for standard-definition devices.
    // *   **3**: high, which is suitable for high-definition devices.
    std::shared_ptr<int32_t> profile_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the transcoding template. Value requirements:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   We recommend that you specify a name that is more than three characters in length. The name must start with a letter or digit.
    // 
    // > The name cannot be the same as that of a default transcoding template.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
    // The type of the transcoding template.
    // 
    // If you set this parameter to h264, h264-nbhd, or h264-origin, you must also specify the Height, Width, FPS, VideoBitrate, and DeleteBframes parameters. Valid values:
    // 
    // *   **h264**: H.264 standard transcoding template.
    // *   **h264-nbhd**: H.264 Narrowband HD™ transcoding template.
    // *   **h264-origin**: H.264 original quality template. If you use this type of template, the same transcoding parameters of the video source are retained by default.
    // *   **audio**: audio-only transcoding template. If you use this type of template, images are removed from the video source and an audio-only stream is generated. In addition, you must also specify the AudioBitrate parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateType_ = nullptr;
    // The bitrate of the output video. Unit: Kbit/s. Valid values: **1** to **6000**.
    // 
    // >  This parameter is required if you set the TemplateType parameter to h264, h264-nbhd, or h264-origin.
    // 
    // > The bitrate of the output video is as close to the value that you specify as possible, but not exactly the same as the value, especially when the value is excessively large or small.
    std::shared_ptr<int32_t> videoBitrate_ = nullptr;
    // The width of the output video. Unit: pixels.
    // 
    // >  This parameter is required if you set the TemplateType parameter to h264, h264-nbhd, or h264-origin.
    // 
    // The value must comply with the following rules:
    // 
    // *   **Width ≥ 100**: The width of the video is no less than 100 pixels.
    // *   **max(Height,Width) ≤ 2560**: The width or height of the video, whichever is greater, cannot exceed 2,560 pixels.
    // *   **min(Height,Width) ≤ 1440**: The width or height of the video, whichever is smaller, cannot exceed 1,440 pixels.
    // 
    // For example, a resolution of 1560 × 1560 pixels is invalid.
    // 
    // > An original quality template needs to retain the source information. Therefore, the video resolution cannot exceed 4K.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
