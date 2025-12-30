// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEEDITINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveEditingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveEditingJob, liveEditingJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveEditingJob, liveEditingJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveEditingJobResponseBody() = default ;
    GetLiveEditingJobResponseBody(const GetLiveEditingJobResponseBody &) = default ;
    GetLiveEditingJobResponseBody(GetLiveEditingJobResponseBody &&) = default ;
    GetLiveEditingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveEditingJobResponseBody() = default ;
    GetLiveEditingJobResponseBody& operator=(const GetLiveEditingJobResponseBody &) = default ;
    GetLiveEditingJobResponseBody& operator=(GetLiveEditingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveEditingJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveEditingJob& obj) { 
        DARABONBA_PTR_TO_JSON(Clips, clips_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(LiveStreamConfig, liveStreamConfig_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(MediaProduceConfig, mediaProduceConfig_);
        DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OutputMediaConfig, outputMediaConfig_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, LiveEditingJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Clips, clips_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(LiveStreamConfig, liveStreamConfig_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(MediaProduceConfig, mediaProduceConfig_);
        DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OutputMediaConfig, outputMediaConfig_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      LiveEditingJob() = default ;
      LiveEditingJob(const LiveEditingJob &) = default ;
      LiveEditingJob(LiveEditingJob &&) = default ;
      LiveEditingJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveEditingJob() = default ;
      LiveEditingJob& operator=(const LiveEditingJob &) = default ;
      LiveEditingJob& operator=(LiveEditingJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputMediaConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputMediaConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
          DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_TO_JSON(VodTemplateGroupId, vodTemplateGroupId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, OutputMediaConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
          DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
          DARABONBA_PTR_FROM_JSON(VodTemplateGroupId, vodTemplateGroupId_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        OutputMediaConfig() = default ;
        OutputMediaConfig(const OutputMediaConfig &) = default ;
        OutputMediaConfig(OutputMediaConfig &&) = default ;
        OutputMediaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputMediaConfig() = default ;
        OutputMediaConfig& operator=(const OutputMediaConfig &) = default ;
        OutputMediaConfig& operator=(OutputMediaConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->fileName_ == nullptr && this->height_ == nullptr && this->mediaURL_ == nullptr && this->storageLocation_ == nullptr && this->vodTemplateGroupId_ == nullptr
        && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline int64_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
        inline OutputMediaConfig& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline OutputMediaConfig& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline OutputMediaConfig& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // mediaURL Field Functions 
        bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
        void deleteMediaURL() { this->mediaURL_ = nullptr;};
        inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
        inline OutputMediaConfig& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


        // storageLocation Field Functions 
        bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
        void deleteStorageLocation() { this->storageLocation_ = nullptr;};
        inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
        inline OutputMediaConfig& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


        // vodTemplateGroupId Field Functions 
        bool hasVodTemplateGroupId() const { return this->vodTemplateGroupId_ != nullptr;};
        void deleteVodTemplateGroupId() { this->vodTemplateGroupId_ = nullptr;};
        inline string getVodTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateGroupId_, "") };
        inline OutputMediaConfig& setVodTemplateGroupId(string vodTemplateGroupId) { DARABONBA_PTR_SET_VALUE(vodTemplateGroupId_, vodTemplateGroupId) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline OutputMediaConfig& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The bitrate of the output file. Unit: Kbit/s. You can leave this parameter empty. The default value is the maximum bitrate of the input materials.
        shared_ptr<int64_t> bitrate_ {};
        // If OutputMediaTarget is set to vod-media, this parameter indicates the file name of the output file. The value contains the file name extension but not the path.
        shared_ptr<string> fileName_ {};
        // The height of the output file. You can leave this parameter empty. The default value is the maximum height of the input materials.
        shared_ptr<int32_t> height_ {};
        // The URL of the output file.
        shared_ptr<string> mediaURL_ {};
        // If OutputMediaTarget is set to vod-media, this parameter indicates the storage location of the media asset in ApsaraVideo VOD. The storage location is the path of the file in ApsaraVideo VOD, excluding the prefix http://. Example: outin-xxxxxx.oss-cn-shanghai.aliyuncs.com.
        shared_ptr<string> storageLocation_ {};
        // The ID of the VOD transcoding template group. If VOD transcoding is not required, set the value to VOD_NO_TRANSCODE.
        shared_ptr<string> vodTemplateGroupId_ {};
        // The width of the output file. You can leave this parameter empty. The default value is the maximum width of the input materials.
        shared_ptr<int32_t> width_ {};
      };

      class MediaProduceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaProduceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, MediaProduceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
        };
        MediaProduceConfig() = default ;
        MediaProduceConfig(const MediaProduceConfig &) = default ;
        MediaProduceConfig(MediaProduceConfig &&) = default ;
        MediaProduceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaProduceConfig() = default ;
        MediaProduceConfig& operator=(const MediaProduceConfig &) = default ;
        MediaProduceConfig& operator=(MediaProduceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mode_ == nullptr; };
        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline MediaProduceConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        // The editing mode. Default value: Accurate.
        shared_ptr<string> mode_ {};
      };

      class LiveStreamConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        };
        LiveStreamConfig() = default ;
        LiveStreamConfig(const LiveStreamConfig &) = default ;
        LiveStreamConfig(LiveStreamConfig &&) = default ;
        LiveStreamConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamConfig() = default ;
        LiveStreamConfig& operator=(const LiveStreamConfig &) = default ;
        LiveStreamConfig& operator=(LiveStreamConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->streamName_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveStreamConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveStreamConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamConfig& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      protected:
        // The name of the application to which the live stream belongs.
        shared_ptr<string> appName_ {};
        // The domain name of the live stream.
        shared_ptr<string> domainName_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
      };

      virtual bool empty() const override { return this->clips_ == nullptr
        && this->code_ == nullptr && this->completeTime_ == nullptr && this->creationTime_ == nullptr && this->jobId_ == nullptr && this->liveStreamConfig_ == nullptr
        && this->mediaId_ == nullptr && this->mediaProduceConfig_ == nullptr && this->mediaURL_ == nullptr && this->message_ == nullptr && this->modifiedTime_ == nullptr
        && this->outputMediaConfig_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr; };
      // clips Field Functions 
      bool hasClips() const { return this->clips_ != nullptr;};
      void deleteClips() { this->clips_ = nullptr;};
      inline string getClips() const { DARABONBA_PTR_GET_DEFAULT(clips_, "") };
      inline LiveEditingJob& setClips(string clips) { DARABONBA_PTR_SET_VALUE(clips_, clips) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline LiveEditingJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline LiveEditingJob& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline LiveEditingJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline LiveEditingJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // liveStreamConfig Field Functions 
      bool hasLiveStreamConfig() const { return this->liveStreamConfig_ != nullptr;};
      void deleteLiveStreamConfig() { this->liveStreamConfig_ = nullptr;};
      inline const LiveEditingJob::LiveStreamConfig & getLiveStreamConfig() const { DARABONBA_PTR_GET_CONST(liveStreamConfig_, LiveEditingJob::LiveStreamConfig) };
      inline LiveEditingJob::LiveStreamConfig getLiveStreamConfig() { DARABONBA_PTR_GET(liveStreamConfig_, LiveEditingJob::LiveStreamConfig) };
      inline LiveEditingJob& setLiveStreamConfig(const LiveEditingJob::LiveStreamConfig & liveStreamConfig) { DARABONBA_PTR_SET_VALUE(liveStreamConfig_, liveStreamConfig) };
      inline LiveEditingJob& setLiveStreamConfig(LiveEditingJob::LiveStreamConfig && liveStreamConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamConfig_, liveStreamConfig) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline LiveEditingJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // mediaProduceConfig Field Functions 
      bool hasMediaProduceConfig() const { return this->mediaProduceConfig_ != nullptr;};
      void deleteMediaProduceConfig() { this->mediaProduceConfig_ = nullptr;};
      inline const LiveEditingJob::MediaProduceConfig & getMediaProduceConfig() const { DARABONBA_PTR_GET_CONST(mediaProduceConfig_, LiveEditingJob::MediaProduceConfig) };
      inline LiveEditingJob::MediaProduceConfig getMediaProduceConfig() { DARABONBA_PTR_GET(mediaProduceConfig_, LiveEditingJob::MediaProduceConfig) };
      inline LiveEditingJob& setMediaProduceConfig(const LiveEditingJob::MediaProduceConfig & mediaProduceConfig) { DARABONBA_PTR_SET_VALUE(mediaProduceConfig_, mediaProduceConfig) };
      inline LiveEditingJob& setMediaProduceConfig(LiveEditingJob::MediaProduceConfig && mediaProduceConfig) { DARABONBA_PTR_SET_RVALUE(mediaProduceConfig_, mediaProduceConfig) };


      // mediaURL Field Functions 
      bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
      void deleteMediaURL() { this->mediaURL_ = nullptr;};
      inline string getMediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
      inline LiveEditingJob& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline LiveEditingJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline LiveEditingJob& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // outputMediaConfig Field Functions 
      bool hasOutputMediaConfig() const { return this->outputMediaConfig_ != nullptr;};
      void deleteOutputMediaConfig() { this->outputMediaConfig_ = nullptr;};
      inline const LiveEditingJob::OutputMediaConfig & getOutputMediaConfig() const { DARABONBA_PTR_GET_CONST(outputMediaConfig_, LiveEditingJob::OutputMediaConfig) };
      inline LiveEditingJob::OutputMediaConfig getOutputMediaConfig() { DARABONBA_PTR_GET(outputMediaConfig_, LiveEditingJob::OutputMediaConfig) };
      inline LiveEditingJob& setOutputMediaConfig(const LiveEditingJob::OutputMediaConfig & outputMediaConfig) { DARABONBA_PTR_SET_VALUE(outputMediaConfig_, outputMediaConfig) };
      inline LiveEditingJob& setOutputMediaConfig(LiveEditingJob::OutputMediaConfig && outputMediaConfig) { DARABONBA_PTR_SET_RVALUE(outputMediaConfig_, outputMediaConfig) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline LiveEditingJob& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LiveEditingJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline LiveEditingJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The clips.
      shared_ptr<string> clips_ {};
      // The response code. Note: Pay attention to this parameter if the job failed.
      shared_ptr<string> code_ {};
      // The time when the live editing job was completed. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the live editing job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The ID of the live editing job.
      shared_ptr<string> jobId_ {};
      // The live editing configurations.
      shared_ptr<LiveEditingJob::LiveStreamConfig> liveStreamConfig_ {};
      // The media asset ID of the output file.
      shared_ptr<string> mediaId_ {};
      // The production configurations.
      shared_ptr<LiveEditingJob::MediaProduceConfig> mediaProduceConfig_ {};
      // The URL of the output file.
      shared_ptr<string> mediaURL_ {};
      // The returned message. Note: Pay attention to this parameter if the job failed.
      shared_ptr<string> message_ {};
      // The time when the live editing job was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifiedTime_ {};
      // The storage configurations of the output file.
      shared_ptr<LiveEditingJob::OutputMediaConfig> outputMediaConfig_ {};
      // The ID of the live editing project.
      shared_ptr<string> projectId_ {};
      // The state of the live editing job. Valid values: Init, Queuing, Processing, Success, and Failed.
      shared_ptr<string> status_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->liveEditingJob_ == nullptr
        && this->requestId_ == nullptr; };
    // liveEditingJob Field Functions 
    bool hasLiveEditingJob() const { return this->liveEditingJob_ != nullptr;};
    void deleteLiveEditingJob() { this->liveEditingJob_ = nullptr;};
    inline const GetLiveEditingJobResponseBody::LiveEditingJob & getLiveEditingJob() const { DARABONBA_PTR_GET_CONST(liveEditingJob_, GetLiveEditingJobResponseBody::LiveEditingJob) };
    inline GetLiveEditingJobResponseBody::LiveEditingJob getLiveEditingJob() { DARABONBA_PTR_GET(liveEditingJob_, GetLiveEditingJobResponseBody::LiveEditingJob) };
    inline GetLiveEditingJobResponseBody& setLiveEditingJob(const GetLiveEditingJobResponseBody::LiveEditingJob & liveEditingJob) { DARABONBA_PTR_SET_VALUE(liveEditingJob_, liveEditingJob) };
    inline GetLiveEditingJobResponseBody& setLiveEditingJob(GetLiveEditingJobResponseBody::LiveEditingJob && liveEditingJob) { DARABONBA_PTR_SET_RVALUE(liveEditingJob_, liveEditingJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveEditingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the live editing job.
    shared_ptr<GetLiveEditingJobResponseBody::LiveEditingJob> liveEditingJob_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
