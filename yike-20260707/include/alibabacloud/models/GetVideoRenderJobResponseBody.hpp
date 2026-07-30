// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEORENDERJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEORENDERJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetVideoRenderJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoRenderJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoRenderJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVideoRenderJobResponseBody() = default ;
    GetVideoRenderJobResponseBody(const GetVideoRenderJobResponseBody &) = default ;
    GetVideoRenderJobResponseBody(GetVideoRenderJobResponseBody &&) = default ;
    GetVideoRenderJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoRenderJobResponseBody() = default ;
    GetVideoRenderJobResponseBody& operator=(const GetVideoRenderJobResponseBody &) = default ;
    GetVideoRenderJobResponseBody& operator=(GetVideoRenderJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(EditingProjectId, editingProjectId_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      virtual bool empty() const override { return this->editingProjectId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->language_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->userData_ == nullptr; };
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


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Job& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Job& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


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
      shared_ptr<string> editingProjectId_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetVideoRenderJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetVideoRenderJobResponseBody::Job) };
    inline GetVideoRenderJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetVideoRenderJobResponseBody::Job) };
    inline GetVideoRenderJobResponseBody& setJob(const GetVideoRenderJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetVideoRenderJobResponseBody& setJob(GetVideoRenderJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoRenderJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetVideoRenderJobResponseBody::Job> job_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
