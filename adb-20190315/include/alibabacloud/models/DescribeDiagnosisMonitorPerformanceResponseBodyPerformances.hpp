// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISMONITORPERFORMANCERESPONSEBODYPERFORMANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDiagnosisMonitorPerformanceResponseBodyPerformances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& obj) { 
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
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &&) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisMonitorPerformanceResponseBodyPerformances() = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& operator=(const DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &) = default ;
    DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& operator=(DescribeDiagnosisMonitorPerformanceResponseBodyPerformances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cost_ != nullptr
        && this->peakMemory_ != nullptr && this->processId_ != nullptr && this->rcHost_ != nullptr && this->scanRows_ != nullptr && this->scanSize_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->userName_ != nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // rcHost Field Functions 
    bool hasRcHost() const { return this->rcHost_ != nullptr;};
    void deleteRcHost() { this->rcHost_ = nullptr;};
    inline string rcHost() const { DARABONBA_PTR_GET_DEFAULT(rcHost_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setRcHost(string rcHost) { DARABONBA_PTR_SET_VALUE(rcHost_, rcHost) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // scanSize Field Functions 
    bool hasScanSize() const { return this->scanSize_ != nullptr;};
    void deleteScanSize() { this->scanSize_ = nullptr;};
    inline int64_t scanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDiagnosisMonitorPerformanceResponseBodyPerformances& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The total execution duration. Unit: milliseconds.
    // 
    // >  This value is the cumulative value of the `QueuedTime`, `TotalPlanningTime`, and `ExecutionTime` parameters.
    std::shared_ptr<int64_t> cost_ = nullptr;
    // The peak memory of the query. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The query ID.
    std::shared_ptr<string> processId_ = nullptr;
    // The IP address of the AnalyticDB for MySQL frontend node on which the SQL statement is executed.
    std::shared_ptr<string> rcHost_ = nullptr;
    // The number of rows scanned.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The amount of scanned data. Unit: bytes.
    std::shared_ptr<int64_t> scanSize_ = nullptr;
    // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the SQL statement. Valid values:
    // 
    // *   **running**
    // *   **finished**
    // *   **failed**
    std::shared_ptr<string> status_ = nullptr;
    // The database account that is used to submit the query.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
