// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEVIDEO_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEVIDEO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Crf, crf_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_TO_JSON(Pad, pad_);
      DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_TO_JSON(Preset, preset_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Crf, crf_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
      DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
      DARABONBA_PTR_FROM_JSON(Pad, pad_);
      DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_FROM_JSON(Preset, preset_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->bufsize_ != nullptr && this->codec_ != nullptr && this->crf_ != nullptr && this->crop_ != nullptr && this->fps_ != nullptr
        && this->gop_ != nullptr && this->height_ != nullptr && this->longShortMode_ != nullptr && this->maxrate_ != nullptr && this->pad_ != nullptr
        && this->pixFmt_ != nullptr && this->preset_ != nullptr && this->profile_ != nullptr && this->remove_ != nullptr && this->scanMode_ != nullptr
        && this->width_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bufsize Field Functions 
    bool hasBufsize() const { return this->bufsize_ != nullptr;};
    void deleteBufsize() { this->bufsize_ = nullptr;};
    inline string bufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // crf Field Functions 
    bool hasCrf() const { return this->crf_ != nullptr;};
    void deleteCrf() { this->crf_ = nullptr;};
    inline string crf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline string gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // longShortMode Field Functions 
    bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
    void deleteLongShortMode() { this->longShortMode_ = nullptr;};
    inline string longShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setLongShortMode(string longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


    // maxrate Field Functions 
    bool hasMaxrate() const { return this->maxrate_ != nullptr;};
    void deleteMaxrate() { this->maxrate_ = nullptr;};
    inline string maxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


    // pad Field Functions 
    bool hasPad() const { return this->pad_ != nullptr;};
    void deletePad() { this->pad_ = nullptr;};
    inline string pad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // preset Field Functions 
    bool hasPreset() const { return this->preset_ != nullptr;};
    void deletePreset() { this->preset_ = nullptr;};
    inline string preset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // scanMode Field Functions 
    bool hasScanMode() const { return this->scanMode_ != nullptr;};
    void deleteScanMode() { this->scanMode_ = nullptr;};
    inline string scanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateVideo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> bitrate_ = nullptr;
    std::shared_ptr<string> bufsize_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<string> crf_ = nullptr;
    std::shared_ptr<string> crop_ = nullptr;
    std::shared_ptr<string> fps_ = nullptr;
    std::shared_ptr<string> gop_ = nullptr;
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> longShortMode_ = nullptr;
    std::shared_ptr<string> maxrate_ = nullptr;
    std::shared_ptr<string> pad_ = nullptr;
    std::shared_ptr<string> pixFmt_ = nullptr;
    std::shared_ptr<string> preset_ = nullptr;
    std::shared_ptr<string> profile_ = nullptr;
    std::shared_ptr<string> remove_ = nullptr;
    std::shared_ptr<string> scanMode_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
