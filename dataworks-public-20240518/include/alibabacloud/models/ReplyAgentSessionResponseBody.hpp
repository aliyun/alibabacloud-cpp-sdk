// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLYAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLYAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ReplyAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplyAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplyAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReplyAgentSessionResponseBody() = default ;
    ReplyAgentSessionResponseBody(const ReplyAgentSessionResponseBody &) = default ;
    ReplyAgentSessionResponseBody(ReplyAgentSessionResponseBody &&) = default ;
    ReplyAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplyAgentSessionResponseBody() = default ;
    ReplyAgentSessionResponseBody& operator=(const ReplyAgentSessionResponseBody &) = default ;
    ReplyAgentSessionResponseBody& operator=(ReplyAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JsonRpcResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JsonRpcResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, JsonRpcResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      JsonRpcResponse() = default ;
      JsonRpcResponse(const JsonRpcResponse &) = default ;
      JsonRpcResponse(JsonRpcResponse &&) = default ;
      JsonRpcResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JsonRpcResponse() = default ;
      JsonRpcResponse& operator=(const JsonRpcResponse &) = default ;
      JsonRpcResponse& operator=(JsonRpcResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Accepted, accepted_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Accepted, accepted_);
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
        virtual bool empty() const override { return this->accepted_ == nullptr; };
        // accepted Field Functions 
        bool hasAccepted() const { return this->accepted_ != nullptr;};
        void deleteAccepted() { this->accepted_ = nullptr;};
        inline bool getAccepted() const { DARABONBA_PTR_GET_DEFAULT(accepted_, false) };
        inline Result& setAccepted(bool accepted) { DARABONBA_PTR_SET_VALUE(accepted_, accepted) };


      protected:
        // Indicates whether the daemon accepted the reply. A value of true indicates that the daemon accepted the reply. A value of false indicates that the reply was not accepted. Possible reasons include an unknown request, an already processed request, an expired request, or a nonexistent session. You cannot determine the specific reason from this value.
        shared_ptr<bool> accepted_ {};
      };

      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_ANY_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_ANY_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Error& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline Error& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline Error& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Error& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The JSON-RPC error code.
        shared_ptr<int32_t> code_ {};
        // The optional additional error information. The content depends on the error type.
        Darabonba::Json data_ {};
        // The business error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->error_ == nullptr
        && this->id_ == nullptr && this->jsonrpc_ == nullptr && this->result_ == nullptr && this->timestamp_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const JsonRpcResponse::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, JsonRpcResponse::Error) };
      inline JsonRpcResponse::Error getError() { DARABONBA_PTR_GET(error_, JsonRpcResponse::Error) };
      inline JsonRpcResponse& setError(const JsonRpcResponse::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline JsonRpcResponse& setError(JsonRpcResponse::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline JsonRpcResponse& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonrpc Field Functions 
      bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
      void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
      inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
      inline JsonRpcResponse& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const JsonRpcResponse::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse::Result getResult() { DARABONBA_PTR_GET(result_, JsonRpcResponse::Result) };
      inline JsonRpcResponse& setResult(const JsonRpcResponse::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline JsonRpcResponse& setResult(JsonRpcResponse::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline JsonRpcResponse& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The JSON-RPC fault information. For example, DAEMON_PERMISSION_UNAVAILABLE is returned when the daemon reply feature is not enabled.
      shared_ptr<JsonRpcResponse::Error> error_ {};
      // The JSON-RPC correlation ID for this reply request.
      shared_ptr<string> id_ {};
      // The JSON-RPC protocol version.
      shared_ptr<string> jsonrpc_ {};
      // The reply processing result. This only indicates whether the reply was accepted, not whether the original task has completed.
      shared_ptr<JsonRpcResponse::Result> result_ {};
      // The response time. This is a UNIX timestamp, in milliseconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const ReplyAgentSessionResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, ReplyAgentSessionResponseBody::JsonRpcResponse) };
    inline ReplyAgentSessionResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, ReplyAgentSessionResponseBody::JsonRpcResponse) };
    inline ReplyAgentSessionResponseBody& setJsonRpcResponse(const ReplyAgentSessionResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ReplyAgentSessionResponseBody& setJsonRpcResponse(ReplyAgentSessionResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplyAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The JSON-RPC response. Returns Result on success or Error on protocol errors.
    shared_ptr<ReplyAgentSessionResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // The request ID for this call, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
