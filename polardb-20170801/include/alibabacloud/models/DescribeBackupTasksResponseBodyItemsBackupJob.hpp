// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMSBACKUPJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODYITEMSBACKUPJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupTasksResponseBodyItemsBackupJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(BackupProgressStatus, backupProgressStatus_);
      DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(BackupProgressStatus, backupProgressStatus_);
      DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
    virtual bool empty() const override { return this->backupJobId_ == nullptr
        && return this->backupProgressStatus_ == nullptr && return this->jobMode_ == nullptr && return this->process_ == nullptr && return this->startTime_ == nullptr && return this->taskAction_ == nullptr; };
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


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeBackupTasksResponseBodyItemsBackupJob& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


  protected:
    // The ID of the backup task.
    std::shared_ptr<string> backupJobId_ = nullptr;
    // The state of the backup task. Valid values:
    // 
    // *   **NoStart**
    // *   **Preparing**
    // *   **Waiting**
    // *   **Uploading**
    // *   **Checking**
    // *   **Finished**
    std::shared_ptr<string> backupProgressStatus_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> jobMode_ = nullptr;
    // The progress of the backup task in percentage.
    std::shared_ptr<string> process_ = nullptr;
    // The time when the backup task started. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The type of the backup task. Valid values:
    // 
    // *   **TempBackupTask**: The backup task is an adhoc backup task.
    // *   **NormalBackupTask**: The backup task is a common backup task.
    std::shared_ptr<string> taskAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
