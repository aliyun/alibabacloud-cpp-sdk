// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetJobLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StderrLog, stderrLog_);
      DARABONBA_PTR_TO_JSON(StderrLogSize, stderrLogSize_);
      DARABONBA_PTR_TO_JSON(StdoutLog, stdoutLog_);
      DARABONBA_PTR_TO_JSON(StdoutLogSize, stdoutLogSize_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StderrLog, stderrLog_);
      DARABONBA_PTR_FROM_JSON(StderrLogSize, stderrLogSize_);
      DARABONBA_PTR_FROM_JSON(StdoutLog, stdoutLog_);
      DARABONBA_PTR_FROM_JSON(StdoutLogSize, stdoutLogSize_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJobLogResponseBody() = default ;
    GetJobLogResponseBody(const GetJobLogResponseBody &) = default ;
    GetJobLogResponseBody(GetJobLogResponseBody &&) = default ;
    GetJobLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobLogResponseBody() = default ;
    GetJobLogResponseBody& operator=(const GetJobLogResponseBody &) = default ;
    GetJobLogResponseBody& operator=(GetJobLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->requestId_ == nullptr && return this->stderrLog_ == nullptr && return this->stderrLogSize_ == nullptr && return this->stdoutLog_ == nullptr && return this->stdoutLogSize_ == nullptr
        && return this->success_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobLogResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stderrLog Field Functions 
    bool hasStderrLog() const { return this->stderrLog_ != nullptr;};
    void deleteStderrLog() { this->stderrLog_ = nullptr;};
    inline string stderrLog() const { DARABONBA_PTR_GET_DEFAULT(stderrLog_, "") };
    inline GetJobLogResponseBody& setStderrLog(string stderrLog) { DARABONBA_PTR_SET_VALUE(stderrLog_, stderrLog) };


    // stderrLogSize Field Functions 
    bool hasStderrLogSize() const { return this->stderrLogSize_ != nullptr;};
    void deleteStderrLogSize() { this->stderrLogSize_ = nullptr;};
    inline string stderrLogSize() const { DARABONBA_PTR_GET_DEFAULT(stderrLogSize_, "") };
    inline GetJobLogResponseBody& setStderrLogSize(string stderrLogSize) { DARABONBA_PTR_SET_VALUE(stderrLogSize_, stderrLogSize) };


    // stdoutLog Field Functions 
    bool hasStdoutLog() const { return this->stdoutLog_ != nullptr;};
    void deleteStdoutLog() { this->stdoutLog_ = nullptr;};
    inline string stdoutLog() const { DARABONBA_PTR_GET_DEFAULT(stdoutLog_, "") };
    inline GetJobLogResponseBody& setStdoutLog(string stdoutLog) { DARABONBA_PTR_SET_VALUE(stdoutLog_, stdoutLog) };


    // stdoutLogSize Field Functions 
    bool hasStdoutLogSize() const { return this->stdoutLogSize_ != nullptr;};
    void deleteStdoutLogSize() { this->stdoutLogSize_ = nullptr;};
    inline string stdoutLogSize() const { DARABONBA_PTR_GET_DEFAULT(stdoutLogSize_, "") };
    inline GetJobLogResponseBody& setStdoutLogSize(string stdoutLogSize) { DARABONBA_PTR_SET_VALUE(stdoutLogSize_, stdoutLogSize) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetJobLogResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The error output log that is encoded in Base64.
    std::shared_ptr<string> stderrLog_ = nullptr;
    // The size of the error output file.
    std::shared_ptr<string> stderrLogSize_ = nullptr;
    // The standard output log that is encoded in Base64.
    std::shared_ptr<string> stdoutLog_ = nullptr;
    // The size of the standard output file.
    std::shared_ptr<string> stdoutLogSize_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
