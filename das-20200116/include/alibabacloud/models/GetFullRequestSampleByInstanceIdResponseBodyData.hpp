// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSAMPLEBYINSTANCEIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestSampleByInstanceIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestSampleByInstanceIdResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetFullRequestSampleByInstanceIdResponseBodyData& obj) { 
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
    GetFullRequestSampleByInstanceIdResponseBodyData() = default ;
    GetFullRequestSampleByInstanceIdResponseBodyData(const GetFullRequestSampleByInstanceIdResponseBodyData &) = default ;
    GetFullRequestSampleByInstanceIdResponseBodyData(GetFullRequestSampleByInstanceIdResponseBodyData &&) = default ;
    GetFullRequestSampleByInstanceIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestSampleByInstanceIdResponseBodyData() = default ;
    GetFullRequestSampleByInstanceIdResponseBodyData& operator=(const GetFullRequestSampleByInstanceIdResponseBodyData &) = default ;
    GetFullRequestSampleByInstanceIdResponseBodyData& operator=(GetFullRequestSampleByInstanceIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->frows_ != nullptr && this->lockWaitTime_ != nullptr && this->logicalRead_ != nullptr && this->originHost_ != nullptr && this->physicalAsyncRead_ != nullptr
        && this->physicalSyncRead_ != nullptr && this->rows_ != nullptr && this->rowsExamined_ != nullptr && this->rowsReturned_ != nullptr && this->rt_ != nullptr
        && this->scanRows_ != nullptr && this->scnt_ != nullptr && this->sql_ != nullptr && this->sqlId_ != nullptr && this->sqlType_ != nullptr
        && this->timestamp_ != nullptr && this->updateRows_ != nullptr && this->user_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline int64_t frows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


    // lockWaitTime Field Functions 
    bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
    void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
    inline double lockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0.0) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setLockWaitTime(double lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


    // logicalRead Field Functions 
    bool hasLogicalRead() const { return this->logicalRead_ != nullptr;};
    void deleteLogicalRead() { this->logicalRead_ = nullptr;};
    inline double logicalRead() const { DARABONBA_PTR_GET_DEFAULT(logicalRead_, 0.0) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setLogicalRead(double logicalRead) { DARABONBA_PTR_SET_VALUE(logicalRead_, logicalRead) };


    // originHost Field Functions 
    bool hasOriginHost() const { return this->originHost_ != nullptr;};
    void deleteOriginHost() { this->originHost_ = nullptr;};
    inline string originHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


    // physicalAsyncRead Field Functions 
    bool hasPhysicalAsyncRead() const { return this->physicalAsyncRead_ != nullptr;};
    void deletePhysicalAsyncRead() { this->physicalAsyncRead_ = nullptr;};
    inline double physicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncRead_, 0.0) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setPhysicalAsyncRead(double physicalAsyncRead) { DARABONBA_PTR_SET_VALUE(physicalAsyncRead_, physicalAsyncRead) };


    // physicalSyncRead Field Functions 
    bool hasPhysicalSyncRead() const { return this->physicalSyncRead_ != nullptr;};
    void deletePhysicalSyncRead() { this->physicalSyncRead_ = nullptr;};
    inline double physicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalSyncRead_, 0.0) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setPhysicalSyncRead(double physicalSyncRead) { DARABONBA_PTR_SET_VALUE(physicalSyncRead_, physicalSyncRead) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int64_t rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline int64_t rowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


    // rowsReturned Field Functions 
    bool hasRowsReturned() const { return this->rowsReturned_ != nullptr;};
    void deleteRowsReturned() { this->rowsReturned_ = nullptr;};
    inline int64_t rowsReturned() const { DARABONBA_PTR_GET_DEFAULT(rowsReturned_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setRowsReturned(int64_t rowsReturned) { DARABONBA_PTR_SET_VALUE(rowsReturned_, rowsReturned) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline double rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0.0) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setRt(double rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // scnt Field Functions 
    bool hasScnt() const { return this->scnt_ != nullptr;};
    void deleteScnt() { this->scnt_ = nullptr;};
    inline int64_t scnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // updateRows Field Functions 
    bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
    void deleteUpdateRows() { this->updateRows_ = nullptr;};
    inline int64_t updateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetFullRequestSampleByInstanceIdResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The number of rows fetched by PolarDB-X 2.0 compute nodes.
    std::shared_ptr<int64_t> frows_ = nullptr;
    // The lock wait duration. Unit: seconds.
    std::shared_ptr<double> lockWaitTime_ = nullptr;
    // The number of logical reads.
    std::shared_ptr<double> logicalRead_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> originHost_ = nullptr;
    // The number of physical asynchronous reads.
    std::shared_ptr<double> physicalAsyncRead_ = nullptr;
    // The number of physical synchronous reads.
    std::shared_ptr<double> physicalSyncRead_ = nullptr;
    // The number of rows updated or returned on PolarDB-X 2.0 compute nodes.
    std::shared_ptr<int64_t> rows_ = nullptr;
    // The total number of scanned rows.
    // 
    // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
    std::shared_ptr<int64_t> rowsExamined_ = nullptr;
    // The number of rows returned by the SQL statement.
    std::shared_ptr<int64_t> rowsReturned_ = nullptr;
    // The amount of time consumed to execute the SQL statement. Unit: seconds.
    std::shared_ptr<double> rt_ = nullptr;
    // The number of scanned rows.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The number of requests sent from PolarDB-X 2.0 compute nodes to data nodes.
    std::shared_ptr<int64_t> scnt_ = nullptr;
    // The sample SQL statement.
    std::shared_ptr<string> sql_ = nullptr;
    // The SQL statement ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The type of the SQL statement. Valid values: **SELECT**, **INSERT**, **UPDATE**, **DELETE**, **LOGIN**, **LOGOUT**, **MERGE**, **ALTER**, **CREATEINDEX**, **DROPINDEX**, **CREATE**, **DROP**, **SET**, **DESC**, **REPLACE**, **CALL**, **BEGIN**, **DESCRIBE**, **ROLLBACK**, **FLUSH**, **USE**, **SHOW**, **START**, **COMMIT**, and **RENAME**.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The time when the SQL statement was executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The number of updated rows.
    std::shared_ptr<int64_t> updateRows_ = nullptr;
    // The name of the user who executes the SQL statement.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
