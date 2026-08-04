// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCMODIFYAGLOGINEMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASYNCMODIFYAGLOGINEMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AsyncModifyAgLoginEmailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncModifyAgLoginEmailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceNo, traceNo_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncModifyAgLoginEmailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceNo, traceNo_);
    };
    AsyncModifyAgLoginEmailResponseBody() = default ;
    AsyncModifyAgLoginEmailResponseBody(const AsyncModifyAgLoginEmailResponseBody &) = default ;
    AsyncModifyAgLoginEmailResponseBody(AsyncModifyAgLoginEmailResponseBody &&) = default ;
    AsyncModifyAgLoginEmailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncModifyAgLoginEmailResponseBody() = default ;
    AsyncModifyAgLoginEmailResponseBody& operator=(const AsyncModifyAgLoginEmailResponseBody &) = default ;
    AsyncModifyAgLoginEmailResponseBody& operator=(AsyncModifyAgLoginEmailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceNo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AsyncModifyAgLoginEmailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AsyncModifyAgLoginEmailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AsyncModifyAgLoginEmailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AsyncModifyAgLoginEmailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceNo Field Functions 
    bool hasTraceNo() const { return this->traceNo_ != nullptr;};
    void deleteTraceNo() { this->traceNo_ = nullptr;};
    inline string getTraceNo() const { DARABONBA_PTR_GET_DEFAULT(traceNo_, "") };
    inline AsyncModifyAgLoginEmailResponseBody& setTraceNo(string traceNo) { DARABONBA_PTR_SET_VALUE(traceNo_, traceNo) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
