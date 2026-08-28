// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEAIAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVOKEAIAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InvokeAIAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAIAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAIAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InvokeAIAgentResponseBody() = default ;
    InvokeAIAgentResponseBody(const InvokeAIAgentResponseBody &) = default ;
    InvokeAIAgentResponseBody(InvokeAIAgentResponseBody &&) = default ;
    InvokeAIAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAIAgentResponseBody() = default ;
    InvokeAIAgentResponseBody& operator=(const InvokeAIAgentResponseBody &) = default ;
    InvokeAIAgentResponseBody& operator=(InvokeAIAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(body, body_);
        DARABONBA_PTR_TO_JSON(headers, headers_);
        DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(body, body_);
        DARABONBA_PTR_FROM_JSON(headers, headers_);
        DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->body_ == nullptr
        && this->headers_ == nullptr && this->httpCode_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Data& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
      inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
      inline Data& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline Data& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // httpCode Field Functions 
      bool hasHttpCode() const { return this->httpCode_ != nullptr;};
      void deleteHttpCode() { this->httpCode_ = nullptr;};
      inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
      inline Data& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    protected:
      shared_ptr<string> body_ {};
      shared_ptr<map<string, string>> headers_ {};
      shared_ptr<int32_t> httpCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InvokeAIAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InvokeAIAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InvokeAIAgentResponseBody::Data) };
    inline InvokeAIAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InvokeAIAgentResponseBody::Data) };
    inline InvokeAIAgentResponseBody& setData(const InvokeAIAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InvokeAIAgentResponseBody& setData(InvokeAIAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InvokeAIAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvokeAIAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<InvokeAIAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
