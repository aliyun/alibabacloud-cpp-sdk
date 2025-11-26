// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSIGNJOBSASYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSIGNJOBSASYNCRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAssignJobsAsyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssignJobsAsyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobsId, jobsId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssignJobsAsyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobsId, jobsId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    GetAssignJobsAsyncResultResponseBody() = default ;
    GetAssignJobsAsyncResultResponseBody(const GetAssignJobsAsyncResultResponseBody &) = default ;
    GetAssignJobsAsyncResultResponseBody(GetAssignJobsAsyncResultResponseBody &&) = default ;
    GetAssignJobsAsyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssignJobsAsyncResultResponseBody() = default ;
    GetAssignJobsAsyncResultResponseBody& operator=(const GetAssignJobsAsyncResultResponseBody &) = default ;
    GetAssignJobsAsyncResultResponseBody& operator=(GetAssignJobsAsyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobsId_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->timeout_ == nullptr && return this->valid_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAssignJobsAsyncResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAssignJobsAsyncResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline GetAssignJobsAsyncResultResponseBody& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobsId Field Functions 
    bool hasJobsId() const { return this->jobsId_ != nullptr;};
    void deleteJobsId() { this->jobsId_ = nullptr;};
    inline const vector<string> & jobsId() const { DARABONBA_PTR_GET_CONST(jobsId_, vector<string>) };
    inline vector<string> jobsId() { DARABONBA_PTR_GET(jobsId_, vector<string>) };
    inline GetAssignJobsAsyncResultResponseBody& setJobsId(const vector<string> & jobsId) { DARABONBA_PTR_SET_VALUE(jobsId_, jobsId) };
    inline GetAssignJobsAsyncResultResponseBody& setJobsId(vector<string> && jobsId) { DARABONBA_PTR_SET_RVALUE(jobsId_, jobsId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAssignJobsAsyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssignJobsAsyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAssignJobsAsyncResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline bool timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, false) };
    inline GetAssignJobsAsyncResultResponseBody& setTimeout(bool timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool valid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline GetAssignJobsAsyncResultResponseBody& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<vector<string>> jobsId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<bool> timeout_ = nullptr;
    std::shared_ptr<bool> valid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
