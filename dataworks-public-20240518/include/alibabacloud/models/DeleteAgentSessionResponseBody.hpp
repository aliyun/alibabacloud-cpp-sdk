// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAgentSessionResponseBody() = default ;
    DeleteAgentSessionResponseBody(const DeleteAgentSessionResponseBody &) = default ;
    DeleteAgentSessionResponseBody(DeleteAgentSessionResponseBody &&) = default ;
    DeleteAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentSessionResponseBody() = default ;
    DeleteAgentSessionResponseBody& operator=(const DeleteAgentSessionResponseBody &) = default ;
    DeleteAgentSessionResponseBody& operator=(DeleteAgentSessionResponseBody &&) = default ;
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
        DARABONBA_ANY_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, JsonRpcResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
        DARABONBA_ANY_FROM_JSON(Result, result_);
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
      inline       const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
      Darabonba::Json & getResult() { DARABONBA_GET(result_) };
      inline JsonRpcResponse& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
      inline JsonRpcResponse& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline JsonRpcResponse& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The JSON-RPC fault message. This field is not returned upon success.
      shared_ptr<JsonRpcResponse::Error> error_ {};
      // The JSON-RPC correlation identifier for the current request. It is passed by the caller and returned as-is.
      shared_ptr<string> id_ {};
      // The JSON-RPC protocol version.
      shared_ptr<string> jsonrpc_ {};
      // An empty object is returned upon successful deletion. If the deletion fails, check the sibling Error field.
      Darabonba::Json result_ {};
      // The response time. It is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const DeleteAgentSessionResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, DeleteAgentSessionResponseBody::JsonRpcResponse) };
    inline DeleteAgentSessionResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, DeleteAgentSessionResponseBody::JsonRpcResponse) };
    inline DeleteAgentSessionResponseBody& setJsonRpcResponse(const DeleteAgentSessionResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline DeleteAgentSessionResponseBody& setJsonRpcResponse(DeleteAgentSessionResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The JSON-RPC response. It returns Result upon success and Error upon protocol errors.
    shared_ptr<DeleteAgentSessionResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // The OpenAPI request ID, which can be used to troubleshoot call failures.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
