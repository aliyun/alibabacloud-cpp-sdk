// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORREQUESTSAMPLERESPONSEBODY_HPP_
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
  class GetErrorRequestSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorRequestSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorRequestSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetErrorRequestSampleResponseBody() = default ;
    GetErrorRequestSampleResponseBody(const GetErrorRequestSampleResponseBody &) = default ;
    GetErrorRequestSampleResponseBody(GetErrorRequestSampleResponseBody &&) = default ;
    GetErrorRequestSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorRequestSampleResponseBody() = default ;
    GetErrorRequestSampleResponseBody& operator=(const GetErrorRequestSampleResponseBody &) = default ;
    GetErrorRequestSampleResponseBody& operator=(GetErrorRequestSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->database_ == nullptr
        && this->errorCode_ == nullptr && this->instanceId_ == nullptr && this->originHost_ == nullptr && this->sql_ == nullptr && this->sqlId_ == nullptr
        && this->tables_ == nullptr && this->timestamp_ == nullptr && this->user_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Data& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // originHost Field Functions 
      bool hasOriginHost() const { return this->originHost_ != nullptr;};
      void deleteOriginHost() { this->originHost_ = nullptr;};
      inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
      inline Data& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Data& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // sqlId Field Functions 
      bool hasSqlId() const { return this->sqlId_ != nullptr;};
      void deleteSqlId() { this->sqlId_ = nullptr;};
      inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
      inline Data& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
      inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
      inline Data& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The database name.
      shared_ptr<string> database_ {};
      // The error code that is returned.
      shared_ptr<string> errorCode_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The IP address of the client that executes the SQL statement.
      shared_ptr<string> originHost_ {};
      // The SQL statement.
      shared_ptr<string> sql_ {};
      // The SQL query ID.
      shared_ptr<string> sqlId_ {};
      // The table information.
      shared_ptr<vector<string>> tables_ {};
      // The time when the SQL query was executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      // The username of the account that is used to log on to the database.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetErrorRequestSampleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetErrorRequestSampleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetErrorRequestSampleResponseBody::Data>) };
    inline vector<GetErrorRequestSampleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetErrorRequestSampleResponseBody::Data>) };
    inline GetErrorRequestSampleResponseBody& setData(const vector<GetErrorRequestSampleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetErrorRequestSampleResponseBody& setData(vector<GetErrorRequestSampleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErrorRequestSampleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorRequestSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetErrorRequestSampleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<vector<GetErrorRequestSampleResponseBody::Data>> data_ {};
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
