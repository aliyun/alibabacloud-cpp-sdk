// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAPPDIAGNOSISINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAPPDIAGNOSISINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Adb4MysqlSparkDiagnosisInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkAppDiagnosisInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAppDiagnosisInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_TO_JSON(DiagnosisInfoList, diagnosisInfoList_);
      DARABONBA_PTR_TO_JSON(DurationInMillis, durationInMillis_);
      DARABONBA_PTR_TO_JSON(JVMGcCostInMillis, JVMGcCostInMillis_);
      DARABONBA_PTR_TO_JSON(PeakMemoryInByte, peakMemoryInByte_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShuffleReadInByte, shuffleReadInByte_);
      DARABONBA_PTR_TO_JSON(ShuffleWriteInByte, shuffleWriteInByte_);
      DARABONBA_PTR_TO_JSON(SpillInByte, spillInByte_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAppDiagnosisInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_FROM_JSON(DiagnosisInfoList, diagnosisInfoList_);
      DARABONBA_PTR_FROM_JSON(DurationInMillis, durationInMillis_);
      DARABONBA_PTR_FROM_JSON(JVMGcCostInMillis, JVMGcCostInMillis_);
      DARABONBA_PTR_FROM_JSON(PeakMemoryInByte, peakMemoryInByte_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShuffleReadInByte, shuffleReadInByte_);
      DARABONBA_PTR_FROM_JSON(ShuffleWriteInByte, shuffleWriteInByte_);
      DARABONBA_PTR_FROM_JSON(SpillInByte, spillInByte_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeSparkAppDiagnosisInfoResponseBody() = default ;
    DescribeSparkAppDiagnosisInfoResponseBody(const DescribeSparkAppDiagnosisInfoResponseBody &) = default ;
    DescribeSparkAppDiagnosisInfoResponseBody(DescribeSparkAppDiagnosisInfoResponseBody &&) = default ;
    DescribeSparkAppDiagnosisInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAppDiagnosisInfoResponseBody() = default ;
    DescribeSparkAppDiagnosisInfoResponseBody& operator=(const DescribeSparkAppDiagnosisInfoResponseBody &) = default ;
    DescribeSparkAppDiagnosisInfoResponseBody& operator=(DescribeSparkAppDiagnosisInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->appId_ == nullptr && this->cpuUtilization_ == nullptr && this->diagnosisInfoList_ == nullptr && this->durationInMillis_ == nullptr && this->JVMGcCostInMillis_ == nullptr
        && this->peakMemoryInByte_ == nullptr && this->requestId_ == nullptr && this->shuffleReadInByte_ == nullptr && this->shuffleWriteInByte_ == nullptr && this->spillInByte_ == nullptr
        && this->startedTime_ == nullptr && this->state_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cpuUtilization Field Functions 
    bool hasCpuUtilization() const { return this->cpuUtilization_ != nullptr;};
    void deleteCpuUtilization() { this->cpuUtilization_ = nullptr;};
    inline double getCpuUtilization() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilization_, 0.0) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setCpuUtilization(double cpuUtilization) { DARABONBA_PTR_SET_VALUE(cpuUtilization_, cpuUtilization) };


    // diagnosisInfoList Field Functions 
    bool hasDiagnosisInfoList() const { return this->diagnosisInfoList_ != nullptr;};
    void deleteDiagnosisInfoList() { this->diagnosisInfoList_ = nullptr;};
    inline const vector<Adb4MysqlSparkDiagnosisInfo> & getDiagnosisInfoList() const { DARABONBA_PTR_GET_CONST(diagnosisInfoList_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline vector<Adb4MysqlSparkDiagnosisInfo> getDiagnosisInfoList() { DARABONBA_PTR_GET(diagnosisInfoList_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDiagnosisInfoList(const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfoList) { DARABONBA_PTR_SET_VALUE(diagnosisInfoList_, diagnosisInfoList) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDiagnosisInfoList(vector<Adb4MysqlSparkDiagnosisInfo> && diagnosisInfoList) { DARABONBA_PTR_SET_RVALUE(diagnosisInfoList_, diagnosisInfoList) };


    // durationInMillis Field Functions 
    bool hasDurationInMillis() const { return this->durationInMillis_ != nullptr;};
    void deleteDurationInMillis() { this->durationInMillis_ = nullptr;};
    inline int64_t getDurationInMillis() const { DARABONBA_PTR_GET_DEFAULT(durationInMillis_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDurationInMillis(int64_t durationInMillis) { DARABONBA_PTR_SET_VALUE(durationInMillis_, durationInMillis) };


    // JVMGcCostInMillis Field Functions 
    bool hasJVMGcCostInMillis() const { return this->JVMGcCostInMillis_ != nullptr;};
    void deleteJVMGcCostInMillis() { this->JVMGcCostInMillis_ = nullptr;};
    inline int64_t getJVMGcCostInMillis() const { DARABONBA_PTR_GET_DEFAULT(JVMGcCostInMillis_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setJVMGcCostInMillis(int64_t JVMGcCostInMillis) { DARABONBA_PTR_SET_VALUE(JVMGcCostInMillis_, JVMGcCostInMillis) };


    // peakMemoryInByte Field Functions 
    bool hasPeakMemoryInByte() const { return this->peakMemoryInByte_ != nullptr;};
    void deletePeakMemoryInByte() { this->peakMemoryInByte_ = nullptr;};
    inline int64_t getPeakMemoryInByte() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setPeakMemoryInByte(int64_t peakMemoryInByte) { DARABONBA_PTR_SET_VALUE(peakMemoryInByte_, peakMemoryInByte) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shuffleReadInByte Field Functions 
    bool hasShuffleReadInByte() const { return this->shuffleReadInByte_ != nullptr;};
    void deleteShuffleReadInByte() { this->shuffleReadInByte_ = nullptr;};
    inline int64_t getShuffleReadInByte() const { DARABONBA_PTR_GET_DEFAULT(shuffleReadInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setShuffleReadInByte(int64_t shuffleReadInByte) { DARABONBA_PTR_SET_VALUE(shuffleReadInByte_, shuffleReadInByte) };


    // shuffleWriteInByte Field Functions 
    bool hasShuffleWriteInByte() const { return this->shuffleWriteInByte_ != nullptr;};
    void deleteShuffleWriteInByte() { this->shuffleWriteInByte_ = nullptr;};
    inline int64_t getShuffleWriteInByte() const { DARABONBA_PTR_GET_DEFAULT(shuffleWriteInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setShuffleWriteInByte(int64_t shuffleWriteInByte) { DARABONBA_PTR_SET_VALUE(shuffleWriteInByte_, shuffleWriteInByte) };


    // spillInByte Field Functions 
    bool hasSpillInByte() const { return this->spillInByte_ != nullptr;};
    void deleteSpillInByte() { this->spillInByte_ = nullptr;};
    inline int64_t getSpillInByte() const { DARABONBA_PTR_GET_DEFAULT(spillInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setSpillInByte(int64_t spillInByte) { DARABONBA_PTR_SET_VALUE(spillInByte_, spillInByte) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query all application IDs.
    shared_ptr<string> appId_ {};
    // The CPU utilization. Unit: %.
    shared_ptr<double> cpuUtilization_ {};
    // The queried diagnostic information.
    shared_ptr<vector<Adb4MysqlSparkDiagnosisInfo>> diagnosisInfoList_ {};
    // The execution duration of the application. Unit: milliseconds.
    shared_ptr<int64_t> durationInMillis_ {};
    // The amount of time consumed by the Java virtual machine to perform garbage collection operations. Unit: milliseconds.
    shared_ptr<int64_t> JVMGcCostInMillis_ {};
    // The peak memory usage. Unit: bytes.
    shared_ptr<int64_t> peakMemoryInByte_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The amount of data used for shuffle reads. Unit: bytes.
    shared_ptr<int64_t> shuffleReadInByte_ {};
    // The amount of data used for shuffle writes. Unit: bytes.
    shared_ptr<int64_t> shuffleWriteInByte_ {};
    // The amount of data spilled to disks when the memory is insufficient. Unit: bytes.
    shared_ptr<int64_t> spillInByte_ {};
    // The time when the application started to be executed.
    shared_ptr<int64_t> startedTime_ {};
    // The status of the asynchronous import or export job. Valid values:
    // 
    // *   **RUNNING**
    // *   **FINISHED**
    // *   **FAILED**
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
