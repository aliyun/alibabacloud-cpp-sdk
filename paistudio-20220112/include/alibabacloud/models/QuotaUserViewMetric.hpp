// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAUSERVIEWMETRIC_HPP_
#define ALIBABACLOUD_MODELS_QUOTAUSERVIEWMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaUserViewMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaUserViewMetric& obj) { 
      DARABONBA_PTR_TO_JSON(CPUNodeNumber, CPUNodeNumber_);
      DARABONBA_PTR_TO_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_TO_JSON(CpuJobNames, cpuJobNames_);
      DARABONBA_PTR_TO_JSON(CpuNodeNames, cpuNodeNames_);
      DARABONBA_PTR_TO_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_TO_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_TO_JSON(GPUNodeNumber, GPUNodeNumber_);
      DARABONBA_PTR_TO_JSON(GPUUsageRate, GPUUsageRate_);
      DARABONBA_PTR_TO_JSON(GpuJobNames, gpuJobNames_);
      DARABONBA_PTR_TO_JSON(GpuNodeNames, gpuNodeNames_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_TO_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_TO_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_TO_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaUserViewMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUNodeNumber, CPUNodeNumber_);
      DARABONBA_PTR_FROM_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_FROM_JSON(CpuJobNames, cpuJobNames_);
      DARABONBA_PTR_FROM_JSON(CpuNodeNames, cpuNodeNames_);
      DARABONBA_PTR_FROM_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_FROM_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_FROM_JSON(GPUNodeNumber, GPUNodeNumber_);
      DARABONBA_PTR_FROM_JSON(GPUUsageRate, GPUUsageRate_);
      DARABONBA_PTR_FROM_JSON(GpuJobNames, gpuJobNames_);
      DARABONBA_PTR_FROM_JSON(GpuNodeNames, gpuNodeNames_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_FROM_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_FROM_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_FROM_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuotaUserViewMetric() = default ;
    QuotaUserViewMetric(const QuotaUserViewMetric &) = default ;
    QuotaUserViewMetric(QuotaUserViewMetric &&) = default ;
    QuotaUserViewMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaUserViewMetric() = default ;
    QuotaUserViewMetric& operator=(const QuotaUserViewMetric &) = default ;
    QuotaUserViewMetric& operator=(QuotaUserViewMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPUNodeNumber_ == nullptr
        && return this->CPUUsageRate_ == nullptr && return this->cpuJobNames_ == nullptr && return this->cpuNodeNames_ == nullptr && return this->diskReadRate_ == nullptr && return this->diskWriteRate_ == nullptr
        && return this->GPUNodeNumber_ == nullptr && return this->GPUUsageRate_ == nullptr && return this->gpuJobNames_ == nullptr && return this->gpuNodeNames_ == nullptr && return this->jobType_ == nullptr
        && return this->memoryUsageRate_ == nullptr && return this->networkInputRate_ == nullptr && return this->networkOutputRate_ == nullptr && return this->nodeNames_ == nullptr && return this->requestCPU_ == nullptr
        && return this->requestGPU_ == nullptr && return this->requestMemory_ == nullptr && return this->totalCPU_ == nullptr && return this->totalGPU_ == nullptr && return this->totalMemory_ == nullptr
        && return this->userId_ == nullptr; };
    // CPUNodeNumber Field Functions 
    bool hasCPUNodeNumber() const { return this->CPUNodeNumber_ != nullptr;};
    void deleteCPUNodeNumber() { this->CPUNodeNumber_ = nullptr;};
    inline int32_t CPUNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(CPUNodeNumber_, 0) };
    inline QuotaUserViewMetric& setCPUNodeNumber(int32_t CPUNodeNumber) { DARABONBA_PTR_SET_VALUE(CPUNodeNumber_, CPUNodeNumber) };


    // CPUUsageRate Field Functions 
    bool hasCPUUsageRate() const { return this->CPUUsageRate_ != nullptr;};
    void deleteCPUUsageRate() { this->CPUUsageRate_ = nullptr;};
    inline string CPUUsageRate() const { DARABONBA_PTR_GET_DEFAULT(CPUUsageRate_, "") };
    inline QuotaUserViewMetric& setCPUUsageRate(string CPUUsageRate) { DARABONBA_PTR_SET_VALUE(CPUUsageRate_, CPUUsageRate) };


    // cpuJobNames Field Functions 
    bool hasCpuJobNames() const { return this->cpuJobNames_ != nullptr;};
    void deleteCpuJobNames() { this->cpuJobNames_ = nullptr;};
    inline const vector<string> & cpuJobNames() const { DARABONBA_PTR_GET_CONST(cpuJobNames_, vector<string>) };
    inline vector<string> cpuJobNames() { DARABONBA_PTR_GET(cpuJobNames_, vector<string>) };
    inline QuotaUserViewMetric& setCpuJobNames(const vector<string> & cpuJobNames) { DARABONBA_PTR_SET_VALUE(cpuJobNames_, cpuJobNames) };
    inline QuotaUserViewMetric& setCpuJobNames(vector<string> && cpuJobNames) { DARABONBA_PTR_SET_RVALUE(cpuJobNames_, cpuJobNames) };


    // cpuNodeNames Field Functions 
    bool hasCpuNodeNames() const { return this->cpuNodeNames_ != nullptr;};
    void deleteCpuNodeNames() { this->cpuNodeNames_ = nullptr;};
    inline const vector<string> & cpuNodeNames() const { DARABONBA_PTR_GET_CONST(cpuNodeNames_, vector<string>) };
    inline vector<string> cpuNodeNames() { DARABONBA_PTR_GET(cpuNodeNames_, vector<string>) };
    inline QuotaUserViewMetric& setCpuNodeNames(const vector<string> & cpuNodeNames) { DARABONBA_PTR_SET_VALUE(cpuNodeNames_, cpuNodeNames) };
    inline QuotaUserViewMetric& setCpuNodeNames(vector<string> && cpuNodeNames) { DARABONBA_PTR_SET_RVALUE(cpuNodeNames_, cpuNodeNames) };


    // diskReadRate Field Functions 
    bool hasDiskReadRate() const { return this->diskReadRate_ != nullptr;};
    void deleteDiskReadRate() { this->diskReadRate_ = nullptr;};
    inline string diskReadRate() const { DARABONBA_PTR_GET_DEFAULT(diskReadRate_, "") };
    inline QuotaUserViewMetric& setDiskReadRate(string diskReadRate) { DARABONBA_PTR_SET_VALUE(diskReadRate_, diskReadRate) };


    // diskWriteRate Field Functions 
    bool hasDiskWriteRate() const { return this->diskWriteRate_ != nullptr;};
    void deleteDiskWriteRate() { this->diskWriteRate_ = nullptr;};
    inline string diskWriteRate() const { DARABONBA_PTR_GET_DEFAULT(diskWriteRate_, "") };
    inline QuotaUserViewMetric& setDiskWriteRate(string diskWriteRate) { DARABONBA_PTR_SET_VALUE(diskWriteRate_, diskWriteRate) };


    // GPUNodeNumber Field Functions 
    bool hasGPUNodeNumber() const { return this->GPUNodeNumber_ != nullptr;};
    void deleteGPUNodeNumber() { this->GPUNodeNumber_ = nullptr;};
    inline int32_t GPUNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(GPUNodeNumber_, 0) };
    inline QuotaUserViewMetric& setGPUNodeNumber(int32_t GPUNodeNumber) { DARABONBA_PTR_SET_VALUE(GPUNodeNumber_, GPUNodeNumber) };


    // GPUUsageRate Field Functions 
    bool hasGPUUsageRate() const { return this->GPUUsageRate_ != nullptr;};
    void deleteGPUUsageRate() { this->GPUUsageRate_ = nullptr;};
    inline string GPUUsageRate() const { DARABONBA_PTR_GET_DEFAULT(GPUUsageRate_, "") };
    inline QuotaUserViewMetric& setGPUUsageRate(string GPUUsageRate) { DARABONBA_PTR_SET_VALUE(GPUUsageRate_, GPUUsageRate) };


    // gpuJobNames Field Functions 
    bool hasGpuJobNames() const { return this->gpuJobNames_ != nullptr;};
    void deleteGpuJobNames() { this->gpuJobNames_ = nullptr;};
    inline const vector<string> & gpuJobNames() const { DARABONBA_PTR_GET_CONST(gpuJobNames_, vector<string>) };
    inline vector<string> gpuJobNames() { DARABONBA_PTR_GET(gpuJobNames_, vector<string>) };
    inline QuotaUserViewMetric& setGpuJobNames(const vector<string> & gpuJobNames) { DARABONBA_PTR_SET_VALUE(gpuJobNames_, gpuJobNames) };
    inline QuotaUserViewMetric& setGpuJobNames(vector<string> && gpuJobNames) { DARABONBA_PTR_SET_RVALUE(gpuJobNames_, gpuJobNames) };


    // gpuNodeNames Field Functions 
    bool hasGpuNodeNames() const { return this->gpuNodeNames_ != nullptr;};
    void deleteGpuNodeNames() { this->gpuNodeNames_ = nullptr;};
    inline const vector<string> & gpuNodeNames() const { DARABONBA_PTR_GET_CONST(gpuNodeNames_, vector<string>) };
    inline vector<string> gpuNodeNames() { DARABONBA_PTR_GET(gpuNodeNames_, vector<string>) };
    inline QuotaUserViewMetric& setGpuNodeNames(const vector<string> & gpuNodeNames) { DARABONBA_PTR_SET_VALUE(gpuNodeNames_, gpuNodeNames) };
    inline QuotaUserViewMetric& setGpuNodeNames(vector<string> && gpuNodeNames) { DARABONBA_PTR_SET_RVALUE(gpuNodeNames_, gpuNodeNames) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline QuotaUserViewMetric& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // memoryUsageRate Field Functions 
    bool hasMemoryUsageRate() const { return this->memoryUsageRate_ != nullptr;};
    void deleteMemoryUsageRate() { this->memoryUsageRate_ = nullptr;};
    inline string memoryUsageRate() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageRate_, "") };
    inline QuotaUserViewMetric& setMemoryUsageRate(string memoryUsageRate) { DARABONBA_PTR_SET_VALUE(memoryUsageRate_, memoryUsageRate) };


    // networkInputRate Field Functions 
    bool hasNetworkInputRate() const { return this->networkInputRate_ != nullptr;};
    void deleteNetworkInputRate() { this->networkInputRate_ = nullptr;};
    inline string networkInputRate() const { DARABONBA_PTR_GET_DEFAULT(networkInputRate_, "") };
    inline QuotaUserViewMetric& setNetworkInputRate(string networkInputRate) { DARABONBA_PTR_SET_VALUE(networkInputRate_, networkInputRate) };


    // networkOutputRate Field Functions 
    bool hasNetworkOutputRate() const { return this->networkOutputRate_ != nullptr;};
    void deleteNetworkOutputRate() { this->networkOutputRate_ = nullptr;};
    inline string networkOutputRate() const { DARABONBA_PTR_GET_DEFAULT(networkOutputRate_, "") };
    inline QuotaUserViewMetric& setNetworkOutputRate(string networkOutputRate) { DARABONBA_PTR_SET_VALUE(networkOutputRate_, networkOutputRate) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline QuotaUserViewMetric& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline QuotaUserViewMetric& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int32_t requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0) };
    inline QuotaUserViewMetric& setRequestCPU(int32_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline int32_t requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, 0) };
    inline QuotaUserViewMetric& setRequestGPU(int32_t requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline int64_t requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0L) };
    inline QuotaUserViewMetric& setRequestMemory(int64_t requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // totalCPU Field Functions 
    bool hasTotalCPU() const { return this->totalCPU_ != nullptr;};
    void deleteTotalCPU() { this->totalCPU_ = nullptr;};
    inline int32_t totalCPU() const { DARABONBA_PTR_GET_DEFAULT(totalCPU_, 0) };
    inline QuotaUserViewMetric& setTotalCPU(int32_t totalCPU) { DARABONBA_PTR_SET_VALUE(totalCPU_, totalCPU) };


    // totalGPU Field Functions 
    bool hasTotalGPU() const { return this->totalGPU_ != nullptr;};
    void deleteTotalGPU() { this->totalGPU_ = nullptr;};
    inline int32_t totalGPU() const { DARABONBA_PTR_GET_DEFAULT(totalGPU_, 0) };
    inline QuotaUserViewMetric& setTotalGPU(int32_t totalGPU) { DARABONBA_PTR_SET_VALUE(totalGPU_, totalGPU) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline int64_t totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0L) };
    inline QuotaUserViewMetric& setTotalMemory(int64_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuotaUserViewMetric& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> CPUNodeNumber_ = nullptr;
    std::shared_ptr<string> CPUUsageRate_ = nullptr;
    std::shared_ptr<vector<string>> cpuJobNames_ = nullptr;
    std::shared_ptr<vector<string>> cpuNodeNames_ = nullptr;
    std::shared_ptr<string> diskReadRate_ = nullptr;
    std::shared_ptr<string> diskWriteRate_ = nullptr;
    std::shared_ptr<int32_t> GPUNodeNumber_ = nullptr;
    std::shared_ptr<string> GPUUsageRate_ = nullptr;
    std::shared_ptr<vector<string>> gpuJobNames_ = nullptr;
    std::shared_ptr<vector<string>> gpuNodeNames_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> memoryUsageRate_ = nullptr;
    std::shared_ptr<string> networkInputRate_ = nullptr;
    std::shared_ptr<string> networkOutputRate_ = nullptr;
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    std::shared_ptr<int32_t> requestCPU_ = nullptr;
    std::shared_ptr<int32_t> requestGPU_ = nullptr;
    std::shared_ptr<int64_t> requestMemory_ = nullptr;
    std::shared_ptr<int32_t> totalCPU_ = nullptr;
    std::shared_ptr<int32_t> totalGPU_ = nullptr;
    std::shared_ptr<int64_t> totalMemory_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
