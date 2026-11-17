// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEC2PABUCKETSIGNTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEC2PABUCKETSIGNTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateC2paBucketSignTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateC2paBucketSignTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_TO_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_TO_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_TO_JSON(SourcePrefix, sourcePrefix_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateC2paBucketSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_FROM_JSON(CustomAssertions, customAssertions_);
      DARABONBA_PTR_FROM_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_FROM_JSON(SourcePrefix, sourcePrefix_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateC2paBucketSignTaskRequest() = default ;
    CreateC2paBucketSignTaskRequest(const CreateC2paBucketSignTaskRequest &) = default ;
    CreateC2paBucketSignTaskRequest(CreateC2paBucketSignTaskRequest &&) = default ;
    CreateC2paBucketSignTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateC2paBucketSignTaskRequest() = default ;
    CreateC2paBucketSignTaskRequest& operator=(const CreateC2paBucketSignTaskRequest &) = default ;
    CreateC2paBucketSignTaskRequest& operator=(CreateC2paBucketSignTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->bucketRegionId_ == nullptr && this->customAssertions_ == nullptr && this->softwareAgent_ == nullptr && this->sourcePrefix_ == nullptr && this->sourceType_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline CreateC2paBucketSignTaskRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // bucketRegionId Field Functions 
    bool hasBucketRegionId() const { return this->bucketRegionId_ != nullptr;};
    void deleteBucketRegionId() { this->bucketRegionId_ = nullptr;};
    inline string getBucketRegionId() const { DARABONBA_PTR_GET_DEFAULT(bucketRegionId_, "") };
    inline CreateC2paBucketSignTaskRequest& setBucketRegionId(string bucketRegionId) { DARABONBA_PTR_SET_VALUE(bucketRegionId_, bucketRegionId) };


    // customAssertions Field Functions 
    bool hasCustomAssertions() const { return this->customAssertions_ != nullptr;};
    void deleteCustomAssertions() { this->customAssertions_ = nullptr;};
    inline string getCustomAssertions() const { DARABONBA_PTR_GET_DEFAULT(customAssertions_, "") };
    inline CreateC2paBucketSignTaskRequest& setCustomAssertions(string customAssertions) { DARABONBA_PTR_SET_VALUE(customAssertions_, customAssertions) };


    // softwareAgent Field Functions 
    bool hasSoftwareAgent() const { return this->softwareAgent_ != nullptr;};
    void deleteSoftwareAgent() { this->softwareAgent_ = nullptr;};
    inline string getSoftwareAgent() const { DARABONBA_PTR_GET_DEFAULT(softwareAgent_, "") };
    inline CreateC2paBucketSignTaskRequest& setSoftwareAgent(string softwareAgent) { DARABONBA_PTR_SET_VALUE(softwareAgent_, softwareAgent) };


    // sourcePrefix Field Functions 
    bool hasSourcePrefix() const { return this->sourcePrefix_ != nullptr;};
    void deleteSourcePrefix() { this->sourcePrefix_ = nullptr;};
    inline string getSourcePrefix() const { DARABONBA_PTR_GET_DEFAULT(sourcePrefix_, "") };
    inline CreateC2paBucketSignTaskRequest& setSourcePrefix(string sourcePrefix) { DARABONBA_PTR_SET_VALUE(sourcePrefix_, sourcePrefix) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateC2paBucketSignTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The name of the OSS bucket. The value must be 3 to 63 characters in length. Before you call this operation, you must authorize the `AliyunServiceRoleForAIDeepSign` service-linked role to read the source files, and access and write the signing results and reports.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    // The region of the OSS bucket. The value can be up to 64 characters in length and must match the actual region of the bucket. Example: `cn-hangzhou`.
    // 
    // This parameter is required.
    shared_ptr<string> bucketRegionId_ {};
    // The optional list of custom assertions. Pass a JSON array string. The original JSON text can be up to 4,096 UTF-8 bytes in length and contain up to 64 assertions. Each item must and can only contain `label` and `data`. `data` supports any JSON value. Objects and arrays can be nested up to 5 levels deep, and JSON integers must be within the signed 64-bit range. The assertions are written into the manifest of the signature file and can be read and authenticated for integrity by `label`. Each file in the same batch uses the same set of assertions. The content saved during creation is retained after the task is paused and resumed. For detailed formats, limits, and examples, see the supplementary description of request parameters.
    shared_ptr<string> customAssertions_ {};
    // The optional name of the software that generated or processed the content. The value can be up to 128 characters in length. Example: `Example Studio 1.0`. This software information is written into the content credential of the signature file. Each file in the same batch uses the value saved when the task is created. The original value is retained after the task is paused and resumed.
    shared_ptr<string> softwareAgent_ {};
    // The prefix of the objects to be processed. The value can be up to 1,023 UTF-8 bytes in length and must be `ai-deepsign/` or its subdirectory. If the trailing `/` is missing, the service automatically appends it, and the completed prefix must also meet the length limit. The service recursively processes non-directory objects under this prefix and supports `.jpg`, `.jpeg`, `.png`, `.mp4`, `.flac`, `.m4a`, `.mp3`, and `.wav` extensions, which are case-insensitive. Scanning the root directory of the bucket is not allowed, and the prefix cannot overlap with the output prefix `ai-deepsign-signed/`.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePrefix_ {};
    // The optional content source type. The value can be up to 128 characters in length. It supports 19 short names and their corresponding full HTTP URIs, which are case-sensitive. Examples: `digitalCapture` and `trainedAlgorithmicMedia`. The source declaration is written into the content credential of the signature file. Each file in the same batch uses the value saved when the task is created. If this parameter is left empty, no additional declaration is made. The service will deny invalid values during the creation phase. For the complete enumeration and URIs, see the supplementary description of request parameters.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
