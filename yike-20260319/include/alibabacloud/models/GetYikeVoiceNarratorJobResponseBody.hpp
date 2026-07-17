// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEVOICENARRATORJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEVOICENARRATORJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeVoiceNarratorJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeVoiceNarratorJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeVoiceNarratorJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetYikeVoiceNarratorJobResponseBody() = default ;
    GetYikeVoiceNarratorJobResponseBody(const GetYikeVoiceNarratorJobResponseBody &) = default ;
    GetYikeVoiceNarratorJobResponseBody(GetYikeVoiceNarratorJobResponseBody &&) = default ;
    GetYikeVoiceNarratorJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeVoiceNarratorJobResponseBody() = default ;
    GetYikeVoiceNarratorJobResponseBody& operator=(const GetYikeVoiceNarratorJobResponseBody &) = default ;
    GetYikeVoiceNarratorJobResponseBody& operator=(GetYikeVoiceNarratorJobResponseBody &&) = default ;
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
      // The asset ID.
      shared_ptr<string> mediaId_ {};
      // The output language.
      shared_ptr<string> outputLanguage_ {};
      // The download URL.
      shared_ptr<string> outputUrl_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->jobId_ == nullptr && this->jobParams_ == nullptr && this->jobResult_ == nullptr && this->jobStatus_ == nullptr && this->requestId_ == nullptr
        && this->userData_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const vector<GetYikeVoiceNarratorJobResponseBody::JobResult> & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, vector<GetYikeVoiceNarratorJobResponseBody::JobResult>) };
    inline vector<GetYikeVoiceNarratorJobResponseBody::JobResult> getJobResult() { DARABONBA_PTR_GET(jobResult_, vector<GetYikeVoiceNarratorJobResponseBody::JobResult>) };
    inline GetYikeVoiceNarratorJobResponseBody& setJobResult(const vector<GetYikeVoiceNarratorJobResponseBody::JobResult> & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetYikeVoiceNarratorJobResponseBody& setJobResult(vector<GetYikeVoiceNarratorJobResponseBody::JobResult> && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetYikeVoiceNarratorJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The error code. This parameter is returned only when JobStatus is `Failed`.
    shared_ptr<string> errorCode_ {};
    // The task ID.
    shared_ptr<string> jobId_ {};
    // The input parameters of the task, in JSON string format.
    shared_ptr<string> jobParams_ {};
    // The task results. This parameter is valid only when JobStatus is `Succeeded`.
    shared_ptr<vector<GetYikeVoiceNarratorJobResponseBody::JobResult>> jobResult_ {};
    // The task status. Valid values:
    // 
    // - Running
    // - Succeeded
    // - Failed
    shared_ptr<string> jobStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The custom user data passed in when the task was created. The value is returned as-is.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
