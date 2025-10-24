// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTVIDEO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BitrateBnd, bitrateBnd_);
      DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Crf, crf_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(Degrain, degrain_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_TO_JSON(Pad, pad_);
      DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_TO_JSON(Preset, preset_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(ResoPriority, resoPriority_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BitrateBnd, bitrateBnd_);
      DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Crf, crf_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(Degrain, degrain_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_FROM_JSON(Pad, pad_);
      DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_FROM_JSON(Preset, preset_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(ResoPriority, resoPriority_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo(const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo(SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->bitrateBnd_ == nullptr && return this->bufsize_ == nullptr && return this->codec_ == nullptr && return this->crf_ == nullptr && return this->crop_ == nullptr
        && return this->degrain_ == nullptr && return this->fps_ == nullptr && return this->gop_ == nullptr && return this->height_ == nullptr && return this->maxFps_ == nullptr
        && return this->maxrate_ == nullptr && return this->pad_ == nullptr && return this->pixFmt_ == nullptr && return this->preset_ == nullptr && return this->profile_ == nullptr
        && return this->qscale_ == nullptr && return this->resoPriority_ == nullptr && return this->scanMode_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bitrateBnd Field Functions 
    bool hasBitrateBnd() const { return this->bitrateBnd_ != nullptr;};
    void deleteBitrateBnd() { this->bitrateBnd_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd & bitrateBnd() const { DARABONBA_PTR_GET_CONST(bitrateBnd_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd bitrateBnd() { DARABONBA_PTR_GET(bitrateBnd_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setBitrateBnd(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd & bitrateBnd) { DARABONBA_PTR_SET_VALUE(bitrateBnd_, bitrateBnd) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setBitrateBnd(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd && bitrateBnd) { DARABONBA_PTR_SET_RVALUE(bitrateBnd_, bitrateBnd) };


    // bufsize Field Functions 
    bool hasBufsize() const { return this->bufsize_ != nullptr;};
    void deleteBufsize() { this->bufsize_ = nullptr;};
    inline string bufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // crf Field Functions 
    bool hasCrf() const { return this->crf_ != nullptr;};
    void deleteCrf() { this->crf_ = nullptr;};
    inline string crf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // degrain Field Functions 
    bool hasDegrain() const { return this->degrain_ != nullptr;};
    void deleteDegrain() { this->degrain_ = nullptr;};
    inline string degrain() const { DARABONBA_PTR_GET_DEFAULT(degrain_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setDegrain(string degrain) { DARABONBA_PTR_SET_VALUE(degrain_, degrain) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // maxFps Field Functions 
    bool hasMaxFps() const { return this->maxFps_ != nullptr;};
    void deleteMaxFps() { this->maxFps_ = nullptr;};
    inline string maxFps() const { DARABONBA_PTR_GET_DEFAULT(maxFps_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setMaxFps(string maxFps) { DARABONBA_PTR_SET_VALUE(maxFps_, maxFps) };


    // maxrate Field Functions 
    bool hasMaxrate() const { return this->maxrate_ != nullptr;};
    void deleteMaxrate() { this->maxrate_ = nullptr;};
    inline string maxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline string pad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // preset Field Functions 
    bool hasPreset() const { return this->preset_ != nullptr;};
    void deletePreset() { this->preset_ = nullptr;};
    inline string preset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // resoPriority Field Functions 
    bool hasResoPriority() const { return this->resoPriority_ != nullptr;};
    void deleteResoPriority() { this->resoPriority_ = nullptr;};
    inline string resoPriority() const { DARABONBA_PTR_GET_DEFAULT(resoPriority_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setResoPriority(string resoPriority) { DARABONBA_PTR_SET_VALUE(resoPriority_, resoPriority) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the output video. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The average bitrate range of the video.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideoBitrateBnd> bitrateBnd_ = nullptr;
    // The size of the buffer.
    // 
    // *   Unit: KB.
    // *   Default value: **6000**.
    std::shared_ptr<string> bufsize_ = nullptr;
    // The video codec.
    // 
    // *   Valid values: **H.264**, **H.265**, **GIF**, and **WEBP**.
    // *   Default value: **H.264**.
    std::shared_ptr<string> codec_ = nullptr;
    // The constant rate factor.
    // 
    // *   If **Crf** is returned, the value of **Bitrate** is invalid.
    // *   Default value if the value of Codec is H.264: **23**. Default value if the value of Codec is H.265: **26**.
    std::shared_ptr<string> crf_ = nullptr;
    // The method of video cropping. Valid values:
    // 
    // *   **border**: Black borders are automatically detected and removed.
    // *   A value in the format of width:height:left:top: The video is cropped based on the custom settings.
    std::shared_ptr<string> crop_ = nullptr;
    // The strength of the independent noise reduction algorithm.
    std::shared_ptr<string> degrain_ = nullptr;
    // The frame rate.
    // 
    // *   Unit: frames per second.
    // *   Valid values: 0 to 60. The value is 60 if the frame rate of the input file exceeds 60.
    // *   Default value: the frame rate of the input file.
    std::shared_ptr<string> fps_ = nullptr;
    // The maximum interval between keyframes or the maximum number of frames in a frame group. Unit: seconds.
    // 
    // *   Default value: 10.
    // *   If the maximum number of frames is returned, the value does not have a unit.
    std::shared_ptr<string> gop_ = nullptr;
    // The height of the video.
    // 
    // *   Unit: pixel.
    // *   Default value: the height of the input video.
    std::shared_ptr<string> height_ = nullptr;
    // The maximum frame rate.
    std::shared_ptr<string> maxFps_ = nullptr;
    // The maximum bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> maxrate_ = nullptr;
    // The black borders that are added to the video.
    // 
    // *   The value is in the width:height:left:top format.
    // *   Unit: pixel.
    std::shared_ptr<string> pad_ = nullptr;
    // The pixel format of the video.
    // 
    // *   The default pixel format can be **yuv420p** or the pixel format of the input file.
    // 
    // *   Valid values: standard pixel formats such as **yuv420p** and **yuvj420p**.
    // 
    //     **
    // 
    //     **Note** If a non-standard pixel format such as yuvj420p(pc, bt470bg/bt470bg/smpte170m) is used, compatibility with the pixel format must be configured. Otherwise, the transcoding job fails.
    std::shared_ptr<string> pixFmt_ = nullptr;
    // The preset video algorithm. Default value: **medium**. Valid values:
    // 
    // *   **veryfast**
    // *   **fast**
    // *   **medium**
    // *   **slow**
    // *   **slower**
    std::shared_ptr<string> preset_ = nullptr;
    // The encoding profile. This parameter is returned only for the H.264 codec. Default value: **high**. Valid values:
    // 
    // >  If multiple definitions are involved, we recommend that you use baseline for the lowest definition to ensure normal playback on low-definition devices, and use main or high for other definitions.
    // 
    // *   **baseline**: applicable to mobile devices.
    // *   **main**: applicable to standard-definition devices.
    // *   **high**: applicable to high-definition devices.
    std::shared_ptr<string> profile_ = nullptr;
    // The level of quality control on the video.
    std::shared_ptr<string> qscale_ = nullptr;
    // The priority of the resource.
    std::shared_ptr<string> resoPriority_ = nullptr;
    // The scan mode. Valid values:
    // 
    // *   If this parameter is **empty**, the scan mode of the input file is used.
    // *   **auto**: automatic deinterlacing.
    // *   **progressive**: progressive scan.
    // *   **interlaced**: interlaced scan.
    // *   **By default**, this parameter is empty.
    // 
    // **Best practice**: Interlaced scan consumes less bandwidth than progressive scan, but the image quality is poor. Therefore, mainstream video production uses progressive scan.
    // 
    // *   If **progressive scan** or **interlaced scan** is used when the scan mode of the input file is neither of them, the transcoding job fails.
    // *   We recommend that you use **the scan mode of the input file** or **automatic deinterlacing** to improve compatibility.
    std::shared_ptr<string> scanMode_ = nullptr;
    // The width of the video.
    // 
    // *   Unit: pixel.
    // *   Default value: **the width of the input video**.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
