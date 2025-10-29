// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMLIVESTREAMTRANSCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMLIVESTREAMTRANSCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCustomLiveStreamTranscodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomLiveStreamTranscodeRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
      DARABONBA_PTR_TO_JSON(KmsKeyID, kmsKeyID_);
      DARABONBA_PTR_TO_JSON(KmsUID, kmsUID_);
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
    friend void from_json(const Darabonba::Json& j, AddCustomLiveStreamTranscodeRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
      DARABONBA_PTR_FROM_JSON(KmsKeyID, kmsKeyID_);
      DARABONBA_PTR_FROM_JSON(KmsUID, kmsUID_);
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
    AddCustomLiveStreamTranscodeRequest() = default ;
    AddCustomLiveStreamTranscodeRequest(const AddCustomLiveStreamTranscodeRequest &) = default ;
    AddCustomLiveStreamTranscodeRequest(AddCustomLiveStreamTranscodeRequest &&) = default ;
    AddCustomLiveStreamTranscodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomLiveStreamTranscodeRequest() = default ;
    AddCustomLiveStreamTranscodeRequest& operator=(const AddCustomLiveStreamTranscodeRequest &) = default ;
    AddCustomLiveStreamTranscodeRequest& operator=(AddCustomLiveStreamTranscodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->audioBitrate_ == nullptr && return this->audioChannelNum_ == nullptr && return this->audioCodec_ == nullptr && return this->audioProfile_ == nullptr && return this->audioRate_ == nullptr
        && return this->bitrateWithSource_ == nullptr && return this->deInterlaced_ == nullptr && return this->domain_ == nullptr && return this->encryptParameters_ == nullptr && return this->extWithSource_ == nullptr
        && return this->FPS_ == nullptr && return this->fpsWithSource_ == nullptr && return this->gop_ == nullptr && return this->height_ == nullptr && return this->kmsKeyExpireInterval_ == nullptr
        && return this->kmsKeyID_ == nullptr && return this->kmsUID_ == nullptr && return this->lazy_ == nullptr && return this->ownerId_ == nullptr && return this->profile_ == nullptr
        && return this->regionId_ == nullptr && return this->resWithSource_ == nullptr && return this->template_ == nullptr && return this->templateType_ == nullptr && return this->videoBitrate_ == nullptr
        && return this->width_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t audioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t audioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string audioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string audioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t audioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // bitrateWithSource Field Functions 
    bool hasBitrateWithSource() const { return this->bitrateWithSource_ != nullptr;};
    void deleteBitrateWithSource() { this->bitrateWithSource_ = nullptr;};
    inline string bitrateWithSource() const { DARABONBA_PTR_GET_DEFAULT(bitrateWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setBitrateWithSource(string bitrateWithSource) { DARABONBA_PTR_SET_VALUE(bitrateWithSource_, bitrateWithSource) };


    // deInterlaced Field Functions 
    bool hasDeInterlaced() const { return this->deInterlaced_ != nullptr;};
    void deleteDeInterlaced() { this->deInterlaced_ = nullptr;};
    inline bool deInterlaced() const { DARABONBA_PTR_GET_DEFAULT(deInterlaced_, false) };
    inline AddCustomLiveStreamTranscodeRequest& setDeInterlaced(bool deInterlaced) { DARABONBA_PTR_SET_VALUE(deInterlaced_, deInterlaced) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline string encryptParameters() const { DARABONBA_PTR_GET_DEFAULT(encryptParameters_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setEncryptParameters(string encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };


    // extWithSource Field Functions 
    bool hasExtWithSource() const { return this->extWithSource_ != nullptr;};
    void deleteExtWithSource() { this->extWithSource_ = nullptr;};
    inline string extWithSource() const { DARABONBA_PTR_GET_DEFAULT(extWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setExtWithSource(string extWithSource) { DARABONBA_PTR_SET_VALUE(extWithSource_, extWithSource) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t FPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // fpsWithSource Field Functions 
    bool hasFpsWithSource() const { return this->fpsWithSource_ != nullptr;};
    void deleteFpsWithSource() { this->fpsWithSource_ = nullptr;};
    inline string fpsWithSource() const { DARABONBA_PTR_GET_DEFAULT(fpsWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setFpsWithSource(string fpsWithSource) { DARABONBA_PTR_SET_VALUE(fpsWithSource_, fpsWithSource) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // kmsKeyExpireInterval Field Functions 
    bool hasKmsKeyExpireInterval() const { return this->kmsKeyExpireInterval_ != nullptr;};
    void deleteKmsKeyExpireInterval() { this->kmsKeyExpireInterval_ = nullptr;};
    inline string kmsKeyExpireInterval() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyExpireInterval_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsKeyExpireInterval(string kmsKeyExpireInterval) { DARABONBA_PTR_SET_VALUE(kmsKeyExpireInterval_, kmsKeyExpireInterval) };


    // kmsKeyID Field Functions 
    bool hasKmsKeyID() const { return this->kmsKeyID_ != nullptr;};
    void deleteKmsKeyID() { this->kmsKeyID_ = nullptr;};
    inline string kmsKeyID() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyID_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsKeyID(string kmsKeyID) { DARABONBA_PTR_SET_VALUE(kmsKeyID_, kmsKeyID) };


    // kmsUID Field Functions 
    bool hasKmsUID() const { return this->kmsUID_ != nullptr;};
    void deleteKmsUID() { this->kmsUID_ = nullptr;};
    inline string kmsUID() const { DARABONBA_PTR_GET_DEFAULT(kmsUID_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsUID(string kmsUID) { DARABONBA_PTR_SET_VALUE(kmsUID_, kmsUID) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string lazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCustomLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline int32_t profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setProfile(int32_t profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resWithSource Field Functions 
    bool hasResWithSource() const { return this->resWithSource_ != nullptr;};
    void deleteResWithSource() { this->resWithSource_ = nullptr;};
    inline string resWithSource() const { DARABONBA_PTR_GET_DEFAULT(resWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setResWithSource(string resWithSource) { DARABONBA_PTR_SET_VALUE(resWithSource_, resWithSource) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The bitrate of the output audio. Unit: Kbit/s. Valid values: **1 to 1000**.
    std::shared_ptr<int32_t> audioBitrate_ = nullptr;
    // The number of sound channels. Valid values:
    // 
    // *   **1**: mono.
    // *   **2**: binaural.
    std::shared_ptr<int32_t> audioChannelNum_ = nullptr;
    // The audio encoding format. Valid values:
    // 
    // *   **AAC**
    // *   **MP3**
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
    // 
    // >Notice: If you set AudioProfile to **aac_ld**, the audio sampling rate cannot exceed 44100.
    std::shared_ptr<int32_t> audioRate_ = nullptr;
    // The source-based bitrate settings. This parameter takes precedence over other bitrate settings. The following fields must be included:
    // 
    // *   **UpLimit**: the maximum bitrate limit. Valid values: an integer from 128 to 10000. The value must be greater than the minimum bitrate.
    // *   **LowerLimit int** : the minimum bitrate rate. Valid values: an integer from 128 to 10000. The value must be smaller than the maximum bitrate.
    // *   **Factor**: The ratio of the output bitrate to the source bitrate. Valid values: 0.1 to 1. The value is accurate to one decimal place. A value of 1 indicates that the output video has the same bitrate as the source video.
    std::shared_ptr<string> bitrateWithSource_ = nullptr;
    std::shared_ptr<bool> deInterlaced_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // Encryption configuration. In JSON format, the fields are explained as follows:
    // - **EncryptType**: Encryption type. Fixed value is aliyun.
    // - **KmsKeyID**: User KMS master key ID.
    // - **KmsKeyExpireInterval**: Key rotation period. Range: 60~3600, unit: seconds.
    // > If the EncryptParameters is configured, the KmsKeyID, KmsUID, and KmsKeyExpireInterval parameters cannot be empty
    std::shared_ptr<string> encryptParameters_ = nullptr;
    // Other source-based settings, including the following fields:
    // 
    // *   **KeyFrameOpen**: specifies whether to use the key frames of the source video. Valid values: yes or no.
    // *   **Copyts**: specifies whether to use the presentation time stamp (PTS) of the source video. Valid values: yes or no.
    // *   **SeiMode**: specifies whether to pass through supplemental enhancement information (SEI) messages. Valid values: 0, 1, and 2, where 0 specifies that no SEI messages are passed through, 1 specifies that part of SEI messages are passed through, and 2 specifies that all SEI messages are passed through.
    std::shared_ptr<string> extWithSource_ = nullptr;
    // The frame rate of the output video. Unit: frames per second (FPS). Valid values: **1 to 60**.
    std::shared_ptr<int32_t> FPS_ = nullptr;
    // The source-based frame rate settings. This parameter takes precedence over other frame rate settings. The following fields must be included:
    // 
    // *   **UpLimit**: the maximum frame rate. Valid values: an integer from 1 to 60. The value must be greater than the minimum frame rate.
    // *   **LowerLimit**: the minimum frame rate. Valid values: an integer from 1 to 60. The value must be smaller than the maximum frame rate.
    std::shared_ptr<string> fpsWithSource_ = nullptr;
    // The Group of Picture (GOP) size of the video. Unit: frames or seconds.
    // 
    // *   Unit: frames. Valid values: **1 to 3000**.
    // *   Unit: seconds. Valid value: **1 to 20**.
    std::shared_ptr<string> gop_ = nullptr;
    // The height of the output video. Unit: pixel. Valid values:
    // 
    // The value must comply with all the following rules:
    // 
    // *   **Height ≥ 100**: The height of the video is greater than or equal to 100 pixels.
    // *   **max(Height,Width) ≤ 2560**: The width or height of the video, whichever is greater, cannot exceed 2,560 pixels.
    // *   **min(Height,Width) ≤ 1440**: The width or height of the video, whichever is smaller, cannot exceed 1,440 pixels.
    // 
    // > The resolution of the output video that is transcoded by using the H.265 Narrowband HD™ transcoding template cannot exceed 1280 × 720 pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The rotation period of the CMK. Valid values: 60 to 3600. Unit: seconds.
    std::shared_ptr<string> kmsKeyExpireInterval_ = nullptr;
    // The ID of the customer master key (CMK) that you created in Key Management Service (KMS).
    std::shared_ptr<string> kmsKeyID_ = nullptr;
    // The ID of your KMS account.
    std::shared_ptr<string> kmsUID_ = nullptr;
    // Specifies whether to use the load-on-demand mechanism for transcoding. Valid values: yes and no. Default value: **yes**.
    std::shared_ptr<string> lazy_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The video encoding profile. The profile defines a set of parameters that are used to encode a video. In most cases, a greater value indicates better image quality and higher resource consumption. Valid values:
    // 
    // *   **1**: baseline. This value is suitable for mobile devices.
    // *   **2**: main. This value is suitable for standard-definition devices.
    // *   **3**: high. This value is suitable for high-definition devices.
    std::shared_ptr<int32_t> profile_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The source-based resolution settings. This parameter takes precedence over other resolution settings. The following fields must be included:
    // 
    // *   **Type**: You can set this field to short, long, or screen. short specifies that the resolution of the output video is adapted to the shorter side, long specifies that the resolution of the output video is adapted to the longer side, and screen specifies that the output video has an adaptive resolution.
    // 
    // *   **Value**:
    // 
    //     *   Set this field to 360, 480, 540, 720, or 1080 if the Type field is set to short.
    //     *   Set this field to 640, 848, 960, 1280, or 1920 if the Type field is set to long.
    //     *   Set this field to 640\\*360, 848\\*480, 960\\*540, 1280\\*720, or 1920\\*1080 if the Type field is set to screen.
    std::shared_ptr<string> resWithSource_ = nullptr;
    // The name of the custom transcoding template.
    // 
    // > The name can contain digits, letters, and hyphens (-), and must start with a letter or digit. The name must be different from the names of any default transcoding templates.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
    // The type of the custom transcoding template. Valid values:
    // 
    // *   **h264**: custom H.264 standard transcoding.
    // *   **h264-nbhd**: custom H.264 Narrowband HD™ transcoding.
    // *   **h265**: custom H.265 standard transcoding.
    // *   **h265-nbhd**: custom H.265 Narrowband HD™ transcoding.
    // *   **audio**: audio-only transcoding.
    // 
    // > If you set **TemplateType** to **h264**, **h264-nbhd**, **h265**, or **h265-nbhd**, the **Height**, **Width**, **FPS**, and **VideoBitrate** parameters are required.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateType_ = nullptr;
    // The bitrate of the output video. Unit: Kbit/s. Valid values: **1 to 6000**.
    // 
    // > The bitrate of the output video may not be the same as the value that you specify, but is as close to the value as possible, especially when the value is excessively large or small.
    std::shared_ptr<int32_t> videoBitrate_ = nullptr;
    // The width of the output video. Unit: pixel. Valid values:
    // 
    // The value must comply with all the following rules:
    // 
    // *   **Width ≥ 100**: The width of the video is greater than or equal to 100 pixels.
    // *   **max(Height,Width) ≤ 2560**: The width or height of the video, whichever is greater, cannot exceed 2,560 pixels.
    // *   **min(Height,Width) ≤ 1440**: The width or height of the video, whichever is smaller, cannot exceed 1,440 pixels.
    // 
    // > The resolution of the output video that is transcoded by using the H.265 Narrowband HD™ transcoding template cannot exceed 1280 × 720 pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
