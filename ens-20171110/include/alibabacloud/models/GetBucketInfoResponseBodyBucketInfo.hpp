// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODYBUCKETINFO_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODYBUCKETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketInfoResponseBodyBucketInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketInfoResponseBodyBucketInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LogicalBucketType, logicalBucketType_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketInfoResponseBodyBucketInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LogicalBucketType, logicalBucketType_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
    };
    GetBucketInfoResponseBodyBucketInfo() = default ;
    GetBucketInfoResponseBodyBucketInfo(const GetBucketInfoResponseBodyBucketInfo &) = default ;
    GetBucketInfoResponseBodyBucketInfo(GetBucketInfoResponseBodyBucketInfo &&) = default ;
    GetBucketInfoResponseBodyBucketInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketInfoResponseBodyBucketInfo() = default ;
    GetBucketInfoResponseBodyBucketInfo& operator=(const GetBucketInfoResponseBodyBucketInfo &) = default ;
    GetBucketInfoResponseBodyBucketInfo& operator=(GetBucketInfoResponseBodyBucketInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && return this->bucketName_ == nullptr && return this->comment_ == nullptr && return this->createTime_ == nullptr && return this->logicalBucketType_ == nullptr && return this->modifyTime_ == nullptr; };
    // bucketAcl Field Functions 
    bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
    void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
    inline string bucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // logicalBucketType Field Functions 
    bool hasLogicalBucketType() const { return this->logicalBucketType_ != nullptr;};
    void deleteLogicalBucketType() { this->logicalBucketType_ = nullptr;};
    inline string logicalBucketType() const { DARABONBA_PTR_GET_DEFAULT(logicalBucketType_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setLogicalBucketType(string logicalBucketType) { DARABONBA_PTR_SET_VALUE(logicalBucketType_, logicalBucketType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline GetBucketInfoResponseBodyBucketInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


  protected:
    // The ACL of the bucket.
    // 
    // *   **public-read-write**
    // *   **public-read**
    // *   **private** (default)
    std::shared_ptr<string> bucketAcl_ = nullptr;
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the bucket was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // Single-node storage. Set the value to sink.
    std::shared_ptr<string> logicalBucketType_ = nullptr;
    // The time when the bucket was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
