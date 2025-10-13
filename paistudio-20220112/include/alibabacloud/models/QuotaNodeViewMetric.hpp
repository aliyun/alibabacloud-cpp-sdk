// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTANODEVIEWMETRIC_HPP_
#define ALIBABACLOUD_MODELS_QUOTANODEVIEWMETRIC_HPP_
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
  class QuotaNodeViewMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaNodeViewMetric& obj) { 
      DARABONBA_PTR_TO_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_TO_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_TO_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_TO_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_TO_JSON(NodeID, nodeID_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_ANY_TO_JSON(TaskIdMap, taskIdMap_);
      DARABONBA_PTR_TO_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_TO_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(TotalTasks, totalTasks_);
      DARABONBA_PTR_TO_JSON(UserIDs, userIDs_);
      DARABONBA_PTR_TO_JSON(UserNumber, userNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaNodeViewMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(CPUUsageRate, CPUUsageRate_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DiskReadRate, diskReadRate_);
      DARABONBA_PTR_FROM_JSON(DiskWriteRate, diskWriteRate_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(MemoryUsageRate, memoryUsageRate_);
      DARABONBA_PTR_FROM_JSON(NetworkInputRate, networkInputRate_);
      DARABONBA_PTR_FROM_JSON(NetworkOutputRate, networkOutputRate_);
      DARABONBA_PTR_FROM_JSON(NodeID, nodeID_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_ANY_FROM_JSON(TaskIdMap, taskIdMap_);
      DARABONBA_PTR_FROM_JSON(TotalCPU, totalCPU_);
      DARABONBA_PTR_FROM_JSON(TotalGPU, totalGPU_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(TotalTasks, totalTasks_);
      DARABONBA_PTR_FROM_JSON(UserIDs, userIDs_);
      DARABONBA_PTR_FROM_JSON(UserNumber, userNumber_);
    };
    QuotaNodeViewMetric() = default ;
    QuotaNodeViewMetric(const QuotaNodeViewMetric &) = default ;
    QuotaNodeViewMetric(QuotaNodeViewMetric &&) = default ;
    QuotaNodeViewMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaNodeViewMetric() = default ;
    QuotaNodeViewMetric& operator=(const QuotaNodeViewMetric &) = default ;
    QuotaNodeViewMetric& operator=(QuotaNodeViewMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPUUsageRate_ == nullptr
        && return this->createdTime_ == nullptr && return this->diskReadRate_ == nullptr && return this->diskWriteRate_ == nullptr && return this->GPUType_ == nullptr && return this->memoryUsageRate_ == nullptr
        && return this->networkInputRate_ == nullptr && return this->networkOutputRate_ == nullptr && return this->nodeID_ == nullptr && return this->nodeStatus_ == nullptr && return this->nodeType_ == nullptr
        && return this->quotaId_ == nullptr && return this->requestCPU_ == nullptr && return this->requestGPU_ == nullptr && return this->requestMemory_ == nullptr && return this->taskIdMap_ == nullptr
        && return this->totalCPU_ == nullptr && return this->totalGPU_ == nullptr && return this->totalMemory_ == nullptr && return this->totalTasks_ == nullptr && return this->userIDs_ == nullptr
        && return this->userNumber_ == nullptr; };
    // CPUUsageRate Field Functions 
    bool hasCPUUsageRate() const { return this->CPUUsageRate_ != nullptr;};
    void deleteCPUUsageRate() { this->CPUUsageRate_ = nullptr;};
    inline string CPUUsageRate() const { DARABONBA_PTR_GET_DEFAULT(CPUUsageRate_, "") };
    inline QuotaNodeViewMetric& setCPUUsageRate(string CPUUsageRate) { DARABONBA_PTR_SET_VALUE(CPUUsageRate_, CPUUsageRate) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline QuotaNodeViewMetric& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // diskReadRate Field Functions 
    bool hasDiskReadRate() const { return this->diskReadRate_ != nullptr;};
    void deleteDiskReadRate() { this->diskReadRate_ = nullptr;};
    inline string diskReadRate() const { DARABONBA_PTR_GET_DEFAULT(diskReadRate_, "") };
    inline QuotaNodeViewMetric& setDiskReadRate(string diskReadRate) { DARABONBA_PTR_SET_VALUE(diskReadRate_, diskReadRate) };


    // diskWriteRate Field Functions 
    bool hasDiskWriteRate() const { return this->diskWriteRate_ != nullptr;};
    void deleteDiskWriteRate() { this->diskWriteRate_ = nullptr;};
    inline string diskWriteRate() const { DARABONBA_PTR_GET_DEFAULT(diskWriteRate_, "") };
    inline QuotaNodeViewMetric& setDiskWriteRate(string diskWriteRate) { DARABONBA_PTR_SET_VALUE(diskWriteRate_, diskWriteRate) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline QuotaNodeViewMetric& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memoryUsageRate Field Functions 
    bool hasMemoryUsageRate() const { return this->memoryUsageRate_ != nullptr;};
    void deleteMemoryUsageRate() { this->memoryUsageRate_ = nullptr;};
    inline string memoryUsageRate() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageRate_, "") };
    inline QuotaNodeViewMetric& setMemoryUsageRate(string memoryUsageRate) { DARABONBA_PTR_SET_VALUE(memoryUsageRate_, memoryUsageRate) };


    // networkInputRate Field Functions 
    bool hasNetworkInputRate() const { return this->networkInputRate_ != nullptr;};
    void deleteNetworkInputRate() { this->networkInputRate_ = nullptr;};
    inline string networkInputRate() const { DARABONBA_PTR_GET_DEFAULT(networkInputRate_, "") };
    inline QuotaNodeViewMetric& setNetworkInputRate(string networkInputRate) { DARABONBA_PTR_SET_VALUE(networkInputRate_, networkInputRate) };


    // networkOutputRate Field Functions 
    bool hasNetworkOutputRate() const { return this->networkOutputRate_ != nullptr;};
    void deleteNetworkOutputRate() { this->networkOutputRate_ = nullptr;};
    inline string networkOutputRate() const { DARABONBA_PTR_GET_DEFAULT(networkOutputRate_, "") };
    inline QuotaNodeViewMetric& setNetworkOutputRate(string networkOutputRate) { DARABONBA_PTR_SET_VALUE(networkOutputRate_, networkOutputRate) };


    // nodeID Field Functions 
    bool hasNodeID() const { return this->nodeID_ != nullptr;};
    void deleteNodeID() { this->nodeID_ = nullptr;};
    inline string nodeID() const { DARABONBA_PTR_GET_DEFAULT(nodeID_, "") };
    inline QuotaNodeViewMetric& setNodeID(string nodeID) { DARABONBA_PTR_SET_VALUE(nodeID_, nodeID) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline QuotaNodeViewMetric& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline QuotaNodeViewMetric& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline QuotaNodeViewMetric& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline int64_t requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, 0L) };
    inline QuotaNodeViewMetric& setRequestCPU(int64_t requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline int64_t requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, 0L) };
    inline QuotaNodeViewMetric& setRequestGPU(int64_t requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline int64_t requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0L) };
    inline QuotaNodeViewMetric& setRequestMemory(int64_t requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // taskIdMap Field Functions 
    bool hasTaskIdMap() const { return this->taskIdMap_ != nullptr;};
    void deleteTaskIdMap() { this->taskIdMap_ = nullptr;};
    inline     const Darabonba::Json & taskIdMap() const { DARABONBA_GET(taskIdMap_) };
    Darabonba::Json & taskIdMap() { DARABONBA_GET(taskIdMap_) };
    inline QuotaNodeViewMetric& setTaskIdMap(const Darabonba::Json & taskIdMap) { DARABONBA_SET_VALUE(taskIdMap_, taskIdMap) };
    inline QuotaNodeViewMetric& setTaskIdMap(Darabonba::Json & taskIdMap) { DARABONBA_SET_RVALUE(taskIdMap_, taskIdMap) };


    // totalCPU Field Functions 
    bool hasTotalCPU() const { return this->totalCPU_ != nullptr;};
    void deleteTotalCPU() { this->totalCPU_ = nullptr;};
    inline int64_t totalCPU() const { DARABONBA_PTR_GET_DEFAULT(totalCPU_, 0L) };
    inline QuotaNodeViewMetric& setTotalCPU(int64_t totalCPU) { DARABONBA_PTR_SET_VALUE(totalCPU_, totalCPU) };


    // totalGPU Field Functions 
    bool hasTotalGPU() const { return this->totalGPU_ != nullptr;};
    void deleteTotalGPU() { this->totalGPU_ = nullptr;};
    inline int64_t totalGPU() const { DARABONBA_PTR_GET_DEFAULT(totalGPU_, 0L) };
    inline QuotaNodeViewMetric& setTotalGPU(int64_t totalGPU) { DARABONBA_PTR_SET_VALUE(totalGPU_, totalGPU) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline int64_t totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0L) };
    inline QuotaNodeViewMetric& setTotalMemory(int64_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // totalTasks Field Functions 
    bool hasTotalTasks() const { return this->totalTasks_ != nullptr;};
    void deleteTotalTasks() { this->totalTasks_ = nullptr;};
    inline int64_t totalTasks() const { DARABONBA_PTR_GET_DEFAULT(totalTasks_, 0L) };
    inline QuotaNodeViewMetric& setTotalTasks(int64_t totalTasks) { DARABONBA_PTR_SET_VALUE(totalTasks_, totalTasks) };


    // userIDs Field Functions 
    bool hasUserIDs() const { return this->userIDs_ != nullptr;};
    void deleteUserIDs() { this->userIDs_ = nullptr;};
    inline const vector<string> & userIDs() const { DARABONBA_PTR_GET_CONST(userIDs_, vector<string>) };
    inline vector<string> userIDs() { DARABONBA_PTR_GET(userIDs_, vector<string>) };
    inline QuotaNodeViewMetric& setUserIDs(const vector<string> & userIDs) { DARABONBA_PTR_SET_VALUE(userIDs_, userIDs) };
    inline QuotaNodeViewMetric& setUserIDs(vector<string> && userIDs) { DARABONBA_PTR_SET_RVALUE(userIDs_, userIDs) };


    // userNumber Field Functions 
    bool hasUserNumber() const { return this->userNumber_ != nullptr;};
    void deleteUserNumber() { this->userNumber_ = nullptr;};
    inline string userNumber() const { DARABONBA_PTR_GET_DEFAULT(userNumber_, "") };
    inline QuotaNodeViewMetric& setUserNumber(string userNumber) { DARABONBA_PTR_SET_VALUE(userNumber_, userNumber) };


  protected:
    std::shared_ptr<string> CPUUsageRate_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> diskReadRate_ = nullptr;
    std::shared_ptr<string> diskWriteRate_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<string> memoryUsageRate_ = nullptr;
    std::shared_ptr<string> networkInputRate_ = nullptr;
    std::shared_ptr<string> networkOutputRate_ = nullptr;
    std::shared_ptr<string> nodeID_ = nullptr;
    std::shared_ptr<string> nodeStatus_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<int64_t> requestCPU_ = nullptr;
    std::shared_ptr<int64_t> requestGPU_ = nullptr;
    std::shared_ptr<int64_t> requestMemory_ = nullptr;
    Darabonba::Json taskIdMap_ = nullptr;
    std::shared_ptr<int64_t> totalCPU_ = nullptr;
    std::shared_ptr<int64_t> totalGPU_ = nullptr;
    std::shared_ptr<int64_t> totalMemory_ = nullptr;
    std::shared_ptr<int64_t> totalTasks_ = nullptr;
    std::shared_ptr<vector<string>> userIDs_ = nullptr;
    std::shared_ptr<string> userNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
