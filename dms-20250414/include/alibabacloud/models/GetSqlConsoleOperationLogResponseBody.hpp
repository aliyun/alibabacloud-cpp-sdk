// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONSOLEOPERATIONLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONSOLEOPERATIONLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetSqlConsoleOperationLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConsoleOperationLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConsoleOperationLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetSqlConsoleOperationLogResponseBody() = default ;
    GetSqlConsoleOperationLogResponseBody(const GetSqlConsoleOperationLogResponseBody &) = default ;
    GetSqlConsoleOperationLogResponseBody(GetSqlConsoleOperationLogResponseBody &&) = default ;
    GetSqlConsoleOperationLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConsoleOperationLogResponseBody() = default ;
    GetSqlConsoleOperationLogResponseBody& operator=(const GetSqlConsoleOperationLogResponseBody &) = default ;
    GetSqlConsoleOperationLogResponseBody& operator=(GetSqlConsoleOperationLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(DatabaseSearchName, databaseSearchName_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
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
      virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->cost_ == nullptr && this->databaseSearchName_ == nullptr && this->error_ == nullptr && this->schema_ == nullptr && this->sql_ == nullptr
        && this->sqlType_ == nullptr && this->startTime_ == nullptr && this->success_ == nullptr && this->username_ == nullptr; };
      // affectRows Field Functions 
      bool hasAffectRows() const { return this->affectRows_ != nullptr;};
      void deleteAffectRows() { this->affectRows_ = nullptr;};
      inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
      inline Data& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
      inline Data& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // databaseSearchName Field Functions 
      bool hasDatabaseSearchName() const { return this->databaseSearchName_ != nullptr;};
      void deleteDatabaseSearchName() { this->databaseSearchName_ = nullptr;};
      inline string getDatabaseSearchName() const { DARABONBA_PTR_GET_DEFAULT(databaseSearchName_, "") };
      inline Data& setDatabaseSearchName(string databaseSearchName) { DARABONBA_PTR_SET_VALUE(databaseSearchName_, databaseSearchName) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Data& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Data& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline Data& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Data& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The number of affected rows.
      shared_ptr<int64_t> affectRows_ {};
      // The execution duration. Unit: milliseconds.
      shared_ptr<int64_t> cost_ {};
      // The database search name.
      shared_ptr<string> databaseSearchName_ {};
      // The error message.
      shared_ptr<string> error_ {};
      // The database schema.
      shared_ptr<string> schema_ {};
      // The SQL statement.
      shared_ptr<string> sql_ {};
      // The SQL type.
      shared_ptr<string> sqlType_ {};
      // The start time of the logs.
      shared_ptr<string> startTime_ {};
      // Indicates whether the statement is executed.
      shared_ptr<bool> success_ {};
      // The username.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSqlConsoleOperationLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSqlConsoleOperationLogResponseBody::Data>) };
    inline vector<GetSqlConsoleOperationLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSqlConsoleOperationLogResponseBody::Data>) };
    inline GetSqlConsoleOperationLogResponseBody& setData(const vector<GetSqlConsoleOperationLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlConsoleOperationLogResponseBody& setData(vector<GetSqlConsoleOperationLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSqlConsoleOperationLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSqlConsoleOperationLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlConsoleOperationLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSqlConsoleOperationLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetSqlConsoleOperationLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response struct.
    shared_ptr<vector<GetSqlConsoleOperationLogResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of logs.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
