// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEFUNCTIONINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMEFUNCTIONINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ResumeFunctionInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeFunctionInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(latency, latency_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeFunctionInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(latency, latency_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ResumeFunctionInstanceResponseBody() = default ;
    ResumeFunctionInstanceResponseBody(const ResumeFunctionInstanceResponseBody &) = default ;
    ResumeFunctionInstanceResponseBody(ResumeFunctionInstanceResponseBody &&) = default ;
    ResumeFunctionInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeFunctionInstanceResponseBody() = default ;
    ResumeFunctionInstanceResponseBody& operator=(const ResumeFunctionInstanceResponseBody &) = default ;
    ResumeFunctionInstanceResponseBody& operator=(ResumeFunctionInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResumeFunctionInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline ResumeFunctionInstanceResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline ResumeFunctionInstanceResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResumeFunctionInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumeFunctionInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ResumeFunctionInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The time consumed, in milliseconds.
    shared_ptr<int64_t> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
