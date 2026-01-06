// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSQLPatternsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPatternsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatternDetails, patternDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPatternsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatternDetails, patternDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSQLPatternsResponseBody() = default ;
    DescribeSQLPatternsResponseBody(const DescribeSQLPatternsResponseBody &) = default ;
    DescribeSQLPatternsResponseBody(DescribeSQLPatternsResponseBody &&) = default ;
    DescribeSQLPatternsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPatternsResponseBody() = default ;
    DescribeSQLPatternsResponseBody& operator=(const DescribeSQLPatternsResponseBody &) = default ;
    DescribeSQLPatternsResponseBody& operator=(DescribeSQLPatternsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PatternDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PatternDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_TO_JSON(AverageExecutionTime, averageExecutionTime_);
        DARABONBA_PTR_TO_JSON(AverageOperatorCost, averageOperatorCost_);
        DARABONBA_PTR_TO_JSON(AveragePeakMemory, averagePeakMemory_);
        DARABONBA_PTR_TO_JSON(AverageQueryTime, averageQueryTime_);
        DARABONBA_PTR_TO_JSON(AverageScanCost, averageScanCost_);
        DARABONBA_PTR_TO_JSON(AverageScanSize, averageScanSize_);
        DARABONBA_PTR_TO_JSON(Blockable, blockable_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(MaxExecutionTime, maxExecutionTime_);
        DARABONBA_PTR_TO_JSON(MaxOperatorCost, maxOperatorCost_);
        DARABONBA_PTR_TO_JSON(MaxPeakMemory, maxPeakMemory_);
        DARABONBA_PTR_TO_JSON(MaxQueryTime, maxQueryTime_);
        DARABONBA_PTR_TO_JSON(MaxScanCost, maxScanCost_);
        DARABONBA_PTR_TO_JSON(MaxScanSize, maxScanSize_);
        DARABONBA_PTR_TO_JSON(OperatorCostPercentage, operatorCostPercentage_);
        DARABONBA_PTR_TO_JSON(OperatorCostSum, operatorCostSum_);
        DARABONBA_PTR_TO_JSON(PatternCreationTime, patternCreationTime_);
        DARABONBA_PTR_TO_JSON(PatternId, patternId_);
        DARABONBA_PTR_TO_JSON(PeakMemoryPercentage, peakMemoryPercentage_);
        DARABONBA_PTR_TO_JSON(PeakMemorySum, peakMemorySum_);
        DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_TO_JSON(QueryTimePercentage, queryTimePercentage_);
        DARABONBA_PTR_TO_JSON(QueryTimeSum, queryTimeSum_);
        DARABONBA_PTR_TO_JSON(SQLPattern, SQLPattern_);
        DARABONBA_PTR_TO_JSON(ScanCostPercentage, scanCostPercentage_);
        DARABONBA_PTR_TO_JSON(ScanCostSum, scanCostSum_);
        DARABONBA_PTR_TO_JSON(ScanSizePercentage, scanSizePercentage_);
        DARABONBA_PTR_TO_JSON(ScanSizeSum, scanSizeSum_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, PatternDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
        DARABONBA_PTR_FROM_JSON(AverageExecutionTime, averageExecutionTime_);
        DARABONBA_PTR_FROM_JSON(AverageOperatorCost, averageOperatorCost_);
        DARABONBA_PTR_FROM_JSON(AveragePeakMemory, averagePeakMemory_);
        DARABONBA_PTR_FROM_JSON(AverageQueryTime, averageQueryTime_);
        DARABONBA_PTR_FROM_JSON(AverageScanCost, averageScanCost_);
        DARABONBA_PTR_FROM_JSON(AverageScanSize, averageScanSize_);
        DARABONBA_PTR_FROM_JSON(Blockable, blockable_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(MaxExecutionTime, maxExecutionTime_);
        DARABONBA_PTR_FROM_JSON(MaxOperatorCost, maxOperatorCost_);
        DARABONBA_PTR_FROM_JSON(MaxPeakMemory, maxPeakMemory_);
        DARABONBA_PTR_FROM_JSON(MaxQueryTime, maxQueryTime_);
        DARABONBA_PTR_FROM_JSON(MaxScanCost, maxScanCost_);
        DARABONBA_PTR_FROM_JSON(MaxScanSize, maxScanSize_);
        DARABONBA_PTR_FROM_JSON(OperatorCostPercentage, operatorCostPercentage_);
        DARABONBA_PTR_FROM_JSON(OperatorCostSum, operatorCostSum_);
        DARABONBA_PTR_FROM_JSON(PatternCreationTime, patternCreationTime_);
        DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
        DARABONBA_PTR_FROM_JSON(PeakMemoryPercentage, peakMemoryPercentage_);
        DARABONBA_PTR_FROM_JSON(PeakMemorySum, peakMemorySum_);
        DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_FROM_JSON(QueryTimePercentage, queryTimePercentage_);
        DARABONBA_PTR_FROM_JSON(QueryTimeSum, queryTimeSum_);
        DARABONBA_PTR_FROM_JSON(SQLPattern, SQLPattern_);
        DARABONBA_PTR_FROM_JSON(ScanCostPercentage, scanCostPercentage_);
        DARABONBA_PTR_FROM_JSON(ScanCostSum, scanCostSum_);
        DARABONBA_PTR_FROM_JSON(ScanSizePercentage, scanSizePercentage_);
        DARABONBA_PTR_FROM_JSON(ScanSizeSum, scanSizeSum_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      PatternDetails() = default ;
      PatternDetails(const PatternDetails &) = default ;
      PatternDetails(PatternDetails &&) = default ;
      PatternDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PatternDetails() = default ;
      PatternDetails& operator=(const PatternDetails &) = default ;
      PatternDetails& operator=(PatternDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->averageExecutionTime_ == nullptr && this->averageOperatorCost_ == nullptr && this->averagePeakMemory_ == nullptr && this->averageQueryTime_ == nullptr && this->averageScanCost_ == nullptr
        && this->averageScanSize_ == nullptr && this->blockable_ == nullptr && this->failedCount_ == nullptr && this->maxExecutionTime_ == nullptr && this->maxOperatorCost_ == nullptr
        && this->maxPeakMemory_ == nullptr && this->maxQueryTime_ == nullptr && this->maxScanCost_ == nullptr && this->maxScanSize_ == nullptr && this->operatorCostPercentage_ == nullptr
        && this->operatorCostSum_ == nullptr && this->patternCreationTime_ == nullptr && this->patternId_ == nullptr && this->peakMemoryPercentage_ == nullptr && this->peakMemorySum_ == nullptr
        && this->queryCount_ == nullptr && this->queryTimePercentage_ == nullptr && this->queryTimeSum_ == nullptr && this->SQLPattern_ == nullptr && this->scanCostPercentage_ == nullptr
        && this->scanCostSum_ == nullptr && this->scanSizePercentage_ == nullptr && this->scanSizeSum_ == nullptr && this->tables_ == nullptr && this->user_ == nullptr; };
      // accessIp Field Functions 
      bool hasAccessIp() const { return this->accessIp_ != nullptr;};
      void deleteAccessIp() { this->accessIp_ = nullptr;};
      inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
      inline PatternDetails& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


      // averageExecutionTime Field Functions 
      bool hasAverageExecutionTime() const { return this->averageExecutionTime_ != nullptr;};
      void deleteAverageExecutionTime() { this->averageExecutionTime_ = nullptr;};
      inline double getAverageExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(averageExecutionTime_, 0.0) };
      inline PatternDetails& setAverageExecutionTime(double averageExecutionTime) { DARABONBA_PTR_SET_VALUE(averageExecutionTime_, averageExecutionTime) };


      // averageOperatorCost Field Functions 
      bool hasAverageOperatorCost() const { return this->averageOperatorCost_ != nullptr;};
      void deleteAverageOperatorCost() { this->averageOperatorCost_ = nullptr;};
      inline double getAverageOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(averageOperatorCost_, 0.0) };
      inline PatternDetails& setAverageOperatorCost(double averageOperatorCost) { DARABONBA_PTR_SET_VALUE(averageOperatorCost_, averageOperatorCost) };


      // averagePeakMemory Field Functions 
      bool hasAveragePeakMemory() const { return this->averagePeakMemory_ != nullptr;};
      void deleteAveragePeakMemory() { this->averagePeakMemory_ = nullptr;};
      inline double getAveragePeakMemory() const { DARABONBA_PTR_GET_DEFAULT(averagePeakMemory_, 0.0) };
      inline PatternDetails& setAveragePeakMemory(double averagePeakMemory) { DARABONBA_PTR_SET_VALUE(averagePeakMemory_, averagePeakMemory) };


      // averageQueryTime Field Functions 
      bool hasAverageQueryTime() const { return this->averageQueryTime_ != nullptr;};
      void deleteAverageQueryTime() { this->averageQueryTime_ = nullptr;};
      inline double getAverageQueryTime() const { DARABONBA_PTR_GET_DEFAULT(averageQueryTime_, 0.0) };
      inline PatternDetails& setAverageQueryTime(double averageQueryTime) { DARABONBA_PTR_SET_VALUE(averageQueryTime_, averageQueryTime) };


      // averageScanCost Field Functions 
      bool hasAverageScanCost() const { return this->averageScanCost_ != nullptr;};
      void deleteAverageScanCost() { this->averageScanCost_ = nullptr;};
      inline double getAverageScanCost() const { DARABONBA_PTR_GET_DEFAULT(averageScanCost_, 0.0) };
      inline PatternDetails& setAverageScanCost(double averageScanCost) { DARABONBA_PTR_SET_VALUE(averageScanCost_, averageScanCost) };


      // averageScanSize Field Functions 
      bool hasAverageScanSize() const { return this->averageScanSize_ != nullptr;};
      void deleteAverageScanSize() { this->averageScanSize_ = nullptr;};
      inline double getAverageScanSize() const { DARABONBA_PTR_GET_DEFAULT(averageScanSize_, 0.0) };
      inline PatternDetails& setAverageScanSize(double averageScanSize) { DARABONBA_PTR_SET_VALUE(averageScanSize_, averageScanSize) };


      // blockable Field Functions 
      bool hasBlockable() const { return this->blockable_ != nullptr;};
      void deleteBlockable() { this->blockable_ = nullptr;};
      inline bool getBlockable() const { DARABONBA_PTR_GET_DEFAULT(blockable_, false) };
      inline PatternDetails& setBlockable(bool blockable) { DARABONBA_PTR_SET_VALUE(blockable_, blockable) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
      inline PatternDetails& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // maxExecutionTime Field Functions 
      bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
      void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
      inline int64_t getMaxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, 0L) };
      inline PatternDetails& setMaxExecutionTime(int64_t maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


      // maxOperatorCost Field Functions 
      bool hasMaxOperatorCost() const { return this->maxOperatorCost_ != nullptr;};
      void deleteMaxOperatorCost() { this->maxOperatorCost_ = nullptr;};
      inline double getMaxOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(maxOperatorCost_, 0.0) };
      inline PatternDetails& setMaxOperatorCost(double maxOperatorCost) { DARABONBA_PTR_SET_VALUE(maxOperatorCost_, maxOperatorCost) };


      // maxPeakMemory Field Functions 
      bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
      void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
      inline int64_t getMaxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, 0L) };
      inline PatternDetails& setMaxPeakMemory(int64_t maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


      // maxQueryTime Field Functions 
      bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
      void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
      inline int64_t getMaxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0L) };
      inline PatternDetails& setMaxQueryTime(int64_t maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


      // maxScanCost Field Functions 
      bool hasMaxScanCost() const { return this->maxScanCost_ != nullptr;};
      void deleteMaxScanCost() { this->maxScanCost_ = nullptr;};
      inline double getMaxScanCost() const { DARABONBA_PTR_GET_DEFAULT(maxScanCost_, 0.0) };
      inline PatternDetails& setMaxScanCost(double maxScanCost) { DARABONBA_PTR_SET_VALUE(maxScanCost_, maxScanCost) };


      // maxScanSize Field Functions 
      bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
      void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
      inline int64_t getMaxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
      inline PatternDetails& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


      // operatorCostPercentage Field Functions 
      bool hasOperatorCostPercentage() const { return this->operatorCostPercentage_ != nullptr;};
      void deleteOperatorCostPercentage() { this->operatorCostPercentage_ = nullptr;};
      inline double getOperatorCostPercentage() const { DARABONBA_PTR_GET_DEFAULT(operatorCostPercentage_, 0.0) };
      inline PatternDetails& setOperatorCostPercentage(double operatorCostPercentage) { DARABONBA_PTR_SET_VALUE(operatorCostPercentage_, operatorCostPercentage) };


      // operatorCostSum Field Functions 
      bool hasOperatorCostSum() const { return this->operatorCostSum_ != nullptr;};
      void deleteOperatorCostSum() { this->operatorCostSum_ = nullptr;};
      inline double getOperatorCostSum() const { DARABONBA_PTR_GET_DEFAULT(operatorCostSum_, 0.0) };
      inline PatternDetails& setOperatorCostSum(double operatorCostSum) { DARABONBA_PTR_SET_VALUE(operatorCostSum_, operatorCostSum) };


      // patternCreationTime Field Functions 
      bool hasPatternCreationTime() const { return this->patternCreationTime_ != nullptr;};
      void deletePatternCreationTime() { this->patternCreationTime_ = nullptr;};
      inline string getPatternCreationTime() const { DARABONBA_PTR_GET_DEFAULT(patternCreationTime_, "") };
      inline PatternDetails& setPatternCreationTime(string patternCreationTime) { DARABONBA_PTR_SET_VALUE(patternCreationTime_, patternCreationTime) };


      // patternId Field Functions 
      bool hasPatternId() const { return this->patternId_ != nullptr;};
      void deletePatternId() { this->patternId_ = nullptr;};
      inline string getPatternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
      inline PatternDetails& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


      // peakMemoryPercentage Field Functions 
      bool hasPeakMemoryPercentage() const { return this->peakMemoryPercentage_ != nullptr;};
      void deletePeakMemoryPercentage() { this->peakMemoryPercentage_ = nullptr;};
      inline double getPeakMemoryPercentage() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryPercentage_, 0.0) };
      inline PatternDetails& setPeakMemoryPercentage(double peakMemoryPercentage) { DARABONBA_PTR_SET_VALUE(peakMemoryPercentage_, peakMemoryPercentage) };


      // peakMemorySum Field Functions 
      bool hasPeakMemorySum() const { return this->peakMemorySum_ != nullptr;};
      void deletePeakMemorySum() { this->peakMemorySum_ = nullptr;};
      inline double getPeakMemorySum() const { DARABONBA_PTR_GET_DEFAULT(peakMemorySum_, 0.0) };
      inline PatternDetails& setPeakMemorySum(double peakMemorySum) { DARABONBA_PTR_SET_VALUE(peakMemorySum_, peakMemorySum) };


      // queryCount Field Functions 
      bool hasQueryCount() const { return this->queryCount_ != nullptr;};
      void deleteQueryCount() { this->queryCount_ = nullptr;};
      inline int64_t getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
      inline PatternDetails& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


      // queryTimePercentage Field Functions 
      bool hasQueryTimePercentage() const { return this->queryTimePercentage_ != nullptr;};
      void deleteQueryTimePercentage() { this->queryTimePercentage_ = nullptr;};
      inline double getQueryTimePercentage() const { DARABONBA_PTR_GET_DEFAULT(queryTimePercentage_, 0.0) };
      inline PatternDetails& setQueryTimePercentage(double queryTimePercentage) { DARABONBA_PTR_SET_VALUE(queryTimePercentage_, queryTimePercentage) };


      // queryTimeSum Field Functions 
      bool hasQueryTimeSum() const { return this->queryTimeSum_ != nullptr;};
      void deleteQueryTimeSum() { this->queryTimeSum_ = nullptr;};
      inline double getQueryTimeSum() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSum_, 0.0) };
      inline PatternDetails& setQueryTimeSum(double queryTimeSum) { DARABONBA_PTR_SET_VALUE(queryTimeSum_, queryTimeSum) };


      // SQLPattern Field Functions 
      bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
      void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
      inline string getSQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
      inline PatternDetails& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


      // scanCostPercentage Field Functions 
      bool hasScanCostPercentage() const { return this->scanCostPercentage_ != nullptr;};
      void deleteScanCostPercentage() { this->scanCostPercentage_ = nullptr;};
      inline double getScanCostPercentage() const { DARABONBA_PTR_GET_DEFAULT(scanCostPercentage_, 0.0) };
      inline PatternDetails& setScanCostPercentage(double scanCostPercentage) { DARABONBA_PTR_SET_VALUE(scanCostPercentage_, scanCostPercentage) };


      // scanCostSum Field Functions 
      bool hasScanCostSum() const { return this->scanCostSum_ != nullptr;};
      void deleteScanCostSum() { this->scanCostSum_ = nullptr;};
      inline double getScanCostSum() const { DARABONBA_PTR_GET_DEFAULT(scanCostSum_, 0.0) };
      inline PatternDetails& setScanCostSum(double scanCostSum) { DARABONBA_PTR_SET_VALUE(scanCostSum_, scanCostSum) };


      // scanSizePercentage Field Functions 
      bool hasScanSizePercentage() const { return this->scanSizePercentage_ != nullptr;};
      void deleteScanSizePercentage() { this->scanSizePercentage_ = nullptr;};
      inline double getScanSizePercentage() const { DARABONBA_PTR_GET_DEFAULT(scanSizePercentage_, 0.0) };
      inline PatternDetails& setScanSizePercentage(double scanSizePercentage) { DARABONBA_PTR_SET_VALUE(scanSizePercentage_, scanSizePercentage) };


      // scanSizeSum Field Functions 
      bool hasScanSizeSum() const { return this->scanSizeSum_ != nullptr;};
      void deleteScanSizeSum() { this->scanSizeSum_ = nullptr;};
      inline double getScanSizeSum() const { DARABONBA_PTR_GET_DEFAULT(scanSizeSum_, 0.0) };
      inline PatternDetails& setScanSizeSum(double scanSizeSum) { DARABONBA_PTR_SET_VALUE(scanSizeSum_, scanSizeSum) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline string getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
      inline PatternDetails& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline PatternDetails& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The IP address of the SQL client that commits the SQL pattern.
      shared_ptr<string> accessIp_ {};
      // The average execution duration of the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<double> averageExecutionTime_ {};
      shared_ptr<double> averageOperatorCost_ {};
      // The average peak memory usage of the SQL pattern within the query time range. Unit: bytes.
      shared_ptr<double> averagePeakMemory_ {};
      // The average total amount of time consumed by the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<double> averageQueryTime_ {};
      shared_ptr<double> averageScanCost_ {};
      // The average amount of data scanned based on the SQL pattern within the query time range. Unit: bytes.
      shared_ptr<double> averageScanSize_ {};
      // Indicates whether the execution of the SQL pattern can be intercepted. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  Only SELECT and INSERT statements can be intercepted.
      shared_ptr<bool> blockable_ {};
      // The number of failed queries executed in association with the SQL pattern within the query time range.
      shared_ptr<int64_t> failedCount_ {};
      // The maximum execution duration of the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<int64_t> maxExecutionTime_ {};
      shared_ptr<double> maxOperatorCost_ {};
      // The maximum peak memory usage of the SQL pattern within the query time range. Unit: bytes.
      shared_ptr<int64_t> maxPeakMemory_ {};
      // The maximum total amount of time consumed by the SQL pattern within the query time range. Unit: milliseconds.
      shared_ptr<int64_t> maxQueryTime_ {};
      shared_ptr<double> maxScanCost_ {};
      // The maximum amount of data scanned based on the SQL pattern within the query time range. Unit: bytes.
      shared_ptr<int64_t> maxScanSize_ {};
      shared_ptr<double> operatorCostPercentage_ {};
      shared_ptr<double> operatorCostSum_ {};
      // The earliest commit time of the SQL pattern within the query time range.
      shared_ptr<string> patternCreationTime_ {};
      // The ID of the SQL pattern.
      shared_ptr<string> patternId_ {};
      shared_ptr<double> peakMemoryPercentage_ {};
      shared_ptr<double> peakMemorySum_ {};
      // The number of queries executed in association with the SQL pattern within the query time range.
      shared_ptr<int64_t> queryCount_ {};
      shared_ptr<double> queryTimePercentage_ {};
      shared_ptr<double> queryTimeSum_ {};
      // The statement of the SQL pattern.
      shared_ptr<string> SQLPattern_ {};
      shared_ptr<double> scanCostPercentage_ {};
      shared_ptr<double> scanCostSum_ {};
      shared_ptr<double> scanSizePercentage_ {};
      shared_ptr<double> scanSizeSum_ {};
      // The tables scanned based on the SQL pattern.
      shared_ptr<string> tables_ {};
      // The name of the database account that is used to commit the SQL pattern.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->patternDetails_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSQLPatternsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSQLPatternsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSQLPatternsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patternDetails Field Functions 
    bool hasPatternDetails() const { return this->patternDetails_ != nullptr;};
    void deletePatternDetails() { this->patternDetails_ = nullptr;};
    inline const vector<DescribeSQLPatternsResponseBody::PatternDetails> & getPatternDetails() const { DARABONBA_PTR_GET_CONST(patternDetails_, vector<DescribeSQLPatternsResponseBody::PatternDetails>) };
    inline vector<DescribeSQLPatternsResponseBody::PatternDetails> getPatternDetails() { DARABONBA_PTR_GET(patternDetails_, vector<DescribeSQLPatternsResponseBody::PatternDetails>) };
    inline DescribeSQLPatternsResponseBody& setPatternDetails(const vector<DescribeSQLPatternsResponseBody::PatternDetails> & patternDetails) { DARABONBA_PTR_SET_VALUE(patternDetails_, patternDetails) };
    inline DescribeSQLPatternsResponseBody& setPatternDetails(vector<DescribeSQLPatternsResponseBody::PatternDetails> && patternDetails) { DARABONBA_PTR_SET_RVALUE(patternDetails_, patternDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLPatternsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSQLPatternsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The queried SQL patterns.
    shared_ptr<vector<DescribeSQLPatternsResponseBody::PatternDetails>> patternDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
