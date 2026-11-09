// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOCREATIVEGENERATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOCREATIVEGENERATIONJOBRESPONSEBODY_HPP_
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
  class GetVideoCreativeGenerationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoCreativeGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoCreativeGenerationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetVideoCreativeGenerationJobResponseBody() = default ;
    GetVideoCreativeGenerationJobResponseBody(const GetVideoCreativeGenerationJobResponseBody &) = default ;
    GetVideoCreativeGenerationJobResponseBody(GetVideoCreativeGenerationJobResponseBody &&) = default ;
    GetVideoCreativeGenerationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoCreativeGenerationJobResponseBody() = default ;
    GetVideoCreativeGenerationJobResponseBody& operator=(const GetVideoCreativeGenerationJobResponseBody &) = default ;
    GetVideoCreativeGenerationJobResponseBody& operator=(GetVideoCreativeGenerationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
        DARABONBA_PTR_TO_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(OutputLanguage, outputLanguage_);
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      };
      friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
        DARABONBA_PTR_FROM_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(OutputLanguage, outputLanguage_);
        DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
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
      virtual bool empty() const override { return this->editingProjectId_ == nullptr
        && this->mediaId_ == nullptr && this->outputLanguage_ == nullptr && this->outputUrl_ == nullptr; };
      // editingProjectId Field Functions 
      bool hasEditingProjectId() const { return this->editingProjectId_ != nullptr;};
      void deleteEditingProjectId() { this->editingProjectId_ = nullptr;};
      inline string getEditingProjectId() const { DARABONBA_PTR_GET_DEFAULT(editingProjectId_, "") };
      inline JobResult& setEditingProjectId(string editingProjectId) { DARABONBA_PTR_SET_VALUE(editingProjectId_, editingProjectId) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline JobResult& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // outputLanguage Field Functions 
      bool hasOutputLanguage() const { return this->outputLanguage_ != nullptr;};
      void deleteOutputLanguage() { this->outputLanguage_ = nullptr;};
      inline string getOutputLanguage() const { DARABONBA_PTR_GET_DEFAULT(outputLanguage_, "") };
      inline JobResult& setOutputLanguage(string outputLanguage) { DARABONBA_PTR_SET_VALUE(outputLanguage_, outputLanguage) };


      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline JobResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    protected:
      // The online editing project ID.
      shared_ptr<string> editingProjectId_ {};
      // The media asset ID of the output video.
      shared_ptr<string> mediaId_ {};
      // The output language. Valid values: CN, EN, and YUE.
      shared_ptr<string> outputLanguage_ {};
      // The signed download URL of the output video. The URL is time-limited.
      shared_ptr<string> outputUrl_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->errorCode_ == nullptr && this->finishTime_ == nullptr && this->jobId_ == nullptr && this->jobResult_ == nullptr && this->jobStatus_ == nullptr
        && this->requestId_ == nullptr && this->userData_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const vector<GetVideoCreativeGenerationJobResponseBody::JobResult> & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, vector<GetVideoCreativeGenerationJobResponseBody::JobResult>) };
    inline vector<GetVideoCreativeGenerationJobResponseBody::JobResult> getJobResult() { DARABONBA_PTR_GET(jobResult_, vector<GetVideoCreativeGenerationJobResponseBody::JobResult>) };
    inline GetVideoCreativeGenerationJobResponseBody& setJobResult(const vector<GetVideoCreativeGenerationJobResponseBody::JobResult> & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetVideoCreativeGenerationJobResponseBody& setJobResult(vector<GetVideoCreativeGenerationJobResponseBody::JobResult> && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetVideoCreativeGenerationJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The job creation time in UTC format (yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\").
    shared_ptr<string> createTime_ {};
    // The error code. This parameter is returned only when the job status is Failed.
    shared_ptr<string> errorCode_ {};
    // The job completion time in UTC format.
    shared_ptr<string> finishTime_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The task results of the node. This parameter is valid only when the job status is Succeeded. Each element represents the output for a single language.
    shared_ptr<vector<GetVideoCreativeGenerationJobResponseBody::JobResult>> jobResult_ {};
    // The job status. Valid values: Running, Succeeded, and Failed.
    shared_ptr<string> jobStatus_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The custom user data, which is returned as-is.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
