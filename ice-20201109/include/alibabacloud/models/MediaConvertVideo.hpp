// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTVIDEO_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTVIDEO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertVideo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_ANY_TO_JSON(Crf, crf_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_ANY_TO_JSON(Fps, fps_);
      DARABONBA_ANY_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
      DARABONBA_ANY_TO_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_TO_JSON(Pad, pad_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_ANY_FROM_JSON(Crf, crf_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_ANY_FROM_JSON(Fps, fps_);
      DARABONBA_ANY_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
      DARABONBA_ANY_FROM_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_FROM_JSON(Pad, pad_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    MediaConvertVideo() = default ;
    MediaConvertVideo(const MediaConvertVideo &) = default ;
    MediaConvertVideo(MediaConvertVideo &&) = default ;
    MediaConvertVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertVideo() = default ;
    MediaConvertVideo& operator=(const MediaConvertVideo &) = default ;
    MediaConvertVideo& operator=(MediaConvertVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->bufsize_ == nullptr && this->codec_ == nullptr && this->crf_ == nullptr && this->crop_ == nullptr && this->fps_ == nullptr
        && this->gop_ == nullptr && this->height_ == nullptr && this->longShortMode_ == nullptr && this->maxFps_ == nullptr && this->maxrate_ == nullptr
        && this->pad_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->remove_ == nullptr && this->scanMode_ == nullptr
        && this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline MediaConvertVideo& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bufsize Field Functions 
    bool hasBufsize() const { return this->bufsize_ != nullptr;};
    void deleteBufsize() { this->bufsize_ = nullptr;};
    inline int32_t getBufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, 0) };
    inline MediaConvertVideo& setBufsize(int32_t bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline MediaConvertVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // crf Field Functions 
    bool hasCrf() const { return this->crf_ != nullptr;};
    void deleteCrf() { this->crf_ = nullptr;};
    inline     const Darabonba::Json & getCrf() const { DARABONBA_GET(crf_) };
    Darabonba::Json & getCrf() { DARABONBA_GET(crf_) };
    inline MediaConvertVideo& setCrf(const Darabonba::Json & crf) { DARABONBA_SET_VALUE(crf_, crf) };
    inline MediaConvertVideo& setCrf(Darabonba::Json && crf) { DARABONBA_SET_RVALUE(crf_, crf) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline MediaConvertVideo& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline     const Darabonba::Json & getFps() const { DARABONBA_GET(fps_) };
    Darabonba::Json & getFps() { DARABONBA_GET(fps_) };
    inline MediaConvertVideo& setFps(const Darabonba::Json & fps) { DARABONBA_SET_VALUE(fps_, fps) };
    inline MediaConvertVideo& setFps(Darabonba::Json && fps) { DARABONBA_SET_RVALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline     const Darabonba::Json & getGop() const { DARABONBA_GET(gop_) };
    Darabonba::Json & getGop() { DARABONBA_GET(gop_) };
    inline MediaConvertVideo& setGop(const Darabonba::Json & gop) { DARABONBA_SET_VALUE(gop_, gop) };
    inline MediaConvertVideo& setGop(Darabonba::Json && gop) { DARABONBA_SET_RVALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline MediaConvertVideo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // longShortMode Field Functions 
    bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
    void deleteLongShortMode() { this->longShortMode_ = nullptr;};
    inline bool getLongShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, false) };
    inline MediaConvertVideo& setLongShortMode(bool longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


    // maxFps Field Functions 
    bool hasMaxFps() const { return this->maxFps_ != nullptr;};
    void deleteMaxFps() { this->maxFps_ = nullptr;};
    inline     const Darabonba::Json & getMaxFps() const { DARABONBA_GET(maxFps_) };
    Darabonba::Json & getMaxFps() { DARABONBA_GET(maxFps_) };
    inline MediaConvertVideo& setMaxFps(const Darabonba::Json & maxFps) { DARABONBA_SET_VALUE(maxFps_, maxFps) };
    inline MediaConvertVideo& setMaxFps(Darabonba::Json && maxFps) { DARABONBA_SET_RVALUE(maxFps_, maxFps) };


    // maxrate Field Functions 
    bool hasMaxrate() const { return this->maxrate_ != nullptr;};
    void deleteMaxrate() { this->maxrate_ = nullptr;};
    inline int32_t getMaxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, 0) };
    inline MediaConvertVideo& setMaxrate(int32_t maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline string getPad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
    inline MediaConvertVideo& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline MediaConvertVideo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline int32_t getQscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, 0) };
    inline MediaConvertVideo& setQscale(int32_t qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline bool getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, false) };
    inline MediaConvertVideo& setRemove(bool remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline MediaConvertVideo& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline MediaConvertVideo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<int32_t> bitrate_ {};
    shared_ptr<int32_t> bufsize_ {};
    shared_ptr<string> codec_ {};
    Darabonba::Json crf_ {};
    shared_ptr<string> crop_ {};
    Darabonba::Json fps_ {};
    Darabonba::Json gop_ {};
    shared_ptr<int32_t> height_ {};
    shared_ptr<bool> longShortMode_ {};
    Darabonba::Json maxFps_ {};
    shared_ptr<int32_t> maxrate_ {};
    shared_ptr<string> pad_ {};
    shared_ptr<string> profile_ {};
    shared_ptr<int32_t> qscale_ {};
    shared_ptr<bool> remove_ {};
    shared_ptr<string> scanMode_ {};
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
