// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLINSIGHTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLINSIGHTSTATISTICRESPONSEBODY_HPP_
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
  class DescribeSqlInsightStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlInsightStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlInsightStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlInsightStatisticResponseBody() = default ;
    DescribeSqlInsightStatisticResponseBody(const DescribeSqlInsightStatisticResponseBody &) = default ;
    DescribeSqlInsightStatisticResponseBody(DescribeSqlInsightStatisticResponseBody &&) = default ;
    DescribeSqlInsightStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlInsightStatisticResponseBody() = default ;
    DescribeSqlInsightStatisticResponseBody& operator=(const DescribeSqlInsightStatisticResponseBody &) = default ;
    DescribeSqlInsightStatisticResponseBody& operator=(DescribeSqlInsightStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_TO_JSON(ResultId, resultId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_ANY_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(List, list_);
          DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_ANY_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(List, list_);
          DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class List : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const List& obj) { 
            DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
            DARABONBA_PTR_TO_JSON(AggKey, aggKey_);
            DARABONBA_PTR_TO_JSON(AvgAffectRows, avgAffectRows_);
            DARABONBA_PTR_TO_JSON(AvgCpuTime, avgCpuTime_);
            DARABONBA_PTR_TO_JSON(AvgFrows, avgFrows_);
            DARABONBA_PTR_TO_JSON(AvgLockWaitTime, avgLockWaitTime_);
            DARABONBA_PTR_TO_JSON(AvgLogicalRead, avgLogicalRead_);
            DARABONBA_PTR_TO_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
            DARABONBA_PTR_TO_JSON(AvgPhysicalRead, avgPhysicalRead_);
            DARABONBA_PTR_TO_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
            DARABONBA_PTR_TO_JSON(AvgRows, avgRows_);
            DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
            DARABONBA_PTR_TO_JSON(AvgRowsReturned, avgRowsReturned_);
            DARABONBA_PTR_TO_JSON(AvgRowsUpdated, avgRowsUpdated_);
            DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
            DARABONBA_PTR_TO_JSON(AvgScanRows, avgScanRows_);
            DARABONBA_PTR_TO_JSON(AvgScnt, avgScnt_);
            DARABONBA_PTR_TO_JSON(AvgWrites, avgWrites_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(CountRate, countRate_);
            DARABONBA_PTR_TO_JSON(CpuTime, cpuTime_);
            DARABONBA_PTR_TO_JSON(Database, database_);
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
            DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
            DARABONBA_PTR_TO_JSON(Frows, frows_);
            DARABONBA_PTR_TO_JSON(Hash, hash_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(LockWaitTime, lockWaitTime_);
            DARABONBA_PTR_TO_JSON(LogicalRead, logicalRead_);
            DARABONBA_PTR_TO_JSON(MaxCpuTime, maxCpuTime_);
            DARABONBA_PTR_TO_JSON(MaxLogicalRead, maxLogicalRead_);
            DARABONBA_PTR_TO_JSON(MaxPhysicalRead, maxPhysicalRead_);
            DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
            DARABONBA_PTR_TO_JSON(MaxRowsReturned, maxRowsReturned_);
            DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
            DARABONBA_PTR_TO_JSON(MaxWrites, maxWrites_);
            DARABONBA_PTR_TO_JSON(MinCpuTime, minCpuTime_);
            DARABONBA_PTR_TO_JSON(MinLogicalRead, minLogicalRead_);
            DARABONBA_PTR_TO_JSON(MinPhysicalRead, minPhysicalRead_);
            DARABONBA_PTR_TO_JSON(MinRowsReturned, minRowsReturned_);
            DARABONBA_PTR_TO_JSON(MinRt, minRt_);
            DARABONBA_PTR_TO_JSON(MinWrites, minWrites_);
            DARABONBA_PTR_TO_JSON(OriginAlias, originAlias_);
            DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
            DARABONBA_PTR_TO_JSON(Params, params_);
            DARABONBA_PTR_TO_JSON(PhysicalAsyncRead, physicalAsyncRead_);
            DARABONBA_PTR_TO_JSON(PhysicalRead, physicalRead_);
            DARABONBA_PTR_TO_JSON(PhysicalSyncRead, physicalSyncRead_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Psql, psql_);
            DARABONBA_PTR_TO_JSON(Rows, rows_);
            DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
            DARABONBA_PTR_TO_JSON(RowsReturned, rowsReturned_);
            DARABONBA_PTR_TO_JSON(Rt, rt_);
            DARABONBA_PTR_TO_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
            DARABONBA_PTR_TO_JSON(RtRate, rtRate_);
            DARABONBA_PTR_TO_JSON(SampleType, sampleType_);
            DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
            DARABONBA_PTR_TO_JSON(Scnt, scnt_);
            DARABONBA_PTR_TO_JSON(Sql, sql_);
            DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
            DARABONBA_PTR_TO_JSON(SqlNew, sqlNew_);
            DARABONBA_PTR_TO_JSON(SqlTextFeature, sqlTextFeature_);
            DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
            DARABONBA_PTR_TO_JSON(SumRowsUpdated, sumRowsUpdated_);
            DARABONBA_PTR_TO_JSON(Tables, tables_);
            DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
            DARABONBA_PTR_TO_JSON(TimeRate, timeRate_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(TotalAffectRows, totalAffectRows_);
            DARABONBA_PTR_TO_JSON(TotalRt, totalRt_);
            DARABONBA_PTR_TO_JSON(TotalScanRows, totalScanRows_);
            DARABONBA_PTR_TO_JSON(Trend, trend_);
            DARABONBA_PTR_TO_JSON(UpdateRows, updateRows_);
            DARABONBA_PTR_TO_JSON(User, user_);
            DARABONBA_PTR_TO_JSON(Version, version_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(Writes, writes_);
          };
          friend void from_json(const Darabonba::Json& j, List& obj) { 
            DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
            DARABONBA_PTR_FROM_JSON(AggKey, aggKey_);
            DARABONBA_PTR_FROM_JSON(AvgAffectRows, avgAffectRows_);
            DARABONBA_PTR_FROM_JSON(AvgCpuTime, avgCpuTime_);
            DARABONBA_PTR_FROM_JSON(AvgFrows, avgFrows_);
            DARABONBA_PTR_FROM_JSON(AvgLockWaitTime, avgLockWaitTime_);
            DARABONBA_PTR_FROM_JSON(AvgLogicalRead, avgLogicalRead_);
            DARABONBA_PTR_FROM_JSON(AvgPhysicalAsyncRead, avgPhysicalAsyncRead_);
            DARABONBA_PTR_FROM_JSON(AvgPhysicalRead, avgPhysicalRead_);
            DARABONBA_PTR_FROM_JSON(AvgPhysicalSyncRead, avgPhysicalSyncRead_);
            DARABONBA_PTR_FROM_JSON(AvgRows, avgRows_);
            DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
            DARABONBA_PTR_FROM_JSON(AvgRowsReturned, avgRowsReturned_);
            DARABONBA_PTR_FROM_JSON(AvgRowsUpdated, avgRowsUpdated_);
            DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
            DARABONBA_PTR_FROM_JSON(AvgScanRows, avgScanRows_);
            DARABONBA_PTR_FROM_JSON(AvgScnt, avgScnt_);
            DARABONBA_PTR_FROM_JSON(AvgWrites, avgWrites_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(CountRate, countRate_);
            DARABONBA_PTR_FROM_JSON(CpuTime, cpuTime_);
            DARABONBA_PTR_FROM_JSON(Database, database_);
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
            DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
            DARABONBA_PTR_FROM_JSON(Frows, frows_);
            DARABONBA_PTR_FROM_JSON(Hash, hash_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(LockWaitTime, lockWaitTime_);
            DARABONBA_PTR_FROM_JSON(LogicalRead, logicalRead_);
            DARABONBA_PTR_FROM_JSON(MaxCpuTime, maxCpuTime_);
            DARABONBA_PTR_FROM_JSON(MaxLogicalRead, maxLogicalRead_);
            DARABONBA_PTR_FROM_JSON(MaxPhysicalRead, maxPhysicalRead_);
            DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
            DARABONBA_PTR_FROM_JSON(MaxRowsReturned, maxRowsReturned_);
            DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
            DARABONBA_PTR_FROM_JSON(MaxWrites, maxWrites_);
            DARABONBA_PTR_FROM_JSON(MinCpuTime, minCpuTime_);
            DARABONBA_PTR_FROM_JSON(MinLogicalRead, minLogicalRead_);
            DARABONBA_PTR_FROM_JSON(MinPhysicalRead, minPhysicalRead_);
            DARABONBA_PTR_FROM_JSON(MinRowsReturned, minRowsReturned_);
            DARABONBA_PTR_FROM_JSON(MinRt, minRt_);
            DARABONBA_PTR_FROM_JSON(MinWrites, minWrites_);
            DARABONBA_PTR_FROM_JSON(OriginAlias, originAlias_);
            DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
            DARABONBA_PTR_FROM_JSON(Params, params_);
            DARABONBA_PTR_FROM_JSON(PhysicalAsyncRead, physicalAsyncRead_);
            DARABONBA_PTR_FROM_JSON(PhysicalRead, physicalRead_);
            DARABONBA_PTR_FROM_JSON(PhysicalSyncRead, physicalSyncRead_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Psql, psql_);
            DARABONBA_PTR_FROM_JSON(Rows, rows_);
            DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
            DARABONBA_PTR_FROM_JSON(RowsReturned, rowsReturned_);
            DARABONBA_PTR_FROM_JSON(Rt, rt_);
            DARABONBA_PTR_FROM_JSON(RtGreaterThanOneSecondCount, rtGreaterThanOneSecondCount_);
            DARABONBA_PTR_FROM_JSON(RtRate, rtRate_);
            DARABONBA_PTR_FROM_JSON(SampleType, sampleType_);
            DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
            DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
            DARABONBA_PTR_FROM_JSON(Sql, sql_);
            DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
            DARABONBA_PTR_FROM_JSON(SqlNew, sqlNew_);
            DARABONBA_PTR_FROM_JSON(SqlTextFeature, sqlTextFeature_);
            DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
            DARABONBA_PTR_FROM_JSON(SumRowsUpdated, sumRowsUpdated_);
            DARABONBA_PTR_FROM_JSON(Tables, tables_);
            DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
            DARABONBA_PTR_FROM_JSON(TimeRate, timeRate_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(TotalAffectRows, totalAffectRows_);
            DARABONBA_PTR_FROM_JSON(TotalRt, totalRt_);
            DARABONBA_PTR_FROM_JSON(TotalScanRows, totalScanRows_);
            DARABONBA_PTR_FROM_JSON(Trend, trend_);
            DARABONBA_PTR_FROM_JSON(UpdateRows, updateRows_);
            DARABONBA_PTR_FROM_JSON(User, user_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(Writes, writes_);
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
          class Trend : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Trend& obj) { 
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_ANY_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Trend& obj) { 
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_ANY_FROM_JSON(Value, value_);
            };
            Trend() = default ;
            Trend(const Trend &) = default ;
            Trend(Trend &&) = default ;
            Trend(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Trend() = default ;
            Trend& operator=(const Trend &) = default ;
            Trend& operator=(Trend &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
            inline Trend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline             const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
            Darabonba::Json & getValue() { DARABONBA_GET(value_) };
            inline Trend& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
            inline Trend& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


          protected:
            // The timestamp of the trend data point. This value is a UNIX timestamp. Unit: milliseconds.
            shared_ptr<int64_t> timestamp_ {};
            // The number of SQL executions within the time slice.
            Darabonba::Json value_ {};
          };

          virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->aggKey_ == nullptr && this->avgAffectRows_ == nullptr && this->avgCpuTime_ == nullptr && this->avgFrows_ == nullptr && this->avgLockWaitTime_ == nullptr
        && this->avgLogicalRead_ == nullptr && this->avgPhysicalAsyncRead_ == nullptr && this->avgPhysicalRead_ == nullptr && this->avgPhysicalSyncRead_ == nullptr && this->avgRows_ == nullptr
        && this->avgRowsExamined_ == nullptr && this->avgRowsReturned_ == nullptr && this->avgRowsUpdated_ == nullptr && this->avgRt_ == nullptr && this->avgScanRows_ == nullptr
        && this->avgScnt_ == nullptr && this->avgWrites_ == nullptr && this->count_ == nullptr && this->countRate_ == nullptr && this->cpuTime_ == nullptr
        && this->database_ == nullptr && this->errorCode_ == nullptr && this->errorCount_ == nullptr && this->firstTime_ == nullptr && this->frows_ == nullptr
        && this->hash_ == nullptr && this->ip_ == nullptr && this->lockWaitTime_ == nullptr && this->logicalRead_ == nullptr && this->maxCpuTime_ == nullptr
        && this->maxLogicalRead_ == nullptr && this->maxPhysicalRead_ == nullptr && this->maxRowsExamined_ == nullptr && this->maxRowsReturned_ == nullptr && this->maxRt_ == nullptr
        && this->maxWrites_ == nullptr && this->minCpuTime_ == nullptr && this->minLogicalRead_ == nullptr && this->minPhysicalRead_ == nullptr && this->minRowsReturned_ == nullptr
        && this->minRt_ == nullptr && this->minWrites_ == nullptr && this->originAlias_ == nullptr && this->originHost_ == nullptr && this->params_ == nullptr
        && this->physicalAsyncRead_ == nullptr && this->physicalRead_ == nullptr && this->physicalSyncRead_ == nullptr && this->port_ == nullptr && this->psql_ == nullptr
        && this->rows_ == nullptr && this->rowsExamined_ == nullptr && this->rowsReturned_ == nullptr && this->rt_ == nullptr && this->rtGreaterThanOneSecondCount_ == nullptr
        && this->rtRate_ == nullptr && this->sampleType_ == nullptr && this->scanRows_ == nullptr && this->scnt_ == nullptr && this->sql_ == nullptr
        && this->sqlId_ == nullptr && this->sqlNew_ == nullptr && this->sqlTextFeature_ == nullptr && this->sqlType_ == nullptr && this->sumRowsUpdated_ == nullptr
        && this->tables_ == nullptr && this->threadId_ == nullptr && this->timeRate_ == nullptr && this->timestamp_ == nullptr && this->totalAffectRows_ == nullptr
        && this->totalRt_ == nullptr && this->totalScanRows_ == nullptr && this->trend_ == nullptr && this->updateRows_ == nullptr && this->user_ == nullptr
        && this->version_ == nullptr && this->vpcId_ == nullptr && this->writes_ == nullptr; };
          // affectRows Field Functions 
          bool hasAffectRows() const { return this->affectRows_ != nullptr;};
          void deleteAffectRows() { this->affectRows_ = nullptr;};
          inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
          inline List& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


          // aggKey Field Functions 
          bool hasAggKey() const { return this->aggKey_ != nullptr;};
          void deleteAggKey() { this->aggKey_ = nullptr;};
          inline string getAggKey() const { DARABONBA_PTR_GET_DEFAULT(aggKey_, "") };
          inline List& setAggKey(string aggKey) { DARABONBA_PTR_SET_VALUE(aggKey_, aggKey) };


          // avgAffectRows Field Functions 
          bool hasAvgAffectRows() const { return this->avgAffectRows_ != nullptr;};
          void deleteAvgAffectRows() { this->avgAffectRows_ = nullptr;};
          inline double getAvgAffectRows() const { DARABONBA_PTR_GET_DEFAULT(avgAffectRows_, 0.0) };
          inline List& setAvgAffectRows(double avgAffectRows) { DARABONBA_PTR_SET_VALUE(avgAffectRows_, avgAffectRows) };


          // avgCpuTime Field Functions 
          bool hasAvgCpuTime() const { return this->avgCpuTime_ != nullptr;};
          void deleteAvgCpuTime() { this->avgCpuTime_ = nullptr;};
          inline double getAvgCpuTime() const { DARABONBA_PTR_GET_DEFAULT(avgCpuTime_, 0.0) };
          inline List& setAvgCpuTime(double avgCpuTime) { DARABONBA_PTR_SET_VALUE(avgCpuTime_, avgCpuTime) };


          // avgFrows Field Functions 
          bool hasAvgFrows() const { return this->avgFrows_ != nullptr;};
          void deleteAvgFrows() { this->avgFrows_ = nullptr;};
          inline double getAvgFrows() const { DARABONBA_PTR_GET_DEFAULT(avgFrows_, 0.0) };
          inline List& setAvgFrows(double avgFrows) { DARABONBA_PTR_SET_VALUE(avgFrows_, avgFrows) };


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
          inline double getAvgPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalAsyncRead_, 0.0) };
          inline List& setAvgPhysicalAsyncRead(double avgPhysicalAsyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalAsyncRead_, avgPhysicalAsyncRead) };


          // avgPhysicalRead Field Functions 
          bool hasAvgPhysicalRead() const { return this->avgPhysicalRead_ != nullptr;};
          void deleteAvgPhysicalRead() { this->avgPhysicalRead_ = nullptr;};
          inline double getAvgPhysicalRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalRead_, 0.0) };
          inline List& setAvgPhysicalRead(double avgPhysicalRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalRead_, avgPhysicalRead) };


          // avgPhysicalSyncRead Field Functions 
          bool hasAvgPhysicalSyncRead() const { return this->avgPhysicalSyncRead_ != nullptr;};
          void deleteAvgPhysicalSyncRead() { this->avgPhysicalSyncRead_ = nullptr;};
          inline double getAvgPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalSyncRead_, 0.0) };
          inline List& setAvgPhysicalSyncRead(double avgPhysicalSyncRead) { DARABONBA_PTR_SET_VALUE(avgPhysicalSyncRead_, avgPhysicalSyncRead) };


          // avgRows Field Functions 
          bool hasAvgRows() const { return this->avgRows_ != nullptr;};
          void deleteAvgRows() { this->avgRows_ = nullptr;};
          inline double getAvgRows() const { DARABONBA_PTR_GET_DEFAULT(avgRows_, 0.0) };
          inline List& setAvgRows(double avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };


          // avgRowsExamined Field Functions 
          bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
          void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
          inline double getAvgRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(avgRowsExamined_, 0.0) };
          inline List& setAvgRowsExamined(double avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };


          // avgRowsReturned Field Functions 
          bool hasAvgRowsReturned() const { return this->avgRowsReturned_ != nullptr;};
          void deleteAvgRowsReturned() { this->avgRowsReturned_ = nullptr;};
          inline double getAvgRowsReturned() const { DARABONBA_PTR_GET_DEFAULT(avgRowsReturned_, 0.0) };
          inline List& setAvgRowsReturned(double avgRowsReturned) { DARABONBA_PTR_SET_VALUE(avgRowsReturned_, avgRowsReturned) };


          // avgRowsUpdated Field Functions 
          bool hasAvgRowsUpdated() const { return this->avgRowsUpdated_ != nullptr;};
          void deleteAvgRowsUpdated() { this->avgRowsUpdated_ = nullptr;};
          inline double getAvgRowsUpdated() const { DARABONBA_PTR_GET_DEFAULT(avgRowsUpdated_, 0.0) };
          inline List& setAvgRowsUpdated(double avgRowsUpdated) { DARABONBA_PTR_SET_VALUE(avgRowsUpdated_, avgRowsUpdated) };


          // avgRt Field Functions 
          bool hasAvgRt() const { return this->avgRt_ != nullptr;};
          void deleteAvgRt() { this->avgRt_ = nullptr;};
          inline double getAvgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
          inline List& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


          // avgScanRows Field Functions 
          bool hasAvgScanRows() const { return this->avgScanRows_ != nullptr;};
          void deleteAvgScanRows() { this->avgScanRows_ = nullptr;};
          inline double getAvgScanRows() const { DARABONBA_PTR_GET_DEFAULT(avgScanRows_, 0.0) };
          inline List& setAvgScanRows(double avgScanRows) { DARABONBA_PTR_SET_VALUE(avgScanRows_, avgScanRows) };


          // avgScnt Field Functions 
          bool hasAvgScnt() const { return this->avgScnt_ != nullptr;};
          void deleteAvgScnt() { this->avgScnt_ = nullptr;};
          inline double getAvgScnt() const { DARABONBA_PTR_GET_DEFAULT(avgScnt_, 0.0) };
          inline List& setAvgScnt(double avgScnt) { DARABONBA_PTR_SET_VALUE(avgScnt_, avgScnt) };


          // avgWrites Field Functions 
          bool hasAvgWrites() const { return this->avgWrites_ != nullptr;};
          void deleteAvgWrites() { this->avgWrites_ = nullptr;};
          inline double getAvgWrites() const { DARABONBA_PTR_GET_DEFAULT(avgWrites_, 0.0) };
          inline List& setAvgWrites(double avgWrites) { DARABONBA_PTR_SET_VALUE(avgWrites_, avgWrites) };


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


          // cpuTime Field Functions 
          bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
          void deleteCpuTime() { this->cpuTime_ = nullptr;};
          inline int64_t getCpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
          inline List& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


          // database Field Functions 
          bool hasDatabase() const { return this->database_ != nullptr;};
          void deleteDatabase() { this->database_ = nullptr;};
          inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
          inline List& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline List& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorCount Field Functions 
          bool hasErrorCount() const { return this->errorCount_ != nullptr;};
          void deleteErrorCount() { this->errorCount_ = nullptr;};
          inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
          inline List& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


          // firstTime Field Functions 
          bool hasFirstTime() const { return this->firstTime_ != nullptr;};
          void deleteFirstTime() { this->firstTime_ = nullptr;};
          inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
          inline List& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


          // frows Field Functions 
          bool hasFrows() const { return this->frows_ != nullptr;};
          void deleteFrows() { this->frows_ = nullptr;};
          inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
          inline List& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


          // hash Field Functions 
          bool hasHash() const { return this->hash_ != nullptr;};
          void deleteHash() { this->hash_ = nullptr;};
          inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
          inline List& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline List& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // lockWaitTime Field Functions 
          bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
          void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
          inline double getLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0.0) };
          inline List& setLockWaitTime(double lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


          // logicalRead Field Functions 
          bool hasLogicalRead() const { return this->logicalRead_ != nullptr;};
          void deleteLogicalRead() { this->logicalRead_ = nullptr;};
          inline double getLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(logicalRead_, 0.0) };
          inline List& setLogicalRead(double logicalRead) { DARABONBA_PTR_SET_VALUE(logicalRead_, logicalRead) };


          // maxCpuTime Field Functions 
          bool hasMaxCpuTime() const { return this->maxCpuTime_ != nullptr;};
          void deleteMaxCpuTime() { this->maxCpuTime_ = nullptr;};
          inline int64_t getMaxCpuTime() const { DARABONBA_PTR_GET_DEFAULT(maxCpuTime_, 0L) };
          inline List& setMaxCpuTime(int64_t maxCpuTime) { DARABONBA_PTR_SET_VALUE(maxCpuTime_, maxCpuTime) };


          // maxLogicalRead Field Functions 
          bool hasMaxLogicalRead() const { return this->maxLogicalRead_ != nullptr;};
          void deleteMaxLogicalRead() { this->maxLogicalRead_ = nullptr;};
          inline int64_t getMaxLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(maxLogicalRead_, 0L) };
          inline List& setMaxLogicalRead(int64_t maxLogicalRead) { DARABONBA_PTR_SET_VALUE(maxLogicalRead_, maxLogicalRead) };


          // maxPhysicalRead Field Functions 
          bool hasMaxPhysicalRead() const { return this->maxPhysicalRead_ != nullptr;};
          void deleteMaxPhysicalRead() { this->maxPhysicalRead_ = nullptr;};
          inline int64_t getMaxPhysicalRead() const { DARABONBA_PTR_GET_DEFAULT(maxPhysicalRead_, 0L) };
          inline List& setMaxPhysicalRead(int64_t maxPhysicalRead) { DARABONBA_PTR_SET_VALUE(maxPhysicalRead_, maxPhysicalRead) };


          // maxRowsExamined Field Functions 
          bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
          void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
          inline int64_t getMaxRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(maxRowsExamined_, 0L) };
          inline List& setMaxRowsExamined(int64_t maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };


          // maxRowsReturned Field Functions 
          bool hasMaxRowsReturned() const { return this->maxRowsReturned_ != nullptr;};
          void deleteMaxRowsReturned() { this->maxRowsReturned_ = nullptr;};
          inline int64_t getMaxRowsReturned() const { DARABONBA_PTR_GET_DEFAULT(maxRowsReturned_, 0L) };
          inline List& setMaxRowsReturned(int64_t maxRowsReturned) { DARABONBA_PTR_SET_VALUE(maxRowsReturned_, maxRowsReturned) };


          // maxRt Field Functions 
          bool hasMaxRt() const { return this->maxRt_ != nullptr;};
          void deleteMaxRt() { this->maxRt_ = nullptr;};
          inline double getMaxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, 0.0) };
          inline List& setMaxRt(double maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


          // maxWrites Field Functions 
          bool hasMaxWrites() const { return this->maxWrites_ != nullptr;};
          void deleteMaxWrites() { this->maxWrites_ = nullptr;};
          inline int64_t getMaxWrites() const { DARABONBA_PTR_GET_DEFAULT(maxWrites_, 0L) };
          inline List& setMaxWrites(int64_t maxWrites) { DARABONBA_PTR_SET_VALUE(maxWrites_, maxWrites) };


          // minCpuTime Field Functions 
          bool hasMinCpuTime() const { return this->minCpuTime_ != nullptr;};
          void deleteMinCpuTime() { this->minCpuTime_ = nullptr;};
          inline int64_t getMinCpuTime() const { DARABONBA_PTR_GET_DEFAULT(minCpuTime_, 0L) };
          inline List& setMinCpuTime(int64_t minCpuTime) { DARABONBA_PTR_SET_VALUE(minCpuTime_, minCpuTime) };


          // minLogicalRead Field Functions 
          bool hasMinLogicalRead() const { return this->minLogicalRead_ != nullptr;};
          void deleteMinLogicalRead() { this->minLogicalRead_ = nullptr;};
          inline int64_t getMinLogicalRead() const { DARABONBA_PTR_GET_DEFAULT(minLogicalRead_, 0L) };
          inline List& setMinLogicalRead(int64_t minLogicalRead) { DARABONBA_PTR_SET_VALUE(minLogicalRead_, minLogicalRead) };


          // minPhysicalRead Field Functions 
          bool hasMinPhysicalRead() const { return this->minPhysicalRead_ != nullptr;};
          void deleteMinPhysicalRead() { this->minPhysicalRead_ = nullptr;};
          inline int64_t getMinPhysicalRead() const { DARABONBA_PTR_GET_DEFAULT(minPhysicalRead_, 0L) };
          inline List& setMinPhysicalRead(int64_t minPhysicalRead) { DARABONBA_PTR_SET_VALUE(minPhysicalRead_, minPhysicalRead) };


          // minRowsReturned Field Functions 
          bool hasMinRowsReturned() const { return this->minRowsReturned_ != nullptr;};
          void deleteMinRowsReturned() { this->minRowsReturned_ = nullptr;};
          inline int64_t getMinRowsReturned() const { DARABONBA_PTR_GET_DEFAULT(minRowsReturned_, 0L) };
          inline List& setMinRowsReturned(int64_t minRowsReturned) { DARABONBA_PTR_SET_VALUE(minRowsReturned_, minRowsReturned) };


          // minRt Field Functions 
          bool hasMinRt() const { return this->minRt_ != nullptr;};
          void deleteMinRt() { this->minRt_ = nullptr;};
          inline double getMinRt() const { DARABONBA_PTR_GET_DEFAULT(minRt_, 0.0) };
          inline List& setMinRt(double minRt) { DARABONBA_PTR_SET_VALUE(minRt_, minRt) };


          // minWrites Field Functions 
          bool hasMinWrites() const { return this->minWrites_ != nullptr;};
          void deleteMinWrites() { this->minWrites_ = nullptr;};
          inline int64_t getMinWrites() const { DARABONBA_PTR_GET_DEFAULT(minWrites_, 0L) };
          inline List& setMinWrites(int64_t minWrites) { DARABONBA_PTR_SET_VALUE(minWrites_, minWrites) };


          // originAlias Field Functions 
          bool hasOriginAlias() const { return this->originAlias_ != nullptr;};
          void deleteOriginAlias() { this->originAlias_ = nullptr;};
          inline string getOriginAlias() const { DARABONBA_PTR_GET_DEFAULT(originAlias_, "") };
          inline List& setOriginAlias(string originAlias) { DARABONBA_PTR_SET_VALUE(originAlias_, originAlias) };


          // originHost Field Functions 
          bool hasOriginHost() const { return this->originHost_ != nullptr;};
          void deleteOriginHost() { this->originHost_ = nullptr;};
          inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
          inline List& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


          // params Field Functions 
          bool hasParams() const { return this->params_ != nullptr;};
          void deleteParams() { this->params_ = nullptr;};
          inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
          inline List& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


          // physicalAsyncRead Field Functions 
          bool hasPhysicalAsyncRead() const { return this->physicalAsyncRead_ != nullptr;};
          void deletePhysicalAsyncRead() { this->physicalAsyncRead_ = nullptr;};
          inline double getPhysicalAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalAsyncRead_, 0.0) };
          inline List& setPhysicalAsyncRead(double physicalAsyncRead) { DARABONBA_PTR_SET_VALUE(physicalAsyncRead_, physicalAsyncRead) };


          // physicalRead Field Functions 
          bool hasPhysicalRead() const { return this->physicalRead_ != nullptr;};
          void deletePhysicalRead() { this->physicalRead_ = nullptr;};
          inline int64_t getPhysicalRead() const { DARABONBA_PTR_GET_DEFAULT(physicalRead_, 0L) };
          inline List& setPhysicalRead(int64_t physicalRead) { DARABONBA_PTR_SET_VALUE(physicalRead_, physicalRead) };


          // physicalSyncRead Field Functions 
          bool hasPhysicalSyncRead() const { return this->physicalSyncRead_ != nullptr;};
          void deletePhysicalSyncRead() { this->physicalSyncRead_ = nullptr;};
          inline double getPhysicalSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicalSyncRead_, 0.0) };
          inline List& setPhysicalSyncRead(double physicalSyncRead) { DARABONBA_PTR_SET_VALUE(physicalSyncRead_, physicalSyncRead) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline List& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // psql Field Functions 
          bool hasPsql() const { return this->psql_ != nullptr;};
          void deletePsql() { this->psql_ = nullptr;};
          inline string getPsql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
          inline List& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


          // rows Field Functions 
          bool hasRows() const { return this->rows_ != nullptr;};
          void deleteRows() { this->rows_ = nullptr;};
          inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
          inline List& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


          // rowsExamined Field Functions 
          bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
          void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
          inline int64_t getRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
          inline List& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


          // rowsReturned Field Functions 
          bool hasRowsReturned() const { return this->rowsReturned_ != nullptr;};
          void deleteRowsReturned() { this->rowsReturned_ = nullptr;};
          inline int64_t getRowsReturned() const { DARABONBA_PTR_GET_DEFAULT(rowsReturned_, 0L) };
          inline List& setRowsReturned(int64_t rowsReturned) { DARABONBA_PTR_SET_VALUE(rowsReturned_, rowsReturned) };


          // rt Field Functions 
          bool hasRt() const { return this->rt_ != nullptr;};
          void deleteRt() { this->rt_ = nullptr;};
          inline double getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0.0) };
          inline List& setRt(double rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


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


          // sampleType Field Functions 
          bool hasSampleType() const { return this->sampleType_ != nullptr;};
          void deleteSampleType() { this->sampleType_ = nullptr;};
          inline string getSampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
          inline List& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


          // scanRows Field Functions 
          bool hasScanRows() const { return this->scanRows_ != nullptr;};
          void deleteScanRows() { this->scanRows_ = nullptr;};
          inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
          inline List& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


          // scnt Field Functions 
          bool hasScnt() const { return this->scnt_ != nullptr;};
          void deleteScnt() { this->scnt_ = nullptr;};
          inline int64_t getScnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
          inline List& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


          // sql Field Functions 
          bool hasSql() const { return this->sql_ != nullptr;};
          void deleteSql() { this->sql_ = nullptr;};
          inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
          inline List& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


          // sqlId Field Functions 
          bool hasSqlId() const { return this->sqlId_ != nullptr;};
          void deleteSqlId() { this->sqlId_ = nullptr;};
          inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
          inline List& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


          // sqlNew Field Functions 
          bool hasSqlNew() const { return this->sqlNew_ != nullptr;};
          void deleteSqlNew() { this->sqlNew_ = nullptr;};
          inline string getSqlNew() const { DARABONBA_PTR_GET_DEFAULT(sqlNew_, "") };
          inline List& setSqlNew(string sqlNew) { DARABONBA_PTR_SET_VALUE(sqlNew_, sqlNew) };


          // sqlTextFeature Field Functions 
          bool hasSqlTextFeature() const { return this->sqlTextFeature_ != nullptr;};
          void deleteSqlTextFeature() { this->sqlTextFeature_ = nullptr;};
          inline string getSqlTextFeature() const { DARABONBA_PTR_GET_DEFAULT(sqlTextFeature_, "") };
          inline List& setSqlTextFeature(string sqlTextFeature) { DARABONBA_PTR_SET_VALUE(sqlTextFeature_, sqlTextFeature) };


          // sqlType Field Functions 
          bool hasSqlType() const { return this->sqlType_ != nullptr;};
          void deleteSqlType() { this->sqlType_ = nullptr;};
          inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
          inline List& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


          // sumRowsUpdated Field Functions 
          bool hasSumRowsUpdated() const { return this->sumRowsUpdated_ != nullptr;};
          void deleteSumRowsUpdated() { this->sumRowsUpdated_ = nullptr;};
          inline double getSumRowsUpdated() const { DARABONBA_PTR_GET_DEFAULT(sumRowsUpdated_, 0.0) };
          inline List& setSumRowsUpdated(double sumRowsUpdated) { DARABONBA_PTR_SET_VALUE(sumRowsUpdated_, sumRowsUpdated) };


          // tables Field Functions 
          bool hasTables() const { return this->tables_ != nullptr;};
          void deleteTables() { this->tables_ = nullptr;};
          inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
          inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
          inline List& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
          inline List& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


          // threadId Field Functions 
          bool hasThreadId() const { return this->threadId_ != nullptr;};
          void deleteThreadId() { this->threadId_ = nullptr;};
          inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
          inline List& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


          // timeRate Field Functions 
          bool hasTimeRate() const { return this->timeRate_ != nullptr;};
          void deleteTimeRate() { this->timeRate_ = nullptr;};
          inline double getTimeRate() const { DARABONBA_PTR_GET_DEFAULT(timeRate_, 0.0) };
          inline List& setTimeRate(double timeRate) { DARABONBA_PTR_SET_VALUE(timeRate_, timeRate) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline List& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // totalAffectRows Field Functions 
          bool hasTotalAffectRows() const { return this->totalAffectRows_ != nullptr;};
          void deleteTotalAffectRows() { this->totalAffectRows_ = nullptr;};
          inline int64_t getTotalAffectRows() const { DARABONBA_PTR_GET_DEFAULT(totalAffectRows_, 0L) };
          inline List& setTotalAffectRows(int64_t totalAffectRows) { DARABONBA_PTR_SET_VALUE(totalAffectRows_, totalAffectRows) };


          // totalRt Field Functions 
          bool hasTotalRt() const { return this->totalRt_ != nullptr;};
          void deleteTotalRt() { this->totalRt_ = nullptr;};
          inline int64_t getTotalRt() const { DARABONBA_PTR_GET_DEFAULT(totalRt_, 0L) };
          inline List& setTotalRt(int64_t totalRt) { DARABONBA_PTR_SET_VALUE(totalRt_, totalRt) };


          // totalScanRows Field Functions 
          bool hasTotalScanRows() const { return this->totalScanRows_ != nullptr;};
          void deleteTotalScanRows() { this->totalScanRows_ = nullptr;};
          inline int64_t getTotalScanRows() const { DARABONBA_PTR_GET_DEFAULT(totalScanRows_, 0L) };
          inline List& setTotalScanRows(int64_t totalScanRows) { DARABONBA_PTR_SET_VALUE(totalScanRows_, totalScanRows) };


          // trend Field Functions 
          bool hasTrend() const { return this->trend_ != nullptr;};
          void deleteTrend() { this->trend_ = nullptr;};
          inline const vector<List::Trend> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<List::Trend>) };
          inline vector<List::Trend> getTrend() { DARABONBA_PTR_GET(trend_, vector<List::Trend>) };
          inline List& setTrend(const vector<List::Trend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
          inline List& setTrend(vector<List::Trend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


          // updateRows Field Functions 
          bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
          void deleteUpdateRows() { this->updateRows_ = nullptr;};
          inline int64_t getUpdateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
          inline List& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


          // user Field Functions 
          bool hasUser() const { return this->user_ != nullptr;};
          void deleteUser() { this->user_ = nullptr;};
          inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
          inline List& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
          inline List& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline List& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // writes Field Functions 
          bool hasWrites() const { return this->writes_ != nullptr;};
          void deleteWrites() { this->writes_ = nullptr;};
          inline int64_t getWrites() const { DARABONBA_PTR_GET_DEFAULT(writes_, 0L) };
          inline List& setWrites(int64_t writes) { DARABONBA_PTR_SET_VALUE(writes_, writes) };


        protected:
          // The number of affected rows for a single SQL statement. For **SELECT** statements, this indicates the number of scanned rows. For **DML** statements, this indicates the number of affected rows.
          // 
          // > Returned only for Lindorm instances.
          shared_ptr<int64_t> affectRows_ {};
          // The value of the aggregation dimension for this statistical entry, which varies based on the **Type** request parameter. Valid values:
          // 
          // - When aggregated by SQL template: the SQL template ID, which is the same as **SqlId**.
          // - When **Type** is set to **FullRequestOrigin**: the access source address.
          // - When **Type** is set to **FullRequestUser**: the database username.
          shared_ptr<string> aggKey_ {};
          // The average number of affected rows.
          // 
          // > Returned only for Lindorm instances. The value is null for other database engines.
          shared_ptr<double> avgAffectRows_ {};
          // The average CPU time consumed by SQL execution, in microseconds.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<double> avgCpuTime_ {};
          // The average number of rows fetched by the PolarDB-X compute node from data nodes.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other database engines.
          shared_ptr<double> avgFrows_ {};
          // The average lock wait time per execution, in milliseconds.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> avgLockWaitTime_ {};
          // The average number of logical reads per execution.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> avgLogicalRead_ {};
          // The average number of physical asynchronous reads per execution.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> avgPhysicalAsyncRead_ {};
          // The average number of physical reads.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<double> avgPhysicalRead_ {};
          // The average number of physical synchronous reads per execution.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> avgPhysicalSyncRead_ {};
          // The average number of updated rows and returned rows for the PolarDB-X compute node.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other database engines.
          shared_ptr<double> avgRows_ {};
          // The average number of rows scanned per execution.
          shared_ptr<double> avgRowsExamined_ {};
          // The average number of rows returned per execution.
          shared_ptr<double> avgRowsReturned_ {};
          // The average number of rows updated per execution.
          shared_ptr<double> avgRowsUpdated_ {};
          // The average execution time per execution, in milliseconds.
          shared_ptr<double> avgRt_ {};
          // The average number of scanned rows.
          // 
          // > This field is not returned by this operation. Use **AvgRowsExamined** for the average number of scanned rows.
          shared_ptr<double> avgScanRows_ {};
          // The average number of requests sent by the PolarDB-X compute node to data nodes.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other database engines.
          shared_ptr<double> avgScnt_ {};
          // The average number of logical writes.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<double> avgWrites_ {};
          // The total number of executions of the SQL template within the statistical interval.
          shared_ptr<int64_t> count_ {};
          // The ratio of the number of executions of this statistical entry to the total number of executions of all SQL statements on the instance. The value ranges from 0 to 1.
          shared_ptr<double> countRate_ {};
          // The total CPU time consumed by SQL execution, in microseconds.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> cpuTime_ {};
          // The name of the database where the SQL statement is executed.
          shared_ptr<string> database_ {};
          // The error code returned by SQL execution.
          // 
          // > The error code is a detail of a single SQL statement. This operation returns template-level aggregated statistics and does not return this field. Use **ErrorCount** for error information.
          shared_ptr<string> errorCode_ {};
          // The number of execution errors for the SQL template within the statistical interval.
          shared_ptr<int64_t> errorCount_ {};
          // The time when the SQL template first appeared.
          // 
          // > This field is not returned by this operation.
          shared_ptr<int64_t> firstTime_ {};
          // The total number of rows fetched by the PolarDB-X compute node from data nodes.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other database engines.
          shared_ptr<int64_t> frows_ {};
          // The hash value of the SQL template, returned together with the SQL template.
          // 
          // > This value is generated by the PolarDB-X compute node kernel. The value is empty for non-PolarDB-X compute node instances.
          shared_ptr<string> hash_ {};
          // The endpoint of the instance to which the statistical data belongs.
          // 
          // > Whether this field is returned depends on the aggregated storage link of the instance. The value is null for some links.
          shared_ptr<string> ip_ {};
          // The total lock wait time, in milliseconds.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> lockWaitTime_ {};
          // The total number of logical reads.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> logicalRead_ {};
          // The maximum CPU time in a single execution, in microseconds.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> maxCpuTime_ {};
          // The maximum number of logical reads in a single execution.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<int64_t> maxLogicalRead_ {};
          // The maximum number of physical reads in a single execution.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> maxPhysicalRead_ {};
          // The maximum number of rows scanned in a single execution.
          // 
          // > This field is not returned by this operation. Use **RowsExamined** and **AvgRowsExamined** for scanned row counts.
          shared_ptr<int64_t> maxRowsExamined_ {};
          // The maximum number of rows returned in a single execution.
          shared_ptr<int64_t> maxRowsReturned_ {};
          // The maximum execution time in a single execution, in milliseconds.
          shared_ptr<double> maxRt_ {};
          // The maximum number of logical writes in a single execution.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> maxWrites_ {};
          // The minimum CPU time in a single execution, in microseconds.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> minCpuTime_ {};
          // The minimum number of logical reads in a single execution.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<int64_t> minLogicalRead_ {};
          // The minimum number of physical reads in a single execution.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> minPhysicalRead_ {};
          // The minimum number of rows returned in a single execution.
          shared_ptr<int64_t> minRowsReturned_ {};
          // The minimum execution time in a single execution, in milliseconds.
          shared_ptr<double> minRt_ {};
          // The minimum number of logical writes in a single execution.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> minWrites_ {};
          // The display alias configured for the access source address.
          // 
          // > Returned only when aggregated by access source (when **Type** is set to **FullRequestOrigin**). The value is null in other scenarios.
          shared_ptr<string> originAlias_ {};
          // The source address of the client that initiated the SQL statement.
          // 
          // > When **Type** is set to **FullRequestOrigin**, this field serves as the aggregation dimension for the statistical entry.
          shared_ptr<string> originHost_ {};
          // The parameter content of the SQL sample.
          // 
          // > This operation returns template-level aggregated statistics and does not return this field.
          shared_ptr<string> params_ {};
          // The total number of physical asynchronous reads.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> physicalAsyncRead_ {};
          // The total number of physical reads.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other database engines.
          shared_ptr<int64_t> physicalRead_ {};
          // The total number of physical synchronous reads.
          // 
          // > Data is available only when **Version** is set to **1**.
          shared_ptr<double> physicalSyncRead_ {};
          // The port of the instance to which the statistical data belongs.
          // 
          // > Whether this field is returned depends on the aggregated storage link of the instance. The value is null for some links.
          shared_ptr<int32_t> port_ {};
          // The parameterized SQL template text, which is the statement with constants in the SQL replaced by placeholders.
          shared_ptr<string> psql_ {};
          // The total number of updated rows and returned rows for the PolarDB-X compute node.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other engines.
          shared_ptr<int64_t> rows_ {};
          // The total number of rows examined by the SQL template within the statistical interval.
          shared_ptr<int64_t> rowsExamined_ {};
          // The total number of rows returned by the SQL template within the statistical interval.
          shared_ptr<int64_t> rowsReturned_ {};
          // The total execution duration of the SQL template within the statistical interval. Unit: milliseconds.
          // 
          // > For PolarDB-X compute nodes (where **Role** is **polarx_cn**) with kernel versions earlier than 5.4.13, this value is converted from microseconds to milliseconds.
          shared_ptr<double> rt_ {};
          // The number of times the execution duration exceeds 1 second.
          // 
          // > Whether this field is returned depends on the aggregation storage link of the instance. The value is null for certain links.
          shared_ptr<int64_t> rtGreaterThanOneSecondCount_ {};
          // The ratio of the total execution duration of this entry to the total execution duration of all SQL statements on the instance. Valid values: 0 to 1.
          shared_ptr<double> rtRate_ {};
          // The type identifier of the sample data.
          // 
          // > This operation returns aggregated statistics and does not return this field.
          shared_ptr<string> sampleType_ {};
          // The number of rows scanned by a single SQL statement.
          // 
          // > This operation returns template-level aggregated statistics and does not return this field. Use the aggregated metrics **RowsExamined** and **AvgRowsExamined** instead.
          shared_ptr<int64_t> scanRows_ {};
          // The total number of requests sent from the PolarDB-X compute node to data nodes.
          // 
          // > This metric is exclusive to PolarDB-X compute nodes. The value is null or 0 for other engines.
          shared_ptr<int64_t> scnt_ {};
          // The original SQL text.
          // 
          // > The statistical results return the SQL template (**Psql**) and do not return this field.
          shared_ptr<string> sql_ {};
          // The SQL template ID that uniquely identifies a type of parameterized SQL statement. Multiple executions under the same template are aggregated into a single statistical entry. You can use this ID to correlate the same type of SQL across multi-dimensional queries.
          shared_ptr<string> sqlId_ {};
          // The SQL text with parameter values uniformly processed, used in sample data scenarios.
          // 
          // > This operation does not return this field.
          shared_ptr<string> sqlNew_ {};
          // The SQL text feature value, used in SQL analysis scenarios.
          // 
          // > This operation does not return this field.
          shared_ptr<string> sqlTextFeature_ {};
          // The SQL type. Valid values:
          // 
          // - **select**
          // - **insert**
          // - **update**
          // - **delete**
          // - **other**
          shared_ptr<string> sqlType_ {};
          // The total number of rows updated by the SQL template within the statistical interval.
          shared_ptr<double> sumRowsUpdated_ {};
          // The list of table names involved in the SQL statement.
          shared_ptr<vector<string>> tables_ {};
          // The database thread ID that executed the SQL statement.
          // 
          // > The thread ID is a detail of a single SQL statement. This operation returns template-level aggregated statistics and does not return this field.
          shared_ptr<string> threadId_ {};
          // The execution duration ratio.
          // 
          // > This operation returns the execution duration ratio through **RtRate** and does not return this field.
          shared_ptr<double> timeRate_ {};
          // The data timestamp. This value is a UNIX timestamp. Unit: milliseconds.
          // 
          // > The statistical results are aggregated at the SQL template level and do not return this field.
          shared_ptr<int64_t> timestamp_ {};
          // The total number of affected rows.
          // 
          // > This field is returned only for Lindorm instances. The value is null for other engines.
          shared_ptr<int64_t> totalAffectRows_ {};
          // The total SQL execution duration.
          // 
          // > This operation does not return this field. Use **Rt** for the total execution duration.
          shared_ptr<int64_t> totalRt_ {};
          // The total number of rows scanned.
          // 
          // > This operation does not return this field. Use **RowsExamined** for the total number of rows scanned.
          shared_ptr<int64_t> totalScanRows_ {};
          // The execution count trend sequence of the SQL template, divided into time slices within the query time window.
          // 
          // > This field is returned only when the request parameter **DoFillTrend** is set to **true** and the trend padding capability is enabled for the instance. The time slice interval is automatically determined by the query span. Time slices with no data may be padded with zeros.
          shared_ptr<vector<List::Trend>> trend_ {};
          // The number of rows updated by a single SQL statement.
          // 
          // > This operation returns template-level aggregated statistics and does not return this field. Use the aggregated metrics **SumRowsUpdated** and **AvgRowsUpdated** instead.
          shared_ptr<int64_t> updateRows_ {};
          // The database username that executed the SQL statement.
          // 
          // > When **Type** is set to **FullRequestUser**, this field serves as the aggregation dimension for the statistical entry.
          shared_ptr<string> user_ {};
          // The SQL Explorer data collection link version. The value **1** is returned when the instance collects logical read or lock wait data. Otherwise, the value **0** is returned. Valid values:
          // 
          // - **0**: V0 basic collection link.
          // - **1**: V1 collection link, which additionally collects four metrics (**LockWaitTime**, **LogicalRead**, **PhysicalSyncRead**, and **PhysicalAsyncRead**) on top of V0.
          // 
          // > When the value is **0**, the extended metrics contain no data.
          shared_ptr<int32_t> version_ {};
          // The VPC ID of the instance to which the statistical data belongs.
          // 
          // > Whether this field is returned depends on the aggregation storage link of the instance. The value is null for certain links.
          shared_ptr<string> vpcId_ {};
          // The total number of logical writes.
          // 
          // > This metric is exclusive to SQL Server instances. The value is null for other engines.
          shared_ptr<int64_t> writes_ {};
        };

        virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline         const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
        Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
        inline DataItem& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
        inline DataItem& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


        // list Field Functions 
        bool hasList() const { return this->list_ != nullptr;};
        void deleteList() { this->list_ = nullptr;};
        inline const vector<DataItem::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DataItem::List>) };
        inline vector<DataItem::List> getList() { DARABONBA_PTR_GET(list_, vector<DataItem::List>) };
        inline DataItem& setList(const vector<DataItem::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
        inline DataItem& setList(vector<DataItem::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


        // pageNo Field Functions 
        bool hasPageNo() const { return this->pageNo_ != nullptr;};
        void deletePageNo() { this->pageNo_ = nullptr;};
        inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
        inline DataItem& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
        inline DataItem& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline DataItem& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        // The extended information.
        // 
        // > This field is not returned by this operation.
        Darabonba::Json extra_ {};
        // The list of SQL Explorer statistical results. Each element is a statistical entry under an aggregation dimension.
        shared_ptr<vector<DataItem::List>> list_ {};
        // The current page number, corresponding to the request parameter **PageNo**.
        shared_ptr<int64_t> pageNo_ {};
        // The number of entries per page, corresponding to the request parameter **PageSize**.
        shared_ptr<int64_t> pageSize_ {};
        // The total number of statistical entries that match the query conditions. You can use this value for pagination calculation.
        shared_ptr<int64_t> total_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->isFinish_ == nullptr && this->message_ == nullptr && this->requestKey_ == nullptr && this->resultId_ == nullptr
        && this->state_ == nullptr && this->timestamp_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
      inline Data& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestKey Field Functions 
      bool hasRequestKey() const { return this->requestKey_ != nullptr;};
      void deleteRequestKey() { this->requestKey_ = nullptr;};
      inline string getRequestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
      inline Data& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The SQL Explorer statistical query results.
      // 
      // > Returned only when **State** is **SUCCESS**.
      shared_ptr<Data::DataItem> data_ {};
      // The error code of the asynchronous query failure.
      // 
      // > This field is returned only when the query fails.
      shared_ptr<int32_t> errorCode_ {};
      // Indicates whether the asynchronous query has completed. Valid values:
      // 
      // - **true**: **State** is **SUCCESS** or **FAIL**.
      // - **false**: **State** is **RUNNING**.
      shared_ptr<bool> isFinish_ {};
      // The error description of the asynchronous query failure.
      // 
      // > This field is returned only when the query fails.
      shared_ptr<string> message_ {};
      // The hash identifier of the request parameters.
      // 
      // > This operation does not return this field. Use **ResultId** to identify the asynchronous query.
      shared_ptr<string> requestKey_ {};
      // The asynchronous query result ID, in the format of an async_ prefix followed by a hash value computed from all business parameters of the request.
      // 
      // > Repeated calls with the same parameters return the same query result. Therefore, when polling, you must use exactly the same request parameters as the initial call. Any change in parameters generates a different **ResultId** and triggers a new query.
      shared_ptr<string> resultId_ {};
      // The current status of the asynchronous query. Valid values:
      // 
      // - **RUNNING**: The query is in progress. Continue polling.
      // - **SUCCESS**: The query succeeded. The **Data** field contains data only in this state.
      // - **FAIL**: The query failed.
      // 
      // > When the query fails, the operation directly returns an error code and error message instead of a normal response body with **State** set to **FAIL**.
      shared_ptr<string> state_ {};
      // The time when the asynchronous query was submitted. This value is a UNIX timestamp. Unit: milliseconds.
      // 
      // > When the query fails, this value indicates the time when the failure occurred.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlInsightStatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlInsightStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlInsightStatisticResponseBody::Data) };
    inline DescribeSqlInsightStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlInsightStatisticResponseBody::Data) };
    inline DescribeSqlInsightStatisticResponseBody& setData(const DescribeSqlInsightStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlInsightStatisticResponseBody& setData(DescribeSqlInsightStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlInsightStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlInsightStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlInsightStatisticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The envelope for asynchronous query results. The first call returns **ResultId** and **State**. Poll with the exact same request parameters until **State** is **SUCCESS**, then retrieve the statistical details from **List**.
    shared_ptr<DescribeSqlInsightStatisticResponseBody::Data> data_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The unique ID of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed. Check the **Code** and **Message** fields to determine the cause.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
