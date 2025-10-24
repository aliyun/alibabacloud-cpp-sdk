// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATEVIDEO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATEVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd.hpp>
#include <alibabacloud/models/SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchTemplateResponseBodyTemplateListTemplateVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTemplateResponseBodyTemplateListTemplateVideo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchTemplateResponseBodyTemplateListTemplateVideo& obj) { 
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
    SearchTemplateResponseBodyTemplateListTemplateVideo() = default ;
    SearchTemplateResponseBodyTemplateListTemplateVideo(const SearchTemplateResponseBodyTemplateListTemplateVideo &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateVideo(SearchTemplateResponseBodyTemplateListTemplateVideo &&) = default ;
    SearchTemplateResponseBodyTemplateListTemplateVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTemplateResponseBodyTemplateListTemplateVideo() = default ;
    SearchTemplateResponseBodyTemplateListTemplateVideo& operator=(const SearchTemplateResponseBodyTemplateListTemplateVideo &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateVideo& operator=(SearchTemplateResponseBodyTemplateListTemplateVideo &&) = default ;
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
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bitrateBnd Field Functions 
    bool hasBitrateBnd() const { return this->bitrateBnd_ != nullptr;};
    void deleteBitrateBnd() { this->bitrateBnd_ = nullptr;};
    inline const Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd & bitrateBnd() const { DARABONBA_PTR_GET_CONST(bitrateBnd_, Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd) };
    inline Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd bitrateBnd() { DARABONBA_PTR_GET(bitrateBnd_, Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd) };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setBitrateBnd(const Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd & bitrateBnd) { DARABONBA_PTR_SET_VALUE(bitrateBnd_, bitrateBnd) };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setBitrateBnd(Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd && bitrateBnd) { DARABONBA_PTR_SET_RVALUE(bitrateBnd_, bitrateBnd) };


    // bufsize Field Functions 
    bool hasBufsize() const { return this->bufsize_ != nullptr;};
    void deleteBufsize() { this->bufsize_ = nullptr;};
    inline string bufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // crf Field Functions 
    bool hasCrf() const { return this->crf_ != nullptr;};
    void deleteCrf() { this->crf_ = nullptr;};
    inline string crf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // degrain Field Functions 
    bool hasDegrain() const { return this->degrain_ != nullptr;};
    void deleteDegrain() { this->degrain_ = nullptr;};
    inline string degrain() const { DARABONBA_PTR_GET_DEFAULT(degrain_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setDegrain(string degrain) { DARABONBA_PTR_SET_VALUE(degrain_, degrain) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // hdr2sdr Field Functions 
    bool hasHdr2sdr() const { return this->hdr2sdr_ != nullptr;};
    void deleteHdr2sdr() { this->hdr2sdr_ = nullptr;};
    inline string hdr2sdr() const { DARABONBA_PTR_GET_DEFAULT(hdr2sdr_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setHdr2sdr(string hdr2sdr) { DARABONBA_PTR_SET_VALUE(hdr2sdr_, hdr2sdr) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // longShortMode Field Functions 
    bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
    void deleteLongShortMode() { this->longShortMode_ = nullptr;};
    inline string longShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setLongShortMode(string longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


    // maxFps Field Functions 
    bool hasMaxFps() const { return this->maxFps_ != nullptr;};
    void deleteMaxFps() { this->maxFps_ = nullptr;};
    inline string maxFps() const { DARABONBA_PTR_GET_DEFAULT(maxFps_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setMaxFps(string maxFps) { DARABONBA_PTR_SET_VALUE(maxFps_, maxFps) };


    // maxrate Field Functions 
    bool hasMaxrate() const { return this->maxrate_ != nullptr;};
    void deleteMaxrate() { this->maxrate_ = nullptr;};
    inline string maxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


    // narrowBand Field Functions 
    bool hasNarrowBand() const { return this->narrowBand_ != nullptr;};
    void deleteNarrowBand() { this->narrowBand_ = nullptr;};
    inline const Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand & narrowBand() const { DARABONBA_PTR_GET_CONST(narrowBand_, Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand) };
    inline Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand narrowBand() { DARABONBA_PTR_GET(narrowBand_, Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand) };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setNarrowBand(const Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand & narrowBand) { DARABONBA_PTR_SET_VALUE(narrowBand_, narrowBand) };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setNarrowBand(Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand && narrowBand) { DARABONBA_PTR_SET_RVALUE(narrowBand_, narrowBand) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline string pad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // preset Field Functions 
    bool hasPreset() const { return this->preset_ != nullptr;};
    void deletePreset() { this->preset_ = nullptr;};
    inline string preset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // resoPriority Field Functions 
    bool hasResoPriority() const { return this->resoPriority_ != nullptr;};
    void deleteResoPriority() { this->resoPriority_ = nullptr;};
    inline string resoPriority() const { DARABONBA_PTR_GET_DEFAULT(resoPriority_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setResoPriority(string resoPriority) { DARABONBA_PTR_SET_VALUE(resoPriority_, resoPriority) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SearchTemplateResponseBodyTemplateListTemplateVideo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The average bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The average bitrate range of the video.
    std::shared_ptr<Models::SearchTemplateResponseBodyTemplateListTemplateVideoBitrateBnd> bitrateBnd_ = nullptr;
    // The buffer size.
    // 
    // *   Unit: KB.
    // *   Default value: **6000**.
    std::shared_ptr<string> bufsize_ = nullptr;
    // The codec.
    // 
    // *   Valid values: H.264 and H.265.
    // *   Default value: **H.264**.
    std::shared_ptr<string> codec_ = nullptr;
    // The constant rate factor.
    // 
    // *   Default value when the value of Codec is H.264: **23**, default value when the value of Codec is H.265: **26**.
    // *   If this parameter is set, the value of Bitrate becomes invalid.
    std::shared_ptr<string> crf_ = nullptr;
    // The method of video cropping. Valid values:
    // 
    // *   **border**: automatically detects and removes black bars.
    // *   **Value in the width:height:left:top format**: crops the video image based on the custom settings. Format: width:height:left:top. Example: 1280:800:0:140.
    std::shared_ptr<string> crop_ = nullptr;
    // The level of video quality control.
    std::shared_ptr<string> degrain_ = nullptr;
    // The frame rate of the video.
    // 
    // *   The value is 60 if the frame rate of the input video exceeds 60.
    // *   Default value: **the frame rate of the input video**.
    std::shared_ptr<string> fps_ = nullptr;
    // The maximum number of frames between two keyframes. Default value: **250**.
    std::shared_ptr<string> gop_ = nullptr;
    // Indicates whether the HDR2SDR conversion feature is enabled. If this feature is enabled, high dynamic range (HDR) videos are transcoded to standard dynamic range (SDR) videos.
    std::shared_ptr<string> hdr2sdr_ = nullptr;
    // The height of the video.
    // 
    // *   Unit: pixel.
    // *   Default value: **the height of the input video**.
    std::shared_ptr<string> height_ = nullptr;
    // Indicates whether the auto-rotate screen feature is enabled.
    // 
    // *   If this feature is enabled, the width of the output video corresponds to the long side of the input video, which is the height of the input video in portrait mode. The height of the output video corresponds to the short side of the input video, which is the width of the input video in portrait mode. Valid values:
    // *   **true**
    // *   **false**
    // *   Default value: **false**.
    std::shared_ptr<string> longShortMode_ = nullptr;
    // The maximum frame rate.
    std::shared_ptr<string> maxFps_ = nullptr;
    // The maximum bitrate of the video. Unit: Kbit/s.
    std::shared_ptr<string> maxrate_ = nullptr;
    // The Narrowband HD settings.
    std::shared_ptr<Models::SearchTemplateResponseBodyTemplateListTemplateVideoNarrowBand> narrowBand_ = nullptr;
    // The black bars that are added to the video.
    // 
    // *   Format: width:height:left:top.
    // *   Example: 1280:800:0:140.
    std::shared_ptr<string> pad_ = nullptr;
    // The pixel format of the video. Valid values: standard pixel formats such as yuv420p and yuvj420p.
    std::shared_ptr<string> pixFmt_ = nullptr;
    // The preset video algorithm. Default value: **medium**. Valid values:
    // 
    // *   **veryfast**
    // *   **fast**
    // *   **medium**
    // *   **slow**
    // *   **slower**
    std::shared_ptr<string> preset_ = nullptr;
    // The codec profile. Valid values:
    // 
    // *   **baseline**: applicable to mobile devices.
    // *   **main**: applicable to standard-definition devices.
    // *   **high**: applicable to high-definition devices.
    // *   Default value: **high**.
    std::shared_ptr<string> profile_ = nullptr;
    // The strength of the independent denoising algorithm.
    std::shared_ptr<string> qscale_ = nullptr;
    // Indicates whether the video stream is deleted. Valid values:
    // 
    // *   **true**
    // *   **false**
    // *   Default value: **false**.
    std::shared_ptr<string> remove_ = nullptr;
    // The policy of resolution adjustment.
    std::shared_ptr<string> resoPriority_ = nullptr;
    // The scan mode. Valid values:
    // 
    // *   **interlaced**
    // *   **progressive**
    std::shared_ptr<string> scanMode_ = nullptr;
    // The width of the video.
    // 
    // *   Valid values: **[128,4096]**.
    // *   Unit: pixel.
    // *   Default value: **the width of the input video**.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
