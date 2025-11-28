// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODYITEMSBACKUPJOB_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODYITEMSBACKUPJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBackupJobsResponseBodyItemsBackupJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupJobsResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupJobsResponseBodyItemsBackupJob& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListBackupJobsResponseBodyItemsBackupJob() = default ;
    ListBackupJobsResponseBodyItemsBackupJob(const ListBackupJobsResponseBodyItemsBackupJob &) = default ;
    ListBackupJobsResponseBodyItemsBackupJob(ListBackupJobsResponseBodyItemsBackupJob &&) = default ;
    ListBackupJobsResponseBodyItemsBackupJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupJobsResponseBodyItemsBackupJob() = default ;
    ListBackupJobsResponseBodyItemsBackupJob& operator=(const ListBackupJobsResponseBodyItemsBackupJob &) = default ;
    ListBackupJobsResponseBodyItemsBackupJob& operator=(ListBackupJobsResponseBodyItemsBackupJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJobId_ == nullptr
        && return this->backupMode_ == nullptr && return this->backupStatus_ == nullptr && return this->process_ == nullptr && return this->startTime_ == nullptr; };
    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline string backupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
    inline ListBackupJobsResponseBodyItemsBackupJob& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ListBackupJobsResponseBodyItemsBackupJob& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline ListBackupJobsResponseBodyItemsBackupJob& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline ListBackupJobsResponseBodyItemsBackupJob& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListBackupJobsResponseBodyItemsBackupJob& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The backup job ID.
    std::shared_ptr<string> backupJobId_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> backupMode_ = nullptr;
    // The backup status. Valid values:
    // 
    // *   **Success**
    // *   **Failure**
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The progress of the backup job.
    std::shared_ptr<string> process_ = nullptr;
    // The time when the backup job started. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
