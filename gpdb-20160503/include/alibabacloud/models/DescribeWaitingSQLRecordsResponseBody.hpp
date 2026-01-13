// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAITINGSQLRECORDSRESPONSEBODY_HPP_
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
  class DescribeWaitingSQLRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWaitingSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWaitingSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWaitingSQLRecordsResponseBody() = default ;
    DescribeWaitingSQLRecordsResponseBody(const DescribeWaitingSQLRecordsResponseBody &) = default ;
    DescribeWaitingSQLRecordsResponseBody(DescribeWaitingSQLRecordsResponseBody &&) = default ;
    DescribeWaitingSQLRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWaitingSQLRecordsResponseBody() = default ;
    DescribeWaitingSQLRecordsResponseBody& operator=(const DescribeWaitingSQLRecordsResponseBody &) = default ;
    DescribeWaitingSQLRecordsResponseBody& operator=(DescribeWaitingSQLRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(PID, PID_);
        DARABONBA_PTR_TO_JSON(SQLStmt, SQLStmt_);
        DARABONBA_PTR_TO_JSON(SessionID, sessionID_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(WaitingTime, waitingTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(PID, PID_);
        DARABONBA_PTR_FROM_JSON(SQLStmt, SQLStmt_);
        DARABONBA_PTR_FROM_JSON(SessionID, sessionID_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(WaitingTime, waitingTime_);
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
      virtual bool empty() const override { return this->database_ == nullptr
        && this->PID_ == nullptr && this->SQLStmt_ == nullptr && this->sessionID_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->user_ == nullptr && this->waitingTime_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Items& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // PID Field Functions 
      bool hasPID() const { return this->PID_ != nullptr;};
      void deletePID() { this->PID_ = nullptr;};
      inline string getPID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
      inline Items& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


      // SQLStmt Field Functions 
      bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
      void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
      inline string getSQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
      inline Items& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


      // sessionID Field Functions 
      bool hasSessionID() const { return this->sessionID_ != nullptr;};
      void deleteSessionID() { this->sessionID_ = nullptr;};
      inline string getSessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
      inline Items& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Items& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Items& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // waitingTime Field Functions 
      bool hasWaitingTime() const { return this->waitingTime_ != nullptr;};
      void deleteWaitingTime() { this->waitingTime_ = nullptr;};
      inline int64_t getWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTime_, 0L) };
      inline Items& setWaitingTime(int64_t waitingTime) { DARABONBA_PTR_SET_VALUE(waitingTime_, waitingTime) };


    protected:
      // The name of the database.
      shared_ptr<string> database_ {};
      // The ID of the process that uniquely identifies the query.
      shared_ptr<string> PID_ {};
      // The SQL statement of the query.
      shared_ptr<string> SQLStmt_ {};
      // The ID of the session that contains the query.
      shared_ptr<string> sessionID_ {};
      // The start time of the query. This value is in the timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The waiting state of the query. Valid values:
      // 
      // *   **LockWaiting**
      // *   **ResourceWaiting**
      shared_ptr<string> status_ {};
      // The database account that is used to perform the query.
      shared_ptr<string> user_ {};
      // The waiting period of the query. Unit: milliseconds.
      shared_ptr<int64_t> waitingTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeWaitingSQLRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeWaitingSQLRecordsResponseBody::Items>) };
    inline vector<DescribeWaitingSQLRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeWaitingSQLRecordsResponseBody::Items>) };
    inline DescribeWaitingSQLRecordsResponseBody& setItems(const vector<DescribeWaitingSQLRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeWaitingSQLRecordsResponseBody& setItems(vector<DescribeWaitingSQLRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeWaitingSQLRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWaitingSQLRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWaitingSQLRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of lock diagnostics records.
    shared_ptr<vector<DescribeWaitingSQLRecordsResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
