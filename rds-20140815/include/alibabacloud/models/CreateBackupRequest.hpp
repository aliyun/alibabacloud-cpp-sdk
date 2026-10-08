// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupStrategy, backupStrategy_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupStrategy, backupStrategy_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateBackupRequest() = default ;
    CreateBackupRequest(const CreateBackupRequest &) = default ;
    CreateBackupRequest(CreateBackupRequest &&) = default ;
    CreateBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupRequest() = default ;
    CreateBackupRequest& operator=(const CreateBackupRequest &) = default ;
    CreateBackupRequest& operator=(CreateBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMethod_ == nullptr
        && this->backupRetentionPeriod_ == nullptr && this->backupStrategy_ == nullptr && this->backupType_ == nullptr && this->DBInstanceId_ == nullptr && this->DBName_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline CreateBackupRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int64_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0L) };
    inline CreateBackupRequest& setBackupRetentionPeriod(int64_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupStrategy Field Functions 
    bool hasBackupStrategy() const { return this->backupStrategy_ != nullptr;};
    void deleteBackupStrategy() { this->backupStrategy_ = nullptr;};
    inline string getBackupStrategy() const { DARABONBA_PTR_GET_DEFAULT(backupStrategy_, "") };
    inline CreateBackupRequest& setBackupStrategy(string backupStrategy) { DARABONBA_PTR_SET_VALUE(backupStrategy_, backupStrategy) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateBackupRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateBackupRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateBackupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The backup type. Valid values:
    // * **Logical**: logical backup. Only MySQL instances with local disks support this type.
    // * **Physical**: physical backup. MySQL instances with local disks, SQL Server instances, and PostgreSQL instances support this type.
    // * **Snapshot**: snapshot backup. MySQL instances with cloud disks, SQL Server instances, PostgreSQL instances, and MariaDB instances support this type.
    // 
    // Default value: **Physical**.
    // 
    // > * When you use logical backup, the database must contain data (the data cannot be empty).
    // > * MariaDB instances support only snapshot backup. However, set this parameter to **Physical**.
    shared_ptr<string> backupMethod_ {};
    // - **SQL Server**: When the BackupStrategy parameter is set to db, the BackupMethod parameter is set to Physical, and the BackupType parameter is set to FullBackup, you can specify the retention period of the backup set. Valid values: 7 to 730 days, or -1 (long-term retention (LTR)).
    // - **MySQL**: You can specify the retention period of the backup set. Valid values: 7 to 730 days, or -1 (long-term retention (LTR)).
    shared_ptr<int64_t> backupRetentionPeriod_ {};
    // The backup strategy. Valid values:
    // * **db**: single-database backup
    // * **instance**: instance backup
    // 
    // > This parameter takes effect only when the following conditions are met:
    // > - MySQL: The **BackupMethod** parameter is set to **Logical**.
    // > - SQL Server: The **BackupType** parameter is set to **FullBackup**.
    shared_ptr<string> backupStrategy_ {};
    // The backup method for SQL Server instances. Valid values:
    // * **Auto** (default): automatically selects full backup or incremental backup.
    // * **FullBackup**: full backup.
    // 
    // > This parameter takes effect only when the **BackupMethod** parameter is set to **Physical**.
    shared_ptr<string> backupType_ {};
    // The instance ID. You can call DescribeDBInstances to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The list of databases. Separate multiple databases with commas (,).
    // > This parameter takes effect only when the **BackupStrategy** parameter is set to **db**.
    shared_ptr<string> DBName_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
