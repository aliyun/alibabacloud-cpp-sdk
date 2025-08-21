// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATARESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTSTATRESULTBYINSTANCEIDRESPONSEBODYDATARESULTLIST_HPP_
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
  class GetFullRequestStatResultByInstanceIdResponseBodyDataResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& obj) { 
      DARABONBA_PTR_TO_JSON(AvgExaminedRows, avgExaminedRows_);
      DARABONBA_PTR_TO_JSON(AvgFetchRows, avgFetchRows_);
      DARABONBA_PTR_TO_JSON(AvgLockWaitTime, avgLockWaitTime_);
      DARABONBA_PTR_TO_JSON(AvgLogicalRead, avgLogicalRead_);
      DARABONBA_PTR_TO_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
      DARABONBA_PTR_TO_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
      DARABONBA_PTR_TO_JSON(AvgReturnedRows, avgReturnedRows_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgSqlCount, avgSqlCount_);
      DARABONBA_PTR_TO_JSON(AvgUpdatedRows, avgUpdatedRows_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CountRate, countRate_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ExaminedRows, examinedRows_);
      DARABONBA_PTR_TO_JSON(FetchRows, fetchRows_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(LockWaitTime, lockWaitTime_);
      DARABONBA_PTR_TO_JSON(LogicalRead, logicalRead_);
      DARABONBA_PTR_TO_JSON(PhysicalAsyncRead, physicalAsyncRead_);
      DARABONBA_PTR_TO_JSON(PhysicalSyncRead, physicalSyncRead_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Psql, psql_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
      DARABONBA_PTR_TO_JSON(RtRate, rtRate_);
      DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SumUpdatedRows, sumUpdatedRows_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgExaminedRows, avgExaminedRows_);
      DARABONBA_PTR_FROM_JSON(AvgFetchRows, avgFetchRows_);
      DARABONBA_PTR_FROM_JSON(AvgLockWaitTime, avgLockWaitTime_);
      DARABONBA_PTR_FROM_JSON(AvgLogicalRead, avgLogicalRead_);
      DARABONBA_PTR_FROM_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
      DARABONBA_PTR_FROM_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
      DARABONBA_PTR_FROM_JSON(AvgReturnedRows, avgReturnedRows_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgSqlCount, avgSqlCount_);
      DARABONBA_PTR_FROM_JSON(AvgUpdatedRows, avgUpdatedRows_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CountRate, countRate_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ExaminedRows, examinedRows_);
      DARABONBA_PTR_FROM_JSON(FetchRows, fetchRows_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(LockWaitTime, lockWaitTime_);
      DARABONBA_PTR_FROM_JSON(LogicalRead, logicalRead_);
      DARABONBA_PTR_FROM_JSON(PhysicalAsyncRead, physicalAsyncRead_);
      DARABONBA_PTR_FROM_JSON(PhysicalSyncRead, physicalSyncRead_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Psql, psql_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
      DARABONBA_PTR_FROM_JSON(RtRate, rtRate_);
      DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SumUpdatedRows, sumUpdatedRows_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList(const GetFullRequestStatResultByInstanceIdResponseBodyDataResultList &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList(GetFullRequestStatResultByInstanceIdResponseBodyDataResultList &&) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestStatResultByInstanceIdResponseBodyDataResultList() = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& operator=(const GetFullRequestStatResultByInstanceIdResponseBodyDataResultList &) = default ;
    GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& operator=(GetFullRequestStatResultByInstanceIdResponseBodyDataResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgExaminedRows_ != nullptr
        && this->avgFetchRows_ != nullptr && this->avgLockWaitTime_ != nullptr && this->avgLogicalRead_ != nullptr && this->avgPhysicalAsyncRead_ != nullptr && this->avgPhysicalSyncRead_ != nullptr
        && this->avgReturnedRows_ != nullptr && this->avgRt_ != nullptr && this->avgSqlCount_ != nullptr && this->avgUpdatedRows_ != nullptr && this->count_ != nullptr
        && this->countRate_ != nullptr && this->database_ != nullptr && this->errorCount_ != nullptr && this->examinedRows_ != nullptr && this->fetchRows_ != nullptr
        && this->ip_ != nullptr && this->lockWaitTime_ != nullptr && this->logicalRead_ != nullptr && this->physicalAsyncRead_ != nullptr && this->physicalSyncRead_ != nullptr
        && this->port_ != nullptr && this->psql_ != nullptr && this->rows_ != nullptr && this->rtGreaterThanOneSecondCount_ != nullptr && this->rtRate_ != nullptr
        && this->sqlCount_ != nullptr && this->sqlId_ != nullptr && this->sumUpdatedRows_ != nullptr && this->tables_ != nullptr && this->version_ != nullptr
        && this->vpcId_ != nullptr; };
    // avgExaminedRows Field Functions 
    bool hasAvgExaminedRows() const { return this->avgExaminedRows_ != nullptr;};
    void deleteAvgExaminedRows() { this->avgExaminedRows_ = nullptr;};
    inline double avgExaminedRows() const { DARABONBA_PTR_GET_DEFAULT(avgExaminedRows_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgExaminedRows(double avgExaminedRows) { DARABONBA_PTR_SET_VALUE(avgExaminedRows_, avgExaminedRows) };


    // avgFetchRows Field Functions 
    bool hasAvgFetchRows() const { return this->avgFetchRows_ != nullptr;};
    void deleteAvgFetchRows() { this->avgFetchRows_ = nullptr;};
    inline int64_t avgFetchRows() const { DARABONBA_PTR_GET_DEFAULT(avgFetchRows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgFetchRows(int64_t avgFetchRows) { DARABONBA_PTR_SET_VALUE(avgFetchRows_, avgFetchRows) };


    // avgLockWaitTime Field Functions 
    bool hasAvgLockWaitTime() const { return this->avgLockWaitTime_ != nullptr;};
    void deleteAvgLockWaitTime() { this->avgLockWaitTime_ = nullptr;};
    inline double avgLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockWaitTime_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgLockWaitTime(double avgLockWaitTime) { DARABONBA_PTR_SET_VALUE(avgLockWaitTime_, avgLockWaitTime) };


    // avgLogicalRead Field Functions 
    bool hasAvgLogicalRead() const { return this->avgLogicalRead_ != nullptr;};
    void deleteAvgLogicalRead() { this->avgLogicalRead_ = nullptr;};
    inline double avgLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(avgLogicalRead_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgLogicalRead(double avgLogicalRead) { DARABONBA_PTR_SET_VALUE(avgLogicalRead_, avgLogicalRead) };


    // avgPhysicalAsyncRead Field Functions 
    bool hasAvgPhysicalAsyncRead() const { return this->avgPhysicalAsyncRead_ != nullptr;};
    void deleteAvgPhysicalAsyncRead() { this->avgPhysicalAsyncRead_ = nullptr;};
    inline int64_t avgPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalAsyncRead_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgPhysicalAsyncRead(int64_t avgPhysicalAsyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalAsyncRead_, avgPhysicalAsyncRead) };


    // avgPhysicalSyncRead Field Functions 
    bool hasAvgPhysicalSyncRead() const { return this->avgPhysicalSyncRead_ != nullptr;};
    void deleteAvgPhysicalSyncRead() { this->avgPhysicalSyncRead_ = nullptr;};
    inline int64_t avgPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalSyncRead_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgPhysicalSyncRead(int64_t avgPhysicalSyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalSyncRead_, avgPhysicalSyncRead) };


    // avgReturnedRows Field Functions 
    bool hasAvgReturnedRows() const { return this->avgReturnedRows_ != nullptr;};
    void deleteAvgReturnedRows() { this->avgReturnedRows_ = nullptr;};
    inline double avgReturnedRows() const { DARABONBA_PTR_GET_DEFAULT(avgReturnedRows_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgReturnedRows(double avgReturnedRows) { DARABONBA_PTR_SET_VALUE(avgReturnedRows_, avgReturnedRows) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline double avgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


    // avgSqlCount Field Functions 
    bool hasAvgSqlCount() const { return this->avgSqlCount_ != nullptr;};
    void deleteAvgSqlCount() { this->avgSqlCount_ = nullptr;};
    inline int64_t avgSqlCount() const { DARABONBA_PTR_GET_DEFAULT(avgSqlCount_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgSqlCount(int64_t avgSqlCount) { DARABONBA_PTR_SET_VALUE(avgSqlCount_, avgSqlCount) };


    // avgUpdatedRows Field Functions 
    bool hasAvgUpdatedRows() const { return this->avgUpdatedRows_ != nullptr;};
    void deleteAvgUpdatedRows() { this->avgUpdatedRows_ = nullptr;};
    inline int64_t avgUpdatedRows() const { DARABONBA_PTR_GET_DEFAULT(avgUpdatedRows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setAvgUpdatedRows(int64_t avgUpdatedRows) { DARABONBA_PTR_SET_VALUE(avgUpdatedRows_, avgUpdatedRows) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // countRate Field Functions 
    bool hasCountRate() const { return this->countRate_ != nullptr;};
    void deleteCountRate() { this->countRate_ = nullptr;};
    inline double countRate() const { DARABONBA_PTR_GET_DEFAULT(countRate_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setCountRate(double countRate) { DARABONBA_PTR_SET_VALUE(countRate_, countRate) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // examinedRows Field Functions 
    bool hasExaminedRows() const { return this->examinedRows_ != nullptr;};
    void deleteExaminedRows() { this->examinedRows_ = nullptr;};
    inline int64_t examinedRows() const { DARABONBA_PTR_GET_DEFAULT(examinedRows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setExaminedRows(int64_t examinedRows) { DARABONBA_PTR_SET_VALUE(examinedRows_, examinedRows) };


    // fetchRows Field Functions 
    bool hasFetchRows() const { return this->fetchRows_ != nullptr;};
    void deleteFetchRows() { this->fetchRows_ = nullptr;};
    inline int64_t fetchRows() const { DARABONBA_PTR_GET_DEFAULT(fetchRows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setFetchRows(int64_t fetchRows) { DARABONBA_PTR_SET_VALUE(fetchRows_, fetchRows) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // lockWaitTime Field Functions 
    bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
    void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
    inline double lockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setLockWaitTime(double lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


    // logicalRead Field Functions 
    bool hasLogicalRead() const { return this->logicalRead_ != nullptr;};
    void deleteLogicalRead() { this->logicalRead_ = nullptr;};
    inline int64_t logicalRead() const { DARABONBA_PTR_GET_DEFAULT(logicalRead_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setLogicalRead(int64_t logicalRead) { DARABONBA_PTR_SET_VALUE(logicalRead_, logicalRead) };


    // physicalAsyncRead Field Functions 
    bool hasPhysicalAsyncRead() const { return this->physicalAsyncRead_ != nullptr;};
    void deletePhysicalAsyncRead() { this->physicalAsyncRead_ = nullptr;};
    inline int64_t physicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncRead_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setPhysicalAsyncRead(int64_t physicalAsyncRead) { DARABONBA_PTR_SET_VALUE(physicalAsyncRead_, physicalAsyncRead) };


    // physicalSyncRead Field Functions 
    bool hasPhysicalSyncRead() const { return this->physicalSyncRead_ != nullptr;};
    void deletePhysicalSyncRead() { this->physicalSyncRead_ = nullptr;};
    inline int64_t physicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalSyncRead_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setPhysicalSyncRead(int64_t physicalSyncRead) { DARABONBA_PTR_SET_VALUE(physicalSyncRead_, physicalSyncRead) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // psql Field Functions 
    bool hasPsql() const { return this->psql_ != nullptr;};
    void deletePsql() { this->psql_ = nullptr;};
    inline string psql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int64_t rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rtGreaterThanOneSecondCount Field Functions 
    bool hasRtGreaterThanOneSecondCount() const { return this->rtGreaterThanOneSecondCount_ != nullptr;};
    void deleteRtGreaterThanOneSecondCount() { this->rtGreaterThanOneSecondCount_ = nullptr;};
    inline int64_t rtGreaterThanOneSecondCount() const { DARABONBA_PTR_GET_DEFAULT(rtGreaterThanOneSecondCount_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setRtGreaterThanOneSecondCount(int64_t rtGreaterThanOneSecondCount) { DARABONBA_PTR_SET_VALUE(rtGreaterThanOneSecondCount_, rtGreaterThanOneSecondCount) };


    // rtRate Field Functions 
    bool hasRtRate() const { return this->rtRate_ != nullptr;};
    void deleteRtRate() { this->rtRate_ = nullptr;};
    inline double rtRate() const { DARABONBA_PTR_GET_DEFAULT(rtRate_, 0.0) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setRtRate(double rtRate) { DARABONBA_PTR_SET_VALUE(rtRate_, rtRate) };


    // sqlCount Field Functions 
    bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
    void deleteSqlCount() { this->sqlCount_ = nullptr;};
    inline int64_t sqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sumUpdatedRows Field Functions 
    bool hasSumUpdatedRows() const { return this->sumUpdatedRows_ != nullptr;};
    void deleteSumUpdatedRows() { this->sumUpdatedRows_ = nullptr;};
    inline int64_t sumUpdatedRows() const { DARABONBA_PTR_GET_DEFAULT(sumUpdatedRows_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setSumUpdatedRows(int64_t sumUpdatedRows) { DARABONBA_PTR_SET_VALUE(sumUpdatedRows_, sumUpdatedRows) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetFullRequestStatResultByInstanceIdResponseBodyDataResultList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The average number of scanned rows.
    // 
    // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
    std::shared_ptr<double> avgExaminedRows_ = nullptr;
    // The average number of rows that are fetched by compute nodes from data nodes on the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> avgFetchRows_ = nullptr;
    // The average lock wait latency. Unit: seconds.
    std::shared_ptr<double> avgLockWaitTime_ = nullptr;
    // The average number of logical reads.
    std::shared_ptr<double> avgLogicalRead_ = nullptr;
    // The average number of physical asynchronous reads.
    std::shared_ptr<int64_t> avgPhysicalAsyncRead_ = nullptr;
    // The average number of physical synchronous reads.
    std::shared_ptr<int64_t> avgPhysicalSyncRead_ = nullptr;
    // The average number of returned rows.
    std::shared_ptr<double> avgReturnedRows_ = nullptr;
    // The average execution duration.
    std::shared_ptr<double> avgRt_ = nullptr;
    // The average number of SQL statements.
    std::shared_ptr<int64_t> avgSqlCount_ = nullptr;
    // The average number of updated rows.
    // 
    //  > This parameter is returned only for ApsaraDB RDS for MySQL and PolarDB-X 2.0 databases.
    std::shared_ptr<int64_t> avgUpdatedRows_ = nullptr;
    // The total number of executions.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The percentage of the total number of executions.
    std::shared_ptr<double> countRate_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The number of failed executions.
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    // The total number of scanned rows.
    // 
    // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
    std::shared_ptr<int64_t> examinedRows_ = nullptr;
    // The number of rows that are fetched by compute nodes from data nodes on the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> fetchRows_ = nullptr;
    // The IP address of the database instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The lock wait latency. Unit: seconds.
    std::shared_ptr<double> lockWaitTime_ = nullptr;
    // The number of logical reads.
    std::shared_ptr<int64_t> logicalRead_ = nullptr;
    // The number of physical asynchronous reads.
    std::shared_ptr<int64_t> physicalAsyncRead_ = nullptr;
    // The number of physical synchronous reads.
    std::shared_ptr<int64_t> physicalSyncRead_ = nullptr;
    // The port number that is used to connect to the database instance.
    std::shared_ptr<int64_t> port_ = nullptr;
    // The SQL template.
    std::shared_ptr<string> psql_ = nullptr;
    // The total number of rows updated or returned by the compute nodes of the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> rows_ = nullptr;
    // The number of SQL statements that take longer than 1 second to execute.
    std::shared_ptr<int64_t> rtGreaterThanOneSecondCount_ = nullptr;
    // The execution duration percentage.
    std::shared_ptr<double> rtRate_ = nullptr;
    // The number of SQL statements.
    std::shared_ptr<int64_t> sqlCount_ = nullptr;
    // The SQL ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The total number of updated rows.
    std::shared_ptr<int64_t> sumUpdatedRows_ = nullptr;
    // The names of tables in the database.
    std::shared_ptr<vector<string>> tables_ = nullptr;
    // The version number.
    std::shared_ptr<int64_t> version_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
