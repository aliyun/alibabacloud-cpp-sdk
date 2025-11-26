// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNJOBSASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class AssignJobsAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignJobsAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AssignJobsAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AssignJobsAsyncResponseBody() = default ;
    AssignJobsAsyncResponseBody(const AssignJobsAsyncResponseBody &) = default ;
    AssignJobsAsyncResponseBody(AssignJobsAsyncResponseBody &&) = default ;
    AssignJobsAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignJobsAsyncResponseBody() = default ;
    AssignJobsAsyncResponseBody& operator=(const AssignJobsAsyncResponseBody &) = default ;
    AssignJobsAsyncResponseBody& operator=(AssignJobsAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // asyncTaskId Field Functions 
    bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
    void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
    inline string asyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
    inline AssignJobsAsyncResponseBody& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AssignJobsAsyncResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AssignJobsAsyncResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AssignJobsAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignJobsAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AssignJobsAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> asyncTaskId_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
