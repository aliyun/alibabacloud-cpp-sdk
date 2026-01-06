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
      // The name of the database.
      shared_ptr<string> dbSchema_ {};
      // The database engine. Valid values:
      // 
      // *   **MySQL**
      // *   **PostgreSQL**
      // *   **SQLServer**
      // *   **PolarDBMySQL**
      // *   **PolarDBOracle**
      // *   **MongoDB**
      shared_ptr<string> engine_ {};
      // The time when the SQL diagnostics task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the SQL diagnostics task was modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> gmtModified_ {};
      // The unique ID of the diagnostics task.
      shared_ptr<string> messageId_ {};
      // The additional information.
      shared_ptr<string> param_ {};
      // The result of the SQL diagnostics task. The result includes the following information:
      // 
      // *   **endTime**: the end time of the SQL diagnostics task.
      // 
      // *   **errorCode**: the error code.
      // 
      //     *   **0001**: The SQL diagnostics task is complete.
      //     *   **0003**: The SQL diagnostics task failed.
      // 
      // *   **errorMessage**: the error message.
      // 
      // *   **estimateCost**: the estimated cost.
      // 
      //     *   **cpu**: the estimated CPU utilization of the index.
      //     *   **io**: the estimated I/O usage of the index.
      //     *   **rows**: the estimated values of the rows returned for the index.
      // 
      // *   **improvement**: the performance improvement ratio.
      // 
      // *   **indexAdvices**: the index recommendations, which include the following information:
      // 
      //     *   **columns**: the index columns.
      //     *   **ddlAddIndex**: the DDL statement for the index.
      //     *   **indexName**: the name of the index.
      //     *   **schemaName**: the name of the database.
      //     *   **tableName**: the name of the table.
      //     *   **unique**: indicates whether the index is unique.
      // 
      // *   **ip**: the IP address of the instance.
      // 
      // *   **messageId**: the ID of the diagnostics task.
      // 
      // *   **port**: the port used to connect to the instance.
      // 
      // *   **sqlTag**: the SQL tag.
      // 
      // *   **startTime**: the start time of the SQL diagnostics task.
      // 
      // *   **success**: indicates whether the request was successful.
      // 
      // *   **support**: indicates whether the SQL statement can be diagnosed. Valid values:
      // 
      //     *   **true**
      //     *   **false**
      // 
      // *   **tuningAdvices** : the SQL rewrite suggestions.
      shared_ptr<string> result_ {};
      // The SQL template ID.
      shared_ptr<string> sqlId_ {};
      // The state of the diagnostics task. Valid values:
      // 
      // *   **0**: The diagnostics task is in progress.
      // *   **1**: A diagnostics error occurred.
      // *   **2**: The diagnostics task is complete.
      // *   **3**: An SQL error occurred.
      // *   **4**: An engine error occurred.
      shared_ptr<int32_t> state_ {};
      // The unique ID of the diagnostics instance.
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
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetRequestDiagnosisResultResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, Successful is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
