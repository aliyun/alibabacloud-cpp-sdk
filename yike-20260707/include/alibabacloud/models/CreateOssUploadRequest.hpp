// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOSSUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOSSUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class CreateOssUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOssUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizConfig, bizConfig_);
      DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(TargetBucket, targetBucket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOssUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizConfig, bizConfig_);
      DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(TargetBucket, targetBucket_);
    };
    CreateOssUploadRequest() = default ;
    CreateOssUploadRequest(const CreateOssUploadRequest &) = default ;
    CreateOssUploadRequest(CreateOssUploadRequest &&) = default ;
    CreateOssUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOssUploadRequest() = default ;
    CreateOssUploadRequest& operator=(const CreateOssUploadRequest &) = default ;
    CreateOssUploadRequest& operator=(CreateOssUploadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizConfig_ == nullptr
        && this->credentialType_ == nullptr && this->fileExt_ == nullptr && this->fileType_ == nullptr && this->targetBucket_ == nullptr; };
    // bizConfig Field Functions 
    bool hasBizConfig() const { return this->bizConfig_ != nullptr;};
    void deleteBizConfig() { this->bizConfig_ = nullptr;};
    inline string getBizConfig() const { DARABONBA_PTR_GET_DEFAULT(bizConfig_, "") };
    inline CreateOssUploadRequest& setBizConfig(string bizConfig) { DARABONBA_PTR_SET_VALUE(bizConfig_, bizConfig) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline CreateOssUploadRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline CreateOssUploadRequest& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateOssUploadRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // targetBucket Field Functions 
    bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
    void deleteTargetBucket() { this->targetBucket_ = nullptr;};
    inline string getTargetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
    inline CreateOssUploadRequest& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


  protected:
    // The **business configuration JSON**, which includes ProductionId and FolderId.
    shared_ptr<string> bizConfig_ {};
    // The credential type. This is a reserved parameter. The current version always returns STS temporary credentials, and this parameter does not take effect.
    shared_ptr<string> credentialType_ {};
    // The file name extension, such as mp4, wav, or png. Do not include the dot. If this parameter is not specified, `MissingParameter` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> fileExt_ {};
    // The file type. Valid values: `Media` (default), `StoryboardInput`, `ImageFusion`, `AIAppParams`, `Workflow`, and `CommonFile`. If an invalid value is specified, `InvalidParameter` is returned. This value is used as a path segment in the `ObjectKey` and is converted to lowercase.
    shared_ptr<string> fileType_ {};
    // The explicitly specified destination bucket.
    shared_ptr<string> targetBucket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
