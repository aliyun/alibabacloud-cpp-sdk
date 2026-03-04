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
    // The average bitrate of the output. If you use the CRB, ABR, or VBR bitrate control mode, you must specify Bitrate, and you must set TransMode to a valid value.
    // 
    // *   Unit: Kbps.
    // *   Valid values: -1 and [10,50000]. A value of -1 indicates that the original bitrate of the input is used.
    // 
    // Best practices:
    // 
    // *   CBR: Set TransMode to CBR and Bitrate, Maxrate, and Bufsize to the same value.
    // *   ABR: Set TransMode to onepass and specify Bitrate. You can also specify Maxrate and Bufsize to control the bitrate range.
    // *   VBR: Set TransMode to twopass and specify Maxrate/BitrateBnd and Bufsize.
    shared_ptr<int32_t> bitrate_ {};
    // The buffer size. It controls bitrate fluctuations. A larger value allows for more bitrate variation and potentially higher video quality.
    // 
    // *   Unit: Kbps.
    // *   Valid values: [1000,128000].
    // *   Default value: 6000.
    shared_ptr<int32_t> bufsize_ {};
    // The video codec.
    // 
    // *   Valid values: H.264, H.265, AV1, GIF, and WEBP.
    // *   Default value: H.264.
    shared_ptr<string> codec_ {};
    // The quality control factor. To use the CRF mode, you must specify Crf and set TransMode to fixCRF. A larger value means lower quality and a higher compression ratio.
    // 
    // *   Valid values: [20,51].
    // *   If Codec is set to H.264, the default value is 23. If Codec is set to H.265, the default value is 26. If Codec is set to AV1, the default value is 32.
    // 
    // Best Practice:
    // 
    // *   A value of 0 specifies lossless quality. A value of 51 specifies the worst quality. A recommended range is [23, 29]. You can adjust the value based on the complexity of the image. If you increase the value by six, the bitrate is reduced by half. Under the same definition, you can set the value for an animated cartoon higher than that for a shot video.
    // *   CRF targets perceptual quality, not a fixed bitrate. Use it with Maxrate and Bufsize to control bitrate fluctuations.
    Darabonba::Json crf_ {};
    // Crops the video frame. You can set automatic black border removal or custom cropping.
    // 
    // *   Specify this parameter if the input resolution is greater than the output resolution. Do not specify AdjDarMethod if this parameter is specified.
    // 
    // *   To automatically remove black borders, set this parameter to border.
    // 
    // *   To use custom cropping, set the parameter in the format of {width}:{height}:{left}:{top}.
    // 
    //     *   width: the width of the output video.
    //     *   height: the height of the output video.
    //     *   left: the distance between the left border of the output and that of the original frame.
    //     *   top: the distance between the top border of the output and that of the original frame.
    // 
    // Example: 1920:800:0:140.
    shared_ptr<string> crop_ {};
    // The frame rate of the video stream.
    // 
    // *   Unit: frames per second (FPS).
    // *   Valid values: (0,60].
    // *   Default value: the frame rate of the input file. If the original frame rate exceeds 60 FPS, 60 is used.
    // *   Recommended values: 24, 25, and 30.
    Darabonba::Json fps_ {};
    // The keyframe interval.
    // 
    // *   Set by time: The time interval, in seconds. Valid values: [1,100000].
    // *   Set by frame count: The number of frames. Valid values: [1,100000].
    // *   Default value: 10s.
    // 
    // Best practice: Set this parameter to 2-7s to improve the Time-to-First-Frame and seeking performance.
    Darabonba::Json gop_ {};
    // The height or short edge of the output. If LongShortMode is set to false or left empty, this parameter specifies the height of the output. If LongShortMode is set to true, this parameter specifies the short edge of the output.
    // 
    // *   Unit: pixel.
    // 
    // *   Valid values: [128,4096]. The value must be an even number.
    // 
    // *   Default value:
    // 
    //     *   If neither Width nor Height is specified, the dimension of the input is used.
    //     *   If only Width is specified, Height is auto-scaled.
    shared_ptr<int32_t> height_ {};
    // Specifies whether to enable orientation-adaptive scaling. This parameter takes effect if at least one of the Width and Height parameters is specified. Valid values:
    // 
    // *   true
    // *   false
    // *   Default value: false.
    // 
    // Best practice: Enable this feature when your inputs include both horizontal and vertical videos. This prevents videos from stretching.
    shared_ptr<bool> longShortMode_ {};
    // The maximum frame rate.
    Darabonba::Json maxFps_ {};
    // The maximum bitrate of the output.
    // 
    // *   Unit: Kbps.
    // *   Valid values: [10,50000].
    shared_ptr<int32_t> maxrate_ {};
    // The black borders added to the video.
    // 
    // *   Specify this parameter if the input resolution is smaller than the output resolution. If you specify this parameter, do not specify IsCheckReso, IsCheckResoFail, or AdjDarMethod.
    // 
    // *   Format: {width}:{height}:{left}:{top}.
    // 
    //     *   width: the width of the output video.
    //     *   height: the height of the output video.
    //     *   left: the distance between the left border of the output and that of the original frame.
    //     *   top: the distance between the top border of the output and that of the original frame.
    // 
    // Example: 1920:1080:0:140.
    shared_ptr<string> pad_ {};
    // The codec profile.
    // 
    // *   This parameter takes effect only if Codec is set to H.264.
    // *   Valid values: baseline, main, and high.
    // *   Default value: high.
    // 
    // Best practice: For multi-bitrate streaming, use baseline for the lowest quality rendition to ensure maximum compatibility with older devices. Use main or high for other renditions.
    shared_ptr<string> profile_ {};
    // The video quality scale. This parameter applies to VBR mode. A higher value means lower video quality and a higher compression ratio.
    // 
    // *   This parameter takes effect only if Codec is set to H.264.
    // *   Valid values: [0,51].
    shared_ptr<int32_t> qscale_ {};
    // Specifies whether to delete the video stream. Valid values:
    // 
    // *   true: deletes the video stream. All video-related parameters are invalid.
    // *   false: retains the video stream.
    // *   Default value: false.
    shared_ptr<bool> remove_ {};
    // The scan mode. Valid values:
    // 
    // *   If you leave this parameter empty, the output follows the source\\"s original scan mode.
    // *   auto: automatic deinterlacing
    // *   progressive
    // *   interlaced
    // *   By default, this parameter is left empty.
    // 
    // Best practice: The interlaced scan mode saves data traffic than the progressive scan mode but provides poor image quality. Therefore, the latter is commonly used in mainstream video production.
    // 
    // *   If you set ScanMode to progressive or interlaced, but this scan mode does not match that of the input, the video fails to be transcoded.
    // *   To improve compatibility, leave this parameter empty or set it to auto.
    shared_ptr<string> scanMode_ {};
    // The width or long edge of the output. If LongShortMode is set to false or left empty, this parameter specifies the width of the output. If LongShortMode is set to true, this parameter specifies the long edge of the output.
    // 
    // *   Unit: pixel.
    // 
    // *   Valid values: [128,4096]. The value must be an even number.
    // 
    // *   Default value:
    // 
    //     *   If neither Width nor Height is specified, the dimension of the input is used.
    //     *   If only Height is specified, Width is auto-scaled.
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
