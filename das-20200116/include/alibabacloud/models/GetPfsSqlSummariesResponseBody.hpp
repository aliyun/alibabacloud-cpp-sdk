// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESRESPONSEBODY_HPP_
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
  class GetPfsSqlSummariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPfsSqlSummariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPfsSqlSummariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPfsSqlSummariesResponseBody() = default ;
    GetPfsSqlSummariesResponseBody(const GetPfsSqlSummariesResponseBody &) = default ;
    GetPfsSqlSummariesResponseBody(GetPfsSqlSummariesResponseBody &&) = default ;
    GetPfsSqlSummariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPfsSqlSummariesResponseBody() = default ;
    GetPfsSqlSummariesResponseBody& operator=(const GetPfsSqlSummariesResponseBody &) = default ;
    GetPfsSqlSummariesResponseBody& operator=(GetPfsSqlSummariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
          DARABONBA_PTR_TO_JSON(AvgLatency, avgLatency_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(CountRate, countRate_);
          DARABONBA_PTR_TO_JSON(CpuRate, cpuRate_);
          DARABONBA_PTR_TO_JSON(CpuTime, cpuTime_);
          DARABONBA_PTR_TO_JSON(DataReadTime, dataReadTime_);
          DARABONBA_PTR_TO_JSON(DataReads, dataReads_);
          DARABONBA_PTR_TO_JSON(DataWriteTime, dataWriteTime_);
          DARABONBA_PTR_TO_JSON(DataWrites, dataWrites_);
          DARABONBA_PTR_TO_JSON(Db, db_);
          DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_TO_JSON(ErrCount, errCount_);
          DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
          DARABONBA_PTR_TO_JSON(FullScan, fullScan_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
          DARABONBA_PTR_TO_JSON(LockLatencyAvg, lockLatencyAvg_);
          DARABONBA_PTR_TO_JSON(LogicId, logicId_);
          DARABONBA_PTR_TO_JSON(LogicReads, logicReads_);
          DARABONBA_PTR_TO_JSON(MaxLatency, maxLatency_);
          DARABONBA_PTR_TO_JSON(MutexSpins, mutexSpins_);
          DARABONBA_PTR_TO_JSON(MutexWaits, mutexWaits_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(PhysicalAsyncReads, physicalAsyncReads_);
          DARABONBA_PTR_TO_JSON(PhysicalReads, physicalReads_);
          DARABONBA_PTR_TO_JSON(Psql, psql_);
          DARABONBA_PTR_TO_JSON(RedoWrites, redoWrites_);
          DARABONBA_PTR_TO_JSON(RowsAffected, rowsAffected_);
          DARABONBA_PTR_TO_JSON(RowsAffectedAvg, rowsAffectedAvg_);
          DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
          DARABONBA_PTR_TO_JSON(RowsExaminedAvg, rowsExaminedAvg_);
          DARABONBA_PTR_TO_JSON(RowsSendAvg, rowsSendAvg_);
          DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
          DARABONBA_PTR_TO_JSON(RowsSentAvg, rowsSentAvg_);
          DARABONBA_PTR_TO_JSON(RowsSorted, rowsSorted_);
          DARABONBA_PTR_TO_JSON(RtRate, rtRate_);
          DARABONBA_PTR_TO_JSON(RwlockOsWaits, rwlockOsWaits_);
          DARABONBA_PTR_TO_JSON(RwlockSpinRounds, rwlockSpinRounds_);
          DARABONBA_PTR_TO_JSON(RwlockSpinWaits, rwlockSpinWaits_);
          DARABONBA_PTR_TO_JSON(SelectFullJoinAvg, selectFullJoinAvg_);
          DARABONBA_PTR_TO_JSON(SelectFullRangeJoinAvg, selectFullRangeJoinAvg_);
          DARABONBA_PTR_TO_JSON(SelectRangeAvg, selectRangeAvg_);
          DARABONBA_PTR_TO_JSON(SelectScanAvg, selectScanAvg_);
          DARABONBA_PTR_TO_JSON(SemisyncDelayTime, semisyncDelayTime_);
          DARABONBA_PTR_TO_JSON(ServerLockTime, serverLockTime_);
          DARABONBA_PTR_TO_JSON(SortMergePasses, sortMergePasses_);
          DARABONBA_PTR_TO_JSON(SortRangeAvg, sortRangeAvg_);
          DARABONBA_PTR_TO_JSON(SortRowsAvg, sortRowsAvg_);
          DARABONBA_PTR_TO_JSON(SortScanAvg, sortScanAvg_);
          DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
          DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
          DARABONBA_PTR_TO_JSON(Tables, tables_);
          DARABONBA_PTR_TO_JSON(TimerWaitAvg, timerWaitAvg_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(TmpDiskTables, tmpDiskTables_);
          DARABONBA_PTR_TO_JSON(TmpDiskTablesAvg, tmpDiskTablesAvg_);
          DARABONBA_PTR_TO_JSON(TmpTables, tmpTables_);
          DARABONBA_PTR_TO_JSON(TmpTablesAvg, tmpTablesAvg_);
          DARABONBA_PTR_TO_JSON(TotalLatency, totalLatency_);
          DARABONBA_PTR_TO_JSON(TransactionLockTime, transactionLockTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(WarnCount, warnCount_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgLatency, avgLatency_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(CountRate, countRate_);
          DARABONBA_PTR_FROM_JSON(CpuRate, cpuRate_);
          DARABONBA_PTR_FROM_JSON(CpuTime, cpuTime_);
          DARABONBA_PTR_FROM_JSON(DataReadTime, dataReadTime_);
          DARABONBA_PTR_FROM_JSON(DataReads, dataReads_);
          DARABONBA_PTR_FROM_JSON(DataWriteTime, dataWriteTime_);
          DARABONBA_PTR_FROM_JSON(DataWrites, dataWrites_);
          DARABONBA_PTR_FROM_JSON(Db, db_);
          DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
          DARABONBA_PTR_FROM_JSON(ErrCount, errCount_);
          DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
          DARABONBA_PTR_FROM_JSON(FullScan, fullScan_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
          DARABONBA_PTR_FROM_JSON(LockLatencyAvg, lockLatencyAvg_);
          DARABONBA_PTR_FROM_JSON(LogicId, logicId_);
          DARABONBA_PTR_FROM_JSON(LogicReads, logicReads_);
          DARABONBA_PTR_FROM_JSON(MaxLatency, maxLatency_);
          DARABONBA_PTR_FROM_JSON(MutexSpins, mutexSpins_);
          DARABONBA_PTR_FROM_JSON(MutexWaits, mutexWaits_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(PhysicalAsyncReads, physicalAsyncReads_);
          DARABONBA_PTR_FROM_JSON(PhysicalReads, physicalReads_);
          DARABONBA_PTR_FROM_JSON(Psql, psql_);
          DARABONBA_PTR_FROM_JSON(RedoWrites, redoWrites_);
          DARABONBA_PTR_FROM_JSON(RowsAffected, rowsAffected_);
          DARABONBA_PTR_FROM_JSON(RowsAffectedAvg, rowsAffectedAvg_);
          DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
          DARABONBA_PTR_FROM_JSON(RowsExaminedAvg, rowsExaminedAvg_);
          DARABONBA_PTR_FROM_JSON(RowsSendAvg, rowsSendAvg_);
          DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
          DARABONBA_PTR_FROM_JSON(RowsSentAvg, rowsSentAvg_);
          DARABONBA_PTR_FROM_JSON(RowsSorted, rowsSorted_);
          DARABONBA_PTR_FROM_JSON(RtRate, rtRate_);
          DARABONBA_PTR_FROM_JSON(RwlockOsWaits, rwlockOsWaits_);
          DARABONBA_PTR_FROM_JSON(RwlockSpinRounds, rwlockSpinRounds_);
          DARABONBA_PTR_FROM_JSON(RwlockSpinWaits, rwlockSpinWaits_);
          DARABONBA_PTR_FROM_JSON(SelectFullJoinAvg, selectFullJoinAvg_);
          DARABONBA_PTR_FROM_JSON(SelectFullRangeJoinAvg, selectFullRangeJoinAvg_);
          DARABONBA_PTR_FROM_JSON(SelectRangeAvg, selectRangeAvg_);
          DARABONBA_PTR_FROM_JSON(SelectScanAvg, selectScanAvg_);
          DARABONBA_PTR_FROM_JSON(SemisyncDelayTime, semisyncDelayTime_);
          DARABONBA_PTR_FROM_JSON(ServerLockTime, serverLockTime_);
          DARABONBA_PTR_FROM_JSON(SortMergePasses, sortMergePasses_);
          DARABONBA_PTR_FROM_JSON(SortRangeAvg, sortRangeAvg_);
          DARABONBA_PTR_FROM_JSON(SortRowsAvg, sortRowsAvg_);
          DARABONBA_PTR_FROM_JSON(SortScanAvg, sortScanAvg_);
          DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
          DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
          DARABONBA_PTR_FROM_JSON(Tables, tables_);
          DARABONBA_PTR_FROM_JSON(TimerWaitAvg, timerWaitAvg_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(TmpDiskTables, tmpDiskTables_);
          DARABONBA_PTR_FROM_JSON(TmpDiskTablesAvg, tmpDiskTablesAvg_);
          DARABONBA_PTR_FROM_JSON(TmpTables, tmpTables_);
          DARABONBA_PTR_FROM_JSON(TmpTablesAvg, tmpTablesAvg_);
          DARABONBA_PTR_FROM_JSON(TotalLatency, totalLatency_);
          DARABONBA_PTR_FROM_JSON(TransactionLockTime, transactionLockTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(WarnCount, warnCount_);
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
        virtual bool empty() const override { return this->avgLatency_ == nullptr
        && this->count_ == nullptr && this->countRate_ == nullptr && this->cpuRate_ == nullptr && this->cpuTime_ == nullptr && this->dataReadTime_ == nullptr
        && this->dataReads_ == nullptr && this->dataWriteTime_ == nullptr && this->dataWrites_ == nullptr && this->db_ == nullptr && this->elapsedTime_ == nullptr
        && this->errCount_ == nullptr && this->firstTime_ == nullptr && this->fullScan_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->lastTime_ == nullptr && this->lockLatencyAvg_ == nullptr && this->logicId_ == nullptr && this->logicReads_ == nullptr && this->maxLatency_ == nullptr
        && this->mutexSpins_ == nullptr && this->mutexWaits_ == nullptr && this->nodeId_ == nullptr && this->physicalAsyncReads_ == nullptr && this->physicalReads_ == nullptr
        && this->psql_ == nullptr && this->redoWrites_ == nullptr && this->rowsAffected_ == nullptr && this->rowsAffectedAvg_ == nullptr && this->rowsExamined_ == nullptr
        && this->rowsExaminedAvg_ == nullptr && this->rowsSendAvg_ == nullptr && this->rowsSent_ == nullptr && this->rowsSentAvg_ == nullptr && this->rowsSorted_ == nullptr
        && this->rtRate_ == nullptr && this->rwlockOsWaits_ == nullptr && this->rwlockSpinRounds_ == nullptr && this->rwlockSpinWaits_ == nullptr && this->selectFullJoinAvg_ == nullptr
        && this->selectFullRangeJoinAvg_ == nullptr && this->selectRangeAvg_ == nullptr && this->selectScanAvg_ == nullptr && this->semisyncDelayTime_ == nullptr && this->serverLockTime_ == nullptr
        && this->sortMergePasses_ == nullptr && this->sortRangeAvg_ == nullptr && this->sortRowsAvg_ == nullptr && this->sortScanAvg_ == nullptr && this->sqlId_ == nullptr
        && this->sqlType_ == nullptr && this->tables_ == nullptr && this->timerWaitAvg_ == nullptr && this->timestamp_ == nullptr && this->tmpDiskTables_ == nullptr
        && this->tmpDiskTablesAvg_ == nullptr && this->tmpTables_ == nullptr && this->tmpTablesAvg_ == nullptr && this->totalLatency_ == nullptr && this->transactionLockTime_ == nullptr
        && this->userId_ == nullptr && this->warnCount_ == nullptr; };
        // avgLatency Field Functions 
        bool hasAvgLatency() const { return this->avgLatency_ != nullptr;};
        void deleteAvgLatency() { this->avgLatency_ = nullptr;};
        inline double getAvgLatency() const { DARABONBA_PTR_GET_DEFAULT(avgLatency_, 0.0) };
        inline List& setAvgLatency(double avgLatency) { DARABONBA_PTR_SET_VALUE(avgLatency_, avgLatency) };


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


        // cpuRate Field Functions 
        bool hasCpuRate() const { return this->cpuRate_ != nullptr;};
        void deleteCpuRate() { this->cpuRate_ = nullptr;};
        inline double getCpuRate() const { DARABONBA_PTR_GET_DEFAULT(cpuRate_, 0.0) };
        inline List& setCpuRate(double cpuRate) { DARABONBA_PTR_SET_VALUE(cpuRate_, cpuRate) };


        // cpuTime Field Functions 
        bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
        void deleteCpuTime() { this->cpuTime_ = nullptr;};
        inline double getCpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0.0) };
        inline List& setCpuTime(double cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


        // dataReadTime Field Functions 
        bool hasDataReadTime() const { return this->dataReadTime_ != nullptr;};
        void deleteDataReadTime() { this->dataReadTime_ = nullptr;};
        inline double getDataReadTime() const { DARABONBA_PTR_GET_DEFAULT(dataReadTime_, 0.0) };
        inline List& setDataReadTime(double dataReadTime) { DARABONBA_PTR_SET_VALUE(dataReadTime_, dataReadTime) };


        // dataReads Field Functions 
        bool hasDataReads() const { return this->dataReads_ != nullptr;};
        void deleteDataReads() { this->dataReads_ = nullptr;};
        inline int32_t getDataReads() const { DARABONBA_PTR_GET_DEFAULT(dataReads_, 0) };
        inline List& setDataReads(int32_t dataReads) { DARABONBA_PTR_SET_VALUE(dataReads_, dataReads) };


        // dataWriteTime Field Functions 
        bool hasDataWriteTime() const { return this->dataWriteTime_ != nullptr;};
        void deleteDataWriteTime() { this->dataWriteTime_ = nullptr;};
        inline double getDataWriteTime() const { DARABONBA_PTR_GET_DEFAULT(dataWriteTime_, 0.0) };
        inline List& setDataWriteTime(double dataWriteTime) { DARABONBA_PTR_SET_VALUE(dataWriteTime_, dataWriteTime) };


        // dataWrites Field Functions 
        bool hasDataWrites() const { return this->dataWrites_ != nullptr;};
        void deleteDataWrites() { this->dataWrites_ = nullptr;};
        inline int32_t getDataWrites() const { DARABONBA_PTR_GET_DEFAULT(dataWrites_, 0) };
        inline List& setDataWrites(int32_t dataWrites) { DARABONBA_PTR_SET_VALUE(dataWrites_, dataWrites) };


        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline string getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
        inline List& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // elapsedTime Field Functions 
        bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
        void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
        inline double getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0.0) };
        inline List& setElapsedTime(double elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


        // errCount Field Functions 
        bool hasErrCount() const { return this->errCount_ != nullptr;};
        void deleteErrCount() { this->errCount_ = nullptr;};
        inline int64_t getErrCount() const { DARABONBA_PTR_GET_DEFAULT(errCount_, 0L) };
        inline List& setErrCount(int64_t errCount) { DARABONBA_PTR_SET_VALUE(errCount_, errCount) };


        // firstTime Field Functions 
        bool hasFirstTime() const { return this->firstTime_ != nullptr;};
        void deleteFirstTime() { this->firstTime_ = nullptr;};
        inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
        inline List& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


        // fullScan Field Functions 
        bool hasFullScan() const { return this->fullScan_ != nullptr;};
        void deleteFullScan() { this->fullScan_ = nullptr;};
        inline bool getFullScan() const { DARABONBA_PTR_GET_DEFAULT(fullScan_, false) };
        inline List& setFullScan(bool fullScan) { DARABONBA_PTR_SET_VALUE(fullScan_, fullScan) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // lastTime Field Functions 
        bool hasLastTime() const { return this->lastTime_ != nullptr;};
        void deleteLastTime() { this->lastTime_ = nullptr;};
        inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
        inline List& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


        // lockLatencyAvg Field Functions 
        bool hasLockLatencyAvg() const { return this->lockLatencyAvg_ != nullptr;};
        void deleteLockLatencyAvg() { this->lockLatencyAvg_ = nullptr;};
        inline double getLockLatencyAvg() const { DARABONBA_PTR_GET_DEFAULT(lockLatencyAvg_, 0.0) };
        inline List& setLockLatencyAvg(double lockLatencyAvg) { DARABONBA_PTR_SET_VALUE(lockLatencyAvg_, lockLatencyAvg) };


        // logicId Field Functions 
        bool hasLogicId() const { return this->logicId_ != nullptr;};
        void deleteLogicId() { this->logicId_ = nullptr;};
        inline int64_t getLogicId() const { DARABONBA_PTR_GET_DEFAULT(logicId_, 0L) };
        inline List& setLogicId(int64_t logicId) { DARABONBA_PTR_SET_VALUE(logicId_, logicId) };


        // logicReads Field Functions 
        bool hasLogicReads() const { return this->logicReads_ != nullptr;};
        void deleteLogicReads() { this->logicReads_ = nullptr;};
        inline int64_t getLogicReads() const { DARABONBA_PTR_GET_DEFAULT(logicReads_, 0L) };
        inline List& setLogicReads(int64_t logicReads) { DARABONBA_PTR_SET_VALUE(logicReads_, logicReads) };


        // maxLatency Field Functions 
        bool hasMaxLatency() const { return this->maxLatency_ != nullptr;};
        void deleteMaxLatency() { this->maxLatency_ = nullptr;};
        inline double getMaxLatency() const { DARABONBA_PTR_GET_DEFAULT(maxLatency_, 0.0) };
        inline List& setMaxLatency(double maxLatency) { DARABONBA_PTR_SET_VALUE(maxLatency_, maxLatency) };


        // mutexSpins Field Functions 
        bool hasMutexSpins() const { return this->mutexSpins_ != nullptr;};
        void deleteMutexSpins() { this->mutexSpins_ = nullptr;};
        inline int32_t getMutexSpins() const { DARABONBA_PTR_GET_DEFAULT(mutexSpins_, 0) };
        inline List& setMutexSpins(int32_t mutexSpins) { DARABONBA_PTR_SET_VALUE(mutexSpins_, mutexSpins) };


        // mutexWaits Field Functions 
        bool hasMutexWaits() const { return this->mutexWaits_ != nullptr;};
        void deleteMutexWaits() { this->mutexWaits_ = nullptr;};
        inline int32_t getMutexWaits() const { DARABONBA_PTR_GET_DEFAULT(mutexWaits_, 0) };
        inline List& setMutexWaits(int32_t mutexWaits) { DARABONBA_PTR_SET_VALUE(mutexWaits_, mutexWaits) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline List& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // physicalAsyncReads Field Functions 
        bool hasPhysicalAsyncReads() const { return this->physicalAsyncReads_ != nullptr;};
        void deletePhysicalAsyncReads() { this->physicalAsyncReads_ = nullptr;};
        inline int64_t getPhysicalAsyncReads() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncReads_, 0L) };
        inline List& setPhysicalAsyncReads(int64_t physicalAsyncReads) { DARABONBA_PTR_SET_VALUE(physicalAsyncReads_, physicalAsyncReads) };


        // physicalReads Field Functions 
        bool hasPhysicalReads() const { return this->physicalReads_ != nullptr;};
        void deletePhysicalReads() { this->physicalReads_ = nullptr;};
        inline int64_t getPhysicalReads() const { DARABONBA_PTR_GET_DEFAULT(physicalReads_, 0L) };
        inline List& setPhysicalReads(int64_t physicalReads) { DARABONBA_PTR_SET_VALUE(physicalReads_, physicalReads) };


        // psql Field Functions 
        bool hasPsql() const { return this->psql_ != nullptr;};
        void deletePsql() { this->psql_ = nullptr;};
        inline string getPsql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
        inline List& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


        // redoWrites Field Functions 
        bool hasRedoWrites() const { return this->redoWrites_ != nullptr;};
        void deleteRedoWrites() { this->redoWrites_ = nullptr;};
        inline int64_t getRedoWrites() const { DARABONBA_PTR_GET_DEFAULT(redoWrites_, 0L) };
        inline List& setRedoWrites(int64_t redoWrites) { DARABONBA_PTR_SET_VALUE(redoWrites_, redoWrites) };


        // rowsAffected Field Functions 
        bool hasRowsAffected() const { return this->rowsAffected_ != nullptr;};
        void deleteRowsAffected() { this->rowsAffected_ = nullptr;};
        inline int64_t getRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsAffected_, 0L) };
        inline List& setRowsAffected(int64_t rowsAffected) { DARABONBA_PTR_SET_VALUE(rowsAffected_, rowsAffected) };


        // rowsAffectedAvg Field Functions 
        bool hasRowsAffectedAvg() const { return this->rowsAffectedAvg_ != nullptr;};
        void deleteRowsAffectedAvg() { this->rowsAffectedAvg_ = nullptr;};
        inline double getRowsAffectedAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsAffectedAvg_, 0.0) };
        inline List& setRowsAffectedAvg(double rowsAffectedAvg) { DARABONBA_PTR_SET_VALUE(rowsAffectedAvg_, rowsAffectedAvg) };


        // rowsExamined Field Functions 
        bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
        void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
        inline int64_t getRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
        inline List& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


        // rowsExaminedAvg Field Functions 
        bool hasRowsExaminedAvg() const { return this->rowsExaminedAvg_ != nullptr;};
        void deleteRowsExaminedAvg() { this->rowsExaminedAvg_ = nullptr;};
        inline double getRowsExaminedAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsExaminedAvg_, 0.0) };
        inline List& setRowsExaminedAvg(double rowsExaminedAvg) { DARABONBA_PTR_SET_VALUE(rowsExaminedAvg_, rowsExaminedAvg) };


        // rowsSendAvg Field Functions 
        bool hasRowsSendAvg() const { return this->rowsSendAvg_ != nullptr;};
        void deleteRowsSendAvg() { this->rowsSendAvg_ = nullptr;};
        inline double getRowsSendAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsSendAvg_, 0.0) };
        inline List& setRowsSendAvg(double rowsSendAvg) { DARABONBA_PTR_SET_VALUE(rowsSendAvg_, rowsSendAvg) };


        // rowsSent Field Functions 
        bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
        void deleteRowsSent() { this->rowsSent_ = nullptr;};
        inline int64_t getRowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0L) };
        inline List& setRowsSent(int64_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


        // rowsSentAvg Field Functions 
        bool hasRowsSentAvg() const { return this->rowsSentAvg_ != nullptr;};
        void deleteRowsSentAvg() { this->rowsSentAvg_ = nullptr;};
        inline double getRowsSentAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsSentAvg_, 0.0) };
        inline List& setRowsSentAvg(double rowsSentAvg) { DARABONBA_PTR_SET_VALUE(rowsSentAvg_, rowsSentAvg) };


        // rowsSorted Field Functions 
        bool hasRowsSorted() const { return this->rowsSorted_ != nullptr;};
        void deleteRowsSorted() { this->rowsSorted_ = nullptr;};
        inline int64_t getRowsSorted() const { DARABONBA_PTR_GET_DEFAULT(rowsSorted_, 0L) };
        inline List& setRowsSorted(int64_t rowsSorted) { DARABONBA_PTR_SET_VALUE(rowsSorted_, rowsSorted) };


        // rtRate Field Functions 
        bool hasRtRate() const { return this->rtRate_ != nullptr;};
        void deleteRtRate() { this->rtRate_ = nullptr;};
        inline double getRtRate() const { DARABONBA_PTR_GET_DEFAULT(rtRate_, 0.0) };
        inline List& setRtRate(double rtRate) { DARABONBA_PTR_SET_VALUE(rtRate_, rtRate) };


        // rwlockOsWaits Field Functions 
        bool hasRwlockOsWaits() const { return this->rwlockOsWaits_ != nullptr;};
        void deleteRwlockOsWaits() { this->rwlockOsWaits_ = nullptr;};
        inline int32_t getRwlockOsWaits() const { DARABONBA_PTR_GET_DEFAULT(rwlockOsWaits_, 0) };
        inline List& setRwlockOsWaits(int32_t rwlockOsWaits) { DARABONBA_PTR_SET_VALUE(rwlockOsWaits_, rwlockOsWaits) };


        // rwlockSpinRounds Field Functions 
        bool hasRwlockSpinRounds() const { return this->rwlockSpinRounds_ != nullptr;};
        void deleteRwlockSpinRounds() { this->rwlockSpinRounds_ = nullptr;};
        inline int32_t getRwlockSpinRounds() const { DARABONBA_PTR_GET_DEFAULT(rwlockSpinRounds_, 0) };
        inline List& setRwlockSpinRounds(int32_t rwlockSpinRounds) { DARABONBA_PTR_SET_VALUE(rwlockSpinRounds_, rwlockSpinRounds) };


        // rwlockSpinWaits Field Functions 
        bool hasRwlockSpinWaits() const { return this->rwlockSpinWaits_ != nullptr;};
        void deleteRwlockSpinWaits() { this->rwlockSpinWaits_ = nullptr;};
        inline int32_t getRwlockSpinWaits() const { DARABONBA_PTR_GET_DEFAULT(rwlockSpinWaits_, 0) };
        inline List& setRwlockSpinWaits(int32_t rwlockSpinWaits) { DARABONBA_PTR_SET_VALUE(rwlockSpinWaits_, rwlockSpinWaits) };


        // selectFullJoinAvg Field Functions 
        bool hasSelectFullJoinAvg() const { return this->selectFullJoinAvg_ != nullptr;};
        void deleteSelectFullJoinAvg() { this->selectFullJoinAvg_ = nullptr;};
        inline double getSelectFullJoinAvg() const { DARABONBA_PTR_GET_DEFAULT(selectFullJoinAvg_, 0.0) };
        inline List& setSelectFullJoinAvg(double selectFullJoinAvg) { DARABONBA_PTR_SET_VALUE(selectFullJoinAvg_, selectFullJoinAvg) };


        // selectFullRangeJoinAvg Field Functions 
        bool hasSelectFullRangeJoinAvg() const { return this->selectFullRangeJoinAvg_ != nullptr;};
        void deleteSelectFullRangeJoinAvg() { this->selectFullRangeJoinAvg_ = nullptr;};
        inline double getSelectFullRangeJoinAvg() const { DARABONBA_PTR_GET_DEFAULT(selectFullRangeJoinAvg_, 0.0) };
        inline List& setSelectFullRangeJoinAvg(double selectFullRangeJoinAvg) { DARABONBA_PTR_SET_VALUE(selectFullRangeJoinAvg_, selectFullRangeJoinAvg) };


        // selectRangeAvg Field Functions 
        bool hasSelectRangeAvg() const { return this->selectRangeAvg_ != nullptr;};
        void deleteSelectRangeAvg() { this->selectRangeAvg_ = nullptr;};
        inline double getSelectRangeAvg() const { DARABONBA_PTR_GET_DEFAULT(selectRangeAvg_, 0.0) };
        inline List& setSelectRangeAvg(double selectRangeAvg) { DARABONBA_PTR_SET_VALUE(selectRangeAvg_, selectRangeAvg) };


        // selectScanAvg Field Functions 
        bool hasSelectScanAvg() const { return this->selectScanAvg_ != nullptr;};
        void deleteSelectScanAvg() { this->selectScanAvg_ = nullptr;};
        inline double getSelectScanAvg() const { DARABONBA_PTR_GET_DEFAULT(selectScanAvg_, 0.0) };
        inline List& setSelectScanAvg(double selectScanAvg) { DARABONBA_PTR_SET_VALUE(selectScanAvg_, selectScanAvg) };


        // semisyncDelayTime Field Functions 
        bool hasSemisyncDelayTime() const { return this->semisyncDelayTime_ != nullptr;};
        void deleteSemisyncDelayTime() { this->semisyncDelayTime_ = nullptr;};
        inline double getSemisyncDelayTime() const { DARABONBA_PTR_GET_DEFAULT(semisyncDelayTime_, 0.0) };
        inline List& setSemisyncDelayTime(double semisyncDelayTime) { DARABONBA_PTR_SET_VALUE(semisyncDelayTime_, semisyncDelayTime) };


        // serverLockTime Field Functions 
        bool hasServerLockTime() const { return this->serverLockTime_ != nullptr;};
        void deleteServerLockTime() { this->serverLockTime_ = nullptr;};
        inline double getServerLockTime() const { DARABONBA_PTR_GET_DEFAULT(serverLockTime_, 0.0) };
        inline List& setServerLockTime(double serverLockTime) { DARABONBA_PTR_SET_VALUE(serverLockTime_, serverLockTime) };


        // sortMergePasses Field Functions 
        bool hasSortMergePasses() const { return this->sortMergePasses_ != nullptr;};
        void deleteSortMergePasses() { this->sortMergePasses_ = nullptr;};
        inline int64_t getSortMergePasses() const { DARABONBA_PTR_GET_DEFAULT(sortMergePasses_, 0L) };
        inline List& setSortMergePasses(int64_t sortMergePasses) { DARABONBA_PTR_SET_VALUE(sortMergePasses_, sortMergePasses) };


        // sortRangeAvg Field Functions 
        bool hasSortRangeAvg() const { return this->sortRangeAvg_ != nullptr;};
        void deleteSortRangeAvg() { this->sortRangeAvg_ = nullptr;};
        inline double getSortRangeAvg() const { DARABONBA_PTR_GET_DEFAULT(sortRangeAvg_, 0.0) };
        inline List& setSortRangeAvg(double sortRangeAvg) { DARABONBA_PTR_SET_VALUE(sortRangeAvg_, sortRangeAvg) };


        // sortRowsAvg Field Functions 
        bool hasSortRowsAvg() const { return this->sortRowsAvg_ != nullptr;};
        void deleteSortRowsAvg() { this->sortRowsAvg_ = nullptr;};
        inline double getSortRowsAvg() const { DARABONBA_PTR_GET_DEFAULT(sortRowsAvg_, 0.0) };
        inline List& setSortRowsAvg(double sortRowsAvg) { DARABONBA_PTR_SET_VALUE(sortRowsAvg_, sortRowsAvg) };


        // sortScanAvg Field Functions 
        bool hasSortScanAvg() const { return this->sortScanAvg_ != nullptr;};
        void deleteSortScanAvg() { this->sortScanAvg_ = nullptr;};
        inline double getSortScanAvg() const { DARABONBA_PTR_GET_DEFAULT(sortScanAvg_, 0.0) };
        inline List& setSortScanAvg(double sortScanAvg) { DARABONBA_PTR_SET_VALUE(sortScanAvg_, sortScanAvg) };


        // sqlId Field Functions 
        bool hasSqlId() const { return this->sqlId_ != nullptr;};
        void deleteSqlId() { this->sqlId_ = nullptr;};
        inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
        inline List& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline List& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
        inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
        inline List& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
        inline List& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


        // timerWaitAvg Field Functions 
        bool hasTimerWaitAvg() const { return this->timerWaitAvg_ != nullptr;};
        void deleteTimerWaitAvg() { this->timerWaitAvg_ = nullptr;};
        inline double getTimerWaitAvg() const { DARABONBA_PTR_GET_DEFAULT(timerWaitAvg_, 0.0) };
        inline List& setTimerWaitAvg(double timerWaitAvg) { DARABONBA_PTR_SET_VALUE(timerWaitAvg_, timerWaitAvg) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline List& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // tmpDiskTables Field Functions 
        bool hasTmpDiskTables() const { return this->tmpDiskTables_ != nullptr;};
        void deleteTmpDiskTables() { this->tmpDiskTables_ = nullptr;};
        inline int64_t getTmpDiskTables() const { DARABONBA_PTR_GET_DEFAULT(tmpDiskTables_, 0L) };
        inline List& setTmpDiskTables(int64_t tmpDiskTables) { DARABONBA_PTR_SET_VALUE(tmpDiskTables_, tmpDiskTables) };


        // tmpDiskTablesAvg Field Functions 
        bool hasTmpDiskTablesAvg() const { return this->tmpDiskTablesAvg_ != nullptr;};
        void deleteTmpDiskTablesAvg() { this->tmpDiskTablesAvg_ = nullptr;};
        inline double getTmpDiskTablesAvg() const { DARABONBA_PTR_GET_DEFAULT(tmpDiskTablesAvg_, 0.0) };
        inline List& setTmpDiskTablesAvg(double tmpDiskTablesAvg) { DARABONBA_PTR_SET_VALUE(tmpDiskTablesAvg_, tmpDiskTablesAvg) };


        // tmpTables Field Functions 
        bool hasTmpTables() const { return this->tmpTables_ != nullptr;};
        void deleteTmpTables() { this->tmpTables_ = nullptr;};
        inline int64_t getTmpTables() const { DARABONBA_PTR_GET_DEFAULT(tmpTables_, 0L) };
        inline List& setTmpTables(int64_t tmpTables) { DARABONBA_PTR_SET_VALUE(tmpTables_, tmpTables) };


        // tmpTablesAvg Field Functions 
        bool hasTmpTablesAvg() const { return this->tmpTablesAvg_ != nullptr;};
        void deleteTmpTablesAvg() { this->tmpTablesAvg_ = nullptr;};
        inline double getTmpTablesAvg() const { DARABONBA_PTR_GET_DEFAULT(tmpTablesAvg_, 0.0) };
        inline List& setTmpTablesAvg(double tmpTablesAvg) { DARABONBA_PTR_SET_VALUE(tmpTablesAvg_, tmpTablesAvg) };


        // totalLatency Field Functions 
        bool hasTotalLatency() const { return this->totalLatency_ != nullptr;};
        void deleteTotalLatency() { this->totalLatency_ = nullptr;};
        inline double getTotalLatency() const { DARABONBA_PTR_GET_DEFAULT(totalLatency_, 0.0) };
        inline List& setTotalLatency(double totalLatency) { DARABONBA_PTR_SET_VALUE(totalLatency_, totalLatency) };


        // transactionLockTime Field Functions 
        bool hasTransactionLockTime() const { return this->transactionLockTime_ != nullptr;};
        void deleteTransactionLockTime() { this->transactionLockTime_ = nullptr;};
        inline double getTransactionLockTime() const { DARABONBA_PTR_GET_DEFAULT(transactionLockTime_, 0.0) };
        inline List& setTransactionLockTime(double transactionLockTime) { DARABONBA_PTR_SET_VALUE(transactionLockTime_, transactionLockTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // warnCount Field Functions 
        bool hasWarnCount() const { return this->warnCount_ != nullptr;};
        void deleteWarnCount() { this->warnCount_ = nullptr;};
        inline int64_t getWarnCount() const { DARABONBA_PTR_GET_DEFAULT(warnCount_, 0L) };
        inline List& setWarnCount(int64_t warnCount) { DARABONBA_PTR_SET_VALUE(warnCount_, warnCount) };


      protected:
        // The average execution latency. Unit: millisecond.
        shared_ptr<double> avgLatency_ {};
        // The total number of executions.
        shared_ptr<int64_t> count_ {};
        // The percentage of the number of executions.
        shared_ptr<double> countRate_ {};
        // The ratio of the CPU execution duration to the total execution duration of the SQL statement.
        shared_ptr<double> cpuRate_ {};
        // The CPU execution duration. Unit: millisecond.
        shared_ptr<double> cpuTime_ {};
        // The data read duration. Unit: millisecond.
        shared_ptr<double> dataReadTime_ {};
        // The number of nodes from which data can be read.
        shared_ptr<int32_t> dataReads_ {};
        // The data write duration. Unit: millisecond.
        shared_ptr<double> dataWriteTime_ {};
        // The number of nodes to which data can be written.
        shared_ptr<int32_t> dataWrites_ {};
        // The name of the database.
        shared_ptr<string> db_ {};
        // The execution duration. Unit: millisecond.
        shared_ptr<double> elapsedTime_ {};
        // The number of errors.
        shared_ptr<int64_t> errCount_ {};
        // The time when the SQL statement was executed for the first time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> firstTime_ {};
        // Indicates whether full table scan was enabled. Valid values:
        // 
        // * **true**
        // * **false**
        shared_ptr<bool> fullScan_ {};
        // The primary key ID.
        shared_ptr<int64_t> id_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The time when the SQL statement was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> lastTime_ {};
        // The average lock wait latency. Unit: millisecond.
        shared_ptr<double> lockLatencyAvg_ {};
        // The logical database ID.
        shared_ptr<int64_t> logicId_ {};
        // The number of logical nodes.
        shared_ptr<int64_t> logicReads_ {};
        // The maximum execution latency. Unit: millisecond.
        shared_ptr<double> maxLatency_ {};
        // The number of mutex spins.
        shared_ptr<int32_t> mutexSpins_ {};
        // The number of mutex waits.
        shared_ptr<int32_t> mutexWaits_ {};
        // The node ID.
        // 
        // >  This parameter is returned only if the database instance is an ApsaraDB RDS for MySQL Cluster Edition instance or a PolarDB for MySQL cluster.
        shared_ptr<string> nodeId_ {};
        // The number of physical asynchronous nodes.
        shared_ptr<int64_t> physicalAsyncReads_ {};
        // The number of physical nodes.
        shared_ptr<int64_t> physicalReads_ {};
        // The SQL template.
        shared_ptr<string> psql_ {};
        // The number of redo nodes.
        shared_ptr<int64_t> redoWrites_ {};
        // The number of rows that are affected by the SQL statement.
        shared_ptr<int64_t> rowsAffected_ {};
        // The average number of rows affected by the SQL statement.
        shared_ptr<double> rowsAffectedAvg_ {};
        // The total number of scanned rows.
        shared_ptr<int64_t> rowsExamined_ {};
        // The average number of scanned rows.
        shared_ptr<double> rowsExaminedAvg_ {};
        // The average number of returned rows.
        shared_ptr<double> rowsSendAvg_ {};
        // The number of rows returned by the SQL statement.
        shared_ptr<int64_t> rowsSent_ {};
        // The average number of rows returned for the SQL statement.
        shared_ptr<double> rowsSentAvg_ {};
        // The number of sorted rows.
        shared_ptr<int64_t> rowsSorted_ {};
        // The execution duration percentage.
        shared_ptr<double> rtRate_ {};
        // Indicates whether read/write splitting was enabled. Valid values:
        // 
        // * **0:** Read/write splitting was disabled.
        // * **1:** Read/write splitting was enabled.
        shared_ptr<int32_t> rwlockOsWaits_ {};
        // The read/write splitting parameters.
        shared_ptr<int32_t> rwlockSpinRounds_ {};
        // Indices whether multi-index scanning was enabled. Valid values:
        // 
        // * **0:** Multi-index scanning was disabled.
        // * **1:** Multi-index scanning was enabled.
        shared_ptr<int32_t> rwlockSpinWaits_ {};
        // The average number of joins that performed table scans without using indexes.
        // 
        // > If the value of this parameter is not 0, check the table indexes.
        shared_ptr<double> selectFullJoinAvg_ {};
        // The average number of joins that selected a range.
        shared_ptr<double> selectFullRangeJoinAvg_ {};
        // The average selected range.
        shared_ptr<double> selectRangeAvg_ {};
        // The average number of scanned rows.
        shared_ptr<double> selectScanAvg_ {};
        // The semi-synchronous replication latency. Unit: millisecond.
        shared_ptr<double> semisyncDelayTime_ {};
        // The amount of time consumed for locking the server. Unit: millisecond.
        shared_ptr<double> serverLockTime_ {};
        // The number of merges that the sorting algorithm must perform.
        shared_ptr<int64_t> sortMergePasses_ {};
        // The average number of sorts that were performed by using a range.
        shared_ptr<double> sortRangeAvg_ {};
        // The average number of sorted rows.
        shared_ptr<double> sortRowsAvg_ {};
        // The average number of sorts that were performed during table scans.
        shared_ptr<double> sortScanAvg_ {};
        // The SQL template ID.
        shared_ptr<string> sqlId_ {};
        // The type of the SQL statement. Valid values:
        // 
        // * **SELECT**
        // * **UPDATE**
        // * **DELETE**
        shared_ptr<string> sqlType_ {};
        // The names of tables in the database.
        shared_ptr<vector<string>> tables_ {};
        // The reserved parameter.
        shared_ptr<double> timerWaitAvg_ {};
        // The data timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> timestamp_ {};
        // The number of on-disk temporary tables.
        shared_ptr<int64_t> tmpDiskTables_ {};
        // The average number of on-disk temporary tables.
        shared_ptr<double> tmpDiskTablesAvg_ {};
        // The number of temporary tables.
        shared_ptr<int64_t> tmpTables_ {};
        // The average number of temporary tables.
        shared_ptr<double> tmpTablesAvg_ {};
        // The execution latency. Unit: millisecond.
        shared_ptr<double> totalLatency_ {};
        // The amount of time consumed for locking the storage transaction. Unit: millisecond.
        shared_ptr<double> transactionLockTime_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
        // The number of warnings.
        shared_ptr<int64_t> warnCount_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline       const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
      Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
      inline Data& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
      inline Data& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The reserved parameter.
      Darabonba::Json extra_ {};
      // The details of the data returned.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetPfsSqlSummariesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPfsSqlSummariesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPfsSqlSummariesResponseBody::Data) };
    inline GetPfsSqlSummariesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPfsSqlSummariesResponseBody::Data) };
    inline GetPfsSqlSummariesResponseBody& setData(const GetPfsSqlSummariesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPfsSqlSummariesResponseBody& setData(GetPfsSqlSummariesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPfsSqlSummariesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPfsSqlSummariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPfsSqlSummariesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<GetPfsSqlSummariesResponseBody::Data> data_ {};
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
