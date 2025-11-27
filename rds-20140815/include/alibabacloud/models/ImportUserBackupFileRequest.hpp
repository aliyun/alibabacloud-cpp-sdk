// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTUSERBACKUPFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTUSERBACKUPFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ImportUserBackupFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportUserBackupFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupFile, backupFile_);
      DARABONBA_PTR_TO_JSON(BucketRegion, bucketRegion_);
      DARABONBA_PTR_TO_JSON(BuildReplication, buildReplication_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(MasterInfo, masterInfo_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreSize, restoreSize_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SourceInfo, sourceInfo_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportUserBackupFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupFile, backupFile_);
      DARABONBA_PTR_FROM_JSON(BucketRegion, bucketRegion_);
      DARABONBA_PTR_FROM_JSON(BuildReplication, buildReplication_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(MasterInfo, masterInfo_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreSize, restoreSize_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SourceInfo, sourceInfo_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ImportUserBackupFileRequest() = default ;
    ImportUserBackupFileRequest(const ImportUserBackupFileRequest &) = default ;
    ImportUserBackupFileRequest(ImportUserBackupFileRequest &&) = default ;
    ImportUserBackupFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportUserBackupFileRequest() = default ;
    ImportUserBackupFileRequest& operator=(const ImportUserBackupFileRequest &) = default ;
    ImportUserBackupFileRequest& operator=(ImportUserBackupFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupFile_ == nullptr
        && return this->bucketRegion_ == nullptr && return this->buildReplication_ == nullptr && return this->comment_ == nullptr && return this->DBInstanceId_ == nullptr && return this->engineVersion_ == nullptr
        && return this->masterInfo_ == nullptr && return this->mode_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->restoreSize_ == nullptr && return this->retention_ == nullptr && return this->sourceInfo_ == nullptr
        && return this->zoneId_ == nullptr; };
    // backupFile Field Functions 
    bool hasBackupFile() const { return this->backupFile_ != nullptr;};
    void deleteBackupFile() { this->backupFile_ = nullptr;};
    inline string backupFile() const { DARABONBA_PTR_GET_DEFAULT(backupFile_, "") };
    inline ImportUserBackupFileRequest& setBackupFile(string backupFile) { DARABONBA_PTR_SET_VALUE(backupFile_, backupFile) };


    // bucketRegion Field Functions 
    bool hasBucketRegion() const { return this->bucketRegion_ != nullptr;};
    void deleteBucketRegion() { this->bucketRegion_ = nullptr;};
    inline string bucketRegion() const { DARABONBA_PTR_GET_DEFAULT(bucketRegion_, "") };
    inline ImportUserBackupFileRequest& setBucketRegion(string bucketRegion) { DARABONBA_PTR_SET_VALUE(bucketRegion_, bucketRegion) };


    // buildReplication Field Functions 
    bool hasBuildReplication() const { return this->buildReplication_ != nullptr;};
    void deleteBuildReplication() { this->buildReplication_ = nullptr;};
    inline bool buildReplication() const { DARABONBA_PTR_GET_DEFAULT(buildReplication_, false) };
    inline ImportUserBackupFileRequest& setBuildReplication(bool buildReplication) { DARABONBA_PTR_SET_VALUE(buildReplication_, buildReplication) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ImportUserBackupFileRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ImportUserBackupFileRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline ImportUserBackupFileRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // masterInfo Field Functions 
    bool hasMasterInfo() const { return this->masterInfo_ != nullptr;};
    void deleteMasterInfo() { this->masterInfo_ = nullptr;};
    inline string masterInfo() const { DARABONBA_PTR_GET_DEFAULT(masterInfo_, "") };
    inline ImportUserBackupFileRequest& setMasterInfo(string masterInfo) { DARABONBA_PTR_SET_VALUE(masterInfo_, masterInfo) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ImportUserBackupFileRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportUserBackupFileRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportUserBackupFileRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ImportUserBackupFileRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportUserBackupFileRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportUserBackupFileRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreSize Field Functions 
    bool hasRestoreSize() const { return this->restoreSize_ != nullptr;};
    void deleteRestoreSize() { this->restoreSize_ = nullptr;};
    inline int32_t restoreSize() const { DARABONBA_PTR_GET_DEFAULT(restoreSize_, 0) };
    inline ImportUserBackupFileRequest& setRestoreSize(int32_t restoreSize) { DARABONBA_PTR_SET_VALUE(restoreSize_, restoreSize) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ImportUserBackupFileRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // sourceInfo Field Functions 
    bool hasSourceInfo() const { return this->sourceInfo_ != nullptr;};
    void deleteSourceInfo() { this->sourceInfo_ = nullptr;};
    inline string sourceInfo() const { DARABONBA_PTR_GET_DEFAULT(sourceInfo_, "") };
    inline ImportUserBackupFileRequest& setSourceInfo(string sourceInfo) { DARABONBA_PTR_SET_VALUE(sourceInfo_, sourceInfo) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ImportUserBackupFileRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // A JSON array that consists of the information about the full backup file stored as an object in an OSS bucket. Example: `{"Bucket":"test", "Object":"test/test_db_employees.xb","Location":"ap-southeast-1"}`
    // 
    // The JSON array contains the following fields:
    // 
    // *   **Bucket**: The name of the OSS bucket in which the full backup file is stored as an object. You can call the [GetBucket](https://help.aliyun.com/document_detail/31965.html) operation to query the name of the bucket.
    // *   **Object**: The path of the full backup file that is stored as an object in the OSS bucket. You can call the [GetObject](https://help.aliyun.com/document_detail/31980.html) operation to query the path of the object.
    // *   **Location**: The ID of the region in which the OSS bucket is located. You can call the [GetBucketLocation](https://help.aliyun.com/document_detail/31967.html) operation to query the region of the bucket.
    std::shared_ptr<string> backupFile_ = nullptr;
    // The region ID of the OSS bucket where the full backup file of the self-managed MySQL database is located. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> bucketRegion_ = nullptr;
    std::shared_ptr<bool> buildReplication_ = nullptr;
    // The description of the full backup file.
    std::shared_ptr<string> comment_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The version of the database engine that is run on the self-managed MySQL database and ApsaraDB RDS for MySQL instance. Set the value to **5.7**.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> masterInfo_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // > *   The value of this parameter is the ID of the region in which you want to create the instance.
    // > *   The value of this parameter must be consistent with the value of **BucketRegion**.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. You can call the DescribeDBInstanceAttribute operation to query the resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The amount of storage that is required to restore the data of the full backup file. Unit: GB.
    // 
    // > *   The default value of this parameter is 5 times the size of the full backup file.
    // > *   The minimum value of this parameter is 20.
    std::shared_ptr<int32_t> restoreSize_ = nullptr;
    // The retention period of the full backup file. Unit: days. Valid values: any **non-zero** positive integer.
    std::shared_ptr<int32_t> retention_ = nullptr;
    std::shared_ptr<string> sourceInfo_ = nullptr;
    // The zone ID. You can call the DescribeRegions operation to query the zone ID.
    // 
    // > *   If you specify this parameter, the system creates a snapshot in single-digit seconds, which greatly reduces the time that is required to import the full backup file.
    // > *   When you call the CreateDBInstance operation to create an instance by using the full backup file, the instance is created in the zone that you specify for this parameter.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
