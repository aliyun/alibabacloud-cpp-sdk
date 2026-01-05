// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupJob, backupJob_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupJob, backupJob_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackupJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupJob& obj) { 
          DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
          DARABONBA_PTR_TO_JSON(BackupProgressStatus, backupProgressStatus_);
          DARABONBA_PTR_TO_JSON(JobMode, jobMode_);
          DARABONBA_PTR_TO_JSON(Process, process_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
        };
        friend void from_json(const Darabonba::Json& j, BackupJob& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
          DARABONBA_PTR_FROM_JSON(BackupProgressStatus, backupProgressStatus_);
          DARABONBA_PTR_FROM_JSON(JobMode, jobMode_);
          DARABONBA_PTR_FROM_JSON(Process, process_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
        };
        BackupJob() = default ;
        BackupJob(const BackupJob &) = default ;
        BackupJob(BackupJob &&) = default ;
        BackupJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupJob() = default ;
        BackupJob& operator=(const BackupJob &) = default ;
        BackupJob& operator=(BackupJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupJobId_ == nullptr
        && this->backupProgressStatus_ == nullptr && this->jobMode_ == nullptr && this->process_ == nullptr && this->startTime_ == nullptr && this->taskAction_ == nullptr; };
        // backupJobId Field Functions 
        bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
        void deleteBackupJobId() { this->backupJobId_ = nullptr;};
        inline string getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
        inline BackupJob& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


        // backupProgressStatus Field Functions 
        bool hasBackupProgressStatus() const { return this->backupProgressStatus_ != nullptr;};
        void deleteBackupProgressStatus() { this->backupProgressStatus_ = nullptr;};
        inline string getBackupProgressStatus() const { DARABONBA_PTR_GET_DEFAULT(backupProgressStatus_, "") };
        inline BackupJob& setBackupProgressStatus(string backupProgressStatus) { DARABONBA_PTR_SET_VALUE(backupProgressStatus_, backupProgressStatus) };


        // jobMode Field Functions 
        bool hasJobMode() const { return this->jobMode_ != nullptr;};
        void deleteJobMode() { this->jobMode_ = nullptr;};
        inline string getJobMode() const { DARABONBA_PTR_GET_DEFAULT(jobMode_, "") };
        inline BackupJob& setJobMode(string jobMode) { DARABONBA_PTR_SET_VALUE(jobMode_, jobMode) };


        // process Field Functions 
        bool hasProcess() const { return this->process_ != nullptr;};
        void deleteProcess() { this->process_ = nullptr;};
        inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
        inline BackupJob& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline BackupJob& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // taskAction Field Functions 
        bool hasTaskAction() const { return this->taskAction_ != nullptr;};
        void deleteTaskAction() { this->taskAction_ = nullptr;};
        inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
        inline BackupJob& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


      protected:
        // The ID of the backup task.
        shared_ptr<string> backupJobId_ {};
        // The state of the backup task. Valid values:
        // 
        // *   **NoStart**
        // *   **Preparing**
        // *   **Waiting**
        // *   **Uploading**
        // *   **Checking**
        // *   **Finished**
        shared_ptr<string> backupProgressStatus_ {};
        // The backup mode. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> jobMode_ {};
        // The progress of the backup task in percentage.
        shared_ptr<string> process_ {};
        // The time when the backup task started. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The type of the backup task. Valid values:
        // 
        // *   **TempBackupTask**: The backup task is an adhoc backup task.
        // *   **NormalBackupTask**: The backup task is a common backup task.
        shared_ptr<string> taskAction_ {};
      };

      virtual bool empty() const override { return this->backupJob_ == nullptr; };
      // backupJob Field Functions 
      bool hasBackupJob() const { return this->backupJob_ != nullptr;};
      void deleteBackupJob() { this->backupJob_ = nullptr;};
      inline const vector<Items::BackupJob> & getBackupJob() const { DARABONBA_PTR_GET_CONST(backupJob_, vector<Items::BackupJob>) };
      inline vector<Items::BackupJob> getBackupJob() { DARABONBA_PTR_GET(backupJob_, vector<Items::BackupJob>) };
      inline Items& setBackupJob(const vector<Items::BackupJob> & backupJob) { DARABONBA_PTR_SET_VALUE(backupJob_, backupJob) };
      inline Items& setBackupJob(vector<Items::BackupJob> && backupJob) { DARABONBA_PTR_SET_RVALUE(backupJob_, backupJob) };


    protected:
      shared_ptr<vector<Items::BackupJob>> backupJob_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupTasksResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupTasksResponseBody::Items) };
    inline DescribeBackupTasksResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupTasksResponseBody::Items) };
    inline DescribeBackupTasksResponseBody& setItems(const DescribeBackupTasksResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupTasksResponseBody& setItems(DescribeBackupTasksResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the backup task.
    shared_ptr<DescribeBackupTasksResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
