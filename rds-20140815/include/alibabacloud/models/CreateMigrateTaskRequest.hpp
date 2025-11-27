// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMIGRATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMIGRATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateMigrateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMigrateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(IsOnlineDB, isOnlineDB_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(OSSUrls, OSSUrls_);
      DARABONBA_PTR_TO_JSON(OssObjectPositions, ossObjectPositions_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMigrateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CheckDBMode, checkDBMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(IsOnlineDB, isOnlineDB_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(OSSUrls, OSSUrls_);
      DARABONBA_PTR_FROM_JSON(OssObjectPositions, ossObjectPositions_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateMigrateTaskRequest() = default ;
    CreateMigrateTaskRequest(const CreateMigrateTaskRequest &) = default ;
    CreateMigrateTaskRequest(CreateMigrateTaskRequest &&) = default ;
    CreateMigrateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMigrateTaskRequest() = default ;
    CreateMigrateTaskRequest& operator=(const CreateMigrateTaskRequest &) = default ;
    CreateMigrateTaskRequest& operator=(CreateMigrateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->checkDBMode_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr && return this->isOnlineDB_ == nullptr && return this->migrateTaskId_ == nullptr
        && return this->OSSUrls_ == nullptr && return this->ossObjectPositions_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline CreateMigrateTaskRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // checkDBMode Field Functions 
    bool hasCheckDBMode() const { return this->checkDBMode_ != nullptr;};
    void deleteCheckDBMode() { this->checkDBMode_ = nullptr;};
    inline string checkDBMode() const { DARABONBA_PTR_GET_DEFAULT(checkDBMode_, "") };
    inline CreateMigrateTaskRequest& setCheckDBMode(string checkDBMode) { DARABONBA_PTR_SET_VALUE(checkDBMode_, checkDBMode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateMigrateTaskRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateMigrateTaskRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // isOnlineDB Field Functions 
    bool hasIsOnlineDB() const { return this->isOnlineDB_ != nullptr;};
    void deleteIsOnlineDB() { this->isOnlineDB_ = nullptr;};
    inline string isOnlineDB() const { DARABONBA_PTR_GET_DEFAULT(isOnlineDB_, "") };
    inline CreateMigrateTaskRequest& setIsOnlineDB(string isOnlineDB) { DARABONBA_PTR_SET_VALUE(isOnlineDB_, isOnlineDB) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string migrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline CreateMigrateTaskRequest& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // OSSUrls Field Functions 
    bool hasOSSUrls() const { return this->OSSUrls_ != nullptr;};
    void deleteOSSUrls() { this->OSSUrls_ = nullptr;};
    inline string OSSUrls() const { DARABONBA_PTR_GET_DEFAULT(OSSUrls_, "") };
    inline CreateMigrateTaskRequest& setOSSUrls(string OSSUrls) { DARABONBA_PTR_SET_VALUE(OSSUrls_, OSSUrls) };


    // ossObjectPositions Field Functions 
    bool hasOssObjectPositions() const { return this->ossObjectPositions_ != nullptr;};
    void deleteOssObjectPositions() { this->ossObjectPositions_ = nullptr;};
    inline string ossObjectPositions() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPositions_, "") };
    inline CreateMigrateTaskRequest& setOssObjectPositions(string ossObjectPositions) { DARABONBA_PTR_SET_VALUE(ossObjectPositions_, ossObjectPositions) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMigrateTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMigrateTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMigrateTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The type of the migration task. Valid values:
    // 
    // *   **FULL**: The migration task migrates full backup files.
    // *   **UPDF**: The migration task migrates incremental or log backup files.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupMode_ = nullptr;
    // The consistency check method for the database. Valid values:
    // 
    // *   **SyncExecuteDBCheck**: synchronous database check
    // *   **AsyncExecuteDBCheck**: asynchronous database check
    // 
    // Default value: **AsyncExecuteDBCheck** (compatible with SQL Server 2008 R2)
    // 
    // >  This parameter is valid when **IsOnlineDB** is set to **True**.
    std::shared_ptr<string> checkDBMode_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the destination database.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBName_ = nullptr;
    // Specifies whether to make the restored database data available for user access. Valid values:
    // 
    // *   **True**
    // *   **False**
    // 
    // >  Set the value to **True** for instances that run SQL Server 2008 R2.
    // 
    // This parameter is required.
    std::shared_ptr<string> isOnlineDB_ = nullptr;
    // The migration task ID.
    // 
    // *   If you set **BackupMode** to **FULL**, the value of this parameter is empty. The full backup mode is compatible with instance that runs SQL Server 2008 R2.
    // *   If you set **BackupMode** to **UPDF**, the value of this parameter is the ID of the required full migration task.
    // 
    // > *   If you set **IsOnlineDB** to **True**, the value of **BackupMode** must be **FULL**.
    // > *   If you set **IsOnlineDB** to **False**, the value of **BackupMode** must be **UPDF**.
    std::shared_ptr<string> migrateTaskId_ = nullptr;
    // The shared URL of the backup file in the OSS bucket. The URL must be encoded.
    // 
    // If you specify multiple URLs, separate them with vertical bars (|) and then encode them.
    // 
    // >  This parameter is required for instances that run SQL Server 2008 R2.
    std::shared_ptr<string> OSSUrls_ = nullptr;
    // The information about the backup file in the OSS bucket. The values consist of three parts that are separated by colons (:):
    // 
    // *   OSS endpoint: oss-ap-southeast-1.aliyuncs.com.
    // *   Name of the OSS bucket: rdsmssqlsingapore.
    // *   Key of the backup file in the OSS bucket: autotest_2008R2_TestMigration_FULL.bak.
    // 
    // > *   This parameter is optional for instances that run SQL Server 2008 R2.
    // > *   This parameter is required for instances that run a major engine version later than SQL Server 2008 R2.
    std::shared_ptr<string> ossObjectPositions_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
