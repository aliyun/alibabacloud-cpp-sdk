// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLARFSMAPPINGAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLARFSMAPPINGAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyPolarFsMappingAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolarFsMappingAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BucketAccessKeyId, bucketAccessKeyId_);
      DARABONBA_PTR_TO_JSON(BucketAccessKeySecret, bucketAccessKeySecret_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolarFsMappingAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BucketAccessKeyId, bucketAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(BucketAccessKeySecret, bucketAccessKeySecret_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    ModifyPolarFsMappingAuthRequest() = default ;
    ModifyPolarFsMappingAuthRequest(const ModifyPolarFsMappingAuthRequest &) = default ;
    ModifyPolarFsMappingAuthRequest(ModifyPolarFsMappingAuthRequest &&) = default ;
    ModifyPolarFsMappingAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolarFsMappingAuthRequest() = default ;
    ModifyPolarFsMappingAuthRequest& operator=(const ModifyPolarFsMappingAuthRequest &) = default ;
    ModifyPolarFsMappingAuthRequest& operator=(ModifyPolarFsMappingAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && this->bucketAccessKeyId_ == nullptr && this->bucketAccessKeySecret_ == nullptr && this->DBClusterId_ == nullptr && this->path_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline ModifyPolarFsMappingAuthRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // bucketAccessKeyId Field Functions 
    bool hasBucketAccessKeyId() const { return this->bucketAccessKeyId_ != nullptr;};
    void deleteBucketAccessKeyId() { this->bucketAccessKeyId_ = nullptr;};
    inline string getBucketAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(bucketAccessKeyId_, "") };
    inline ModifyPolarFsMappingAuthRequest& setBucketAccessKeyId(string bucketAccessKeyId) { DARABONBA_PTR_SET_VALUE(bucketAccessKeyId_, bucketAccessKeyId) };


    // bucketAccessKeySecret Field Functions 
    bool hasBucketAccessKeySecret() const { return this->bucketAccessKeySecret_ != nullptr;};
    void deleteBucketAccessKeySecret() { this->bucketAccessKeySecret_ = nullptr;};
    inline string getBucketAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(bucketAccessKeySecret_, "") };
    inline ModifyPolarFsMappingAuthRequest& setBucketAccessKeySecret(string bucketAccessKeySecret) { DARABONBA_PTR_SET_VALUE(bucketAccessKeySecret_, bucketAccessKeySecret) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyPolarFsMappingAuthRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyPolarFsMappingAuthRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline ModifyPolarFsMappingAuthRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    // The bucket name.
    // 
    // This parameter is required.
    shared_ptr<string> bucket_ {};
    // The AccessKey ID of the storage bucket.
    // 
    // This parameter is required.
    shared_ptr<string> bucketAccessKeyId_ {};
    // The AccessKey secret of the storage bucket.
    // 
    // This parameter is required.
    shared_ptr<string> bucketAccessKeySecret_ {};
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query information about all clusters in a specified region, including the cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The destination path.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // The PolarFS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
