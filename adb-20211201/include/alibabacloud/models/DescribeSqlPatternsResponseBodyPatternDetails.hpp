// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNSRESPONSEBODYPATTERNDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNSRESPONSEBODYPATTERNDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSQLPatternsResponseBodyPatternDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPatternsResponseBodyPatternDetails& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSQLPatternsResponseBodyPatternDetails& obj) { 
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
    DescribeSQLPatternsResponseBodyPatternDetails() = default ;
    DescribeSQLPatternsResponseBodyPatternDetails(const DescribeSQLPatternsResponseBodyPatternDetails &) = default ;
    DescribeSQLPatternsResponseBodyPatternDetails(DescribeSQLPatternsResponseBodyPatternDetails &&) = default ;
    DescribeSQLPatternsResponseBodyPatternDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPatternsResponseBodyPatternDetails() = default ;
    DescribeSQLPatternsResponseBodyPatternDetails& operator=(const DescribeSQLPatternsResponseBodyPatternDetails &) = default ;
    DescribeSQLPatternsResponseBodyPatternDetails& operator=(DescribeSQLPatternsResponseBodyPatternDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessIp_ == nullptr
        && return this->averageExecutionTime_ == nullptr && return this->averageOperatorCost_ == nullptr && return this->averagePeakMemory_ == nullptr && return this->averageQueryTime_ == nullptr && return this->averageScanCost_ == nullptr
        && return this->averageScanSize_ == nullptr && return this->blockable_ == nullptr && return this->failedCount_ == nullptr && return this->maxExecutionTime_ == nullptr && return this->maxOperatorCost_ == nullptr
        && return this->maxPeakMemory_ == nullptr && return this->maxQueryTime_ == nullptr && return this->maxScanCost_ == nullptr && return this->maxScanSize_ == nullptr && return this->operatorCostPercentage_ == nullptr
        && return this->operatorCostSum_ == nullptr && return this->patternCreationTime_ == nullptr && return this->patternId_ == nullptr && return this->peakMemoryPercentage_ == nullptr && return this->peakMemorySum_ == nullptr
        && return this->queryCount_ == nullptr && return this->queryTimePercentage_ == nullptr && return this->queryTimeSum_ == nullptr && return this->SQLPattern_ == nullptr && return this->scanCostPercentage_ == nullptr
        && return this->scanCostSum_ == nullptr && return this->scanSizePercentage_ == nullptr && return this->scanSizeSum_ == nullptr && return this->tables_ == nullptr && return this->user_ == nullptr; };
    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string accessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // averageExecutionTime Field Functions 
    bool hasAverageExecutionTime() const { return this->averageExecutionTime_ != nullptr;};
    void deleteAverageExecutionTime() { this->averageExecutionTime_ = nullptr;};
    inline double averageExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(averageExecutionTime_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAverageExecutionTime(double averageExecutionTime) { DARABONBA_PTR_SET_VALUE(averageExecutionTime_, averageExecutionTime) };


    // averageOperatorCost Field Functions 
    bool hasAverageOperatorCost() const { return this->averageOperatorCost_ != nullptr;};
    void deleteAverageOperatorCost() { this->averageOperatorCost_ = nullptr;};
    inline double averageOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(averageOperatorCost_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAverageOperatorCost(double averageOperatorCost) { DARABONBA_PTR_SET_VALUE(averageOperatorCost_, averageOperatorCost) };


    // averagePeakMemory Field Functions 
    bool hasAveragePeakMemory() const { return this->averagePeakMemory_ != nullptr;};
    void deleteAveragePeakMemory() { this->averagePeakMemory_ = nullptr;};
    inline double averagePeakMemory() const { DARABONBA_PTR_GET_DEFAULT(averagePeakMemory_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAveragePeakMemory(double averagePeakMemory) { DARABONBA_PTR_SET_VALUE(averagePeakMemory_, averagePeakMemory) };


    // averageQueryTime Field Functions 
    bool hasAverageQueryTime() const { return this->averageQueryTime_ != nullptr;};
    void deleteAverageQueryTime() { this->averageQueryTime_ = nullptr;};
    inline double averageQueryTime() const { DARABONBA_PTR_GET_DEFAULT(averageQueryTime_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAverageQueryTime(double averageQueryTime) { DARABONBA_PTR_SET_VALUE(averageQueryTime_, averageQueryTime) };


    // averageScanCost Field Functions 
    bool hasAverageScanCost() const { return this->averageScanCost_ != nullptr;};
    void deleteAverageScanCost() { this->averageScanCost_ = nullptr;};
    inline double averageScanCost() const { DARABONBA_PTR_GET_DEFAULT(averageScanCost_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAverageScanCost(double averageScanCost) { DARABONBA_PTR_SET_VALUE(averageScanCost_, averageScanCost) };


    // averageScanSize Field Functions 
    bool hasAverageScanSize() const { return this->averageScanSize_ != nullptr;};
    void deleteAverageScanSize() { this->averageScanSize_ = nullptr;};
    inline double averageScanSize() const { DARABONBA_PTR_GET_DEFAULT(averageScanSize_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setAverageScanSize(double averageScanSize) { DARABONBA_PTR_SET_VALUE(averageScanSize_, averageScanSize) };


    // blockable Field Functions 
    bool hasBlockable() const { return this->blockable_ != nullptr;};
    void deleteBlockable() { this->blockable_ = nullptr;};
    inline bool blockable() const { DARABONBA_PTR_GET_DEFAULT(blockable_, false) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setBlockable(bool blockable) { DARABONBA_PTR_SET_VALUE(blockable_, blockable) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // maxExecutionTime Field Functions 
    bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
    void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
    inline int64_t maxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxExecutionTime(int64_t maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


    // maxOperatorCost Field Functions 
    bool hasMaxOperatorCost() const { return this->maxOperatorCost_ != nullptr;};
    void deleteMaxOperatorCost() { this->maxOperatorCost_ = nullptr;};
    inline double maxOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(maxOperatorCost_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxOperatorCost(double maxOperatorCost) { DARABONBA_PTR_SET_VALUE(maxOperatorCost_, maxOperatorCost) };


    // maxPeakMemory Field Functions 
    bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
    void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
    inline int64_t maxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxPeakMemory(int64_t maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


    // maxQueryTime Field Functions 
    bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
    void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
    inline int64_t maxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxQueryTime(int64_t maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


    // maxScanCost Field Functions 
    bool hasMaxScanCost() const { return this->maxScanCost_ != nullptr;};
    void deleteMaxScanCost() { this->maxScanCost_ = nullptr;};
    inline double maxScanCost() const { DARABONBA_PTR_GET_DEFAULT(maxScanCost_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxScanCost(double maxScanCost) { DARABONBA_PTR_SET_VALUE(maxScanCost_, maxScanCost) };


    // maxScanSize Field Functions 
    bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
    void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
    inline int64_t maxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


    // operatorCostPercentage Field Functions 
    bool hasOperatorCostPercentage() const { return this->operatorCostPercentage_ != nullptr;};
    void deleteOperatorCostPercentage() { this->operatorCostPercentage_ = nullptr;};
    inline double operatorCostPercentage() const { DARABONBA_PTR_GET_DEFAULT(operatorCostPercentage_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setOperatorCostPercentage(double operatorCostPercentage) { DARABONBA_PTR_SET_VALUE(operatorCostPercentage_, operatorCostPercentage) };


    // operatorCostSum Field Functions 
    bool hasOperatorCostSum() const { return this->operatorCostSum_ != nullptr;};
    void deleteOperatorCostSum() { this->operatorCostSum_ = nullptr;};
    inline double operatorCostSum() const { DARABONBA_PTR_GET_DEFAULT(operatorCostSum_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setOperatorCostSum(double operatorCostSum) { DARABONBA_PTR_SET_VALUE(operatorCostSum_, operatorCostSum) };


    // patternCreationTime Field Functions 
    bool hasPatternCreationTime() const { return this->patternCreationTime_ != nullptr;};
    void deletePatternCreationTime() { this->patternCreationTime_ = nullptr;};
    inline string patternCreationTime() const { DARABONBA_PTR_GET_DEFAULT(patternCreationTime_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setPatternCreationTime(string patternCreationTime) { DARABONBA_PTR_SET_VALUE(patternCreationTime_, patternCreationTime) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // peakMemoryPercentage Field Functions 
    bool hasPeakMemoryPercentage() const { return this->peakMemoryPercentage_ != nullptr;};
    void deletePeakMemoryPercentage() { this->peakMemoryPercentage_ = nullptr;};
    inline double peakMemoryPercentage() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryPercentage_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setPeakMemoryPercentage(double peakMemoryPercentage) { DARABONBA_PTR_SET_VALUE(peakMemoryPercentage_, peakMemoryPercentage) };


    // peakMemorySum Field Functions 
    bool hasPeakMemorySum() const { return this->peakMemorySum_ != nullptr;};
    void deletePeakMemorySum() { this->peakMemorySum_ = nullptr;};
    inline double peakMemorySum() const { DARABONBA_PTR_GET_DEFAULT(peakMemorySum_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setPeakMemorySum(double peakMemorySum) { DARABONBA_PTR_SET_VALUE(peakMemorySum_, peakMemorySum) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int64_t queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // queryTimePercentage Field Functions 
    bool hasQueryTimePercentage() const { return this->queryTimePercentage_ != nullptr;};
    void deleteQueryTimePercentage() { this->queryTimePercentage_ = nullptr;};
    inline double queryTimePercentage() const { DARABONBA_PTR_GET_DEFAULT(queryTimePercentage_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setQueryTimePercentage(double queryTimePercentage) { DARABONBA_PTR_SET_VALUE(queryTimePercentage_, queryTimePercentage) };


    // queryTimeSum Field Functions 
    bool hasQueryTimeSum() const { return this->queryTimeSum_ != nullptr;};
    void deleteQueryTimeSum() { this->queryTimeSum_ = nullptr;};
    inline double queryTimeSum() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSum_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setQueryTimeSum(double queryTimeSum) { DARABONBA_PTR_SET_VALUE(queryTimeSum_, queryTimeSum) };


    // SQLPattern Field Functions 
    bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
    void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
    inline string SQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


    // scanCostPercentage Field Functions 
    bool hasScanCostPercentage() const { return this->scanCostPercentage_ != nullptr;};
    void deleteScanCostPercentage() { this->scanCostPercentage_ = nullptr;};
    inline double scanCostPercentage() const { DARABONBA_PTR_GET_DEFAULT(scanCostPercentage_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setScanCostPercentage(double scanCostPercentage) { DARABONBA_PTR_SET_VALUE(scanCostPercentage_, scanCostPercentage) };


    // scanCostSum Field Functions 
    bool hasScanCostSum() const { return this->scanCostSum_ != nullptr;};
    void deleteScanCostSum() { this->scanCostSum_ = nullptr;};
    inline double scanCostSum() const { DARABONBA_PTR_GET_DEFAULT(scanCostSum_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setScanCostSum(double scanCostSum) { DARABONBA_PTR_SET_VALUE(scanCostSum_, scanCostSum) };


    // scanSizePercentage Field Functions 
    bool hasScanSizePercentage() const { return this->scanSizePercentage_ != nullptr;};
    void deleteScanSizePercentage() { this->scanSizePercentage_ = nullptr;};
    inline double scanSizePercentage() const { DARABONBA_PTR_GET_DEFAULT(scanSizePercentage_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setScanSizePercentage(double scanSizePercentage) { DARABONBA_PTR_SET_VALUE(scanSizePercentage_, scanSizePercentage) };


    // scanSizeSum Field Functions 
    bool hasScanSizeSum() const { return this->scanSizeSum_ != nullptr;};
    void deleteScanSizeSum() { this->scanSizeSum_ = nullptr;};
    inline double scanSizeSum() const { DARABONBA_PTR_GET_DEFAULT(scanSizeSum_, 0.0) };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setScanSizeSum(double scanSizeSum) { DARABONBA_PTR_SET_VALUE(scanSizeSum_, scanSizeSum) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSQLPatternsResponseBodyPatternDetails& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the SQL client that commits the SQL pattern.
    std::shared_ptr<string> accessIp_ = nullptr;
    // The average execution duration of the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<double> averageExecutionTime_ = nullptr;
    std::shared_ptr<double> averageOperatorCost_ = nullptr;
    // The average peak memory usage of the SQL pattern within the query time range. Unit: bytes.
    std::shared_ptr<double> averagePeakMemory_ = nullptr;
    // The average total amount of time consumed by the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<double> averageQueryTime_ = nullptr;
    std::shared_ptr<double> averageScanCost_ = nullptr;
    // The average amount of data scanned based on the SQL pattern within the query time range. Unit: bytes.
    std::shared_ptr<double> averageScanSize_ = nullptr;
    // Indicates whether the execution of the SQL pattern can be intercepted. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  Only SELECT and INSERT statements can be intercepted.
    std::shared_ptr<bool> blockable_ = nullptr;
    // The number of failed queries executed in association with the SQL pattern within the query time range.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // The maximum execution duration of the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<int64_t> maxExecutionTime_ = nullptr;
    std::shared_ptr<double> maxOperatorCost_ = nullptr;
    // The maximum peak memory usage of the SQL pattern within the query time range. Unit: bytes.
    std::shared_ptr<int64_t> maxPeakMemory_ = nullptr;
    // The maximum total amount of time consumed by the SQL pattern within the query time range. Unit: milliseconds.
    std::shared_ptr<int64_t> maxQueryTime_ = nullptr;
    std::shared_ptr<double> maxScanCost_ = nullptr;
    // The maximum amount of data scanned based on the SQL pattern within the query time range. Unit: bytes.
    std::shared_ptr<int64_t> maxScanSize_ = nullptr;
    std::shared_ptr<double> operatorCostPercentage_ = nullptr;
    std::shared_ptr<double> operatorCostSum_ = nullptr;
    // The earliest commit time of the SQL pattern within the query time range.
    std::shared_ptr<string> patternCreationTime_ = nullptr;
    // The ID of the SQL pattern.
    std::shared_ptr<string> patternId_ = nullptr;
    std::shared_ptr<double> peakMemoryPercentage_ = nullptr;
    std::shared_ptr<double> peakMemorySum_ = nullptr;
    // The number of queries executed in association with the SQL pattern within the query time range.
    std::shared_ptr<int64_t> queryCount_ = nullptr;
    std::shared_ptr<double> queryTimePercentage_ = nullptr;
    std::shared_ptr<double> queryTimeSum_ = nullptr;
    // The statement of the SQL pattern.
    std::shared_ptr<string> SQLPattern_ = nullptr;
    std::shared_ptr<double> scanCostPercentage_ = nullptr;
    std::shared_ptr<double> scanCostSum_ = nullptr;
    std::shared_ptr<double> scanSizePercentage_ = nullptr;
    std::shared_ptr<double> scanSizeSum_ = nullptr;
    // The tables scanned based on the SQL pattern.
    std::shared_ptr<string> tables_ = nullptr;
    // The name of the database account that is used to commit the SQL pattern.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
