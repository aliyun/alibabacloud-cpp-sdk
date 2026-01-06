// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMySQLAllSessionAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMySQLAllSessionAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMySQLAllSessionAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMySQLAllSessionAsyncResponseBody() = default ;
    GetMySQLAllSessionAsyncResponseBody(const GetMySQLAllSessionAsyncResponseBody &) = default ;
    GetMySQLAllSessionAsyncResponseBody(GetMySQLAllSessionAsyncResponseBody &&) = default ;
    GetMySQLAllSessionAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMySQLAllSessionAsyncResponseBody() = default ;
    GetMySQLAllSessionAsyncResponseBody& operator=(const GetMySQLAllSessionAsyncResponseBody &) = default ;
    GetMySQLAllSessionAsyncResponseBody& operator=(GetMySQLAllSessionAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Complete, complete_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(ResultId, resultId_);
        DARABONBA_PTR_TO_JSON(SessionData, sessionData_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Complete, complete_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
        DARABONBA_PTR_FROM_JSON(SessionData, sessionData_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SessionData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionData& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveSessionCount, activeSessionCount_);
          DARABONBA_PTR_TO_JSON(ClientStats, clientStats_);
          DARABONBA_PTR_TO_JSON(DbStats, dbStats_);
          DARABONBA_PTR_TO_JSON(MaxActiveTime, maxActiveTime_);
          DARABONBA_PTR_TO_JSON(SessionList, sessionList_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TotalSessionCount, totalSessionCount_);
          DARABONBA_PTR_TO_JSON(UserStats, userStats_);
        };
        friend void from_json(const Darabonba::Json& j, SessionData& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveSessionCount, activeSessionCount_);
          DARABONBA_PTR_FROM_JSON(ClientStats, clientStats_);
          DARABONBA_PTR_FROM_JSON(DbStats, dbStats_);
          DARABONBA_PTR_FROM_JSON(MaxActiveTime, maxActiveTime_);
          DARABONBA_PTR_FROM_JSON(SessionList, sessionList_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TotalSessionCount, totalSessionCount_);
          DARABONBA_PTR_FROM_JSON(UserStats, userStats_);
        };
        SessionData() = default ;
        SessionData(const SessionData &) = default ;
        SessionData(SessionData &&) = default ;
        SessionData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionData() = default ;
        SessionData& operator=(const SessionData &) = default ;
        SessionData& operator=(SessionData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserStats& obj) { 
            DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_TO_JSON(UserList, userList_);
          };
          friend void from_json(const Darabonba::Json& j, UserStats& obj) { 
            DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_FROM_JSON(UserList, userList_);
          };
          UserStats() = default ;
          UserStats(const UserStats &) = default ;
          UserStats(UserStats &&) = default ;
          UserStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserStats() = default ;
          UserStats& operator=(const UserStats &) = default ;
          UserStats& operator=(UserStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->key_ == nullptr && this->threadIdList_ == nullptr && this->totalCount_ == nullptr && this->userList_ == nullptr; };
          // activeCount Field Functions 
          bool hasActiveCount() const { return this->activeCount_ != nullptr;};
          void deleteActiveCount() { this->activeCount_ = nullptr;};
          inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
          inline UserStats& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline UserStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // threadIdList Field Functions 
          bool hasThreadIdList() const { return this->threadIdList_ != nullptr;};
          void deleteThreadIdList() { this->threadIdList_ = nullptr;};
          inline const vector<int64_t> & getThreadIdList() const { DARABONBA_PTR_GET_CONST(threadIdList_, vector<int64_t>) };
          inline vector<int64_t> getThreadIdList() { DARABONBA_PTR_GET(threadIdList_, vector<int64_t>) };
          inline UserStats& setThreadIdList(const vector<int64_t> & threadIdList) { DARABONBA_PTR_SET_VALUE(threadIdList_, threadIdList) };
          inline UserStats& setThreadIdList(vector<int64_t> && threadIdList) { DARABONBA_PTR_SET_RVALUE(threadIdList_, threadIdList) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
          inline UserStats& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          // userList Field Functions 
          bool hasUserList() const { return this->userList_ != nullptr;};
          void deleteUserList() { this->userList_ = nullptr;};
          inline const vector<string> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
          inline vector<string> getUserList() { DARABONBA_PTR_GET(userList_, vector<string>) };
          inline UserStats& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
          inline UserStats& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


        protected:
          // The number of active sessions within the account.
          // 
          // >  If the type of the command executed in the session is Query or Execute and the session in the transaction is not terminated, the session is active.
          shared_ptr<int64_t> activeCount_ {};
          // The database account.
          shared_ptr<string> key_ {};
          // The IDs of the sessions within the account.
          shared_ptr<vector<int64_t>> threadIdList_ {};
          // The total number of sessions within the account.
          shared_ptr<int64_t> totalCount_ {};
          // The database accounts to which the sessions belong.
          shared_ptr<vector<string>> userList_ {};
        };

        class SessionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SessionList& obj) { 
            DARABONBA_PTR_TO_JSON(Client, client_);
            DARABONBA_PTR_TO_JSON(Command, command_);
            DARABONBA_PTR_TO_JSON(DbName, dbName_);
            DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
            DARABONBA_PTR_TO_JSON(SqlTemplateId, sqlTemplateId_);
            DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
            DARABONBA_PTR_TO_JSON(State, state_);
            DARABONBA_PTR_TO_JSON(Time, time_);
            DARABONBA_PTR_TO_JSON(TrxDuration, trxDuration_);
            DARABONBA_PTR_TO_JSON(TrxId, trxId_);
            DARABONBA_PTR_TO_JSON(User, user_);
            DARABONBA_PTR_TO_JSON(UserClientAlias, userClientAlias_);
          };
          friend void from_json(const Darabonba::Json& j, SessionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Client, client_);
            DARABONBA_PTR_FROM_JSON(Command, command_);
            DARABONBA_PTR_FROM_JSON(DbName, dbName_);
            DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
            DARABONBA_PTR_FROM_JSON(SqlTemplateId, sqlTemplateId_);
            DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
            DARABONBA_PTR_FROM_JSON(State, state_);
            DARABONBA_PTR_FROM_JSON(Time, time_);
            DARABONBA_PTR_FROM_JSON(TrxDuration, trxDuration_);
            DARABONBA_PTR_FROM_JSON(TrxId, trxId_);
            DARABONBA_PTR_FROM_JSON(User, user_);
            DARABONBA_PTR_FROM_JSON(UserClientAlias, userClientAlias_);
          };
          SessionList() = default ;
          SessionList(const SessionList &) = default ;
          SessionList(SessionList &&) = default ;
          SessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SessionList() = default ;
          SessionList& operator=(const SessionList &) = default ;
          SessionList& operator=(SessionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->client_ == nullptr
        && this->command_ == nullptr && this->dbName_ == nullptr && this->sessionId_ == nullptr && this->sqlTemplateId_ == nullptr && this->sqlText_ == nullptr
        && this->state_ == nullptr && this->time_ == nullptr && this->trxDuration_ == nullptr && this->trxId_ == nullptr && this->user_ == nullptr
        && this->userClientAlias_ == nullptr; };
          // client Field Functions 
          bool hasClient() const { return this->client_ != nullptr;};
          void deleteClient() { this->client_ = nullptr;};
          inline string getClient() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
          inline SessionList& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
          inline SessionList& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          // dbName Field Functions 
          bool hasDbName() const { return this->dbName_ != nullptr;};
          void deleteDbName() { this->dbName_ = nullptr;};
          inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
          inline SessionList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


          // sessionId Field Functions 
          bool hasSessionId() const { return this->sessionId_ != nullptr;};
          void deleteSessionId() { this->sessionId_ = nullptr;};
          inline int64_t getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
          inline SessionList& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


          // sqlTemplateId Field Functions 
          bool hasSqlTemplateId() const { return this->sqlTemplateId_ != nullptr;};
          void deleteSqlTemplateId() { this->sqlTemplateId_ = nullptr;};
          inline string getSqlTemplateId() const { DARABONBA_PTR_GET_DEFAULT(sqlTemplateId_, "") };
          inline SessionList& setSqlTemplateId(string sqlTemplateId) { DARABONBA_PTR_SET_VALUE(sqlTemplateId_, sqlTemplateId) };


          // sqlText Field Functions 
          bool hasSqlText() const { return this->sqlText_ != nullptr;};
          void deleteSqlText() { this->sqlText_ = nullptr;};
          inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
          inline SessionList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline SessionList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
          inline SessionList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


          // trxDuration Field Functions 
          bool hasTrxDuration() const { return this->trxDuration_ != nullptr;};
          void deleteTrxDuration() { this->trxDuration_ = nullptr;};
          inline int64_t getTrxDuration() const { DARABONBA_PTR_GET_DEFAULT(trxDuration_, 0L) };
          inline SessionList& setTrxDuration(int64_t trxDuration) { DARABONBA_PTR_SET_VALUE(trxDuration_, trxDuration) };


          // trxId Field Functions 
          bool hasTrxId() const { return this->trxId_ != nullptr;};
          void deleteTrxId() { this->trxId_ = nullptr;};
          inline string getTrxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
          inline SessionList& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


          // user Field Functions 
          bool hasUser() const { return this->user_ != nullptr;};
          void deleteUser() { this->user_ = nullptr;};
          inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
          inline SessionList& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


          // userClientAlias Field Functions 
          bool hasUserClientAlias() const { return this->userClientAlias_ != nullptr;};
          void deleteUserClientAlias() { this->userClientAlias_ = nullptr;};
          inline string getUserClientAlias() const { DARABONBA_PTR_GET_DEFAULT(userClientAlias_, "") };
          inline SessionList& setUserClientAlias(string userClientAlias) { DARABONBA_PTR_SET_VALUE(userClientAlias_, userClientAlias) };


        protected:
          // The IP address of the client.
          shared_ptr<string> client_ {};
          // The type of the command executed in the session.
          shared_ptr<string> command_ {};
          // The database name.
          shared_ptr<string> dbName_ {};
          // The session ID.
          shared_ptr<int64_t> sessionId_ {};
          // The SQL template ID.
          // 
          // >  This parameter is returned only when you use a PolarDB-X 2.0 instance.
          shared_ptr<string> sqlTemplateId_ {};
          // The SQL statement executed in the session.
          shared_ptr<string> sqlText_ {};
          // The status of the session.
          shared_ptr<string> state_ {};
          // The execution duration of the session. Unit: seconds.
          shared_ptr<int64_t> time_ {};
          // The duration of the transaction. Unit: seconds.
          shared_ptr<int64_t> trxDuration_ {};
          // The ID of the transaction to which the session belongs.
          shared_ptr<string> trxId_ {};
          // The username of the database account.
          shared_ptr<string> user_ {};
          // The alias of the IP address of the client.
          shared_ptr<string> userClientAlias_ {};
        };

        class DbStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DbStats& obj) { 
            DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_TO_JSON(UserList, userList_);
          };
          friend void from_json(const Darabonba::Json& j, DbStats& obj) { 
            DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_FROM_JSON(UserList, userList_);
          };
          DbStats() = default ;
          DbStats(const DbStats &) = default ;
          DbStats(DbStats &&) = default ;
          DbStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DbStats() = default ;
          DbStats& operator=(const DbStats &) = default ;
          DbStats& operator=(DbStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->key_ == nullptr && this->threadIdList_ == nullptr && this->totalCount_ == nullptr && this->userList_ == nullptr; };
          // activeCount Field Functions 
          bool hasActiveCount() const { return this->activeCount_ != nullptr;};
          void deleteActiveCount() { this->activeCount_ = nullptr;};
          inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
          inline DbStats& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline DbStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // threadIdList Field Functions 
          bool hasThreadIdList() const { return this->threadIdList_ != nullptr;};
          void deleteThreadIdList() { this->threadIdList_ = nullptr;};
          inline const vector<int64_t> & getThreadIdList() const { DARABONBA_PTR_GET_CONST(threadIdList_, vector<int64_t>) };
          inline vector<int64_t> getThreadIdList() { DARABONBA_PTR_GET(threadIdList_, vector<int64_t>) };
          inline DbStats& setThreadIdList(const vector<int64_t> & threadIdList) { DARABONBA_PTR_SET_VALUE(threadIdList_, threadIdList) };
          inline DbStats& setThreadIdList(vector<int64_t> && threadIdList) { DARABONBA_PTR_SET_RVALUE(threadIdList_, threadIdList) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
          inline DbStats& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          // userList Field Functions 
          bool hasUserList() const { return this->userList_ != nullptr;};
          void deleteUserList() { this->userList_ = nullptr;};
          inline const vector<string> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
          inline vector<string> getUserList() { DARABONBA_PTR_GET(userList_, vector<string>) };
          inline DbStats& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
          inline DbStats& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


        protected:
          // The number of active sessions of the database.
          // 
          // >  If the type of the command executed in the session is Query or Execute and the session in the transaction is not terminated, the session is active.
          shared_ptr<int64_t> activeCount_ {};
          // The database name.
          shared_ptr<string> key_ {};
          // The IDs of the sessions of the database.
          shared_ptr<vector<int64_t>> threadIdList_ {};
          // The total number of sessions of the database.
          shared_ptr<int64_t> totalCount_ {};
          // The database accounts to which the sessions belong.
          shared_ptr<vector<string>> userList_ {};
        };

        class ClientStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClientStats& obj) { 
            DARABONBA_PTR_TO_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_TO_JSON(UserList, userList_);
          };
          friend void from_json(const Darabonba::Json& j, ClientStats& obj) { 
            DARABONBA_PTR_FROM_JSON(ActiveCount, activeCount_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(ThreadIdList, threadIdList_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
            DARABONBA_PTR_FROM_JSON(UserList, userList_);
          };
          ClientStats() = default ;
          ClientStats(const ClientStats &) = default ;
          ClientStats(ClientStats &&) = default ;
          ClientStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClientStats() = default ;
          ClientStats& operator=(const ClientStats &) = default ;
          ClientStats& operator=(ClientStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->activeCount_ == nullptr
        && this->key_ == nullptr && this->threadIdList_ == nullptr && this->totalCount_ == nullptr && this->userList_ == nullptr; };
          // activeCount Field Functions 
          bool hasActiveCount() const { return this->activeCount_ != nullptr;};
          void deleteActiveCount() { this->activeCount_ = nullptr;};
          inline int64_t getActiveCount() const { DARABONBA_PTR_GET_DEFAULT(activeCount_, 0L) };
          inline ClientStats& setActiveCount(int64_t activeCount) { DARABONBA_PTR_SET_VALUE(activeCount_, activeCount) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline ClientStats& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // threadIdList Field Functions 
          bool hasThreadIdList() const { return this->threadIdList_ != nullptr;};
          void deleteThreadIdList() { this->threadIdList_ = nullptr;};
          inline const vector<int64_t> & getThreadIdList() const { DARABONBA_PTR_GET_CONST(threadIdList_, vector<int64_t>) };
          inline vector<int64_t> getThreadIdList() { DARABONBA_PTR_GET(threadIdList_, vector<int64_t>) };
          inline ClientStats& setThreadIdList(const vector<int64_t> & threadIdList) { DARABONBA_PTR_SET_VALUE(threadIdList_, threadIdList) };
          inline ClientStats& setThreadIdList(vector<int64_t> && threadIdList) { DARABONBA_PTR_SET_RVALUE(threadIdList_, threadIdList) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
          inline ClientStats& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          // userList Field Functions 
          bool hasUserList() const { return this->userList_ != nullptr;};
          void deleteUserList() { this->userList_ = nullptr;};
          inline const vector<string> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<string>) };
          inline vector<string> getUserList() { DARABONBA_PTR_GET(userList_, vector<string>) };
          inline ClientStats& setUserList(const vector<string> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
          inline ClientStats& setUserList(vector<string> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


        protected:
          // The number of active sessions that belong to the client IP address.
          // 
          // >  If the type of the command executed in the session is Query or Execute and the session in the transaction is not terminated, the session is active.
          shared_ptr<int64_t> activeCount_ {};
          // The IP address of the client.
          shared_ptr<string> key_ {};
          // The IDs of the sessions that belong to the client IP address.
          shared_ptr<vector<int64_t>> threadIdList_ {};
          // The total number of sessions that belong to the client IP address.
          shared_ptr<int64_t> totalCount_ {};
          // The database accounts to which the sessions belong.
          shared_ptr<vector<string>> userList_ {};
        };

        virtual bool empty() const override { return this->activeSessionCount_ == nullptr
        && this->clientStats_ == nullptr && this->dbStats_ == nullptr && this->maxActiveTime_ == nullptr && this->sessionList_ == nullptr && this->timeStamp_ == nullptr
        && this->totalSessionCount_ == nullptr && this->userStats_ == nullptr; };
        // activeSessionCount Field Functions 
        bool hasActiveSessionCount() const { return this->activeSessionCount_ != nullptr;};
        void deleteActiveSessionCount() { this->activeSessionCount_ = nullptr;};
        inline int64_t getActiveSessionCount() const { DARABONBA_PTR_GET_DEFAULT(activeSessionCount_, 0L) };
        inline SessionData& setActiveSessionCount(int64_t activeSessionCount) { DARABONBA_PTR_SET_VALUE(activeSessionCount_, activeSessionCount) };


        // clientStats Field Functions 
        bool hasClientStats() const { return this->clientStats_ != nullptr;};
        void deleteClientStats() { this->clientStats_ = nullptr;};
        inline const vector<SessionData::ClientStats> & getClientStats() const { DARABONBA_PTR_GET_CONST(clientStats_, vector<SessionData::ClientStats>) };
        inline vector<SessionData::ClientStats> getClientStats() { DARABONBA_PTR_GET(clientStats_, vector<SessionData::ClientStats>) };
        inline SessionData& setClientStats(const vector<SessionData::ClientStats> & clientStats) { DARABONBA_PTR_SET_VALUE(clientStats_, clientStats) };
        inline SessionData& setClientStats(vector<SessionData::ClientStats> && clientStats) { DARABONBA_PTR_SET_RVALUE(clientStats_, clientStats) };


        // dbStats Field Functions 
        bool hasDbStats() const { return this->dbStats_ != nullptr;};
        void deleteDbStats() { this->dbStats_ = nullptr;};
        inline const vector<SessionData::DbStats> & getDbStats() const { DARABONBA_PTR_GET_CONST(dbStats_, vector<SessionData::DbStats>) };
        inline vector<SessionData::DbStats> getDbStats() { DARABONBA_PTR_GET(dbStats_, vector<SessionData::DbStats>) };
        inline SessionData& setDbStats(const vector<SessionData::DbStats> & dbStats) { DARABONBA_PTR_SET_VALUE(dbStats_, dbStats) };
        inline SessionData& setDbStats(vector<SessionData::DbStats> && dbStats) { DARABONBA_PTR_SET_RVALUE(dbStats_, dbStats) };


        // maxActiveTime Field Functions 
        bool hasMaxActiveTime() const { return this->maxActiveTime_ != nullptr;};
        void deleteMaxActiveTime() { this->maxActiveTime_ = nullptr;};
        inline int64_t getMaxActiveTime() const { DARABONBA_PTR_GET_DEFAULT(maxActiveTime_, 0L) };
        inline SessionData& setMaxActiveTime(int64_t maxActiveTime) { DARABONBA_PTR_SET_VALUE(maxActiveTime_, maxActiveTime) };


        // sessionList Field Functions 
        bool hasSessionList() const { return this->sessionList_ != nullptr;};
        void deleteSessionList() { this->sessionList_ = nullptr;};
        inline const vector<SessionData::SessionList> & getSessionList() const { DARABONBA_PTR_GET_CONST(sessionList_, vector<SessionData::SessionList>) };
        inline vector<SessionData::SessionList> getSessionList() { DARABONBA_PTR_GET(sessionList_, vector<SessionData::SessionList>) };
        inline SessionData& setSessionList(const vector<SessionData::SessionList> & sessionList) { DARABONBA_PTR_SET_VALUE(sessionList_, sessionList) };
        inline SessionData& setSessionList(vector<SessionData::SessionList> && sessionList) { DARABONBA_PTR_SET_RVALUE(sessionList_, sessionList) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
        inline SessionData& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // totalSessionCount Field Functions 
        bool hasTotalSessionCount() const { return this->totalSessionCount_ != nullptr;};
        void deleteTotalSessionCount() { this->totalSessionCount_ = nullptr;};
        inline int64_t getTotalSessionCount() const { DARABONBA_PTR_GET_DEFAULT(totalSessionCount_, 0L) };
        inline SessionData& setTotalSessionCount(int64_t totalSessionCount) { DARABONBA_PTR_SET_VALUE(totalSessionCount_, totalSessionCount) };


        // userStats Field Functions 
        bool hasUserStats() const { return this->userStats_ != nullptr;};
        void deleteUserStats() { this->userStats_ = nullptr;};
        inline const vector<SessionData::UserStats> & getUserStats() const { DARABONBA_PTR_GET_CONST(userStats_, vector<SessionData::UserStats>) };
        inline vector<SessionData::UserStats> getUserStats() { DARABONBA_PTR_GET(userStats_, vector<SessionData::UserStats>) };
        inline SessionData& setUserStats(const vector<SessionData::UserStats> & userStats) { DARABONBA_PTR_SET_VALUE(userStats_, userStats) };
        inline SessionData& setUserStats(vector<SessionData::UserStats> && userStats) { DARABONBA_PTR_SET_RVALUE(userStats_, userStats) };


      protected:
        // The total number of active sessions.
        shared_ptr<int64_t> activeSessionCount_ {};
        // The sessions that are counted by client IP address.
        shared_ptr<vector<SessionData::ClientStats>> clientStats_ {};
        // The sessions that are counted by database.
        shared_ptr<vector<SessionData::DbStats>> dbStats_ {};
        // The maximum execution duration of an active session. Unit: seconds.
        shared_ptr<int64_t> maxActiveTime_ {};
        // The sessions.
        shared_ptr<vector<SessionData::SessionList>> sessionList_ {};
        // The time when the session was queried. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> timeStamp_ {};
        // The total number of sessions.
        shared_ptr<int64_t> totalSessionCount_ {};
        // The sessions that are counted by database account.
        shared_ptr<vector<SessionData::UserStats>> userStats_ {};
      };

      virtual bool empty() const override { return this->complete_ == nullptr
        && this->fail_ == nullptr && this->isFinish_ == nullptr && this->resultId_ == nullptr && this->sessionData_ == nullptr && this->state_ == nullptr
        && this->timestamp_ == nullptr; };
      // complete Field Functions 
      bool hasComplete() const { return this->complete_ != nullptr;};
      void deleteComplete() { this->complete_ = nullptr;};
      inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
      inline Data& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline bool getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
      inline Data& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // sessionData Field Functions 
      bool hasSessionData() const { return this->sessionData_ != nullptr;};
      void deleteSessionData() { this->sessionData_ = nullptr;};
      inline const Data::SessionData & getSessionData() const { DARABONBA_PTR_GET_CONST(sessionData_, Data::SessionData) };
      inline Data::SessionData getSessionData() { DARABONBA_PTR_GET(sessionData_, Data::SessionData) };
      inline Data& setSessionData(const Data::SessionData & sessionData) { DARABONBA_PTR_SET_VALUE(sessionData_, sessionData) };
      inline Data& setSessionData(Data::SessionData && sessionData) { DARABONBA_PTR_SET_RVALUE(sessionData_, sessionData) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // Indicates whether the asynchronous request was complete. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> complete_ {};
      // Indicates whether the asynchronous request failed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> fail_ {};
      // Indicates whether the asynchronous request was complete. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isFinish_ {};
      // The ID of the asynchronous request.
      shared_ptr<string> resultId_ {};
      // The session data.
      shared_ptr<Data::SessionData> sessionData_ {};
      // The state of the asynchronous request. Valid values:
      // 
      // *   **RUNNING**
      // *   **SUCCESS**
      // *   **FAIL**
      shared_ptr<string> state_ {};
      // The time when the asynchronous request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMySQLAllSessionAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMySQLAllSessionAsyncResponseBody::Data) };
    inline GetMySQLAllSessionAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMySQLAllSessionAsyncResponseBody::Data) };
    inline GetMySQLAllSessionAsyncResponseBody& setData(const GetMySQLAllSessionAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMySQLAllSessionAsyncResponseBody& setData(GetMySQLAllSessionAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMySQLAllSessionAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMySQLAllSessionAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMySQLAllSessionAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetMySQLAllSessionAsyncResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
