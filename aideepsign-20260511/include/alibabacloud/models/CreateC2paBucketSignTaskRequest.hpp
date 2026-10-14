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
      DARABONBA_PTR_TO_JSON(SoftwareAgent, softwareAgent_);
      DARABONBA_PTR_TO_JSON(SourcePrefix, sourcePrefix_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateC2paBucketSignTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(BucketRegionId, bucketRegionId_);
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
        && this->bucketRegionId_ == nullptr && this->softwareAgent_ == nullptr && this->sourcePrefix_ == nullptr && this->sourceType_ == nullptr; };
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
    // The name of the user OSS bucket. You must authorize the service-linked role AliyunServiceRoleForAIDeepSign to access the bucket in advance.
    // 
    // This parameter is required.
    shared_ptr<string> bucketName_ {};
    // The region of the user OSS bucket. It must be consistent with the actual region of the bucket.
    // 
    // This parameter is required.
    shared_ptr<string> bucketRegionId_ {};
    // The optional name of the software that generated the content. This parameter is not supported in the current version.
    shared_ptr<string> softwareAgent_ {};
    // The source object prefix. It must be `ai-deepsign/` or its subdirectory. The service recursively processes objects under this prefix.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePrefix_ {};
    // The optional content source type. This parameter is not supported in the current version.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
