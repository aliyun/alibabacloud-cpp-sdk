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
        && return this->appId_ == nullptr && return this->cpuUtilization_ == nullptr && return this->diagnosisInfoList_ == nullptr && return this->durationInMillis_ == nullptr && return this->JVMGcCostInMillis_ == nullptr
        && return this->peakMemoryInByte_ == nullptr && return this->requestId_ == nullptr && return this->shuffleReadInByte_ == nullptr && return this->shuffleWriteInByte_ == nullptr && return this->spillInByte_ == nullptr
        && return this->startedTime_ == nullptr && return this->state_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cpuUtilization Field Functions 
    bool hasCpuUtilization() const { return this->cpuUtilization_ != nullptr;};
    void deleteCpuUtilization() { this->cpuUtilization_ = nullptr;};
    inline double cpuUtilization() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilization_, 0.0) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setCpuUtilization(double cpuUtilization) { DARABONBA_PTR_SET_VALUE(cpuUtilization_, cpuUtilization) };


    // diagnosisInfoList Field Functions 
    bool hasDiagnosisInfoList() const { return this->diagnosisInfoList_ != nullptr;};
    void deleteDiagnosisInfoList() { this->diagnosisInfoList_ = nullptr;};
    inline const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfoList() const { DARABONBA_PTR_GET_CONST(diagnosisInfoList_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline vector<Adb4MysqlSparkDiagnosisInfo> diagnosisInfoList() { DARABONBA_PTR_GET(diagnosisInfoList_, vector<Adb4MysqlSparkDiagnosisInfo>) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDiagnosisInfoList(const vector<Adb4MysqlSparkDiagnosisInfo> & diagnosisInfoList) { DARABONBA_PTR_SET_VALUE(diagnosisInfoList_, diagnosisInfoList) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDiagnosisInfoList(vector<Adb4MysqlSparkDiagnosisInfo> && diagnosisInfoList) { DARABONBA_PTR_SET_RVALUE(diagnosisInfoList_, diagnosisInfoList) };


    // durationInMillis Field Functions 
    bool hasDurationInMillis() const { return this->durationInMillis_ != nullptr;};
    void deleteDurationInMillis() { this->durationInMillis_ = nullptr;};
    inline int64_t durationInMillis() const { DARABONBA_PTR_GET_DEFAULT(durationInMillis_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setDurationInMillis(int64_t durationInMillis) { DARABONBA_PTR_SET_VALUE(durationInMillis_, durationInMillis) };


    // JVMGcCostInMillis Field Functions 
    bool hasJVMGcCostInMillis() const { return this->JVMGcCostInMillis_ != nullptr;};
    void deleteJVMGcCostInMillis() { this->JVMGcCostInMillis_ = nullptr;};
    inline int64_t JVMGcCostInMillis() const { DARABONBA_PTR_GET_DEFAULT(JVMGcCostInMillis_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setJVMGcCostInMillis(int64_t JVMGcCostInMillis) { DARABONBA_PTR_SET_VALUE(JVMGcCostInMillis_, JVMGcCostInMillis) };


    // peakMemoryInByte Field Functions 
    bool hasPeakMemoryInByte() const { return this->peakMemoryInByte_ != nullptr;};
    void deletePeakMemoryInByte() { this->peakMemoryInByte_ = nullptr;};
    inline int64_t peakMemoryInByte() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setPeakMemoryInByte(int64_t peakMemoryInByte) { DARABONBA_PTR_SET_VALUE(peakMemoryInByte_, peakMemoryInByte) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shuffleReadInByte Field Functions 
    bool hasShuffleReadInByte() const { return this->shuffleReadInByte_ != nullptr;};
    void deleteShuffleReadInByte() { this->shuffleReadInByte_ = nullptr;};
    inline int64_t shuffleReadInByte() const { DARABONBA_PTR_GET_DEFAULT(shuffleReadInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setShuffleReadInByte(int64_t shuffleReadInByte) { DARABONBA_PTR_SET_VALUE(shuffleReadInByte_, shuffleReadInByte) };


    // shuffleWriteInByte Field Functions 
    bool hasShuffleWriteInByte() const { return this->shuffleWriteInByte_ != nullptr;};
    void deleteShuffleWriteInByte() { this->shuffleWriteInByte_ = nullptr;};
    inline int64_t shuffleWriteInByte() const { DARABONBA_PTR_GET_DEFAULT(shuffleWriteInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setShuffleWriteInByte(int64_t shuffleWriteInByte) { DARABONBA_PTR_SET_VALUE(shuffleWriteInByte_, shuffleWriteInByte) };


    // spillInByte Field Functions 
    bool hasSpillInByte() const { return this->spillInByte_ != nullptr;};
    void deleteSpillInByte() { this->spillInByte_ = nullptr;};
    inline int64_t spillInByte() const { DARABONBA_PTR_GET_DEFAULT(spillInByte_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setSpillInByte(int64_t spillInByte) { DARABONBA_PTR_SET_VALUE(spillInByte_, spillInByte) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSparkAppDiagnosisInfoResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The information about the request denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The application ID.
    // 
    // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/455888.html) operation to query all application IDs.
    std::shared_ptr<string> appId_ = nullptr;
    // The CPU utilization. Unit: %.
    std::shared_ptr<double> cpuUtilization_ = nullptr;
    // The queried diagnostic information.
    std::shared_ptr<vector<Adb4MysqlSparkDiagnosisInfo>> diagnosisInfoList_ = nullptr;
    // The execution duration of the application. Unit: milliseconds.
    std::shared_ptr<int64_t> durationInMillis_ = nullptr;
    // The amount of time consumed by the Java virtual machine to perform garbage collection operations. Unit: milliseconds.
    std::shared_ptr<int64_t> JVMGcCostInMillis_ = nullptr;
    // The peak memory usage. Unit: bytes.
    std::shared_ptr<int64_t> peakMemoryInByte_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The amount of data used for shuffle reads. Unit: bytes.
    std::shared_ptr<int64_t> shuffleReadInByte_ = nullptr;
    // The amount of data used for shuffle writes. Unit: bytes.
    std::shared_ptr<int64_t> shuffleWriteInByte_ = nullptr;
    // The amount of data spilled to disks when the memory is insufficient. Unit: bytes.
    std::shared_ptr<int64_t> spillInByte_ = nullptr;
    // The time when the application started to be executed.
    std::shared_ptr<int64_t> startedTime_ = nullptr;
    // The status of the asynchronous import or export job. Valid values:
    // 
    // *   **RUNNING**
    // *   **FINISHED**
    // *   **FAILED**
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
