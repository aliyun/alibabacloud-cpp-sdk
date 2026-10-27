// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEUPLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentCodePackageUploadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentCodePackageUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentCodePackageUploadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAgentCodePackageUploadUrlResponseBody() = default ;
    GetAgentCodePackageUploadUrlResponseBody(const GetAgentCodePackageUploadUrlResponseBody &) = default ;
    GetAgentCodePackageUploadUrlResponseBody(GetAgentCodePackageUploadUrlResponseBody &&) = default ;
    GetAgentCodePackageUploadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentCodePackageUploadUrlResponseBody() = default ;
    GetAgentCodePackageUploadUrlResponseBody& operator=(const GetAgentCodePackageUploadUrlResponseBody &) = default ;
    GetAgentCodePackageUploadUrlResponseBody& operator=(GetAgentCodePackageUploadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(headers, headers_);
        DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
        DARABONBA_PTR_TO_JSON(sourceUri, sourceUri_);
        DARABONBA_PTR_TO_JSON(uploadMethod, uploadMethod_);
        DARABONBA_PTR_TO_JSON(uploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(headers, headers_);
        DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
        DARABONBA_PTR_FROM_JSON(sourceUri, sourceUri_);
        DARABONBA_PTR_FROM_JSON(uploadMethod, uploadMethod_);
        DARABONBA_PTR_FROM_JSON(uploadUrl, uploadUrl_);
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
      virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->headers_ == nullptr && this->maxSize_ == nullptr && this->sourceUri_ == nullptr && this->uploadMethod_ == nullptr && this->uploadUrl_ == nullptr; };
      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
      inline Data& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
      inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
      inline Data& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline Data& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // maxSize Field Functions 
      bool hasMaxSize() const { return this->maxSize_ != nullptr;};
      void deleteMaxSize() { this->maxSize_ = nullptr;};
      inline int64_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0L) };
      inline Data& setMaxSize(int64_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


      // sourceUri Field Functions 
      bool hasSourceUri() const { return this->sourceUri_ != nullptr;};
      void deleteSourceUri() { this->sourceUri_ = nullptr;};
      inline string getSourceUri() const { DARABONBA_PTR_GET_DEFAULT(sourceUri_, "") };
      inline Data& setSourceUri(string sourceUri) { DARABONBA_PTR_SET_VALUE(sourceUri_, sourceUri) };


      // uploadMethod Field Functions 
      bool hasUploadMethod() const { return this->uploadMethod_ != nullptr;};
      void deleteUploadMethod() { this->uploadMethod_ = nullptr;};
      inline string getUploadMethod() const { DARABONBA_PTR_GET_DEFAULT(uploadMethod_, "") };
      inline Data& setUploadMethod(string uploadMethod) { DARABONBA_PTR_SET_VALUE(uploadMethod_, uploadMethod) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline Data& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


    protected:
      // The expiration time of the upload URL.
      shared_ptr<string> expiresAt_ {};
      // The HTTP headers that must be included in the direct upload request.
      shared_ptr<map<string, string>> headers_ {};
      // The maximum compressed size of the code package.
      shared_ptr<int64_t> maxSize_ {};
      // The temporary Object Storage Service (OSS) URI of the code package.
      shared_ptr<string> sourceUri_ {};
      // The HTTP method for direct upload.
      shared_ptr<string> uploadMethod_ {};
      // The time-limited presigned upload URL.
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentCodePackageUploadUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentCodePackageUploadUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentCodePackageUploadUrlResponseBody::Data) };
    inline GetAgentCodePackageUploadUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentCodePackageUploadUrlResponseBody::Data) };
    inline GetAgentCodePackageUploadUrlResponseBody& setData(const GetAgentCodePackageUploadUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentCodePackageUploadUrlResponseBody& setData(GetAgentCodePackageUploadUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAgentCodePackageUploadUrlResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentCodePackageUploadUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentCodePackageUploadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentCodePackageUploadUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetAgentCodePackageUploadUrlResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
