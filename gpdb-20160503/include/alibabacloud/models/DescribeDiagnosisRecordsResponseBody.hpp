// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODY_HPP_
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
  class DescribeDiagnosisRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiagnosisRecordsResponseBody() = default ;
    DescribeDiagnosisRecordsResponseBody(const DescribeDiagnosisRecordsResponseBody &) = default ;
    DescribeDiagnosisRecordsResponseBody(DescribeDiagnosisRecordsResponseBody &&) = default ;
    DescribeDiagnosisRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisRecordsResponseBody() = default ;
    DescribeDiagnosisRecordsResponseBody& operator=(const DescribeDiagnosisRecordsResponseBody &) = default ;
    DescribeDiagnosisRecordsResponseBody& operator=(DescribeDiagnosisRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(QueryID, queryID_);
        DARABONBA_PTR_TO_JSON(SQLStmt, SQLStmt_);
        DARABONBA_PTR_TO_JSON(SQLTruncated, SQLTruncated_);
        DARABONBA_PTR_TO_JSON(SQLTruncatedThreshold, SQLTruncatedThreshold_);
        DARABONBA_PTR_TO_JSON(SessionID, sessionID_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
        DARABONBA_PTR_FROM_JSON(SQLStmt, SQLStmt_);
        DARABONBA_PTR_FROM_JSON(SQLTruncated, SQLTruncated_);
        DARABONBA_PTR_FROM_JSON(SQLTruncatedThreshold, SQLTruncatedThreshold_);
        DARABONBA_PTR_FROM_JSON(SessionID, sessionID_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
        && this->duration_ == nullptr && this->queryID_ == nullptr && this->SQLStmt_ == nullptr && this->SQLTruncated_ == nullptr && this->SQLTruncatedThreshold_ == nullptr
        && this->sessionID_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->user_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Items& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Items& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // queryID Field Functions 
      bool hasQueryID() const { return this->queryID_ != nullptr;};
      void deleteQueryID() { this->queryID_ = nullptr;};
      inline string getQueryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
      inline Items& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


      // SQLStmt Field Functions 
      bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
      void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
      inline string getSQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
      inline Items& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


      // SQLTruncated Field Functions 
      bool hasSQLTruncated() const { return this->SQLTruncated_ != nullptr;};
      void deleteSQLTruncated() { this->SQLTruncated_ = nullptr;};
      inline bool getSQLTruncated() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncated_, false) };
      inline Items& setSQLTruncated(bool SQLTruncated) { DARABONBA_PTR_SET_VALUE(SQLTruncated_, SQLTruncated) };


      // SQLTruncatedThreshold Field Functions 
      bool hasSQLTruncatedThreshold() const { return this->SQLTruncatedThreshold_ != nullptr;};
      void deleteSQLTruncatedThreshold() { this->SQLTruncatedThreshold_ = nullptr;};
      inline int32_t getSQLTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncatedThreshold_, 0) };
      inline Items& setSQLTruncatedThreshold(int32_t SQLTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(SQLTruncatedThreshold_, SQLTruncatedThreshold) };


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


    protected:
      // The name of the database.
      shared_ptr<string> database_ {};
      // The execution duration of the query. Unit: seconds.
      shared_ptr<int32_t> duration_ {};
      // The ID of the query. It is a unique identifier of the query.
      shared_ptr<string> queryID_ {};
      // The SQL statement.
      shared_ptr<string> SQLStmt_ {};
      // Indicates whether the SQL statement needs to be truncated. Valid values:
      // 
      // *   **true**: The SQL statement needs to be truncated.
      // *   **false**: The SQL statement does not need to be truncated.
      shared_ptr<bool> SQLTruncated_ {};
      // The threshold used to determine whether an SQL statement must be truncated. The value is the number of characters.
      shared_ptr<int32_t> SQLTruncatedThreshold_ {};
      // The ID of the session that contains the query.
      shared_ptr<string> sessionID_ {};
      // The start time of the query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The execution state of the query. Valid values:
      // 
      // *   **running**: The query is being executed.
      // *   **finished**: The query is complete.
      shared_ptr<string> status_ {};
      // The name of the database account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDiagnosisRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDiagnosisRecordsResponseBody::Items>) };
    inline vector<DescribeDiagnosisRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDiagnosisRecordsResponseBody::Items>) };
    inline DescribeDiagnosisRecordsResponseBody& setItems(const vector<DescribeDiagnosisRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDiagnosisRecordsResponseBody& setItems(vector<DescribeDiagnosisRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiagnosisRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiagnosisRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The threshold that determines whether the SQL statement must be truncated. The value is the number of characters.
    shared_ptr<vector<DescribeDiagnosisRecordsResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
