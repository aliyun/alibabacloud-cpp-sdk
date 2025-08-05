// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisRecordsResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisRecordsResponseBodyItems& obj) { 
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
    DescribeDiagnosisRecordsResponseBodyItems() = default ;
    DescribeDiagnosisRecordsResponseBodyItems(const DescribeDiagnosisRecordsResponseBodyItems &) = default ;
    DescribeDiagnosisRecordsResponseBodyItems(DescribeDiagnosisRecordsResponseBodyItems &&) = default ;
    DescribeDiagnosisRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisRecordsResponseBodyItems() = default ;
    DescribeDiagnosisRecordsResponseBodyItems& operator=(const DescribeDiagnosisRecordsResponseBodyItems &) = default ;
    DescribeDiagnosisRecordsResponseBodyItems& operator=(DescribeDiagnosisRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->duration_ != nullptr && this->queryID_ != nullptr && this->SQLStmt_ != nullptr && this->SQLTruncated_ != nullptr && this->SQLTruncatedThreshold_ != nullptr
        && this->sessionID_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->user_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeDiagnosisRecordsResponseBodyItems& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // queryID Field Functions 
    bool hasQueryID() const { return this->queryID_ != nullptr;};
    void deleteQueryID() { this->queryID_ = nullptr;};
    inline string queryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


    // SQLStmt Field Functions 
    bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
    void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
    inline string SQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


    // SQLTruncated Field Functions 
    bool hasSQLTruncated() const { return this->SQLTruncated_ != nullptr;};
    void deleteSQLTruncated() { this->SQLTruncated_ = nullptr;};
    inline bool SQLTruncated() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncated_, false) };
    inline DescribeDiagnosisRecordsResponseBodyItems& setSQLTruncated(bool SQLTruncated) { DARABONBA_PTR_SET_VALUE(SQLTruncated_, SQLTruncated) };


    // SQLTruncatedThreshold Field Functions 
    bool hasSQLTruncatedThreshold() const { return this->SQLTruncatedThreshold_ != nullptr;};
    void deleteSQLTruncatedThreshold() { this->SQLTruncatedThreshold_ = nullptr;};
    inline int32_t SQLTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncatedThreshold_, 0) };
    inline DescribeDiagnosisRecordsResponseBodyItems& setSQLTruncatedThreshold(int32_t SQLTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(SQLTruncatedThreshold_, SQLTruncatedThreshold) };


    // sessionID Field Functions 
    bool hasSessionID() const { return this->sessionID_ != nullptr;};
    void deleteSessionID() { this->sessionID_ = nullptr;};
    inline string sessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyItems& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeDiagnosisRecordsResponseBodyItems& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The execution duration of the query. Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the query. It is a unique identifier of the query.
    std::shared_ptr<string> queryID_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQLStmt_ = nullptr;
    // Indicates whether the SQL statement needs to be truncated. Valid values:
    // 
    // *   **true**: The SQL statement needs to be truncated.
    // *   **false**: The SQL statement does not need to be truncated.
    std::shared_ptr<bool> SQLTruncated_ = nullptr;
    // The threshold used to determine whether an SQL statement must be truncated. The value is the number of characters.
    std::shared_ptr<int32_t> SQLTruncatedThreshold_ = nullptr;
    // The ID of the session that contains the query.
    std::shared_ptr<string> sessionID_ = nullptr;
    // The start time of the query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The execution state of the query. Valid values:
    // 
    // *   **running**: The query is being executed.
    // *   **finished**: The query is complete.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
