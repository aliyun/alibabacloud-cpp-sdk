// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMCHATMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STREAMCHATMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class StreamChatMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamChatMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StreamChatMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StreamChatMessageResponseBody() = default ;
    StreamChatMessageResponseBody(const StreamChatMessageResponseBody &) = default ;
    StreamChatMessageResponseBody(StreamChatMessageResponseBody &&) = default ;
    StreamChatMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamChatMessageResponseBody() = default ;
    StreamChatMessageResponseBody& operator=(const StreamChatMessageResponseBody &) = default ;
    StreamChatMessageResponseBody& operator=(StreamChatMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StreamChatMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline StreamChatMessageResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline StreamChatMessageResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StreamChatMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StreamChatMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The SSE event stream payload. On success, the response is in text/event-stream raw frames and must be consumed frame by frame in a streaming manner.
    Darabonba::Json data_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
