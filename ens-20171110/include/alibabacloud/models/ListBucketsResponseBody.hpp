// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketInfos, bucketInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketInfos, bucketInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBucketsResponseBody() = default ;
    ListBucketsResponseBody(const ListBucketsResponseBody &) = default ;
    ListBucketsResponseBody(ListBucketsResponseBody &&) = default ;
    ListBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBucketsResponseBody() = default ;
    ListBucketsResponseBody& operator=(const ListBucketsResponseBody &) = default ;
    ListBucketsResponseBody& operator=(ListBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BucketInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BucketInfos& obj) { 
        DARABONBA_PTR_TO_JSON(BucketAcl, bucketAcl_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(LogicalBucketType, logicalBucketType_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      };
      friend void from_json(const Darabonba::Json& j, BucketInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketAcl, bucketAcl_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(LogicalBucketType, logicalBucketType_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      };
      BucketInfos() = default ;
      BucketInfos(const BucketInfos &) = default ;
      BucketInfos(BucketInfos &&) = default ;
      BucketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BucketInfos() = default ;
      BucketInfos& operator=(const BucketInfos &) = default ;
      BucketInfos& operator=(BucketInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketAcl_ == nullptr
        && this->bucketName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->ensRegionId_ == nullptr && this->logicalBucketType_ == nullptr
        && this->modifyTime_ == nullptr; };
      // bucketAcl Field Functions 
      bool hasBucketAcl() const { return this->bucketAcl_ != nullptr;};
      void deleteBucketAcl() { this->bucketAcl_ = nullptr;};
      inline string getBucketAcl() const { DARABONBA_PTR_GET_DEFAULT(bucketAcl_, "") };
      inline BucketInfos& setBucketAcl(string bucketAcl) { DARABONBA_PTR_SET_VALUE(bucketAcl_, bucketAcl) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline BucketInfos& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline BucketInfos& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline BucketInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline BucketInfos& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // logicalBucketType Field Functions 
      bool hasLogicalBucketType() const { return this->logicalBucketType_ != nullptr;};
      void deleteLogicalBucketType() { this->logicalBucketType_ = nullptr;};
      inline string getLogicalBucketType() const { DARABONBA_PTR_GET_DEFAULT(logicalBucketType_, "") };
      inline BucketInfos& setLogicalBucketType(string logicalBucketType) { DARABONBA_PTR_SET_VALUE(logicalBucketType_, logicalBucketType) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline BucketInfos& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    protected:
      // The access control list (ACL) of the bucket.
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
      // The ID of the region where the node is located.
      shared_ptr<string> ensRegionId_ {};
      // The type of the single-node storage. Set the value to sink.
      shared_ptr<string> logicalBucketType_ {};
      // The time when the bucket was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modifyTime_ {};
    };

    virtual bool empty() const override { return this->bucketInfos_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bucketInfos Field Functions 
    bool hasBucketInfos() const { return this->bucketInfos_ != nullptr;};
    void deleteBucketInfos() { this->bucketInfos_ = nullptr;};
    inline const vector<ListBucketsResponseBody::BucketInfos> & getBucketInfos() const { DARABONBA_PTR_GET_CONST(bucketInfos_, vector<ListBucketsResponseBody::BucketInfos>) };
    inline vector<ListBucketsResponseBody::BucketInfos> getBucketInfos() { DARABONBA_PTR_GET(bucketInfos_, vector<ListBucketsResponseBody::BucketInfos>) };
    inline ListBucketsResponseBody& setBucketInfos(const vector<ListBucketsResponseBody::BucketInfos> & bucketInfos) { DARABONBA_PTR_SET_VALUE(bucketInfos_, bucketInfos) };
    inline ListBucketsResponseBody& setBucketInfos(vector<ListBucketsResponseBody::BucketInfos> && bucketInfos) { DARABONBA_PTR_SET_RVALUE(bucketInfos_, bucketInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListBucketsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of bucket information.
    shared_ptr<vector<ListBucketsResponseBody::BucketInfos>> bucketInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of buckets that match the conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
