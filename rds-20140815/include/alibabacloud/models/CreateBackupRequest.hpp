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
        && return this->backupRetentionPeriod_ == nullptr && return this->backupStrategy_ == nullptr && return this->backupType_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline CreateBackupRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int64_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0L) };
    inline CreateBackupRequest& setBackupRetentionPeriod(int64_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupStrategy Field Functions 
    bool hasBackupStrategy() const { return this->backupStrategy_ != nullptr;};
    void deleteBackupStrategy() { this->backupStrategy_ = nullptr;};
    inline string backupStrategy() const { DARABONBA_PTR_GET_DEFAULT(backupStrategy_, "") };
    inline CreateBackupRequest& setBackupStrategy(string backupStrategy) { DARABONBA_PTR_SET_VALUE(backupStrategy_, backupStrategy) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateBackupRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateBackupRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateBackupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The backup type of the instance. Valid values:
    // 
    // *   **Logical**: logical backup
    // *   **Physical**: physical backup
    // *   **Snapshot**: snapshot backup
    // 
    // Default value: **Physical**.
    // 
    // > *   You can perform a logical backup only when databases are created on the instance.
    // > *   When you perform a snapshot backup on an ApsaraDB RDS for MariaDB instance, you must set this parameter to **Physical**.
    // > *   For more information about the supported backup types, see [Use the data backup feature](https://help.aliyun.com/document_detail/98818.html).
    // > *   When you perform a snapshot backup on an ApsaraDB RDS for SQL Server instance that uses cloud disks, you must set this parameter to **Snapshot**.
    std::shared_ptr<string> backupMethod_ = nullptr;
    std::shared_ptr<int64_t> backupRetentionPeriod_ = nullptr;
    // The backup policy. Valid values:
    // 
    // *   **db**: a database-level backup.
    // *   **instance**: an instance-level backup.
    // 
    // > You can specify this parameter when you perform a logical backup on an ApsaraDB RDS for MySQL instance. You can also specify this parameter when you perform a full physical backup on an ApsaraDB RDS for SQL Server instance.
    std::shared_ptr<string> backupStrategy_ = nullptr;
    // The backup method. Valid values:
    // 
    // *   **Auto**: full or incremental backup that is automatically selected
    // *   **FullBackup**: full backup
    // 
    // Default value: **Auto**.
    // 
    // > *   You must set this parameter only when the instance runs SQL Server.
    // > *   This parameter is valid only when you set the **BackupMethod** parameter to **Physical**.
    std::shared_ptr<string> backupType_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The names of the databases whose data you want to back up. Separate the names of the databases with commas (,).
    // 
    // > You can specify this parameter when you perform a logical backup on individual databases of an ApsaraDB RDS for MySQL instance. You can also specify this parameter when you perform a full physical backup on individual databases of an ApsaraDB RDS for SQL Server instance.
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
