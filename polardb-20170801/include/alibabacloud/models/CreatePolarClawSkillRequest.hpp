// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_TO_JSON(BucketType, bucketType_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OSSPrefix, OSSPrefix_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketRegionId, bucketRegionId_);
      DARABONBA_PTR_FROM_JSON(BucketType, bucketType_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OSSPrefix, OSSPrefix_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreatePolarClawSkillRequest() = default ;
    CreatePolarClawSkillRequest(const CreatePolarClawSkillRequest &) = default ;
    CreatePolarClawSkillRequest(CreatePolarClawSkillRequest &&) = default ;
    CreatePolarClawSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawSkillRequest() = default ;
    CreatePolarClawSkillRequest& operator=(const CreatePolarClawSkillRequest &) = default ;
    CreatePolarClawSkillRequest& operator=(CreatePolarClawSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketRegionId_ == nullptr
        && this->bucketType_ == nullptr && this->OSSBucket_ == nullptr && this->OSSPrefix_ == nullptr && this->regionId_ == nullptr && this->skillName_ == nullptr
        && this->skillVersion_ == nullptr && this->summary_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr; };
    // bucketRegionId Field Functions 
    bool hasBucketRegionId() const { return this->bucketRegionId_ != nullptr;};
    void deleteBucketRegionId() { this->bucketRegionId_ = nullptr;};
    inline string getBucketRegionId() const { DARABONBA_PTR_GET_DEFAULT(bucketRegionId_, "") };
    inline CreatePolarClawSkillRequest& setBucketRegionId(string bucketRegionId) { DARABONBA_PTR_SET_VALUE(bucketRegionId_, bucketRegionId) };


    // bucketType Field Functions 
    bool hasBucketType() const { return this->bucketType_ != nullptr;};
    void deleteBucketType() { this->bucketType_ = nullptr;};
    inline string getBucketType() const { DARABONBA_PTR_GET_DEFAULT(bucketType_, "") };
    inline CreatePolarClawSkillRequest& setBucketType(string bucketType) { DARABONBA_PTR_SET_VALUE(bucketType_, bucketType) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string getOSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline CreatePolarClawSkillRequest& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // OSSPrefix Field Functions 
    bool hasOSSPrefix() const { return this->OSSPrefix_ != nullptr;};
    void deleteOSSPrefix() { this->OSSPrefix_ = nullptr;};
    inline string getOSSPrefix() const { DARABONBA_PTR_GET_DEFAULT(OSSPrefix_, "") };
    inline CreatePolarClawSkillRequest& setOSSPrefix(string OSSPrefix) { DARABONBA_PTR_SET_VALUE(OSSPrefix_, OSSPrefix) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolarClawSkillRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreatePolarClawSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline CreatePolarClawSkillRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreatePolarClawSkillRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreatePolarClawSkillRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreatePolarClawSkillRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the region where the OSS bucket that stores the skill files resides.
    shared_ptr<string> bucketRegionId_ {};
    // The type of the bucket used for skill files. UserOwned indicates a user-owned bucket. Hosted indicates a hosted bucket. You must have the required permissions to use a hosted bucket.
    shared_ptr<string> bucketType_ {};
    // The name of the OSS bucket that resides in the same region as the current project.
    // 
    // This parameter is required.
    shared_ptr<string> OSSBucket_ {};
    // The prefix of the OSS object. The prefix can contain digits and letters and must be 1 to 30 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> OSSPrefix_ {};
    // The ID of the region where the parameter template resides.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The name of the skill.
    // 
    // This parameter is required.
    shared_ptr<string> skillName_ {};
    // The version of the skill.
    // 
    // This parameter is required.
    shared_ptr<string> skillVersion_ {};
    // The brief description of the skill.
    shared_ptr<string> summary_ {};
    // The tag details.
    shared_ptr<string> tags_ {};
    // The title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
