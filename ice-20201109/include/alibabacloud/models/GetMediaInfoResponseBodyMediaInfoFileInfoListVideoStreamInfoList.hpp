// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTVIDEOSTREAMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTVIDEOSTREAMINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_TO_JSON(Dar, dar_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Nb_frames, nbFrames_);
      DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(Sar, sar_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Timebase, timebase_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_FROM_JSON(Dar, dar_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Nb_frames, nbFrames_);
      DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(Sar, sar_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(const GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList &&) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& operator=(const GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& operator=(GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgFPS_ != nullptr
        && this->bitrate_ != nullptr && this->codecLongName_ != nullptr && this->codecName_ != nullptr && this->codecTag_ != nullptr && this->codecTagString_ != nullptr
        && this->codecTimeBase_ != nullptr && this->dar_ != nullptr && this->duration_ != nullptr && this->fps_ != nullptr && this->hasBFrames_ != nullptr
        && this->height_ != nullptr && this->index_ != nullptr && this->lang_ != nullptr && this->level_ != nullptr && this->nbFrames_ != nullptr
        && this->numFrames_ != nullptr && this->pixFmt_ != nullptr && this->profile_ != nullptr && this->rotate_ != nullptr && this->sar_ != nullptr
        && this->startTime_ != nullptr && this->timebase_ != nullptr && this->width_ != nullptr; };
    // avgFPS Field Functions 
    bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
    void deleteAvgFPS() { this->avgFPS_ = nullptr;};
    inline string avgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // codecLongName Field Functions 
    bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
    void deleteCodecLongName() { this->codecLongName_ = nullptr;};
    inline string codecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string codecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // codecTag Field Functions 
    bool hasCodecTag() const { return this->codecTag_ != nullptr;};
    void deleteCodecTag() { this->codecTag_ = nullptr;};
    inline string codecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


    // codecTagString Field Functions 
    bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
    void deleteCodecTagString() { this->codecTagString_ = nullptr;};
    inline string codecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


    // codecTimeBase Field Functions 
    bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
    void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
    inline string codecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


    // dar Field Functions 
    bool hasDar() const { return this->dar_ != nullptr;};
    void deleteDar() { this->dar_ = nullptr;};
    inline string dar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // hasBFrames Field Functions 
    bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
    void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
    inline string hasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // nbFrames Field Functions 
    bool hasNbFrames() const { return this->nbFrames_ != nullptr;};
    void deleteNbFrames() { this->nbFrames_ = nullptr;};
    inline string nbFrames() const { DARABONBA_PTR_GET_DEFAULT(nbFrames_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setNbFrames(string nbFrames) { DARABONBA_PTR_SET_VALUE(nbFrames_, nbFrames) };


    // numFrames Field Functions 
    bool hasNumFrames() const { return this->numFrames_ != nullptr;};
    void deleteNumFrames() { this->numFrames_ = nullptr;};
    inline string numFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


    // pixFmt Field Functions 
    bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
    void deletePixFmt() { this->pixFmt_ = nullptr;};
    inline string pixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // sar Field Functions 
    bool hasSar() const { return this->sar_ != nullptr;};
    void deleteSar() { this->sar_ = nullptr;};
    inline string sar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timebase Field Functions 
    bool hasTimebase() const { return this->timebase_ != nullptr;};
    void deleteTimebase() { this->timebase_ = nullptr;};
    inline string timebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListVideoStreamInfoList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The average video frame rate.
    std::shared_ptr<string> avgFPS_ = nullptr;
    // The bitrate.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The full name of the codec.
    std::shared_ptr<string> codecLongName_ = nullptr;
    // The short name of the codec.
    std::shared_ptr<string> codecName_ = nullptr;
    // The tag of the codec.
    std::shared_ptr<string> codecTag_ = nullptr;
    // The tag string of the codec.
    std::shared_ptr<string> codecTagString_ = nullptr;
    // The time base of the codec.
    std::shared_ptr<string> codecTimeBase_ = nullptr;
    // The display aspect ratio (DAR).
    std::shared_ptr<string> dar_ = nullptr;
    // The duration.
    std::shared_ptr<string> duration_ = nullptr;
    // The video frame rate.
    std::shared_ptr<string> fps_ = nullptr;
    // Indicates whether the video track contains bidirectional frames (B-frames).
    std::shared_ptr<string> hasBFrames_ = nullptr;
    // The height.
    std::shared_ptr<string> height_ = nullptr;
    // The sequence number of the video track.
    std::shared_ptr<string> index_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The codec level.
    std::shared_ptr<string> level_ = nullptr;
    // The total number of frames.
    std::shared_ptr<string> nbFrames_ = nullptr;
    // The number of frames.
    std::shared_ptr<string> numFrames_ = nullptr;
    // The pixel format.
    std::shared_ptr<string> pixFmt_ = nullptr;
    // The codec profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The rotation angle.
    std::shared_ptr<string> rotate_ = nullptr;
    // The sample aspect ratio (SAR).
    std::shared_ptr<string> sar_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time base.
    std::shared_ptr<string> timebase_ = nullptr;
    // The width.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
