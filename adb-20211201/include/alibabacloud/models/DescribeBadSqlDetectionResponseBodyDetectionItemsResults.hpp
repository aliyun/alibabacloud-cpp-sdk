// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBadSqlDetectionResponseBodyDetectionItemsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBadSqlDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(DiagnosisResults, diagnosisResults_);
      DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_TO_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_TO_JSON(PatternId, patternId_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(ScanSize, scanSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalStages, totalStages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBadSqlDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(DiagnosisResults, diagnosisResults_);
      DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
      DARABONBA_PTR_FROM_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(ScanSize, scanSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalStages, totalStages_);
    };
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults(const DescribeBadSqlDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults(DescribeBadSqlDetectionResponseBodyDetectionItemsResults &&) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBadSqlDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults& operator=(const DescribeBadSqlDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeBadSqlDetectionResponseBodyDetectionItemsResults& operator=(DescribeBadSqlDetectionResponseBodyDetectionItemsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cost_ != nullptr
        && this->diagnosisResults_ != nullptr && this->operatorCost_ != nullptr && this->outputDataSize_ != nullptr && this->patternId_ != nullptr && this->peakMemory_ != nullptr
        && this->processId_ != nullptr && this->SQL_ != nullptr && this->scanSize_ != nullptr && this->startTime_ != nullptr && this->totalStages_ != nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // diagnosisResults Field Functions 
    bool hasDiagnosisResults() const { return this->diagnosisResults_ != nullptr;};
    void deleteDiagnosisResults() { this->diagnosisResults_ = nullptr;};
    inline const vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults> & diagnosisResults() const { DARABONBA_PTR_GET_CONST(diagnosisResults_, vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults>) };
    inline vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults> diagnosisResults() { DARABONBA_PTR_GET(diagnosisResults_, vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults>) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setDiagnosisResults(const vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults> & diagnosisResults) { DARABONBA_PTR_SET_VALUE(diagnosisResults_, diagnosisResults) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setDiagnosisResults(vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults> && diagnosisResults) { DARABONBA_PTR_SET_RVALUE(diagnosisResults_, diagnosisResults) };


    // operatorCost Field Functions 
    bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
    void deleteOperatorCost() { this->operatorCost_ = nullptr;};
    inline int64_t operatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


    // outputDataSize Field Functions 
    bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
    void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
    inline int64_t outputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // scanSize Field Functions 
    bool hasScanSize() const { return this->scanSize_ != nullptr;};
    void deleteScanSize() { this->scanSize_ = nullptr;};
    inline int64_t scanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalStages Field Functions 
    bool hasTotalStages() const { return this->totalStages_ != nullptr;};
    void deleteTotalStages() { this->totalStages_ = nullptr;};
    inline int32_t totalStages() const { DARABONBA_PTR_GET_DEFAULT(totalStages_, 0) };
    inline DescribeBadSqlDetectionResponseBodyDetectionItemsResults& setTotalStages(int32_t totalStages) { DARABONBA_PTR_SET_VALUE(totalStages_, totalStages) };


  protected:
    // The total execution duration. Unit: milliseconds.
    // 
    // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
    std::shared_ptr<int64_t> cost_ = nullptr;
    // The diagnostic result items.
    std::shared_ptr<vector<Models::DescribeBadSqlDetectionResponseBodyDetectionItemsResultsDiagnosisResults>> diagnosisResults_ = nullptr;
    // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
    std::shared_ptr<int64_t> operatorCost_ = nullptr;
    // The amount of returned data. Unit: bytes.
    std::shared_ptr<int64_t> outputDataSize_ = nullptr;
    // The SQL pattern ID.
    std::shared_ptr<string> patternId_ = nullptr;
    // The peak memory. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The query ID.
    std::shared_ptr<string> processId_ = nullptr;
    // The SQL statement.
    // 
    // >  For performance considerations, an SQL statement cannot exceed 5,120 characters in length. Otherwise, the SQL statement is truncated. You can call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/308212.html) operation to download the information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster, including the complete SQL statements.
    std::shared_ptr<string> SQL_ = nullptr;
    // The amount of scanned data. Unit: bytes.
    std::shared_ptr<int64_t> scanSize_ = nullptr;
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total number of stages generated.
    std::shared_ptr<int32_t> totalStages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
