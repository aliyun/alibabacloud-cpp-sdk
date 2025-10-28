// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLERESPONSEBODYDATA_HPP_
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
  class GetErrorRequestSampleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorRequestSampleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(originHost, originHost_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
      DARABONBA_PTR_TO_JSON(sqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorRequestSampleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(originHost, originHost_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
      DARABONBA_PTR_FROM_JSON(sqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    GetErrorRequestSampleResponseBodyData() = default ;
    GetErrorRequestSampleResponseBodyData(const GetErrorRequestSampleResponseBodyData &) = default ;
    GetErrorRequestSampleResponseBodyData(GetErrorRequestSampleResponseBodyData &&) = default ;
    GetErrorRequestSampleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorRequestSampleResponseBodyData() = default ;
    GetErrorRequestSampleResponseBodyData& operator=(const GetErrorRequestSampleResponseBodyData &) = default ;
    GetErrorRequestSampleResponseBodyData& operator=(GetErrorRequestSampleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->errorCode_ == nullptr && return this->instanceId_ == nullptr && return this->originHost_ == nullptr && return this->sql_ == nullptr && return this->sqlId_ == nullptr
        && return this->tables_ == nullptr && return this->timestamp_ == nullptr && return this->user_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetErrorRequestSampleResponseBodyData& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetErrorRequestSampleResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetErrorRequestSampleResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // originHost Field Functions 
    bool hasOriginHost() const { return this->originHost_ != nullptr;};
    void deleteOriginHost() { this->originHost_ = nullptr;};
    inline string originHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
    inline GetErrorRequestSampleResponseBodyData& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GetErrorRequestSampleResponseBodyData& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetErrorRequestSampleResponseBodyData& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline GetErrorRequestSampleResponseBodyData& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline GetErrorRequestSampleResponseBodyData& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetErrorRequestSampleResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetErrorRequestSampleResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The database name.
    std::shared_ptr<string> database_ = nullptr;
    // The error code that is returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the client that executes the SQL statement.
    std::shared_ptr<string> originHost_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> sql_ = nullptr;
    // The SQL query ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The table information.
    std::shared_ptr<vector<string>> tables_ = nullptr;
    // The time when the SQL query was executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The username of the account that is used to log on to the database.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
