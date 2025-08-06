// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBVIEWMETRIC_HPP_
#define ALIBABACLOUD_MODELS_JOBVIEWMETRIC_HPP_
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
  class JobViewMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobViewMetric& obj) { 
      DARABONBA_PTR_TO_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_TO_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_TO_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_TO_JSON(GPUUsageRate, GPUUsageRate_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_TO_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_TO_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_TO_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, JobViewMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_FROM_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_FROM_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_FROM_JSON(GPUUsageRate, GPUUsageRate_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_FROM_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_FROM_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_FROM_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    JobViewMetric() = default ;
    JobViewMetric(const JobViewMetric &) = default ;
    JobViewMetric(JobViewMetric &&) = default ;
    JobViewMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobViewMetric() = default ;
    JobViewMetric& operator=(const JobViewMetric &) = default ;
    JobViewMetric& operator=(JobViewMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CPUUsageRate_ != nullptr
        && this->diskReadRate_ != nullptr && this->diskWriteRate_ != nullptr && this->GPUUsageRate_ != nullptr && this->jobId_ != nullptr && this->jobType_ != nullptr
        && this->memoryUsageRate_ != nullptr && this->networkInputRate_ != nullptr && this->networkOutputRate_ != nullptr && this->nodeNames_ != nullptr && this->requestCPU_ != nullptr
        && this->requestGPU_ != nullptr && this->requestMemory_ != nullptr && this->resourceGroupID_ != nullptr && this->totalCPU_ != nullptr && this->totalGPU_ != nullptr
        && this->totalMemory_ != nullptr && this->userId_ != nullptr; };
    // CPUUsageRate Field Functions 
    bool hasCPUUsageRate() const { return this->CPUUsageRate_ != nullptr;};
    void deleteCPUUsageRate() { this->CPUUsageRate_ = nullptr;};
    inline string CPUUsageRate() const { DARABONBA_PTR_GET_DEFAULT(CPUUsageRate_, "") };
    inline JobViewMetric& setCPUUsageRate(string CPUUsageRate) { DARABONBA_PTR_SET_VALUE(CPUUsageRate_, CPUUsageRate) };


    // diskReadRate Field Functions 
    bool hasDiskReadRate() const { return this->diskReadRate_ != nullptr;};
    void deleteDiskReadRate() { this->diskReadRate_ = nullptr;};
    inline string diskReadRate() const { DARABONBA_PTR_GET_DEFAULT(diskReadRate_, "") };
    inline JobViewMetric& setDiskReadRate(string diskReadRate) { DARABONBA_PTR_SET_VALUE(diskReadRate_, diskReadRate) };


    // diskWriteRate Field Functions 
    bool hasDiskWriteRate() const { return this->diskWriteRate_ != nullptr;};
    void deleteDiskWriteRate() { this->diskWriteRate_ = nullptr;};
    inline string diskWriteRate() const { DARABONBA_PTR_GET_DEFAULT(diskWriteRate_, "") };
    inline JobViewMetric& setDiskWriteRate(string diskWriteRate) { DARABONBA_PTR_SET_VALUE(diskWriteRate_, diskWriteRate) };


    // GPUUsageRate Field Functions 
    bool hasGPUUsageRate() const { return this->GPUUsageRate_ != nullptr;};
    void deleteGPUUsageRate() { this->GPUUsageRate_ = nullptr;};
    inline string GPUUsageRate() const { DARABONBA_PTR_GET_DEFAULT(GPUUsageRate_, "") };
    inline JobViewMetric& setGPUUsageRate(string GPUUsageRate) { DARABONBA_PTR_SET_VALUE(GPUUsageRate_, GPUUsageRate) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline JobViewMetric& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline JobViewMetric& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // memoryUsageRate Field Functions 
    bool hasMemoryUsageRate() const { return this->memoryUsageRate_ != nullptr;};
    void deleteMemoryUsageRate() { this->memoryUsageRate_ = nullptr;};
    inline string memoryUsageRate() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageRate_, "") };
    inline JobViewMetric& setMemoryUsageRate(string memoryUsageRate) { DARABONBA_PTR_SET_VALUE(memoryUsageRate_, memoryUsageRate) };


    // networkInputRate Field Functions 
    bool hasNetworkInputRate() const { return this->networkInputRate_ != nullptr;};
    void deleteNetworkInputRate() { this->networkInputRate_ = nullptr;};
    inline string networkInputRate() const { DARABONBA_PTR_GET_DEFAULT(networkInputRate_, "") };
    inline JobViewMetric& setNetworkInputRate(string networkInputRate) { DARABONBA_PTR_SET_VALUE(networkInputRate_, networkInputRate) };


    // networkOutputRate Field Functions 
    bool hasNetworkOutputRate() const { return this->networkOutputRate_ != nullptr;};
    void deleteNetworkOutputRate() { this->networkOutputRate_ = nullptr;};
    inline string networkOutputRate() const { DARABONBA_PTR_GET_DEFAULT(networkOutputRate_, "") };
    inline JobViewMetric& setNetworkOutputRate(string networkOutputRate) { DARABONBA_PTR_SET_VALUE(networkOutputRate_, networkOutputRate) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline JobViewMetric& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline JobViewMetric& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int32_t requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0) };
    inline JobViewMetric& setRequestCPU(int32_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline int32_t requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, 0) };
    inline JobViewMetric& setRequestGPU(int32_t requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline int64_t requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0L) };
    inline JobViewMetric& setRequestMemory(int64_t requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline JobViewMetric& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // totalCPU Field Functions 
    bool hasTotalCPU() const { return this->totalCPU_ != nullptr;};
    void deleteTotalCPU() { this->totalCPU_ = nullptr;};
    inline int32_t totalCPU() const { DARABONBA_PTR_GET_DEFAULT(totalCPU_, 0) };
    inline JobViewMetric& setTotalCPU(int32_t totalCPU) { DARABONBA_PTR_SET_VALUE(totalCPU_, totalCPU) };


    // totalGPU Field Functions 
    bool hasTotalGPU() const { return this->totalGPU_ != nullptr;};
    void deleteTotalGPU() { this->totalGPU_ = nullptr;};
    inline int32_t totalGPU() const { DARABONBA_PTR_GET_DEFAULT(totalGPU_, 0) };
    inline JobViewMetric& setTotalGPU(int32_t totalGPU) { DARABONBA_PTR_SET_VALUE(totalGPU_, totalGPU) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline int64_t totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0L) };
    inline JobViewMetric& setTotalMemory(int64_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline JobViewMetric& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> CPUUsageRate_ = nullptr;
    std::shared_ptr<string> diskReadRate_ = nullptr;
    std::shared_ptr<string> diskWriteRate_ = nullptr;
    std::shared_ptr<string> GPUUsageRate_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> memoryUsageRate_ = nullptr;
    std::shared_ptr<string> networkInputRate_ = nullptr;
    std::shared_ptr<string> networkOutputRate_ = nullptr;
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    std::shared_ptr<int32_t> requestCPU_ = nullptr;
    std::shared_ptr<int32_t> requestGPU_ = nullptr;
    std::shared_ptr<int64_t> requestMemory_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
    std::shared_ptr<int32_t> totalCPU_ = nullptr;
    std::shared_ptr<int32_t> totalGPU_ = nullptr;
    std::shared_ptr<int64_t> totalMemory_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
