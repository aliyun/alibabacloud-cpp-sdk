// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
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
  class SubmitMediaInfoJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody(SubmitMediaInfoJobResponseBody &&) = default ;
    SubmitMediaInfoJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody& operator=(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody& operator=(SubmitMediaInfoJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaInfoJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfoJob& obj) { 
        DARABONBA_PTR_TO_JSON(Async, async_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MediaInfoProperty, mediaInfoProperty_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_ANY_TO_JSON(SubmitResultJson, submitResultJson_);
        DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_TO_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfoJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Async, async_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MediaInfoProperty, mediaInfoProperty_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_ANY_FROM_JSON(SubmitResultJson, submitResultJson_);
        DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
        DARABONBA_PTR_FROM_JSON(TriggerSource, triggerSource_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      MediaInfoJob() = default ;
      MediaInfoJob(const MediaInfoJob &) = default ;
      MediaInfoJob(MediaInfoJob &&) = default ;
      MediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfoJob() = default ;
      MediaInfoJob& operator=(const MediaInfoJob &) = default ;
      MediaInfoJob& operator=(MediaInfoJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
        };
        ScheduleConfig() = default ;
        ScheduleConfig(const ScheduleConfig &) = default ;
        ScheduleConfig(ScheduleConfig &&) = default ;
        ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleConfig() = default ;
        ScheduleConfig& operator=(const ScheduleConfig &) = default ;
        ScheduleConfig& operator=(ScheduleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->priority_ == nullptr; };
        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline ScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      protected:
        // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
        shared_ptr<string> pipelineId_ {};
        // The priority of the job. Valid values: 1 to 10. The greater the value, the higher the priority.
        shared_ptr<int32_t> priority_ {};
      };

      class MediaInfoProperty : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaInfoProperty& obj) { 
          DARABONBA_PTR_TO_JSON(AudioStreamInfoList, audioStreamInfoList_);
          DARABONBA_PTR_TO_JSON(FileBasicInfo, fileBasicInfo_);
          DARABONBA_PTR_TO_JSON(VideoStreamInfoList, videoStreamInfoList_);
        };
        friend void from_json(const Darabonba::Json& j, MediaInfoProperty& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioStreamInfoList, audioStreamInfoList_);
          DARABONBA_PTR_FROM_JSON(FileBasicInfo, fileBasicInfo_);
          DARABONBA_PTR_FROM_JSON(VideoStreamInfoList, videoStreamInfoList_);
        };
        MediaInfoProperty() = default ;
        MediaInfoProperty(const MediaInfoProperty &) = default ;
        MediaInfoProperty(MediaInfoProperty &&) = default ;
        MediaInfoProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaInfoProperty() = default ;
        MediaInfoProperty& operator=(const MediaInfoProperty &) = default ;
        MediaInfoProperty& operator=(MediaInfoProperty &&) = default ;
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
          // The average frame rate.
          shared_ptr<string> avgFps_ {};
          // The bitrate.
          shared_ptr<string> bitRate_ {};
          // The name of the encoding format.
          shared_ptr<string> codecLongName_ {};
          // The encoding format.
          shared_ptr<string> codecName_ {};
          // The tag of the encoding format.
          shared_ptr<string> codecTag_ {};
          // The tag string of the encoding format.
          shared_ptr<string> codecTagString_ {};
          // The time base of the encoder.
          shared_ptr<string> codecTimeBase_ {};
          // The display aspect ratio.
          shared_ptr<string> dar_ {};
          // The duration of the file.
          shared_ptr<string> duration_ {};
          // The frame rate.
          shared_ptr<string> fps_ {};
          // Indicates whether the video stream contains bidirectional frames (B-frames). Valid values:
          // 
          // *   0: The stream contains no B-frames.
          // *   1: The stream contains one B-frame.
          // *   2: The stream contains multiple consecutive B-frames.
          shared_ptr<string> hasBFrames_ {};
          // The height of the output video.
          shared_ptr<string> height_ {};
          // The sequence number of the stream.
          shared_ptr<string> index_ {};
          // The language of the stream.
          shared_ptr<string> lang_ {};
          // The codec level.
          shared_ptr<string> level_ {};
          // The total number of frames.
          shared_ptr<string> numFrames_ {};
          // The pixel format.
          shared_ptr<string> pixFmt_ {};
          // The encoder profile.
          shared_ptr<string> profile_ {};
          // The rotation angle of the video image.
          shared_ptr<string> rotate_ {};
          // The aspect ratio of the area from which the sampling points are collected.
          shared_ptr<string> sar_ {};
          // The start time of the stream.
          shared_ptr<string> startTime_ {};
          // The time base.
          shared_ptr<string> timeBase_ {};
          // The width of the output video.
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
          // The video bitrate.
          shared_ptr<string> bitrate_ {};
          // The duration of the video.
          shared_ptr<string> duration_ {};
          // The file name.
          shared_ptr<string> fileName_ {};
          // The file size.
          shared_ptr<string> fileSize_ {};
          // The state of the file.
          shared_ptr<string> fileStatus_ {};
          // The file type.
          shared_ptr<string> fileType_ {};
          // The URL of the file.
          shared_ptr<string> fileUrl_ {};
          // The name of the video format.
          shared_ptr<string> formatName_ {};
          // The height of the output video.
          shared_ptr<string> height_ {};
          // The ID of the media asset.
          shared_ptr<string> mediaId_ {};
          // The region in which the file resides.
          shared_ptr<string> region_ {};
          // The width of the output video.
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
          // The bitrate.
          shared_ptr<string> bitrate_ {};
          // The sound channel layout.
          shared_ptr<string> channelLayout_ {};
          // The number of sound channels.
          shared_ptr<string> channels_ {};
          // The name of the encoding format.
          shared_ptr<string> codecLongName_ {};
          // The encoding format.
          shared_ptr<string> codecName_ {};
          // The encoder tag.
          shared_ptr<string> codecTag_ {};
          // The name of the encoder tag.
          shared_ptr<string> codecTagString_ {};
          // The time base of the encoder.
          shared_ptr<string> codecTimeBase_ {};
          // The duration of the stream. Unit: seconds.
          shared_ptr<string> duration_ {};
          // The sequence number of the stream.
          shared_ptr<string> index_ {};
          // The language of the stream.
          shared_ptr<string> lang_ {};
          // The sample format.
          shared_ptr<string> sampleFmt_ {};
          // The sampling rate. Unit: Hz.
          shared_ptr<string> sampleRate_ {};
          // The start time of the stream.
          shared_ptr<string> startTime_ {};
          // The time base.
          shared_ptr<string> timebase_ {};
        };

        virtual bool empty() const override { return this->audioStreamInfoList_ == nullptr
        && this->fileBasicInfo_ == nullptr && this->videoStreamInfoList_ == nullptr; };
        // audioStreamInfoList Field Functions 
        bool hasAudioStreamInfoList() const { return this->audioStreamInfoList_ != nullptr;};
        void deleteAudioStreamInfoList() { this->audioStreamInfoList_ = nullptr;};
        inline const vector<MediaInfoProperty::AudioStreamInfoList> & getAudioStreamInfoList() const { DARABONBA_PTR_GET_CONST(audioStreamInfoList_, vector<MediaInfoProperty::AudioStreamInfoList>) };
        inline vector<MediaInfoProperty::AudioStreamInfoList> getAudioStreamInfoList() { DARABONBA_PTR_GET(audioStreamInfoList_, vector<MediaInfoProperty::AudioStreamInfoList>) };
        inline MediaInfoProperty& setAudioStreamInfoList(const vector<MediaInfoProperty::AudioStreamInfoList> & audioStreamInfoList) { DARABONBA_PTR_SET_VALUE(audioStreamInfoList_, audioStreamInfoList) };
        inline MediaInfoProperty& setAudioStreamInfoList(vector<MediaInfoProperty::AudioStreamInfoList> && audioStreamInfoList) { DARABONBA_PTR_SET_RVALUE(audioStreamInfoList_, audioStreamInfoList) };


        // fileBasicInfo Field Functions 
        bool hasFileBasicInfo() const { return this->fileBasicInfo_ != nullptr;};
        void deleteFileBasicInfo() { this->fileBasicInfo_ = nullptr;};
        inline const MediaInfoProperty::FileBasicInfo & getFileBasicInfo() const { DARABONBA_PTR_GET_CONST(fileBasicInfo_, MediaInfoProperty::FileBasicInfo) };
        inline MediaInfoProperty::FileBasicInfo getFileBasicInfo() { DARABONBA_PTR_GET(fileBasicInfo_, MediaInfoProperty::FileBasicInfo) };
        inline MediaInfoProperty& setFileBasicInfo(const MediaInfoProperty::FileBasicInfo & fileBasicInfo) { DARABONBA_PTR_SET_VALUE(fileBasicInfo_, fileBasicInfo) };
        inline MediaInfoProperty& setFileBasicInfo(MediaInfoProperty::FileBasicInfo && fileBasicInfo) { DARABONBA_PTR_SET_RVALUE(fileBasicInfo_, fileBasicInfo) };


        // videoStreamInfoList Field Functions 
        bool hasVideoStreamInfoList() const { return this->videoStreamInfoList_ != nullptr;};
        void deleteVideoStreamInfoList() { this->videoStreamInfoList_ = nullptr;};
        inline const vector<MediaInfoProperty::VideoStreamInfoList> & getVideoStreamInfoList() const { DARABONBA_PTR_GET_CONST(videoStreamInfoList_, vector<MediaInfoProperty::VideoStreamInfoList>) };
        inline vector<MediaInfoProperty::VideoStreamInfoList> getVideoStreamInfoList() { DARABONBA_PTR_GET(videoStreamInfoList_, vector<MediaInfoProperty::VideoStreamInfoList>) };
        inline MediaInfoProperty& setVideoStreamInfoList(const vector<MediaInfoProperty::VideoStreamInfoList> & videoStreamInfoList) { DARABONBA_PTR_SET_VALUE(videoStreamInfoList_, videoStreamInfoList) };
        inline MediaInfoProperty& setVideoStreamInfoList(vector<MediaInfoProperty::VideoStreamInfoList> && videoStreamInfoList) { DARABONBA_PTR_SET_RVALUE(videoStreamInfoList_, videoStreamInfoList) };


      protected:
        // The information about the audio stream.
        shared_ptr<vector<MediaInfoProperty::AudioStreamInfoList>> audioStreamInfoList_ {};
        // The basic file information.
        shared_ptr<MediaInfoProperty::FileBasicInfo> fileBasicInfo_ {};
        // The information about the video stream.
        shared_ptr<vector<MediaInfoProperty::VideoStreamInfoList>> videoStreamInfoList_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The media object. If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported. If Type is set to Media, set this parameter to the ID of a media asset.
        shared_ptr<string> media_ {};
        // The type of the media object. Valid values: OSS and Media. A value of OSS indicates an OSS object. A value of Media indicates a media asset.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->async_ == nullptr
        && this->finishTime_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->mediaInfoProperty_ == nullptr && this->name_ == nullptr
        && this->requestId_ == nullptr && this->scheduleConfig_ == nullptr && this->status_ == nullptr && this->submitResultJson_ == nullptr && this->submitTime_ == nullptr
        && this->triggerSource_ == nullptr && this->userData_ == nullptr; };
      // async Field Functions 
      bool hasAsync() const { return this->async_ != nullptr;};
      void deleteAsync() { this->async_ = nullptr;};
      inline bool getAsync() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
      inline MediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline MediaInfoJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const MediaInfoJob::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, MediaInfoJob::Input) };
      inline MediaInfoJob::Input getInput() { DARABONBA_PTR_GET(input_, MediaInfoJob::Input) };
      inline MediaInfoJob& setInput(const MediaInfoJob::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline MediaInfoJob& setInput(MediaInfoJob::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // mediaInfoProperty Field Functions 
      bool hasMediaInfoProperty() const { return this->mediaInfoProperty_ != nullptr;};
      void deleteMediaInfoProperty() { this->mediaInfoProperty_ = nullptr;};
      inline const MediaInfoJob::MediaInfoProperty & getMediaInfoProperty() const { DARABONBA_PTR_GET_CONST(mediaInfoProperty_, MediaInfoJob::MediaInfoProperty) };
      inline MediaInfoJob::MediaInfoProperty getMediaInfoProperty() { DARABONBA_PTR_GET(mediaInfoProperty_, MediaInfoJob::MediaInfoProperty) };
      inline MediaInfoJob& setMediaInfoProperty(const MediaInfoJob::MediaInfoProperty & mediaInfoProperty) { DARABONBA_PTR_SET_VALUE(mediaInfoProperty_, mediaInfoProperty) };
      inline MediaInfoJob& setMediaInfoProperty(MediaInfoJob::MediaInfoProperty && mediaInfoProperty) { DARABONBA_PTR_SET_RVALUE(mediaInfoProperty_, mediaInfoProperty) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MediaInfoJob& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline MediaInfoJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline const MediaInfoJob::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, MediaInfoJob::ScheduleConfig) };
      inline MediaInfoJob::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, MediaInfoJob::ScheduleConfig) };
      inline MediaInfoJob& setScheduleConfig(const MediaInfoJob::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
      inline MediaInfoJob& setScheduleConfig(MediaInfoJob::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaInfoJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitResultJson Field Functions 
      bool hasSubmitResultJson() const { return this->submitResultJson_ != nullptr;};
      void deleteSubmitResultJson() { this->submitResultJson_ = nullptr;};
      inline       const Darabonba::Json & getSubmitResultJson() const { DARABONBA_GET(submitResultJson_) };
      Darabonba::Json & getSubmitResultJson() { DARABONBA_GET(submitResultJson_) };
      inline MediaInfoJob& setSubmitResultJson(const Darabonba::Json & submitResultJson) { DARABONBA_SET_VALUE(submitResultJson_, submitResultJson) };
      inline MediaInfoJob& setSubmitResultJson(Darabonba::Json && submitResultJson) { DARABONBA_SET_RVALUE(submitResultJson_, submitResultJson) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline MediaInfoJob& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // triggerSource Field Functions 
      bool hasTriggerSource() const { return this->triggerSource_ != nullptr;};
      void deleteTriggerSource() { this->triggerSource_ = nullptr;};
      inline string getTriggerSource() const { DARABONBA_PTR_GET_DEFAULT(triggerSource_, "") };
      inline MediaInfoJob& setTriggerSource(string triggerSource) { DARABONBA_PTR_SET_VALUE(triggerSource_, triggerSource) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // Indicates whether asynchronous processing was performed.
      shared_ptr<bool> async_ {};
      // The time when the job was complete.
      shared_ptr<string> finishTime_ {};
      // The input of the job.
      shared_ptr<MediaInfoJob::Input> input_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The details of the media information.
      shared_ptr<MediaInfoJob::MediaInfoProperty> mediaInfoProperty_ {};
      // The job name.
      shared_ptr<string> name_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The scheduling information.
      shared_ptr<MediaInfoJob::ScheduleConfig> scheduleConfig_ {};
      // The state of the job. Valid values: Init (the job is submitted), Success (the job is successful), and Fail (the job failed).
      shared_ptr<string> status_ {};
      // The job submission information.
      Darabonba::Json submitResultJson_ {};
      // The time when the job was submitted.
      shared_ptr<string> submitTime_ {};
      // The source of the job. Valid values: API, WorkFlow, and Console.
      shared_ptr<string> triggerSource_ {};
      // The user data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->mediaInfoJob_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const SubmitMediaInfoJobResponseBody::MediaInfoJob & getMediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, SubmitMediaInfoJobResponseBody::MediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody::MediaInfoJob getMediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, SubmitMediaInfoJobResponseBody::MediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(const SubmitMediaInfoJobResponseBody::MediaInfoJob & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(SubmitMediaInfoJobResponseBody::MediaInfoJob && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaInfoJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // MediaInfoJobDTO
    shared_ptr<SubmitMediaInfoJobResponseBody::MediaInfoJob> mediaInfoJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
