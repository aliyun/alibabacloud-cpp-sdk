// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODYQUERYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODYQUERYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisRecordsResponseBodyQuerys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisRecordsResponseBodyQuerys& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EtlWriteRows, etlWriteRows_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_TO_JSON(PatternId, patternId_);
      DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(QueryProperties, queryProperties_);
      DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_TO_JSON(RcHost, rcHost_);
      DARABONBA_PTR_TO_JSON(ResourceCostRank, resourceCostRank_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(SQLTruncated, SQLTruncated_);
      DARABONBA_PTR_TO_JSON(SQLTruncatedThreshold, SQLTruncatedThreshold_);
      DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_TO_JSON(ScanSize, scanSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalPlanningTime, totalPlanningTime_);
      DARABONBA_PTR_TO_JSON(TotalStages, totalStages_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisRecordsResponseBodyQuerys& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EtlWriteRows, etlWriteRows_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(OutputDataSize, outputDataSize_);
      DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
      DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
      DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(QueryProperties, queryProperties_);
      DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_FROM_JSON(RcHost, rcHost_);
      DARABONBA_PTR_FROM_JSON(ResourceCostRank, resourceCostRank_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(SQLTruncated, SQLTruncated_);
      DARABONBA_PTR_FROM_JSON(SQLTruncatedThreshold, SQLTruncatedThreshold_);
      DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_FROM_JSON(ScanSize, scanSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalPlanningTime, totalPlanningTime_);
      DARABONBA_PTR_FROM_JSON(TotalStages, totalStages_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDiagnosisRecordsResponseBodyQuerys() = default ;
    DescribeDiagnosisRecordsResponseBodyQuerys(const DescribeDiagnosisRecordsResponseBodyQuerys &) = default ;
    DescribeDiagnosisRecordsResponseBodyQuerys(DescribeDiagnosisRecordsResponseBodyQuerys &&) = default ;
    DescribeDiagnosisRecordsResponseBodyQuerys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisRecordsResponseBodyQuerys() = default ;
    DescribeDiagnosisRecordsResponseBodyQuerys& operator=(const DescribeDiagnosisRecordsResponseBodyQuerys &) = default ;
    DescribeDiagnosisRecordsResponseBodyQuerys& operator=(DescribeDiagnosisRecordsResponseBodyQuerys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->cost_ != nullptr && this->database_ != nullptr && this->etlWriteRows_ != nullptr && this->executionTime_ != nullptr && this->outputDataSize_ != nullptr
        && this->outputRows_ != nullptr && this->patternId_ != nullptr && this->peakMemory_ != nullptr && this->processId_ != nullptr && this->queryProperties_ != nullptr
        && this->queueTime_ != nullptr && this->rcHost_ != nullptr && this->resourceCostRank_ != nullptr && this->resourceGroup_ != nullptr && this->SQL_ != nullptr
        && this->SQLTruncated_ != nullptr && this->SQLTruncatedThreshold_ != nullptr && this->scanRows_ != nullptr && this->scanSize_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->totalPlanningTime_ != nullptr && this->totalStages_ != nullptr && this->userName_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // etlWriteRows Field Functions 
    bool hasEtlWriteRows() const { return this->etlWriteRows_ != nullptr;};
    void deleteEtlWriteRows() { this->etlWriteRows_ = nullptr;};
    inline int64_t etlWriteRows() const { DARABONBA_PTR_GET_DEFAULT(etlWriteRows_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setEtlWriteRows(int64_t etlWriteRows) { DARABONBA_PTR_SET_VALUE(etlWriteRows_, etlWriteRows) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline int64_t executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setExecutionTime(int64_t executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // outputDataSize Field Functions 
    bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
    void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
    inline int64_t outputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // queryProperties Field Functions 
    bool hasQueryProperties() const { return this->queryProperties_ != nullptr;};
    void deleteQueryProperties() { this->queryProperties_ = nullptr;};
    inline const vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties> & queryProperties() const { DARABONBA_PTR_GET_CONST(queryProperties_, vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties>) };
    inline vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties> queryProperties() { DARABONBA_PTR_GET(queryProperties_, vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties>) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setQueryProperties(const vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties> & queryProperties) { DARABONBA_PTR_SET_VALUE(queryProperties_, queryProperties) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setQueryProperties(vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties> && queryProperties) { DARABONBA_PTR_SET_RVALUE(queryProperties_, queryProperties) };


    // queueTime Field Functions 
    bool hasQueueTime() const { return this->queueTime_ != nullptr;};
    void deleteQueueTime() { this->queueTime_ = nullptr;};
    inline int64_t queueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


    // rcHost Field Functions 
    bool hasRcHost() const { return this->rcHost_ != nullptr;};
    void deleteRcHost() { this->rcHost_ = nullptr;};
    inline string rcHost() const { DARABONBA_PTR_GET_DEFAULT(rcHost_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setRcHost(string rcHost) { DARABONBA_PTR_SET_VALUE(rcHost_, rcHost) };


    // resourceCostRank Field Functions 
    bool hasResourceCostRank() const { return this->resourceCostRank_ != nullptr;};
    void deleteResourceCostRank() { this->resourceCostRank_ = nullptr;};
    inline int32_t resourceCostRank() const { DARABONBA_PTR_GET_DEFAULT(resourceCostRank_, 0) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setResourceCostRank(int32_t resourceCostRank) { DARABONBA_PTR_SET_VALUE(resourceCostRank_, resourceCostRank) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // SQLTruncated Field Functions 
    bool hasSQLTruncated() const { return this->SQLTruncated_ != nullptr;};
    void deleteSQLTruncated() { this->SQLTruncated_ = nullptr;};
    inline bool SQLTruncated() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncated_, false) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setSQLTruncated(bool SQLTruncated) { DARABONBA_PTR_SET_VALUE(SQLTruncated_, SQLTruncated) };


    // SQLTruncatedThreshold Field Functions 
    bool hasSQLTruncatedThreshold() const { return this->SQLTruncatedThreshold_ != nullptr;};
    void deleteSQLTruncatedThreshold() { this->SQLTruncatedThreshold_ = nullptr;};
    inline int64_t SQLTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncatedThreshold_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setSQLTruncatedThreshold(int64_t SQLTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(SQLTruncatedThreshold_, SQLTruncatedThreshold) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // scanSize Field Functions 
    bool hasScanSize() const { return this->scanSize_ != nullptr;};
    void deleteScanSize() { this->scanSize_ = nullptr;};
    inline int64_t scanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalPlanningTime Field Functions 
    bool hasTotalPlanningTime() const { return this->totalPlanningTime_ != nullptr;};
    void deleteTotalPlanningTime() { this->totalPlanningTime_ = nullptr;};
    inline int64_t totalPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(totalPlanningTime_, 0L) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setTotalPlanningTime(int64_t totalPlanningTime) { DARABONBA_PTR_SET_VALUE(totalPlanningTime_, totalPlanningTime) };


    // totalStages Field Functions 
    bool hasTotalStages() const { return this->totalStages_ != nullptr;};
    void deleteTotalStages() { this->totalStages_ = nullptr;};
    inline int32_t totalStages() const { DARABONBA_PTR_GET_DEFAULT(totalStages_, 0) };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setTotalStages(int32_t totalStages) { DARABONBA_PTR_SET_VALUE(totalStages_, totalStages) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDiagnosisRecordsResponseBodyQuerys& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The source IP address.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The total execution duration. Unit: milliseconds.
    // 
    // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
    std::shared_ptr<int64_t> cost_ = nullptr;
    // The name of the database on which the SQL statement is executed.
    std::shared_ptr<string> database_ = nullptr;
    // The number of rows written to the table by an extract-transform-load (ETL) job.
    std::shared_ptr<int64_t> etlWriteRows_ = nullptr;
    // The execution duration. Unit: milliseconds.
    std::shared_ptr<int64_t> executionTime_ = nullptr;
    // The amount of returned data. Unit: bytes.
    std::shared_ptr<int64_t> outputDataSize_ = nullptr;
    // The number of rows returned.
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    std::shared_ptr<string> patternId_ = nullptr;
    // The peak memory. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The query ID.
    std::shared_ptr<string> processId_ = nullptr;
    // The query properties.
    // 
    // >  For information about common properties, see [Config and hint configuration parameters](https://help.aliyun.com/document_detail/408955.html).
    std::shared_ptr<vector<Models::DescribeDiagnosisRecordsResponseBodyQuerysQueryProperties>> queryProperties_ = nullptr;
    // The amount of time that is consumed for queuing. Unit: milliseconds.
    std::shared_ptr<int64_t> queueTime_ = nullptr;
    // The IP address and port number of the AnalyticDB for MySQL frontend node on which the SQL statement is executed.
    std::shared_ptr<string> rcHost_ = nullptr;
    // The execution duration rank of operators that are used in the SQL statement.
    // 
    // >  This parameter is returned only for SQL statements whose `Status` parameter is `running`.
    std::shared_ptr<int32_t> resourceCostRank_ = nullptr;
    // The resource group to which the SQL statement belongs.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The queried SQL statement.
    // 
    // >  For performance considerations, an SQL statement cannot exceed 5,120 characters in length. Otherwise, the SQL statement is truncated. You can call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/308212.html) operation to download the information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster, including the complete SQL statements.
    std::shared_ptr<string> SQL_ = nullptr;
    // Indicates whether the SQL statement is truncated. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> SQLTruncated_ = nullptr;
    // The maximum length of the SQL statement. 5120 is returned. Unit: characters. SQL statements that exceed this limit are truncated.
    std::shared_ptr<int64_t> SQLTruncatedThreshold_ = nullptr;
    // The number of rows scanned.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The amount of scanned data. Unit: bytes.
    std::shared_ptr<int64_t> scanSize_ = nullptr;
    // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The state of the SQL statement. Valid values:
    // 
    // *   **running**
    // *   **finished**
    // *   **failed**
    std::shared_ptr<string> status_ = nullptr;
    // The amount of time that is consumed to generate an execution plan. Unit: milliseconds.
    std::shared_ptr<int64_t> totalPlanningTime_ = nullptr;
    // The total number of stages generated.
    std::shared_ptr<int32_t> totalStages_ = nullptr;
    // The username that is used to execute the SQL statements.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
