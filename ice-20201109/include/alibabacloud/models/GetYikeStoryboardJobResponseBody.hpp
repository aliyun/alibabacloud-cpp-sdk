// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKESTORYBOARDJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKESTORYBOARDJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetYikeStoryboardJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeStoryboardJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeStoryboardJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeStoryboardJobResponseBody() = default ;
    GetYikeStoryboardJobResponseBody(const GetYikeStoryboardJobResponseBody &) = default ;
    GetYikeStoryboardJobResponseBody(GetYikeStoryboardJobResponseBody &&) = default ;
    GetYikeStoryboardJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeStoryboardJobResponseBody() = default ;
    GetYikeStoryboardJobResponseBody& operator=(const GetYikeStoryboardJobResponseBody &) = default ;
    GetYikeStoryboardJobResponseBody& operator=(GetYikeStoryboardJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
        DARABONBA_PTR_TO_JSON(ExceptionStoryboardIds, exceptionStoryboardIds_);
        DARABONBA_PTR_TO_JSON(FailureShotList, failureShotList_);
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_TO_JSON(SuccessStoryboardList, successStoryboardList_);
      };
      friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceptionStoryboardIds, exceptionStoryboardIds_);
        DARABONBA_PTR_FROM_JSON(FailureShotList, failureShotList_);
        DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_FROM_JSON(SuccessStoryboardList, successStoryboardList_);
      };
      JobResult() = default ;
      JobResult(const JobResult &) = default ;
      JobResult(JobResult &&) = default ;
      JobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobResult() = default ;
      JobResult& operator=(const JobResult &) = default ;
      JobResult& operator=(JobResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exceptionStoryboardIds_ == nullptr
        && this->failureShotList_ == nullptr && this->outputUrl_ == nullptr && this->successStoryboardList_ == nullptr; };
      // exceptionStoryboardIds Field Functions 
      bool hasExceptionStoryboardIds() const { return this->exceptionStoryboardIds_ != nullptr;};
      void deleteExceptionStoryboardIds() { this->exceptionStoryboardIds_ = nullptr;};
      inline string getExceptionStoryboardIds() const { DARABONBA_PTR_GET_DEFAULT(exceptionStoryboardIds_, "") };
      inline JobResult& setExceptionStoryboardIds(string exceptionStoryboardIds) { DARABONBA_PTR_SET_VALUE(exceptionStoryboardIds_, exceptionStoryboardIds) };


      // failureShotList Field Functions 
      bool hasFailureShotList() const { return this->failureShotList_ != nullptr;};
      void deleteFailureShotList() { this->failureShotList_ = nullptr;};
      inline string getFailureShotList() const { DARABONBA_PTR_GET_DEFAULT(failureShotList_, "") };
      inline JobResult& setFailureShotList(string failureShotList) { DARABONBA_PTR_SET_VALUE(failureShotList_, failureShotList) };


      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline JobResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


      // successStoryboardList Field Functions 
      bool hasSuccessStoryboardList() const { return this->successStoryboardList_ != nullptr;};
      void deleteSuccessStoryboardList() { this->successStoryboardList_ = nullptr;};
      inline string getSuccessStoryboardList() const { DARABONBA_PTR_GET_DEFAULT(successStoryboardList_, "") };
      inline JobResult& setSuccessStoryboardList(string successStoryboardList) { DARABONBA_PTR_SET_VALUE(successStoryboardList_, successStoryboardList) };


    protected:
      shared_ptr<string> exceptionStoryboardIds_ {};
      shared_ptr<string> failureShotList_ {};
      shared_ptr<string> outputUrl_ {};
      shared_ptr<string> successStoryboardList_ {};
    };

    class JobParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobParams& obj) { 
        DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
        DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
        DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
        DARABONBA_PTR_TO_JSON(NarrationVoiceId, narrationVoiceId_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(ShotPromptMode, shotPromptMode_);
        DARABONBA_PTR_TO_JSON(ShotSplitMode, shotSplitMode_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StyleId, styleId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(VideoModel, videoModel_);
      };
      friend void from_json(const Darabonba::Json& j, JobParams& obj) { 
        DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
        DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
        DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
        DARABONBA_PTR_FROM_JSON(NarrationVoiceId, narrationVoiceId_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(ShotPromptMode, shotPromptMode_);
        DARABONBA_PTR_FROM_JSON(ShotSplitMode, shotSplitMode_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StyleId, styleId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(VideoModel, videoModel_);
      };
      JobParams() = default ;
      JobParams(const JobParams &) = default ;
      JobParams(JobParams &&) = default ;
      JobParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobParams() = default ;
      JobParams& operator=(const JobParams &) = default ;
      JobParams& operator=(JobParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->fileURL_ == nullptr && this->modelParams_ == nullptr && this->narrationVoiceId_ == nullptr && this->resolution_ == nullptr && this->shotPromptMode_ == nullptr
        && this->shotSplitMode_ == nullptr && this->sourceType_ == nullptr && this->styleId_ == nullptr && this->title_ == nullptr && this->videoModel_ == nullptr; };
      // aspectRatio Field Functions 
      bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
      void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
      inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
      inline JobParams& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


      // fileURL Field Functions 
      bool hasFileURL() const { return this->fileURL_ != nullptr;};
      void deleteFileURL() { this->fileURL_ = nullptr;};
      inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
      inline JobParams& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


      // modelParams Field Functions 
      bool hasModelParams() const { return this->modelParams_ != nullptr;};
      void deleteModelParams() { this->modelParams_ = nullptr;};
      inline string getModelParams() const { DARABONBA_PTR_GET_DEFAULT(modelParams_, "") };
      inline JobParams& setModelParams(string modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };


      // narrationVoiceId Field Functions 
      bool hasNarrationVoiceId() const { return this->narrationVoiceId_ != nullptr;};
      void deleteNarrationVoiceId() { this->narrationVoiceId_ = nullptr;};
      inline string getNarrationVoiceId() const { DARABONBA_PTR_GET_DEFAULT(narrationVoiceId_, "") };
      inline JobParams& setNarrationVoiceId(string narrationVoiceId) { DARABONBA_PTR_SET_VALUE(narrationVoiceId_, narrationVoiceId) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline JobParams& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // shotPromptMode Field Functions 
      bool hasShotPromptMode() const { return this->shotPromptMode_ != nullptr;};
      void deleteShotPromptMode() { this->shotPromptMode_ = nullptr;};
      inline string getShotPromptMode() const { DARABONBA_PTR_GET_DEFAULT(shotPromptMode_, "") };
      inline JobParams& setShotPromptMode(string shotPromptMode) { DARABONBA_PTR_SET_VALUE(shotPromptMode_, shotPromptMode) };


      // shotSplitMode Field Functions 
      bool hasShotSplitMode() const { return this->shotSplitMode_ != nullptr;};
      void deleteShotSplitMode() { this->shotSplitMode_ = nullptr;};
      inline string getShotSplitMode() const { DARABONBA_PTR_GET_DEFAULT(shotSplitMode_, "") };
      inline JobParams& setShotSplitMode(string shotSplitMode) { DARABONBA_PTR_SET_VALUE(shotSplitMode_, shotSplitMode) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline JobParams& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // styleId Field Functions 
      bool hasStyleId() const { return this->styleId_ != nullptr;};
      void deleteStyleId() { this->styleId_ = nullptr;};
      inline string getStyleId() const { DARABONBA_PTR_GET_DEFAULT(styleId_, "") };
      inline JobParams& setStyleId(string styleId) { DARABONBA_PTR_SET_VALUE(styleId_, styleId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline JobParams& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // videoModel Field Functions 
      bool hasVideoModel() const { return this->videoModel_ != nullptr;};
      void deleteVideoModel() { this->videoModel_ = nullptr;};
      inline string getVideoModel() const { DARABONBA_PTR_GET_DEFAULT(videoModel_, "") };
      inline JobParams& setVideoModel(string videoModel) { DARABONBA_PTR_SET_VALUE(videoModel_, videoModel) };


    protected:
      shared_ptr<string> aspectRatio_ {};
      shared_ptr<string> fileURL_ {};
      shared_ptr<string> modelParams_ {};
      shared_ptr<string> narrationVoiceId_ {};
      shared_ptr<string> resolution_ {};
      shared_ptr<string> shotPromptMode_ {};
      shared_ptr<string> shotSplitMode_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> styleId_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> videoModel_ {};
    };

    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobParams_ == nullptr && this->jobResult_ == nullptr && this->jobStatus_ == nullptr && this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetYikeStoryboardJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline const GetYikeStoryboardJobResponseBody::JobParams & getJobParams() const { DARABONBA_PTR_GET_CONST(jobParams_, GetYikeStoryboardJobResponseBody::JobParams) };
    inline GetYikeStoryboardJobResponseBody::JobParams getJobParams() { DARABONBA_PTR_GET(jobParams_, GetYikeStoryboardJobResponseBody::JobParams) };
    inline GetYikeStoryboardJobResponseBody& setJobParams(const GetYikeStoryboardJobResponseBody::JobParams & jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };
    inline GetYikeStoryboardJobResponseBody& setJobParams(GetYikeStoryboardJobResponseBody::JobParams && jobParams) { DARABONBA_PTR_SET_RVALUE(jobParams_, jobParams) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const GetYikeStoryboardJobResponseBody::JobResult & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, GetYikeStoryboardJobResponseBody::JobResult) };
    inline GetYikeStoryboardJobResponseBody::JobResult getJobResult() { DARABONBA_PTR_GET(jobResult_, GetYikeStoryboardJobResponseBody::JobResult) };
    inline GetYikeStoryboardJobResponseBody& setJobResult(const GetYikeStoryboardJobResponseBody::JobResult & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetYikeStoryboardJobResponseBody& setJobResult(GetYikeStoryboardJobResponseBody::JobResult && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetYikeStoryboardJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeStoryboardJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> jobId_ {};
    shared_ptr<GetYikeStoryboardJobResponseBody::JobParams> jobParams_ {};
    shared_ptr<GetYikeStoryboardJobResponseBody::JobResult> jobResult_ {};
    shared_ptr<string> jobStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
