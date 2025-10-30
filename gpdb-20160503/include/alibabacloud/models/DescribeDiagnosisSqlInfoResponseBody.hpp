// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSQLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDiagnosisSQLInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MaxOutputRows, maxOutputRows_);
      DARABONBA_PTR_TO_JSON(QueryID, queryID_);
      DARABONBA_PTR_TO_JSON(QueryPlan, queryPlan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLStmt, SQLStmt_);
      DARABONBA_PTR_TO_JSON(SessionID, sessionID_);
      DARABONBA_PTR_TO_JSON(SortedMetrics, sortedMetrics_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TextPlan, textPlan_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSQLInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MaxOutputRows, maxOutputRows_);
      DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
      DARABONBA_PTR_FROM_JSON(QueryPlan, queryPlan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLStmt, SQLStmt_);
      DARABONBA_PTR_FROM_JSON(SessionID, sessionID_);
      DARABONBA_PTR_FROM_JSON(SortedMetrics, sortedMetrics_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TextPlan, textPlan_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeDiagnosisSQLInfoResponseBody() = default ;
    DescribeDiagnosisSQLInfoResponseBody(const DescribeDiagnosisSQLInfoResponseBody &) = default ;
    DescribeDiagnosisSQLInfoResponseBody(DescribeDiagnosisSQLInfoResponseBody &&) = default ;
    DescribeDiagnosisSQLInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSQLInfoResponseBody() = default ;
    DescribeDiagnosisSQLInfoResponseBody& operator=(const DescribeDiagnosisSQLInfoResponseBody &) = default ;
    DescribeDiagnosisSQLInfoResponseBody& operator=(DescribeDiagnosisSQLInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->duration_ == nullptr && return this->maxOutputRows_ == nullptr && return this->queryID_ == nullptr && return this->queryPlan_ == nullptr && return this->requestId_ == nullptr
        && return this->SQLStmt_ == nullptr && return this->sessionID_ == nullptr && return this->sortedMetrics_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->textPlan_ == nullptr && return this->user_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeDiagnosisSQLInfoResponseBody& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // maxOutputRows Field Functions 
    bool hasMaxOutputRows() const { return this->maxOutputRows_ != nullptr;};
    void deleteMaxOutputRows() { this->maxOutputRows_ = nullptr;};
    inline string maxOutputRows() const { DARABONBA_PTR_GET_DEFAULT(maxOutputRows_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setMaxOutputRows(string maxOutputRows) { DARABONBA_PTR_SET_VALUE(maxOutputRows_, maxOutputRows) };


    // queryID Field Functions 
    bool hasQueryID() const { return this->queryID_ != nullptr;};
    void deleteQueryID() { this->queryID_ = nullptr;};
    inline string queryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


    // queryPlan Field Functions 
    bool hasQueryPlan() const { return this->queryPlan_ != nullptr;};
    void deleteQueryPlan() { this->queryPlan_ = nullptr;};
    inline string queryPlan() const { DARABONBA_PTR_GET_DEFAULT(queryPlan_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setQueryPlan(string queryPlan) { DARABONBA_PTR_SET_VALUE(queryPlan_, queryPlan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLStmt Field Functions 
    bool hasSQLStmt() const { return this->SQLStmt_ != nullptr;};
    void deleteSQLStmt() { this->SQLStmt_ = nullptr;};
    inline string SQLStmt() const { DARABONBA_PTR_GET_DEFAULT(SQLStmt_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setSQLStmt(string SQLStmt) { DARABONBA_PTR_SET_VALUE(SQLStmt_, SQLStmt) };


    // sessionID Field Functions 
    bool hasSessionID() const { return this->sessionID_ != nullptr;};
    void deleteSessionID() { this->sessionID_ = nullptr;};
    inline string sessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


    // sortedMetrics Field Functions 
    bool hasSortedMetrics() const { return this->sortedMetrics_ != nullptr;};
    void deleteSortedMetrics() { this->sortedMetrics_ = nullptr;};
    inline string sortedMetrics() const { DARABONBA_PTR_GET_DEFAULT(sortedMetrics_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setSortedMetrics(string sortedMetrics) { DARABONBA_PTR_SET_VALUE(sortedMetrics_, sortedMetrics) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDiagnosisSQLInfoResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textPlan Field Functions 
    bool hasTextPlan() const { return this->textPlan_ != nullptr;};
    void deleteTextPlan() { this->textPlan_ = nullptr;};
    inline string textPlan() const { DARABONBA_PTR_GET_DEFAULT(textPlan_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setTextPlan(string textPlan) { DARABONBA_PTR_SET_VALUE(textPlan_, textPlan) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeDiagnosisSQLInfoResponseBody& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The execution duration of the query. Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The maximum number of output rows.
    std::shared_ptr<string> maxOutputRows_ = nullptr;
    // The query ID.
    std::shared_ptr<string> queryID_ = nullptr;
    // The information about the operator.
    std::shared_ptr<string> queryPlan_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQLStmt_ = nullptr;
    // The ID of the session that contains the query.
    std::shared_ptr<string> sessionID_ = nullptr;
    // The sequence of metrics.
    std::shared_ptr<string> sortedMetrics_ = nullptr;
    // The start time of the query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The execution state of the query. Valid values:
    // 
    // *   **running**
    // *   **finished**
    std::shared_ptr<string> status_ = nullptr;
    // The information about the execution plan.
    std::shared_ptr<string> textPlan_ = nullptr;
    // The username.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
