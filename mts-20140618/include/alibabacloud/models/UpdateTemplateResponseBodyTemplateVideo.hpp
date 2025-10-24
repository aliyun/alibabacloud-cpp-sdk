// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEVIDEO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateVideoBitrateBnd.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateVideoNarrowBand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBodyTemplateVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBodyTemplateVideo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BitrateBnd, bitrateBnd_);
      DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Crf, crf_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(Degrain, degrain_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Hdr2sdr, hdr2sdr_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_TO_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_TO_JSON(NarrowBand, narrowBand_);
      DARABONBA_PTR_TO_JSON(Pad, pad_);
      DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_TO_JSON(Preset, preset_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(ResoPriority, resoPriority_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBodyTemplateVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BitrateBnd, bitrateBnd_);
      DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Crf, crf_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(Degrain, degrain_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Hdr2sdr, hdr2sdr_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_FROM_JSON(MaxFps, maxFps_);
      DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_FROM_JSON(NarrowBand, narrowBand_);
      DARABONBA_PTR_FROM_JSON(Pad, pad_);
      DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_FROM_JSON(Preset, preset_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(ResoPriority, resoPriority_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateTemplateResponseBodyTemplateVideo() = default ;
    UpdateTemplateResponseBodyTemplateVideo(const UpdateTemplateResponseBodyTemplateVideo &) = default ;
    UpdateTemplateResponseBodyTemplateVideo(UpdateTemplateResponseBodyTemplateVideo &&) = default ;
    UpdateTemplateResponseBodyTemplateVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBodyTemplateVideo() = default ;
    UpdateTemplateResponseBodyTemplateVideo& operator=(const UpdateTemplateResponseBodyTemplateVideo &) = default ;
    UpdateTemplateResponseBodyTemplateVideo& operator=(UpdateTemplateResponseBodyTemplateVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->bitrateBnd_ == nullptr && return this->bufsize_ == nullptr && return this->codec_ == nullptr && return this->crf_ == nullptr && return this->crop_ == nullptr
        && return this->degrain_ == nullptr && return this->fps_ == nullptr && return this->gop_ == nullptr && return this->hdr2sdr_ == nullptr && return this->height_ == nullptr
        && return this->longShortMode_ == nullptr && return this->maxFps_ == nullptr && return this->maxrate_ == nullptr && return this->narrowBand_ == nullptr && return this->pad_ == nullptr
        && return this->pixFmt_ == nullptr && return this->preset_ == nullptr && return this->profile_ == nullptr && return this->qscale_ == nullptr && return this->remove_ == nullptr
        && return this->resoPriority_ == nullptr && return this->scanMode_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bitrateBnd Field Functions 
    bool hasBitrateBnd() const { return this->bitrateBnd_ != nullptr;};
    void deleteBitrateBnd() { this->bitrateBnd_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd & bitrateBnd() const { DARABONBA_PTR_GET_CONST(bitrateBnd_, Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd) };
    inline Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd bitrateBnd() { DARABONBA_PTR_GET(bitrateBnd_, Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd) };
    inline UpdateTemplateResponseBodyTemplateVideo& setBitrateBnd(const Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd & bitrateBnd) { DARABONBA_PTR_SET_VALUE(bitrateBnd_, bitrateBnd) };
    inline UpdateTemplateResponseBodyTemplateVideo& setBitrateBnd(Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd && bitrateBnd) { DARABONBA_PTR_SET_RVALUE(bitrateBnd_, bitrateBnd) };


    // bufsize Field Functions 
    bool hasBufsize() const { return this->bufsize_ != nullptr;};
    void deleteBufsize() { this->bufsize_ = nullptr;};
    inline string bufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // crf Field Functions 
    bool hasCrf() const { return this->crf_ != nullptr;};
    void deleteCrf() { this->crf_ = nullptr;};
    inline string crf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // degrain Field Functions 
    bool hasDegrain() const { return this->degrain_ != nullptr;};
    void deleteDegrain() { this->degrain_ = nullptr;};
    inline string degrain() const { DARABONBA_PTR_GET_DEFAULT(degrain_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setDegrain(string degrain) { DARABONBA_PTR_SET_VALUE(degrain_, degrain) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // hdr2sdr Field Functions 
    bool hasHdr2sdr() const { return this->hdr2sdr_ != nullptr;};
    void deleteHdr2sdr() { this->hdr2sdr_ = nullptr;};
    inline string hdr2sdr() const { DARABONBA_PTR_GET_DEFAULT(hdr2sdr_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setHdr2sdr(string hdr2sdr) { DARABONBA_PTR_SET_VALUE(hdr2sdr_, hdr2sdr) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // longShortMode Field Functions 
    bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
    void deleteLongShortMode() { this->longShortMode_ = nullptr;};
    inline string longShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setLongShortMode(string longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


    // maxFps Field Functions 
    bool hasMaxFps() const { return this->maxFps_ != nullptr;};
    void deleteMaxFps() { this->maxFps_ = nullptr;};
    inline string maxFps() const { DARABONBA_PTR_GET_DEFAULT(maxFps_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setMaxFps(string maxFps) { DARABONBA_PTR_SET_VALUE(maxFps_, maxFps) };


    // maxrate Field Functions 
    bool hasMaxrate() const { return this->maxrate_ != nullptr;};
    void deleteMaxrate() { this->maxrate_ = nullptr;};
    inline string maxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


    // narrowBand Field Functions 
    bool hasNarrowBand() const { return this->narrowBand_ != nullptr;};
    void deleteNarrowBand() { this->narrowBand_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand & narrowBand() const { DARABONBA_PTR_GET_CONST(narrowBand_, Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand) };
    inline Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand narrowBand() { DARABONBA_PTR_GET(narrowBand_, Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand) };
    inline UpdateTemplateResponseBodyTemplateVideo& setNarrowBand(const Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand & narrowBand) { DARABONBA_PTR_SET_VALUE(narrowBand_, narrowBand) };
    inline UpdateTemplateResponseBodyTemplateVideo& setNarrowBand(Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand && narrowBand) { DARABONBA_PTR_SET_RVALUE(narrowBand_, narrowBand) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline string pad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // preset Field Functions 
    bool hasPreset() const { return this->preset_ != nullptr;};
    void deletePreset() { this->preset_ = nullptr;};
    inline string preset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // resoPriority Field Functions 
    bool hasResoPriority() const { return this->resoPriority_ != nullptr;};
    void deleteResoPriority() { this->resoPriority_ = nullptr;};
    inline string resoPriority() const { DARABONBA_PTR_GET_DEFAULT(resoPriority_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setResoPriority(string resoPriority) { DARABONBA_PTR_SET_VALUE(resoPriority_, resoPriority) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateTemplateResponseBodyTemplateVideo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The maximum bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The upper limit of the total bitrate. Unit: Kbit/s.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateVideoBitrateBnd> bitrateBnd_ = nullptr;
    // The level of quality control on the video.
    std::shared_ptr<string> bufsize_ = nullptr;
    // The height of the output video.
    // 
    // *   Unit: pixel.
    // *   Default value: the height of the input video.
    std::shared_ptr<string> codec_ = nullptr;
    // Indicates whether the video stream is deleted. Valid values:
    // 
    // *   **true**: The video stream is deleted.
    // *   **false**: The video stream is retained.
    // *   Default value: **false**.
    std::shared_ptr<string> crf_ = nullptr;
    // The average bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> crop_ = nullptr;
    // The average bitrate range of the video.
    std::shared_ptr<string> degrain_ = nullptr;
    // The preset video algorithm. Default value: **medium**. Valid values:
    // 
    // *   **veryfast**
    // *   **fast**
    // *   **medium**
    // *   **slow**
    // *   **slower**
    std::shared_ptr<string> fps_ = nullptr;
    // The width of the video.
    // 
    // *   Unit: pixel.
    // *   Default value: **the width of the input video**.
    std::shared_ptr<string> gop_ = nullptr;
    // Indicates whether the HDR2SDR conversion feature is enabled. If this feature is enabled, high dynamic range (HDR) videos are transcoded to standard dynamic range (SDR) videos.
    std::shared_ptr<string> hdr2sdr_ = nullptr;
    // The level of the independent denoising algorithm.
    std::shared_ptr<string> height_ = nullptr;
    // The size of the buffer.
    // 
    // *   Unit: KB.
    // *   Default value: **6000**.
    std::shared_ptr<string> longShortMode_ = nullptr;
    // The encoding profile. Valid values:
    // 
    // *   **baseline**: applicable to mobile devices.
    // *   **main**: applicable to standard-definition devices.
    // *   **high**: applicable to high-definition devices.
    // *   Default value: **high**.
    std::shared_ptr<string> maxFps_ = nullptr;
    // The maximum frame rate.
    std::shared_ptr<string> maxrate_ = nullptr;
    // The Narrowband HD settings.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateVideoNarrowBand> narrowBand_ = nullptr;
    // The video codec. Default value: **H.264**.
    std::shared_ptr<string> pad_ = nullptr;
    // The black borders added to the video.
    // 
    // *   Format: width:height:left:top.
    // *   Example: 1280:800:0:140.
    std::shared_ptr<string> pixFmt_ = nullptr;
    // The scan mode. Valid values:
    // 
    // *   **interlaced**: An interlaced scan is performed.
    // *   **progressive**: A progressive scan is performed.
    std::shared_ptr<string> preset_ = nullptr;
    // The bitrate quality control factor.
    // 
    // *   Default value if the Codec parameter is set to H.264: **23**. Default value if the Codec parameter is set to H.265: **26**.
    // *   If this parameter is returned, the setting of the Bitrate parameter is invalid.
    std::shared_ptr<string> profile_ = nullptr;
    // The method used to crop the video.
    // 
    // *   **border**: automatically detects and removes borders.
    // *   Value in the width:height:left:top format: crops the video based on custom settings.**** Example: 1280:800:0:140.
    std::shared_ptr<string> qscale_ = nullptr;
    // The maximum number of frames between two keyframes. Default value: **250**.
    std::shared_ptr<string> remove_ = nullptr;
    // The general transcoding configurations.
    std::shared_ptr<string> resoPriority_ = nullptr;
    // The policy of resolution adjustment.
    std::shared_ptr<string> scanMode_ = nullptr;
    // The frame rate.
    // 
    // *   A value of 60 is returned if the frame rate of the input video exceeds 60.
    // *   Default value: the frame rate of the input video.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
