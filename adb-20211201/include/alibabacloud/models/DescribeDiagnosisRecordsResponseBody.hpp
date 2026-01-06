// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSRESPONSEBODY_HPP_
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
  class DescribeDiagnosisRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Querys, querys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Querys, querys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiagnosisRecordsResponseBody() = default ;
    DescribeDiagnosisRecordsResponseBody(const DescribeDiagnosisRecordsResponseBody &) = default ;
    DescribeDiagnosisRecordsResponseBody(DescribeDiagnosisRecordsResponseBody &&) = default ;
    DescribeDiagnosisRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisRecordsResponseBody() = default ;
    DescribeDiagnosisRecordsResponseBody& operator=(const DescribeDiagnosisRecordsResponseBody &) = default ;
    DescribeDiagnosisRecordsResponseBody& operator=(DescribeDiagnosisRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Querys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Querys& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Querys& obj) { 
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
      Querys() = default ;
      Querys(const Querys &) = default ;
      Querys(Querys &&) = default ;
      Querys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Querys() = default ;
      Querys& operator=(const Querys &) = default ;
      Querys& operator=(Querys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryProperties& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, QueryProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        QueryProperties() = default ;
        QueryProperties(const QueryProperties &) = default ;
        QueryProperties(QueryProperties &&) = default ;
        QueryProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryProperties() = default ;
        QueryProperties& operator=(const QueryProperties &) = default ;
        QueryProperties& operator=(QueryProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QueryProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline QueryProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->cost_ == nullptr && this->database_ == nullptr && this->etlWriteRows_ == nullptr && this->executionTime_ == nullptr && this->outputDataSize_ == nullptr
        && this->outputRows_ == nullptr && this->patternId_ == nullptr && this->peakMemory_ == nullptr && this->processId_ == nullptr && this->queryProperties_ == nullptr
        && this->queueTime_ == nullptr && this->rcHost_ == nullptr && this->resourceCostRank_ == nullptr && this->resourceGroup_ == nullptr && this->SQL_ == nullptr
        && this->SQLTruncated_ == nullptr && this->SQLTruncatedThreshold_ == nullptr && this->scanRows_ == nullptr && this->scanSize_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->totalPlanningTime_ == nullptr && this->totalStages_ == nullptr && this->userName_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Querys& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
      inline Querys& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Querys& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // etlWriteRows Field Functions 
      bool hasEtlWriteRows() const { return this->etlWriteRows_ != nullptr;};
      void deleteEtlWriteRows() { this->etlWriteRows_ = nullptr;};
      inline int64_t getEtlWriteRows() const { DARABONBA_PTR_GET_DEFAULT(etlWriteRows_, 0L) };
      inline Querys& setEtlWriteRows(int64_t etlWriteRows) { DARABONBA_PTR_SET_VALUE(etlWriteRows_, etlWriteRows) };


      // executionTime Field Functions 
      bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
      void deleteExecutionTime() { this->executionTime_ = nullptr;};
      inline int64_t getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, 0L) };
      inline Querys& setExecutionTime(int64_t executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


      // outputDataSize Field Functions 
      bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
      void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
      inline int64_t getOutputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
      inline Querys& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline Querys& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // patternId Field Functions 
      bool hasPatternId() const { return this->patternId_ != nullptr;};
      void deletePatternId() { this->patternId_ = nullptr;};
      inline string getPatternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
      inline Querys& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline Querys& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Querys& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // queryProperties Field Functions 
      bool hasQueryProperties() const { return this->queryProperties_ != nullptr;};
      void deleteQueryProperties() { this->queryProperties_ = nullptr;};
      inline const vector<Querys::QueryProperties> & getQueryProperties() const { DARABONBA_PTR_GET_CONST(queryProperties_, vector<Querys::QueryProperties>) };
      inline vector<Querys::QueryProperties> getQueryProperties() { DARABONBA_PTR_GET(queryProperties_, vector<Querys::QueryProperties>) };
      inline Querys& setQueryProperties(const vector<Querys::QueryProperties> & queryProperties) { DARABONBA_PTR_SET_VALUE(queryProperties_, queryProperties) };
      inline Querys& setQueryProperties(vector<Querys::QueryProperties> && queryProperties) { DARABONBA_PTR_SET_RVALUE(queryProperties_, queryProperties) };


      // queueTime Field Functions 
      bool hasQueueTime() const { return this->queueTime_ != nullptr;};
      void deleteQueueTime() { this->queueTime_ = nullptr;};
      inline int64_t getQueueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
      inline Querys& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


      // rcHost Field Functions 
      bool hasRcHost() const { return this->rcHost_ != nullptr;};
      void deleteRcHost() { this->rcHost_ = nullptr;};
      inline string getRcHost() const { DARABONBA_PTR_GET_DEFAULT(rcHost_, "") };
      inline Querys& setRcHost(string rcHost) { DARABONBA_PTR_SET_VALUE(rcHost_, rcHost) };


      // resourceCostRank Field Functions 
      bool hasResourceCostRank() const { return this->resourceCostRank_ != nullptr;};
      void deleteResourceCostRank() { this->resourceCostRank_ = nullptr;};
      inline int32_t getResourceCostRank() const { DARABONBA_PTR_GET_DEFAULT(resourceCostRank_, 0) };
      inline Querys& setResourceCostRank(int32_t resourceCostRank) { DARABONBA_PTR_SET_VALUE(resourceCostRank_, resourceCostRank) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline Querys& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // SQL Field Functions 
      bool hasSQL() const { return this->SQL_ != nullptr;};
      void deleteSQL() { this->SQL_ = nullptr;};
      inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
      inline Querys& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


      // SQLTruncated Field Functions 
      bool hasSQLTruncated() const { return this->SQLTruncated_ != nullptr;};
      void deleteSQLTruncated() { this->SQLTruncated_ = nullptr;};
      inline bool getSQLTruncated() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncated_, false) };
      inline Querys& setSQLTruncated(bool SQLTruncated) { DARABONBA_PTR_SET_VALUE(SQLTruncated_, SQLTruncated) };


      // SQLTruncatedThreshold Field Functions 
      bool hasSQLTruncatedThreshold() const { return this->SQLTruncatedThreshold_ != nullptr;};
      void deleteSQLTruncatedThreshold() { this->SQLTruncatedThreshold_ = nullptr;};
      inline int64_t getSQLTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(SQLTruncatedThreshold_, 0L) };
      inline Querys& setSQLTruncatedThreshold(int64_t SQLTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(SQLTruncatedThreshold_, SQLTruncatedThreshold) };


      // scanRows Field Functions 
      bool hasScanRows() const { return this->scanRows_ != nullptr;};
      void deleteScanRows() { this->scanRows_ = nullptr;};
      inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
      inline Querys& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


      // scanSize Field Functions 
      bool hasScanSize() const { return this->scanSize_ != nullptr;};
      void deleteScanSize() { this->scanSize_ = nullptr;};
      inline int64_t getScanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
      inline Querys& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Querys& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Querys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalPlanningTime Field Functions 
      bool hasTotalPlanningTime() const { return this->totalPlanningTime_ != nullptr;};
      void deleteTotalPlanningTime() { this->totalPlanningTime_ = nullptr;};
      inline int64_t getTotalPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(totalPlanningTime_, 0L) };
      inline Querys& setTotalPlanningTime(int64_t totalPlanningTime) { DARABONBA_PTR_SET_VALUE(totalPlanningTime_, totalPlanningTime) };


      // totalStages Field Functions 
      bool hasTotalStages() const { return this->totalStages_ != nullptr;};
      void deleteTotalStages() { this->totalStages_ = nullptr;};
      inline int32_t getTotalStages() const { DARABONBA_PTR_GET_DEFAULT(totalStages_, 0) };
      inline Querys& setTotalStages(int32_t totalStages) { DARABONBA_PTR_SET_VALUE(totalStages_, totalStages) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Querys& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The source IP address.
      shared_ptr<string> clientIp_ {};
      // The total execution duration. Unit: milliseconds.
      // 
      // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
      shared_ptr<int64_t> cost_ {};
      // The name of the database on which the SQL statement is executed.
      shared_ptr<string> database_ {};
      // The number of rows written to the table by an extract-transform-load (ETL) job.
      shared_ptr<int64_t> etlWriteRows_ {};
      // The execution duration. Unit: milliseconds.
      shared_ptr<int64_t> executionTime_ {};
      // The amount of returned data. Unit: bytes.
      shared_ptr<int64_t> outputDataSize_ {};
      // The number of rows returned.
      shared_ptr<int64_t> outputRows_ {};
      shared_ptr<string> patternId_ {};
      // The peak memory. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The query ID.
      shared_ptr<string> processId_ {};
      // The query properties.
      // 
      // >  For information about common properties, see [Config and hint configuration parameters](https://help.aliyun.com/document_detail/408955.html).
      shared_ptr<vector<Querys::QueryProperties>> queryProperties_ {};
      // The amount of time that is consumed for queuing. Unit: milliseconds.
      shared_ptr<int64_t> queueTime_ {};
      // The IP address and port number of the AnalyticDB for MySQL frontend node on which the SQL statement is executed.
      shared_ptr<string> rcHost_ {};
      // The execution duration rank of operators that are used in the SQL statement.
      // 
      // >  This parameter is returned only for SQL statements whose `Status` parameter is `running`.
      shared_ptr<int32_t> resourceCostRank_ {};
      // The resource group to which the SQL statement belongs.
      shared_ptr<string> resourceGroup_ {};
      // The queried SQL statement.
      // 
      // >  For performance considerations, an SQL statement cannot exceed 5,120 characters in length. Otherwise, the SQL statement is truncated. You can call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/308212.html) operation to download the information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster, including the complete SQL statements.
      shared_ptr<string> SQL_ {};
      // Indicates whether the SQL statement is truncated. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> SQLTruncated_ {};
      // The maximum length of the SQL statement. 5120 is returned. Unit: characters. SQL statements that exceed this limit are truncated.
      shared_ptr<int64_t> SQLTruncatedThreshold_ {};
      // The number of rows scanned.
      shared_ptr<int64_t> scanRows_ {};
      // The amount of scanned data. Unit: bytes.
      shared_ptr<int64_t> scanSize_ {};
      // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The state of the SQL statement. Valid values:
      // 
      // *   **running**
      // *   **finished**
      // *   **failed**
      shared_ptr<string> status_ {};
      // The amount of time that is consumed to generate an execution plan. Unit: milliseconds.
      shared_ptr<int64_t> totalPlanningTime_ {};
      // The total number of stages generated.
      shared_ptr<int32_t> totalStages_ {};
      // The username that is used to execute the SQL statements.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->querys_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiagnosisRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiagnosisRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // querys Field Functions 
    bool hasQuerys() const { return this->querys_ != nullptr;};
    void deleteQuerys() { this->querys_ = nullptr;};
    inline const vector<DescribeDiagnosisRecordsResponseBody::Querys> & getQuerys() const { DARABONBA_PTR_GET_CONST(querys_, vector<DescribeDiagnosisRecordsResponseBody::Querys>) };
    inline vector<DescribeDiagnosisRecordsResponseBody::Querys> getQuerys() { DARABONBA_PTR_GET(querys_, vector<DescribeDiagnosisRecordsResponseBody::Querys>) };
    inline DescribeDiagnosisRecordsResponseBody& setQuerys(const vector<DescribeDiagnosisRecordsResponseBody::Querys> & querys) { DARABONBA_PTR_SET_VALUE(querys_, querys) };
    inline DescribeDiagnosisRecordsResponseBody& setQuerys(vector<DescribeDiagnosisRecordsResponseBody::Querys> && querys) { DARABONBA_PTR_SET_RVALUE(querys_, querys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiagnosisRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The queried SQL statements.
    shared_ptr<vector<DescribeDiagnosisRecordsResponseBody::Querys>> querys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
