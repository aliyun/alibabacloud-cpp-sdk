// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCANSBOMEXPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCANSBOMEXPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class CreateScanSbomExportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScanSbomExportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sha256, sha256_);
      DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScanSbomExportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sha256, sha256_);
      DARABONBA_PTR_FROM_JSON(sizeBytes, sizeBytes_);
    };
    CreateScanSbomExportResponseBody() = default ;
    CreateScanSbomExportResponseBody(const CreateScanSbomExportResponseBody &) = default ;
    CreateScanSbomExportResponseBody(CreateScanSbomExportResponseBody &&) = default ;
    CreateScanSbomExportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScanSbomExportResponseBody() = default ;
    CreateScanSbomExportResponseBody& operator=(const CreateScanSbomExportResponseBody &) = default ;
    CreateScanSbomExportResponseBody& operator=(CreateScanSbomExportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->fileName_ == nullptr && this->format_ == nullptr && this->mediaType_ == nullptr && this->requestId_ == nullptr && this->sha256_ == nullptr
        && this->sizeBytes_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline CreateScanSbomExportResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateScanSbomExportResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline CreateScanSbomExportResponseBody& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline CreateScanSbomExportResponseBody& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScanSbomExportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sha256 Field Functions 
    bool hasSha256() const { return this->sha256_ != nullptr;};
    void deleteSha256() { this->sha256_ = nullptr;};
    inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
    inline CreateScanSbomExportResponseBody& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline CreateScanSbomExportResponseBody& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // The download URL of the exported file.
    shared_ptr<string> downloadUrl_ {};
    // The final effective file name (specified by the client or generated by the backend as default), which is signed into the Content-Disposition header.
    shared_ptr<string> fileName_ {};
    // The artifact format. The value is the same as the format enumeration in the request.
    shared_ptr<string> format_ {};
    // The MIME type of the source artifact, passed through as-is.
    shared_ptr<string> mediaType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The digest of the source artifact, used for download integrity verification.
    shared_ptr<string> sha256_ {};
    // The size of the source artifact in bytes, passed through as-is.
    shared_ptr<int64_t> sizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
