// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOWNLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOWNLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class CreateDownloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDownloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminDatabase, adminDatabase_);
      DARABONBA_PTR_TO_JSON(BakSetId, bakSetId_);
      DARABONBA_PTR_TO_JSON(BakSetSize, bakSetSize_);
      DARABONBA_PTR_TO_JSON(BakSetType, bakSetType_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DownloadPointInTime, downloadPointInTime_);
      DARABONBA_PTR_TO_JSON(FormatType, formatType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsCluster, isCluster_);
      DARABONBA_PTR_TO_JSON(IsPhysical, isPhysical_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyTypeOnly, primaryKeyTypeOnly_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_TO_JSON(TargetOssRegion, targetOssRegion_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UseZstd, useZstd_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDownloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminDatabase, adminDatabase_);
      DARABONBA_PTR_FROM_JSON(BakSetId, bakSetId_);
      DARABONBA_PTR_FROM_JSON(BakSetSize, bakSetSize_);
      DARABONBA_PTR_FROM_JSON(BakSetType, bakSetType_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DownloadPointInTime, downloadPointInTime_);
      DARABONBA_PTR_FROM_JSON(FormatType, formatType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsCluster, isCluster_);
      DARABONBA_PTR_FROM_JSON(IsPhysical, isPhysical_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyTypeOnly, primaryKeyTypeOnly_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_FROM_JSON(TargetOssRegion, targetOssRegion_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UseZstd, useZstd_);
    };
    CreateDownloadRequest() = default ;
    CreateDownloadRequest(const CreateDownloadRequest &) = default ;
    CreateDownloadRequest(CreateDownloadRequest &&) = default ;
    CreateDownloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDownloadRequest() = default ;
    CreateDownloadRequest& operator=(const CreateDownloadRequest &) = default ;
    CreateDownloadRequest& operator=(CreateDownloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminDatabase_ == nullptr
        && this->bakSetId_ == nullptr && this->bakSetSize_ == nullptr && this->bakSetType_ == nullptr && this->clusterName_ == nullptr && this->downloadPointInTime_ == nullptr
        && this->formatType_ == nullptr && this->instanceName_ == nullptr && this->isCluster_ == nullptr && this->isPhysical_ == nullptr && this->primaryKeyTypeOnly_ == nullptr
        && this->regionCode_ == nullptr && this->targetBucket_ == nullptr && this->targetOssRegion_ == nullptr && this->targetPath_ == nullptr && this->targetType_ == nullptr
        && this->useZstd_ == nullptr; };
    // adminDatabase Field Functions 
    bool hasAdminDatabase() const { return this->adminDatabase_ != nullptr;};
    void deleteAdminDatabase() { this->adminDatabase_ = nullptr;};
    inline string getAdminDatabase() const { DARABONBA_PTR_GET_DEFAULT(adminDatabase_, "") };
    inline CreateDownloadRequest& setAdminDatabase(string adminDatabase) { DARABONBA_PTR_SET_VALUE(adminDatabase_, adminDatabase) };


    // bakSetId Field Functions 
    bool hasBakSetId() const { return this->bakSetId_ != nullptr;};
    void deleteBakSetId() { this->bakSetId_ = nullptr;};
    inline string getBakSetId() const { DARABONBA_PTR_GET_DEFAULT(bakSetId_, "") };
    inline CreateDownloadRequest& setBakSetId(string bakSetId) { DARABONBA_PTR_SET_VALUE(bakSetId_, bakSetId) };


    // bakSetSize Field Functions 
    bool hasBakSetSize() const { return this->bakSetSize_ != nullptr;};
    void deleteBakSetSize() { this->bakSetSize_ = nullptr;};
    inline string getBakSetSize() const { DARABONBA_PTR_GET_DEFAULT(bakSetSize_, "") };
    inline CreateDownloadRequest& setBakSetSize(string bakSetSize) { DARABONBA_PTR_SET_VALUE(bakSetSize_, bakSetSize) };


    // bakSetType Field Functions 
    bool hasBakSetType() const { return this->bakSetType_ != nullptr;};
    void deleteBakSetType() { this->bakSetType_ = nullptr;};
    inline string getBakSetType() const { DARABONBA_PTR_GET_DEFAULT(bakSetType_, "") };
    inline CreateDownloadRequest& setBakSetType(string bakSetType) { DARABONBA_PTR_SET_VALUE(bakSetType_, bakSetType) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateDownloadRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // downloadPointInTime Field Functions 
    bool hasDownloadPointInTime() const { return this->downloadPointInTime_ != nullptr;};
    void deleteDownloadPointInTime() { this->downloadPointInTime_ = nullptr;};
    inline string getDownloadPointInTime() const { DARABONBA_PTR_GET_DEFAULT(downloadPointInTime_, "") };
    inline CreateDownloadRequest& setDownloadPointInTime(string downloadPointInTime) { DARABONBA_PTR_SET_VALUE(downloadPointInTime_, downloadPointInTime) };


    // formatType Field Functions 
    bool hasFormatType() const { return this->formatType_ != nullptr;};
    void deleteFormatType() { this->formatType_ = nullptr;};
    inline string getFormatType() const { DARABONBA_PTR_GET_DEFAULT(formatType_, "") };
    inline CreateDownloadRequest& setFormatType(string formatType) { DARABONBA_PTR_SET_VALUE(formatType_, formatType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateDownloadRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isCluster Field Functions 
    bool hasIsCluster() const { return this->isCluster_ != nullptr;};
    void deleteIsCluster() { this->isCluster_ = nullptr;};
    inline string getIsCluster() const { DARABONBA_PTR_GET_DEFAULT(isCluster_, "") };
    inline CreateDownloadRequest& setIsCluster(string isCluster) { DARABONBA_PTR_SET_VALUE(isCluster_, isCluster) };


    // isPhysical Field Functions 
    bool hasIsPhysical() const { return this->isPhysical_ != nullptr;};
    void deleteIsPhysical() { this->isPhysical_ = nullptr;};
    inline bool getIsPhysical() const { DARABONBA_PTR_GET_DEFAULT(isPhysical_, false) };
    inline CreateDownloadRequest& setIsPhysical(bool isPhysical) { DARABONBA_PTR_SET_VALUE(isPhysical_, isPhysical) };


    // primaryKeyTypeOnly Field Functions 
    bool hasPrimaryKeyTypeOnly() const { return this->primaryKeyTypeOnly_ != nullptr;};
    void deletePrimaryKeyTypeOnly() { this->primaryKeyTypeOnly_ = nullptr;};
    inline string getPrimaryKeyTypeOnly() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyTypeOnly_, "") };
    inline CreateDownloadRequest& setPrimaryKeyTypeOnly(string primaryKeyTypeOnly) { DARABONBA_PTR_SET_VALUE(primaryKeyTypeOnly_, primaryKeyTypeOnly) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline CreateDownloadRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // targetBucket Field Functions 
    bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
    void deleteTargetBucket() { this->targetBucket_ = nullptr;};
    inline string getTargetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
    inline CreateDownloadRequest& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


    // targetOssRegion Field Functions 
    bool hasTargetOssRegion() const { return this->targetOssRegion_ != nullptr;};
    void deleteTargetOssRegion() { this->targetOssRegion_ = nullptr;};
    inline string getTargetOssRegion() const { DARABONBA_PTR_GET_DEFAULT(targetOssRegion_, "") };
    inline CreateDownloadRequest& setTargetOssRegion(string targetOssRegion) { DARABONBA_PTR_SET_VALUE(targetOssRegion_, targetOssRegion) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline CreateDownloadRequest& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateDownloadRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // useZstd Field Functions 
    bool hasUseZstd() const { return this->useZstd_ != nullptr;};
    void deleteUseZstd() { this->useZstd_ = nullptr;};
    inline string getUseZstd() const { DARABONBA_PTR_GET_DEFAULT(useZstd_, "") };
    inline CreateDownloadRequest& setUseZstd(string useZstd) { DARABONBA_PTR_SET_VALUE(useZstd_, useZstd) };


  protected:
    shared_ptr<string> adminDatabase_ {};
    // The ID of the backup set. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the ID of the backup set.
    // 
    // > This parameter is required if the BakSetType parameter is set to full.
    shared_ptr<string> bakSetId_ {};
    // The size of the full backup set. Unit: bytes. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/26273.html) operation to query the size of the full backup set.
    shared_ptr<string> bakSetSize_ {};
    // The type of the download task. Valid values:
    // 
    // *   **full**: downloads a full backup set.
    // *   **pitr**: downloads a backup set at a specific point in time.
    shared_ptr<string> bakSetType_ {};
    shared_ptr<string> clusterName_ {};
    // The point in time at which the backup set is downloaded. Specify a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > This parameter is required if the BakSetType parameter is set to pitr.
    shared_ptr<string> downloadPointInTime_ {};
    // The format to which the downloaded backup set is converted. Valid values:
    // 
    // *   **CSV**
    // *   **SQL**
    // *   **Parquet**
    // 
    // > This parameter is required.
    shared_ptr<string> formatType_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> isCluster_ {};
    shared_ptr<bool> isPhysical_ {};
    shared_ptr<string> primaryKeyTypeOnly_ {};
    // The ID of the region in which the instance resides. You can call the [DescribeDBInstanceAttribute](https://help.aliyun.com/document_detail/26231.html) operation to query the region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionCode_ {};
    // The name of the OSS bucket that is used to store the backup set.
    // 
    // *   This parameter is required if the TargetType parameter is set to OSS.
    // *   Make sure that your account is granted the **AliyunDBSDefaultRole** permission. For more information, see [Use RAM for resource authorization](https://help.aliyun.com/document_detail/26307.html). You can also grant permissions based on the operation instructions in the Resource Access Management (RAM) console.
    shared_ptr<string> targetBucket_ {};
    // The region in which the OSS bucket resides.
    // 
    // > This parameter is required if the TargetType parameter is set to OSS.
    shared_ptr<string> targetOssRegion_ {};
    // The destination path to which the backup set is downloaded.
    // 
    // > This parameter is required if the TargetType parameter is set to OSS.
    shared_ptr<string> targetPath_ {};
    // The type of the destination to which the backup set is downloaded. Valid values:
    // 
    // *   **OSS**
    // *   **URL**
    shared_ptr<string> targetType_ {};
    shared_ptr<string> useZstd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
