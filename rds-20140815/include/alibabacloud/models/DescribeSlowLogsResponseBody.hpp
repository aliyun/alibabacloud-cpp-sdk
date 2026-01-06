// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlowLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSlowLogsResponseBody() = default ;
    DescribeSlowLogsResponseBody(const DescribeSlowLogsResponseBody &) = default ;
    DescribeSlowLogsResponseBody(DescribeSlowLogsResponseBody &&) = default ;
    DescribeSlowLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogsResponseBody() = default ;
    DescribeSlowLogsResponseBody& operator=(const DescribeSlowLogsResponseBody &) = default ;
    DescribeSlowLogsResponseBody& operator=(DescribeSlowLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SQLSlowLog, SQLSlowLog_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SQLSlowLog, SQLSlowLog_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SQLSlowLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLSlowLog& obj) { 
          DARABONBA_PTR_TO_JSON(AvgExecutionTime, avgExecutionTime_);
          DARABONBA_PTR_TO_JSON(AvgIOWriteCounts, avgIOWriteCounts_);
          DARABONBA_PTR_TO_JSON(AvgLastRowsAffectedCounts, avgLastRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(AvgLogicalReadCounts, avgLogicalReadCounts_);
          DARABONBA_PTR_TO_JSON(AvgPhysicalReadCounts, avgPhysicalReadCounts_);
          DARABONBA_PTR_TO_JSON(AvgRowsAffectedCounts, avgRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(MaxExecutionTime, maxExecutionTime_);
          DARABONBA_PTR_TO_JSON(MaxExecutionTimeMS, maxExecutionTimeMS_);
          DARABONBA_PTR_TO_JSON(MaxIOWriteCounts, maxIOWriteCounts_);
          DARABONBA_PTR_TO_JSON(MaxLastRowsAffectedCounts, maxLastRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_TO_JSON(MaxLockTimeMS, maxLockTimeMS_);
          DARABONBA_PTR_TO_JSON(MaxLogicalReadCounts, maxLogicalReadCounts_);
          DARABONBA_PTR_TO_JSON(MaxPhysicalReadCounts, maxPhysicalReadCounts_);
          DARABONBA_PTR_TO_JSON(MaxRowsAffectedCounts, maxRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(MinIOWriteCounts, minIOWriteCounts_);
          DARABONBA_PTR_TO_JSON(MinLastRowsAffectedCounts, minLastRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(MinLogicalReadCounts, minLogicalReadCounts_);
          DARABONBA_PTR_TO_JSON(MinPhysicalReadCounts, minPhysicalReadCounts_);
          DARABONBA_PTR_TO_JSON(MinRowsAffectedCounts, minRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(MySQLTotalExecutionCounts, mySQLTotalExecutionCounts_);
          DARABONBA_PTR_TO_JSON(MySQLTotalExecutionTimes, mySQLTotalExecutionTimes_);
          DARABONBA_PTR_TO_JSON(ParseMaxRowCount, parseMaxRowCount_);
          DARABONBA_PTR_TO_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
          DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
          DARABONBA_PTR_TO_JSON(ReturnMaxRowCount, returnMaxRowCount_);
          DARABONBA_PTR_TO_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
          DARABONBA_PTR_TO_JSON(SQLHASH, SQLHASH_);
          DARABONBA_PTR_TO_JSON(SQLIdStr, SQLIdStr_);
          DARABONBA_PTR_TO_JSON(SQLServerAvgCpuTime, SQLServerAvgCpuTime_);
          DARABONBA_PTR_TO_JSON(SQLServerAvgExecutionTime, SQLServerAvgExecutionTime_);
          DARABONBA_PTR_TO_JSON(SQLServerMaxCpuTime, SQLServerMaxCpuTime_);
          DARABONBA_PTR_TO_JSON(SQLServerMinCpuTime, SQLServerMinCpuTime_);
          DARABONBA_PTR_TO_JSON(SQLServerMinExecutionTime, SQLServerMinExecutionTime_);
          DARABONBA_PTR_TO_JSON(SQLServerTotalCpuTime, SQLServerTotalCpuTime_);
          DARABONBA_PTR_TO_JSON(SQLServerTotalExecutionCounts, SQLServerTotalExecutionCounts_);
          DARABONBA_PTR_TO_JSON(SQLServerTotalExecutionTimes, SQLServerTotalExecutionTimes_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
          DARABONBA_PTR_TO_JSON(SlowLogId, slowLogId_);
          DARABONBA_PTR_TO_JSON(TotalIOWriteCounts, totalIOWriteCounts_);
          DARABONBA_PTR_TO_JSON(TotalLastRowsAffectedCounts, totalLastRowsAffectedCounts_);
          DARABONBA_PTR_TO_JSON(TotalLockTimes, totalLockTimes_);
          DARABONBA_PTR_TO_JSON(TotalLogicalReadCounts, totalLogicalReadCounts_);
          DARABONBA_PTR_TO_JSON(TotalPhysicalReadCounts, totalPhysicalReadCounts_);
          DARABONBA_PTR_TO_JSON(TotalRowsAffectedCounts, totalRowsAffectedCounts_);
        };
        friend void from_json(const Darabonba::Json& j, SQLSlowLog& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgExecutionTime, avgExecutionTime_);
          DARABONBA_PTR_FROM_JSON(AvgIOWriteCounts, avgIOWriteCounts_);
          DARABONBA_PTR_FROM_JSON(AvgLastRowsAffectedCounts, avgLastRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(AvgLogicalReadCounts, avgLogicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(AvgPhysicalReadCounts, avgPhysicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(AvgRowsAffectedCounts, avgRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(MaxExecutionTime, maxExecutionTime_);
          DARABONBA_PTR_FROM_JSON(MaxExecutionTimeMS, maxExecutionTimeMS_);
          DARABONBA_PTR_FROM_JSON(MaxIOWriteCounts, maxIOWriteCounts_);
          DARABONBA_PTR_FROM_JSON(MaxLastRowsAffectedCounts, maxLastRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_FROM_JSON(MaxLockTimeMS, maxLockTimeMS_);
          DARABONBA_PTR_FROM_JSON(MaxLogicalReadCounts, maxLogicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(MaxPhysicalReadCounts, maxPhysicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(MaxRowsAffectedCounts, maxRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(MinIOWriteCounts, minIOWriteCounts_);
          DARABONBA_PTR_FROM_JSON(MinLastRowsAffectedCounts, minLastRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(MinLogicalReadCounts, minLogicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(MinPhysicalReadCounts, minPhysicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(MinRowsAffectedCounts, minRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(MySQLTotalExecutionCounts, mySQLTotalExecutionCounts_);
          DARABONBA_PTR_FROM_JSON(MySQLTotalExecutionTimes, mySQLTotalExecutionTimes_);
          DARABONBA_PTR_FROM_JSON(ParseMaxRowCount, parseMaxRowCount_);
          DARABONBA_PTR_FROM_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
          DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
          DARABONBA_PTR_FROM_JSON(ReturnMaxRowCount, returnMaxRowCount_);
          DARABONBA_PTR_FROM_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
          DARABONBA_PTR_FROM_JSON(SQLHASH, SQLHASH_);
          DARABONBA_PTR_FROM_JSON(SQLIdStr, SQLIdStr_);
          DARABONBA_PTR_FROM_JSON(SQLServerAvgCpuTime, SQLServerAvgCpuTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerAvgExecutionTime, SQLServerAvgExecutionTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerMaxCpuTime, SQLServerMaxCpuTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerMinCpuTime, SQLServerMinCpuTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerMinExecutionTime, SQLServerMinExecutionTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerTotalCpuTime, SQLServerTotalCpuTime_);
          DARABONBA_PTR_FROM_JSON(SQLServerTotalExecutionCounts, SQLServerTotalExecutionCounts_);
          DARABONBA_PTR_FROM_JSON(SQLServerTotalExecutionTimes, SQLServerTotalExecutionTimes_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
          DARABONBA_PTR_FROM_JSON(SlowLogId, slowLogId_);
          DARABONBA_PTR_FROM_JSON(TotalIOWriteCounts, totalIOWriteCounts_);
          DARABONBA_PTR_FROM_JSON(TotalLastRowsAffectedCounts, totalLastRowsAffectedCounts_);
          DARABONBA_PTR_FROM_JSON(TotalLockTimes, totalLockTimes_);
          DARABONBA_PTR_FROM_JSON(TotalLogicalReadCounts, totalLogicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(TotalPhysicalReadCounts, totalPhysicalReadCounts_);
          DARABONBA_PTR_FROM_JSON(TotalRowsAffectedCounts, totalRowsAffectedCounts_);
        };
        SQLSlowLog() = default ;
        SQLSlowLog(const SQLSlowLog &) = default ;
        SQLSlowLog(SQLSlowLog &&) = default ;
        SQLSlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLSlowLog() = default ;
        SQLSlowLog& operator=(const SQLSlowLog &) = default ;
        SQLSlowLog& operator=(SQLSlowLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgExecutionTime_ == nullptr
        && this->avgIOWriteCounts_ == nullptr && this->avgLastRowsAffectedCounts_ == nullptr && this->avgLogicalReadCounts_ == nullptr && this->avgPhysicalReadCounts_ == nullptr && this->avgRowsAffectedCounts_ == nullptr
        && this->createTime_ == nullptr && this->DBName_ == nullptr && this->maxExecutionTime_ == nullptr && this->maxExecutionTimeMS_ == nullptr && this->maxIOWriteCounts_ == nullptr
        && this->maxLastRowsAffectedCounts_ == nullptr && this->maxLockTime_ == nullptr && this->maxLockTimeMS_ == nullptr && this->maxLogicalReadCounts_ == nullptr && this->maxPhysicalReadCounts_ == nullptr
        && this->maxRowsAffectedCounts_ == nullptr && this->minIOWriteCounts_ == nullptr && this->minLastRowsAffectedCounts_ == nullptr && this->minLogicalReadCounts_ == nullptr && this->minPhysicalReadCounts_ == nullptr
        && this->minRowsAffectedCounts_ == nullptr && this->mySQLTotalExecutionCounts_ == nullptr && this->mySQLTotalExecutionTimes_ == nullptr && this->parseMaxRowCount_ == nullptr && this->parseTotalRowCounts_ == nullptr
        && this->reportTime_ == nullptr && this->returnMaxRowCount_ == nullptr && this->returnTotalRowCounts_ == nullptr && this->SQLHASH_ == nullptr && this->SQLIdStr_ == nullptr
        && this->SQLServerAvgCpuTime_ == nullptr && this->SQLServerAvgExecutionTime_ == nullptr && this->SQLServerMaxCpuTime_ == nullptr && this->SQLServerMinCpuTime_ == nullptr && this->SQLServerMinExecutionTime_ == nullptr
        && this->SQLServerTotalCpuTime_ == nullptr && this->SQLServerTotalExecutionCounts_ == nullptr && this->SQLServerTotalExecutionTimes_ == nullptr && this->SQLText_ == nullptr && this->slowLogId_ == nullptr
        && this->totalIOWriteCounts_ == nullptr && this->totalLastRowsAffectedCounts_ == nullptr && this->totalLockTimes_ == nullptr && this->totalLogicalReadCounts_ == nullptr && this->totalPhysicalReadCounts_ == nullptr
        && this->totalRowsAffectedCounts_ == nullptr; };
        // avgExecutionTime Field Functions 
        bool hasAvgExecutionTime() const { return this->avgExecutionTime_ != nullptr;};
        void deleteAvgExecutionTime() { this->avgExecutionTime_ = nullptr;};
        inline int64_t getAvgExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(avgExecutionTime_, 0L) };
        inline SQLSlowLog& setAvgExecutionTime(int64_t avgExecutionTime) { DARABONBA_PTR_SET_VALUE(avgExecutionTime_, avgExecutionTime) };


        // avgIOWriteCounts Field Functions 
        bool hasAvgIOWriteCounts() const { return this->avgIOWriteCounts_ != nullptr;};
        void deleteAvgIOWriteCounts() { this->avgIOWriteCounts_ = nullptr;};
        inline int64_t getAvgIOWriteCounts() const { DARABONBA_PTR_GET_DEFAULT(avgIOWriteCounts_, 0L) };
        inline SQLSlowLog& setAvgIOWriteCounts(int64_t avgIOWriteCounts) { DARABONBA_PTR_SET_VALUE(avgIOWriteCounts_, avgIOWriteCounts) };


        // avgLastRowsAffectedCounts Field Functions 
        bool hasAvgLastRowsAffectedCounts() const { return this->avgLastRowsAffectedCounts_ != nullptr;};
        void deleteAvgLastRowsAffectedCounts() { this->avgLastRowsAffectedCounts_ = nullptr;};
        inline int64_t getAvgLastRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(avgLastRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setAvgLastRowsAffectedCounts(int64_t avgLastRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(avgLastRowsAffectedCounts_, avgLastRowsAffectedCounts) };


        // avgLogicalReadCounts Field Functions 
        bool hasAvgLogicalReadCounts() const { return this->avgLogicalReadCounts_ != nullptr;};
        void deleteAvgLogicalReadCounts() { this->avgLogicalReadCounts_ = nullptr;};
        inline int64_t getAvgLogicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(avgLogicalReadCounts_, 0L) };
        inline SQLSlowLog& setAvgLogicalReadCounts(int64_t avgLogicalReadCounts) { DARABONBA_PTR_SET_VALUE(avgLogicalReadCounts_, avgLogicalReadCounts) };


        // avgPhysicalReadCounts Field Functions 
        bool hasAvgPhysicalReadCounts() const { return this->avgPhysicalReadCounts_ != nullptr;};
        void deleteAvgPhysicalReadCounts() { this->avgPhysicalReadCounts_ = nullptr;};
        inline int64_t getAvgPhysicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalReadCounts_, 0L) };
        inline SQLSlowLog& setAvgPhysicalReadCounts(int64_t avgPhysicalReadCounts) { DARABONBA_PTR_SET_VALUE(avgPhysicalReadCounts_, avgPhysicalReadCounts) };


        // avgRowsAffectedCounts Field Functions 
        bool hasAvgRowsAffectedCounts() const { return this->avgRowsAffectedCounts_ != nullptr;};
        void deleteAvgRowsAffectedCounts() { this->avgRowsAffectedCounts_ = nullptr;};
        inline int64_t getAvgRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(avgRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setAvgRowsAffectedCounts(int64_t avgRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(avgRowsAffectedCounts_, avgRowsAffectedCounts) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SQLSlowLog& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SQLSlowLog& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // maxExecutionTime Field Functions 
        bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
        void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
        inline int64_t getMaxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, 0L) };
        inline SQLSlowLog& setMaxExecutionTime(int64_t maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


        // maxExecutionTimeMS Field Functions 
        bool hasMaxExecutionTimeMS() const { return this->maxExecutionTimeMS_ != nullptr;};
        void deleteMaxExecutionTimeMS() { this->maxExecutionTimeMS_ = nullptr;};
        inline int64_t getMaxExecutionTimeMS() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTimeMS_, 0L) };
        inline SQLSlowLog& setMaxExecutionTimeMS(int64_t maxExecutionTimeMS) { DARABONBA_PTR_SET_VALUE(maxExecutionTimeMS_, maxExecutionTimeMS) };


        // maxIOWriteCounts Field Functions 
        bool hasMaxIOWriteCounts() const { return this->maxIOWriteCounts_ != nullptr;};
        void deleteMaxIOWriteCounts() { this->maxIOWriteCounts_ = nullptr;};
        inline int64_t getMaxIOWriteCounts() const { DARABONBA_PTR_GET_DEFAULT(maxIOWriteCounts_, 0L) };
        inline SQLSlowLog& setMaxIOWriteCounts(int64_t maxIOWriteCounts) { DARABONBA_PTR_SET_VALUE(maxIOWriteCounts_, maxIOWriteCounts) };


        // maxLastRowsAffectedCounts Field Functions 
        bool hasMaxLastRowsAffectedCounts() const { return this->maxLastRowsAffectedCounts_ != nullptr;};
        void deleteMaxLastRowsAffectedCounts() { this->maxLastRowsAffectedCounts_ = nullptr;};
        inline int64_t getMaxLastRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(maxLastRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setMaxLastRowsAffectedCounts(int64_t maxLastRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(maxLastRowsAffectedCounts_, maxLastRowsAffectedCounts) };


        // maxLockTime Field Functions 
        bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
        void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
        inline int64_t getMaxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0L) };
        inline SQLSlowLog& setMaxLockTime(int64_t maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


        // maxLockTimeMS Field Functions 
        bool hasMaxLockTimeMS() const { return this->maxLockTimeMS_ != nullptr;};
        void deleteMaxLockTimeMS() { this->maxLockTimeMS_ = nullptr;};
        inline int64_t getMaxLockTimeMS() const { DARABONBA_PTR_GET_DEFAULT(maxLockTimeMS_, 0L) };
        inline SQLSlowLog& setMaxLockTimeMS(int64_t maxLockTimeMS) { DARABONBA_PTR_SET_VALUE(maxLockTimeMS_, maxLockTimeMS) };


        // maxLogicalReadCounts Field Functions 
        bool hasMaxLogicalReadCounts() const { return this->maxLogicalReadCounts_ != nullptr;};
        void deleteMaxLogicalReadCounts() { this->maxLogicalReadCounts_ = nullptr;};
        inline int64_t getMaxLogicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(maxLogicalReadCounts_, 0L) };
        inline SQLSlowLog& setMaxLogicalReadCounts(int64_t maxLogicalReadCounts) { DARABONBA_PTR_SET_VALUE(maxLogicalReadCounts_, maxLogicalReadCounts) };


        // maxPhysicalReadCounts Field Functions 
        bool hasMaxPhysicalReadCounts() const { return this->maxPhysicalReadCounts_ != nullptr;};
        void deleteMaxPhysicalReadCounts() { this->maxPhysicalReadCounts_ = nullptr;};
        inline int64_t getMaxPhysicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(maxPhysicalReadCounts_, 0L) };
        inline SQLSlowLog& setMaxPhysicalReadCounts(int64_t maxPhysicalReadCounts) { DARABONBA_PTR_SET_VALUE(maxPhysicalReadCounts_, maxPhysicalReadCounts) };


        // maxRowsAffectedCounts Field Functions 
        bool hasMaxRowsAffectedCounts() const { return this->maxRowsAffectedCounts_ != nullptr;};
        void deleteMaxRowsAffectedCounts() { this->maxRowsAffectedCounts_ = nullptr;};
        inline int64_t getMaxRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(maxRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setMaxRowsAffectedCounts(int64_t maxRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(maxRowsAffectedCounts_, maxRowsAffectedCounts) };


        // minIOWriteCounts Field Functions 
        bool hasMinIOWriteCounts() const { return this->minIOWriteCounts_ != nullptr;};
        void deleteMinIOWriteCounts() { this->minIOWriteCounts_ = nullptr;};
        inline int64_t getMinIOWriteCounts() const { DARABONBA_PTR_GET_DEFAULT(minIOWriteCounts_, 0L) };
        inline SQLSlowLog& setMinIOWriteCounts(int64_t minIOWriteCounts) { DARABONBA_PTR_SET_VALUE(minIOWriteCounts_, minIOWriteCounts) };


        // minLastRowsAffectedCounts Field Functions 
        bool hasMinLastRowsAffectedCounts() const { return this->minLastRowsAffectedCounts_ != nullptr;};
        void deleteMinLastRowsAffectedCounts() { this->minLastRowsAffectedCounts_ = nullptr;};
        inline int64_t getMinLastRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(minLastRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setMinLastRowsAffectedCounts(int64_t minLastRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(minLastRowsAffectedCounts_, minLastRowsAffectedCounts) };


        // minLogicalReadCounts Field Functions 
        bool hasMinLogicalReadCounts() const { return this->minLogicalReadCounts_ != nullptr;};
        void deleteMinLogicalReadCounts() { this->minLogicalReadCounts_ = nullptr;};
        inline int64_t getMinLogicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(minLogicalReadCounts_, 0L) };
        inline SQLSlowLog& setMinLogicalReadCounts(int64_t minLogicalReadCounts) { DARABONBA_PTR_SET_VALUE(minLogicalReadCounts_, minLogicalReadCounts) };


        // minPhysicalReadCounts Field Functions 
        bool hasMinPhysicalReadCounts() const { return this->minPhysicalReadCounts_ != nullptr;};
        void deleteMinPhysicalReadCounts() { this->minPhysicalReadCounts_ = nullptr;};
        inline int64_t getMinPhysicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(minPhysicalReadCounts_, 0L) };
        inline SQLSlowLog& setMinPhysicalReadCounts(int64_t minPhysicalReadCounts) { DARABONBA_PTR_SET_VALUE(minPhysicalReadCounts_, minPhysicalReadCounts) };


        // minRowsAffectedCounts Field Functions 
        bool hasMinRowsAffectedCounts() const { return this->minRowsAffectedCounts_ != nullptr;};
        void deleteMinRowsAffectedCounts() { this->minRowsAffectedCounts_ = nullptr;};
        inline int64_t getMinRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(minRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setMinRowsAffectedCounts(int64_t minRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(minRowsAffectedCounts_, minRowsAffectedCounts) };


        // mySQLTotalExecutionCounts Field Functions 
        bool hasMySQLTotalExecutionCounts() const { return this->mySQLTotalExecutionCounts_ != nullptr;};
        void deleteMySQLTotalExecutionCounts() { this->mySQLTotalExecutionCounts_ = nullptr;};
        inline int64_t getMySQLTotalExecutionCounts() const { DARABONBA_PTR_GET_DEFAULT(mySQLTotalExecutionCounts_, 0L) };
        inline SQLSlowLog& setMySQLTotalExecutionCounts(int64_t mySQLTotalExecutionCounts) { DARABONBA_PTR_SET_VALUE(mySQLTotalExecutionCounts_, mySQLTotalExecutionCounts) };


        // mySQLTotalExecutionTimes Field Functions 
        bool hasMySQLTotalExecutionTimes() const { return this->mySQLTotalExecutionTimes_ != nullptr;};
        void deleteMySQLTotalExecutionTimes() { this->mySQLTotalExecutionTimes_ = nullptr;};
        inline int64_t getMySQLTotalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(mySQLTotalExecutionTimes_, 0L) };
        inline SQLSlowLog& setMySQLTotalExecutionTimes(int64_t mySQLTotalExecutionTimes) { DARABONBA_PTR_SET_VALUE(mySQLTotalExecutionTimes_, mySQLTotalExecutionTimes) };


        // parseMaxRowCount Field Functions 
        bool hasParseMaxRowCount() const { return this->parseMaxRowCount_ != nullptr;};
        void deleteParseMaxRowCount() { this->parseMaxRowCount_ = nullptr;};
        inline int64_t getParseMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(parseMaxRowCount_, 0L) };
        inline SQLSlowLog& setParseMaxRowCount(int64_t parseMaxRowCount) { DARABONBA_PTR_SET_VALUE(parseMaxRowCount_, parseMaxRowCount) };


        // parseTotalRowCounts Field Functions 
        bool hasParseTotalRowCounts() const { return this->parseTotalRowCounts_ != nullptr;};
        void deleteParseTotalRowCounts() { this->parseTotalRowCounts_ = nullptr;};
        inline int64_t getParseTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseTotalRowCounts_, 0L) };
        inline SQLSlowLog& setParseTotalRowCounts(int64_t parseTotalRowCounts) { DARABONBA_PTR_SET_VALUE(parseTotalRowCounts_, parseTotalRowCounts) };


        // reportTime Field Functions 
        bool hasReportTime() const { return this->reportTime_ != nullptr;};
        void deleteReportTime() { this->reportTime_ = nullptr;};
        inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
        inline SQLSlowLog& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


        // returnMaxRowCount Field Functions 
        bool hasReturnMaxRowCount() const { return this->returnMaxRowCount_ != nullptr;};
        void deleteReturnMaxRowCount() { this->returnMaxRowCount_ = nullptr;};
        inline int64_t getReturnMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnMaxRowCount_, 0L) };
        inline SQLSlowLog& setReturnMaxRowCount(int64_t returnMaxRowCount) { DARABONBA_PTR_SET_VALUE(returnMaxRowCount_, returnMaxRowCount) };


        // returnTotalRowCounts Field Functions 
        bool hasReturnTotalRowCounts() const { return this->returnTotalRowCounts_ != nullptr;};
        void deleteReturnTotalRowCounts() { this->returnTotalRowCounts_ = nullptr;};
        inline int64_t getReturnTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnTotalRowCounts_, 0L) };
        inline SQLSlowLog& setReturnTotalRowCounts(int64_t returnTotalRowCounts) { DARABONBA_PTR_SET_VALUE(returnTotalRowCounts_, returnTotalRowCounts) };


        // SQLHASH Field Functions 
        bool hasSQLHASH() const { return this->SQLHASH_ != nullptr;};
        void deleteSQLHASH() { this->SQLHASH_ = nullptr;};
        inline string getSQLHASH() const { DARABONBA_PTR_GET_DEFAULT(SQLHASH_, "") };
        inline SQLSlowLog& setSQLHASH(string SQLHASH) { DARABONBA_PTR_SET_VALUE(SQLHASH_, SQLHASH) };


        // SQLIdStr Field Functions 
        bool hasSQLIdStr() const { return this->SQLIdStr_ != nullptr;};
        void deleteSQLIdStr() { this->SQLIdStr_ = nullptr;};
        inline string getSQLIdStr() const { DARABONBA_PTR_GET_DEFAULT(SQLIdStr_, "") };
        inline SQLSlowLog& setSQLIdStr(string SQLIdStr) { DARABONBA_PTR_SET_VALUE(SQLIdStr_, SQLIdStr) };


        // SQLServerAvgCpuTime Field Functions 
        bool hasSQLServerAvgCpuTime() const { return this->SQLServerAvgCpuTime_ != nullptr;};
        void deleteSQLServerAvgCpuTime() { this->SQLServerAvgCpuTime_ = nullptr;};
        inline int64_t getSQLServerAvgCpuTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerAvgCpuTime_, 0L) };
        inline SQLSlowLog& setSQLServerAvgCpuTime(int64_t SQLServerAvgCpuTime) { DARABONBA_PTR_SET_VALUE(SQLServerAvgCpuTime_, SQLServerAvgCpuTime) };


        // SQLServerAvgExecutionTime Field Functions 
        bool hasSQLServerAvgExecutionTime() const { return this->SQLServerAvgExecutionTime_ != nullptr;};
        void deleteSQLServerAvgExecutionTime() { this->SQLServerAvgExecutionTime_ = nullptr;};
        inline int64_t getSQLServerAvgExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerAvgExecutionTime_, 0L) };
        inline SQLSlowLog& setSQLServerAvgExecutionTime(int64_t SQLServerAvgExecutionTime) { DARABONBA_PTR_SET_VALUE(SQLServerAvgExecutionTime_, SQLServerAvgExecutionTime) };


        // SQLServerMaxCpuTime Field Functions 
        bool hasSQLServerMaxCpuTime() const { return this->SQLServerMaxCpuTime_ != nullptr;};
        void deleteSQLServerMaxCpuTime() { this->SQLServerMaxCpuTime_ = nullptr;};
        inline int64_t getSQLServerMaxCpuTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerMaxCpuTime_, 0L) };
        inline SQLSlowLog& setSQLServerMaxCpuTime(int64_t SQLServerMaxCpuTime) { DARABONBA_PTR_SET_VALUE(SQLServerMaxCpuTime_, SQLServerMaxCpuTime) };


        // SQLServerMinCpuTime Field Functions 
        bool hasSQLServerMinCpuTime() const { return this->SQLServerMinCpuTime_ != nullptr;};
        void deleteSQLServerMinCpuTime() { this->SQLServerMinCpuTime_ = nullptr;};
        inline int64_t getSQLServerMinCpuTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerMinCpuTime_, 0L) };
        inline SQLSlowLog& setSQLServerMinCpuTime(int64_t SQLServerMinCpuTime) { DARABONBA_PTR_SET_VALUE(SQLServerMinCpuTime_, SQLServerMinCpuTime) };


        // SQLServerMinExecutionTime Field Functions 
        bool hasSQLServerMinExecutionTime() const { return this->SQLServerMinExecutionTime_ != nullptr;};
        void deleteSQLServerMinExecutionTime() { this->SQLServerMinExecutionTime_ = nullptr;};
        inline int64_t getSQLServerMinExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerMinExecutionTime_, 0L) };
        inline SQLSlowLog& setSQLServerMinExecutionTime(int64_t SQLServerMinExecutionTime) { DARABONBA_PTR_SET_VALUE(SQLServerMinExecutionTime_, SQLServerMinExecutionTime) };


        // SQLServerTotalCpuTime Field Functions 
        bool hasSQLServerTotalCpuTime() const { return this->SQLServerTotalCpuTime_ != nullptr;};
        void deleteSQLServerTotalCpuTime() { this->SQLServerTotalCpuTime_ = nullptr;};
        inline int64_t getSQLServerTotalCpuTime() const { DARABONBA_PTR_GET_DEFAULT(SQLServerTotalCpuTime_, 0L) };
        inline SQLSlowLog& setSQLServerTotalCpuTime(int64_t SQLServerTotalCpuTime) { DARABONBA_PTR_SET_VALUE(SQLServerTotalCpuTime_, SQLServerTotalCpuTime) };


        // SQLServerTotalExecutionCounts Field Functions 
        bool hasSQLServerTotalExecutionCounts() const { return this->SQLServerTotalExecutionCounts_ != nullptr;};
        void deleteSQLServerTotalExecutionCounts() { this->SQLServerTotalExecutionCounts_ = nullptr;};
        inline int64_t getSQLServerTotalExecutionCounts() const { DARABONBA_PTR_GET_DEFAULT(SQLServerTotalExecutionCounts_, 0L) };
        inline SQLSlowLog& setSQLServerTotalExecutionCounts(int64_t SQLServerTotalExecutionCounts) { DARABONBA_PTR_SET_VALUE(SQLServerTotalExecutionCounts_, SQLServerTotalExecutionCounts) };


        // SQLServerTotalExecutionTimes Field Functions 
        bool hasSQLServerTotalExecutionTimes() const { return this->SQLServerTotalExecutionTimes_ != nullptr;};
        void deleteSQLServerTotalExecutionTimes() { this->SQLServerTotalExecutionTimes_ = nullptr;};
        inline int64_t getSQLServerTotalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(SQLServerTotalExecutionTimes_, 0L) };
        inline SQLSlowLog& setSQLServerTotalExecutionTimes(int64_t SQLServerTotalExecutionTimes) { DARABONBA_PTR_SET_VALUE(SQLServerTotalExecutionTimes_, SQLServerTotalExecutionTimes) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline SQLSlowLog& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // slowLogId Field Functions 
        bool hasSlowLogId() const { return this->slowLogId_ != nullptr;};
        void deleteSlowLogId() { this->slowLogId_ = nullptr;};
        inline int64_t getSlowLogId() const { DARABONBA_PTR_GET_DEFAULT(slowLogId_, 0L) };
        inline SQLSlowLog& setSlowLogId(int64_t slowLogId) { DARABONBA_PTR_SET_VALUE(slowLogId_, slowLogId) };


        // totalIOWriteCounts Field Functions 
        bool hasTotalIOWriteCounts() const { return this->totalIOWriteCounts_ != nullptr;};
        void deleteTotalIOWriteCounts() { this->totalIOWriteCounts_ = nullptr;};
        inline int64_t getTotalIOWriteCounts() const { DARABONBA_PTR_GET_DEFAULT(totalIOWriteCounts_, 0L) };
        inline SQLSlowLog& setTotalIOWriteCounts(int64_t totalIOWriteCounts) { DARABONBA_PTR_SET_VALUE(totalIOWriteCounts_, totalIOWriteCounts) };


        // totalLastRowsAffectedCounts Field Functions 
        bool hasTotalLastRowsAffectedCounts() const { return this->totalLastRowsAffectedCounts_ != nullptr;};
        void deleteTotalLastRowsAffectedCounts() { this->totalLastRowsAffectedCounts_ = nullptr;};
        inline int64_t getTotalLastRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(totalLastRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setTotalLastRowsAffectedCounts(int64_t totalLastRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(totalLastRowsAffectedCounts_, totalLastRowsAffectedCounts) };


        // totalLockTimes Field Functions 
        bool hasTotalLockTimes() const { return this->totalLockTimes_ != nullptr;};
        void deleteTotalLockTimes() { this->totalLockTimes_ = nullptr;};
        inline int64_t getTotalLockTimes() const { DARABONBA_PTR_GET_DEFAULT(totalLockTimes_, 0L) };
        inline SQLSlowLog& setTotalLockTimes(int64_t totalLockTimes) { DARABONBA_PTR_SET_VALUE(totalLockTimes_, totalLockTimes) };


        // totalLogicalReadCounts Field Functions 
        bool hasTotalLogicalReadCounts() const { return this->totalLogicalReadCounts_ != nullptr;};
        void deleteTotalLogicalReadCounts() { this->totalLogicalReadCounts_ = nullptr;};
        inline int64_t getTotalLogicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(totalLogicalReadCounts_, 0L) };
        inline SQLSlowLog& setTotalLogicalReadCounts(int64_t totalLogicalReadCounts) { DARABONBA_PTR_SET_VALUE(totalLogicalReadCounts_, totalLogicalReadCounts) };


        // totalPhysicalReadCounts Field Functions 
        bool hasTotalPhysicalReadCounts() const { return this->totalPhysicalReadCounts_ != nullptr;};
        void deleteTotalPhysicalReadCounts() { this->totalPhysicalReadCounts_ = nullptr;};
        inline int64_t getTotalPhysicalReadCounts() const { DARABONBA_PTR_GET_DEFAULT(totalPhysicalReadCounts_, 0L) };
        inline SQLSlowLog& setTotalPhysicalReadCounts(int64_t totalPhysicalReadCounts) { DARABONBA_PTR_SET_VALUE(totalPhysicalReadCounts_, totalPhysicalReadCounts) };


        // totalRowsAffectedCounts Field Functions 
        bool hasTotalRowsAffectedCounts() const { return this->totalRowsAffectedCounts_ != nullptr;};
        void deleteTotalRowsAffectedCounts() { this->totalRowsAffectedCounts_ = nullptr;};
        inline int64_t getTotalRowsAffectedCounts() const { DARABONBA_PTR_GET_DEFAULT(totalRowsAffectedCounts_, 0L) };
        inline SQLSlowLog& setTotalRowsAffectedCounts(int64_t totalRowsAffectedCounts) { DARABONBA_PTR_SET_VALUE(totalRowsAffectedCounts_, totalRowsAffectedCounts) };


      protected:
        // The average execution duration per SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgExecutionTime_ {};
        // The average number of I/O writes per SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgIOWriteCounts_ {};
        // The average number of rows that were affected by the last SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgLastRowsAffectedCounts_ {};
        // The average number of logical reads per SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgLogicalReadCounts_ {};
        // The average number of physical reads per SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgPhysicalReadCounts_ {};
        // The average number of rows that were affected per SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> avgRowsAffectedCounts_ {};
        // The date when the data was generated.
        shared_ptr<string> createTime_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The longest execution duration of a specific SQL statement in the query. Unit: seconds.
        shared_ptr<int64_t> maxExecutionTime_ {};
        // The longest execution duration of a specific SQL statement in the query. Unit: milliseconds.
        shared_ptr<int64_t> maxExecutionTimeMS_ {};
        // The largest number of I/O writes that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> maxIOWriteCounts_ {};
        // The largest number of rows that were affected by the last SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> maxLastRowsAffectedCounts_ {};
        // The longest lock duration that was caused by a specific SQL statement in the query. Unit: seconds.
        shared_ptr<int64_t> maxLockTime_ {};
        // The longest lock duration that was caused by a specific SQL statement in the query. Unit: milliseconds.
        shared_ptr<int64_t> maxLockTimeMS_ {};
        // The largest number of logical reads that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> maxLogicalReadCounts_ {};
        // The largest number of physical reads that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> maxPhysicalReadCounts_ {};
        // The largest number of rows that were affected by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> maxRowsAffectedCounts_ {};
        // The smallest number of I/O writes that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> minIOWriteCounts_ {};
        // The smallest number of rows that were affected by the last SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> minLastRowsAffectedCounts_ {};
        // The smallest number of logical reads that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> minLogicalReadCounts_ {};
        // The smallest number of physical reads that were performed by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> minPhysicalReadCounts_ {};
        // The smallest number of rows that were affected by a specific SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> minRowsAffectedCounts_ {};
        // The total number of SQL statements that were executed in the query. This parameter is returned only for instances that run MySQL.
        shared_ptr<int64_t> mySQLTotalExecutionCounts_ {};
        // The total execution duration of all SQL statements in the query. Unit: seconds. This parameter is returned only for instances that run MySQL.
        shared_ptr<int64_t> mySQLTotalExecutionTimes_ {};
        // The largest number of rows that were parsed by a specific SQL statement in the query.
        shared_ptr<int64_t> parseMaxRowCount_ {};
        // The total number of rows that were parsed by all SQL statements in the query.
        shared_ptr<int64_t> parseTotalRowCounts_ {};
        // The date on which the data report was generated.
        shared_ptr<string> reportTime_ {};
        // The largest number of rows that were returned by a specific SQL statement in the query.
        shared_ptr<int64_t> returnMaxRowCount_ {};
        // The total number of rows that were returned by all SQL statements in the query.
        shared_ptr<int64_t> returnTotalRowCounts_ {};
        // The unique ID of the SQL statement. The ID is used to obtain the slow query logs of the SQL statement.
        shared_ptr<string> SQLHASH_ {};
        // The ID of the SQL statement in the statistical template of slow query logs. This parameter is replaced by the **SQLHASH** parameter.
        shared_ptr<string> SQLIdStr_ {};
        // The average amount of CPU time per SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerAvgCpuTime_ {};
        // The average execution duration per SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerAvgExecutionTime_ {};
        // The largest amount of CPU time that was used by a specific SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerMaxCpuTime_ {};
        // The smallest amount of CPU time that was used by a specific SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerMinCpuTime_ {};
        // The smallest execution duration of a specific SQL statement in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerMinExecutionTime_ {};
        // The total amount of CPU time that was used by all SQL statements in the query. Unit: seconds.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerTotalCpuTime_ {};
        // The total number of SQL statements that were executed in the query. This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> SQLServerTotalExecutionCounts_ {};
        // The total execution duration of all SQL statements in the query. This parameter is returned only for instances that run SQL Server. Unit: milliseconds.
        shared_ptr<int64_t> SQLServerTotalExecutionTimes_ {};
        // The SQL statement that was executed in the query.
        shared_ptr<string> SQLText_ {};
        // The ID of the slow query log summary.
        shared_ptr<int64_t> slowLogId_ {};
        // The total number of I/O writes that were performed by all SQL statements in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> totalIOWriteCounts_ {};
        // The total number of rows that were affected by the last SQL statement in the query.
        // 
        // >  This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> totalLastRowsAffectedCounts_ {};
        // The total lock duration that was caused by all SQL statements in the query. Unit: seconds.
        shared_ptr<int64_t> totalLockTimes_ {};
        // The total number of logical reads that were performed by all SQL statements in the query.
        shared_ptr<int64_t> totalLogicalReadCounts_ {};
        // The total number of physical reads that were performed by all SQL statements in the query.
        shared_ptr<int64_t> totalPhysicalReadCounts_ {};
        // The total number of rows that were affected by all SQL statements in the query.
        shared_ptr<int64_t> totalRowsAffectedCounts_ {};
      };

      virtual bool empty() const override { return this->SQLSlowLog_ == nullptr; };
      // SQLSlowLog Field Functions 
      bool hasSQLSlowLog() const { return this->SQLSlowLog_ != nullptr;};
      void deleteSQLSlowLog() { this->SQLSlowLog_ = nullptr;};
      inline const vector<Items::SQLSlowLog> & getSQLSlowLog() const { DARABONBA_PTR_GET_CONST(SQLSlowLog_, vector<Items::SQLSlowLog>) };
      inline vector<Items::SQLSlowLog> getSQLSlowLog() { DARABONBA_PTR_GET(SQLSlowLog_, vector<Items::SQLSlowLog>) };
      inline Items& setSQLSlowLog(const vector<Items::SQLSlowLog> & sQLSlowLog) { DARABONBA_PTR_SET_VALUE(SQLSlowLog_, sQLSlowLog) };
      inline Items& setSQLSlowLog(vector<Items::SQLSlowLog> && sQLSlowLog) { DARABONBA_PTR_SET_RVALUE(SQLSlowLog_, sQLSlowLog) };


    protected:
      shared_ptr<vector<Items::SQLSlowLog>> SQLSlowLog_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->engine_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowLogsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowLogsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeSlowLogsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSlowLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSlowLogsResponseBody::Items) };
    inline DescribeSlowLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSlowLogsResponseBody::Items) };
    inline DescribeSlowLogsResponseBody& setItems(const DescribeSlowLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSlowLogsResponseBody& setItems(DescribeSlowLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSlowLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSlowLogsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowLogsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeSlowLogsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBInstanceId_ {};
    // The end date of the query.
    shared_ptr<string> endTime_ {};
    // The database engine of the instance.
    shared_ptr<string> engine_ {};
    // An array that consists of the information about each slow query log.
    shared_ptr<DescribeSlowLogsResponseBody::Items> items_ {};
    // The number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of SQL statements that are returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start date of the query.
    shared_ptr<string> startTime_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
