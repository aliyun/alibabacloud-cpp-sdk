// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSEMANTICFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSEMANTICFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UploadSemanticFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSemanticFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSemanticFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UploadSemanticFileResponseBody() = default ;
    UploadSemanticFileResponseBody(const UploadSemanticFileResponseBody &) = default ;
    UploadSemanticFileResponseBody(UploadSemanticFileResponseBody &&) = default ;
    UploadSemanticFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSemanticFileResponseBody() = default ;
    UploadSemanticFileResponseBody& operator=(const UploadSemanticFileResponseBody &) = default ;
    UploadSemanticFileResponseBody& operator=(UploadSemanticFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
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
        && this->fileId_ == nullptr && this->uploadUrl_ == nullptr; };
      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
      inline Data& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline Data& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


    protected:
      // The expiration time of UploadUrl, expressed as a UNIX timestamp in milliseconds. After this time, call UploadSemanticFile again to request a new URL.
      shared_ptr<int64_t> expiresAt_ {};
      // The unique identifier of the attachment. After the PUT upload to UploadUrl is complete, pass this value to the ReferenceFileIds parameter of CreateSemanticJob.
      shared_ptr<string> fileId_ {};
      // The temporary OSS PUT upload URL. The URL is valid for 30 minutes and can only be used to upload the specified object. Use the ContentType specified in the request when you perform the PUT request. Do not log or distribute the full URL.
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UploadSemanticFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UploadSemanticFileResponseBody::Data) };
    inline UploadSemanticFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UploadSemanticFileResponseBody::Data) };
    inline UploadSemanticFileResponseBody& setData(const UploadSemanticFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UploadSemanticFileResponseBody& setData(UploadSemanticFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadSemanticFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UploadSemanticFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The attachment upload slot information. PUT the file to Data.UploadUrl before Data.ExpiresAt, and then use Data.FileId to create a single-file semantic job.
    shared_ptr<UploadSemanticFileResponseBody::Data> data_ {};
    // The request ID. You can use this ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
