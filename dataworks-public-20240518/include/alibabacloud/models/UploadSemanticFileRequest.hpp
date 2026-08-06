// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSEMANTICFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSEMANTICFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UploadSemanticFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadSemanticFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, UploadSemanticFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    UploadSemanticFileRequest() = default ;
    UploadSemanticFileRequest(const UploadSemanticFileRequest &) = default ;
    UploadSemanticFileRequest(UploadSemanticFileRequest &&) = default ;
    UploadSemanticFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadSemanticFileRequest() = default ;
    UploadSemanticFileRequest& operator=(const UploadSemanticFileRequest &) = default ;
    UploadSemanticFileRequest& operator=(UploadSemanticFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->fileName_ == nullptr && this->sizeBytes_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline UploadSemanticFileRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadSemanticFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline UploadSemanticFileRequest& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // The MIME type of the object to upload. Maximum length: 128 characters. This value is included in the UploadUrl signature. Use the same Content-Type when performing the PUT request.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The original file name of the reference file to upload. Maximum length: 255 characters. When singleTableFile uses a FileId, only CSV or XLSX files are supported.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The size of the file to upload, in bytes. This value is recorded as attachment metadata. Specify the actual file size.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
