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
        && this->audioBitrate_ == nullptr && this->audioChannelNum_ == nullptr && this->audioCodec_ == nullptr && this->audioProfile_ == nullptr && this->audioRate_ == nullptr
        && this->bitrateWithSource_ == nullptr && this->deInterlaced_ == nullptr && this->domain_ == nullptr && this->encryptParameters_ == nullptr && this->extWithSource_ == nullptr
        && this->FPS_ == nullptr && this->fpsWithSource_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->kmsKeyExpireInterval_ == nullptr
        && this->kmsKeyID_ == nullptr && this->kmsUID_ == nullptr && this->lazy_ == nullptr && this->ownerId_ == nullptr && this->profile_ == nullptr
        && this->regionId_ == nullptr && this->resWithSource_ == nullptr && this->template_ == nullptr && this->templateType_ == nullptr && this->videoBitrate_ == nullptr
        && this->width_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // audioBitrate Field Functions 
    bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
    void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
    inline int32_t getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


    // audioChannelNum Field Functions 
    bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
    void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
    inline int32_t getAudioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string getAudioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioProfile Field Functions 
    bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
    void deleteAudioProfile() { this->audioProfile_ = nullptr;};
    inline string getAudioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline int32_t getAudioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // bitrateWithSource Field Functions 
    bool hasBitrateWithSource() const { return this->bitrateWithSource_ != nullptr;};
    void deleteBitrateWithSource() { this->bitrateWithSource_ = nullptr;};
    inline string getBitrateWithSource() const { DARABONBA_PTR_GET_DEFAULT(bitrateWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setBitrateWithSource(string bitrateWithSource) { DARABONBA_PTR_SET_VALUE(bitrateWithSource_, bitrateWithSource) };


    // deInterlaced Field Functions 
    bool hasDeInterlaced() const { return this->deInterlaced_ != nullptr;};
    void deleteDeInterlaced() { this->deInterlaced_ = nullptr;};
    inline bool getDeInterlaced() const { DARABONBA_PTR_GET_DEFAULT(deInterlaced_, false) };
    inline AddCustomLiveStreamTranscodeRequest& setDeInterlaced(bool deInterlaced) { DARABONBA_PTR_SET_VALUE(deInterlaced_, deInterlaced) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline string getEncryptParameters() const { DARABONBA_PTR_GET_DEFAULT(encryptParameters_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setEncryptParameters(string encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };


    // extWithSource Field Functions 
    bool hasExtWithSource() const { return this->extWithSource_ != nullptr;};
    void deleteExtWithSource() { this->extWithSource_ = nullptr;};
    inline string getExtWithSource() const { DARABONBA_PTR_GET_DEFAULT(extWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setExtWithSource(string extWithSource) { DARABONBA_PTR_SET_VALUE(extWithSource_, extWithSource) };


    // FPS Field Functions 
    bool hasFPS() const { return this->FPS_ != nullptr;};
    void deleteFPS() { this->FPS_ = nullptr;};
    inline int32_t getFPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


    // fpsWithSource Field Functions 
    bool hasFpsWithSource() const { return this->fpsWithSource_ != nullptr;};
    void deleteFpsWithSource() { this->fpsWithSource_ = nullptr;};
    inline string getFpsWithSource() const { DARABONBA_PTR_GET_DEFAULT(fpsWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setFpsWithSource(string fpsWithSource) { DARABONBA_PTR_SET_VALUE(fpsWithSource_, fpsWithSource) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // kmsKeyExpireInterval Field Functions 
    bool hasKmsKeyExpireInterval() const { return this->kmsKeyExpireInterval_ != nullptr;};
    void deleteKmsKeyExpireInterval() { this->kmsKeyExpireInterval_ = nullptr;};
    inline string getKmsKeyExpireInterval() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyExpireInterval_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsKeyExpireInterval(string kmsKeyExpireInterval) { DARABONBA_PTR_SET_VALUE(kmsKeyExpireInterval_, kmsKeyExpireInterval) };


    // kmsKeyID Field Functions 
    bool hasKmsKeyID() const { return this->kmsKeyID_ != nullptr;};
    void deleteKmsKeyID() { this->kmsKeyID_ = nullptr;};
    inline string getKmsKeyID() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyID_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsKeyID(string kmsKeyID) { DARABONBA_PTR_SET_VALUE(kmsKeyID_, kmsKeyID) };


    // kmsUID Field Functions 
    bool hasKmsUID() const { return this->kmsUID_ != nullptr;};
    void deleteKmsUID() { this->kmsUID_ = nullptr;};
    inline string getKmsUID() const { DARABONBA_PTR_GET_DEFAULT(kmsUID_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setKmsUID(string kmsUID) { DARABONBA_PTR_SET_VALUE(kmsUID_, kmsUID) };


    // lazy Field Functions 
    bool hasLazy() const { return this->lazy_ != nullptr;};
    void deleteLazy() { this->lazy_ = nullptr;};
    inline string getLazy() const { DARABONBA_PTR_GET_DEFAULT(lazy_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setLazy(string lazy) { DARABONBA_PTR_SET_VALUE(lazy_, lazy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCustomLiveStreamTranscodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline int32_t getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setProfile(int32_t profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resWithSource Field Functions 
    bool hasResWithSource() const { return this->resWithSource_ != nullptr;};
    void deleteResWithSource() { this->resWithSource_ = nullptr;};
    inline string getResWithSource() const { DARABONBA_PTR_GET_DEFAULT(resWithSource_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setResWithSource(string resWithSource) { DARABONBA_PTR_SET_VALUE(resWithSource_, resWithSource) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddCustomLiveStreamTranscodeRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int32_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AddCustomLiveStreamTranscodeRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The AppName of the live stream.
    // 
    // This parameter is required.
    shared_ptr<string> app_ {};
    // The output audio bitrate. Unit: kbps. Valid values: 1 to **1000**.
    shared_ptr<int32_t> audioBitrate_ {};
    // The number of audio channels. Valid values:
    // 
    // - **1**: mono.
    // 
    // - **2**: stereo.
    shared_ptr<int32_t> audioChannelNum_ {};
    // The audio codec. Valid values:
    // 
    // - **AAC**
    // 
    // - **MP3**
    shared_ptr<string> audioCodec_ {};
    // The audio profile. Valid values:
    // 
    // - **aac_low**
    // 
    // - **aac_he**
    // 
    // - **aac_he_v2**
    // 
    // - **aac_ld**
    shared_ptr<string> audioProfile_ {};
    // The audio sample rate. Valid values: **22050** to **96000**.
    // 
    // >Notice: 
    // 
    // If you set AudioProfile to **aac_ld**, the sample rate cannot exceed 44100.
    shared_ptr<int32_t> audioRate_ {};
    // The adaptive bitrate settings. If specified, it overrides the VideoBitrate parameter. Fields:
    // 
    // - **UpLimit (integer):** Required. The upper limit of the bitrate. This must be an integer from 128 to 10000 and greater than the lower limit.
    // 
    // - **LowerLimit (integer):** Required. The lower limit of the bitrate. This must be an integer from 128 to 10000 and less than the upper limit.
    // 
    // - **Factor (float):** Required: The factor by which the source bitrate is multiplied to calculate the output bitrate. Valid values: 0.1 to 1. The value can be accurate to one decimal place. A value of 1 indicates that the output bitrate is the same as the source bitrate.
    shared_ptr<string> bitrateWithSource_ {};
    // Specifies whether to automatically detect and remove interlacing during transcoding. Deinterlacing converts interlaced video into progressive video.
    // 
    // - true: enables deinterlacing.
    // 
    // - false: keeps the source format. This is the default value.
    shared_ptr<bool> deInterlaced_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The encryption settings, formatted as a JSON string.
    // 
    // - **EncryptType**: The encryption type. Set the value to aliyun.
    // 
    // - **KmsKeyID**: The ID of the customer master key (CMK) in Key Management Service (KMS).
    // 
    // - **KmsKeyExpireInterval**: The key rotation period. Unit: seconds. Valid values: **60 to 3600.**
    // 
    // > If set, its internal fields cannot be empty.
    shared_ptr<string> encryptParameters_ {};
    // Other adaptive settings that align the transcoded stream with the source stream. Fields:
    // 
    // - **KeyFrameOpen**: Specifies whether to align keyframes with the source stream. Valid values: yes and no.
    // 
    // - **Copyts (string)**: Specifies whether to align the presentation timestamp (PTS) with the source stream. Valid values: yes and no.
    // 
    // - **SeiMode**: The pass-through mode for Supplemental Enhancement Information (SEI). Valid values: 0 (disabled) and 1 (enabled).
    shared_ptr<string> extWithSource_ {};
    // The frame rate of the output video. Unit: frames per second (FPS). Valid values: 1 to **60**.
    shared_ptr<int32_t> FPS_ {};
    // Adapts the output frame rate based on the source\\"s frame rate, while keeping it within a specified range. If specified, it overrides the FPS parameter. Fields:
    // 
    // - **UpLimit (integer):** Required. The upper limit of the frame rate. This must be an integer from 1 to 60 and greater than the lower limit.
    // 
    // - **LowerLimit (integer):** Required. The lower limit of the frame rate. This must be an integer from 1 to 60 and less than the upper limit.
    shared_ptr<string> fpsWithSource_ {};
    // The Group of Pictures (GOP) size. The unit can be frame or second. Valid values:
    // 
    // - By frames: 1 to 3000.
    // 
    // - By seconds: 1s to 20s.
    shared_ptr<string> gop_ {};
    // Output video height in pixels. Requirements:
    // 
    // - **Height ≥ 100**
    // 
    // - **max(Height, Width) ≤ 2560**
    // 
    // - **min(Height, Width) ≤ 1440**
    // 
    // > For h265-nbhd, it cannot exceed 720.
    shared_ptr<int32_t> height_ {};
    // The key rotation period. Unit: seconds. Valid values: 60 to 3600.
    shared_ptr<string> kmsKeyExpireInterval_ {};
    // The ID of the customer master key (CMK) in Key Management Service (KMS).
    shared_ptr<string> kmsKeyID_ {};
    // The ID of the KMS account.
    shared_ptr<string> kmsUID_ {};
    // Specifies whether to enable on-demand transcoding. Valid values:
    // 
    // - **yes**: Transcoding only starts when the first viewer requests this transcoded stream.
    // 
    // - **no**: Transcoding starts immediately after the stream is published.
    shared_ptr<string> lazy_ {};
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
    // The adaptive resolution settings. If specified, it overrides the Height and Width parameters. Fieds:
    // 
    // - **Type (string):** Required. Valid values:
    // 
    //   - **short**: sets the shorter edge of the video to the specified value and scales the other edge to maintain the original aspect ratio.
    // 
    //   - **long**: sets the longer edge of the video to the specified value and scales the other edge to maintain the original aspect ratio.
    // 
    //   - **screen**: Matches the output to a standard resolution, automatically flipping the dimensions based on the source\\"s orientation.
    // 
    // - **Value (string):** Required. Valid values:
    // 
    //   - For short: 360, 480, 540, 720, and 1080.
    // 
    //   - For long: 640, 848, 960, 1280, and 1920.
    // 
    //   - For screen: 640×360, 848×480, 960×540, 1280×720, and 1920×1080.
    shared_ptr<string> resWithSource_ {};
    // The custom name of the transcoding template.
    // 
    // > The name can contain digits, letters, and hyphens (-). It must start with a digit or a letter. It cannot be the same as the name of a standard transcoding template.
    // 
    // This parameter is required.
    shared_ptr<string> template_ {};
    // The type of the custom transcoding template. Valid values:
    // 
    // - **h264**: custom H.264 standard transcoding.
    // 
    // - **h264-nbhd**: custom H.264 Narrowband HD™ transcoding.
    // 
    // - **h265**: custom H.265 standard transcoding.
    // 
    // - **h265-nbhd**: custom H.265 Narrowband HD™ transcoding.
    // 
    // - **audio**: audio-only transcoding.
    // 
    // > For video types, Height, Width, FPS, and VideoBitrate are required.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
    // The output video bitrate. Unit: kbps. Valid values: 1 to **6000**.
    // 
    // > The system tries to transcode the video at the specified bitrate. However, the actual bitrate may not be the same as the specified value, especially when the specified value is too high or too low.
    shared_ptr<int32_t> videoBitrate_ {};
    // Output video width in pixels.
    // 
    // Requirements:
    // 
    // - **Width ≥ 100**
    // 
    // - **max(Height, Width) ≤ 2560**
    // 
    // - **min(Height, Width) ≤ 1440**
    // 
    // > For h265-nbhd, it cannot exceed 1280.
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
