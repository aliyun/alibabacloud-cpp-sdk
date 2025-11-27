// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODYATTACHEDOSSBUCKETS_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODYATTACHEDOSSBUCKETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OSSBucket, OSSBucket_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets() = default ;
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets(const ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets &) = default ;
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets(ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets &&) = default ;
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets() = default ;
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& operator=(const ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets &) = default ;
    ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& operator=(ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->OSSBucket_ == nullptr && return this->ownerId_ == nullptr && return this->projectName_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OSSBucket Field Functions 
    bool hasOSSBucket() const { return this->OSSBucket_ != nullptr;};
    void deleteOSSBucket() { this->OSSBucket_ = nullptr;};
    inline string OSSBucket() const { DARABONBA_PTR_GET_DEFAULT(OSSBucket_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setOSSBucket(string OSSBucket) { DARABONBA_PTR_SET_VALUE(OSSBucket_, OSSBucket) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Timestamp of the project creation time, formatted as RFC3339Nano.
    std::shared_ptr<string> createTime_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // OSS Bucket name.
    std::shared_ptr<string> OSSBucket_ = nullptr;
    // User ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Project name.
    std::shared_ptr<string> projectName_ = nullptr;
    // Timestamp of the project modification time, formatted as RFC3339Nano.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
