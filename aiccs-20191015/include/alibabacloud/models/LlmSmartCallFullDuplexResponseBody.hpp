// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLFULLDUPLEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLFULLDUPLEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallFullDuplexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallFullDuplexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallFullDuplexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LlmSmartCallFullDuplexResponseBody() = default ;
    LlmSmartCallFullDuplexResponseBody(const LlmSmartCallFullDuplexResponseBody &) = default ;
    LlmSmartCallFullDuplexResponseBody(LlmSmartCallFullDuplexResponseBody &&) = default ;
    LlmSmartCallFullDuplexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallFullDuplexResponseBody() = default ;
    LlmSmartCallFullDuplexResponseBody& operator=(const LlmSmartCallFullDuplexResponseBody &) = default ;
    LlmSmartCallFullDuplexResponseBody& operator=(LlmSmartCallFullDuplexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline LlmSmartCallFullDuplexResponseBody& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline LlmSmartCallFullDuplexResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LlmSmartCallFullDuplexResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LlmSmartCallFullDuplexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The call record ID that identifies a call record.
    // 
    // > When you call the LlmSmartCall operation to initiate an LLM-based outbound call, this call record ID (CallId) is returned.
    shared_ptr<string> callId_ {};
    // The error code.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
