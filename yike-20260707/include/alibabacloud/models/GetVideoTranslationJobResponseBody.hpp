// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOTRANSLATIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOTRANSLATIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetVideoTranslationJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoTranslationJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoTranslationJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVideoTranslationJobResponseBody() = default ;
    GetVideoTranslationJobResponseBody(const GetVideoTranslationJobResponseBody &) = default ;
    GetVideoTranslationJobResponseBody(GetVideoTranslationJobResponseBody &&) = default ;
    GetVideoTranslationJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoTranslationJobResponseBody() = default ;
    GetVideoTranslationJobResponseBody& operator=(const GetVideoTranslationJobResponseBody &) = default ;
    GetVideoTranslationJobResponseBody& operator=(GetVideoTranslationJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobParameters, jobParameters_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobParameters, jobParameters_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->editingProjectId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr
        && this->jobParameters_ == nullptr && this->jobType_ == nullptr && this->output_ == nullptr && this->status_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Job& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // editingProjectId Field Functions 
      bool hasEditingProjectId() const { return this->editingProjectId_ != nullptr;};
      void deleteEditingProjectId() { this->editingProjectId_ = nullptr;};
      inline string getEditingProjectId() const { DARABONBA_PTR_GET_DEFAULT(editingProjectId_, "") };
      inline Job& setEditingProjectId(string editingProjectId) { DARABONBA_PTR_SET_VALUE(editingProjectId_, editingProjectId) };


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


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
      inline Job& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobParameters Field Functions 
      bool hasJobParameters() const { return this->jobParameters_ != nullptr;};
      void deleteJobParameters() { this->jobParameters_ = nullptr;};
      inline string getJobParameters() const { DARABONBA_PTR_GET_DEFAULT(jobParameters_, "") };
      inline Job& setJobParameters(string jobParameters) { DARABONBA_PTR_SET_VALUE(jobParameters_, jobParameters) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline Job& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Job& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Job& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<double> duration_ {};
      shared_ptr<string> editingProjectId_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> input_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> jobParameters_ {};
      shared_ptr<string> jobType_ {};
      shared_ptr<string> output_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetVideoTranslationJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetVideoTranslationJobResponseBody::Job) };
    inline GetVideoTranslationJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetVideoTranslationJobResponseBody::Job) };
    inline GetVideoTranslationJobResponseBody& setJob(const GetVideoTranslationJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetVideoTranslationJobResponseBody& setJob(GetVideoTranslationJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoTranslationJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetVideoTranslationJobResponseBody::Job> job_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
