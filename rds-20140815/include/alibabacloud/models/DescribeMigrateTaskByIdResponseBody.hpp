// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMigrateTaskByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrateTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsDBReplaced, isDBReplaced_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrateTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsDBReplaced, isDBReplaced_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrateTaskByIdResponseBody() = default ;
    DescribeMigrateTaskByIdResponseBody(const DescribeMigrateTaskByIdResponseBody &) = default ;
    DescribeMigrateTaskByIdResponseBody(DescribeMigrateTaskByIdResponseBody &&) = default ;
    DescribeMigrateTaskByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrateTaskByIdResponseBody() = default ;
    DescribeMigrateTaskByIdResponseBody& operator=(const DescribeMigrateTaskByIdResponseBody &) = default ;
    DescribeMigrateTaskByIdResponseBody& operator=(DescribeMigrateTaskByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && this->createTime_ == nullptr && this->DBInstanceName_ == nullptr && this->DBName_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr
        && this->isDBReplaced_ == nullptr && this->migrateTaskId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isDBReplaced Field Functions 
    bool hasIsDBReplaced() const { return this->isDBReplaced_ != nullptr;};
    void deleteIsDBReplaced() { this->isDBReplaced_ = nullptr;};
    inline string getIsDBReplaced() const { DARABONBA_PTR_GET_DEFAULT(isDBReplaced_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setIsDBReplaced(string isDBReplaced) { DARABONBA_PTR_SET_VALUE(isDBReplaced_, isDBReplaced) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string getMigrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrateTaskByIdResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The type of the migration task. Valid values:
    // 
    // *   **FULL**: The migration task migrates full backup files that can be used to restore the full data of the instance.
    // *   **UPDF**: The migration task migrates incremental or log backup files that can be used to restore the incremental data of the instance.
    shared_ptr<string> backupMode_ {};
    // The time when the migration task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceName_ {};
    // The name of the database.
    shared_ptr<string> DBName_ {};
    // The description of the migration task.
    shared_ptr<string> description_ {};
    // The time when the migration task was completed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // Indicates whether the imported data overwrites the existing data. Valid values:
    // 
    // *   **False**: The imported data does not overwrite the existing data.
    // *   **True**: The imported data overwrites the existing data.
    shared_ptr<string> isDBReplaced_ {};
    // The ID of the migration task.
    shared_ptr<string> migrateTaskId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the migration task. Valid values:
    // 
    // *   **NoStart**: The task has not started.
    // *   **Running**:The task is in progress.
    // *   **Success**: The task is successful.
    // *   **Failed**: The task failed.
    // *   **Waiting**: The task is waiting for an incremental backup file to be imported.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
