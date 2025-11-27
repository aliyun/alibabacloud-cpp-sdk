// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMSBACKUPJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMSBACKUPJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeBackupTasksResponseBodyItemsBackupJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(BackupProgressStatus, backupProgressStatus_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(BackupProgressStatus, backupProgressStatus_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
    };
    DescribeBackupTasksResponseBodyItemsBackupJob() = default ;
    DescribeBackupTasksResponseBodyItemsBackupJob(const DescribeBackupTasksResponseBodyItemsBackupJob &) = default ;
    DescribeBackupTasksResponseBodyItemsBackupJob(DescribeBackupTasksResponseBodyItemsBackupJob &&) = default ;
    DescribeBackupTasksResponseBodyItemsBackupJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTasksResponseBodyItemsBackupJob() = default ;
    DescribeBackupTasksResponseBodyItemsBackupJob& operator=(const DescribeBackupTasksResponseBodyItemsBackupJob &) = default ;
    DescribeBackupTasksResponseBodyItemsBackupJob& operator=(DescribeBackupTasksResponseBodyItemsBackupJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->backupJobId_ == nullptr && return this->backupProgressStatus_ == nullptr && return this->backupStatus_ == nullptr && return this->jobMode_ == nullptr && return this->process_ == nullptr
        && return this->taskAction_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline string backupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // backupProgressStatus Field Functions 
    bool hasBackupProgressStatus() const { return this->backupProgressStatus_ != nullptr;};
    void deleteBackupProgressStatus() { this->backupProgressStatus_ = nullptr;};
    inline string backupProgressStatus() const { DARABONBA_PTR_GET_DEFAULT(backupProgressStatus_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setBackupProgressStatus(string backupProgressStatus) { DARABONBA_PTR_SET_VALUE(backupProgressStatus_, backupProgressStatus) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // jobMode Field Functions 
    bool hasJobMode() const { return this->jobMode_ != nullptr;};
    void deleteJobMode() { this->jobMode_ = nullptr;};
    inline string jobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


  protected:
    // The ID of the backup set that is generated by the backup task.
    // 
    // >  If the value of the **BackupStatus** parameter is **Finished**, you can view the backup set ID only if you configure the **BackupJobId** parameter.
    std::shared_ptr<string> backupId_ = nullptr;
    // The ID of the backup task.
    std::shared_ptr<string> backupJobId_ = nullptr;
    // The status of the backup program. Valid values:
    // 
    // *   **NoStart**
    // *   **Preparing**
    // *   **Waiting**
    // *   **Uploading**
    // *   **Checking**
    // *   **Finished**
    std::shared_ptr<string> backupProgressStatus_ = nullptr;
    // The status of the backup task. Valid values:
    // 
    // *   **NoStart**
    // *   **Checking**
    // *   **Preparing**
    // *   **Waiting**
    // *   **Uploading**
    // *   **Finished**
    // *   **Failed**
    // 
    // >  This parameter is returned only after a backup task is run.
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> jobMode_ = nullptr;
    // The progress of the task in percentage.
    std::shared_ptr<string> process_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **TempBackupTask**: The backup task is an adhoc backup task.
    // *   **NormalBackupTask**: The backup task is a common backup task.
    std::shared_ptr<string> taskAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
