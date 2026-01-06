// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDRESPONSEBODY_HPP_
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
  class GetFullRequestOriginStatByInstanceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestOriginStatByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestOriginStatByInstanceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFullRequestOriginStatByInstanceIdResponseBody() = default ;
    GetFullRequestOriginStatByInstanceIdResponseBody(const GetFullRequestOriginStatByInstanceIdResponseBody &) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBody(GetFullRequestOriginStatByInstanceIdResponseBody &&) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestOriginStatByInstanceIdResponseBody() = default ;
    GetFullRequestOriginStatByInstanceIdResponseBody& operator=(const GetFullRequestOriginStatByInstanceIdResponseBody &) = default ;
    GetFullRequestOriginStatByInstanceIdResponseBody& operator=(GetFullRequestOriginStatByInstanceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AvgExaminedRows, avgExaminedRows_);
          DARABONBA_PTR_TO_JSON(AvgFetchRows, avgFetchRows_);
          DARABONBA_PTR_TO_JSON(AvgLockWaitTime, avgLockWaitTime_);
          DARABONBA_PTR_TO_JSON(AvgLogicalRead, avgLogicalRead_);
          DARABONBA_PTR_TO_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
          DARABONBA_PTR_TO_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
          DARABONBA_PTR_TO_JSON(AvgReturnedRows, avgReturnedRows_);
          DARABONBA_PTR_TO_JSON(AvgRows, avgRows_);
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
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(LockWaitTime, lockWaitTime_);
          DARABONBA_PTR_TO_JSON(LogicalRead, logicalRead_);
          DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
          DARABONBA_PTR_TO_JSON(PhysicalAsyncRead, physicalAsyncRead_);
          DARABONBA_PTR_TO_JSON(PhysicalSyncRead, physicalSyncRead_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Rows, rows_);
          DARABONBA_PTR_TO_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
          DARABONBA_PTR_TO_JSON(RtRate, rtRate_);
          DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
          DARABONBA_PTR_TO_JSON(SumUpdatedRows, sumUpdatedRows_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgExaminedRows, avgExaminedRows_);
          DARABONBA_PTR_FROM_JSON(AvgFetchRows, avgFetchRows_);
          DARABONBA_PTR_FROM_JSON(AvgLockWaitTime, avgLockWaitTime_);
          DARABONBA_PTR_FROM_JSON(AvgLogicalRead, avgLogicalRead_);
          DARABONBA_PTR_FROM_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
          DARABONBA_PTR_FROM_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
          DARABONBA_PTR_FROM_JSON(AvgReturnedRows, avgReturnedRows_);
          DARABONBA_PTR_FROM_JSON(AvgRows, avgRows_);
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
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(LockWaitTime, lockWaitTime_);
          DARABONBA_PTR_FROM_JSON(LogicalRead, logicalRead_);
          DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
          DARABONBA_PTR_FROM_JSON(PhysicalAsyncRead, physicalAsyncRead_);
          DARABONBA_PTR_FROM_JSON(PhysicalSyncRead, physicalSyncRead_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Rows, rows_);
          DARABONBA_PTR_FROM_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
          DARABONBA_PTR_FROM_JSON(RtRate, rtRate_);
          DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
          DARABONBA_PTR_FROM_JSON(SumUpdatedRows, sumUpdatedRows_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgExaminedRows_ == nullptr
        && this->avgFetchRows_ == nullptr && this->avgLockWaitTime_ == nullptr && this->avgLogicalRead_ == nullptr && this->avgPhysicalAsyncRead_ == nullptr && this->avgPhysicalSyncRead_ == nullptr
        && this->avgReturnedRows_ == nullptr && this->avgRows_ == nullptr && this->avgRt_ == nullptr && this->avgSqlCount_ == nullptr && this->avgUpdatedRows_ == nullptr
        && this->count_ == nullptr && this->countRate_ == nullptr && this->database_ == nullptr && this->errorCount_ == nullptr && this->examinedRows_ == nullptr
        && this->fetchRows_ == nullptr && this->ip_ == nullptr && this->key_ == nullptr && this->lockWaitTime_ == nullptr && this->logicalRead_ == nullptr
        && this->originHost_ == nullptr && this->physicalAsyncRead_ == nullptr && this->physicalSyncRead_ == nullptr && this->port_ == nullptr && this->rows_ == nullptr
        && this->rtGreaterThanOneSecondCount_ == nullptr && this->rtRate_ == nullptr && this->sqlCount_ == nullptr && this->sumUpdatedRows_ == nullptr && this->version_ == nullptr
        && this->vpcId_ == nullptr; };
        // avgExaminedRows Field Functions 
        bool hasAvgExaminedRows() const { return this->avgExaminedRows_ != nullptr;};
        void deleteAvgExaminedRows() { this->avgExaminedRows_ = nullptr;};
        inline double getAvgExaminedRows() const { DARABONBA_PTR_GET_DEFAULT(avgExaminedRows_, 0.0) };
        inline List& setAvgExaminedRows(double avgExaminedRows) { DARABONBA_PTR_SET_VALUE(avgExaminedRows_, avgExaminedRows) };


        // avgFetchRows Field Functions 
        bool hasAvgFetchRows() const { return this->avgFetchRows_ != nullptr;};
        void deleteAvgFetchRows() { this->avgFetchRows_ = nullptr;};
        inline int64_t getAvgFetchRows() const { DARABONBA_PTR_GET_DEFAULT(avgFetchRows_, 0L) };
        inline List& setAvgFetchRows(int64_t avgFetchRows) { DARABONBA_PTR_SET_VALUE(avgFetchRows_, avgFetchRows) };


        // avgLockWaitTime Field Functions 
        bool hasAvgLockWaitTime() const { return this->avgLockWaitTime_ != nullptr;};
        void deleteAvgLockWaitTime() { this->avgLockWaitTime_ = nullptr;};
        inline double getAvgLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockWaitTime_, 0.0) };
        inline List& setAvgLockWaitTime(double avgLockWaitTime) { DARABONBA_PTR_SET_VALUE(avgLockWaitTime_, avgLockWaitTime) };


        // avgLogicalRead Field Functions 
        bool hasAvgLogicalRead() const { return this->avgLogicalRead_ != nullptr;};
        void deleteAvgLogicalRead() { this->avgLogicalRead_ = nullptr;};
        inline double getAvgLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(avgLogicalRead_, 0.0) };
        inline List& setAvgLogicalRead(double avgLogicalRead) { DARABONBA_PTR_SET_VALUE(avgLogicalRead_, avgLogicalRead) };


        // avgPhysicalAsyncRead Field Functions 
        bool hasAvgPhysicalAsyncRead() const { return this->avgPhysicalAsyncRead_ != nullptr;};
        void deleteAvgPhysicalAsyncRead() { this->avgPhysicalAsyncRead_ = nullptr;};
        inline int64_t getAvgPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalAsyncRead_, 0L) };
        inline List& setAvgPhysicalAsyncRead(int64_t avgPhysicalAsyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalAsyncRead_, avgPhysicalAsyncRead) };


        // avgPhysicalSyncRead Field Functions 
        bool hasAvgPhysicalSyncRead() const { return this->avgPhysicalSyncRead_ != nullptr;};
        void deleteAvgPhysicalSyncRead() { this->avgPhysicalSyncRead_ = nullptr;};
        inline double getAvgPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalSyncRead_, 0.0) };
        inline List& setAvgPhysicalSyncRead(double avgPhysicalSyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalSyncRead_, avgPhysicalSyncRead) };


        // avgReturnedRows Field Functions 
        bool hasAvgReturnedRows() const { return this->avgReturnedRows_ != nullptr;};
        void deleteAvgReturnedRows() { this->avgReturnedRows_ = nullptr;};
        inline double getAvgReturnedRows() const { DARABONBA_PTR_GET_DEFAULT(avgReturnedRows_, 0.0) };
        inline List& setAvgReturnedRows(double avgReturnedRows) { DARABONBA_PTR_SET_VALUE(avgReturnedRows_, avgReturnedRows) };


        // avgRows Field Functions 
        bool hasAvgRows() const { return this->avgRows_ != nullptr;};
        void deleteAvgRows() { this->avgRows_ = nullptr;};
        inline int64_t getAvgRows() const { DARABONBA_PTR_GET_DEFAULT(avgRows_, 0L) };
        inline List& setAvgRows(int64_t avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };


        // avgRt Field Functions 
        bool hasAvgRt() const { return this->avgRt_ != nullptr;};
        void deleteAvgRt() { this->avgRt_ = nullptr;};
        inline double getAvgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
        inline List& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


        // avgSqlCount Field Functions 
        bool hasAvgSqlCount() const { return this->avgSqlCount_ != nullptr;};
        void deleteAvgSqlCount() { this->avgSqlCount_ = nullptr;};
        inline int64_t getAvgSqlCount() const { DARABONBA_PTR_GET_DEFAULT(avgSqlCount_, 0L) };
        inline List& setAvgSqlCount(int64_t avgSqlCount) { DARABONBA_PTR_SET_VALUE(avgSqlCount_, avgSqlCount) };


        // avgUpdatedRows Field Functions 
        bool hasAvgUpdatedRows() const { return this->avgUpdatedRows_ != nullptr;};
        void deleteAvgUpdatedRows() { this->avgUpdatedRows_ = nullptr;};
        inline double getAvgUpdatedRows() const { DARABONBA_PTR_GET_DEFAULT(avgUpdatedRows_, 0.0) };
        inline List& setAvgUpdatedRows(double avgUpdatedRows) { DARABONBA_PTR_SET_VALUE(avgUpdatedRows_, avgUpdatedRows) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline List& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // countRate Field Functions 
        bool hasCountRate() const { return this->countRate_ != nullptr;};
        void deleteCountRate() { this->countRate_ = nullptr;};
        inline double getCountRate() const { DARABONBA_PTR_GET_DEFAULT(countRate_, 0.0) };
        inline List& setCountRate(double countRate) { DARABONBA_PTR_SET_VALUE(countRate_, countRate) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline List& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline List& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // examinedRows Field Functions 
        bool hasExaminedRows() const { return this->examinedRows_ != nullptr;};
        void deleteExaminedRows() { this->examinedRows_ = nullptr;};
        inline int64_t getExaminedRows() const { DARABONBA_PTR_GET_DEFAULT(examinedRows_, 0L) };
        inline List& setExaminedRows(int64_t examinedRows) { DARABONBA_PTR_SET_VALUE(examinedRows_, examinedRows) };


        // fetchRows Field Functions 
        bool hasFetchRows() const { return this->fetchRows_ != nullptr;};
        void deleteFetchRows() { this->fetchRows_ = nullptr;};
        inline int64_t getFetchRows() const { DARABONBA_PTR_GET_DEFAULT(fetchRows_, 0L) };
        inline List& setFetchRows(int64_t fetchRows) { DARABONBA_PTR_SET_VALUE(fetchRows_, fetchRows) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline List& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline List& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // lockWaitTime Field Functions 
        bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
        void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
        inline double getLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0.0) };
        inline List& setLockWaitTime(double lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


        // logicalRead Field Functions 
        bool hasLogicalRead() const { return this->logicalRead_ != nullptr;};
        void deleteLogicalRead() { this->logicalRead_ = nullptr;};
        inline int64_t getLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(logicalRead_, 0L) };
        inline List& setLogicalRead(int64_t logicalRead) { DARABONBA_PTR_SET_VALUE(logicalRead_, logicalRead) };


        // originHost Field Functions 
        bool hasOriginHost() const { return this->originHost_ != nullptr;};
        void deleteOriginHost() { this->originHost_ = nullptr;};
        inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
        inline List& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


        // physicalAsyncRead Field Functions 
        bool hasPhysicalAsyncRead() const { return this->physicalAsyncRead_ != nullptr;};
        void deletePhysicalAsyncRead() { this->physicalAsyncRead_ = nullptr;};
        inline int64_t getPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncRead_, 0L) };
        inline List& setPhysicalAsyncRead(int64_t physicalAsyncRead) { DARABONBA_PTR_SET_VALUE(physicalAsyncRead_, physicalAsyncRead) };


        // physicalSyncRead Field Functions 
        bool hasPhysicalSyncRead() const { return this->physicalSyncRead_ != nullptr;};
        void deletePhysicalSyncRead() { this->physicalSyncRead_ = nullptr;};
        inline int64_t getPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalSyncRead_, 0L) };
        inline List& setPhysicalSyncRead(int64_t physicalSyncRead) { DARABONBA_PTR_SET_VALUE(physicalSyncRead_, physicalSyncRead) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline List& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // rows Field Functions 
        bool hasRows() const { return this->rows_ != nullptr;};
        void deleteRows() { this->rows_ = nullptr;};
        inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
        inline List& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


        // rtGreaterThanOneSecondCount Field Functions 
        bool hasRtGreaterThanOneSecondCount() const { return this->rtGreaterThanOneSecondCount_ != nullptr;};
        void deleteRtGreaterThanOneSecondCount() { this->rtGreaterThanOneSecondCount_ = nullptr;};
        inline int64_t getRtGreaterThanOneSecondCount() const { DARABONBA_PTR_GET_DEFAULT(rtGreaterThanOneSecondCount_, 0L) };
        inline List& setRtGreaterThanOneSecondCount(int64_t rtGreaterThanOneSecondCount) { DARABONBA_PTR_SET_VALUE(rtGreaterThanOneSecondCount_, rtGreaterThanOneSecondCount) };


        // rtRate Field Functions 
        bool hasRtRate() const { return this->rtRate_ != nullptr;};
        void deleteRtRate() { this->rtRate_ = nullptr;};
        inline double getRtRate() const { DARABONBA_PTR_GET_DEFAULT(rtRate_, 0.0) };
        inline List& setRtRate(double rtRate) { DARABONBA_PTR_SET_VALUE(rtRate_, rtRate) };


        // sqlCount Field Functions 
        bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
        void deleteSqlCount() { this->sqlCount_ = nullptr;};
        inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
        inline List& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


        // sumUpdatedRows Field Functions 
        bool hasSumUpdatedRows() const { return this->sumUpdatedRows_ != nullptr;};
        void deleteSumUpdatedRows() { this->sumUpdatedRows_ = nullptr;};
        inline int64_t getSumUpdatedRows() const { DARABONBA_PTR_GET_DEFAULT(sumUpdatedRows_, 0L) };
        inline List& setSumUpdatedRows(int64_t sumUpdatedRows) { DARABONBA_PTR_SET_VALUE(sumUpdatedRows_, sumUpdatedRows) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline List& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline List& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The average number of scanned rows.
        // 
        // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
        shared_ptr<double> avgExaminedRows_ {};
        // The average number of rows that are fetched from data nodes by compute nodes on the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> avgFetchRows_ {};
        // The average lock wait duration. Unit: seconds.
        shared_ptr<double> avgLockWaitTime_ {};
        // The average number of logical reads.
        shared_ptr<double> avgLogicalRead_ {};
        // The average number of physical asynchronous reads.
        shared_ptr<int64_t> avgPhysicalAsyncRead_ {};
        // The average number of physical synchronous reads.
        shared_ptr<double> avgPhysicalSyncRead_ {};
        // The average number of returned rows.
        shared_ptr<double> avgReturnedRows_ {};
        // The average number of rows.
        shared_ptr<int64_t> avgRows_ {};
        // The average execution duration.
        shared_ptr<double> avgRt_ {};
        // The average number of SQL statements.
        shared_ptr<int64_t> avgSqlCount_ {};
        // The average number of updated rows.
        // 
        // > This parameter is returned only for ApsaraDB RDS for MySQL and PolarDB-X 2.0 databases.
        shared_ptr<double> avgUpdatedRows_ {};
        // The total number of executions.
        shared_ptr<int64_t> count_ {};
        // The percentage of the total number of executions.
        shared_ptr<double> countRate_ {};
        // The name of the database.
        shared_ptr<string> database_ {};
        // The number of failed executions.
        shared_ptr<int64_t> errorCount_ {};
        // The total number of scanned rows.
        // 
        // > This parameter is returned only for ApsaraDB RDS for MySQL, ApsaraDB RDS for PostgreSQL, and PolarDB for MySQL databases.
        shared_ptr<int64_t> examinedRows_ {};
        // The number of rows that are fetched from data nodes by compute nodes on the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> fetchRows_ {};
        // The network address of the database instance.
        shared_ptr<string> ip_ {};
        // The IP address of the client that executes the SQL statement.
        shared_ptr<string> key_ {};
        // The lock wait duration. Unit: seconds.
        shared_ptr<double> lockWaitTime_ {};
        // The number of logical reads.
        shared_ptr<int64_t> logicalRead_ {};
        // The IP address of the client that executes the SQL statement.
        shared_ptr<string> originHost_ {};
        // The number of physical asynchronous reads.
        shared_ptr<int64_t> physicalAsyncRead_ {};
        // The number of physical synchronous reads.
        shared_ptr<int64_t> physicalSyncRead_ {};
        // The port number that is used to connect to the database instance.
        shared_ptr<int64_t> port_ {};
        // The total number of rows updated or returned by the compute nodes of the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> rows_ {};
        // The number of SQL statements that take longer than 1 second to execute.
        shared_ptr<int64_t> rtGreaterThanOneSecondCount_ {};
        // The execution duration percentage.
        shared_ptr<double> rtRate_ {};
        // The number of SQL statements.
        shared_ptr<int64_t> sqlCount_ {};
        // The total number of updated rows.
        shared_ptr<int64_t> sumUpdatedRows_ {};
        // The version number.
        shared_ptr<int64_t> version_ {};
        // The virtual private cloud (VPC) ID.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The details of the full request data.
      shared_ptr<vector<Data::List>> list_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFullRequestOriginStatByInstanceIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFullRequestOriginStatByInstanceIdResponseBody::Data) };
    inline GetFullRequestOriginStatByInstanceIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFullRequestOriginStatByInstanceIdResponseBody::Data) };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setData(const GetFullRequestOriginStatByInstanceIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setData(GetFullRequestOriginStatByInstanceIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFullRequestOriginStatByInstanceIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetFullRequestOriginStatByInstanceIdResponseBody::Data> data_ {};
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
