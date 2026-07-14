// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACOMPREHENSIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACOMPREHENSIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetMediaComprehensionJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaComprehensionJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaComprehensionJob, mediaComprehensionJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaComprehensionJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaComprehensionJob, mediaComprehensionJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaComprehensionJobResponseBody() = default ;
    GetMediaComprehensionJobResponseBody(const GetMediaComprehensionJobResponseBody &) = default ;
    GetMediaComprehensionJobResponseBody(GetMediaComprehensionJobResponseBody &&) = default ;
    GetMediaComprehensionJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaComprehensionJobResponseBody() = default ;
    GetMediaComprehensionJobResponseBody& operator=(const GetMediaComprehensionJobResponseBody &) = default ;
    GetMediaComprehensionJobResponseBody& operator=(GetMediaComprehensionJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaComprehensionJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaComprehensionJob& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, MediaComprehensionJob& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      MediaComprehensionJob() = default ;
      MediaComprehensionJob(const MediaComprehensionJob &) = default ;
      MediaComprehensionJob(MediaComprehensionJob &&) = default ;
      MediaComprehensionJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaComprehensionJob() = default ;
      MediaComprehensionJob& operator=(const MediaComprehensionJob &) = default ;
      MediaComprehensionJob& operator=(MediaComprehensionJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->mediaId_ == nullptr && this->result_ == nullptr && this->state_ == nullptr
        && this->userData_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline MediaComprehensionJob& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline MediaComprehensionJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaComprehensionJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaComprehensionJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline MediaComprehensionJob& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MediaComprehensionJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaComprehensionJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<string> mediaId_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->mediaComprehensionJob_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaComprehensionJob Field Functions 
    bool hasMediaComprehensionJob() const { return this->mediaComprehensionJob_ != nullptr;};
    void deleteMediaComprehensionJob() { this->mediaComprehensionJob_ = nullptr;};
    inline const GetMediaComprehensionJobResponseBody::MediaComprehensionJob & getMediaComprehensionJob() const { DARABONBA_PTR_GET_CONST(mediaComprehensionJob_, GetMediaComprehensionJobResponseBody::MediaComprehensionJob) };
    inline GetMediaComprehensionJobResponseBody::MediaComprehensionJob getMediaComprehensionJob() { DARABONBA_PTR_GET(mediaComprehensionJob_, GetMediaComprehensionJobResponseBody::MediaComprehensionJob) };
    inline GetMediaComprehensionJobResponseBody& setMediaComprehensionJob(const GetMediaComprehensionJobResponseBody::MediaComprehensionJob & mediaComprehensionJob) { DARABONBA_PTR_SET_VALUE(mediaComprehensionJob_, mediaComprehensionJob) };
    inline GetMediaComprehensionJobResponseBody& setMediaComprehensionJob(GetMediaComprehensionJobResponseBody::MediaComprehensionJob && mediaComprehensionJob) { DARABONBA_PTR_SET_RVALUE(mediaComprehensionJob_, mediaComprehensionJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaComprehensionJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetMediaComprehensionJobResponseBody::MediaComprehensionJob> mediaComprehensionJob_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
