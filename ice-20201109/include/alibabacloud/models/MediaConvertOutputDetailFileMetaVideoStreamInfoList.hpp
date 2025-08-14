// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETAVIDEOSTREAMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETAVIDEOSTREAMINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetailFileMetaVideoStreamInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetailFileMetaVideoStreamInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Avg_fps, avgFps_);
      DARABONBA_PTR_TO_JSON(Bit_rate, bitRate_);
      DARABONBA_PTR_TO_JSON(Codec_long_name, codecLongName_);
      DARABONBA_PTR_TO_JSON(Codec_name, codecName_);
      DARABONBA_PTR_TO_JSON(Codec_tag, codecTag_);
      DARABONBA_PTR_TO_JSON(Codec_tag_string, codecTagString_);
      DARABONBA_PTR_TO_JSON(Codec_time_base, codecTimeBase_);
      DARABONBA_PTR_TO_JSON(Dar, dar_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Has_b_frames, hasBFrames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(Sar, sar_);
      DARABONBA_PTR_TO_JSON(Start_time, startTime_);
      DARABONBA_PTR_TO_JSON(Time_base, timeBase_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetailFileMetaVideoStreamInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Avg_fps, avgFps_);
      DARABONBA_PTR_FROM_JSON(Bit_rate, bitRate_);
      DARABONBA_PTR_FROM_JSON(Codec_long_name, codecLongName_);
      DARABONBA_PTR_FROM_JSON(Codec_name, codecName_);
      DARABONBA_PTR_FROM_JSON(Codec_tag, codecTag_);
      DARABONBA_PTR_FROM_JSON(Codec_tag_string, codecTagString_);
      DARABONBA_PTR_FROM_JSON(Codec_time_base, codecTimeBase_);
      DARABONBA_PTR_FROM_JSON(Dar, dar_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Has_b_frames, hasBFrames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(Sar, sar_);
      DARABONBA_PTR_FROM_JSON(Start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(Time_base, timeBase_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    MediaConvertOutputDetailFileMetaVideoStreamInfoList() = default ;
    MediaConvertOutputDetailFileMetaVideoStreamInfoList(const MediaConvertOutputDetailFileMetaVideoStreamInfoList &) = default ;
    MediaConvertOutputDetailFileMetaVideoStreamInfoList(MediaConvertOutputDetailFileMetaVideoStreamInfoList &&) = default ;
    MediaConvertOutputDetailFileMetaVideoStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetailFileMetaVideoStreamInfoList() = default ;
    MediaConvertOutputDetailFileMetaVideoStreamInfoList& operator=(const MediaConvertOutputDetailFileMetaVideoStreamInfoList &) = default ;
    MediaConvertOutputDetailFileMetaVideoStreamInfoList& operator=(MediaConvertOutputDetailFileMetaVideoStreamInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgFps_ != nullptr
        && this->bitRate_ != nullptr && this->codecLongName_ != nullptr && this->codecName_ != nullptr && this->codecTag_ != nullptr && this->codecTagString_ != nullptr
        && this->codecTimeBase_ != nullptr && this->dar_ != nullptr && this->duration_ != nullptr && this->fps_ != nullptr && this->hasBFrames_ != nullptr
        && this->height_ != nullptr && this->index_ != nullptr && this->lang_ != nullptr && this->level_ != nullptr && this->numFrames_ != nullptr
        && this->pixFmt_ != nullptr && this->profile_ != nullptr && this->rotate_ != nullptr && this->sar_ != nullptr && this->startTime_ != nullptr
        && this->timeBase_ != nullptr && this->width_ != nullptr; };
    // avgFps Field Functions 
    bool hasAvgFps() const { return this->avgFps_ != nullptr;};
    void deleteAvgFps() { this->avgFps_ = nullptr;};
    inline string avgFps() const { DARABONBA_PTR_GET_DEFAULT(avgFps_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setAvgFps(string avgFps) { DARABONBA_PTR_SET_VALUE(avgFps_, avgFps) };


    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline string bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setBitRate(string bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // codecLongName Field Functions 
    bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
    void deleteCodecLongName() { this->codecLongName_ = nullptr;};
    inline string codecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string codecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // codecTag Field Functions 
    bool hasCodecTag() const { return this->codecTag_ != nullptr;};
    void deleteCodecTag() { this->codecTag_ = nullptr;};
    inline string codecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


    // codecTagString Field Functions 
    bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
    void deleteCodecTagString() { this->codecTagString_ = nullptr;};
    inline string codecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


    // codecTimeBase Field Functions 
    bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
    void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
    inline string codecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


    // dar Field Functions 
    bool hasDar() const { return this->dar_ != nullptr;};
    void deleteDar() { this->dar_ = nullptr;};
    inline string dar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // hasBFrames Field Functions 
    bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
    void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
    inline string hasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // numFrames Field Functions 
    bool hasNumFrames() const { return this->numFrames_ != nullptr;};
    void deleteNumFrames() { this->numFrames_ = nullptr;};
    inline string numFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // sar Field Functions 
    bool hasSar() const { return this->sar_ != nullptr;};
    void deleteSar() { this->sar_ = nullptr;};
    inline string sar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeBase Field Functions 
    bool hasTimeBase() const { return this->timeBase_ != nullptr;};
    void deleteTimeBase() { this->timeBase_ = nullptr;};
    inline string timeBase() const { DARABONBA_PTR_GET_DEFAULT(timeBase_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setTimeBase(string timeBase) { DARABONBA_PTR_SET_VALUE(timeBase_, timeBase) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline MediaConvertOutputDetailFileMetaVideoStreamInfoList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> avgFps_ = nullptr;
    std::shared_ptr<string> bitRate_ = nullptr;
    std::shared_ptr<string> codecLongName_ = nullptr;
    std::shared_ptr<string> codecName_ = nullptr;
    std::shared_ptr<string> codecTag_ = nullptr;
    std::shared_ptr<string> codecTagString_ = nullptr;
    std::shared_ptr<string> codecTimeBase_ = nullptr;
    std::shared_ptr<string> dar_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> fps_ = nullptr;
    std::shared_ptr<string> hasBFrames_ = nullptr;
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> numFrames_ = nullptr;
    std::shared_ptr<string> pixFmt_ = nullptr;
    std::shared_ptr<string> profile_ = nullptr;
    std::shared_ptr<string> rotate_ = nullptr;
    std::shared_ptr<string> sar_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> timeBase_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
