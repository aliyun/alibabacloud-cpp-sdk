// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETPFSSQLSUMMARIESRESPONSEBODYDATALIST_HPP_
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
  class GetPfsSqlSummariesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPfsSqlSummariesResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPfsSqlSummariesResponseBodyDataList& obj) { 
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
    GetPfsSqlSummariesResponseBodyDataList() = default ;
    GetPfsSqlSummariesResponseBodyDataList(const GetPfsSqlSummariesResponseBodyDataList &) = default ;
    GetPfsSqlSummariesResponseBodyDataList(GetPfsSqlSummariesResponseBodyDataList &&) = default ;
    GetPfsSqlSummariesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPfsSqlSummariesResponseBodyDataList() = default ;
    GetPfsSqlSummariesResponseBodyDataList& operator=(const GetPfsSqlSummariesResponseBodyDataList &) = default ;
    GetPfsSqlSummariesResponseBodyDataList& operator=(GetPfsSqlSummariesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgLatency_ == nullptr
        && return this->count_ == nullptr && return this->countRate_ == nullptr && return this->cpuRate_ == nullptr && return this->cpuTime_ == nullptr && return this->dataReadTime_ == nullptr
        && return this->dataReads_ == nullptr && return this->dataWriteTime_ == nullptr && return this->dataWrites_ == nullptr && return this->db_ == nullptr && return this->elapsedTime_ == nullptr
        && return this->errCount_ == nullptr && return this->firstTime_ == nullptr && return this->fullScan_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->lastTime_ == nullptr && return this->lockLatencyAvg_ == nullptr && return this->logicId_ == nullptr && return this->logicReads_ == nullptr && return this->maxLatency_ == nullptr
        && return this->mutexSpins_ == nullptr && return this->mutexWaits_ == nullptr && return this->nodeId_ == nullptr && return this->physicalAsyncReads_ == nullptr && return this->physicalReads_ == nullptr
        && return this->psql_ == nullptr && return this->redoWrites_ == nullptr && return this->rowsAffected_ == nullptr && return this->rowsAffectedAvg_ == nullptr && return this->rowsExamined_ == nullptr
        && return this->rowsExaminedAvg_ == nullptr && return this->rowsSendAvg_ == nullptr && return this->rowsSent_ == nullptr && return this->rowsSentAvg_ == nullptr && return this->rowsSorted_ == nullptr
        && return this->rtRate_ == nullptr && return this->rwlockOsWaits_ == nullptr && return this->rwlockSpinRounds_ == nullptr && return this->rwlockSpinWaits_ == nullptr && return this->selectFullJoinAvg_ == nullptr
        && return this->selectFullRangeJoinAvg_ == nullptr && return this->selectRangeAvg_ == nullptr && return this->selectScanAvg_ == nullptr && return this->semisyncDelayTime_ == nullptr && return this->serverLockTime_ == nullptr
        && return this->sortMergePasses_ == nullptr && return this->sortRangeAvg_ == nullptr && return this->sortRowsAvg_ == nullptr && return this->sortScanAvg_ == nullptr && return this->sqlId_ == nullptr
        && return this->sqlType_ == nullptr && return this->tables_ == nullptr && return this->timerWaitAvg_ == nullptr && return this->timestamp_ == nullptr && return this->tmpDiskTables_ == nullptr
        && return this->tmpDiskTablesAvg_ == nullptr && return this->tmpTables_ == nullptr && return this->tmpTablesAvg_ == nullptr && return this->totalLatency_ == nullptr && return this->transactionLockTime_ == nullptr
        && return this->userId_ == nullptr && return this->warnCount_ == nullptr; };
    // avgLatency Field Functions 
    bool hasAvgLatency() const { return this->avgLatency_ != nullptr;};
    void deleteAvgLatency() { this->avgLatency_ = nullptr;};
    inline double avgLatency() const { DARABONBA_PTR_GET_DEFAULT(avgLatency_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setAvgLatency(double avgLatency) { DARABONBA_PTR_SET_VALUE(avgLatency_, avgLatency) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // countRate Field Functions 
    bool hasCountRate() const { return this->countRate_ != nullptr;};
    void deleteCountRate() { this->countRate_ = nullptr;};
    inline double countRate() const { DARABONBA_PTR_GET_DEFAULT(countRate_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setCountRate(double countRate) { DARABONBA_PTR_SET_VALUE(countRate_, countRate) };


    // cpuRate Field Functions 
    bool hasCpuRate() const { return this->cpuRate_ != nullptr;};
    void deleteCpuRate() { this->cpuRate_ = nullptr;};
    inline double cpuRate() const { DARABONBA_PTR_GET_DEFAULT(cpuRate_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setCpuRate(double cpuRate) { DARABONBA_PTR_SET_VALUE(cpuRate_, cpuRate) };


    // cpuTime Field Functions 
    bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
    void deleteCpuTime() { this->cpuTime_ = nullptr;};
    inline double cpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setCpuTime(double cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


    // dataReadTime Field Functions 
    bool hasDataReadTime() const { return this->dataReadTime_ != nullptr;};
    void deleteDataReadTime() { this->dataReadTime_ = nullptr;};
    inline double dataReadTime() const { DARABONBA_PTR_GET_DEFAULT(dataReadTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setDataReadTime(double dataReadTime) { DARABONBA_PTR_SET_VALUE(dataReadTime_, dataReadTime) };


    // dataReads Field Functions 
    bool hasDataReads() const { return this->dataReads_ != nullptr;};
    void deleteDataReads() { this->dataReads_ = nullptr;};
    inline int32_t dataReads() const { DARABONBA_PTR_GET_DEFAULT(dataReads_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setDataReads(int32_t dataReads) { DARABONBA_PTR_SET_VALUE(dataReads_, dataReads) };


    // dataWriteTime Field Functions 
    bool hasDataWriteTime() const { return this->dataWriteTime_ != nullptr;};
    void deleteDataWriteTime() { this->dataWriteTime_ = nullptr;};
    inline double dataWriteTime() const { DARABONBA_PTR_GET_DEFAULT(dataWriteTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setDataWriteTime(double dataWriteTime) { DARABONBA_PTR_SET_VALUE(dataWriteTime_, dataWriteTime) };


    // dataWrites Field Functions 
    bool hasDataWrites() const { return this->dataWrites_ != nullptr;};
    void deleteDataWrites() { this->dataWrites_ = nullptr;};
    inline int32_t dataWrites() const { DARABONBA_PTR_GET_DEFAULT(dataWrites_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setDataWrites(int32_t dataWrites) { DARABONBA_PTR_SET_VALUE(dataWrites_, dataWrites) };


    // db Field Functions 
    bool hasDb() const { return this->db_ != nullptr;};
    void deleteDb() { this->db_ = nullptr;};
    inline string db() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline double elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setElapsedTime(double elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // errCount Field Functions 
    bool hasErrCount() const { return this->errCount_ != nullptr;};
    void deleteErrCount() { this->errCount_ = nullptr;};
    inline int64_t errCount() const { DARABONBA_PTR_GET_DEFAULT(errCount_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setErrCount(int64_t errCount) { DARABONBA_PTR_SET_VALUE(errCount_, errCount) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // fullScan Field Functions 
    bool hasFullScan() const { return this->fullScan_ != nullptr;};
    void deleteFullScan() { this->fullScan_ = nullptr;};
    inline bool fullScan() const { DARABONBA_PTR_GET_DEFAULT(fullScan_, false) };
    inline GetPfsSqlSummariesResponseBodyDataList& setFullScan(bool fullScan) { DARABONBA_PTR_SET_VALUE(fullScan_, fullScan) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // lockLatencyAvg Field Functions 
    bool hasLockLatencyAvg() const { return this->lockLatencyAvg_ != nullptr;};
    void deleteLockLatencyAvg() { this->lockLatencyAvg_ = nullptr;};
    inline double lockLatencyAvg() const { DARABONBA_PTR_GET_DEFAULT(lockLatencyAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setLockLatencyAvg(double lockLatencyAvg) { DARABONBA_PTR_SET_VALUE(lockLatencyAvg_, lockLatencyAvg) };


    // logicId Field Functions 
    bool hasLogicId() const { return this->logicId_ != nullptr;};
    void deleteLogicId() { this->logicId_ = nullptr;};
    inline int64_t logicId() const { DARABONBA_PTR_GET_DEFAULT(logicId_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setLogicId(int64_t logicId) { DARABONBA_PTR_SET_VALUE(logicId_, logicId) };


    // logicReads Field Functions 
    bool hasLogicReads() const { return this->logicReads_ != nullptr;};
    void deleteLogicReads() { this->logicReads_ = nullptr;};
    inline int64_t logicReads() const { DARABONBA_PTR_GET_DEFAULT(logicReads_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setLogicReads(int64_t logicReads) { DARABONBA_PTR_SET_VALUE(logicReads_, logicReads) };


    // maxLatency Field Functions 
    bool hasMaxLatency() const { return this->maxLatency_ != nullptr;};
    void deleteMaxLatency() { this->maxLatency_ = nullptr;};
    inline double maxLatency() const { DARABONBA_PTR_GET_DEFAULT(maxLatency_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setMaxLatency(double maxLatency) { DARABONBA_PTR_SET_VALUE(maxLatency_, maxLatency) };


    // mutexSpins Field Functions 
    bool hasMutexSpins() const { return this->mutexSpins_ != nullptr;};
    void deleteMutexSpins() { this->mutexSpins_ = nullptr;};
    inline int32_t mutexSpins() const { DARABONBA_PTR_GET_DEFAULT(mutexSpins_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setMutexSpins(int32_t mutexSpins) { DARABONBA_PTR_SET_VALUE(mutexSpins_, mutexSpins) };


    // mutexWaits Field Functions 
    bool hasMutexWaits() const { return this->mutexWaits_ != nullptr;};
    void deleteMutexWaits() { this->mutexWaits_ = nullptr;};
    inline int32_t mutexWaits() const { DARABONBA_PTR_GET_DEFAULT(mutexWaits_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setMutexWaits(int32_t mutexWaits) { DARABONBA_PTR_SET_VALUE(mutexWaits_, mutexWaits) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // physicalAsyncReads Field Functions 
    bool hasPhysicalAsyncReads() const { return this->physicalAsyncReads_ != nullptr;};
    void deletePhysicalAsyncReads() { this->physicalAsyncReads_ = nullptr;};
    inline int64_t physicalAsyncReads() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncReads_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setPhysicalAsyncReads(int64_t physicalAsyncReads) { DARABONBA_PTR_SET_VALUE(physicalAsyncReads_, physicalAsyncReads) };


    // physicalReads Field Functions 
    bool hasPhysicalReads() const { return this->physicalReads_ != nullptr;};
    void deletePhysicalReads() { this->physicalReads_ = nullptr;};
    inline int64_t physicalReads() const { DARABONBA_PTR_GET_DEFAULT(physicalReads_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setPhysicalReads(int64_t physicalReads) { DARABONBA_PTR_SET_VALUE(physicalReads_, physicalReads) };


    // psql Field Functions 
    bool hasPsql() const { return this->psql_ != nullptr;};
    void deletePsql() { this->psql_ = nullptr;};
    inline string psql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


    // redoWrites Field Functions 
    bool hasRedoWrites() const { return this->redoWrites_ != nullptr;};
    void deleteRedoWrites() { this->redoWrites_ = nullptr;};
    inline int64_t redoWrites() const { DARABONBA_PTR_GET_DEFAULT(redoWrites_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRedoWrites(int64_t redoWrites) { DARABONBA_PTR_SET_VALUE(redoWrites_, redoWrites) };


    // rowsAffected Field Functions 
    bool hasRowsAffected() const { return this->rowsAffected_ != nullptr;};
    void deleteRowsAffected() { this->rowsAffected_ = nullptr;};
    inline int64_t rowsAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsAffected_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsAffected(int64_t rowsAffected) { DARABONBA_PTR_SET_VALUE(rowsAffected_, rowsAffected) };


    // rowsAffectedAvg Field Functions 
    bool hasRowsAffectedAvg() const { return this->rowsAffectedAvg_ != nullptr;};
    void deleteRowsAffectedAvg() { this->rowsAffectedAvg_ = nullptr;};
    inline double rowsAffectedAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsAffectedAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsAffectedAvg(double rowsAffectedAvg) { DARABONBA_PTR_SET_VALUE(rowsAffectedAvg_, rowsAffectedAvg) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline int64_t rowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


    // rowsExaminedAvg Field Functions 
    bool hasRowsExaminedAvg() const { return this->rowsExaminedAvg_ != nullptr;};
    void deleteRowsExaminedAvg() { this->rowsExaminedAvg_ = nullptr;};
    inline double rowsExaminedAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsExaminedAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsExaminedAvg(double rowsExaminedAvg) { DARABONBA_PTR_SET_VALUE(rowsExaminedAvg_, rowsExaminedAvg) };


    // rowsSendAvg Field Functions 
    bool hasRowsSendAvg() const { return this->rowsSendAvg_ != nullptr;};
    void deleteRowsSendAvg() { this->rowsSendAvg_ = nullptr;};
    inline double rowsSendAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsSendAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsSendAvg(double rowsSendAvg) { DARABONBA_PTR_SET_VALUE(rowsSendAvg_, rowsSendAvg) };


    // rowsSent Field Functions 
    bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
    void deleteRowsSent() { this->rowsSent_ = nullptr;};
    inline int64_t rowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsSent(int64_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


    // rowsSentAvg Field Functions 
    bool hasRowsSentAvg() const { return this->rowsSentAvg_ != nullptr;};
    void deleteRowsSentAvg() { this->rowsSentAvg_ = nullptr;};
    inline double rowsSentAvg() const { DARABONBA_PTR_GET_DEFAULT(rowsSentAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsSentAvg(double rowsSentAvg) { DARABONBA_PTR_SET_VALUE(rowsSentAvg_, rowsSentAvg) };


    // rowsSorted Field Functions 
    bool hasRowsSorted() const { return this->rowsSorted_ != nullptr;};
    void deleteRowsSorted() { this->rowsSorted_ = nullptr;};
    inline int64_t rowsSorted() const { DARABONBA_PTR_GET_DEFAULT(rowsSorted_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRowsSorted(int64_t rowsSorted) { DARABONBA_PTR_SET_VALUE(rowsSorted_, rowsSorted) };


    // rtRate Field Functions 
    bool hasRtRate() const { return this->rtRate_ != nullptr;};
    void deleteRtRate() { this->rtRate_ = nullptr;};
    inline double rtRate() const { DARABONBA_PTR_GET_DEFAULT(rtRate_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRtRate(double rtRate) { DARABONBA_PTR_SET_VALUE(rtRate_, rtRate) };


    // rwlockOsWaits Field Functions 
    bool hasRwlockOsWaits() const { return this->rwlockOsWaits_ != nullptr;};
    void deleteRwlockOsWaits() { this->rwlockOsWaits_ = nullptr;};
    inline int32_t rwlockOsWaits() const { DARABONBA_PTR_GET_DEFAULT(rwlockOsWaits_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRwlockOsWaits(int32_t rwlockOsWaits) { DARABONBA_PTR_SET_VALUE(rwlockOsWaits_, rwlockOsWaits) };


    // rwlockSpinRounds Field Functions 
    bool hasRwlockSpinRounds() const { return this->rwlockSpinRounds_ != nullptr;};
    void deleteRwlockSpinRounds() { this->rwlockSpinRounds_ = nullptr;};
    inline int32_t rwlockSpinRounds() const { DARABONBA_PTR_GET_DEFAULT(rwlockSpinRounds_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRwlockSpinRounds(int32_t rwlockSpinRounds) { DARABONBA_PTR_SET_VALUE(rwlockSpinRounds_, rwlockSpinRounds) };


    // rwlockSpinWaits Field Functions 
    bool hasRwlockSpinWaits() const { return this->rwlockSpinWaits_ != nullptr;};
    void deleteRwlockSpinWaits() { this->rwlockSpinWaits_ = nullptr;};
    inline int32_t rwlockSpinWaits() const { DARABONBA_PTR_GET_DEFAULT(rwlockSpinWaits_, 0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setRwlockSpinWaits(int32_t rwlockSpinWaits) { DARABONBA_PTR_SET_VALUE(rwlockSpinWaits_, rwlockSpinWaits) };


    // selectFullJoinAvg Field Functions 
    bool hasSelectFullJoinAvg() const { return this->selectFullJoinAvg_ != nullptr;};
    void deleteSelectFullJoinAvg() { this->selectFullJoinAvg_ = nullptr;};
    inline double selectFullJoinAvg() const { DARABONBA_PTR_GET_DEFAULT(selectFullJoinAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSelectFullJoinAvg(double selectFullJoinAvg) { DARABONBA_PTR_SET_VALUE(selectFullJoinAvg_, selectFullJoinAvg) };


    // selectFullRangeJoinAvg Field Functions 
    bool hasSelectFullRangeJoinAvg() const { return this->selectFullRangeJoinAvg_ != nullptr;};
    void deleteSelectFullRangeJoinAvg() { this->selectFullRangeJoinAvg_ = nullptr;};
    inline double selectFullRangeJoinAvg() const { DARABONBA_PTR_GET_DEFAULT(selectFullRangeJoinAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSelectFullRangeJoinAvg(double selectFullRangeJoinAvg) { DARABONBA_PTR_SET_VALUE(selectFullRangeJoinAvg_, selectFullRangeJoinAvg) };


    // selectRangeAvg Field Functions 
    bool hasSelectRangeAvg() const { return this->selectRangeAvg_ != nullptr;};
    void deleteSelectRangeAvg() { this->selectRangeAvg_ = nullptr;};
    inline double selectRangeAvg() const { DARABONBA_PTR_GET_DEFAULT(selectRangeAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSelectRangeAvg(double selectRangeAvg) { DARABONBA_PTR_SET_VALUE(selectRangeAvg_, selectRangeAvg) };


    // selectScanAvg Field Functions 
    bool hasSelectScanAvg() const { return this->selectScanAvg_ != nullptr;};
    void deleteSelectScanAvg() { this->selectScanAvg_ = nullptr;};
    inline double selectScanAvg() const { DARABONBA_PTR_GET_DEFAULT(selectScanAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSelectScanAvg(double selectScanAvg) { DARABONBA_PTR_SET_VALUE(selectScanAvg_, selectScanAvg) };


    // semisyncDelayTime Field Functions 
    bool hasSemisyncDelayTime() const { return this->semisyncDelayTime_ != nullptr;};
    void deleteSemisyncDelayTime() { this->semisyncDelayTime_ = nullptr;};
    inline double semisyncDelayTime() const { DARABONBA_PTR_GET_DEFAULT(semisyncDelayTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSemisyncDelayTime(double semisyncDelayTime) { DARABONBA_PTR_SET_VALUE(semisyncDelayTime_, semisyncDelayTime) };


    // serverLockTime Field Functions 
    bool hasServerLockTime() const { return this->serverLockTime_ != nullptr;};
    void deleteServerLockTime() { this->serverLockTime_ = nullptr;};
    inline double serverLockTime() const { DARABONBA_PTR_GET_DEFAULT(serverLockTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setServerLockTime(double serverLockTime) { DARABONBA_PTR_SET_VALUE(serverLockTime_, serverLockTime) };


    // sortMergePasses Field Functions 
    bool hasSortMergePasses() const { return this->sortMergePasses_ != nullptr;};
    void deleteSortMergePasses() { this->sortMergePasses_ = nullptr;};
    inline int64_t sortMergePasses() const { DARABONBA_PTR_GET_DEFAULT(sortMergePasses_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSortMergePasses(int64_t sortMergePasses) { DARABONBA_PTR_SET_VALUE(sortMergePasses_, sortMergePasses) };


    // sortRangeAvg Field Functions 
    bool hasSortRangeAvg() const { return this->sortRangeAvg_ != nullptr;};
    void deleteSortRangeAvg() { this->sortRangeAvg_ = nullptr;};
    inline double sortRangeAvg() const { DARABONBA_PTR_GET_DEFAULT(sortRangeAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSortRangeAvg(double sortRangeAvg) { DARABONBA_PTR_SET_VALUE(sortRangeAvg_, sortRangeAvg) };


    // sortRowsAvg Field Functions 
    bool hasSortRowsAvg() const { return this->sortRowsAvg_ != nullptr;};
    void deleteSortRowsAvg() { this->sortRowsAvg_ = nullptr;};
    inline double sortRowsAvg() const { DARABONBA_PTR_GET_DEFAULT(sortRowsAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSortRowsAvg(double sortRowsAvg) { DARABONBA_PTR_SET_VALUE(sortRowsAvg_, sortRowsAvg) };


    // sortScanAvg Field Functions 
    bool hasSortScanAvg() const { return this->sortScanAvg_ != nullptr;};
    void deleteSortScanAvg() { this->sortScanAvg_ = nullptr;};
    inline double sortScanAvg() const { DARABONBA_PTR_GET_DEFAULT(sortScanAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setSortScanAvg(double sortScanAvg) { DARABONBA_PTR_SET_VALUE(sortScanAvg_, sortScanAvg) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // timerWaitAvg Field Functions 
    bool hasTimerWaitAvg() const { return this->timerWaitAvg_ != nullptr;};
    void deleteTimerWaitAvg() { this->timerWaitAvg_ = nullptr;};
    inline double timerWaitAvg() const { DARABONBA_PTR_GET_DEFAULT(timerWaitAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTimerWaitAvg(double timerWaitAvg) { DARABONBA_PTR_SET_VALUE(timerWaitAvg_, timerWaitAvg) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // tmpDiskTables Field Functions 
    bool hasTmpDiskTables() const { return this->tmpDiskTables_ != nullptr;};
    void deleteTmpDiskTables() { this->tmpDiskTables_ = nullptr;};
    inline int64_t tmpDiskTables() const { DARABONBA_PTR_GET_DEFAULT(tmpDiskTables_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTmpDiskTables(int64_t tmpDiskTables) { DARABONBA_PTR_SET_VALUE(tmpDiskTables_, tmpDiskTables) };


    // tmpDiskTablesAvg Field Functions 
    bool hasTmpDiskTablesAvg() const { return this->tmpDiskTablesAvg_ != nullptr;};
    void deleteTmpDiskTablesAvg() { this->tmpDiskTablesAvg_ = nullptr;};
    inline double tmpDiskTablesAvg() const { DARABONBA_PTR_GET_DEFAULT(tmpDiskTablesAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTmpDiskTablesAvg(double tmpDiskTablesAvg) { DARABONBA_PTR_SET_VALUE(tmpDiskTablesAvg_, tmpDiskTablesAvg) };


    // tmpTables Field Functions 
    bool hasTmpTables() const { return this->tmpTables_ != nullptr;};
    void deleteTmpTables() { this->tmpTables_ = nullptr;};
    inline int64_t tmpTables() const { DARABONBA_PTR_GET_DEFAULT(tmpTables_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTmpTables(int64_t tmpTables) { DARABONBA_PTR_SET_VALUE(tmpTables_, tmpTables) };


    // tmpTablesAvg Field Functions 
    bool hasTmpTablesAvg() const { return this->tmpTablesAvg_ != nullptr;};
    void deleteTmpTablesAvg() { this->tmpTablesAvg_ = nullptr;};
    inline double tmpTablesAvg() const { DARABONBA_PTR_GET_DEFAULT(tmpTablesAvg_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTmpTablesAvg(double tmpTablesAvg) { DARABONBA_PTR_SET_VALUE(tmpTablesAvg_, tmpTablesAvg) };


    // totalLatency Field Functions 
    bool hasTotalLatency() const { return this->totalLatency_ != nullptr;};
    void deleteTotalLatency() { this->totalLatency_ = nullptr;};
    inline double totalLatency() const { DARABONBA_PTR_GET_DEFAULT(totalLatency_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTotalLatency(double totalLatency) { DARABONBA_PTR_SET_VALUE(totalLatency_, totalLatency) };


    // transactionLockTime Field Functions 
    bool hasTransactionLockTime() const { return this->transactionLockTime_ != nullptr;};
    void deleteTransactionLockTime() { this->transactionLockTime_ = nullptr;};
    inline double transactionLockTime() const { DARABONBA_PTR_GET_DEFAULT(transactionLockTime_, 0.0) };
    inline GetPfsSqlSummariesResponseBodyDataList& setTransactionLockTime(double transactionLockTime) { DARABONBA_PTR_SET_VALUE(transactionLockTime_, transactionLockTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPfsSqlSummariesResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // warnCount Field Functions 
    bool hasWarnCount() const { return this->warnCount_ != nullptr;};
    void deleteWarnCount() { this->warnCount_ = nullptr;};
    inline int64_t warnCount() const { DARABONBA_PTR_GET_DEFAULT(warnCount_, 0L) };
    inline GetPfsSqlSummariesResponseBodyDataList& setWarnCount(int64_t warnCount) { DARABONBA_PTR_SET_VALUE(warnCount_, warnCount) };


  protected:
    // The average execution latency. Unit: millisecond.
    std::shared_ptr<double> avgLatency_ = nullptr;
    // The total number of executions.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The percentage of the number of executions.
    std::shared_ptr<double> countRate_ = nullptr;
    // The ratio of the CPU execution duration to the total execution duration of the SQL statement.
    std::shared_ptr<double> cpuRate_ = nullptr;
    // The CPU execution duration. Unit: millisecond.
    std::shared_ptr<double> cpuTime_ = nullptr;
    // The data read duration. Unit: millisecond.
    std::shared_ptr<double> dataReadTime_ = nullptr;
    // The number of nodes from which data can be read.
    std::shared_ptr<int32_t> dataReads_ = nullptr;
    // The data write duration. Unit: millisecond.
    std::shared_ptr<double> dataWriteTime_ = nullptr;
    // The number of nodes to which data can be written.
    std::shared_ptr<int32_t> dataWrites_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> db_ = nullptr;
    // The execution duration. Unit: millisecond.
    std::shared_ptr<double> elapsedTime_ = nullptr;
    // The number of errors.
    std::shared_ptr<int64_t> errCount_ = nullptr;
    // The time when the SQL statement was executed for the first time. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // Indicates whether full table scan was enabled. Valid values:
    // 
    // * **true**
    // * **false**
    std::shared_ptr<bool> fullScan_ = nullptr;
    // The primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the SQL statement was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    // The average lock wait latency. Unit: millisecond.
    std::shared_ptr<double> lockLatencyAvg_ = nullptr;
    // The logical database ID.
    std::shared_ptr<int64_t> logicId_ = nullptr;
    // The number of logical nodes.
    std::shared_ptr<int64_t> logicReads_ = nullptr;
    // The maximum execution latency. Unit: millisecond.
    std::shared_ptr<double> maxLatency_ = nullptr;
    // The number of mutex spins.
    std::shared_ptr<int32_t> mutexSpins_ = nullptr;
    // The number of mutex waits.
    std::shared_ptr<int32_t> mutexWaits_ = nullptr;
    // The node ID.
    // 
    // >  This parameter is returned only if the database instance is an ApsaraDB RDS for MySQL Cluster Edition instance or a PolarDB for MySQL cluster.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The number of physical asynchronous nodes.
    std::shared_ptr<int64_t> physicalAsyncReads_ = nullptr;
    // The number of physical nodes.
    std::shared_ptr<int64_t> physicalReads_ = nullptr;
    // The SQL template.
    std::shared_ptr<string> psql_ = nullptr;
    // The number of redo nodes.
    std::shared_ptr<int64_t> redoWrites_ = nullptr;
    // The number of rows that are affected by the SQL statement.
    std::shared_ptr<int64_t> rowsAffected_ = nullptr;
    // The average number of rows affected by the SQL statement.
    std::shared_ptr<double> rowsAffectedAvg_ = nullptr;
    // The total number of scanned rows.
    std::shared_ptr<int64_t> rowsExamined_ = nullptr;
    // The average number of scanned rows.
    std::shared_ptr<double> rowsExaminedAvg_ = nullptr;
    // The average number of returned rows.
    std::shared_ptr<double> rowsSendAvg_ = nullptr;
    // The number of rows returned by the SQL statement.
    std::shared_ptr<int64_t> rowsSent_ = nullptr;
    // The average number of rows returned for the SQL statement.
    std::shared_ptr<double> rowsSentAvg_ = nullptr;
    // The number of sorted rows.
    std::shared_ptr<int64_t> rowsSorted_ = nullptr;
    // The execution duration percentage.
    std::shared_ptr<double> rtRate_ = nullptr;
    // Indicates whether read/write splitting was enabled. Valid values:
    // 
    // * **0:** Read/write splitting was disabled.
    // * **1:** Read/write splitting was enabled.
    std::shared_ptr<int32_t> rwlockOsWaits_ = nullptr;
    // The read/write splitting parameters.
    std::shared_ptr<int32_t> rwlockSpinRounds_ = nullptr;
    // Indices whether multi-index scanning was enabled. Valid values:
    // 
    // * **0:** Multi-index scanning was disabled.
    // * **1:** Multi-index scanning was enabled.
    std::shared_ptr<int32_t> rwlockSpinWaits_ = nullptr;
    // The average number of joins that performed table scans without using indexes.
    // 
    // > If the value of this parameter is not 0, check the table indexes.
    std::shared_ptr<double> selectFullJoinAvg_ = nullptr;
    // The average number of joins that selected a range.
    std::shared_ptr<double> selectFullRangeJoinAvg_ = nullptr;
    // The average selected range.
    std::shared_ptr<double> selectRangeAvg_ = nullptr;
    // The average number of scanned rows.
    std::shared_ptr<double> selectScanAvg_ = nullptr;
    // The semi-synchronous replication latency. Unit: millisecond.
    std::shared_ptr<double> semisyncDelayTime_ = nullptr;
    // The amount of time consumed for locking the server. Unit: millisecond.
    std::shared_ptr<double> serverLockTime_ = nullptr;
    // The number of merges that the sorting algorithm must perform.
    std::shared_ptr<int64_t> sortMergePasses_ = nullptr;
    // The average number of sorts that were performed by using a range.
    std::shared_ptr<double> sortRangeAvg_ = nullptr;
    // The average number of sorted rows.
    std::shared_ptr<double> sortRowsAvg_ = nullptr;
    // The average number of sorts that were performed during table scans.
    std::shared_ptr<double> sortScanAvg_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The type of the SQL statement. Valid values:
    // 
    // * **SELECT**
    // * **UPDATE**
    // * **DELETE**
    std::shared_ptr<string> sqlType_ = nullptr;
    // The names of tables in the database.
    std::shared_ptr<vector<string>> tables_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<double> timerWaitAvg_ = nullptr;
    // The data timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The number of on-disk temporary tables.
    std::shared_ptr<int64_t> tmpDiskTables_ = nullptr;
    // The average number of on-disk temporary tables.
    std::shared_ptr<double> tmpDiskTablesAvg_ = nullptr;
    // The number of temporary tables.
    std::shared_ptr<int64_t> tmpTables_ = nullptr;
    // The average number of temporary tables.
    std::shared_ptr<double> tmpTablesAvg_ = nullptr;
    // The execution latency. Unit: millisecond.
    std::shared_ptr<double> totalLatency_ = nullptr;
    // The amount of time consumed for locking the storage transaction. Unit: millisecond.
    std::shared_ptr<double> transactionLockTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The number of warnings.
    std::shared_ptr<int64_t> warnCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
