// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODYQUERIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODYQUERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeActiveSQLRecordsResponseBodyQueries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveSQLRecordsResponseBodyQueries& obj) { 
      DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PID, PID_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryDuration, queryDuration_);
      DARABONBA_PTR_TO_JSON(QueryStart, queryStart_);
      DARABONBA_PTR_TO_JSON(SessionID, sessionID_);
      DARABONBA_PTR_TO_JSON(SqlTruncated, sqlTruncated_);
      DARABONBA_PTR_TO_JSON(SqlTruncatedThreshold, sqlTruncatedThreshold_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveSQLRecordsResponseBodyQueries& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PID, PID_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryDuration, queryDuration_);
      DARABONBA_PTR_FROM_JSON(QueryStart, queryStart_);
      DARABONBA_PTR_FROM_JSON(SessionID, sessionID_);
      DARABONBA_PTR_FROM_JSON(SqlTruncated, sqlTruncated_);
      DARABONBA_PTR_FROM_JSON(SqlTruncatedThreshold, sqlTruncatedThreshold_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeActiveSQLRecordsResponseBodyQueries() = default ;
    DescribeActiveSQLRecordsResponseBodyQueries(const DescribeActiveSQLRecordsResponseBodyQueries &) = default ;
    DescribeActiveSQLRecordsResponseBodyQueries(DescribeActiveSQLRecordsResponseBodyQueries &&) = default ;
    DescribeActiveSQLRecordsResponseBodyQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveSQLRecordsResponseBodyQueries() = default ;
    DescribeActiveSQLRecordsResponseBodyQueries& operator=(const DescribeActiveSQLRecordsResponseBodyQueries &) = default ;
    DescribeActiveSQLRecordsResponseBodyQueries& operator=(DescribeActiveSQLRecordsResponseBodyQueries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientAddr_ != nullptr
        && this->database_ != nullptr && this->PID_ != nullptr && this->query_ != nullptr && this->queryDuration_ != nullptr && this->queryStart_ != nullptr
        && this->sessionID_ != nullptr && this->sqlTruncated_ != nullptr && this->sqlTruncatedThreshold_ != nullptr && this->state_ != nullptr && this->user_ != nullptr; };
    // clientAddr Field Functions 
    bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
    void deleteClientAddr() { this->clientAddr_ = nullptr;};
    inline string clientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // PID Field Functions 
    bool hasPID() const { return this->PID_ != nullptr;};
    void deletePID() { this->PID_ = nullptr;};
    inline string PID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryDuration Field Functions 
    bool hasQueryDuration() const { return this->queryDuration_ != nullptr;};
    void deleteQueryDuration() { this->queryDuration_ = nullptr;};
    inline string queryDuration() const { DARABONBA_PTR_GET_DEFAULT(queryDuration_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setQueryDuration(string queryDuration) { DARABONBA_PTR_SET_VALUE(queryDuration_, queryDuration) };


    // queryStart Field Functions 
    bool hasQueryStart() const { return this->queryStart_ != nullptr;};
    void deleteQueryStart() { this->queryStart_ = nullptr;};
    inline string queryStart() const { DARABONBA_PTR_GET_DEFAULT(queryStart_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setQueryStart(string queryStart) { DARABONBA_PTR_SET_VALUE(queryStart_, queryStart) };


    // sessionID Field Functions 
    bool hasSessionID() const { return this->sessionID_ != nullptr;};
    void deleteSessionID() { this->sessionID_ = nullptr;};
    inline string sessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


    // sqlTruncated Field Functions 
    bool hasSqlTruncated() const { return this->sqlTruncated_ != nullptr;};
    void deleteSqlTruncated() { this->sqlTruncated_ = nullptr;};
    inline string sqlTruncated() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncated_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setSqlTruncated(string sqlTruncated) { DARABONBA_PTR_SET_VALUE(sqlTruncated_, sqlTruncated) };


    // sqlTruncatedThreshold Field Functions 
    bool hasSqlTruncatedThreshold() const { return this->sqlTruncatedThreshold_ != nullptr;};
    void deleteSqlTruncatedThreshold() { this->sqlTruncatedThreshold_ = nullptr;};
    inline string sqlTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncatedThreshold_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setSqlTruncatedThreshold(string sqlTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(sqlTruncatedThreshold_, sqlTruncatedThreshold) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeActiveSQLRecordsResponseBodyQueries& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> clientAddr_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The progress ID.
    std::shared_ptr<string> PID_ = nullptr;
    // The SQL statement of the query.
    std::shared_ptr<string> query_ = nullptr;
    // The execution duration of the query. Unit: seconds.
    std::shared_ptr<string> queryDuration_ = nullptr;
    // The start time of the query.
    std::shared_ptr<string> queryStart_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionID_ = nullptr;
    // Indicates whether the SQL statement is truncated. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> sqlTruncated_ = nullptr;
    // The threshold that is used to truncate the SQL statement.
    std::shared_ptr<string> sqlTruncatedThreshold_ = nullptr;
    // The status of the asynchronous request. Valid values:
    // 
    // *   **running**
    // *   **block**
    std::shared_ptr<string> state_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
