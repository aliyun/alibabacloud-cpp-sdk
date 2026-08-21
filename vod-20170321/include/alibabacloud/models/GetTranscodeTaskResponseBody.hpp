// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKRESPONSEBODY_HPP_
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
  class GetTranscodeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_TO_JSON(TranscodeTask, transcodeTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
      DARABONBA_PTR_FROM_JSON(TranscodeTask, transcodeTask_);
    };
    GetTranscodeTaskResponseBody() = default ;
    GetTranscodeTaskResponseBody(const GetTranscodeTaskResponseBody &) = default ;
    GetTranscodeTaskResponseBody(GetTranscodeTaskResponseBody &&) = default ;
    GetTranscodeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskResponseBody() = default ;
    GetTranscodeTaskResponseBody& operator=(const GetTranscodeTaskResponseBody &) = default ;
    GetTranscodeTaskResponseBody& operator=(GetTranscodeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeTask& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
        DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeTask& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(TranscodeJobInfoList, transcodeJobInfoList_);
        DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      };
      TranscodeTask() = default ;
      TranscodeTask(const TranscodeTask &) = default ;
      TranscodeTask(TranscodeTask &&) = default ;
      TranscodeTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeTask() = default ;
      TranscodeTask& operator=(const TranscodeTask &) = default ;
      TranscodeTask& operator=(TranscodeTask &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeJobInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeJobInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Definition, definition_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InputFileUrl, inputFileUrl_);
          DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(TranscodeJobId, transcodeJobId_);
          DARABONBA_PTR_TO_JSON(TranscodeJobStatus, transcodeJobStatus_);
          DARABONBA_PTR_TO_JSON(TranscodeProgress, transcodeProgress_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplateId, transcodeTemplateId_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeJobInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Definition, definition_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InputFileUrl, inputFileUrl_);
          DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(TranscodeJobId, transcodeJobId_);
          DARABONBA_PTR_FROM_JSON(TranscodeJobStatus, transcodeJobStatus_);
          DARABONBA_PTR_FROM_JSON(TranscodeProgress, transcodeProgress_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplateId, transcodeTemplateId_);
        };
        TranscodeJobInfoList() = default ;
        TranscodeJobInfoList(const TranscodeJobInfoList &) = default ;
        TranscodeJobInfoList(TranscodeJobInfoList &&) = default ;
        TranscodeJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeJobInfoList() = default ;
        TranscodeJobInfoList& operator=(const TranscodeJobInfoList &) = default ;
        TranscodeJobInfoList& operator=(TranscodeJobInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
            DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
            DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Encryption, encryption_);
            DARABONBA_PTR_TO_JSON(Filesize, filesize_);
            DARABONBA_PTR_TO_JSON(Format, format_);
            DARABONBA_PTR_TO_JSON(Fps, fps_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(OutputFileUrl, outputFileUrl_);
            DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
            DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
            DARABONBA_PTR_TO_JSON(WatermarkIdList, watermarkIdList_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
            DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
            DARABONBA_PTR_FROM_JSON(Filesize, filesize_);
            DARABONBA_PTR_FROM_JSON(Format, format_);
            DARABONBA_PTR_FROM_JSON(Fps, fps_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(OutputFileUrl, outputFileUrl_);
            DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
            DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
            DARABONBA_PTR_FROM_JSON(WatermarkIdList, watermarkIdList_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          OutputFile() = default ;
          OutputFile(const OutputFile &) = default ;
          OutputFile(OutputFile &&) = default ;
          OutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputFile() = default ;
          OutputFile& operator=(const OutputFile &) = default ;
          OutputFile& operator=(OutputFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->bitrate_ == nullptr && this->duration_ == nullptr && this->encryption_ == nullptr && this->filesize_ == nullptr && this->format_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->outputFileUrl_ == nullptr && this->subtitleStreamList_ == nullptr && this->videoStreamList_ == nullptr
        && this->watermarkIdList_ == nullptr && this->width_ == nullptr; };
          // audioStreamList Field Functions 
          bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
          void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
          inline string getAudioStreamList() const { DARABONBA_PTR_GET_DEFAULT(audioStreamList_, "") };
          inline OutputFile& setAudioStreamList(string audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };


          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
          inline OutputFile& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline OutputFile& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // encryption Field Functions 
          bool hasEncryption() const { return this->encryption_ != nullptr;};
          void deleteEncryption() { this->encryption_ = nullptr;};
          inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
          inline OutputFile& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


          // filesize Field Functions 
          bool hasFilesize() const { return this->filesize_ != nullptr;};
          void deleteFilesize() { this->filesize_ = nullptr;};
          inline int64_t getFilesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
          inline OutputFile& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline OutputFile& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // fps Field Functions 
          bool hasFps() const { return this->fps_ != nullptr;};
          void deleteFps() { this->fps_ = nullptr;};
          inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
          inline OutputFile& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline OutputFile& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // outputFileUrl Field Functions 
          bool hasOutputFileUrl() const { return this->outputFileUrl_ != nullptr;};
          void deleteOutputFileUrl() { this->outputFileUrl_ = nullptr;};
          inline string getOutputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(outputFileUrl_, "") };
          inline OutputFile& setOutputFileUrl(string outputFileUrl) { DARABONBA_PTR_SET_VALUE(outputFileUrl_, outputFileUrl) };


          // subtitleStreamList Field Functions 
          bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
          void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
          inline string getSubtitleStreamList() const { DARABONBA_PTR_GET_DEFAULT(subtitleStreamList_, "") };
          inline OutputFile& setSubtitleStreamList(string subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };


          // videoStreamList Field Functions 
          bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
          void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
          inline string getVideoStreamList() const { DARABONBA_PTR_GET_DEFAULT(videoStreamList_, "") };
          inline OutputFile& setVideoStreamList(string videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };


          // watermarkIdList Field Functions 
          bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
          void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
          inline const vector<string> & getWatermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
          inline vector<string> getWatermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
          inline OutputFile& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
          inline OutputFile& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline OutputFile& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          // The list of audio streams.
          shared_ptr<string> audioStreamList_ {};
          // The average bitrate of the transcoding output file. Unit: Kbps.
          shared_ptr<string> bitrate_ {};
          // The duration of the transcoding output file. Unit: seconds.
          shared_ptr<string> duration_ {};
          // The encryption configuration used for the transcoding output file. Valid values:
          // 
          // - **AliyunVoDEncryption**: Alibaba Cloud video encryption (proprietary encryption).
          // - **HLSEncryption**: HLS encryption.
          shared_ptr<string> encryption_ {};
          // The size of the transcoding output file. Unit: bytes.
          shared_ptr<int64_t> filesize_ {};
          // The container format of the transcoding output file.
          shared_ptr<string> format_ {};
          // The frame rate of the transcoding output file. Unit: frames per second.
          shared_ptr<string> fps_ {};
          // The height of the transcoding output video. Unit: px.
          shared_ptr<string> height_ {};
          // The OSS URL of the transcoding output file.
          shared_ptr<string> outputFileUrl_ {};
          // The list of subtitle streams.
          shared_ptr<string> subtitleStreamList_ {};
          // The list of video streams.
          shared_ptr<string> videoStreamList_ {};
          // The list of watermark IDs used for the transcoding output file.
          shared_ptr<vector<string>> watermarkIdList_ {};
          // The width of the transcoding output video. Unit: px.
          shared_ptr<string> width_ {};
        };

        virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->definition_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->inputFileUrl_ == nullptr
        && this->outputFile_ == nullptr && this->priority_ == nullptr && this->transcodeJobId_ == nullptr && this->transcodeJobStatus_ == nullptr && this->transcodeProgress_ == nullptr
        && this->transcodeTemplateId_ == nullptr; };
        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
        inline TranscodeJobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline TranscodeJobInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
        inline TranscodeJobInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline TranscodeJobInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline TranscodeJobInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // inputFileUrl Field Functions 
        bool hasInputFileUrl() const { return this->inputFileUrl_ != nullptr;};
        void deleteInputFileUrl() { this->inputFileUrl_ = nullptr;};
        inline string getInputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(inputFileUrl_, "") };
        inline TranscodeJobInfoList& setInputFileUrl(string inputFileUrl) { DARABONBA_PTR_SET_VALUE(inputFileUrl_, inputFileUrl) };


        // outputFile Field Functions 
        bool hasOutputFile() const { return this->outputFile_ != nullptr;};
        void deleteOutputFile() { this->outputFile_ = nullptr;};
        inline const TranscodeJobInfoList::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, TranscodeJobInfoList::OutputFile) };
        inline TranscodeJobInfoList::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, TranscodeJobInfoList::OutputFile) };
        inline TranscodeJobInfoList& setOutputFile(const TranscodeJobInfoList::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
        inline TranscodeJobInfoList& setOutputFile(TranscodeJobInfoList::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline TranscodeJobInfoList& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // transcodeJobId Field Functions 
        bool hasTranscodeJobId() const { return this->transcodeJobId_ != nullptr;};
        void deleteTranscodeJobId() { this->transcodeJobId_ = nullptr;};
        inline string getTranscodeJobId() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobId_, "") };
        inline TranscodeJobInfoList& setTranscodeJobId(string transcodeJobId) { DARABONBA_PTR_SET_VALUE(transcodeJobId_, transcodeJobId) };


        // transcodeJobStatus Field Functions 
        bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
        void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
        inline string getTranscodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
        inline TranscodeJobInfoList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


        // transcodeProgress Field Functions 
        bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
        void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
        inline int64_t getTranscodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
        inline TranscodeJobInfoList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


        // transcodeTemplateId Field Functions 
        bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
        void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
        inline string getTranscodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
        inline TranscodeJobInfoList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


      protected:
        // The time when the transcoding job was completed. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
        shared_ptr<string> completeTime_ {};
        // The time when the transcoding job was created. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
        shared_ptr<string> creationTime_ {};
        // The video definition. Valid values:
        // 
        // - **LD**: fluent.
        // - **SD**: standard definition.
        // - **HD**: high definition.
        // - **FHD**: ultra high definition.
        // - **OD**: original quality.
        // - **2K**: 2K.
        // - **4K**: 4K.
        // - **SQ**: standard sound quality.
        // - **HQ**: high sound quality.
        // - **AUTO**: adaptive bitrate streaming. This definition is available only when packaging is configured in the transcoding template. For more information, see [Transcoding template configuration - PackageSetting](https://help.aliyun.com/document_detail/52839.html).
        // 
        // > This value is the definition label configured in the transcoding template and does not indicate the actual resolution range of the transcoded output file.
        shared_ptr<string> definition_ {};
        // The error code returned when the transcoding job failed.
        shared_ptr<string> errorCode_ {};
        // The error message returned when the transcoding job failed.
        shared_ptr<string> errorMessage_ {};
        // The OSS URL of the transcoding source file.
        shared_ptr<string> inputFileUrl_ {};
        // The information about the transcoding output file.
        shared_ptr<TranscodeJobInfoList::OutputFile> outputFile_ {};
        // The priority of the transcoding task.
        shared_ptr<string> priority_ {};
        // The transcoding job ID.
        shared_ptr<string> transcodeJobId_ {};
        // The status of the transcoding job. Valid values:
        // - **Transcoding**: transcoding in progress.
        // - **TranscodeSuccess**: transcoding succeeded.
        // - **TranscodeFail**: transcoding failed.
        shared_ptr<string> transcodeJobStatus_ {};
        // The transcoding job progress. Value range: `[0,100]`.
        shared_ptr<int64_t> transcodeProgress_ {};
        // The ID of the transcoding template used for transcoding.
        shared_ptr<string> transcodeTemplateId_ {};
      };

      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->taskStatus_ == nullptr && this->transcodeJobInfoList_ == nullptr && this->transcodeTaskId_ == nullptr && this->transcodeTemplateGroupId_ == nullptr
        && this->trigger_ == nullptr && this->videoId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline TranscodeTask& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeTask& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline TranscodeTask& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // transcodeJobInfoList Field Functions 
      bool hasTranscodeJobInfoList() const { return this->transcodeJobInfoList_ != nullptr;};
      void deleteTranscodeJobInfoList() { this->transcodeJobInfoList_ = nullptr;};
      inline const vector<TranscodeTask::TranscodeJobInfoList> & getTranscodeJobInfoList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoList_, vector<TranscodeTask::TranscodeJobInfoList>) };
      inline vector<TranscodeTask::TranscodeJobInfoList> getTranscodeJobInfoList() { DARABONBA_PTR_GET(transcodeJobInfoList_, vector<TranscodeTask::TranscodeJobInfoList>) };
      inline TranscodeTask& setTranscodeJobInfoList(const vector<TranscodeTask::TranscodeJobInfoList> & transcodeJobInfoList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoList_, transcodeJobInfoList) };
      inline TranscodeTask& setTranscodeJobInfoList(vector<TranscodeTask::TranscodeJobInfoList> && transcodeJobInfoList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoList_, transcodeJobInfoList) };


      // transcodeTaskId Field Functions 
      bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
      void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
      inline string getTranscodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
      inline TranscodeTask& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


      // transcodeTemplateGroupId Field Functions 
      bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
      void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
      inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
      inline TranscodeTask& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline string getTrigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, "") };
      inline TranscodeTask& setTrigger(string trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


      // videoId Field Functions 
      bool hasVideoId() const { return this->videoId_ != nullptr;};
      void deleteVideoId() { this->videoId_ = nullptr;};
      inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
      inline TranscodeTask& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    protected:
      // The time when the transcoding task was completed. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> completeTime_ {};
      // The time when the transcoding task was created. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> creationTime_ {};
      // The status of the transcoding task. Valid values:
      // 
      // - **Processing**: processing in progress.
      // - **Partial**: partially completed.
      // - **CompleteAllSucc**: all transcoding jobs are completed and succeeded.
      // - **CompleteAllFail**: all transcoding jobs are completed but failed. If the source file has issues, no transcoding jobs are initiated and the entire transcoding task fails.
      // - **CompletePartialSucc**: all transcoding jobs are completed but only some succeeded.
      shared_ptr<string> taskStatus_ {};
      // The transcoding job information.
      shared_ptr<vector<TranscodeTask::TranscodeJobInfoList>> transcodeJobInfoList_ {};
      // The transcoding task ID.
      shared_ptr<string> transcodeTaskId_ {};
      // The ID of the transcoding template group used for transcoding.
      shared_ptr<string> transcodeTemplateGroupId_ {};
      // The trigger type. Valid values:
      // 
      // - **Auto**: automatically triggered after a video is uploaded.
      // - **Manual**: triggered by calling the SubmitTranscodeJobs operation.
      shared_ptr<string> trigger_ {};
      // The audio or video ID.
      shared_ptr<string> videoId_ {};
    };

    class TranscodeJobInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeJobInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Definition, definition_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InputFileUrl, inputFileUrl_);
        DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(TranscodeJobId, transcodeJobId_);
        DARABONBA_PTR_TO_JSON(TranscodeJobStatus, transcodeJobStatus_);
        DARABONBA_PTR_TO_JSON(TranscodeProgress, transcodeProgress_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateId, transcodeTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeJobInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Definition, definition_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InputFileUrl, inputFileUrl_);
        DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(TranscodeJobId, transcodeJobId_);
        DARABONBA_PTR_FROM_JSON(TranscodeJobStatus, transcodeJobStatus_);
        DARABONBA_PTR_FROM_JSON(TranscodeProgress, transcodeProgress_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateId, transcodeTemplateId_);
      };
      TranscodeJobInfoList() = default ;
      TranscodeJobInfoList(const TranscodeJobInfoList &) = default ;
      TranscodeJobInfoList(TranscodeJobInfoList &&) = default ;
      TranscodeJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeJobInfoList() = default ;
      TranscodeJobInfoList& operator=(const TranscodeJobInfoList &) = default ;
      TranscodeJobInfoList& operator=(TranscodeJobInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
          DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Encryption, encryption_);
          DARABONBA_PTR_TO_JSON(Filesize, filesize_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(OutputFileUrl, outputFileUrl_);
          DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
          DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
          DARABONBA_PTR_TO_JSON(WatermarkIdList, watermarkIdList_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
          DARABONBA_PTR_FROM_JSON(Filesize, filesize_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(OutputFileUrl, outputFileUrl_);
          DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
          DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
          DARABONBA_PTR_FROM_JSON(WatermarkIdList, watermarkIdList_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        OutputFile() = default ;
        OutputFile(const OutputFile &) = default ;
        OutputFile(OutputFile &&) = default ;
        OutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputFile() = default ;
        OutputFile& operator=(const OutputFile &) = default ;
        OutputFile& operator=(OutputFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->bitrate_ == nullptr && this->duration_ == nullptr && this->encryption_ == nullptr && this->filesize_ == nullptr && this->format_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->outputFileUrl_ == nullptr && this->subtitleStreamList_ == nullptr && this->videoStreamList_ == nullptr
        && this->watermarkIdList_ == nullptr && this->width_ == nullptr; };
        // audioStreamList Field Functions 
        bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
        void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
        inline string getAudioStreamList() const { DARABONBA_PTR_GET_DEFAULT(audioStreamList_, "") };
        inline OutputFile& setAudioStreamList(string audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };


        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline OutputFile& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline OutputFile& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // encryption Field Functions 
        bool hasEncryption() const { return this->encryption_ != nullptr;};
        void deleteEncryption() { this->encryption_ = nullptr;};
        inline string getEncryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
        inline OutputFile& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


        // filesize Field Functions 
        bool hasFilesize() const { return this->filesize_ != nullptr;};
        void deleteFilesize() { this->filesize_ = nullptr;};
        inline int64_t getFilesize() const { DARABONBA_PTR_GET_DEFAULT(filesize_, 0L) };
        inline OutputFile& setFilesize(int64_t filesize) { DARABONBA_PTR_SET_VALUE(filesize_, filesize) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline OutputFile& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline OutputFile& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline OutputFile& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // outputFileUrl Field Functions 
        bool hasOutputFileUrl() const { return this->outputFileUrl_ != nullptr;};
        void deleteOutputFileUrl() { this->outputFileUrl_ = nullptr;};
        inline string getOutputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(outputFileUrl_, "") };
        inline OutputFile& setOutputFileUrl(string outputFileUrl) { DARABONBA_PTR_SET_VALUE(outputFileUrl_, outputFileUrl) };


        // subtitleStreamList Field Functions 
        bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
        void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
        inline string getSubtitleStreamList() const { DARABONBA_PTR_GET_DEFAULT(subtitleStreamList_, "") };
        inline OutputFile& setSubtitleStreamList(string subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };


        // videoStreamList Field Functions 
        bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
        void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
        inline string getVideoStreamList() const { DARABONBA_PTR_GET_DEFAULT(videoStreamList_, "") };
        inline OutputFile& setVideoStreamList(string videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };


        // watermarkIdList Field Functions 
        bool hasWatermarkIdList() const { return this->watermarkIdList_ != nullptr;};
        void deleteWatermarkIdList() { this->watermarkIdList_ = nullptr;};
        inline const vector<string> & getWatermarkIdList() const { DARABONBA_PTR_GET_CONST(watermarkIdList_, vector<string>) };
        inline vector<string> getWatermarkIdList() { DARABONBA_PTR_GET(watermarkIdList_, vector<string>) };
        inline OutputFile& setWatermarkIdList(const vector<string> & watermarkIdList) { DARABONBA_PTR_SET_VALUE(watermarkIdList_, watermarkIdList) };
        inline OutputFile& setWatermarkIdList(vector<string> && watermarkIdList) { DARABONBA_PTR_SET_RVALUE(watermarkIdList_, watermarkIdList) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline OutputFile& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The list of audio streams.
        shared_ptr<string> audioStreamList_ {};
        // The average bitrate of the transcoding output file. Unit: Kbps.
        shared_ptr<string> bitrate_ {};
        // The duration of the transcoding output file. Unit: seconds.
        shared_ptr<string> duration_ {};
        // The encryption configuration used for the transcoding output file. Valid values:
        // 
        // - **AliyunVoDEncryption**: Alibaba Cloud video encryption (proprietary encryption).
        // - **HLSEncryption**: HLS encryption.
        shared_ptr<string> encryption_ {};
        // The size of the transcoding output file. Unit: bytes.
        shared_ptr<int64_t> filesize_ {};
        // The container format of the transcoding output file.
        shared_ptr<string> format_ {};
        // The frame rate of the transcoding output file. Unit: frames per second.
        shared_ptr<string> fps_ {};
        // The height of the transcoding output video. Unit: px.
        shared_ptr<string> height_ {};
        // The OSS URL of the transcoding output file.
        shared_ptr<string> outputFileUrl_ {};
        // The list of subtitle streams.
        shared_ptr<string> subtitleStreamList_ {};
        // The list of video streams.
        shared_ptr<string> videoStreamList_ {};
        // The list of watermarks used for transcoding.
        shared_ptr<vector<string>> watermarkIdList_ {};
        // The width of the transcoding output video. Unit: px.
        shared_ptr<string> width_ {};
      };

      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->creationTime_ == nullptr && this->definition_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->inputFileUrl_ == nullptr
        && this->outputFile_ == nullptr && this->priority_ == nullptr && this->transcodeJobId_ == nullptr && this->transcodeJobStatus_ == nullptr && this->transcodeProgress_ == nullptr
        && this->transcodeTemplateId_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline TranscodeJobInfoList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeJobInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // definition Field Functions 
      bool hasDefinition() const { return this->definition_ != nullptr;};
      void deleteDefinition() { this->definition_ = nullptr;};
      inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
      inline TranscodeJobInfoList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline TranscodeJobInfoList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline TranscodeJobInfoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // inputFileUrl Field Functions 
      bool hasInputFileUrl() const { return this->inputFileUrl_ != nullptr;};
      void deleteInputFileUrl() { this->inputFileUrl_ = nullptr;};
      inline string getInputFileUrl() const { DARABONBA_PTR_GET_DEFAULT(inputFileUrl_, "") };
      inline TranscodeJobInfoList& setInputFileUrl(string inputFileUrl) { DARABONBA_PTR_SET_VALUE(inputFileUrl_, inputFileUrl) };


      // outputFile Field Functions 
      bool hasOutputFile() const { return this->outputFile_ != nullptr;};
      void deleteOutputFile() { this->outputFile_ = nullptr;};
      inline const TranscodeJobInfoList::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, TranscodeJobInfoList::OutputFile) };
      inline TranscodeJobInfoList::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, TranscodeJobInfoList::OutputFile) };
      inline TranscodeJobInfoList& setOutputFile(const TranscodeJobInfoList::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
      inline TranscodeJobInfoList& setOutputFile(TranscodeJobInfoList::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline TranscodeJobInfoList& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // transcodeJobId Field Functions 
      bool hasTranscodeJobId() const { return this->transcodeJobId_ != nullptr;};
      void deleteTranscodeJobId() { this->transcodeJobId_ = nullptr;};
      inline string getTranscodeJobId() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobId_, "") };
      inline TranscodeJobInfoList& setTranscodeJobId(string transcodeJobId) { DARABONBA_PTR_SET_VALUE(transcodeJobId_, transcodeJobId) };


      // transcodeJobStatus Field Functions 
      bool hasTranscodeJobStatus() const { return this->transcodeJobStatus_ != nullptr;};
      void deleteTranscodeJobStatus() { this->transcodeJobStatus_ = nullptr;};
      inline string getTranscodeJobStatus() const { DARABONBA_PTR_GET_DEFAULT(transcodeJobStatus_, "") };
      inline TranscodeJobInfoList& setTranscodeJobStatus(string transcodeJobStatus) { DARABONBA_PTR_SET_VALUE(transcodeJobStatus_, transcodeJobStatus) };


      // transcodeProgress Field Functions 
      bool hasTranscodeProgress() const { return this->transcodeProgress_ != nullptr;};
      void deleteTranscodeProgress() { this->transcodeProgress_ = nullptr;};
      inline int64_t getTranscodeProgress() const { DARABONBA_PTR_GET_DEFAULT(transcodeProgress_, 0L) };
      inline TranscodeJobInfoList& setTranscodeProgress(int64_t transcodeProgress) { DARABONBA_PTR_SET_VALUE(transcodeProgress_, transcodeProgress) };


      // transcodeTemplateId Field Functions 
      bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
      void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
      inline string getTranscodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
      inline TranscodeJobInfoList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


    protected:
      // The time when the transcoding job was completed. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> completeTime_ {};
      // The time when the transcoding job was created. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> creationTime_ {};
      // The video definition. Valid values:
      // 
      // - **LD**: fluent.
      // - **SD**: standard definition.
      // - **HD**: high definition.
      // - **FHD**: ultra high definition.
      // - **OD**: original quality.
      // - **2K**: 2K.
      // - **4K**: 4K.
      // - **SQ**: standard sound quality.
      // - **HQ**: high sound quality.
      // - **AUTO**: adaptive bitrate streaming. This definition is available only when packaging is configured in the transcoding template. For more information, see [Transcoding template configuration - PackageSetting](https://help.aliyun.com/document_detail/52839.html).
      // 
      // > This value is the definition label configured in the transcoding template and does not indicate the actual resolution range of the transcoded output file.
      shared_ptr<string> definition_ {};
      // The error code returned when the transcoding job failed.
      shared_ptr<string> errorCode_ {};
      // The error message returned when the transcoding job failed.
      shared_ptr<string> errorMessage_ {};
      // The OSS URL of the transcoding source file.
      shared_ptr<string> inputFileUrl_ {};
      // The information about the transcoding output file.
      shared_ptr<TranscodeJobInfoList::OutputFile> outputFile_ {};
      // The priority of the transcoding task.
      shared_ptr<string> priority_ {};
      // The transcoding job ID.
      shared_ptr<string> transcodeJobId_ {};
      // The status of the transcoding job. Valid values:
      // - **Transcoding**: transcoding in progress.
      // - **TranscodeSuccess**: transcoding succeeded.
      // - **TranscodeFail**: transcoding failed.
      shared_ptr<string> transcodeJobStatus_ {};
      // The transcoding job progress. Value range: `[0,100]`.
      shared_ptr<int64_t> transcodeProgress_ {};
      // The ID of the transcoding template used for transcoding.
      shared_ptr<string> transcodeTemplateId_ {};
    };

    virtual bool empty() const override { return this->nonExistJobIds_ == nullptr
        && this->requestId_ == nullptr && this->transcodeJobInfoList_ == nullptr && this->transcodeTask_ == nullptr; };
    // nonExistJobIds Field Functions 
    bool hasNonExistJobIds() const { return this->nonExistJobIds_ != nullptr;};
    void deleteNonExistJobIds() { this->nonExistJobIds_ = nullptr;};
    inline const vector<string> & getNonExistJobIds() const { DARABONBA_PTR_GET_CONST(nonExistJobIds_, vector<string>) };
    inline vector<string> getNonExistJobIds() { DARABONBA_PTR_GET(nonExistJobIds_, vector<string>) };
    inline GetTranscodeTaskResponseBody& setNonExistJobIds(const vector<string> & nonExistJobIds) { DARABONBA_PTR_SET_VALUE(nonExistJobIds_, nonExistJobIds) };
    inline GetTranscodeTaskResponseBody& setNonExistJobIds(vector<string> && nonExistJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistJobIds_, nonExistJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeJobInfoList Field Functions 
    bool hasTranscodeJobInfoList() const { return this->transcodeJobInfoList_ != nullptr;};
    void deleteTranscodeJobInfoList() { this->transcodeJobInfoList_ = nullptr;};
    inline const vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList> & getTranscodeJobInfoList() const { DARABONBA_PTR_GET_CONST(transcodeJobInfoList_, vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList>) };
    inline vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList> getTranscodeJobInfoList() { DARABONBA_PTR_GET(transcodeJobInfoList_, vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList>) };
    inline GetTranscodeTaskResponseBody& setTranscodeJobInfoList(const vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList> & transcodeJobInfoList) { DARABONBA_PTR_SET_VALUE(transcodeJobInfoList_, transcodeJobInfoList) };
    inline GetTranscodeTaskResponseBody& setTranscodeJobInfoList(vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList> && transcodeJobInfoList) { DARABONBA_PTR_SET_RVALUE(transcodeJobInfoList_, transcodeJobInfoList) };


    // transcodeTask Field Functions 
    bool hasTranscodeTask() const { return this->transcodeTask_ != nullptr;};
    void deleteTranscodeTask() { this->transcodeTask_ = nullptr;};
    inline const GetTranscodeTaskResponseBody::TranscodeTask & getTranscodeTask() const { DARABONBA_PTR_GET_CONST(transcodeTask_, GetTranscodeTaskResponseBody::TranscodeTask) };
    inline GetTranscodeTaskResponseBody::TranscodeTask getTranscodeTask() { DARABONBA_PTR_GET(transcodeTask_, GetTranscodeTaskResponseBody::TranscodeTask) };
    inline GetTranscodeTaskResponseBody& setTranscodeTask(const GetTranscodeTaskResponseBody::TranscodeTask & transcodeTask) { DARABONBA_PTR_SET_VALUE(transcodeTask_, transcodeTask) };
    inline GetTranscodeTaskResponseBody& setTranscodeTask(GetTranscodeTaskResponseBody::TranscodeTask && transcodeTask) { DARABONBA_PTR_SET_RVALUE(transcodeTask_, transcodeTask) };


  protected:
    // The IDs of transcoding jobs that do not exist.
    shared_ptr<vector<string>> nonExistJobIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The transcoding job information.
    shared_ptr<vector<GetTranscodeTaskResponseBody::TranscodeJobInfoList>> transcodeJobInfoList_ {};
    // The transcoding task information.
    shared_ptr<GetTranscodeTaskResponseBody::TranscodeTask> transcodeTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
