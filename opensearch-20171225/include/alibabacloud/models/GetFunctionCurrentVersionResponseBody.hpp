// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionCurrentVersionResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionCurrentVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCurrentVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCurrentVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFunctionCurrentVersionResponseBody() = default ;
    GetFunctionCurrentVersionResponseBody(const GetFunctionCurrentVersionResponseBody &) = default ;
    GetFunctionCurrentVersionResponseBody(GetFunctionCurrentVersionResponseBody &&) = default ;
    GetFunctionCurrentVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCurrentVersionResponseBody() = default ;
    GetFunctionCurrentVersionResponseBody& operator=(const GetFunctionCurrentVersionResponseBody &) = default ;
    GetFunctionCurrentVersionResponseBody& operator=(GetFunctionCurrentVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpCode_ == nullptr && return this->latency_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->result_ == nullptr
        && return this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionCurrentVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionCurrentVersionResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t latency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionCurrentVersionResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionCurrentVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionCurrentVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionCurrentVersionResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionCurrentVersionResponseBodyResult) };
    inline GetFunctionCurrentVersionResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetFunctionCurrentVersionResponseBodyResult) };
    inline GetFunctionCurrentVersionResponseBody& setResult(const GetFunctionCurrentVersionResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionCurrentVersionResponseBody& setResult(GetFunctionCurrentVersionResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionCurrentVersionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int64_t> httpCode_ = nullptr;
    // The time consumed for the request, in milliseconds.
    std::shared_ptr<int64_t> latency_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the request.
    std::shared_ptr<GetFunctionCurrentVersionResponseBodyResult> result_ = nullptr;
    // The status of the request.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
