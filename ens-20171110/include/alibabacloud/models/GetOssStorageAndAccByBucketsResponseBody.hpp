// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODY_HPP_
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
  class GetOssStorageAndAccByBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssStorageAndAccByBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BucketList, bucketList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssStorageAndAccByBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketList, bucketList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOssStorageAndAccByBucketsResponseBody() = default ;
    GetOssStorageAndAccByBucketsResponseBody(const GetOssStorageAndAccByBucketsResponseBody &) = default ;
    GetOssStorageAndAccByBucketsResponseBody(GetOssStorageAndAccByBucketsResponseBody &&) = default ;
    GetOssStorageAndAccByBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssStorageAndAccByBucketsResponseBody() = default ;
    GetOssStorageAndAccByBucketsResponseBody& operator=(const GetOssStorageAndAccByBucketsResponseBody &) = default ;
    GetOssStorageAndAccByBucketsResponseBody& operator=(GetOssStorageAndAccByBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BucketList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BucketList& obj) { 
        DARABONBA_PTR_TO_JSON(Acc, acc_);
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(StorageUsageByte, storageUsageByte_);
      };
      friend void from_json(const Darabonba::Json& j, BucketList& obj) { 
        DARABONBA_PTR_FROM_JSON(Acc, acc_);
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(StorageUsageByte, storageUsageByte_);
      };
      BucketList() = default ;
      BucketList(const BucketList &) = default ;
      BucketList(BucketList &&) = default ;
      BucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BucketList() = default ;
      BucketList& operator=(const BucketList &) = default ;
      BucketList& operator=(BucketList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acc_ == nullptr
        && this->bucket_ == nullptr && this->storageUsageByte_ == nullptr; };
      // acc Field Functions 
      bool hasAcc() const { return this->acc_ != nullptr;};
      void deleteAcc() { this->acc_ = nullptr;};
      inline int64_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
      inline BucketList& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline BucketList& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // storageUsageByte Field Functions 
      bool hasStorageUsageByte() const { return this->storageUsageByte_ != nullptr;};
      void deleteStorageUsageByte() { this->storageUsageByte_ = nullptr;};
      inline int64_t getStorageUsageByte() const { DARABONBA_PTR_GET_DEFAULT(storageUsageByte_, 0L) };
      inline BucketList& setStorageUsageByte(int64_t storageUsageByte) { DARABONBA_PTR_SET_VALUE(storageUsageByte_, storageUsageByte) };


    protected:
      // The number of times that the bucket is accessed.
      shared_ptr<int64_t> acc_ {};
      // The name of the bucket.
      shared_ptr<string> bucket_ {};
      // The storage usage of the bucket. Unit: bytes.
      shared_ptr<int64_t> storageUsageByte_ {};
    };

    virtual bool empty() const override { return this->bucketList_ == nullptr
        && this->requestId_ == nullptr; };
    // bucketList Field Functions 
    bool hasBucketList() const { return this->bucketList_ != nullptr;};
    void deleteBucketList() { this->bucketList_ = nullptr;};
    inline const vector<GetOssStorageAndAccByBucketsResponseBody::BucketList> & getBucketList() const { DARABONBA_PTR_GET_CONST(bucketList_, vector<GetOssStorageAndAccByBucketsResponseBody::BucketList>) };
    inline vector<GetOssStorageAndAccByBucketsResponseBody::BucketList> getBucketList() { DARABONBA_PTR_GET(bucketList_, vector<GetOssStorageAndAccByBucketsResponseBody::BucketList>) };
    inline GetOssStorageAndAccByBucketsResponseBody& setBucketList(const vector<GetOssStorageAndAccByBucketsResponseBody::BucketList> & bucketList) { DARABONBA_PTR_SET_VALUE(bucketList_, bucketList) };
    inline GetOssStorageAndAccByBucketsResponseBody& setBucketList(vector<GetOssStorageAndAccByBucketsResponseBody::BucketList> && bucketList) { DARABONBA_PTR_SET_RVALUE(bucketList_, bucketList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssStorageAndAccByBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the bucket.
    shared_ptr<vector<GetOssStorageAndAccByBucketsResponseBody::BucketList>> bucketList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
