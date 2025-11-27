// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSQLSLOWRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSQLSLOWRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ClientHostName, clientHostName_);
      DARABONBA_PTR_TO_JSON(CpuTime, cpuTime_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(LastRowsAffectedCount, lastRowsAffectedCount_);
      DARABONBA_PTR_TO_JSON(LockTimes, lockTimes_);
      DARABONBA_PTR_TO_JSON(LogicalIORead, logicalIORead_);
      DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
      DARABONBA_PTR_TO_JSON(PhysicalIORead, physicalIORead_);
      DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
      DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
      DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_TO_JSON(RowsAffectedCount, rowsAffectedCount_);
      DARABONBA_PTR_TO_JSON(SQLHash, SQLHash_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WriteIOCount, writeIOCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ClientHostName, clientHostName_);
      DARABONBA_PTR_FROM_JSON(CpuTime, cpuTime_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(LastRowsAffectedCount, lastRowsAffectedCount_);
      DARABONBA_PTR_FROM_JSON(LockTimes, lockTimes_);
      DARABONBA_PTR_FROM_JSON(LogicalIORead, logicalIORead_);
      DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
      DARABONBA_PTR_FROM_JSON(PhysicalIORead, physicalIORead_);
      DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
      DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
      DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_FROM_JSON(RowsAffectedCount, rowsAffectedCount_);
      DARABONBA_PTR_FROM_JSON(SQLHash, SQLHash_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WriteIOCount, writeIOCount_);
    };
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &&) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& operator=(const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& operator=(DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && return this->clientHostName_ == nullptr && return this->cpuTime_ == nullptr && return this->DBName_ == nullptr && return this->executionStartTime_ == nullptr && return this->hostAddress_ == nullptr
        && return this->lastRowsAffectedCount_ == nullptr && return this->lockTimes_ == nullptr && return this->logicalIORead_ == nullptr && return this->parseRowCounts_ == nullptr && return this->physicalIORead_ == nullptr
        && return this->queryTimeMS_ == nullptr && return this->queryTimes_ == nullptr && return this->returnRowCounts_ == nullptr && return this->rowsAffectedCount_ == nullptr && return this->SQLHash_ == nullptr
        && return this->SQLText_ == nullptr && return this->userName_ == nullptr && return this->writeIOCount_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clientHostName Field Functions 
    bool hasClientHostName() const { return this->clientHostName_ != nullptr;};
    void deleteClientHostName() { this->clientHostName_ = nullptr;};
    inline string clientHostName() const { DARABONBA_PTR_GET_DEFAULT(clientHostName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setClientHostName(string clientHostName) { DARABONBA_PTR_SET_VALUE(clientHostName_, clientHostName) };


    // cpuTime Field Functions 
    bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
    void deleteCpuTime() { this->cpuTime_ = nullptr;};
    inline int64_t cpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executionStartTime Field Functions 
    bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
    void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
    inline string executionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // lastRowsAffectedCount Field Functions 
    bool hasLastRowsAffectedCount() const { return this->lastRowsAffectedCount_ != nullptr;};
    void deleteLastRowsAffectedCount() { this->lastRowsAffectedCount_ = nullptr;};
    inline int64_t lastRowsAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(lastRowsAffectedCount_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setLastRowsAffectedCount(int64_t lastRowsAffectedCount) { DARABONBA_PTR_SET_VALUE(lastRowsAffectedCount_, lastRowsAffectedCount) };


    // lockTimes Field Functions 
    bool hasLockTimes() const { return this->lockTimes_ != nullptr;};
    void deleteLockTimes() { this->lockTimes_ = nullptr;};
    inline int64_t lockTimes() const { DARABONBA_PTR_GET_DEFAULT(lockTimes_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setLockTimes(int64_t lockTimes) { DARABONBA_PTR_SET_VALUE(lockTimes_, lockTimes) };


    // logicalIORead Field Functions 
    bool hasLogicalIORead() const { return this->logicalIORead_ != nullptr;};
    void deleteLogicalIORead() { this->logicalIORead_ = nullptr;};
    inline int64_t logicalIORead() const { DARABONBA_PTR_GET_DEFAULT(logicalIORead_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setLogicalIORead(int64_t logicalIORead) { DARABONBA_PTR_SET_VALUE(logicalIORead_, logicalIORead) };


    // parseRowCounts Field Functions 
    bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
    void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
    inline int64_t parseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


    // physicalIORead Field Functions 
    bool hasPhysicalIORead() const { return this->physicalIORead_ != nullptr;};
    void deletePhysicalIORead() { this->physicalIORead_ = nullptr;};
    inline int64_t physicalIORead() const { DARABONBA_PTR_GET_DEFAULT(physicalIORead_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setPhysicalIORead(int64_t physicalIORead) { DARABONBA_PTR_SET_VALUE(physicalIORead_, physicalIORead) };


    // queryTimeMS Field Functions 
    bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
    void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
    inline int64_t queryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setQueryTimeMS(int64_t queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


    // queryTimes Field Functions 
    bool hasQueryTimes() const { return this->queryTimes_ != nullptr;};
    void deleteQueryTimes() { this->queryTimes_ = nullptr;};
    inline int64_t queryTimes() const { DARABONBA_PTR_GET_DEFAULT(queryTimes_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setQueryTimes(int64_t queryTimes) { DARABONBA_PTR_SET_VALUE(queryTimes_, queryTimes) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline int64_t returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // rowsAffectedCount Field Functions 
    bool hasRowsAffectedCount() const { return this->rowsAffectedCount_ != nullptr;};
    void deleteRowsAffectedCount() { this->rowsAffectedCount_ = nullptr;};
    inline int64_t rowsAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(rowsAffectedCount_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setRowsAffectedCount(int64_t rowsAffectedCount) { DARABONBA_PTR_SET_VALUE(rowsAffectedCount_, rowsAffectedCount) };


    // SQLHash Field Functions 
    bool hasSQLHash() const { return this->SQLHash_ != nullptr;};
    void deleteSQLHash() { this->SQLHash_ = nullptr;};
    inline string SQLHash() const { DARABONBA_PTR_GET_DEFAULT(SQLHash_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setSQLHash(string SQLHash) { DARABONBA_PTR_SET_VALUE(SQLHash_, SQLHash) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // writeIOCount Field Functions 
    bool hasWriteIOCount() const { return this->writeIOCount_ != nullptr;};
    void deleteWriteIOCount() { this->writeIOCount_ = nullptr;};
    inline int64_t writeIOCount() const { DARABONBA_PTR_GET_DEFAULT(writeIOCount_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setWriteIOCount(int64_t writeIOCount) { DARABONBA_PTR_SET_VALUE(writeIOCount_, writeIOCount) };


  protected:
    // The name of the application that is connected to the instance.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The hostname of the client.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<string> clientHostName_ = nullptr;
    // The duration during which the SQL statement is processed by the CPU. Unit: milliseconds.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> cpuTime_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The time when the execution of the SQL statement started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> executionStartTime_ = nullptr;
    // The name and IP address of the client that is connected to the database.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The number of rows that are affected by the last SQL statement.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> lastRowsAffectedCount_ = nullptr;
    // The lock duration of the query. Unit: seconds.
    std::shared_ptr<int64_t> lockTimes_ = nullptr;
    // The number of logical reads.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> logicalIORead_ = nullptr;
    // The number of parsed rows.
    std::shared_ptr<int64_t> parseRowCounts_ = nullptr;
    // The number of physical reads.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> physicalIORead_ = nullptr;
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<int64_t> queryTimeMS_ = nullptr;
    // The execution duration of the query. Unit: seconds.
    std::shared_ptr<int64_t> queryTimes_ = nullptr;
    // The number of rows returned.
    std::shared_ptr<int64_t> returnRowCounts_ = nullptr;
    // The number of affected rows.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> rowsAffectedCount_ = nullptr;
    // The unique ID of the SQL statement.
    std::shared_ptr<string> SQLHash_ = nullptr;
    // The details of the SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The name of the user.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<string> userName_ = nullptr;
    // The number of I/O writes.
    // 
    // > This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int64_t> writeIOCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
