// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONDEFAULTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONDEFAULTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionDefaultInstanceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionDefaultInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionDefaultInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionDefaultInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFunctionDefaultInstanceResponseBody() = default ;
    GetFunctionDefaultInstanceResponseBody(const GetFunctionDefaultInstanceResponseBody &) = default ;
    GetFunctionDefaultInstanceResponseBody(GetFunctionDefaultInstanceResponseBody &&) = default ;
    GetFunctionDefaultInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionDefaultInstanceResponseBody() = default ;
    GetFunctionDefaultInstanceResponseBody& operator=(const GetFunctionDefaultInstanceResponseBody &) = default ;
    GetFunctionDefaultInstanceResponseBody& operator=(GetFunctionDefaultInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->functionName_ == nullptr && return this->httpCode_ == nullptr && return this->instanceName_ == nullptr && return this->latency_ == nullptr && return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionDefaultInstanceResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t latency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionDefaultInstanceResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionDefaultInstanceResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionDefaultInstanceResponseBodyResult) };
    inline GetFunctionDefaultInstanceResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetFunctionDefaultInstanceResponseBodyResult) };
    inline GetFunctionDefaultInstanceResponseBody& setResult(const GetFunctionDefaultInstanceResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionDefaultInstanceResponseBody& setResult(GetFunctionDefaultInstanceResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> functionName_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int64_t> httpCode_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The default running time.
    std::shared_ptr<int64_t> latency_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the request.
    std::shared_ptr<GetFunctionDefaultInstanceResponseBodyResult> result_ = nullptr;
    // The status of the request.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
