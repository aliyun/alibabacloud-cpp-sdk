// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODYITEMSMIGRATETASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATETASKSRESPONSEBODYITEMSMIGRATETASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMigrateTasksResponseBodyItemsMigrateTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrateTasksResponseBodyItemsMigrateTask& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsDBReplaced, isDBReplaced_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrateTasksResponseBodyItemsMigrateTask& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsDBReplaced, isDBReplaced_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrateTasksResponseBodyItemsMigrateTask() = default ;
    DescribeMigrateTasksResponseBodyItemsMigrateTask(const DescribeMigrateTasksResponseBodyItemsMigrateTask &) = default ;
    DescribeMigrateTasksResponseBodyItemsMigrateTask(DescribeMigrateTasksResponseBodyItemsMigrateTask &&) = default ;
    DescribeMigrateTasksResponseBodyItemsMigrateTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrateTasksResponseBodyItemsMigrateTask() = default ;
    DescribeMigrateTasksResponseBodyItemsMigrateTask& operator=(const DescribeMigrateTasksResponseBodyItemsMigrateTask &) = default ;
    DescribeMigrateTasksResponseBodyItemsMigrateTask& operator=(DescribeMigrateTasksResponseBodyItemsMigrateTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->createTime_ == nullptr && return this->DBName_ == nullptr && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->isDBReplaced_ == nullptr
        && return this->migrateTaskId_ == nullptr && return this->status_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isDBReplaced Field Functions 
    bool hasIsDBReplaced() const { return this->isDBReplaced_ != nullptr;};
    void deleteIsDBReplaced() { this->isDBReplaced_ = nullptr;};
    inline string isDBReplaced() const { DARABONBA_PTR_GET_DEFAULT(isDBReplaced_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setIsDBReplaced(string isDBReplaced) { DARABONBA_PTR_SET_VALUE(isDBReplaced_, isDBReplaced) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string migrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrateTasksResponseBodyItemsMigrateTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The migration task type. Valid values:
    // 
    // *   **FULL**: The migration task migrates full backup files that can be used to restore the full data of the instance.
    // *   **UPDF**: The migration task migrates incremental or log backup files that can be used to restore the incremental data of the instance.
    std::shared_ptr<string> backupMode_ = nullptr;
    // The time when the migration task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // The description of the migration task.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the migration task was completed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates whether the imported data overwrites the existing data.
    std::shared_ptr<string> isDBReplaced_ = nullptr;
    // The migration task ID.
    std::shared_ptr<string> migrateTaskId_ = nullptr;
    // The status of the migration task. Valid values:
    // 
    // *   **NoStart**: The task is not started.
    // *   **Running**:The task is in progress.
    // *   **Success**: The task is successful.
    // *   **Failed**: The task failed.
    // *   **Waiting**: The task is waiting for an incremental backup file to be imported.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
