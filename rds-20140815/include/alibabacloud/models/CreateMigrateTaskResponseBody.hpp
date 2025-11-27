// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMIGRATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMIGRATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateMigrateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMigrateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMigrateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateMigrateTaskResponseBody() = default ;
    CreateMigrateTaskResponseBody(const CreateMigrateTaskResponseBody &) = default ;
    CreateMigrateTaskResponseBody(CreateMigrateTaskResponseBody &&) = default ;
    CreateMigrateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMigrateTaskResponseBody() = default ;
    CreateMigrateTaskResponseBody& operator=(const CreateMigrateTaskResponseBody &) = default ;
    CreateMigrateTaskResponseBody& operator=(CreateMigrateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr && return this->migrateTaskId_ == nullptr && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline CreateMigrateTaskResponseBody& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateMigrateTaskResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateMigrateTaskResponseBody& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string migrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline CreateMigrateTaskResponseBody& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMigrateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateMigrateTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The type of the migration task. Valid values:
    // 
    // *   **FULL**: The migration task migrates full backup files.
    // *   **UPDF**: The migration task migrates incremental or log backup files.
    std::shared_ptr<string> backupMode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The ID of the migration task.
    std::shared_ptr<string> migrateTaskId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
