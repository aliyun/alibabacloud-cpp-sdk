// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSEBODY_HPP_
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
  class DescribeBadSqlDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBadSqlDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBadSqlDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBadSqlDetectionResponseBody() = default ;
    DescribeBadSqlDetectionResponseBody(const DescribeBadSqlDetectionResponseBody &) = default ;
    DescribeBadSqlDetectionResponseBody(DescribeBadSqlDetectionResponseBody &&) = default ;
    DescribeBadSqlDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBadSqlDetectionResponseBody() = default ;
    DescribeBadSqlDetectionResponseBody& operator=(const DescribeBadSqlDetectionResponseBody &) = default ;
    DescribeBadSqlDetectionResponseBody& operator=(DescribeBadSqlDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
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
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiagnosisResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiagnosisResults& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
            DARABONBA_PTR_TO_JSON(StageId, stageId_);
          };
          friend void from_json(const Darabonba::Json& j, DiagnosisResults& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
            DARABONBA_PTR_FROM_JSON(StageId, stageId_);
          };
          DiagnosisResults() = default ;
          DiagnosisResults(const DiagnosisResults &) = default ;
          DiagnosisResults(DiagnosisResults &&) = default ;
          DiagnosisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiagnosisResults() = default ;
          DiagnosisResults& operator=(const DiagnosisResults &) = default ;
          DiagnosisResults& operator=(DiagnosisResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->detail_ == nullptr && this->operatorId_ == nullptr && this->stageId_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline DiagnosisResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
          inline DiagnosisResults& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


          // operatorId Field Functions 
          bool hasOperatorId() const { return this->operatorId_ != nullptr;};
          void deleteOperatorId() { this->operatorId_ = nullptr;};
          inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
          inline DiagnosisResults& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


          // stageId Field Functions 
          bool hasStageId() const { return this->stageId_ != nullptr;};
          void deleteStageId() { this->stageId_ = nullptr;};
          inline string getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
          inline DiagnosisResults& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


        protected:
          // The diagnostic code.
          shared_ptr<string> code_ {};
          // The information about the diagnostic result.
          shared_ptr<string> detail_ {};
          // The operator ID.
          shared_ptr<string> operatorId_ {};
          // The stage ID.
          shared_ptr<string> stageId_ {};
        };

        virtual bool empty() const override { return this->cost_ == nullptr
        && this->diagnosisResults_ == nullptr && this->operatorCost_ == nullptr && this->outputDataSize_ == nullptr && this->patternId_ == nullptr && this->peakMemory_ == nullptr
        && this->processId_ == nullptr && this->SQL_ == nullptr && this->scanSize_ == nullptr && this->startTime_ == nullptr && this->totalStages_ == nullptr; };
        // cost Field Functions 
        bool hasCost() const { return this->cost_ != nullptr;};
        void deleteCost() { this->cost_ = nullptr;};
        inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
        inline Results& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


        // diagnosisResults Field Functions 
        bool hasDiagnosisResults() const { return this->diagnosisResults_ != nullptr;};
        void deleteDiagnosisResults() { this->diagnosisResults_ = nullptr;};
        inline const vector<Results::DiagnosisResults> & getDiagnosisResults() const { DARABONBA_PTR_GET_CONST(diagnosisResults_, vector<Results::DiagnosisResults>) };
        inline vector<Results::DiagnosisResults> getDiagnosisResults() { DARABONBA_PTR_GET(diagnosisResults_, vector<Results::DiagnosisResults>) };
        inline Results& setDiagnosisResults(const vector<Results::DiagnosisResults> & diagnosisResults) { DARABONBA_PTR_SET_VALUE(diagnosisResults_, diagnosisResults) };
        inline Results& setDiagnosisResults(vector<Results::DiagnosisResults> && diagnosisResults) { DARABONBA_PTR_SET_RVALUE(diagnosisResults_, diagnosisResults) };


        // operatorCost Field Functions 
        bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
        void deleteOperatorCost() { this->operatorCost_ = nullptr;};
        inline int64_t getOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
        inline Results& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


        // outputDataSize Field Functions 
        bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
        void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
        inline int64_t getOutputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
        inline Results& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


        // patternId Field Functions 
        bool hasPatternId() const { return this->patternId_ != nullptr;};
        void deletePatternId() { this->patternId_ = nullptr;};
        inline string getPatternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
        inline Results& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


        // peakMemory Field Functions 
        bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
        void deletePeakMemory() { this->peakMemory_ = nullptr;};
        inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
        inline Results& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


        // processId Field Functions 
        bool hasProcessId() const { return this->processId_ != nullptr;};
        void deleteProcessId() { this->processId_ = nullptr;};
        inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
        inline Results& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


        // SQL Field Functions 
        bool hasSQL() const { return this->SQL_ != nullptr;};
        void deleteSQL() { this->SQL_ = nullptr;};
        inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
        inline Results& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


        // scanSize Field Functions 
        bool hasScanSize() const { return this->scanSize_ != nullptr;};
        void deleteScanSize() { this->scanSize_ = nullptr;};
        inline int64_t getScanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
        inline Results& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Results& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // totalStages Field Functions 
        bool hasTotalStages() const { return this->totalStages_ != nullptr;};
        void deleteTotalStages() { this->totalStages_ = nullptr;};
        inline int32_t getTotalStages() const { DARABONBA_PTR_GET_DEFAULT(totalStages_, 0) };
        inline Results& setTotalStages(int32_t totalStages) { DARABONBA_PTR_SET_VALUE(totalStages_, totalStages) };


      protected:
        // The total execution duration. Unit: milliseconds.
        // 
        // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
        shared_ptr<int64_t> cost_ {};
        // The diagnostic result items.
        shared_ptr<vector<Results::DiagnosisResults>> diagnosisResults_ {};
        // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
        shared_ptr<int64_t> operatorCost_ {};
        // The amount of returned data. Unit: bytes.
        shared_ptr<int64_t> outputDataSize_ {};
        // The SQL pattern ID.
        shared_ptr<string> patternId_ {};
        // The peak memory. Unit: bytes.
        shared_ptr<int64_t> peakMemory_ {};
        // The query ID.
        shared_ptr<string> processId_ {};
        // The SQL statement.
        // 
        // >  For performance considerations, an SQL statement cannot exceed 5,120 characters in length. Otherwise, the SQL statement is truncated. You can call the [DownloadDiagnosisRecords](https://help.aliyun.com/document_detail/308212.html) operation to download the information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster, including the complete SQL statements.
        shared_ptr<string> SQL_ {};
        // The amount of scanned data. Unit: bytes.
        shared_ptr<int64_t> scanSize_ {};
        // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
        shared_ptr<string> startTime_ {};
        // The total number of stages generated.
        shared_ptr<int32_t> totalStages_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->results_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<DetectionItems::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DetectionItems::Results>) };
      inline vector<DetectionItems::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DetectionItems::Results>) };
      inline DetectionItems& setResults(const vector<DetectionItems::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline DetectionItems& setResults(vector<DetectionItems::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The information about the detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The detection result items.
      shared_ptr<vector<DetectionItems::Results>> results_ {};
      // The severity level of the detection result. Valid values:
      // 
      // *   NORMAL
      // *   WARNING
      // *   CRITICAL
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->DBClusterId_ == nullptr && this->detectionItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeBadSqlDetectionResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeBadSqlDetectionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeBadSqlDetectionResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeBadSqlDetectionResponseBody::DetectionItems>) };
    inline vector<DescribeBadSqlDetectionResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeBadSqlDetectionResponseBody::DetectionItems>) };
    inline DescribeBadSqlDetectionResponseBody& setDetectionItems(const vector<DescribeBadSqlDetectionResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeBadSqlDetectionResponseBody& setDetectionItems(vector<DescribeBadSqlDetectionResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBadSqlDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeBadSqlDetectionResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeBadSqlDetectionResponseBody::DetectionItems>> detectionItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
