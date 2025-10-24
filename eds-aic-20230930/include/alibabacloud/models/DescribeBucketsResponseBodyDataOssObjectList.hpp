// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODYDATAOSSOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUCKETSRESPONSEBODYDATAOSSOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBucketsResponseBodyDataOssObjectListOwner.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBucketsResponseBodyDataOssObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBucketsResponseBodyDataOssObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(ETag, ETag_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RestoreInfo, restoreInfo_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBucketsResponseBodyDataOssObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(ETag, ETag_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RestoreInfo, restoreInfo_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeBucketsResponseBodyDataOssObjectList() = default ;
    DescribeBucketsResponseBodyDataOssObjectList(const DescribeBucketsResponseBodyDataOssObjectList &) = default ;
    DescribeBucketsResponseBodyDataOssObjectList(DescribeBucketsResponseBodyDataOssObjectList &&) = default ;
    DescribeBucketsResponseBodyDataOssObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBucketsResponseBodyDataOssObjectList() = default ;
    DescribeBucketsResponseBodyDataOssObjectList& operator=(const DescribeBucketsResponseBodyDataOssObjectList &) = default ;
    DescribeBucketsResponseBodyDataOssObjectList& operator=(DescribeBucketsResponseBodyDataOssObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->ETag_ == nullptr && return this->key_ == nullptr && return this->lastModified_ == nullptr && return this->owner_ == nullptr && return this->restoreInfo_ == nullptr
        && return this->size_ == nullptr && return this->storageClass_ == nullptr && return this->type_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // ETag Field Functions 
    bool hasETag() const { return this->ETag_ != nullptr;};
    void deleteETag() { this->ETag_ = nullptr;};
    inline string ETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::DescribeBucketsResponseBodyDataOssObjectListOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::DescribeBucketsResponseBodyDataOssObjectListOwner) };
    inline Models::DescribeBucketsResponseBodyDataOssObjectListOwner owner() { DARABONBA_PTR_GET(owner_, Models::DescribeBucketsResponseBodyDataOssObjectListOwner) };
    inline DescribeBucketsResponseBodyDataOssObjectList& setOwner(const Models::DescribeBucketsResponseBodyDataOssObjectListOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline DescribeBucketsResponseBodyDataOssObjectList& setOwner(Models::DescribeBucketsResponseBodyDataOssObjectListOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // restoreInfo Field Functions 
    bool hasRestoreInfo() const { return this->restoreInfo_ != nullptr;};
    void deleteRestoreInfo() { this->restoreInfo_ = nullptr;};
    inline string restoreInfo() const { DARABONBA_PTR_GET_DEFAULT(restoreInfo_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setRestoreInfo(string restoreInfo) { DARABONBA_PTR_SET_VALUE(restoreInfo_, restoreInfo) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeBucketsResponseBodyDataOssObjectList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBucketsResponseBodyDataOssObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> bucketName_ = nullptr;
    std::shared_ptr<string> ETag_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> lastModified_ = nullptr;
    std::shared_ptr<Models::DescribeBucketsResponseBodyDataOssObjectListOwner> owner_ = nullptr;
    std::shared_ptr<string> restoreInfo_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<string> storageClass_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
