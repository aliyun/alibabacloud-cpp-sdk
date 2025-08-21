// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATASESSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCRESPONSEBODYDATASESSIONDATASESSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& obj) { 
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
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList(const GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList(GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList &&) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList() = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& operator=(const GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList &) = default ;
    GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& operator=(GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->client_ != nullptr
        && this->command_ != nullptr && this->dbName_ != nullptr && this->sessionId_ != nullptr && this->sqlTemplateId_ != nullptr && this->sqlText_ != nullptr
        && this->state_ != nullptr && this->time_ != nullptr && this->trxDuration_ != nullptr && this->trxId_ != nullptr && this->user_ != nullptr
        && this->userClientAlias_ != nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline string client() const { DARABONBA_PTR_GET_DEFAULT(client_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setClient(string client) { DARABONBA_PTR_SET_VALUE(client_, client) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sqlTemplateId Field Functions 
    bool hasSqlTemplateId() const { return this->sqlTemplateId_ != nullptr;};
    void deleteSqlTemplateId() { this->sqlTemplateId_ = nullptr;};
    inline string sqlTemplateId() const { DARABONBA_PTR_GET_DEFAULT(sqlTemplateId_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setSqlTemplateId(string sqlTemplateId) { DARABONBA_PTR_SET_VALUE(sqlTemplateId_, sqlTemplateId) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // trxDuration Field Functions 
    bool hasTrxDuration() const { return this->trxDuration_ != nullptr;};
    void deleteTrxDuration() { this->trxDuration_ = nullptr;};
    inline int64_t trxDuration() const { DARABONBA_PTR_GET_DEFAULT(trxDuration_, 0L) };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setTrxDuration(int64_t trxDuration) { DARABONBA_PTR_SET_VALUE(trxDuration_, trxDuration) };


    // trxId Field Functions 
    bool hasTrxId() const { return this->trxId_ != nullptr;};
    void deleteTrxId() { this->trxId_ = nullptr;};
    inline string trxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // userClientAlias Field Functions 
    bool hasUserClientAlias() const { return this->userClientAlias_ != nullptr;};
    void deleteUserClientAlias() { this->userClientAlias_ = nullptr;};
    inline string userClientAlias() const { DARABONBA_PTR_GET_DEFAULT(userClientAlias_, "") };
    inline GetMySQLAllSessionAsyncResponseBodyDataSessionDataSessionList& setUserClientAlias(string userClientAlias) { DARABONBA_PTR_SET_VALUE(userClientAlias_, userClientAlias) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> client_ = nullptr;
    // The type of the command executed in the session.
    std::shared_ptr<string> command_ = nullptr;
    // The database name.
    std::shared_ptr<string> dbName_ = nullptr;
    // The session ID.
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    // The SQL template ID.
    // 
    // >  This parameter is returned only when you use a PolarDB-X 2.0 instance.
    std::shared_ptr<string> sqlTemplateId_ = nullptr;
    // The SQL statement executed in the session.
    std::shared_ptr<string> sqlText_ = nullptr;
    // The status of the session.
    std::shared_ptr<string> state_ = nullptr;
    // The execution duration of the session. Unit: seconds.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The duration of the transaction. Unit: seconds.
    std::shared_ptr<int64_t> trxDuration_ = nullptr;
    // The ID of the transaction to which the session belongs.
    std::shared_ptr<string> trxId_ = nullptr;
    // The username of the database account.
    std::shared_ptr<string> user_ = nullptr;
    // The alias of the IP address of the client.
    std::shared_ptr<string> userClientAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
