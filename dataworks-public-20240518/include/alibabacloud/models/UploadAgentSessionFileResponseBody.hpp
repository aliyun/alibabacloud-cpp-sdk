// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAGENTSESSIONFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAGENTSESSIONFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UploadAgentSessionFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAgentSessionFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAgentSessionFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UploadAgentSessionFileResponseBody() = default ;
    UploadAgentSessionFileResponseBody(const UploadAgentSessionFileResponseBody &) = default ;
    UploadAgentSessionFileResponseBody(UploadAgentSessionFileResponseBody &&) = default ;
    UploadAgentSessionFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAgentSessionFileResponseBody() = default ;
    UploadAgentSessionFileResponseBody& operator=(const UploadAgentSessionFileResponseBody &) = default ;
    UploadAgentSessionFileResponseBody& operator=(UploadAgentSessionFileResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RelativePath, relativePath_);
          DARABONBA_PTR_TO_JSON(Signature, signature_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RelativePath, relativePath_);
          DARABONBA_PTR_FROM_JSON(Signature, signature_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
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
        class Signature : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Signature& obj) { 
            DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
            DARABONBA_PTR_TO_JSON(Headers, headers_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Signature& obj) { 
            DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
            DARABONBA_PTR_FROM_JSON(Headers, headers_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Signature() = default ;
          Signature(const Signature &) = default ;
          Signature(Signature &&) = default ;
          Signature(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Signature() = default ;
          Signature& operator=(const Signature &) = default ;
          Signature& operator=(Signature &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->headers_ == nullptr && this->url_ == nullptr; };
          // expiresAt Field Functions 
          bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
          void deleteExpiresAt() { this->expiresAt_ = nullptr;};
          inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
          inline Signature& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


          // headers Field Functions 
          bool hasHeaders() const { return this->headers_ != nullptr;};
          void deleteHeaders() { this->headers_ = nullptr;};
          inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
          inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
          inline Signature& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
          inline Signature& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Signature& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The expiration time of the current upload signature in ISO 8601 UTC string format. The trailing Z indicates UTC, and fractional seconds may be included. The signature is valid for 5 minutes. Signature expiration does not indicate that the staged object has been deleted.
          shared_ptr<string> expiresAt_ {};
          // All signed request headers that must be included in the PUT request. The names and values must be used exactly as provided. This includes Content-Type, Content-MD5, Content-Length, x-oss-object-acl, and x-oss-forbid-overwrite.
          shared_ptr<map<string, string>> headers_ {};
          // The complete signed HTTPS PUT URL returned by prepare, which must be used exactly as provided for the upload. The example displayed for this field does not contain a valid signature. The actual request must use the complete signed URL returned by the current prepare call.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->relativePath_ == nullptr && this->signature_ == nullptr && this->size_ == nullptr && this->uploadId_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // relativePath Field Functions 
        bool hasRelativePath() const { return this->relativePath_ != nullptr;};
        void deleteRelativePath() { this->relativePath_ = nullptr;};
        inline string getRelativePath() const { DARABONBA_PTR_GET_DEFAULT(relativePath_, "") };
        inline Result& setRelativePath(string relativePath) { DARABONBA_PTR_SET_VALUE(relativePath_, relativePath) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline const Result::Signature & getSignature() const { DARABONBA_PTR_GET_CONST(signature_, Result::Signature) };
        inline Result::Signature getSignature() { DARABONBA_PTR_GET(signature_, Result::Signature) };
        inline Result& setSignature(const Result::Signature & signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };
        inline Result& setSignature(Result::Signature && signature) { DARABONBA_PTR_SET_RVALUE(signature_, signature) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Result& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // uploadId Field Functions 
        bool hasUploadId() const { return this->uploadId_ != nullptr;};
        void deleteUploadId() { this->uploadId_ = nullptr;};
        inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
        inline Result& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


      protected:
        // The attachment identifier.
        shared_ptr<string> id_ {};
        // The original file name.
        shared_ptr<string> name_ {};
        // The relative path in the session working directory.
        shared_ptr<string> relativePath_ {};
        // The time-limited object storage signature returned by prepare.
        shared_ptr<Result::Signature> signature_ {};
        // The number of file bytes saved in the instance.
        shared_ptr<int64_t> size_ {};
        // The staged upload identifier issued by prepare.
        shared_ptr<string> uploadId_ {};
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
      // The JSON-RPC fault message. This field is not returned on success.
      shared_ptr<JsonRpcResponse::Error> error_ {};
      // The JSON-RPC correlation identifier for the current request, which is passed by the caller and returned as is.
      shared_ptr<string> id_ {};
      // The JSON-RPC protocol version.
      shared_ptr<string> jsonrpc_ {};
      // Issues the staged upload URL or returns the attachment information after writing to the instance.
      shared_ptr<JsonRpcResponse::Result> result_ {};
      // The response time as a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline const UploadAgentSessionFileResponseBody::JsonRpcResponse & getJsonRpcResponse() const { DARABONBA_PTR_GET_CONST(jsonRpcResponse_, UploadAgentSessionFileResponseBody::JsonRpcResponse) };
    inline UploadAgentSessionFileResponseBody::JsonRpcResponse getJsonRpcResponse() { DARABONBA_PTR_GET(jsonRpcResponse_, UploadAgentSessionFileResponseBody::JsonRpcResponse) };
    inline UploadAgentSessionFileResponseBody& setJsonRpcResponse(const UploadAgentSessionFileResponseBody::JsonRpcResponse & jsonRpcResponse) { DARABONBA_PTR_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline UploadAgentSessionFileResponseBody& setJsonRpcResponse(UploadAgentSessionFileResponseBody::JsonRpcResponse && jsonRpcResponse) { DARABONBA_PTR_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadAgentSessionFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The JSON-RPC response. Returns Result on success and Error on protocol errors.
    shared_ptr<UploadAgentSessionFileResponseBody::JsonRpcResponse> jsonRpcResponse_ {};
    // The server correlation ID for the current request. You can provide this value for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
