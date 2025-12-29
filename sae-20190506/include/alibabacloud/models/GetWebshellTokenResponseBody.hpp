// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBSHELLTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWEBSHELLTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetWebshellTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebshellTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebshellTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetWebshellTokenResponseBody() = default ;
    GetWebshellTokenResponseBody(const GetWebshellTokenResponseBody &) = default ;
    GetWebshellTokenResponseBody(GetWebshellTokenResponseBody &&) = default ;
    GetWebshellTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebshellTokenResponseBody() = default ;
    GetWebshellTokenResponseBody& operator=(const GetWebshellTokenResponseBody &) = default ;
    GetWebshellTokenResponseBody& operator=(GetWebshellTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HttpUrl, httpUrl_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(WebSocketUrl, webSocketUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HttpUrl, httpUrl_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(WebSocketUrl, webSocketUrl_);
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
      virtual bool empty() const override { return this->httpUrl_ == nullptr
        && this->token_ == nullptr && this->webSocketUrl_ == nullptr; };
      // httpUrl Field Functions 
      bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
      void deleteHttpUrl() { this->httpUrl_ = nullptr;};
      inline string getHttpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
      inline Data& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // webSocketUrl Field Functions 
      bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
      void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
      inline string getWebSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
      inline Data& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


    protected:
      // Webshell page address
      shared_ptr<string> httpUrl_ {};
      // The information about the token.
      shared_ptr<string> token_ {};
      // The WebSocket address.
      shared_ptr<string> webSocketUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWebshellTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWebshellTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWebshellTokenResponseBody::Data) };
    inline GetWebshellTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWebshellTokenResponseBody::Data) };
    inline GetWebshellTokenResponseBody& setData(const GetWebshellTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWebshellTokenResponseBody& setData(GetWebshellTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWebshellTokenResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWebshellTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWebshellTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWebshellTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetWebshellTokenResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<GetWebshellTokenResponseBody::Data> data_ {};
    // The error code returned if the call failed. Value values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, the **ErrorCode** parameter is returned. For more information, see **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message. Value description:
    // 
    // *   If the request was successful, a success message is returned.
    // *   An error code is returned if the request failed.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The ID of the trace.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
