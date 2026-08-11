// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTSTORAGELOCATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTSTORAGELOCATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetDefaultStorageLocationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultStorageLocationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultStorageLocationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    SetDefaultStorageLocationRequest() = default ;
    SetDefaultStorageLocationRequest(const SetDefaultStorageLocationRequest &) = default ;
    SetDefaultStorageLocationRequest(SetDefaultStorageLocationRequest &&) = default ;
    SetDefaultStorageLocationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultStorageLocationRequest() = default ;
    SetDefaultStorageLocationRequest& operator=(const SetDefaultStorageLocationRequest &) = default ;
    SetDefaultStorageLocationRequest& operator=(SetDefaultStorageLocationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && this->path_ == nullptr && this->storageType_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline SetDefaultStorageLocationRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline SetDefaultStorageLocationRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline SetDefaultStorageLocationRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The name of the OSS bucket that you created.
    shared_ptr<string> bucket_ {};
    // - When StorageType is set to user_oss_bucket, temporary files are stored in this path. If the path is empty or set to /, files are stored in the root directory.
    // - This field does not take effect for VOD storage.
    shared_ptr<string> path_ {};
    // The storage type. Valid values:
    // - vod_oss_bucket: VOD-managed bucket. You can add VOD system buckets and your own OSS buckets that have been added to the VOD system. If no bucket is available, you can create a bucket in the ApsaraVideo VOD console. The ApsaraVideo VOD system assigns a storage address in each storage region. After you activate ApsaraVideo VOD, you must enable the address before you can use it. For more information, see [Manage storage buckets](https://help.aliyun.com/document_detail/86097.html).
    // - user_oss_bucket: user-owned private bucket. Before adding an OSS storage address, you must activate OSS and create a storage bucket. For more information, see [Create a bucket in the console](https://help.aliyun.com/document_detail/31885.html).
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
