// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEZZANINEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEZZANINEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMezzanineInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMezzanineInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Mezzanine, mezzanine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMezzanineInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Mezzanine, mezzanine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMezzanineInfoResponseBody() = default ;
    GetMezzanineInfoResponseBody(const GetMezzanineInfoResponseBody &) = default ;
    GetMezzanineInfoResponseBody(GetMezzanineInfoResponseBody &&) = default ;
    GetMezzanineInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMezzanineInfoResponseBody() = default ;
    GetMezzanineInfoResponseBody& operator=(const GetMezzanineInfoResponseBody &) = default ;
    GetMezzanineInfoResponseBody& operator=(GetMezzanineInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Mezzanine : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Mezzanine& obj) { 
        DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FileMD5, fileMD5_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(OutputType, outputType_);
        DARABONBA_PTR_TO_JSON(PreprocessStatus, preprocessStatus_);
        DARABONBA_PTR_TO_JSON(RestoreExpiration, restoreExpiration_);
        DARABONBA_PTR_TO_JSON(RestoreStatus, restoreStatus_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
        DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Mezzanine& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FileMD5, fileMD5_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
        DARABONBA_PTR_FROM_JSON(PreprocessStatus, preprocessStatus_);
        DARABONBA_PTR_FROM_JSON(RestoreExpiration, restoreExpiration_);
        DARABONBA_PTR_FROM_JSON(RestoreStatus, restoreStatus_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
        DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Mezzanine() = default ;
      Mezzanine(const Mezzanine &) = default ;
      Mezzanine(Mezzanine &&) = default ;
      Mezzanine(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Mezzanine() = default ;
      Mezzanine& operator=(const Mezzanine &) = default ;
      Mezzanine& operator=(Mezzanine &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoStreamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoStreamList& obj) { 
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
          DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
          DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(Lang, lang_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
          DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(Rotate, rotate_);
          DARABONBA_PTR_TO_JSON(Sar, sar_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Timebase, timebase_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, VideoStreamList& obj) { 
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
          DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
          DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Lang, lang_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
          DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
          DARABONBA_PTR_FROM_JSON(Sar, sar_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        VideoStreamList() = default ;
        VideoStreamList(const VideoStreamList &) = default ;
        VideoStreamList(VideoStreamList &&) = default ;
        VideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoStreamList() = default ;
        VideoStreamList& operator=(const VideoStreamList &) = default ;
        VideoStreamList& operator=(VideoStreamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->HDRType_ == nullptr
        && this->hasBFrames_ == nullptr && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr
        && this->numFrames_ == nullptr && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->rotate_ == nullptr && this->sar_ == nullptr
        && this->startTime_ == nullptr && this->timebase_ == nullptr && this->width_ == nullptr; };
        // avgFPS Field Functions 
        bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
        void deleteAvgFPS() { this->avgFPS_ = nullptr;};
        inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
        inline VideoStreamList& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline VideoStreamList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // codecLongName Field Functions 
        bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
        void deleteCodecLongName() { this->codecLongName_ = nullptr;};
        inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
        inline VideoStreamList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


        // codecName Field Functions 
        bool hasCodecName() const { return this->codecName_ != nullptr;};
        void deleteCodecName() { this->codecName_ = nullptr;};
        inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
        inline VideoStreamList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


        // codecTag Field Functions 
        bool hasCodecTag() const { return this->codecTag_ != nullptr;};
        void deleteCodecTag() { this->codecTag_ = nullptr;};
        inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
        inline VideoStreamList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


        // codecTagString Field Functions 
        bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
        void deleteCodecTagString() { this->codecTagString_ = nullptr;};
        inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
        inline VideoStreamList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


        // codecTimeBase Field Functions 
        bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
        void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
        inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
        inline VideoStreamList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


        // dar Field Functions 
        bool hasDar() const { return this->dar_ != nullptr;};
        void deleteDar() { this->dar_ = nullptr;};
        inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
        inline VideoStreamList& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline VideoStreamList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline VideoStreamList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // HDRType Field Functions 
        bool hasHDRType() const { return this->HDRType_ != nullptr;};
        void deleteHDRType() { this->HDRType_ = nullptr;};
        inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
        inline VideoStreamList& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


        // hasBFrames Field Functions 
        bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
        void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
        inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
        inline VideoStreamList& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline VideoStreamList& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline VideoStreamList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // lang Field Functions 
        bool hasLang() const { return this->lang_ != nullptr;};
        void deleteLang() { this->lang_ = nullptr;};
        inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
        inline VideoStreamList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline VideoStreamList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // numFrames Field Functions 
        bool hasNumFrames() const { return this->numFrames_ != nullptr;};
        void deleteNumFrames() { this->numFrames_ = nullptr;};
        inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
        inline VideoStreamList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


        // pixFmt Field Functions 
        bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
        void deletePixFmt() { this->pixFmt_ = nullptr;};
        inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
        inline VideoStreamList& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
        inline VideoStreamList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


        // rotate Field Functions 
        bool hasRotate() const { return this->rotate_ != nullptr;};
        void deleteRotate() { this->rotate_ = nullptr;};
        inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
        inline VideoStreamList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


        // sar Field Functions 
        bool hasSar() const { return this->sar_ != nullptr;};
        void deleteSar() { this->sar_ = nullptr;};
        inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
        inline VideoStreamList& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline VideoStreamList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // timebase Field Functions 
        bool hasTimebase() const { return this->timebase_ != nullptr;};
        void deleteTimebase() { this->timebase_ = nullptr;};
        inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
        inline VideoStreamList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline VideoStreamList& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The average frame rate.
        shared_ptr<string> avgFPS_ {};
        // The bitrate. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The full name of the encoding format.
        shared_ptr<string> codecLongName_ {};
        // The short name of the encoding format.
        shared_ptr<string> codecName_ {};
        // The tag of the encoding format.
        shared_ptr<string> codecTag_ {};
        // The tag string of the encoding format.
        shared_ptr<string> codecTagString_ {};
        // The codec time base.
        shared_ptr<string> codecTimeBase_ {};
        // The display aspect ratio (DAR) of the video stream.
        shared_ptr<string> dar_ {};
        // The duration of the audio file.
        shared_ptr<string> duration_ {};
        // The frame rate of the output file.
        shared_ptr<string> fps_ {};
        // The HDR type of the video stream.
        shared_ptr<string> HDRType_ {};
        // Indicates whether the video stream contains B-frames.
        shared_ptr<string> hasBFrames_ {};
        // The height of the video stream.
        shared_ptr<string> height_ {};
        // The sequence number of the video stream. The value indicates the position of the video stream in all video streams.
        shared_ptr<string> index_ {};
        // The language.
        shared_ptr<string> lang_ {};
        // The codec level.
        shared_ptr<string> level_ {};
        // The total number of frames.
        shared_ptr<string> numFrames_ {};
        // The pixel format.
        shared_ptr<string> pixFmt_ {};
        // The codec profile.
        shared_ptr<string> profile_ {};
        // The rotation angle of the video. Valid values: **[0,360)**.
        shared_ptr<string> rotate_ {};
        // The sample aspect ratio (SAR) of the video stream.
        shared_ptr<string> sar_ {};
        // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The time base of the audio stream.
        shared_ptr<string> timebase_ {};
        // The width of the video in pixels.
        shared_ptr<string> width_ {};
      };

      class AudioStreamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioStreamList& obj) { 
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
          DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
          DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
          DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Timebase, timebase_);
        };
        friend void from_json(const Darabonba::Json& j, AudioStreamList& obj) { 
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
          DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
          DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
          DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
        };
        AudioStreamList() = default ;
        AudioStreamList(const AudioStreamList &) = default ;
        AudioStreamList(AudioStreamList &&) = default ;
        AudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioStreamList() = default ;
        AudioStreamList& operator=(const AudioStreamList &) = default ;
        AudioStreamList& operator=(AudioStreamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->numFrames_ == nullptr && this->sampleFmt_ == nullptr && this->sampleRate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline AudioStreamList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // channelLayout Field Functions 
        bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
        void deleteChannelLayout() { this->channelLayout_ = nullptr;};
        inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
        inline AudioStreamList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
        inline AudioStreamList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


        // codecLongName Field Functions 
        bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
        void deleteCodecLongName() { this->codecLongName_ = nullptr;};
        inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
        inline AudioStreamList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


        // codecName Field Functions 
        bool hasCodecName() const { return this->codecName_ != nullptr;};
        void deleteCodecName() { this->codecName_ = nullptr;};
        inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
        inline AudioStreamList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


        // codecTag Field Functions 
        bool hasCodecTag() const { return this->codecTag_ != nullptr;};
        void deleteCodecTag() { this->codecTag_ = nullptr;};
        inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
        inline AudioStreamList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


        // codecTagString Field Functions 
        bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
        void deleteCodecTagString() { this->codecTagString_ = nullptr;};
        inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
        inline AudioStreamList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


        // codecTimeBase Field Functions 
        bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
        void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
        inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
        inline AudioStreamList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline AudioStreamList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline AudioStreamList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // lang Field Functions 
        bool hasLang() const { return this->lang_ != nullptr;};
        void deleteLang() { this->lang_ = nullptr;};
        inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
        inline AudioStreamList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


        // numFrames Field Functions 
        bool hasNumFrames() const { return this->numFrames_ != nullptr;};
        void deleteNumFrames() { this->numFrames_ = nullptr;};
        inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
        inline AudioStreamList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


        // sampleFmt Field Functions 
        bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
        void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
        inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
        inline AudioStreamList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


        // sampleRate Field Functions 
        bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
        void deleteSampleRate() { this->sampleRate_ = nullptr;};
        inline string getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
        inline AudioStreamList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline AudioStreamList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // timebase Field Functions 
        bool hasTimebase() const { return this->timebase_ != nullptr;};
        void deleteTimebase() { this->timebase_ = nullptr;};
        inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
        inline AudioStreamList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


      protected:
        // The bitrate.
        shared_ptr<string> bitrate_ {};
        // The output layout of the sound channels. Valid values:
        // 
        // *   **mono**
        // *   **stereo**
        shared_ptr<string> channelLayout_ {};
        // The number of sound channels.
        shared_ptr<string> channels_ {};
        // The full name of the encoding format.
        shared_ptr<string> codecLongName_ {};
        // The short name of the encoding format.
        shared_ptr<string> codecName_ {};
        // The tag of the encoding format.
        shared_ptr<string> codecTag_ {};
        // The tag string of the encoding format.
        shared_ptr<string> codecTagString_ {};
        // The codec time base.
        shared_ptr<string> codecTimeBase_ {};
        // The duration of the audio file.
        shared_ptr<string> duration_ {};
        // The sequence number of the audio stream. The value indicates the position of the audio stream in all audio streams.
        shared_ptr<string> index_ {};
        // The language.
        shared_ptr<string> lang_ {};
        // The total number of frames.
        shared_ptr<string> numFrames_ {};
        // The sampling format.
        shared_ptr<string> sampleFmt_ {};
        // The sampling rate of the audio stream.
        shared_ptr<string> sampleRate_ {};
        // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The time base of the audio stream.
        shared_ptr<string> timebase_ {};
      };

      virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->bitrate_ == nullptr && this->creationTime_ == nullptr && this->duration_ == nullptr && this->fileMD5_ == nullptr && this->fileName_ == nullptr
        && this->fileURL_ == nullptr && this->fps_ == nullptr && this->height_ == nullptr && this->outputType_ == nullptr && this->preprocessStatus_ == nullptr
        && this->restoreExpiration_ == nullptr && this->restoreStatus_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr
        && this->videoId_ == nullptr && this->videoStreamList_ == nullptr && this->width_ == nullptr; };
      // audioStreamList Field Functions 
      bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
      void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
      inline const vector<Mezzanine::AudioStreamList> & getAudioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, vector<Mezzanine::AudioStreamList>) };
      inline vector<Mezzanine::AudioStreamList> getAudioStreamList() { DARABONBA_PTR_GET(audioStreamList_, vector<Mezzanine::AudioStreamList>) };
      inline Mezzanine& setAudioStreamList(const vector<Mezzanine::AudioStreamList> & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
      inline Mezzanine& setAudioStreamList(vector<Mezzanine::AudioStreamList> && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
      inline Mezzanine& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Mezzanine& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Mezzanine& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // fileMD5 Field Functions 
      bool hasFileMD5() const { return this->fileMD5_ != nullptr;};
      void deleteFileMD5() { this->fileMD5_ = nullptr;};
      inline string getFileMD5() const { DARABONBA_PTR_GET_DEFAULT(fileMD5_, "") };
      inline Mezzanine& setFileMD5(string fileMD5) { DARABONBA_PTR_SET_VALUE(fileMD5_, fileMD5) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Mezzanine& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline Mezzanine& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
      inline Mezzanine& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int64_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
      inline Mezzanine& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // outputType Field Functions 
      bool hasOutputType() const { return this->outputType_ != nullptr;};
      void deleteOutputType() { this->outputType_ = nullptr;};
      inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
      inline Mezzanine& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


      // preprocessStatus Field Functions 
      bool hasPreprocessStatus() const { return this->preprocessStatus_ != nullptr;};
      void deletePreprocessStatus() { this->preprocessStatus_ = nullptr;};
      inline string getPreprocessStatus() const { DARABONBA_PTR_GET_DEFAULT(preprocessStatus_, "") };
      inline Mezzanine& setPreprocessStatus(string preprocessStatus) { DARABONBA_PTR_SET_VALUE(preprocessStatus_, preprocessStatus) };


      // restoreExpiration Field Functions 
      bool hasRestoreExpiration() const { return this->restoreExpiration_ != nullptr;};
      void deleteRestoreExpiration() { this->restoreExpiration_ = nullptr;};
      inline string getRestoreExpiration() const { DARABONBA_PTR_GET_DEFAULT(restoreExpiration_, "") };
      inline Mezzanine& setRestoreExpiration(string restoreExpiration) { DARABONBA_PTR_SET_VALUE(restoreExpiration_, restoreExpiration) };


      // restoreStatus Field Functions 
      bool hasRestoreStatus() const { return this->restoreStatus_ != nullptr;};
      void deleteRestoreStatus() { this->restoreStatus_ = nullptr;};
      inline string getRestoreStatus() const { DARABONBA_PTR_GET_DEFAULT(restoreStatus_, "") };
      inline Mezzanine& setRestoreStatus(string restoreStatus) { DARABONBA_PTR_SET_VALUE(restoreStatus_, restoreStatus) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Mezzanine& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Mezzanine& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageClass Field Functions 
      bool hasStorageClass() const { return this->storageClass_ != nullptr;};
      void deleteStorageClass() { this->storageClass_ = nullptr;};
      inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
      inline Mezzanine& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline Mezzanine& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


      // videoStreamList Field Functions 
      bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
      void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
      inline const vector<Mezzanine::VideoStreamList> & getVideoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, vector<Mezzanine::VideoStreamList>) };
      inline vector<Mezzanine::VideoStreamList> getVideoStreamList() { DARABONBA_PTR_GET(videoStreamList_, vector<Mezzanine::VideoStreamList>) };
      inline Mezzanine& setVideoStreamList(const vector<Mezzanine::VideoStreamList> & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
      inline Mezzanine& setVideoStreamList(vector<Mezzanine::VideoStreamList> && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int64_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
      inline Mezzanine& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The codec time base.
      shared_ptr<vector<Mezzanine::AudioStreamList>> audioStreamList_ {};
      // The bitrate of the file. Unit: Kbit/s.
      shared_ptr<string> bitrate_ {};
      // The time when the file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The duration of the file. Unit: seconds.
      shared_ptr<string> duration_ {};
      shared_ptr<string> fileMD5_ {};
      // The name of the file.
      shared_ptr<string> fileName_ {};
      // The URL of the file.
      shared_ptr<string> fileURL_ {};
      // The frame rate of the file. Unit: frames per second.
      shared_ptr<string> fps_ {};
      // The height of the file. Unit: pixel.
      shared_ptr<int64_t> height_ {};
      // The type of the mezzanine file URL. Valid values:
      // 
      // - **oss**: OSS URL
      // - **cdn** (default): CDN URL
      // 
      // > If you specify an OSS URL for the video stream, the video stream must be in the MP4 format.
      shared_ptr<string> outputType_ {};
      // The preprocess status od the media.
      shared_ptr<string> preprocessStatus_ {};
      // The period of time in which the object remains in the restored state.
      shared_ptr<string> restoreExpiration_ {};
      // The restoration status of the audio or video file. Valid values:
      // 
      // *   **Processing**
      // *   **Success**
      // *   **Failed**
      shared_ptr<string> restoreStatus_ {};
      // The size of the file. Unit: byte.
      shared_ptr<int64_t> size_ {};
      // The status of the file. Valid values:
      // 
      // *   **Uploading**: The file is being uploaded. This is the initial status.
      // *   **Normal**: The file is uploaded.
      // *   **UploadFail**: The file fails to be uploaded.
      // *   **Deleted**: The file is deleted.
      shared_ptr<string> status_ {};
      // The storage class of the audio file. Valid values:
      // 
      // *   **Standard**: All media resources are stored as Standard objects.
      // *   **IA**: All media resources are stored as IA objects.
      // *   **Archive**: All media resources are stored as Archive objects.
      // *   **ColdArchive**: All media resources are stored as Cold Archive objects.
      // *   **SourceIA**: Only the source files are IA objects.
      // *   **SourceArchive**: Only the source files are Archive objects.
      // *   **SourceColdArchive**: Only the source files are Cold Archive objects.
      // *   **Changing**: The storage class of the audio file is being changed.
      // *   **SourceChanging**: The storage class of the source file is being changed.
      shared_ptr<string> storageClass_ {};
      // The ID of the video.
      shared_ptr<string> videoId_ {};
      // The HDR type of the video stream.
      shared_ptr<vector<Mezzanine::VideoStreamList>> videoStreamList_ {};
      // The width of the file. Unit: pixel.
      shared_ptr<int64_t> width_ {};
    };

    virtual bool empty() const override { return this->mezzanine_ == nullptr
        && this->requestId_ == nullptr; };
    // mezzanine Field Functions 
    bool hasMezzanine() const { return this->mezzanine_ != nullptr;};
    void deleteMezzanine() { this->mezzanine_ = nullptr;};
    inline const GetMezzanineInfoResponseBody::Mezzanine & getMezzanine() const { DARABONBA_PTR_GET_CONST(mezzanine_, GetMezzanineInfoResponseBody::Mezzanine) };
    inline GetMezzanineInfoResponseBody::Mezzanine getMezzanine() { DARABONBA_PTR_GET(mezzanine_, GetMezzanineInfoResponseBody::Mezzanine) };
    inline GetMezzanineInfoResponseBody& setMezzanine(const GetMezzanineInfoResponseBody::Mezzanine & mezzanine) { DARABONBA_PTR_SET_VALUE(mezzanine_, mezzanine) };
    inline GetMezzanineInfoResponseBody& setMezzanine(GetMezzanineInfoResponseBody::Mezzanine && mezzanine) { DARABONBA_PTR_SET_RVALUE(mezzanine_, mezzanine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMezzanineInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the source file.
    shared_ptr<GetMezzanineInfoResponseBody::Mezzanine> mezzanine_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
