// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOREMAKEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOREMAKEJOBRESPONSEBODY_HPP_
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
  class GetVideoRemakeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoRemakeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoRemakeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVideoRemakeJobResponseBody() = default ;
    GetVideoRemakeJobResponseBody(const GetVideoRemakeJobResponseBody &) = default ;
    GetVideoRemakeJobResponseBody(GetVideoRemakeJobResponseBody &&) = default ;
    GetVideoRemakeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoRemakeJobResponseBody() = default ;
    GetVideoRemakeJobResponseBody& operator=(const GetVideoRemakeJobResponseBody &) = default ;
    GetVideoRemakeJobResponseBody& operator=(GetVideoRemakeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
        DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
        DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
          DARABONBA_PTR_TO_JSON(AiResult, aiResult_);
          DARABONBA_PTR_TO_JSON(Script, script_);
        };
        friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AiResult, aiResult_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
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
        virtual bool empty() const override { return this->aiResult_ == nullptr
        && this->script_ == nullptr; };
        // aiResult Field Functions 
        bool hasAiResult() const { return this->aiResult_ != nullptr;};
        void deleteAiResult() { this->aiResult_ = nullptr;};
        inline string getAiResult() const { DARABONBA_PTR_GET_DEFAULT(aiResult_, "") };
        inline JobResult& setAiResult(string aiResult) { DARABONBA_PTR_SET_VALUE(aiResult_, aiResult) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
        inline JobResult& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


      protected:
        // The download URL of the JSON file for the content understanding result.
        shared_ptr<string> aiResult_ {};
        // The download URL of the JSON file for the creative script. Use the file content as the Script parameter for SubmitVideoRenderJob.
        shared_ptr<string> script_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->jobResult_ == nullptr && this->mediaIds_ == nullptr && this->status_ == nullptr
        && this->userData_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Job& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Job& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobResult Field Functions 
      bool hasJobResult() const { return this->jobResult_ != nullptr;};
      void deleteJobResult() { this->jobResult_ = nullptr;};
      inline const Job::JobResult & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, Job::JobResult) };
      inline Job::JobResult getJobResult() { DARABONBA_PTR_GET(jobResult_, Job::JobResult) };
      inline Job& setJobResult(const Job::JobResult & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
      inline Job& setJobResult(Job::JobResult && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


      // mediaIds Field Functions 
      bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
      void deleteMediaIds() { this->mediaIds_ = nullptr;};
      inline const vector<string> & getMediaIds() const { DARABONBA_PTR_GET_CONST(mediaIds_, vector<string>) };
      inline vector<string> getMediaIds() { DARABONBA_PTR_GET(mediaIds_, vector<string>) };
      inline Job& setMediaIds(const vector<string> & mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };
      inline Job& setMediaIds(vector<string> && mediaIds) { DARABONBA_PTR_SET_RVALUE(mediaIds_, mediaIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Job& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code for the failed asynchronous task. This parameter has a value only when the task status is Failed.
      shared_ptr<string> errorCode_ {};
      // The error message for the failed asynchronous task. This parameter has a value only when the task status is Failed.
      shared_ptr<string> errorMessage_ {};
      // The unified remake task ID.
      shared_ptr<string> jobId_ {};
      // The content understanding and script outputs returned when the status is Finished. This is not the rendered video.
      shared_ptr<Job::JobResult> jobResult_ {};
      // The list of input media asset IDs.
      shared_ptr<vector<string>> mediaIds_ {};
      // The task status. Valid values: Created, Executing, Finished, and Failed. Finished indicates that content understanding and script generation are completed. If the status is Failed, check ErrorCode and ErrorMessage. If the task has been deleted, the query returns RecordNotFound.
      shared_ptr<string> status_ {};
      // The UserData JSON string submitted with the task, returned as is.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetVideoRemakeJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetVideoRemakeJobResponseBody::Job) };
    inline GetVideoRemakeJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetVideoRemakeJobResponseBody::Job) };
    inline GetVideoRemakeJobResponseBody& setJob(const GetVideoRemakeJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetVideoRemakeJobResponseBody& setJob(GetVideoRemakeJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoRemakeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unified remake task details.
    shared_ptr<GetVideoRemakeJobResponseBody::Job> job_ {};
    // The request tracking identifier.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
