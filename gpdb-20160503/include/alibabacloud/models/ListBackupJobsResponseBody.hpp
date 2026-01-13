// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBackupJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupJobsResponseBody() = default ;
    ListBackupJobsResponseBody(const ListBackupJobsResponseBody &) = default ;
    ListBackupJobsResponseBody(ListBackupJobsResponseBody &&) = default ;
    ListBackupJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupJobsResponseBody() = default ;
    ListBackupJobsResponseBody& operator=(const ListBackupJobsResponseBody &) = default ;
    ListBackupJobsResponseBody& operator=(ListBackupJobsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(Process, process_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, BackupJob& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(Process, process_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
        && this->backupMode_ == nullptr && this->backupStatus_ == nullptr && this->process_ == nullptr && this->startTime_ == nullptr; };
        // backupJobId Field Functions 
        bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
        void deleteBackupJobId() { this->backupJobId_ = nullptr;};
        inline string getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
        inline BackupJob& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline BackupJob& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline BackupJob& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


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


      protected:
        // The backup job ID.
        shared_ptr<string> backupJobId_ {};
        // The backup mode. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The backup status. Valid values:
        // 
        // *   **Success**
        // *   **Failure**
        shared_ptr<string> backupStatus_ {};
        // The progress of the backup job.
        shared_ptr<string> process_ {};
        // The time when the backup job started. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
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
    inline const ListBackupJobsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, ListBackupJobsResponseBody::Items) };
    inline ListBackupJobsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, ListBackupJobsResponseBody::Items) };
    inline ListBackupJobsResponseBody& setItems(const ListBackupJobsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListBackupJobsResponseBody& setItems(ListBackupJobsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried backup jobs.
    shared_ptr<ListBackupJobsResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
