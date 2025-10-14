// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODYBUCKETLIST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTORAGEANDACCBYBUCKETSRESPONSEBODYBUCKETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssStorageAndAccByBucketsResponseBodyBucketList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssStorageAndAccByBucketsResponseBodyBucketList& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(StorageUsageByte, storageUsageByte_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssStorageAndAccByBucketsResponseBodyBucketList& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(StorageUsageByte, storageUsageByte_);
    };
    GetOssStorageAndAccByBucketsResponseBodyBucketList() = default ;
    GetOssStorageAndAccByBucketsResponseBodyBucketList(const GetOssStorageAndAccByBucketsResponseBodyBucketList &) = default ;
    GetOssStorageAndAccByBucketsResponseBodyBucketList(GetOssStorageAndAccByBucketsResponseBodyBucketList &&) = default ;
    GetOssStorageAndAccByBucketsResponseBodyBucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssStorageAndAccByBucketsResponseBodyBucketList() = default ;
    GetOssStorageAndAccByBucketsResponseBodyBucketList& operator=(const GetOssStorageAndAccByBucketsResponseBodyBucketList &) = default ;
    GetOssStorageAndAccByBucketsResponseBodyBucketList& operator=(GetOssStorageAndAccByBucketsResponseBodyBucketList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acc_ == nullptr
        && return this->bucket_ == nullptr && return this->storageUsageByte_ == nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int64_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
    inline GetOssStorageAndAccByBucketsResponseBodyBucketList& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOssStorageAndAccByBucketsResponseBodyBucketList& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // storageUsageByte Field Functions 
    bool hasStorageUsageByte() const { return this->storageUsageByte_ != nullptr;};
    void deleteStorageUsageByte() { this->storageUsageByte_ = nullptr;};
    inline int64_t storageUsageByte() const { DARABONBA_PTR_GET_DEFAULT(storageUsageByte_, 0L) };
    inline GetOssStorageAndAccByBucketsResponseBodyBucketList& setStorageUsageByte(int64_t storageUsageByte) { DARABONBA_PTR_SET_VALUE(storageUsageByte_, storageUsageByte) };


  protected:
    // The number of times that the bucket is accessed.
    std::shared_ptr<int64_t> acc_ = nullptr;
    // The name of the bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The storage usage of the bucket. Unit: bytes.
    std::shared_ptr<int64_t> storageUsageByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
