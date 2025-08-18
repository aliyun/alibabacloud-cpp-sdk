// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOperationSubmitStatusResponseBodyOperationSubmitJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationSubmitStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationSubmitStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationSubmitJob, operationSubmitJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationSubmitStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationSubmitJob, operationSubmitJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOperationSubmitStatusResponseBody() = default ;
    GetOperationSubmitStatusResponseBody(const GetOperationSubmitStatusResponseBody &) = default ;
    GetOperationSubmitStatusResponseBody(GetOperationSubmitStatusResponseBody &&) = default ;
    GetOperationSubmitStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationSubmitStatusResponseBody() = default ;
    GetOperationSubmitStatusResponseBody& operator=(const GetOperationSubmitStatusResponseBody &) = default ;
    GetOperationSubmitStatusResponseBody& operator=(GetOperationSubmitStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->operationSubmitJob_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOperationSubmitStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetOperationSubmitStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOperationSubmitStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationSubmitJob Field Functions 
    bool hasOperationSubmitJob() const { return this->operationSubmitJob_ != nullptr;};
    void deleteOperationSubmitJob() { this->operationSubmitJob_ = nullptr;};
    inline const GetOperationSubmitStatusResponseBodyOperationSubmitJob & operationSubmitJob() const { DARABONBA_PTR_GET_CONST(operationSubmitJob_, GetOperationSubmitStatusResponseBodyOperationSubmitJob) };
    inline GetOperationSubmitStatusResponseBodyOperationSubmitJob operationSubmitJob() { DARABONBA_PTR_GET(operationSubmitJob_, GetOperationSubmitStatusResponseBodyOperationSubmitJob) };
    inline GetOperationSubmitStatusResponseBody& setOperationSubmitJob(const GetOperationSubmitStatusResponseBodyOperationSubmitJob & operationSubmitJob) { DARABONBA_PTR_SET_VALUE(operationSubmitJob_, operationSubmitJob) };
    inline GetOperationSubmitStatusResponseBody& setOperationSubmitJob(GetOperationSubmitStatusResponseBodyOperationSubmitJob && operationSubmitJob) { DARABONBA_PTR_SET_RVALUE(operationSubmitJob_, operationSubmitJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationSubmitStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOperationSubmitStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<GetOperationSubmitStatusResponseBodyOperationSubmitJob> operationSubmitJob_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
