// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketInfo, bucketInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketInfo, bucketInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBucketInfoResponseBody() = default ;
    GetBucketInfoResponseBody(const GetBucketInfoResponseBody &) = default ;
    GetBucketInfoResponseBody(GetBucketInfoResponseBody &&) = default ;
    GetBucketInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketInfoResponseBody() = default ;
    GetBucketInfoResponseBody& operator=(const GetBucketInfoResponseBody &) = default ;
    GetBucketInfoResponseBody& operator=(GetBucketInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BucketInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BucketInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LogicalBucketType, logicalBucketType_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, BucketInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LogicalBucketType, logicalBucketType_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      };
      BucketInfo() = default ;
      BucketInfo(const BucketInfo &) = default ;
      BucketInfo(BucketInfo &&) = default ;
      BucketInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BucketInfo() = default ;
      BucketInfo& operator=(const BucketInfo &) = default ;
      BucketInfo& operator=(BucketInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && this->bucketName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->logicalBucketType_ == nullptr && this->modifyTime_ == nullptr; };
      // bucketAcl Field Functions 
      bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
      void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
      inline string getBucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
      inline BucketInfo& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline BucketInfo& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline BucketInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline BucketInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // logicalBucketType Field Functions 
      bool hasLogicalBucketType() const { return this->logicalBucketType_ != nullptr;};
      void deleteLogicalBucketType() { this->logicalBucketType_ = nullptr;};
      inline string getLogicalBucketType() const { DARABONBA_PTR_GET_DEFAULT(logicalBucketType_, "") };
      inline BucketInfo& setLogicalBucketType(string logicalBucketType) { DARABONBA_PTR_SET_VALUE(logicalBucketType_, logicalBucketType) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline BucketInfo& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    protected:
      // The ACL of the bucket.
      // 
      // *   **public-read-write**
      // *   **public-read**
      // *   **private** (default)
      shared_ptr<string> bucketAcl_ {};
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // The remarks.
      shared_ptr<string> comment_ {};
      // The time when the bucket was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // Single-node storage. Set the value to sink.
      shared_ptr<string> logicalBucketType_ {};
      // The time when the bucket was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
    };

    virtual bool empty() const override { return this->bucketInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // bucketInfo Field Functions 
    bool hasBucketInfo() const { return this->bucketInfo_ != nullptr;};
    void deleteBucketInfo() { this->bucketInfo_ = nullptr;};
    inline const GetBucketInfoResponseBody::BucketInfo & getBucketInfo() const { DARABONBA_PTR_GET_CONST(bucketInfo_, GetBucketInfoResponseBody::BucketInfo) };
    inline GetBucketInfoResponseBody::BucketInfo getBucketInfo() { DARABONBA_PTR_GET(bucketInfo_, GetBucketInfoResponseBody::BucketInfo) };
    inline GetBucketInfoResponseBody& setBucketInfo(const GetBucketInfoResponseBody::BucketInfo & bucketInfo) { DARABONBA_PTR_SET_VALUE(bucketInfo_, bucketInfo) };
    inline GetBucketInfoResponseBody& setBucketInfo(GetBucketInfoResponseBody::BucketInfo && bucketInfo) { DARABONBA_PTR_SET_RVALUE(bucketInfo_, bucketInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of bucket information.
    shared_ptr<GetBucketInfoResponseBody::BucketInfo> bucketInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
