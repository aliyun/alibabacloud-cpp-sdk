// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLSTATEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSqlStatementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlStatementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSqlStatementResponseBody() = default ;
    GetSqlStatementResponseBody(const GetSqlStatementResponseBody &) = default ;
    GetSqlStatementResponseBody(GetSqlStatementResponseBody &&) = default ;
    GetSqlStatementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlStatementResponseBody() = default ;
    GetSqlStatementResponseBody& operator=(const GetSqlStatementResponseBody &) = default ;
    GetSqlStatementResponseBody& operator=(GetSqlStatementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(executionTime, executionTime_);
        DARABONBA_PTR_TO_JSON(sqlErrorCode, sqlErrorCode_);
        DARABONBA_PTR_TO_JSON(sqlErrorMessage, sqlErrorMessage_);
        DARABONBA_PTR_TO_JSON(sqlOutputs, sqlOutputs_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(statementId, statementId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(executionTime, executionTime_);
        DARABONBA_PTR_FROM_JSON(sqlErrorCode, sqlErrorCode_);
        DARABONBA_PTR_FROM_JSON(sqlErrorMessage, sqlErrorMessage_);
        DARABONBA_PTR_FROM_JSON(sqlOutputs, sqlOutputs_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(statementId, statementId_);
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
      class SqlOutputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SqlOutputs& obj) { 
          DARABONBA_PTR_TO_JSON(rows, rows_);
          DARABONBA_PTR_TO_JSON(rowsFilePath, rowsFilePath_);
          DARABONBA_PTR_TO_JSON(schema, schema_);
        };
        friend void from_json(const Darabonba::Json& j, SqlOutputs& obj) { 
          DARABONBA_PTR_FROM_JSON(rows, rows_);
          DARABONBA_PTR_FROM_JSON(rowsFilePath, rowsFilePath_);
          DARABONBA_PTR_FROM_JSON(schema, schema_);
        };
        SqlOutputs() = default ;
        SqlOutputs(const SqlOutputs &) = default ;
        SqlOutputs(SqlOutputs &&) = default ;
        SqlOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SqlOutputs() = default ;
        SqlOutputs& operator=(const SqlOutputs &) = default ;
        SqlOutputs& operator=(SqlOutputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rows_ == nullptr
        && this->rowsFilePath_ == nullptr && this->schema_ == nullptr; };
        // rows Field Functions 
        bool hasRows() const { return this->rows_ != nullptr;};
        void deleteRows() { this->rows_ = nullptr;};
        inline string getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
        inline SqlOutputs& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


        // rowsFilePath Field Functions 
        bool hasRowsFilePath() const { return this->rowsFilePath_ != nullptr;};
        void deleteRowsFilePath() { this->rowsFilePath_ = nullptr;};
        inline string getRowsFilePath() const { DARABONBA_PTR_GET_DEFAULT(rowsFilePath_, "") };
        inline SqlOutputs& setRowsFilePath(string rowsFilePath) { DARABONBA_PTR_SET_VALUE(rowsFilePath_, rowsFilePath) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline SqlOutputs& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      protected:
        // The queried data, which is a string in the JSON format.
        shared_ptr<string> rows_ {};
        shared_ptr<string> rowsFilePath_ {};
        // The information about the schema, which is a string in the JSON format.
        shared_ptr<string> schema_ {};
      };

      virtual bool empty() const override { return this->executionTime_ == nullptr
        && this->sqlErrorCode_ == nullptr && this->sqlErrorMessage_ == nullptr && this->sqlOutputs_ == nullptr && this->state_ == nullptr && this->statementId_ == nullptr; };
      // executionTime Field Functions 
      bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
      void deleteExecutionTime() { this->executionTime_ = nullptr;};
      inline const vector<int64_t> & getExecutionTime() const { DARABONBA_PTR_GET_CONST(executionTime_, vector<int64_t>) };
      inline vector<int64_t> getExecutionTime() { DARABONBA_PTR_GET(executionTime_, vector<int64_t>) };
      inline Data& setExecutionTime(const vector<int64_t> & executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };
      inline Data& setExecutionTime(vector<int64_t> && executionTime) { DARABONBA_PTR_SET_RVALUE(executionTime_, executionTime) };


      // sqlErrorCode Field Functions 
      bool hasSqlErrorCode() const { return this->sqlErrorCode_ != nullptr;};
      void deleteSqlErrorCode() { this->sqlErrorCode_ = nullptr;};
      inline string getSqlErrorCode() const { DARABONBA_PTR_GET_DEFAULT(sqlErrorCode_, "") };
      inline Data& setSqlErrorCode(string sqlErrorCode) { DARABONBA_PTR_SET_VALUE(sqlErrorCode_, sqlErrorCode) };


      // sqlErrorMessage Field Functions 
      bool hasSqlErrorMessage() const { return this->sqlErrorMessage_ != nullptr;};
      void deleteSqlErrorMessage() { this->sqlErrorMessage_ = nullptr;};
      inline string getSqlErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(sqlErrorMessage_, "") };
      inline Data& setSqlErrorMessage(string sqlErrorMessage) { DARABONBA_PTR_SET_VALUE(sqlErrorMessage_, sqlErrorMessage) };


      // sqlOutputs Field Functions 
      bool hasSqlOutputs() const { return this->sqlOutputs_ != nullptr;};
      void deleteSqlOutputs() { this->sqlOutputs_ = nullptr;};
      inline const vector<Data::SqlOutputs> & getSqlOutputs() const { DARABONBA_PTR_GET_CONST(sqlOutputs_, vector<Data::SqlOutputs>) };
      inline vector<Data::SqlOutputs> getSqlOutputs() { DARABONBA_PTR_GET(sqlOutputs_, vector<Data::SqlOutputs>) };
      inline Data& setSqlOutputs(const vector<Data::SqlOutputs> & sqlOutputs) { DARABONBA_PTR_SET_VALUE(sqlOutputs_, sqlOutputs) };
      inline Data& setSqlOutputs(vector<Data::SqlOutputs> && sqlOutputs) { DARABONBA_PTR_SET_RVALUE(sqlOutputs_, sqlOutputs) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // statementId Field Functions 
      bool hasStatementId() const { return this->statementId_ != nullptr;};
      void deleteStatementId() { this->statementId_ = nullptr;};
      inline string getStatementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
      inline Data& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    protected:
      // The list of time that is consumed by SQL queries.
      shared_ptr<vector<int64_t>> executionTime_ {};
      // The error code.
      shared_ptr<string> sqlErrorCode_ {};
      // The error message.
      shared_ptr<string> sqlErrorMessage_ {};
      // The query results.
      shared_ptr<vector<Data::SqlOutputs>> sqlOutputs_ {};
      // The query status.
      // 
      // Valid values:
      // 
      // *   running
      // *   available
      // *   cancelled
      // *   error
      // *   cancelling
      shared_ptr<string> state_ {};
      // The query ID.
      shared_ptr<string> statementId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSqlStatementResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSqlStatementResponseBody::Data) };
    inline GetSqlStatementResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSqlStatementResponseBody::Data) };
    inline GetSqlStatementResponseBody& setData(const GetSqlStatementResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlStatementResponseBody& setData(GetSqlStatementResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlStatementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetSqlStatementResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
