// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEC2PASIGNTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEC2PASIGNTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateC2paSignTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateC2paSignTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowOverwrite, allowOverwrite_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_TO_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_TO_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TargetBucketName, targetBucketName_);
      DARABONBA_PTR_TO_JSON(TargetBucketRegion, targetBucketRegion_);
      DARABONBA_PTR_TO_JSON(TargetObjectKey, targetObjectKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateC2paSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowOverwrite, allowOverwrite_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_FROM_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
      DARABONBA_PTR_FROM_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TargetBucketName, targetBucketName_);
      DARABONBA_PTR_FROM_JSON(TargetBucketRegion, targetBucketRegion_);
      DARABONBA_PTR_FROM_JSON(TargetObjectKey, targetObjectKey_);
    };
    CreateC2paSignTaskRequest() = default ;
    CreateC2paSignTaskRequest(const CreateC2paSignTaskRequest &) = default ;
    CreateC2paSignTaskRequest(CreateC2paSignTaskRequest &&) = default ;
    CreateC2paSignTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateC2paSignTaskRequest() = default ;
    CreateC2paSignTaskRequest& operator=(const CreateC2paSignTaskRequest &) = default ;
    CreateC2paSignTaskRequest& operator=(CreateC2paSignTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowOverwrite_ == nullptr
        && this->bucketName_ == nullptr && this->bucketRegionId_ == nullptr && this->customAssertions_ == nullptr && this->fileUrl_ == nullptr && this->objectKey_ == nullptr
        && this->softwareAgent_ == nullptr && this->sourceType_ == nullptr && this->targetBucketName_ == nullptr && this->targetBucketRegion_ == nullptr && this->targetObjectKey_ == nullptr; };
    // allowOverwrite Field Functions 
    bool hasAllowOverwrite() const { return this->allowOverwrite_ != nullptr;};
    void deleteAllowOverwrite() { this->allowOverwrite_ = nullptr;};
    inline bool getAllowOverwrite() const { DARABONBA_PTR_GET_DEFAULT(allowOverwrite_, false) };
    inline CreateC2paSignTaskRequest& setAllowOverwrite(bool allowOverwrite) { DARABONBA_PTR_SET_VALUE(allowOverwrite_, allowOverwrite) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateC2paSignTaskRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketRegionId Field Functions 
    bool hasBucketRegionId() const { return this->bucketRegionId_ != nullptr;};
    void deleteBucketRegionId() { this->bucketRegionId_ = nullptr;};
    inline string getBucketRegionId() const { DARABONBA_PTR_GET_DEFAULT(bucketRegionId_, "") };
    inline CreateC2paSignTaskRequest& setBucketRegionId(string bucketRegionId) { DARABONBA_PTR_SET_VALUE(bucketRegionId_, bucketRegionId) };


    // customAssertions Field Functions 
    bool hasCustomAssertions() const { return this->customAssertions_ != nullptr;};
    void deleteCustomAssertions() { this->customAssertions_ = nullptr;};
    inline string getCustomAssertions() const { DARABONBA_PTR_GET_DEFAULT(customAssertions_, "") };
    inline CreateC2paSignTaskRequest& setCustomAssertions(string customAssertions) { DARABONBA_PTR_SET_VALUE(customAssertions_, customAssertions) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateC2paSignTaskRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // objectKey Field Functions 
    bool hasObjectKey() const { return this->objectKey_ != nullptr;};
    void deleteObjectKey() { this->objectKey_ = nullptr;};
    inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
    inline CreateC2paSignTaskRequest& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


    // softwareAgent Field Functions 
    bool hasSoftwareAgent() const { return this->softwareAgent_ != nullptr;};
    void deleteSoftwareAgent() { this->softwareAgent_ = nullptr;};
    inline string getSoftwareAgent() const { DARABONBA_PTR_GET_DEFAULT(softwareAgent_, "") };
    inline CreateC2paSignTaskRequest& setSoftwareAgent(string softwareAgent) { DARABONBA_PTR_SET_VALUE(softwareAgent_, softwareAgent) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateC2paSignTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetBucketName Field Functions 
    bool hasTargetBucketName() const { return this->targetBucketName_ != nullptr;};
    void deleteTargetBucketName() { this->targetBucketName_ = nullptr;};
    inline string getTargetBucketName() const { DARABONBA_PTR_GET_DEFAULT(targetBucketName_, "") };
    inline CreateC2paSignTaskRequest& setTargetBucketName(string targetBucketName) { DARABONBA_PTR_SET_VALUE(targetBucketName_, targetBucketName) };


    // targetBucketRegion Field Functions 
    bool hasTargetBucketRegion() const { return this->targetBucketRegion_ != nullptr;};
    void deleteTargetBucketRegion() { this->targetBucketRegion_ = nullptr;};
    inline string getTargetBucketRegion() const { DARABONBA_PTR_GET_DEFAULT(targetBucketRegion_, "") };
    inline CreateC2paSignTaskRequest& setTargetBucketRegion(string targetBucketRegion) { DARABONBA_PTR_SET_VALUE(targetBucketRegion_, targetBucketRegion) };


    // targetObjectKey Field Functions 
    bool hasTargetObjectKey() const { return this->targetObjectKey_ != nullptr;};
    void deleteTargetObjectKey() { this->targetObjectKey_ = nullptr;};
    inline string getTargetObjectKey() const { DARABONBA_PTR_GET_DEFAULT(targetObjectKey_, "") };
    inline CreateC2paSignTaskRequest& setTargetObjectKey(string targetObjectKey) { DARABONBA_PTR_SET_VALUE(targetObjectKey_, targetObjectKey) };


  protected:
    // Specifies whether to allow overwriting when the target object already exists. Default value: false. If the target object exists and this parameter is set to false, the creation is rejected. If this parameter is set to true, existing objects can be overwritten, which supports in-place signing where the target object key can be the same as the source object key.
    shared_ptr<bool> allowOverwrite_ {};
    // The name of the user\\"s OSS bucket where the source file is located. This parameter, together with BucketRegionId and ObjectKey, forms the bucket source. Either this parameter or FileUrl is required.
    shared_ptr<string> bucketName_ {};
    // The region ID of the user\\"s OSS bucket where the source file is located. This parameter, together with BucketName and ObjectKey, forms the bucket source. Either this parameter or FileUrl is required. Example: cn-hangzhou.
    shared_ptr<string> bucketRegionId_ {};
    // The optional list of custom assertions. Pass a JSON array string. The original JSON text can be up to 4,096 UTF-8 bytes in length and contain up to 64 assertions. Each item must and can only contain label and data. data supports any JSON value. Objects and arrays can be nested up to 5 levels deep. JSON integers must be within the signed 64-bit range. The assertions are written into the manifest of the signed file and can be read and authenticated for integrity by label. For detailed formats, limits, and examples, refer to the supplementary description of request parameters.
    shared_ptr<string> customAssertions_ {};
    // The absolute HTTP or HTTPS URL of signature file to be signed. The URL can be up to 4,096 characters in length and cannot contain URL user info. The URL path must end with a .jpg, .jpeg, .png, .mp4, .flac, .m4a, .mp3, or .wav file name. Signature file extension is case-insensitive. The URL query is not used for file name identification. The source URL must be accessible by the service and directly return an HTTP 200 status code. Redirection is not supported. The size of a single file cannot exceed 800 MiB.
    shared_ptr<string> fileUrl_ {};
    // The object key of the source file in the user\\"s OSS bucket. This parameter, together with BucketRegionId and BucketName, forms the bucket source. Either this parameter or FileUrl is required.
    shared_ptr<string> objectKey_ {};
    // The optional name of the software that generated or processed the content. The value can be up to 128 characters in length, such as Example Studio 1.0. This software information is written into the content credentials of the signed file and is independent of SourceType and CustomAssertions.
    shared_ptr<string> softwareAgent_ {};
    // The optional content source type. The value can be up to 128 characters in length. It supports 19 short names and their corresponding full HTTP URIs, and is case-sensitive. Examples include digitalCapture and trainedAlgorithmicMedia. The source declaration is written into the content credentials of the signed file. If this parameter is not specified, no additional source type is declared. The service denies invalid values during the creation phase. For the complete enumeration and URIs, refer to the supplementary description of request parameters.
    shared_ptr<string> sourceType_ {};
    // The optional name of the user\\"s OSS bucket to which the signing result is written. If this parameter is empty, the result is written to an internal bucket of the service and returned through SignedFileUrl.
    shared_ptr<string> targetBucketName_ {};
    // The optional region ID of the user\\"s OSS bucket to which the signing result is written. If this parameter is empty, the source BucketRegionId is reused for same-region writes. For cross-region writes, this parameter must be explicitly specified.
    shared_ptr<string> targetBucketRegion_ {};
    // The optional full object key of the signed artifact written to the user\\"s bucket. This parameter must be provided together with TargetBucketName. It must start with ai-deepsign-signed/ and be a full object name with an extension, not a directory prefix. The server does not append the _signed suffix or a trailing slash.
    shared_ptr<string> targetObjectKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
