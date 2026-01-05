// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMLIVESTREAMTRANSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMLIVESTREAMTRANSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateCustomLiveStreamTranscodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_TO_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_TO_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_TO_JSON(BitrateWithSource, bitrateWithSource_);
      DARABONBA_PTR_TO_JSON(DeInterlaced, deInterlaced_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_TO_JSON(ExtWithSource, extWithSource_);
      DARABONBA_PTR_TO_JSON(FPS, FPS_);
      DARABONBA_PTR_TO_JSON(FpsWithSource, fpsWithSource_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Lazy, lazy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResWithSource, resWithSource_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomLiveStreamTranscodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
      DARABONBA_PTR_FROM_JSON(AudioChannelNum, audioChannelNum_);
      DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_FROM_JSON(AudioProfile, audioProfile_);
      DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_FROM_JSON(BitrateWithSource, bitrateWithSource_);
      DARABONBA_PTR_FROM_JSON(DeInterlaced, deInterlaced_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_FROM_JSON(ExtWithSource, extWithSource_);
      DARABONBA_PTR_FROM_JSON(FPS, FPS_);
      DARABONBA_PTR_FROM_JSON(FpsWithSource, fpsWithSource_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Lazy, lazy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResWithSource, resWithSource_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateCustomLiveStreamTranscodeRequest() = default ;
    UpdateCustomLiveStreamTranscodeRequest(const UpdateCustomLiveStreamTranscodeRequest &) = default ;
    UpdateCustomLiveStreamTranscodeRequest(UpdateCustomLiveStreamTranscodeRequest &&) = default ;
    UpdateCustomLiveStreamTranscodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomLiveStreamTranscodeRequest() = default ;
    UpdateCustomLiveStreamTranscodeRequest& operator=(const UpdateCustomLiveStreamTranscodeRequest &) = default ;
    UpdateCustomLiveStreamTranscodeRequest& operator=(UpdateCustomLiveStreamTranscodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->audioBitrate_ == nullptr && this->audioChannelNum_ == nullptr && this->audioCodec_ == nullptr && this->audioProfile_ == nullptr && this->audioRate_ == nullptr
        && this->bitrateWithSource_ == nullptr && this->deInterlaced_ == nullptr && this->domain_ == nullptr && this->encryptParameters_ == nullptr && this->extWithSource_ == nullptr
        && this->FPS_ == nullptr && this->fpsWithSource_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->lazy_ == nullptr
        && this->ownerId_ == nullptr && this->profile_ == nullptr && this->regionId_ == nullptr && this->resWithSource_ == nullptr && this->template_ == nullptr
        && this->templateType_ == nullptr && this->videoBitrate_ == nullptr && this->width_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t getAudioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string getAudioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string getAudioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t getAudioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // bitrateWithSource Field Functions 
    bool hasBitrateWithSource() const { return this->bitrateWithSource_ != nullptr;};
    void deleteBitrateWithSource() { this->bitrateWithSource_ = nullptr;};
    inline string getBitrateWithSource() const { DARABONBA_PTR_GET_DEFAULT(bitrateWithSource_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setBitrateWithSource(string bitrateWithSource) { DARABONBA_PTR_SET_VALUE(bitrateWithSource_, bitrateWithSource) };


    // deInterlaced Field Functions 
    bool hasDeInterlaced() const { return this->deInterlaced_ != nullptr;};
    void deleteDeInterlaced() { this->deInterlaced_ = nullptr;};
    inline bool getDeInterlaced() const { DARABONBA_PTR_GET_DEFAULT(deInterlaced_, false) };
    inline UpdateCustomLiveStreamTranscodeRequest& setDeInterlaced(bool deInterlaced) { DARABONBA_PTR_SET_VALUE(deInterlaced_, deInterlaced) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline string getEncryptParameters() const { DARABONBA_PTR_GET_DEFAULT(encryptParameters_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setEncryptParameters(string encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };


    // extWithSource Field Functions 
    bool hasExtWithSource() const { return this->extWithSource_ != nullptr;};
    void deleteExtWithSource() { this->extWithSource_ = nullptr;};
    inline string getExtWithSource() const { DARABONBA_PTR_GET_DEFAULT(extWithSource_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setExtWithSource(string extWithSource) { DARABONBA_PTR_SET_VALUE(extWithSource_, extWithSource) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t getFPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // fpsWithSource Field Functions 
    bool hasFpsWithSource() const { return this->fpsWithSource_ != nullptr;};
    void deleteFpsWithSource() { this->fpsWithSource_ = nullptr;};
    inline string getFpsWithSource() const { DARABONBA_PTR_GET_DEFAULT(fpsWithSource_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setFpsWithSource(string fpsWithSource) { DARABONBA_PTR_SET_VALUE(fpsWithSource_, fpsWithSource) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string getLazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCustomLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline int32_t getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setProfile(int32_t profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resWithSource Field Functions 
    bool hasResWithSource() const { return this->resWithSource_ != nullptr;};
    void deleteResWithSource() { this->resWithSource_ = nullptr;};
    inline string getResWithSource() const { DARABONBA_PTR_GET_DEFAULT(resWithSource_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setResWithSource(string resWithSource) { DARABONBA_PTR_SET_VALUE(resWithSource_, resWithSource) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline UpdateCustomLiveStreamTranscodeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline UpdateCustomLiveStreamTranscodeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the application to which the stream belongs, and it cannot be modified.
    // 
    // This parameter is required.
    shared_ptr<string> app_ {};
    // Audio transcoding bitrate. Unit: kbps, value range: 1 to 1000.
    shared_ptr<int32_t> audioBitrate_ {};
    // Number of audio channels. Values: 
    // - 1: Mono. 
    // - 2: Stereo.
    shared_ptr<int32_t> audioChannelNum_ {};
    // Audio encoding format. Values: 
    // - aac 
    // - mp3
    shared_ptr<string> audioCodec_ {};
    // Audio encoding. Values: 
    // - aac_low
    //  - aac_he
    //  - aac_he_v2 
    // - aac_ld
    shared_ptr<string> audioProfile_ {};
    // Audio sampling rate. Values: 22050, 32000, 44100, 48000, 96000. Unit: Hz.
    // > If **AudioProfile** is set to **aac_ld**, the sampling rate must not exceed 44100.
    shared_ptr<int32_t> audioRate_ {};
    // The source-based bitrate settings. This parameter takes precedence over other bitrate settings. The following fields must be included:
    // 
    // *   **UpLimit**: the maximum bitrate. Set this field to an integer from 128 to 10000. The value must be greater than the minimum bitrate.
    // *   **LowerLimit**: the minimum bitrate. Set this field to an integer from 128 to 10000. The value must be smaller than the maximum bitrate.
    // *   **Factor**: the ratio of the output bitrate to the source bitrate. Valid values: 0.1 to 1. The value is accurate to one decimal place. A value of 1 indicates that the output video has the same bitrate as the source video.
    shared_ptr<string> bitrateWithSource_ {};
    shared_ptr<bool> deInterlaced_ {};
    // Streamer domain name, unmodifiable.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // Encryption configuration. JSON format, with the following fields: 
    // -  EncryptType: Type of encryption. Fixed value is aliyun.
    //  -  KmsKeyID: User\\"s KMS master key ID. 
    // -  KmsKeyExpireInterval: Key rotation period. Value range: 60~3600, unit: seconds.
    // > When using DRM encryption, KmsKeyID cannot be modified.
    shared_ptr<string> encryptParameters_ {};
    // Other source-based settings. The following fields are included:
    // 
    // *   **KeyFrameOpen**: Valid values: yes and no.
    // *   **Copyts**: Valid values: yes and no.
    // *   **SeiMode**: Valid values: 0, 1, and 2. 0 specifies that no supplemental enhancement information (SEI) messages are passed through, 1 specifies that part of SEI messages are passed through, and 2 specifies that all SEI messages are passed through.
    shared_ptr<string> extWithSource_ {};
    // Transcode video frame rate. Unit: FPS, value range: 1 to 60.
    shared_ptr<int32_t> FPS_ {};
    // The source-based frame rate settings. This parameter takes precedence over other frame rate settings. The following fields must be included:
    // 
    // *   **UpLimit**: the maximum frame rate. Set this field to an integer from 1 to 60. The value must be greater than the minimum frame rate.
    // *   **LowerLimit**: the minimum frame rate. Set this field to an integer from 1 to 60. The value must be smaller than the maximum frame rate.
    shared_ptr<string> fpsWithSource_ {};
    // Video GOP (Group of Pictures), supports units in frames or seconds. When the unit is frames, the value should be {number}; when the unit is seconds, the value should be {number}s. 
    // - For frames, the range is 1 to 3000. 
    // - For seconds, the range is 1 to 20s.
    shared_ptr<string> gop_ {};
    // Video transcoding height. Unit: pixels. The value must meet the following three conditions:
    //  - Height ≥ 100: The height of the video must be no less than 100 pixels.
    //  - max(Height, Width) ≤ 2560: The larger of the video\\"s width and height cannot exceed 2560.
    //  - min(Height, Width) ≤ 1440: The smaller of the video\\"s width and height cannot exceed 1440.
    //  > For 265 narrowband HD templates, the maximum resolution is 1280×720.
    shared_ptr<int32_t> height_ {};
    // Specifies whether to enable triggered transcoding. Valid values:
    // 
    // *   **yes**: enables triggered transcoding.
    // *   **no**: disables triggered transcoding.
    shared_ptr<string> lazy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Encoding level. A set of specific encoding features supported by the video, generally, the higher the value, the better the picture quality, but also the higher the resources consumed for encoding and decoding. Values: 
    // - 1: baseline (suitable for mobile devices).
    //  - 2: main (suitable for standard resolution devices). 
    // - 3: high (suitable for high-resolution devices).
    shared_ptr<int32_t> profile_ {};
    shared_ptr<string> regionId_ {};
    // The source-based resolution settings. This parameter takes precedence over other resolution settings. The following fields must be included:
    // 
    // *   **Type**: You can set this field to short, long, or screen. short specifies that the resolution of the output video is adapted to the shorter side, long specifies that the resolution of the output video is adapted to the longer side, and screen specifies that the output video has an adaptive resolution.
    // 
    // *   **Value**:
    // 
    //     *   Set this field to 360, 480, 540, 720, or 1080 if the Type field is set to short.
    //     *   Set this field to 640, 848, 960, 1280, or 1920 if the Type field is set to long.
    //     *   Set this field to 640\\*360, 848\\*480, 960\\*540, 1280\\*720, or 1920\\*1080 if the Type field is set to screen.
    shared_ptr<string> resWithSource_ {};
    // Custom name of the transcoding template, not modifiable.
    // 
    // This parameter is required.
    shared_ptr<string> template_ {};
    // Custom transcoding template type, unmodifiable.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    // Video transcoding bitrate. Unit: kbps, value range: 1 to 6000.
    // > The actual bitrate of the transcoded video will try to be as close as possible to the one you set, but it cannot be guaranteed to be exactly the same, especially when the set bitrate is too high or too low.
    shared_ptr<int32_t> videoBitrate_ {};
    // Video transcoding width. Unit: pixels. The value must meet the following three conditions: 
    // - Width ≥ 100: The video width must be no less than 100 pixels. 
    // - max(Height, Width) ≤ 2560: The larger of the video\\"s height and width cannot exceed 2560. 
    // - min(Height, Width) ≤ 1440: The smaller of the video\\"s height and width cannot exceed 1440.
    // > For 265 narrowband HD templates, the maximum resolution is 1280×720.
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
