// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPABASEBACKUPJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPABASEBACKUPJOBSRESPONSEBODY_HPP_
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
  class ListSupabaseBackupJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupabaseBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupabaseBackupJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupabaseBackupJobsResponseBody() = default ;
    ListSupabaseBackupJobsResponseBody(const ListSupabaseBackupJobsResponseBody &) = default ;
    ListSupabaseBackupJobsResponseBody(ListSupabaseBackupJobsResponseBody &&) = default ;
    ListSupabaseBackupJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupabaseBackupJobsResponseBody() = default ;
    ListSupabaseBackupJobsResponseBody& operator=(const ListSupabaseBackupJobsResponseBody &) = default ;
    ListSupabaseBackupJobsResponseBody& operator=(ListSupabaseBackupJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
        DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_TO_JSON(Process, process_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
        DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
        DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->backupJobId_ == nullptr
        && this->backupMode_ == nullptr && this->backupStatus_ == nullptr && this->process_ == nullptr && this->startTime_ == nullptr; };
      // backupJobId Field Functions 
      bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
      void deleteBackupJobId() { this->backupJobId_ = nullptr;};
      inline string getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
      inline Items& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


      // backupMode Field Functions 
      bool hasBackupMode() const { return this->backupMode_ != nullptr;};
      void deleteBackupMode() { this->backupMode_ = nullptr;};
      inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
      inline Items& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline Items& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline Items& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the backup task.
      shared_ptr<string> backupJobId_ {};
      // The backup mode. Valid values:
      // * **Automated**: automatic backup
      // * **Manual**: manual backup
      shared_ptr<string> backupMode_ {};
      // The status of the backup task. Valid statuses include: schedule (waiting to be scheduled) and backup (in progress).
      shared_ptr<string> backupStatus_ {};
      // The progress percentage of the backup task, such as 0%. This value may be an empty string when the task is in the schedule (waiting to be scheduled) state.
      shared_ptr<string> process_ {};
      // The start time of the backup task. The time is displayed in UTC in the yyyy-MM-ddTHH:mm:ssZ format. This value may be an empty string when the task is in the schedule (waiting to be scheduled) state.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSupabaseBackupJobsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSupabaseBackupJobsResponseBody::Items>) };
    inline vector<ListSupabaseBackupJobsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSupabaseBackupJobsResponseBody::Items>) };
    inline ListSupabaseBackupJobsResponseBody& setItems(const vector<ListSupabaseBackupJobsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSupabaseBackupJobsResponseBody& setItems(vector<ListSupabaseBackupJobsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSupabaseBackupJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupabaseBackupJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupabaseBackupJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of backup tasks.
    shared_ptr<vector<ListSupabaseBackupJobsResponseBody::Items>> items_ {};
    // The maximum number of entries to return for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next page, which can be used as the NextToken parameter in the next request.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
