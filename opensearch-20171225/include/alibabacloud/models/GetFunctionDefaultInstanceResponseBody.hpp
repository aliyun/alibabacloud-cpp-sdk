// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONDEFAULTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONDEFAULTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceName_ == nullptr; };
      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Result& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    protected:
      // The default instance name.
      shared_ptr<string> instanceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->functionName_ == nullptr && this->httpCode_ == nullptr && this->instanceName_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionDefaultInstanceResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionDefaultInstanceResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionDefaultInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionDefaultInstanceResponseBody::Result) };
    inline GetFunctionDefaultInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetFunctionDefaultInstanceResponseBody::Result) };
    inline GetFunctionDefaultInstanceResponseBody& setResult(const GetFunctionDefaultInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionDefaultInstanceResponseBody& setResult(GetFunctionDefaultInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionDefaultInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The name of the feature.
    shared_ptr<string> functionName_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The name of the instance.
    shared_ptr<string> instanceName_ {};
    // The default runtime.
    shared_ptr<int64_t> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The result.
    shared_ptr<GetFunctionDefaultInstanceResponseBody::Result> result_ {};
    // The request status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
