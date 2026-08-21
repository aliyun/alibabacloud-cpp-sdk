// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendChatMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SendChatMessageResponseBody() = default ;
    SendChatMessageResponseBody(const SendChatMessageResponseBody &) = default ;
    SendChatMessageResponseBody(SendChatMessageResponseBody &&) = default ;
    SendChatMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageResponseBody() = default ;
    SendChatMessageResponseBody& operator=(const SendChatMessageResponseBody &) = default ;
    SendChatMessageResponseBody& operator=(SendChatMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendChatMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendChatMessageResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline SendChatMessageResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline SendChatMessageResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendChatMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendChatMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SendChatMessageResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The streaming response content.
    shared_ptr<string> content_ {};
    // The SSE event stream payload. On success, the response is a text/event-stream raw frame that must be consumed frame by frame in streaming mode.
    Darabonba::Json data_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The event type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
