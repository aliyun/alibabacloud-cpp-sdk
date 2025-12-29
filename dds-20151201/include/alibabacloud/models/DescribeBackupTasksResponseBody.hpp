// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeBackupTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody(DescribeBackupTasksResponseBody &&) = default ;
    DescribeBackupTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTasksResponseBody() = default ;
    DescribeBackupTasksResponseBody& operator=(const DescribeBackupTasksResponseBody &) = default ;
    DescribeBackupTasksResponseBody& operator=(DescribeBackupTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupJobs& obj) { 
        DARABONBA_PTR_TO_JSON(BackupSetStatus, backupSetStatus_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupjobId, backupjobId_);
        DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, BackupJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupSetStatus, backupSetStatus_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupjobId, backupjobId_);
        DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
      };
      BackupJobs() = default ;
      BackupJobs(const BackupJobs &) = default ;
      BackupJobs(BackupJobs &&) = default ;
      BackupJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupJobs() = default ;
      BackupJobs& operator=(const BackupJobs &) = default ;
      BackupJobs& operator=(BackupJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupSetStatus_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupjobId_ == nullptr && this->jobMode_ == nullptr && this->progress_ == nullptr; };
      // backupSetStatus Field Functions 
      bool hasBackupSetStatus() const { return this->backupSetStatus_ != nullptr;};
      void deleteBackupSetStatus() { this->backupSetStatus_ = nullptr;};
      inline string getBackupSetStatus() const { DARABONBA_PTR_GET_DEFAULT(backupSetStatus_, "") };
      inline BackupJobs& setBackupSetStatus(string backupSetStatus) { DARABONBA_PTR_SET_VALUE(backupSetStatus_, backupSetStatus) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
      inline BackupJobs& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupjobId Field Functions 
      bool hasBackupjobId() const { return this->backupjobId_ != nullptr;};
      void deleteBackupjobId() { this->backupjobId_ = nullptr;};
      inline string getBackupjobId() const { DARABONBA_PTR_GET_DEFAULT(backupjobId_, "") };
      inline BackupJobs& setBackupjobId(string backupjobId) { DARABONBA_PTR_SET_VALUE(backupjobId_, backupjobId) };


      // jobMode Field Functions 
      bool hasJobMode() const { return this->jobMode_ != nullptr;};
      void deleteJobMode() { this->jobMode_ = nullptr;};
      inline string getJobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
      inline BackupJobs& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline BackupJobs& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      // The backup task status. Valid values:
      // 
      // *   **Scheduled**: The backup task is in planning. Regular backup tasks that have not started are also in this state.
      // *   **Checking**: The instance is being checked before the backup.
      // *   **Backuping**: The backup task is in progress.
      // *   **Finished**: The backup task is completed.
      shared_ptr<string> backupSetStatus_ {};
      // The start time of the backup task.
      shared_ptr<string> backupStartTime_ {};
      // The ID of the backup task.
      shared_ptr<string> backupjobId_ {};
      // The backup mode. Valid values:
      // 
      // *   **Automated**: automatic backup
      // *   **Manual**: manual backup
      shared_ptr<string> jobMode_ {};
      // The progress of the backup task. Unit: %. The progress is returned only for running backup tasks.
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->backupJobs_ == nullptr
        && this->requestId_ == nullptr; };
    // backupJobs Field Functions 
    bool hasBackupJobs() const { return this->backupJobs_ != nullptr;};
    void deleteBackupJobs() { this->backupJobs_ = nullptr;};
    inline const vector<DescribeBackupTasksResponseBody::BackupJobs> & getBackupJobs() const { DARABONBA_PTR_GET_CONST(backupJobs_, vector<DescribeBackupTasksResponseBody::BackupJobs>) };
    inline vector<DescribeBackupTasksResponseBody::BackupJobs> getBackupJobs() { DARABONBA_PTR_GET(backupJobs_, vector<DescribeBackupTasksResponseBody::BackupJobs>) };
    inline DescribeBackupTasksResponseBody& setBackupJobs(const vector<DescribeBackupTasksResponseBody::BackupJobs> & backupJobs) { DARABONBA_PTR_SET_VALUE(backupJobs_, backupJobs) };
    inline DescribeBackupTasksResponseBody& setBackupJobs(vector<DescribeBackupTasksResponseBody::BackupJobs> && backupJobs) { DARABONBA_PTR_SET_RVALUE(backupJobs_, backupJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the backup task.
    shared_ptr<vector<DescribeBackupTasksResponseBody::BackupJobs>> backupJobs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
