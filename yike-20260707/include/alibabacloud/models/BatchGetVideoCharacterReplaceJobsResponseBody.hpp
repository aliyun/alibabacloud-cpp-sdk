// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETVIDEOCHARACTERREPLACEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETVIDEOCHARACTERREPLACEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class BatchGetVideoCharacterReplaceJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetVideoCharacterReplaceJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetVideoCharacterReplaceJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetVideoCharacterReplaceJobsResponseBody() = default ;
    BatchGetVideoCharacterReplaceJobsResponseBody(const BatchGetVideoCharacterReplaceJobsResponseBody &) = default ;
    BatchGetVideoCharacterReplaceJobsResponseBody(BatchGetVideoCharacterReplaceJobsResponseBody &&) = default ;
    BatchGetVideoCharacterReplaceJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetVideoCharacterReplaceJobsResponseBody() = default ;
    BatchGetVideoCharacterReplaceJobsResponseBody& operator=(const BatchGetVideoCharacterReplaceJobsResponseBody &) = default ;
    BatchGetVideoCharacterReplaceJobsResponseBody& operator=(BatchGetVideoCharacterReplaceJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInputConfig, appInputConfig_);
        DARABONBA_PTR_TO_JSON(ExecutionFinishTime, executionFinishTime_);
        DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInputConfig, appInputConfig_);
        DARABONBA_PTR_FROM_JSON(ExecutionFinishTime, executionFinishTime_);
        DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
          DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
          DARABONBA_PTR_TO_JSON(VideoResult, videoResult_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
          DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
          DARABONBA_PTR_FROM_JSON(VideoResult, videoResult_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoResult& obj) { 
            DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
            DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
          };
          friend void from_json(const Darabonba::Json& j, VideoResult& obj) { 
            DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
            DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
          };
          VideoResult() = default ;
          VideoResult(const VideoResult &) = default ;
          VideoResult(VideoResult &&) = default ;
          VideoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoResult() = default ;
          VideoResult& operator=(const VideoResult &) = default ;
          VideoResult& operator=(VideoResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->outputUrl_ == nullptr; };
          // mediaId Field Functions 
          bool hasMediaId() const { return this->mediaId_ != nullptr;};
          void deleteMediaId() { this->mediaId_ = nullptr;};
          inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
          inline VideoResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


          // outputUrl Field Functions 
          bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
          void deleteOutputUrl() { this->outputUrl_ = nullptr;};
          inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
          inline VideoResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


        protected:
          // The ID of the output media asset.
          shared_ptr<string> mediaId_ {};
          // The download URL of the output media asset.
          shared_ptr<string> outputUrl_ {};
        };

        class ImageResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageResult& obj) { 
            DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
            DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
          };
          friend void from_json(const Darabonba::Json& j, ImageResult& obj) { 
            DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
            DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
          };
          ImageResult() = default ;
          ImageResult(const ImageResult &) = default ;
          ImageResult(ImageResult &&) = default ;
          ImageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageResult() = default ;
          ImageResult& operator=(const ImageResult &) = default ;
          ImageResult& operator=(ImageResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->outputUrl_ == nullptr; };
          // mediaId Field Functions 
          bool hasMediaId() const { return this->mediaId_ != nullptr;};
          void deleteMediaId() { this->mediaId_ = nullptr;};
          inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
          inline ImageResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


          // outputUrl Field Functions 
          bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
          void deleteOutputUrl() { this->outputUrl_ = nullptr;};
          inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
          inline ImageResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


        protected:
          // The ID of the output media asset.
          shared_ptr<string> mediaId_ {};
          // The download URL of the output media asset.
          shared_ptr<string> outputUrl_ {};
        };

        class AudioResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioResult& obj) { 
            DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
            DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
          };
          friend void from_json(const Darabonba::Json& j, AudioResult& obj) { 
            DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
            DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
          };
          AudioResult() = default ;
          AudioResult(const AudioResult &) = default ;
          AudioResult(AudioResult &&) = default ;
          AudioResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioResult() = default ;
          AudioResult& operator=(const AudioResult &) = default ;
          AudioResult& operator=(AudioResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->outputUrl_ == nullptr; };
          // mediaId Field Functions 
          bool hasMediaId() const { return this->mediaId_ != nullptr;};
          void deleteMediaId() { this->mediaId_ = nullptr;};
          inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
          inline AudioResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


          // outputUrl Field Functions 
          bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
          void deleteOutputUrl() { this->outputUrl_ = nullptr;};
          inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
          inline AudioResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


        protected:
          // The ID of the output media asset.
          shared_ptr<string> mediaId_ {};
          // The download URL of the output media asset.
          shared_ptr<string> outputUrl_ {};
        };

        virtual bool empty() const override { return this->audioResult_ == nullptr
        && this->imageResult_ == nullptr && this->videoResult_ == nullptr; };
        // audioResult Field Functions 
        bool hasAudioResult() const { return this->audioResult_ != nullptr;};
        void deleteAudioResult() { this->audioResult_ = nullptr;};
        inline const vector<Result::AudioResult> & getAudioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, vector<Result::AudioResult>) };
        inline vector<Result::AudioResult> getAudioResult() { DARABONBA_PTR_GET(audioResult_, vector<Result::AudioResult>) };
        inline Result& setAudioResult(const vector<Result::AudioResult> & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
        inline Result& setAudioResult(vector<Result::AudioResult> && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


        // imageResult Field Functions 
        bool hasImageResult() const { return this->imageResult_ != nullptr;};
        void deleteImageResult() { this->imageResult_ = nullptr;};
        inline const vector<Result::ImageResult> & getImageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<Result::ImageResult>) };
        inline vector<Result::ImageResult> getImageResult() { DARABONBA_PTR_GET(imageResult_, vector<Result::ImageResult>) };
        inline Result& setImageResult(const vector<Result::ImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
        inline Result& setImageResult(vector<Result::ImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


        // videoResult Field Functions 
        bool hasVideoResult() const { return this->videoResult_ != nullptr;};
        void deleteVideoResult() { this->videoResult_ = nullptr;};
        inline const vector<Result::VideoResult> & getVideoResult() const { DARABONBA_PTR_GET_CONST(videoResult_, vector<Result::VideoResult>) };
        inline vector<Result::VideoResult> getVideoResult() { DARABONBA_PTR_GET(videoResult_, vector<Result::VideoResult>) };
        inline Result& setVideoResult(const vector<Result::VideoResult> & videoResult) { DARABONBA_PTR_SET_VALUE(videoResult_, videoResult) };
        inline Result& setVideoResult(vector<Result::VideoResult> && videoResult) { DARABONBA_PTR_SET_RVALUE(videoResult_, videoResult) };


      protected:
        // The list of output audio files.
        shared_ptr<vector<Result::AudioResult>> audioResult_ {};
        // The list of output images.
        shared_ptr<vector<Result::ImageResult>> imageResult_ {};
        // The list of output videos.
        shared_ptr<vector<Result::VideoResult>> videoResult_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInputConfig_ == nullptr && this->executionFinishTime_ == nullptr && this->executionStartTime_ == nullptr && this->folderId_ == nullptr && this->jobId_ == nullptr
        && this->projectId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline JobList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appInputConfig Field Functions 
      bool hasAppInputConfig() const { return this->appInputConfig_ != nullptr;};
      void deleteAppInputConfig() { this->appInputConfig_ = nullptr;};
      inline string getAppInputConfig() const { DARABONBA_PTR_GET_DEFAULT(appInputConfig_, "") };
      inline JobList& setAppInputConfig(string appInputConfig) { DARABONBA_PTR_SET_VALUE(appInputConfig_, appInputConfig) };


      // executionFinishTime Field Functions 
      bool hasExecutionFinishTime() const { return this->executionFinishTime_ != nullptr;};
      void deleteExecutionFinishTime() { this->executionFinishTime_ = nullptr;};
      inline string getExecutionFinishTime() const { DARABONBA_PTR_GET_DEFAULT(executionFinishTime_, "") };
      inline JobList& setExecutionFinishTime(string executionFinishTime) { DARABONBA_PTR_SET_VALUE(executionFinishTime_, executionFinishTime) };


      // executionStartTime Field Functions 
      bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
      void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
      inline string getExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
      inline JobList& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline JobList& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline JobList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const JobList::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, JobList::Result) };
      inline JobList::Result getResult() { DARABONBA_PTR_GET(result_, JobList::Result) };
      inline JobList& setResult(const JobList::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline JobList& setResult(JobList::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the video character replacement application. Make sure to use a configured application.
      shared_ptr<string> appId_ {};
      // The application input parameters specified when the job was submitted. The value is a JSON serialized string. This corresponds to the AppParams parameter in the submit operation.
      shared_ptr<string> appInputConfig_ {};
      // The time when the job finished execution. The time is in the ISO 8601 format with a time zone.
      shared_ptr<string> executionFinishTime_ {};
      // The time when the job started execution. The time is in the ISO 8601 format with a time zone.
      shared_ptr<string> executionStartTime_ {};
      // The folder ID.
      shared_ptr<string> folderId_ {};
      // The job ID, which is returned by the SubmitVideoCharacterReplaceJob operation.
      shared_ptr<string> jobId_ {};
      // The project ID.
      shared_ptr<string> projectId_ {};
      // The output results of the job, categorized by image, video, and audio.
      shared_ptr<JobList::Result> result_ {};
      // The job status. Valid values:
      // - Created: The job is created.
      // - Queuing: The job is queuing.
      // - Executing: The job is being executed.
      // - Finished: The job is finished.
      // - Failed: The job failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->requestId_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList> & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList>) };
    inline vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList> getJobList() { DARABONBA_PTR_GET(jobList_, vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList>) };
    inline BatchGetVideoCharacterReplaceJobsResponseBody& setJobList(const vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline BatchGetVideoCharacterReplaceJobsResponseBody& setJobList(vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetVideoCharacterReplaceJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of job query results.
    shared_ptr<vector<BatchGetVideoCharacterReplaceJobsResponseBody::JobList>> jobList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
