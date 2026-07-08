// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYUSERDATAUPLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYUSERDATAUPLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyUserDataUploadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyUserDataUploadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSizeBytes, fileSizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyUserDataUploadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSizeBytes, fileSizeBytes_);
    };
    DescribeComfyUserDataUploadUrlRequest() = default ;
    DescribeComfyUserDataUploadUrlRequest(const DescribeComfyUserDataUploadUrlRequest &) = default ;
    DescribeComfyUserDataUploadUrlRequest(DescribeComfyUserDataUploadUrlRequest &&) = default ;
    DescribeComfyUserDataUploadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyUserDataUploadUrlRequest() = default ;
    DescribeComfyUserDataUploadUrlRequest& operator=(const DescribeComfyUserDataUploadUrlRequest &) = default ;
    DescribeComfyUserDataUploadUrlRequest& operator=(DescribeComfyUserDataUploadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->fileMd5_ == nullptr && this->fileName_ == nullptr && this->fileSizeBytes_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline DescribeComfyUserDataUploadUrlRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline DescribeComfyUserDataUploadUrlRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeComfyUserDataUploadUrlRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSizeBytes Field Functions 
    bool hasFileSizeBytes() const { return this->fileSizeBytes_ != nullptr;};
    void deleteFileSizeBytes() { this->fileSizeBytes_ = nullptr;};
    inline int64_t getFileSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeBytes_, 0L) };
    inline DescribeComfyUserDataUploadUrlRequest& setFileSizeBytes(int64_t fileSizeBytes) { DARABONBA_PTR_SET_VALUE(fileSizeBytes_, fileSizeBytes) };


  protected:
    // The content type of the file.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // The MD5 hash of the file to be uploaded. This value must be the file\\"s actual MD5 hash. The file size is also verified during the upload.
    // 
    // This parameter is required.
    shared_ptr<string> fileMd5_ {};
    // The name of the file to upload. The filename can be a single file, such as \\`1.jpg\\`, or include a path, such as \\`directory1/1.jpg\\`.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The actual size of the file in bytes. This value must be the exact size of the file. The file size is verified when you use the upload URL.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fileSizeBytes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
