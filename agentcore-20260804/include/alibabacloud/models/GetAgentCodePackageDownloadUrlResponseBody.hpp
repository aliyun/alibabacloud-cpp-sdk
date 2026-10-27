// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTCODEPACKAGEDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentCodePackageDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentCodePackageDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentCodePackageDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAgentCodePackageDownloadUrlResponseBody() = default ;
    GetAgentCodePackageDownloadUrlResponseBody(const GetAgentCodePackageDownloadUrlResponseBody &) = default ;
    GetAgentCodePackageDownloadUrlResponseBody(GetAgentCodePackageDownloadUrlResponseBody &&) = default ;
    GetAgentCodePackageDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentCodePackageDownloadUrlResponseBody() = default ;
    GetAgentCodePackageDownloadUrlResponseBody& operator=(const GetAgentCodePackageDownloadUrlResponseBody &) = default ;
    GetAgentCodePackageDownloadUrlResponseBody& operator=(GetAgentCodePackageDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(crc64, crc64_);
        DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(etag, etag_);
        DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(fileName, fileName_);
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(format, format_);
        DARABONBA_PTR_TO_JSON(resourceVersionId, resourceVersionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(crc64, crc64_);
        DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(etag, etag_);
        DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(fileName, fileName_);
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(format, format_);
        DARABONBA_PTR_FROM_JSON(resourceVersionId, resourceVersionId_);
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
      virtual bool empty() const override { return this->crc64_ == nullptr
        && this->downloadUrl_ == nullptr && this->etag_ == nullptr && this->expiresAt_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr
        && this->format_ == nullptr && this->resourceVersionId_ == nullptr; };
      // crc64 Field Functions 
      bool hasCrc64() const { return this->crc64_ != nullptr;};
      void deleteCrc64() { this->crc64_ = nullptr;};
      inline string getCrc64() const { DARABONBA_PTR_GET_DEFAULT(crc64_, "") };
      inline Data& setCrc64(string crc64) { DARABONBA_PTR_SET_VALUE(crc64_, crc64) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Data& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // etag Field Functions 
      bool hasEtag() const { return this->etag_ != nullptr;};
      void deleteEtag() { this->etag_ = nullptr;};
      inline string getEtag() const { DARABONBA_PTR_GET_DEFAULT(etag_, "") };
      inline Data& setEtag(string etag) { DARABONBA_PTR_SET_VALUE(etag_, etag) };


      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
      inline Data& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Data& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Data& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // resourceVersionId Field Functions 
      bool hasResourceVersionId() const { return this->resourceVersionId_ != nullptr;};
      void deleteResourceVersionId() { this->resourceVersionId_ = nullptr;};
      inline string getResourceVersionId() const { DARABONBA_PTR_GET_DEFAULT(resourceVersionId_, "") };
      inline Data& setResourceVersionId(string resourceVersionId) { DARABONBA_PTR_SET_VALUE(resourceVersionId_, resourceVersionId) };


    protected:
      // The CRC64 value of the code package object.
      shared_ptr<string> crc64_ {};
      // The time-limited, read-only download URL for the code package.
      shared_ptr<string> downloadUrl_ {};
      // The ETag of the code package object.
      shared_ptr<string> etag_ {};
      // The expiration time of the download URL.
      shared_ptr<string> expiresAt_ {};
      // The original file name of the code package.
      shared_ptr<string> fileName_ {};
      // The compressed size of the code package.
      shared_ptr<int64_t> fileSize_ {};
      // The format of the code package.
      shared_ptr<string> format_ {};
      // The resource version ID corresponding to the currently saved configuration.
      shared_ptr<string> resourceVersionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentCodePackageDownloadUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentCodePackageDownloadUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentCodePackageDownloadUrlResponseBody::Data) };
    inline GetAgentCodePackageDownloadUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentCodePackageDownloadUrlResponseBody::Data) };
    inline GetAgentCodePackageDownloadUrlResponseBody& setData(const GetAgentCodePackageDownloadUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentCodePackageDownloadUrlResponseBody& setData(GetAgentCodePackageDownloadUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAgentCodePackageDownloadUrlResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentCodePackageDownloadUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentCodePackageDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentCodePackageDownloadUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetAgentCodePackageDownloadUrlResponseBody::Data> data_ {};
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
