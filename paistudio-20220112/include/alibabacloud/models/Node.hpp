// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODE_HPP_
#define ALIBABACLOUD_MODELS_NODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Node : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Node& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_TO_JSON(BoundQuotas, boundQuotas_);
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(HyperZone, hyperZone_);
      DARABONBA_PTR_TO_JSON(IsBound, isBound_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitGPU, limitGPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(MachineGroupId, machineGroupId_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(PodNum, podNum_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(WorkloadNum, workloadNum_);
    };
    friend void from_json(const Darabonba::Json& j, Node& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
      DARABONBA_PTR_FROM_JSON(BoundQuotas, boundQuotas_);
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(HyperZone, hyperZone_);
      DARABONBA_PTR_FROM_JSON(IsBound, isBound_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitGPU, limitGPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(MachineGroupId, machineGroupId_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(PodNum, podNum_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(WorkloadNum, workloadNum_);
    };
    Node() = default ;
    Node(const Node &) = default ;
    Node(Node &&) = default ;
    Node(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Node() = default ;
    Node& operator=(const Node &) = default ;
    Node& operator=(Node &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->availabilityZone_ != nullptr && this->boundQuotas_ != nullptr && this->CPU_ != nullptr && this->creatorId_ != nullptr && this->GPU_ != nullptr
        && this->GPUMemory_ != nullptr && this->GPUType_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtExpiredTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->hyperZone_ != nullptr && this->isBound_ != nullptr && this->limitCPU_ != nullptr && this->limitGPU_ != nullptr && this->limitMemory_ != nullptr
        && this->machineGroupId_ != nullptr && this->memory_ != nullptr && this->nodeName_ != nullptr && this->nodeStatus_ != nullptr && this->nodeType_ != nullptr
        && this->orderStatus_ != nullptr && this->podNum_ != nullptr && this->reasonCode_ != nullptr && this->reasonMessage_ != nullptr && this->requestCPU_ != nullptr
        && this->requestGPU_ != nullptr && this->requestMemory_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceGroupName_ != nullptr && this->users_ != nullptr
        && this->workloadNum_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline Node& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // availabilityZone Field Functions 
    bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
    void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
    inline string availabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
    inline Node& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


    // boundQuotas Field Functions 
    bool hasBoundQuotas() const { return this->boundQuotas_ != nullptr;};
    void deleteBoundQuotas() { this->boundQuotas_ = nullptr;};
    inline const vector<QuotaIdName> & boundQuotas() const { DARABONBA_PTR_GET_CONST(boundQuotas_, vector<QuotaIdName>) };
    inline vector<QuotaIdName> boundQuotas() { DARABONBA_PTR_GET(boundQuotas_, vector<QuotaIdName>) };
    inline Node& setBoundQuotas(const vector<QuotaIdName> & boundQuotas) { DARABONBA_PTR_SET_VALUE(boundQuotas_, boundQuotas) };
    inline Node& setBoundQuotas(vector<QuotaIdName> && boundQuotas) { DARABONBA_PTR_SET_RVALUE(boundQuotas_, boundQuotas) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline Node& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline Node& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline Node& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline string GPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, "") };
    inline Node& setGPUMemory(string GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline Node& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Node& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtExpiredTime Field Functions 
    bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
    void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
    inline string gmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
    inline Node& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Node& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // hyperZone Field Functions 
    bool hasHyperZone() const { return this->hyperZone_ != nullptr;};
    void deleteHyperZone() { this->hyperZone_ = nullptr;};
    inline string hyperZone() const { DARABONBA_PTR_GET_DEFAULT(hyperZone_, "") };
    inline Node& setHyperZone(string hyperZone) { DARABONBA_PTR_SET_VALUE(hyperZone_, hyperZone) };


    // isBound Field Functions 
    bool hasIsBound() const { return this->isBound_ != nullptr;};
    void deleteIsBound() { this->isBound_ = nullptr;};
    inline bool isBound() const { DARABONBA_PTR_GET_DEFAULT(isBound_, false) };
    inline Node& setIsBound(bool isBound) { DARABONBA_PTR_SET_VALUE(isBound_, isBound) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline Node& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitGPU Field Functions 
    bool hasLimitGPU() const { return this->limitGPU_ != nullptr;};
    void deleteLimitGPU() { this->limitGPU_ = nullptr;};
    inline string limitGPU() const { DARABONBA_PTR_GET_DEFAULT(limitGPU_, "") };
    inline Node& setLimitGPU(string limitGPU) { DARABONBA_PTR_SET_VALUE(limitGPU_, limitGPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline Node& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // machineGroupId Field Functions 
    bool hasMachineGroupId() const { return this->machineGroupId_ != nullptr;};
    void deleteMachineGroupId() { this->machineGroupId_ = nullptr;};
    inline string machineGroupId() const { DARABONBA_PTR_GET_DEFAULT(machineGroupId_, "") };
    inline Node& setMachineGroupId(string machineGroupId) { DARABONBA_PTR_SET_VALUE(machineGroupId_, machineGroupId) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline Node& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline Node& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeStatus Field Functions 
    bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
    void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
    inline string nodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
    inline Node& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline Node& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline Node& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // podNum Field Functions 
    bool hasPodNum() const { return this->podNum_ != nullptr;};
    void deletePodNum() { this->podNum_ = nullptr;};
    inline int64_t podNum() const { DARABONBA_PTR_GET_DEFAULT(podNum_, 0L) };
    inline Node& setPodNum(int64_t podNum) { DARABONBA_PTR_SET_VALUE(podNum_, podNum) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline Node& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline Node& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline Node& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline string requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, "") };
    inline Node& setRequestGPU(string requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline Node& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Node& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline Node& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<UserInfo> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<UserInfo>) };
    inline vector<UserInfo> users() { DARABONBA_PTR_GET(users_, vector<UserInfo>) };
    inline Node& setUsers(const vector<UserInfo> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline Node& setUsers(vector<UserInfo> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    // workloadNum Field Functions 
    bool hasWorkloadNum() const { return this->workloadNum_ != nullptr;};
    void deleteWorkloadNum() { this->workloadNum_ = nullptr;};
    inline int64_t workloadNum() const { DARABONBA_PTR_GET_DEFAULT(workloadNum_, 0L) };
    inline Node& setWorkloadNum(int64_t workloadNum) { DARABONBA_PTR_SET_VALUE(workloadNum_, workloadNum) };


  protected:
    std::shared_ptr<string> acceleratorType_ = nullptr;
    std::shared_ptr<string> availabilityZone_ = nullptr;
    std::shared_ptr<vector<QuotaIdName>> boundQuotas_ = nullptr;
    std::shared_ptr<string> CPU_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> GPU_ = nullptr;
    std::shared_ptr<string> GPUMemory_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtExpiredTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> hyperZone_ = nullptr;
    std::shared_ptr<bool> isBound_ = nullptr;
    std::shared_ptr<string> limitCPU_ = nullptr;
    std::shared_ptr<string> limitGPU_ = nullptr;
    std::shared_ptr<string> limitMemory_ = nullptr;
    std::shared_ptr<string> machineGroupId_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> nodeStatus_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> orderStatus_ = nullptr;
    std::shared_ptr<int64_t> podNum_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> requestCPU_ = nullptr;
    std::shared_ptr<string> requestGPU_ = nullptr;
    std::shared_ptr<string> requestMemory_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<vector<UserInfo>> users_ = nullptr;
    std::shared_ptr<int64_t> workloadNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
