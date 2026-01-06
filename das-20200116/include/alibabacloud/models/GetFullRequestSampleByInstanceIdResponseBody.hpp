// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODY_HPP_
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
  class GetFullRequestSampleByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestSampleByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestSampleByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFullRequestSampleByInstanceIdResponseBody() = default ;
    GetFullRequestSampleByInstanceIdResponseBody(const GetFullRequestSampleByInstanceIdResponseBody &) = default ;
    GetFullRequestSampleByInstanceIdResponseBody(GetFullRequestSampleByInstanceIdResponseBody &&) = default ;
    GetFullRequestSampleByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestSampleByInstanceIdResponseBody() = default ;
    GetFullRequestSampleByInstanceIdResponseBody& operator=(const GetFullRequestSampleByInstanceIdResponseBody &) = default ;
    GetFullRequestSampleByInstanceIdResponseBody& operator=(GetFullRequestSampleByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(Frows, frows_);
        DARABONBA_PTR_TO_JSON(LockWaitTime, lockWaitTime_);
        DARABONBA_PTR_TO_JSON(LogicalRead, logicalRead_);
        DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
        DARABONBA_PTR_TO_JSON(PhysicalAsyncRead, physicalAsyncRead_);
        DARABONBA_PTR_TO_JSON(PhysicalSyncRead, physicalSyncRead_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
        DARABONBA_PTR_TO_JSON(RowsReturned, rowsReturned_);
        DARABONBA_PTR_TO_JSON(Rt, rt_);
        DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_TO_JSON(Scnt, scnt_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(UpdateRows, updateRows_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(Frows, frows_);
        DARABONBA_PTR_FROM_JSON(LockWaitTime, lockWaitTime_);
        DARABONBA_PTR_FROM_JSON(LogicalRead, logicalRead_);
        DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
        DARABONBA_PTR_FROM_JSON(PhysicalAsyncRead, physicalAsyncRead_);
        DARABONBA_PTR_FROM_JSON(PhysicalSyncRead, physicalSyncRead_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
        DARABONBA_PTR_FROM_JSON(RowsReturned, rowsReturned_);
        DARABONBA_PTR_FROM_JSON(Rt, rt_);
        DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(UpdateRows, updateRows_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
        && this->frows_ == nullptr && this->lockWaitTime_ == nullptr && this->logicalRead_ == nullptr && this->originHost_ == nullptr && this->physicalAsyncRead_ == nullptr
        && this->physicalSyncRead_ == nullptr && this->rows_ == nullptr && this->rowsExamined_ == nullptr && this->rowsReturned_ == nullptr && this->rt_ == nullptr
        && this->scanRows_ == nullptr && this->scnt_ == nullptr && this->sql_ == nullptr && this->sqlId_ == nullptr && this->sqlType_ == nullptr
        && this->timestamp_ == nullptr && this->updateRows_ == nullptr && this->user_ == nullptr; };
      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Data& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // frows Field Functions 
      bool hasFrows() const { return this->frows_ != nullptr;};
      void deleteFrows() { this->frows_ = nullptr;};
      inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
      inline Data& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


      // lockWaitTime Field Functions 
      bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
      void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
      inline double getLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0.0) };
      inline Data& setLockWaitTime(double lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


      // logicalRead Field Functions 
      bool hasLogicalRead() const { return this->logicalRead_ != nullptr;};
      void deleteLogicalRead() { this->logicalRead_ = nullptr;};
      inline double getLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(logicalRead_, 0.0) };
      inline Data& setLogicalRead(double logicalRead) { DARABONBA_PTR_SET_VALUE(logicalRead_, logicalRead) };


      // originHost Field Functions 
      bool hasOriginHost() const { return this->originHost_ != nullptr;};
      void deleteOriginHost() { this->originHost_ = nullptr;};
      inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
      inline Data& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


      // physicalAsyncRead Field Functions 
      bool hasPhysicalAsyncRead() const { return this->physicalAsyncRead_ != nullptr;};
      void deletePhysicalAsyncRead() { this->physicalAsyncRead_ = nullptr;};
      inline double getPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncRead_, 0.0) };
      inline Data& setPhysicalAsyncRead(double physicalAsyncRead) { DARABONBA_PTR_SET_VALUE(physicalAsyncRead_, physicalAsyncRead) };


      // physicalSyncRead Field Functions 
      bool hasPhysicalSyncRead() const { return this->physicalSyncRead_ != nullptr;};
      void deletePhysicalSyncRead() { this->physicalSyncRead_ = nullptr;};
      inline double getPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalSyncRead_, 0.0) };
      inline Data& setPhysicalSyncRead(double physicalSyncRead) { DARABONBA_PTR_SET_VALUE(physicalSyncRead_, physicalSyncRead) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
      inline Data& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


      // rowsExamined Field Functions 
      bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
      void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
      inline int64_t getRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
      inline Data& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


      // rowsReturned Field Functions 
      bool hasRowsReturned() const { return this->rowsReturned_ != nullptr;};
      void deleteRowsReturned() { this->rowsReturned_ = nullptr;};
      inline int64_t getRowsReturned() const { DARABONBA_PTR_GET_DEFAULT(rowsReturned_, 0L) };
      inline Data& setRowsReturned(int64_t rowsReturned) { DARABONBA_PTR_SET_VALUE(rowsReturned_, rowsReturned) };


      // rt Field Functions 
      bool hasRt() const { return this->rt_ != nullptr;};
      void deleteRt() { this->rt_ = nullptr;};
      inline double getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0.0) };
      inline Data& setRt(double rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


      // scanRows Field Functions 
      bool hasScanRows() const { return this->scanRows_ != nullptr;};
      void deleteScanRows() { this->scanRows_ = nullptr;};
      inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
      inline Data& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


      // scnt Field Functions 
      bool hasScnt() const { return this->scnt_ != nullptr;};
      void deleteScnt() { this->scnt_ = nullptr;};
      inline int64_t getScnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
      inline Data& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


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


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline Data& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // updateRows Field Functions 
      bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
      void deleteUpdateRows() { this->updateRows_ = nullptr;};
      inline int64_t getUpdateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
      inline Data& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The name of the database.
      shared_ptr<string> database_ {};
      // The number of rows fetched by PolarDB-X 2.0 compute nodes.
      shared_ptr<int64_t> frows_ {};
      // The lock wait duration. Unit: seconds.
      shared_ptr<double> lockWaitTime_ {};
      // The number of logical reads.
      shared_ptr<double> logicalRead_ {};
      // The source IP address.
      shared_ptr<string> originHost_ {};
      // The number of physical asynchronous reads.
      shared_ptr<double> physicalAsyncRead_ {};
      // The number of physical synchronous reads.
      shared_ptr<double> physicalSyncRead_ {};
      // The number of rows updated or returned on PolarDB-X 2.0 compute nodes.
      shared_ptr<int64_t> rows_ {};
      // The total number of scanned rows.
      // 
      // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
      shared_ptr<int64_t> rowsExamined_ {};
      // The number of rows returned by the SQL statement.
      shared_ptr<int64_t> rowsReturned_ {};
      // The amount of time consumed to execute the SQL statement. Unit: seconds.
      shared_ptr<double> rt_ {};
      // The number of scanned rows.
      shared_ptr<int64_t> scanRows_ {};
      // The number of requests sent from PolarDB-X 2.0 compute nodes to data nodes.
      shared_ptr<int64_t> scnt_ {};
      // The sample SQL statement.
      shared_ptr<string> sql_ {};
      // The SQL statement ID.
      shared_ptr<string> sqlId_ {};
      // The type of the SQL statement. Valid values: **SELECT**, **INSERT**, **UPDATE**, **DELETE**, **LOGIN**, **LOGOUT**, **MERGE**, **ALTER**, **CREATEINDEX**, **DROPINDEX**, **CREATE**, **DROP**, **SET**, **DESC**, **REPLACE**, **CALL**, **BEGIN**, **DESCRIBE**, **ROLLBACK**, **FLUSH**, **USE**, **SHOW**, **START**, **COMMIT**, and **RENAME**.
      shared_ptr<string> sqlType_ {};
      // The time when the SQL statement was executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      // The number of updated rows.
      shared_ptr<int64_t> updateRows_ {};
      // The name of the user who executes the SQL statement.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetFullRequestSampleByInstanceIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetFullRequestSampleByInstanceIdResponseBody::Data>) };
    inline vector<GetFullRequestSampleByInstanceIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetFullRequestSampleByInstanceIdResponseBody::Data>) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setData(const vector<GetFullRequestSampleByInstanceIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setData(vector<GetFullRequestSampleByInstanceIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFullRequestSampleByInstanceIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<vector<GetFullRequestSampleByInstanceIdResponseBody::Data>> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message that contains information such as an error code is returned.
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
