// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRequestDiagnosisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRequestDiagnosisResultResponseBody() = default ;
    GetRequestDiagnosisResultResponseBody(const GetRequestDiagnosisResultResponseBody &) = default ;
    GetRequestDiagnosisResultResponseBody(GetRequestDiagnosisResultResponseBody &&) = default ;
    GetRequestDiagnosisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestDiagnosisResultResponseBody() = default ;
    GetRequestDiagnosisResultResponseBody& operator=(const GetRequestDiagnosisResultResponseBody &) = default ;
    GetRequestDiagnosisResultResponseBody& operator=(GetRequestDiagnosisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(dbSchema, dbSchema_);
        DARABONBA_PTR_TO_JSON(engine, engine_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(param, param_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(sqlId, sqlId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(dbSchema, dbSchema_);
        DARABONBA_PTR_FROM_JSON(engine, engine_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(param, param_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(sqlId, sqlId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(uuid, uuid_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dbSchema_ == nullptr && this->engine_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->messageId_ == nullptr
        && this->param_ == nullptr && this->result_ == nullptr && this->sqlId_ == nullptr && this->state_ == nullptr && this->uuid_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dbSchema Field Functions 
      bool hasDbSchema() const { return this->dbSchema_ != nullptr;};
      void deleteDbSchema() { this->dbSchema_ = nullptr;};
      inline string getDbSchema() const { DARABONBA_PTR_GET_DEFAULT(dbSchema_, "") };
      inline Data& setDbSchema(string dbSchema) { DARABONBA_PTR_SET_VALUE(dbSchema_, dbSchema) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Data& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Data& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Data& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // sqlId Field Functions 
      bool hasSqlId() const { return this->sqlId_ != nullptr;};
      void deleteSqlId() { this->sqlId_ = nullptr;};
      inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
      inline Data& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
      inline Data& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The user ID.
      shared_ptr<string> accountId_ {};
      // The database name.
      shared_ptr<string> dbSchema_ {};
      // The database engine. Valid values:
      // 
      // - **MySQL**
      // 
      // - **PostgreSQL**
      // 
      // - **SQL Server**
      // 
      // - **PolarDB-X**
      // 
      // - **PolarDB for Oracle**
      // 
      // - **MongoDB**
      shared_ptr<string> engine_ {};
      // The creation time of the SQL diagnosis, provided as a Unix timestamp in milliseconds.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time of the SQL diagnosis, provided as a Unix timestamp in milliseconds.
      shared_ptr<string> gmtModified_ {};
      // The unique ID of the diagnosis.
      shared_ptr<string> messageId_ {};
      // Additional information.
      shared_ptr<string> param_ {};
      // The details of the SQL diagnosis result, returned as a JSON-formatted string.
      // 
      // - **endTime**: The end time of the SQL diagnosis.
      // 
      // - **errorCode**: The error code.
      // 
      //   - **0001**: The diagnosis was successful.
      // 
      //   - **0003**: The diagnosis failed.
      // 
      // - **errorMessage**: The error message.
      // 
      // - **estimateCost**: The estimated cost.
      // 
      //   - **cpu**: The estimated CPU cost of the query.
      // 
      //   - **io**: The estimated I/O cost of the query.
      // 
      //   - **rows**: The estimated number of rows returned by the query.
      // 
      // - **improvement**: The performance improvement ratio.
      // 
      // - **indexAdvices**: The index suggestions.
      // 
      //   - **columns**: The index columns.
      // 
      //   - **ddlAddIndex**: The DDL statement for creating the index.
      // 
      //   - **indexName**: The index name.
      // 
      //   - **schemaName**: The schema name.
      // 
      //   - **tableName**: The table name.
      // 
      //   - **unique**: Indicates whether the index is a unique index.
      // 
      // - **ip**: The instance IP address.
      // 
      // - **messageId**: The diagnosis ID.
      // 
      // - **port**: The instance port.
      // 
      // - **sqlTag**: The SQL tags.
      // 
      //   - **PRED_EQUAL**: Equality predicate.
      // 
      //   - **CNT_QB**: Number of query blocks.
      // 
      //   - **CNT_TB**: Number of tables.
      // 
      //   - **JOIN_LEFT**: Left join.
      // 
      //   - **SEL_SMALL**: Small result set selection.
      // 
      //   - **AGGR_SEL**: Aggregate selection.
      // 
      //   - **PRED_LT_EQ / PRED_GT_EQ**: Less-than-or-equal-to / greater-than-or-equal-to predicate.
      // 
      //   - **PRED_LIKE_PREFIX**: LIKE prefix match.
      // 
      //   - **ORDER_BY**: Contains an ORDER BY clause.
      // 
      //   - **LIMIT**: Contains a LIMIT clause.
      // 
      //   - **GROUP_BY**: Contains a GROUP BY clause.
      // 
      //   - **JOIN_INNER**: Inner join.
      // 
      //   - **JOIN_RIGHT**: Right join.
      // 
      //   - **HAVING**: Contains a HAVING clause.
      // 
      //   - **UNION**: Contains a UNION operation.
      // 
      // - **startTime**: The start time of the SQL diagnosis.
      // 
      // - **success**: Indicates whether the diagnosis was successful.
      // 
      // - **support**: Indicates whether the SQL statement can be diagnosed.
      // 
      //   - **true**: Supported.
      // 
      //   - **false**: Not supported.
      // 
      // - **tuningAdvices**: The SQL rewrite suggestions.
      shared_ptr<string> result_ {};
      // The SQL template ID.
      shared_ptr<string> sqlId_ {};
      // The diagnosis status. Valid values:
      // 
      // - **0**: In progress.
      // 
      // - **1**: Diagnosis error.
      // 
      // - **2**: Completed.
      // 
      // - **3**: SQL error.
      // 
      // - **4**: Engine error.
      shared_ptr<int32_t> state_ {};
      // The unique identifier of the diagnosed instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRequestDiagnosisResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRequestDiagnosisResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRequestDiagnosisResultResponseBody::Data) };
    inline GetRequestDiagnosisResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRequestDiagnosisResultResponseBody::Data) };
    inline GetRequestDiagnosisResultResponseBody& setData(const GetRequestDiagnosisResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRequestDiagnosisResultResponseBody& setData(GetRequestDiagnosisResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRequestDiagnosisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRequestDiagnosisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetRequestDiagnosisResultResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetRequestDiagnosisResultResponseBody::Data> data_ {};
    // The response message.
    // 
    // > This parameter returns `Successful` if the request succeeds. If the request fails, it returns an error message, which may include an error code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request succeeded.
    // 
    // - **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
