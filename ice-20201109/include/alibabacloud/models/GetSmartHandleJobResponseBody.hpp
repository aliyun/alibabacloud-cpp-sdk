// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTHANDLEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSmartHandleJobResponseBodyJobResult.hpp>
#include <alibabacloud/models/GetSmartHandleJobResponseBodySmartJobInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSmartHandleJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartHandleJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobResult, jobResult_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartJobInfo, smartJobInfo_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartHandleJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobResult, jobResult_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartJobInfo, smartJobInfo_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GetSmartHandleJobResponseBody() = default ;
    GetSmartHandleJobResponseBody(const GetSmartHandleJobResponseBody &) = default ;
    GetSmartHandleJobResponseBody(GetSmartHandleJobResponseBody &&) = default ;
    GetSmartHandleJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartHandleJobResponseBody() = default ;
    GetSmartHandleJobResponseBody& operator=(const GetSmartHandleJobResponseBody &) = default ;
    GetSmartHandleJobResponseBody& operator=(GetSmartHandleJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->jobId_ == nullptr && return this->jobResult_ == nullptr && return this->output_ == nullptr && return this->requestId_ == nullptr
        && return this->smartJobInfo_ == nullptr && return this->state_ == nullptr && return this->userData_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSmartHandleJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSmartHandleJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetSmartHandleJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobResult Field Functions 
    bool hasJobResult() const { return this->jobResult_ != nullptr;};
    void deleteJobResult() { this->jobResult_ = nullptr;};
    inline const GetSmartHandleJobResponseBodyJobResult & jobResult() const { DARABONBA_PTR_GET_CONST(jobResult_, GetSmartHandleJobResponseBodyJobResult) };
    inline GetSmartHandleJobResponseBodyJobResult jobResult() { DARABONBA_PTR_GET(jobResult_, GetSmartHandleJobResponseBodyJobResult) };
    inline GetSmartHandleJobResponseBody& setJobResult(const GetSmartHandleJobResponseBodyJobResult & jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };
    inline GetSmartHandleJobResponseBody& setJobResult(GetSmartHandleJobResponseBodyJobResult && jobResult) { DARABONBA_PTR_SET_RVALUE(jobResult_, jobResult) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetSmartHandleJobResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartHandleJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartJobInfo Field Functions 
    bool hasSmartJobInfo() const { return this->smartJobInfo_ != nullptr;};
    void deleteSmartJobInfo() { this->smartJobInfo_ = nullptr;};
    inline const GetSmartHandleJobResponseBodySmartJobInfo & smartJobInfo() const { DARABONBA_PTR_GET_CONST(smartJobInfo_, GetSmartHandleJobResponseBodySmartJobInfo) };
    inline GetSmartHandleJobResponseBodySmartJobInfo smartJobInfo() { DARABONBA_PTR_GET(smartJobInfo_, GetSmartHandleJobResponseBodySmartJobInfo) };
    inline GetSmartHandleJobResponseBody& setSmartJobInfo(const GetSmartHandleJobResponseBodySmartJobInfo & smartJobInfo) { DARABONBA_PTR_SET_VALUE(smartJobInfo_, smartJobInfo) };
    inline GetSmartHandleJobResponseBody& setSmartJobInfo(GetSmartHandleJobResponseBodySmartJobInfo && smartJobInfo) { DARABONBA_PTR_SET_RVALUE(smartJobInfo_, smartJobInfo) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSmartHandleJobResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetSmartHandleJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The job results.
    std::shared_ptr<GetSmartHandleJobResponseBodyJobResult> jobResult_ = nullptr;
    // The job results.
    std::shared_ptr<string> output_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the intelligent job.
    std::shared_ptr<GetSmartHandleJobResponseBodySmartJobInfo> smartJobInfo_ = nullptr;
    // The job state.
    // 
    // Valid values:
    // 
    // *   Finished
    // *   Failed
    // *   Executing
    // *   Created
    std::shared_ptr<string> state_ = nullptr;
    // The user-defined data in the JSON format.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
