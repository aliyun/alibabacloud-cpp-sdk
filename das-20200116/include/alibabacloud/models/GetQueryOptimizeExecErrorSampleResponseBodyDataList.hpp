// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLERESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLERESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeExecErrorSampleResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorSampleResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Dbname, dbname_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(OrigHost, origHost_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorSampleResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Dbname, dbname_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(OrigHost, origHost_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetQueryOptimizeExecErrorSampleResponseBodyDataList() = default ;
    GetQueryOptimizeExecErrorSampleResponseBodyDataList(const GetQueryOptimizeExecErrorSampleResponseBodyDataList &) = default ;
    GetQueryOptimizeExecErrorSampleResponseBodyDataList(GetQueryOptimizeExecErrorSampleResponseBodyDataList &&) = default ;
    GetQueryOptimizeExecErrorSampleResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorSampleResponseBodyDataList() = default ;
    GetQueryOptimizeExecErrorSampleResponseBodyDataList& operator=(const GetQueryOptimizeExecErrorSampleResponseBodyDataList &) = default ;
    GetQueryOptimizeExecErrorSampleResponseBodyDataList& operator=(GetQueryOptimizeExecErrorSampleResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbname_ != nullptr
        && this->errorCode_ != nullptr && this->origHost_ != nullptr && this->sqlId_ != nullptr && this->sqlText_ != nullptr && this->timestamp_ != nullptr
        && this->user_ != nullptr; };
    // dbname Field Functions 
    bool hasDbname() const { return this->dbname_ != nullptr;};
    void deleteDbname() { this->dbname_ = nullptr;};
    inline string dbname() const { DARABONBA_PTR_GET_DEFAULT(dbname_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setDbname(string dbname) { DARABONBA_PTR_SET_VALUE(dbname_, dbname) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // origHost Field Functions 
    bool hasOrigHost() const { return this->origHost_ != nullptr;};
    void deleteOrigHost() { this->origHost_ = nullptr;};
    inline string origHost() const { DARABONBA_PTR_GET_DEFAULT(origHost_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setOrigHost(string origHost) { DARABONBA_PTR_SET_VALUE(origHost_, origHost) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBodyDataList& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbname_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The IP address of the client that executes the SQL statement.
    std::shared_ptr<string> origHost_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The content of the SQL statement that failed to be executed.
    std::shared_ptr<string> sqlText_ = nullptr;
    // The point in time when the failed SQL statement was executed. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The username of the client that executes the SQL statement.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
