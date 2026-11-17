// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWATERMARKSIGNTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWATERMARKSIGNTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateWatermarkSignTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWatermarkSignTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowOverwrite, allowOverwrite_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TargetBucketName, targetBucketName_);
      DARABONBA_PTR_TO_JSON(TargetBucketRegion, targetBucketRegion_);
      DARABONBA_PTR_TO_JSON(TargetObjectKey, targetObjectKey_);
      DARABONBA_PTR_TO_JSON(WatermarkContent, watermarkContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWatermarkSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowOverwrite, allowOverwrite_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TargetBucketName, targetBucketName_);
      DARABONBA_PTR_FROM_JSON(TargetBucketRegion, targetBucketRegion_);
      DARABONBA_PTR_FROM_JSON(TargetObjectKey, targetObjectKey_);
      DARABONBA_PTR_FROM_JSON(WatermarkContent, watermarkContent_);
    };
    CreateWatermarkSignTaskRequest() = default ;
    CreateWatermarkSignTaskRequest(const CreateWatermarkSignTaskRequest &) = default ;
    CreateWatermarkSignTaskRequest(CreateWatermarkSignTaskRequest &&) = default ;
    CreateWatermarkSignTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWatermarkSignTaskRequest() = default ;
    CreateWatermarkSignTaskRequest& operator=(const CreateWatermarkSignTaskRequest &) = default ;
    CreateWatermarkSignTaskRequest& operator=(CreateWatermarkSignTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowOverwrite_ == nullptr
        && this->clientToken_ == nullptr && this->customAssertions_ == nullptr && this->fileType_ == nullptr && this->fileUrl_ == nullptr && this->level_ == nullptr
        && this->reserved_ == nullptr && this->softwareAgent_ == nullptr && this->sourceType_ == nullptr && this->targetBucketName_ == nullptr && this->targetBucketRegion_ == nullptr
        && this->targetObjectKey_ == nullptr && this->watermarkContent_ == nullptr; };
    // allowOverwrite Field Functions 
    bool hasAllowOverwrite() const { return this->allowOverwrite_ != nullptr;};
    void deleteAllowOverwrite() { this->allowOverwrite_ = nullptr;};
    inline bool getAllowOverwrite() const { DARABONBA_PTR_GET_DEFAULT(allowOverwrite_, false) };
    inline CreateWatermarkSignTaskRequest& setAllowOverwrite(bool allowOverwrite) { DARABONBA_PTR_SET_VALUE(allowOverwrite_, allowOverwrite) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateWatermarkSignTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customAssertions Field Functions 
    bool hasCustomAssertions() const { return this->customAssertions_ != nullptr;};
    void deleteCustomAssertions() { this->customAssertions_ = nullptr;};
    inline string getCustomAssertions() const { DARABONBA_PTR_GET_DEFAULT(customAssertions_, "") };
    inline CreateWatermarkSignTaskRequest& setCustomAssertions(string customAssertions) { DARABONBA_PTR_SET_VALUE(customAssertions_, customAssertions) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateWatermarkSignTaskRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateWatermarkSignTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateWatermarkSignTaskRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline CreateWatermarkSignTaskRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // softwareAgent Field Functions 
    bool hasSoftwareAgent() const { return this->softwareAgent_ != nullptr;};
    void deleteSoftwareAgent() { this->softwareAgent_ = nullptr;};
    inline string getSoftwareAgent() const { DARABONBA_PTR_GET_DEFAULT(softwareAgent_, "") };
    inline CreateWatermarkSignTaskRequest& setSoftwareAgent(string softwareAgent) { DARABONBA_PTR_SET_VALUE(softwareAgent_, softwareAgent) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateWatermarkSignTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetBucketName Field Functions 
    bool hasTargetBucketName() const { return this->targetBucketName_ != nullptr;};
    void deleteTargetBucketName() { this->targetBucketName_ = nullptr;};
    inline string getTargetBucketName() const { DARABONBA_PTR_GET_DEFAULT(targetBucketName_, "") };
    inline CreateWatermarkSignTaskRequest& setTargetBucketName(string targetBucketName) { DARABONBA_PTR_SET_VALUE(targetBucketName_, targetBucketName) };


    // targetBucketRegion Field Functions 
    bool hasTargetBucketRegion() const { return this->targetBucketRegion_ != nullptr;};
    void deleteTargetBucketRegion() { this->targetBucketRegion_ = nullptr;};
    inline string getTargetBucketRegion() const { DARABONBA_PTR_GET_DEFAULT(targetBucketRegion_, "") };
    inline CreateWatermarkSignTaskRequest& setTargetBucketRegion(string targetBucketRegion) { DARABONBA_PTR_SET_VALUE(targetBucketRegion_, targetBucketRegion) };


    // targetObjectKey Field Functions 
    bool hasTargetObjectKey() const { return this->targetObjectKey_ != nullptr;};
    void deleteTargetObjectKey() { this->targetObjectKey_ = nullptr;};
    inline string getTargetObjectKey() const { DARABONBA_PTR_GET_DEFAULT(targetObjectKey_, "") };
    inline CreateWatermarkSignTaskRequest& setTargetObjectKey(string targetObjectKey) { DARABONBA_PTR_SET_VALUE(targetObjectKey_, targetObjectKey) };


    // watermarkContent Field Functions 
    bool hasWatermarkContent() const { return this->watermarkContent_ != nullptr;};
    void deleteWatermarkContent() { this->watermarkContent_ = nullptr;};
    inline string getWatermarkContent() const { DARABONBA_PTR_GET_DEFAULT(watermarkContent_, "") };
    inline CreateWatermarkSignTaskRequest& setWatermarkContent(string watermarkContent) { DARABONBA_PTR_SET_VALUE(watermarkContent_, watermarkContent) };


  protected:
    // Specifies whether to allow overwriting the target object if it already exists. Default value: false. If this parameter is set to false, the creation is rejected when the target object already exists. If this parameter is set to true, existing objects can be overwritten, which supports in-place signing where the target object key can be the same as the source object key.
    shared_ptr<bool> allowOverwrite_ {};
    // The idempotency parameter.
    shared_ptr<string> clientToken_ {};
    // The optional custom C2PA assertions. The value is a JSON array string. You can specify up to 64 assertions, and each assertion cannot exceed 4,096 bytes.
    shared_ptr<string> customAssertions_ {};
    // The file type. Valid values: image, video, and audio. For audio files, the watermark is always processed through the EAS pipeline, the capacity is always 32 bits (auto_len is invalid), and the file name extension of the signed output is always .wav.
    // 
    // This parameter is required.
    shared_ptr<string> fileType_ {};
    // The URL of the file to be processed. You must specify either this parameter or ObjectKey. Images, videos, and audio files are supported. Only HTTP and HTTPS protocols are supported. The source file name extension is verified based on the intersection of C2PA signing capabilities and watermark tier capabilities. For images, only .jpg, .jpeg, and .png are supported. For videos, only .mp4 is supported, and the video must be within 10 minutes and 100 MB in size. For audio files, only .flac, .m4a, .mp3, and .wav are supported.
    shared_ptr<string> fileUrl_ {};
    // The watermark embedding strength. Valid values: 0 to 3. Default value: 2. A higher strength indicates better robustness but lower visual quality.
    // 
    // This parameter is required.
    shared_ptr<string> level_ {};
    // The reserved parameter used to pass extended parameters such as subkeys. Example: subkey:xxx. A subkey is used to isolate different customers under the same primary key and cannot contain commas.
    shared_ptr<string> reserved_ {};
    // The optional name of the software that generated the content, used for C2PA tracing. The current version does not support writing to the DigiCert manifest.
    shared_ptr<string> softwareAgent_ {};
    // The optional content source type used for C2PA tracing. The current version does not support writing to the DigiCert manifest.
    shared_ptr<string> sourceType_ {};
    // The optional name of the user\\"s OSS bucket to which the signing result is written. If this parameter is left empty, the result is written to an internal bucket of the service and returned through SignedFileUrl.
    shared_ptr<string> targetBucketName_ {};
    // The region ID of the user\\"s OSS bucket. This parameter is required when TargetBucketName is not empty. Example: cn-hangzhou.
    shared_ptr<string> targetBucketRegion_ {};
    // The optional full object key of the signed output written to the user\\"s bucket. This parameter must be provided together with TargetBucketName. The value must start with ai-deepsign-signed/ and must be a full object name including the file name extension, not a directory prefix. The server does not append the _signed suffix or a trailing slash.
    shared_ptr<string> targetObjectKey_ {};
    // The watermark content. The service internally maps the content to an integer watermark ID and restores the original content when the watermark is extracted.
    // 
    // This parameter is required.
    shared_ptr<string> watermarkContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
