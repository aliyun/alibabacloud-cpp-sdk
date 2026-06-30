// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEPROMPTEXPANSIONVOICEFIXJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEPROMPTEXPANSIONVOICEFIXJOBRESPONSEBODY_HPP_
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
  class GetYikePromptExpansionVoiceFixJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikePromptExpansionVoiceFixJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikePromptExpansionVoiceFixJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetYikePromptExpansionVoiceFixJobResponseBody() = default ;
    GetYikePromptExpansionVoiceFixJobResponseBody(const GetYikePromptExpansionVoiceFixJobResponseBody &) = default ;
    GetYikePromptExpansionVoiceFixJobResponseBody(GetYikePromptExpansionVoiceFixJobResponseBody &&) = default ;
    GetYikePromptExpansionVoiceFixJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikePromptExpansionVoiceFixJobResponseBody() = default ;
    GetYikePromptExpansionVoiceFixJobResponseBody& operator=(const GetYikePromptExpansionVoiceFixJobResponseBody &) = default ;
    GetYikePromptExpansionVoiceFixJobResponseBody& operator=(GetYikePromptExpansionVoiceFixJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobResult& obj) { 
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      };
      friend void from_json(const Darabonba::Json& j, JobResult& obj) { 
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
      virtual bool empty() const override { return this->outputUrl_ == nullptr; };
      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline JobResult& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    protected:
      // Oss Url
      shared_ptr<string> outputUrl_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->jobId_ == nullptr && this->jobParams_ == nullptr && this->jobResult_ == nullptr
        && this->jobStatus_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->userData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult> & getJobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult>) };
    inline vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult> getJobResult() { DARABONBA_PTR_GET(jobResult_, vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult>) };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setJobResult(const vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult> & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setJobResult(vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult> && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetYikePromptExpansionVoiceFixJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The end time.
    shared_ptr<string> endTime_ {};
    // The error code. This parameter is returned when the task is in the Failed state.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The task ID.
    shared_ptr<string> jobId_ {};
    // The task parameters, in JSON format. The following fields are included:
    // - model (String, required): The model name. Example: happyhorse-1.0-r2v.
    // - input (Object, required): The input data object.
    //   - prompt (String, required): The prompt content. The maximum length is 10,000 characters.
    //   - media (Array(Object), required): The list of media materials used to specify reference images and audio.
    //     - type (String, required): The input media type. Valid values: reference_image and reference_audio.
    //     - url (String, required): The URL of the input media.
    // - parameters (Object, required): The video generation parameter object.
    //   - duration (Integer, required): The video duration in seconds. The value must be a positive integer. Valid values: 5 to 15.
    //   - ratio (String, required): The aspect ratio. Valid values: 16:9, 9:16, 4:3, 3:4, and 1:1.
    //   - resolution (String, required): The video resolution. Valid values: 720P and 1080P.
    //   - specialEdition (Bool, optional): The cost-effective edition parameter. This parameter can be set to true only when the resolution is 1080P.
    //   - skipPromptEnhancer (Bool, optional): Specifies whether to skip prompt enhancement. Default value: false.
    //   - skipVoiceResync (Bool, optional): Specifies whether to skip audio repair. Default value: false.
    shared_ptr<string> jobParams_ {};
    // The task result of the node.
    shared_ptr<vector<GetYikePromptExpansionVoiceFixJobResponseBody::JobResult>> jobResult_ {};
    // The task status. Valid values:
    // 
    // - **Succeeded**: The task is processed.
    // 
    // - **Failed**: The task failed.
    // 
    // - **Running**: The task is being processed.
    shared_ptr<string> jobStatus_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    // The start time.
    shared_ptr<string> startTime_ {};
    // The custom user parameter.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
