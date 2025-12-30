// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETA_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTOUTPUTDETAILFILEMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertOutputDetailFileMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertOutputDetailFileMeta& obj) { 
      DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertOutputDetailFileMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
      DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
    };
    MediaConvertOutputDetailFileMeta() = default ;
    MediaConvertOutputDetailFileMeta(const MediaConvertOutputDetailFileMeta &) = default ;
    MediaConvertOutputDetailFileMeta(MediaConvertOutputDetailFileMeta &&) = default ;
    MediaConvertOutputDetailFileMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertOutputDetailFileMeta() = default ;
    MediaConvertOutputDetailFileMeta& operator=(const MediaConvertOutputDetailFileMeta &) = default ;
    MediaConvertOutputDetailFileMeta& operator=(MediaConvertOutputDetailFileMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoStreamInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoStreamInfoList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, VideoStreamInfoList& obj) { 
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
      VideoStreamInfoList() = default ;
      VideoStreamInfoList(const VideoStreamInfoList &) = default ;
      VideoStreamInfoList(VideoStreamInfoList &&) = default ;
      VideoStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoStreamInfoList() = default ;
      VideoStreamInfoList& operator=(const VideoStreamInfoList &) = default ;
      VideoStreamInfoList& operator=(VideoStreamInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avgFps_ == nullptr
        && this->bitRate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->numFrames_ == nullptr
        && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr && this->startTime_ == nullptr
        && this->timeBase_ == nullptr && this->width_ == nullptr; };
      // avgFps Field Functions 
      bool hasAvgFps() const { return this->avgFps_ != nullptr;};
      void deleteAvgFps() { this->avgFps_ = nullptr;};
      inline string getAvgFps() const { DARABONBA_PTR_GET_DEFAULT(avgFps_, "") };
      inline VideoStreamInfoList& setAvgFps(string avgFps) { DARABONBA_PTR_SET_VALUE(avgFps_, avgFps) };


      // bitRate Field Functions 
      bool hasBitRate() const { return this->bitRate_ != nullptr;};
      void deleteBitRate() { this->bitRate_ = nullptr;};
      inline string getBitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, "") };
      inline VideoStreamInfoList& setBitRate(string bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


      // codecLongName Field Functions 
      bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
      void deleteCodecLongName() { this->codecLongName_ = nullptr;};
      inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
      inline VideoStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


      // codecName Field Functions 
      bool hasCodecName() const { return this->codecName_ != nullptr;};
      void deleteCodecName() { this->codecName_ = nullptr;};
      inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
      inline VideoStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


      // codecTag Field Functions 
      bool hasCodecTag() const { return this->codecTag_ != nullptr;};
      void deleteCodecTag() { this->codecTag_ = nullptr;};
      inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
      inline VideoStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


      // codecTagString Field Functions 
      bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
      void deleteCodecTagString() { this->codecTagString_ = nullptr;};
      inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
      inline VideoStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


      // codecTimeBase Field Functions 
      bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
      void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
      inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
      inline VideoStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


      // dar Field Functions 
      bool hasDar() const { return this->dar_ != nullptr;};
      void deleteDar() { this->dar_ = nullptr;};
      inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
      inline VideoStreamInfoList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline VideoStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
      inline VideoStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // hasBFrames Field Functions 
      bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
      void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
      inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
      inline VideoStreamInfoList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline VideoStreamInfoList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline VideoStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline VideoStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline VideoStreamInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // numFrames Field Functions 
      bool hasNumFrames() const { return this->numFrames_ != nullptr;};
      void deleteNumFrames() { this->numFrames_ = nullptr;};
      inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
      inline VideoStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


      // pixFmt Field Functions 
      bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
      void deletePixFmt() { this->pixFmt_ = nullptr;};
      inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
      inline VideoStreamInfoList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline VideoStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


      // rotate Field Functions 
      bool hasRotate() const { return this->rotate_ != nullptr;};
      void deleteRotate() { this->rotate_ = nullptr;};
      inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
      inline VideoStreamInfoList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


      // sar Field Functions 
      bool hasSar() const { return this->sar_ != nullptr;};
      void deleteSar() { this->sar_ = nullptr;};
      inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
      inline VideoStreamInfoList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline VideoStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // timeBase Field Functions 
      bool hasTimeBase() const { return this->timeBase_ != nullptr;};
      void deleteTimeBase() { this->timeBase_ = nullptr;};
      inline string getTimeBase() const { DARABONBA_PTR_GET_DEFAULT(timeBase_, "") };
      inline VideoStreamInfoList& setTimeBase(string timeBase) { DARABONBA_PTR_SET_VALUE(timeBase_, timeBase) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline VideoStreamInfoList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      shared_ptr<string> avgFps_ {};
      shared_ptr<string> bitRate_ {};
      shared_ptr<string> codecLongName_ {};
      shared_ptr<string> codecName_ {};
      shared_ptr<string> codecTag_ {};
      shared_ptr<string> codecTagString_ {};
      shared_ptr<string> codecTimeBase_ {};
      shared_ptr<string> dar_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> fps_ {};
      shared_ptr<string> hasBFrames_ {};
      shared_ptr<string> height_ {};
      shared_ptr<string> index_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> numFrames_ {};
      shared_ptr<string> pixFmt_ {};
      shared_ptr<string> profile_ {};
      shared_ptr<string> rotate_ {};
      shared_ptr<string> sar_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> timeBase_ {};
      shared_ptr<string> width_ {};
    };

    class FileBasicInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileBasicInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(FileStatus, fileStatus_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(FormatName, formatName_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, FileBasicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(FileStatus, fileStatus_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      FileBasicInfo() = default ;
      FileBasicInfo(const FileBasicInfo &) = default ;
      FileBasicInfo(FileBasicInfo &&) = default ;
      FileBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileBasicInfo() = default ;
      FileBasicInfo& operator=(const FileBasicInfo &) = default ;
      FileBasicInfo& operator=(FileBasicInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr && this->fileStatus_ == nullptr && this->fileType_ == nullptr
        && this->fileUrl_ == nullptr && this->formatName_ == nullptr && this->height_ == nullptr && this->mediaId_ == nullptr && this->region_ == nullptr
        && this->width_ == nullptr; };
      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
      inline FileBasicInfo& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline FileBasicInfo& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline FileBasicInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
      inline FileBasicInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // fileStatus Field Functions 
      bool hasFileStatus() const { return this->fileStatus_ != nullptr;};
      void deleteFileStatus() { this->fileStatus_ = nullptr;};
      inline string getFileStatus() const { DARABONBA_PTR_GET_DEFAULT(fileStatus_, "") };
      inline FileBasicInfo& setFileStatus(string fileStatus) { DARABONBA_PTR_SET_VALUE(fileStatus_, fileStatus) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline FileBasicInfo& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline FileBasicInfo& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // formatName Field Functions 
      bool hasFormatName() const { return this->formatName_ != nullptr;};
      void deleteFormatName() { this->formatName_ = nullptr;};
      inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
      inline FileBasicInfo& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline FileBasicInfo& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline FileBasicInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline FileBasicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline FileBasicInfo& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      shared_ptr<string> bitrate_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> fileSize_ {};
      shared_ptr<string> fileStatus_ {};
      shared_ptr<string> fileType_ {};
      shared_ptr<string> fileUrl_ {};
      shared_ptr<string> formatName_ {};
      shared_ptr<string> height_ {};
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> width_ {};
    };

    class AudioStreamInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioStreamInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
        DARABONBA_PTR_TO_JSON(Channels, channels_);
        DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
        DARABONBA_PTR_TO_JSON(CodecName, codecName_);
        DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
        DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
        DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
        DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
        DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Timebase, timebase_);
      };
      friend void from_json(const Darabonba::Json& j, AudioStreamInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
        DARABONBA_PTR_FROM_JSON(Channels, channels_);
        DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
        DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
        DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
        DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
        DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
        DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
        DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
      };
      AudioStreamInfoList() = default ;
      AudioStreamInfoList(const AudioStreamInfoList &) = default ;
      AudioStreamInfoList(AudioStreamInfoList &&) = default ;
      AudioStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioStreamInfoList() = default ;
      AudioStreamInfoList& operator=(const AudioStreamInfoList &) = default ;
      AudioStreamInfoList& operator=(AudioStreamInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->sampleFmt_ == nullptr && this->sampleRate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
      inline AudioStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // channelLayout Field Functions 
      bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
      void deleteChannelLayout() { this->channelLayout_ = nullptr;};
      inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
      inline AudioStreamInfoList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


      // channels Field Functions 
      bool hasChannels() const { return this->channels_ != nullptr;};
      void deleteChannels() { this->channels_ = nullptr;};
      inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
      inline AudioStreamInfoList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


      // codecLongName Field Functions 
      bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
      void deleteCodecLongName() { this->codecLongName_ = nullptr;};
      inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
      inline AudioStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


      // codecName Field Functions 
      bool hasCodecName() const { return this->codecName_ != nullptr;};
      void deleteCodecName() { this->codecName_ = nullptr;};
      inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
      inline AudioStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


      // codecTag Field Functions 
      bool hasCodecTag() const { return this->codecTag_ != nullptr;};
      void deleteCodecTag() { this->codecTag_ = nullptr;};
      inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
      inline AudioStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


      // codecTagString Field Functions 
      bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
      void deleteCodecTagString() { this->codecTagString_ = nullptr;};
      inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
      inline AudioStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


      // codecTimeBase Field Functions 
      bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
      void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
      inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
      inline AudioStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline AudioStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
      inline AudioStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline AudioStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // sampleFmt Field Functions 
      bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
      void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
      inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
      inline AudioStreamInfoList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


      // sampleRate Field Functions 
      bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
      void deleteSampleRate() { this->sampleRate_ = nullptr;};
      inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
      inline AudioStreamInfoList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline AudioStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // timebase Field Functions 
      bool hasTimebase() const { return this->timebase_ != nullptr;};
      void deleteTimebase() { this->timebase_ = nullptr;};
      inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
      inline AudioStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


    protected:
      shared_ptr<string> bitrate_ {};
      shared_ptr<string> channelLayout_ {};
      shared_ptr<string> channels_ {};
      shared_ptr<string> codecLongName_ {};
      shared_ptr<string> codecName_ {};
      shared_ptr<string> codecTag_ {};
      shared_ptr<string> codecTagString_ {};
      shared_ptr<string> codecTimeBase_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> index_ {};
      shared_ptr<string> lang_ {};
      shared_ptr<string> sampleFmt_ {};
      shared_ptr<string> sampleRate_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> timebase_ {};
    };

    virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && this->fileBasicInfo_ == nullptr && this->videoStreamInfoList_ == nullptr; };
    // audioStreamInfoList Field Functions 
    bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
    void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
    inline const vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList> & getAudioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList>) };
    inline vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList> getAudioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList>) };
    inline MediaConvertOutputDetailFileMeta& setAudioStreamInfoList(const vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
    inline MediaConvertOutputDetailFileMeta& setAudioStreamInfoList(vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


    // fileBasicInfo Field Functions 
    bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
    void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
    inline const MediaConvertOutputDetailFileMeta::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, MediaConvertOutputDetailFileMeta::FileBasicInfo) };
    inline MediaConvertOutputDetailFileMeta::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, MediaConvertOutputDetailFileMeta::FileBasicInfo) };
    inline MediaConvertOutputDetailFileMeta& setFileBasicInfo(const MediaConvertOutputDetailFileMeta::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
    inline MediaConvertOutputDetailFileMeta& setFileBasicInfo(MediaConvertOutputDetailFileMeta::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


    // videoStreamInfoList Field Functions 
    bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
    void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
    inline const vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList> & getVideoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList>) };
    inline vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList> getVideoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList>) };
    inline MediaConvertOutputDetailFileMeta& setVideoStreamInfoList(const vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
    inline MediaConvertOutputDetailFileMeta& setVideoStreamInfoList(vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


  protected:
    shared_ptr<vector<MediaConvertOutputDetailFileMeta::AudioStreamInfoList>> audioStreamInfoList_ {};
    shared_ptr<MediaConvertOutputDetailFileMeta::FileBasicInfo> fileBasicInfo_ {};
    shared_ptr<vector<MediaConvertOutputDetailFileMeta::VideoStreamInfoList>> videoStreamInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
