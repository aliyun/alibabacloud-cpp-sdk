// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSRESPONSEBODY_HPP_
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
  class DescribeActiveSQLRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Queries, queries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Queries, queries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActiveSQLRecordsResponseBody() = default ;
    DescribeActiveSQLRecordsResponseBody(const DescribeActiveSQLRecordsResponseBody &) = default ;
    DescribeActiveSQLRecordsResponseBody(DescribeActiveSQLRecordsResponseBody &&) = default ;
    DescribeActiveSQLRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveSQLRecordsResponseBody() = default ;
    DescribeActiveSQLRecordsResponseBody& operator=(const DescribeActiveSQLRecordsResponseBody &) = default ;
    DescribeActiveSQLRecordsResponseBody& operator=(DescribeActiveSQLRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queries& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Queries& obj) { 
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
      Queries() = default ;
      Queries(const Queries &) = default ;
      Queries(Queries &&) = default ;
      Queries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queries() = default ;
      Queries& operator=(const Queries &) = default ;
      Queries& operator=(Queries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientAddr_ == nullptr
        && this->database_ == nullptr && this->PID_ == nullptr && this->query_ == nullptr && this->queryDuration_ == nullptr && this->queryStart_ == nullptr
        && this->sessionID_ == nullptr && this->sqlTruncated_ == nullptr && this->sqlTruncatedThreshold_ == nullptr && this->state_ == nullptr && this->user_ == nullptr; };
      // clientAddr Field Functions 
      bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
      void deleteClientAddr() { this->clientAddr_ = nullptr;};
      inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
      inline Queries& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Queries& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // PID Field Functions 
      bool hasPID() const { return this->PID_ != nullptr;};
      void deletePID() { this->PID_ = nullptr;};
      inline string getPID() const { DARABONBA_PTR_GET_DEFAULT(PID_, "") };
      inline Queries& setPID(string PID) { DARABONBA_PTR_SET_VALUE(PID_, PID) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline Queries& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // queryDuration Field Functions 
      bool hasQueryDuration() const { return this->queryDuration_ != nullptr;};
      void deleteQueryDuration() { this->queryDuration_ = nullptr;};
      inline string getQueryDuration() const { DARABONBA_PTR_GET_DEFAULT(queryDuration_, "") };
      inline Queries& setQueryDuration(string queryDuration) { DARABONBA_PTR_SET_VALUE(queryDuration_, queryDuration) };


      // queryStart Field Functions 
      bool hasQueryStart() const { return this->queryStart_ != nullptr;};
      void deleteQueryStart() { this->queryStart_ = nullptr;};
      inline string getQueryStart() const { DARABONBA_PTR_GET_DEFAULT(queryStart_, "") };
      inline Queries& setQueryStart(string queryStart) { DARABONBA_PTR_SET_VALUE(queryStart_, queryStart) };


      // sessionID Field Functions 
      bool hasSessionID() const { return this->sessionID_ != nullptr;};
      void deleteSessionID() { this->sessionID_ = nullptr;};
      inline string getSessionID() const { DARABONBA_PTR_GET_DEFAULT(sessionID_, "") };
      inline Queries& setSessionID(string sessionID) { DARABONBA_PTR_SET_VALUE(sessionID_, sessionID) };


      // sqlTruncated Field Functions 
      bool hasSqlTruncated() const { return this->sqlTruncated_ != nullptr;};
      void deleteSqlTruncated() { this->sqlTruncated_ = nullptr;};
      inline string getSqlTruncated() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncated_, "") };
      inline Queries& setSqlTruncated(string sqlTruncated) { DARABONBA_PTR_SET_VALUE(sqlTruncated_, sqlTruncated) };


      // sqlTruncatedThreshold Field Functions 
      bool hasSqlTruncatedThreshold() const { return this->sqlTruncatedThreshold_ != nullptr;};
      void deleteSqlTruncatedThreshold() { this->sqlTruncatedThreshold_ = nullptr;};
      inline string getSqlTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncatedThreshold_, "") };
      inline Queries& setSqlTruncatedThreshold(string sqlTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(sqlTruncatedThreshold_, sqlTruncatedThreshold) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Queries& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Queries& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The IP address of the client.
      shared_ptr<string> clientAddr_ {};
      // The name of the database.
      shared_ptr<string> database_ {};
      // The progress ID.
      shared_ptr<string> PID_ {};
      // The SQL statement of the query.
      shared_ptr<string> query_ {};
      // The execution duration of the query. Unit: seconds.
      shared_ptr<string> queryDuration_ {};
      // The start time of the query.
      shared_ptr<string> queryStart_ {};
      // The session ID.
      shared_ptr<string> sessionID_ {};
      // Indicates whether the SQL statement is truncated. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<string> sqlTruncated_ {};
      // The threshold that is used to truncate the SQL statement.
      shared_ptr<string> sqlTruncatedThreshold_ {};
      // The status of the asynchronous request. Valid values:
      // 
      // *   **running**
      // *   **block**
      shared_ptr<string> state_ {};
      // The name of the database account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->queries_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeActiveSQLRecordsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<DescribeActiveSQLRecordsResponseBody::Queries> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<DescribeActiveSQLRecordsResponseBody::Queries>) };
    inline vector<DescribeActiveSQLRecordsResponseBody::Queries> getQueries() { DARABONBA_PTR_GET(queries_, vector<DescribeActiveSQLRecordsResponseBody::Queries>) };
    inline DescribeActiveSQLRecordsResponseBody& setQueries(const vector<DescribeActiveSQLRecordsResponseBody::Queries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline DescribeActiveSQLRecordsResponseBody& setQueries(vector<DescribeActiveSQLRecordsResponseBody::Queries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveSQLRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The queried SQL records.
    shared_ptr<vector<DescribeActiveSQLRecordsResponseBody::Queries>> queries_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
