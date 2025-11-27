// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDATABASEBETWEENINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYDATABASEBETWEENINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CopyDatabaseBetweenInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDatabaseBetweenInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(SyncUserPrivilege, syncUserPrivilege_);
      DARABONBA_PTR_TO_JSON(TargetDBInstanceId, targetDBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDatabaseBetweenInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(SyncUserPrivilege, syncUserPrivilege_);
      DARABONBA_PTR_FROM_JSON(TargetDBInstanceId, targetDBInstanceId_);
    };
    CopyDatabaseBetweenInstancesRequest() = default ;
    CopyDatabaseBetweenInstancesRequest(const CopyDatabaseBetweenInstancesRequest &) = default ;
    CopyDatabaseBetweenInstancesRequest(CopyDatabaseBetweenInstancesRequest &&) = default ;
    CopyDatabaseBetweenInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDatabaseBetweenInstancesRequest() = default ;
    CopyDatabaseBetweenInstancesRequest& operator=(const CopyDatabaseBetweenInstancesRequest &) = default ;
    CopyDatabaseBetweenInstancesRequest& operator=(CopyDatabaseBetweenInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->dbNames_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->restoreTime_ == nullptr && return this->syncUserPrivilege_ == nullptr
        && return this->targetDBInstanceId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CopyDatabaseBetweenInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // syncUserPrivilege Field Functions 
    bool hasSyncUserPrivilege() const { return this->syncUserPrivilege_ != nullptr;};
    void deleteSyncUserPrivilege() { this->syncUserPrivilege_ = nullptr;};
    inline string syncUserPrivilege() const { DARABONBA_PTR_GET_DEFAULT(syncUserPrivilege_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setSyncUserPrivilege(string syncUserPrivilege) { DARABONBA_PTR_SET_VALUE(syncUserPrivilege_, syncUserPrivilege) };


    // targetDBInstanceId Field Functions 
    bool hasTargetDBInstanceId() const { return this->targetDBInstanceId_ != nullptr;};
    void deleteTargetDBInstanceId() { this->targetDBInstanceId_ = nullptr;};
    inline string targetDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetDBInstanceId_, "") };
    inline CopyDatabaseBetweenInstancesRequest& setTargetDBInstanceId(string targetDBInstanceId) { DARABONBA_PTR_SET_VALUE(targetDBInstanceId_, targetDBInstanceId) };


  protected:
    // The ID of the backup set based on which you want to restore databases of the source instance. When you replicate databases by backup set, you can call the DescribeBackups operation to obtain the ID of the backup set.
    // 
    // >  You must specify one of the **BackupId** and **RestoreTime** parameters.
    std::shared_ptr<string> backupId_ = nullptr;
    // The source instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The names of the databases that you want to copy. Format: `Source database name 1,Source database name 2`.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbNames_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The point in time when the system replicates databases. You can select a point in time within the backup retention period. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > You must specify one of the **BackupId** and **RestoreTime** parameters.
    std::shared_ptr<string> restoreTime_ = nullptr;
    // Specifies whether to copy users and permissions.
    // 
    // *   **YES**: copies users and permissions. If the destination instance has a user whose name is the same as a user in the source instance, the permissions of the user in the source instance will also be granted to the user in the destination instance after you copy user permissions.
    // *   **NO**: does not copy users and permissions.
    // 
    // Default value: **NO**.
    std::shared_ptr<string> syncUserPrivilege_ = nullptr;
    // The destination instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetDBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
