// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUERESPONSEBODYQUEUE_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUERESPONSEBODYQUEUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetQueueResponseBodyQueue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueResponseBodyQueue& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_TO_JSON(ComputeNodes, computeNodes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_TO_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_TO_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_TO_JSON(InitialCount, initialCount_);
      DARABONBA_PTR_TO_JSON(InterConnect, interConnect_);
      DARABONBA_PTR_TO_JSON(KeepAliveNodes, keepAliveNodes_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(MaxCountPerCycle, maxCountPerCycle_);
      DARABONBA_PTR_TO_JSON(MinCount, minCount_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueResponseBodyQueue& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
      DARABONBA_PTR_FROM_JSON(ComputeNodes, computeNodes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_FROM_JSON(HostnamePrefix, hostnamePrefix_);
      DARABONBA_PTR_FROM_JSON(HostnameSuffix, hostnameSuffix_);
      DARABONBA_PTR_FROM_JSON(InitialCount, initialCount_);
      DARABONBA_PTR_FROM_JSON(InterConnect, interConnect_);
      DARABONBA_PTR_FROM_JSON(KeepAliveNodes, keepAliveNodes_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(MaxCountPerCycle, maxCountPerCycle_);
      DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(ReservedNodePoolId, reservedNodePoolId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    GetQueueResponseBodyQueue() = default ;
    GetQueueResponseBodyQueue(const GetQueueResponseBodyQueue &) = default ;
    GetQueueResponseBodyQueue(GetQueueResponseBodyQueue &&) = default ;
    GetQueueResponseBodyQueue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueResponseBodyQueue() = default ;
    GetQueueResponseBodyQueue& operator=(const GetQueueResponseBodyQueue &) = default ;
    GetQueueResponseBodyQueue& operator=(GetQueueResponseBodyQueue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationStrategy_ == nullptr
        && return this->computeNodes_ == nullptr && return this->createTime_ == nullptr && return this->enableScaleIn_ == nullptr && return this->enableScaleOut_ == nullptr && return this->hostnamePrefix_ == nullptr
        && return this->hostnameSuffix_ == nullptr && return this->initialCount_ == nullptr && return this->interConnect_ == nullptr && return this->keepAliveNodes_ == nullptr && return this->maxCount_ == nullptr
        && return this->maxCountPerCycle_ == nullptr && return this->minCount_ == nullptr && return this->queueName_ == nullptr && return this->ramRole_ == nullptr && return this->reservedNodePoolId_ == nullptr
        && return this->updateTime_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // allocationStrategy Field Functions 
    bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
    void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
    inline string allocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
    inline GetQueueResponseBodyQueue& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


    // computeNodes Field Functions 
    bool hasComputeNodes() const { return this->computeNodes_ != nullptr;};
    void deleteComputeNodes() { this->computeNodes_ = nullptr;};
    inline const vector<Models::NodeTemplate> & computeNodes() const { DARABONBA_PTR_GET_CONST(computeNodes_, vector<Models::NodeTemplate>) };
    inline vector<Models::NodeTemplate> computeNodes() { DARABONBA_PTR_GET(computeNodes_, vector<Models::NodeTemplate>) };
    inline GetQueueResponseBodyQueue& setComputeNodes(const vector<Models::NodeTemplate> & computeNodes) { DARABONBA_PTR_SET_VALUE(computeNodes_, computeNodes) };
    inline GetQueueResponseBodyQueue& setComputeNodes(vector<Models::NodeTemplate> && computeNodes) { DARABONBA_PTR_SET_RVALUE(computeNodes_, computeNodes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetQueueResponseBodyQueue& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool enableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline GetQueueResponseBodyQueue& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool enableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline GetQueueResponseBodyQueue& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // hostnamePrefix Field Functions 
    bool hasHostnamePrefix() const { return this->hostnamePrefix_ != nullptr;};
    void deleteHostnamePrefix() { this->hostnamePrefix_ = nullptr;};
    inline string hostnamePrefix() const { DARABONBA_PTR_GET_DEFAULT(hostnamePrefix_, "") };
    inline GetQueueResponseBodyQueue& setHostnamePrefix(string hostnamePrefix) { DARABONBA_PTR_SET_VALUE(hostnamePrefix_, hostnamePrefix) };


    // hostnameSuffix Field Functions 
    bool hasHostnameSuffix() const { return this->hostnameSuffix_ != nullptr;};
    void deleteHostnameSuffix() { this->hostnameSuffix_ = nullptr;};
    inline string hostnameSuffix() const { DARABONBA_PTR_GET_DEFAULT(hostnameSuffix_, "") };
    inline GetQueueResponseBodyQueue& setHostnameSuffix(string hostnameSuffix) { DARABONBA_PTR_SET_VALUE(hostnameSuffix_, hostnameSuffix) };


    // initialCount Field Functions 
    bool hasInitialCount() const { return this->initialCount_ != nullptr;};
    void deleteInitialCount() { this->initialCount_ = nullptr;};
    inline int32_t initialCount() const { DARABONBA_PTR_GET_DEFAULT(initialCount_, 0) };
    inline GetQueueResponseBodyQueue& setInitialCount(int32_t initialCount) { DARABONBA_PTR_SET_VALUE(initialCount_, initialCount) };


    // interConnect Field Functions 
    bool hasInterConnect() const { return this->interConnect_ != nullptr;};
    void deleteInterConnect() { this->interConnect_ = nullptr;};
    inline string interConnect() const { DARABONBA_PTR_GET_DEFAULT(interConnect_, "") };
    inline GetQueueResponseBodyQueue& setInterConnect(string interConnect) { DARABONBA_PTR_SET_VALUE(interConnect_, interConnect) };


    // keepAliveNodes Field Functions 
    bool hasKeepAliveNodes() const { return this->keepAliveNodes_ != nullptr;};
    void deleteKeepAliveNodes() { this->keepAliveNodes_ = nullptr;};
    inline const vector<string> & keepAliveNodes() const { DARABONBA_PTR_GET_CONST(keepAliveNodes_, vector<string>) };
    inline vector<string> keepAliveNodes() { DARABONBA_PTR_GET(keepAliveNodes_, vector<string>) };
    inline GetQueueResponseBodyQueue& setKeepAliveNodes(const vector<string> & keepAliveNodes) { DARABONBA_PTR_SET_VALUE(keepAliveNodes_, keepAliveNodes) };
    inline GetQueueResponseBodyQueue& setKeepAliveNodes(vector<string> && keepAliveNodes) { DARABONBA_PTR_SET_RVALUE(keepAliveNodes_, keepAliveNodes) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline GetQueueResponseBodyQueue& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // maxCountPerCycle Field Functions 
    bool hasMaxCountPerCycle() const { return this->maxCountPerCycle_ != nullptr;};
    void deleteMaxCountPerCycle() { this->maxCountPerCycle_ = nullptr;};
    inline int64_t maxCountPerCycle() const { DARABONBA_PTR_GET_DEFAULT(maxCountPerCycle_, 0L) };
    inline GetQueueResponseBodyQueue& setMaxCountPerCycle(int64_t maxCountPerCycle) { DARABONBA_PTR_SET_VALUE(maxCountPerCycle_, maxCountPerCycle) };


    // minCount Field Functions 
    bool hasMinCount() const { return this->minCount_ != nullptr;};
    void deleteMinCount() { this->minCount_ = nullptr;};
    inline int32_t minCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, 0) };
    inline GetQueueResponseBodyQueue& setMinCount(int32_t minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetQueueResponseBodyQueue& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline GetQueueResponseBodyQueue& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // reservedNodePoolId Field Functions 
    bool hasReservedNodePoolId() const { return this->reservedNodePoolId_ != nullptr;};
    void deleteReservedNodePoolId() { this->reservedNodePoolId_ = nullptr;};
    inline string reservedNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(reservedNodePoolId_, "") };
    inline GetQueueResponseBodyQueue& setReservedNodePoolId(string reservedNodePoolId) { DARABONBA_PTR_SET_VALUE(reservedNodePoolId_, reservedNodePoolId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetQueueResponseBodyQueue& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline GetQueueResponseBodyQueue& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetQueueResponseBodyQueue& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The auto scale-out policy of the queue.
    std::shared_ptr<string> allocationStrategy_ = nullptr;
    // The hardware configurations of the compute nodes in the queue.
    std::shared_ptr<vector<Models::NodeTemplate>> computeNodes_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether auto scale-in is enabled for the queue. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableScaleIn_ = nullptr;
    // Indicates whether auto scale-out is enabled for the queue. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableScaleOut_ = nullptr;
    // The hostname prefix of the compute nodes in the queue.
    std::shared_ptr<string> hostnamePrefix_ = nullptr;
    // The hostname suffix of the compute nodes in the queue.
    std::shared_ptr<string> hostnameSuffix_ = nullptr;
    // The initial number of nodes in the queue.
    std::shared_ptr<int32_t> initialCount_ = nullptr;
    // The type of the network between compute nodes in the queue. Valid values:
    // 
    // *   vpc
    // *   eRDMA
    std::shared_ptr<string> interConnect_ = nullptr;
    // The nodes for which deletion protection is enabled in the queue.
    std::shared_ptr<vector<string>> keepAliveNodes_ = nullptr;
    // The maximum number of compute nodes that the queue can contain.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
    // The minimum number of nodes that are delivered to the queue in each scale-out cycle.
    std::shared_ptr<int64_t> maxCountPerCycle_ = nullptr;
    // The minimum number of compute nodes that the queue must contain.
    std::shared_ptr<int32_t> minCount_ = nullptr;
    // The queue name.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueName_ = nullptr;
    // The Resource Access Management (RAM) role that is assumed by compute nodes in the queue.
    std::shared_ptr<string> ramRole_ = nullptr;
    // Preset node pool ID.
    std::shared_ptr<string> reservedNodePoolId_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    // The available vSwitches for compute nodes in the queue. Valid values of N: 1 to 5.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
