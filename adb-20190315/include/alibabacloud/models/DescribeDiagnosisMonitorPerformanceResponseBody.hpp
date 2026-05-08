// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDiagnosisMonitorPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_TO_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisMonitorPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(PerformancesThreshold, performancesThreshold_);
      DARABONBA_PTR_FROM_JSON(PerformancesTruncated, performancesTruncated_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisMonitorPerformanceResponseBody() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(const DescribeDiagnosisMonitorPerformanceResponseBody &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBody& operator=(DescribeDiagnosisMonitorPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(RcHost, rcHost_);
        DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_TO_JSON(ScanSize, scanSize_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(RcHost, rcHost_);
        DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_FROM_JSON(ScanSize, scanSize_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Performances() = default ;
      Performances(const Performances &) = default ;
      Performances(Performances &&) = default ;
      Performances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Performances() = default ;
      Performances& operator=(const Performances &) = default ;
      Performances& operator=(Performances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cost_ == nullptr
        && this->peakMemory_ == nullptr && this->processId_ == nullptr && this->rcHost_ == nullptr && this->scanRows_ == nullptr && this->scanSize_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->userName_ == nullptr; };
      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
      inline Performances& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline Performances& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Performances& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // rcHost Field Functions 
      bool hasRcHost() const { return this->rcHost_ != nullptr;};
      void deleteRcHost() { this->rcHost_ = nullptr;};
      inline string getRcHost() const { DARABONBA_PTR_GET_DEFAULT(rcHost_, "") };
      inline Performances& setRcHost(string rcHost) { DARABONBA_PTR_SET_VALUE(rcHost_, rcHost) };


      // scanRows Field Functions 
      bool hasScanRows() const { return this->scanRows_ != nullptr;};
      void deleteScanRows() { this->scanRows_ = nullptr;};
      inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
      inline Performances& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


      // scanSize Field Functions 
      bool hasScanSize() const { return this->scanSize_ != nullptr;};
      void deleteScanSize() { this->scanSize_ = nullptr;};
      inline int64_t getScanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
      inline Performances& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Performances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Performances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Performances& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The total execution duration. Unit: milliseconds.
      // 
      // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
      shared_ptr<int64_t> cost_ {};
      // The peak memory of the query. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The query ID.
      shared_ptr<string> processId_ {};
      // The IP address of the AnalyticDB for MySQL frontend node on which the SQL statement is executed.
      shared_ptr<string> rcHost_ {};
      // The number of rows scanned.
      shared_ptr<int64_t> scanRows_ {};
      // The amount of scanned data. Unit: bytes.
      shared_ptr<int64_t> scanSize_ {};
      // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> startTime_ {};
      // The status of the SQL statement. Valid values:
      // 
      // *   **running**
      // *   **finished**
      // *   **failed**
      shared_ptr<string> status_ {};
      // The database account that is used to submit the query.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->performances_ == nullptr
        && this->performancesThreshold_ == nullptr && this->performancesTruncated_ == nullptr && this->requestId_ == nullptr; };
    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>) };
    inline vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> getPerformances() { DARABONBA_PTR_GET(performances_, vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(const vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformances(vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // performancesThreshold Field Functions 
    bool hasPerformancesThreshold() const { return this->performancesThreshold_ != nullptr;};
    void deletePerformancesThreshold() { this->performancesThreshold_ = nullptr;};
    inline int32_t getPerformancesThreshold() const { DARABONBA_PTR_GET_DEFAULT(performancesThreshold_, 0) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesThreshold(int32_t performancesThreshold) { DARABONBA_PTR_SET_VALUE(performancesThreshold_, performancesThreshold) };


    // performancesTruncated Field Functions 
    bool hasPerformancesTruncated() const { return this->performancesTruncated_ != nullptr;};
    void deletePerformancesTruncated() { this->performancesTruncated_ = nullptr;};
    inline bool getPerformancesTruncated() const { DARABONBA_PTR_GET_DEFAULT(performancesTruncated_, false) };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setPerformancesTruncated(bool performancesTruncated) { DARABONBA_PTR_SET_VALUE(performancesTruncated_, performancesTruncated) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring information about queries displayed in Gantt charts.
    shared_ptr<vector<DescribeDiagnosisMonitorPerformanceResponseBody::Performances>> performances_ {};
    // The threshold for the number of queries displayed in a Gantt chart. Default value: 10000.
    // 
    // >  Up to 10,000 queries can be displayed in a Gantt chart even if more queries exist.
    shared_ptr<int32_t> performancesThreshold_ {};
    // Indicates whether all queries are returned. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> performancesTruncated_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
