// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUEUEREQUEST_HPP_
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
  class UpdateQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
    };
    UpdateQueueRequest() = default ;
    UpdateQueueRequest(const UpdateQueueRequest &) = default ;
    UpdateQueueRequest(UpdateQueueRequest &&) = default ;
    UpdateQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQueueRequest() = default ;
    UpdateQueueRequest& operator=(const UpdateQueueRequest &) = default ;
    UpdateQueueRequest& operator=(UpdateQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queue& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
        DARABONBA_PTR_TO_JSON(ComputeNodes, computeNodes_);
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
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, Queue& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
        DARABONBA_PTR_FROM_JSON(ComputeNodes, computeNodes_);
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
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      Queue() = default ;
      Queue(const Queue &) = default ;
      Queue(Queue &&) = default ;
      Queue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queue() = default ;
      Queue& operator=(const Queue &) = default ;
      Queue& operator=(Queue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocationStrategy_ == nullptr
        && this->computeNodes_ == nullptr && this->enableScaleIn_ == nullptr && this->enableScaleOut_ == nullptr && this->hostnamePrefix_ == nullptr && this->hostnameSuffix_ == nullptr
        && this->initialCount_ == nullptr && this->interConnect_ == nullptr && this->keepAliveNodes_ == nullptr && this->maxCount_ == nullptr && this->maxCountPerCycle_ == nullptr
        && this->minCount_ == nullptr && this->queueName_ == nullptr && this->ramRole_ == nullptr && this->reservedNodePoolId_ == nullptr && this->vSwitchIds_ == nullptr; };
      // allocationStrategy Field Functions 
      bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
      void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
      inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
      inline Queue& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


      // computeNodes Field Functions 
      bool hasComputeNodes() const { return this->computeNodes_ != nullptr;};
      void deleteComputeNodes() { this->computeNodes_ = nullptr;};
      inline const vector<NodeTemplate> & getComputeNodes() const { DARABONBA_PTR_GET_CONST(computeNodes_, vector<NodeTemplate>) };
      inline vector<NodeTemplate> getComputeNodes() { DARABONBA_PTR_GET(computeNodes_, vector<NodeTemplate>) };
      inline Queue& setComputeNodes(const vector<NodeTemplate> & computeNodes) { DARABONBA_PTR_SET_VALUE(computeNodes_, computeNodes) };
      inline Queue& setComputeNodes(vector<NodeTemplate> && computeNodes) { DARABONBA_PTR_SET_RVALUE(computeNodes_, computeNodes) };


      // enableScaleIn Field Functions 
      bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
      void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
      inline bool getEnableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
      inline Queue& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


      // enableScaleOut Field Functions 
      bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
      void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
      inline bool getEnableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
      inline Queue& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


      // hostnamePrefix Field Functions 
      bool hasHostnamePrefix() const { return this->hostnamePrefix_ != nullptr;};
      void deleteHostnamePrefix() { this->hostnamePrefix_ = nullptr;};
      inline string getHostnamePrefix() const { DARABONBA_PTR_GET_DEFAULT(hostnamePrefix_, "") };
      inline Queue& setHostnamePrefix(string hostnamePrefix) { DARABONBA_PTR_SET_VALUE(hostnamePrefix_, hostnamePrefix) };


      // hostnameSuffix Field Functions 
      bool hasHostnameSuffix() const { return this->hostnameSuffix_ != nullptr;};
      void deleteHostnameSuffix() { this->hostnameSuffix_ = nullptr;};
      inline string getHostnameSuffix() const { DARABONBA_PTR_GET_DEFAULT(hostnameSuffix_, "") };
      inline Queue& setHostnameSuffix(string hostnameSuffix) { DARABONBA_PTR_SET_VALUE(hostnameSuffix_, hostnameSuffix) };


      // initialCount Field Functions 
      bool hasInitialCount() const { return this->initialCount_ != nullptr;};
      void deleteInitialCount() { this->initialCount_ = nullptr;};
      inline int32_t getInitialCount() const { DARABONBA_PTR_GET_DEFAULT(initialCount_, 0) };
      inline Queue& setInitialCount(int32_t initialCount) { DARABONBA_PTR_SET_VALUE(initialCount_, initialCount) };


      // interConnect Field Functions 
      bool hasInterConnect() const { return this->interConnect_ != nullptr;};
      void deleteInterConnect() { this->interConnect_ = nullptr;};
      inline string getInterConnect() const { DARABONBA_PTR_GET_DEFAULT(interConnect_, "") };
      inline Queue& setInterConnect(string interConnect) { DARABONBA_PTR_SET_VALUE(interConnect_, interConnect) };


      // keepAliveNodes Field Functions 
      bool hasKeepAliveNodes() const { return this->keepAliveNodes_ != nullptr;};
      void deleteKeepAliveNodes() { this->keepAliveNodes_ = nullptr;};
      inline const vector<string> & getKeepAliveNodes() const { DARABONBA_PTR_GET_CONST(keepAliveNodes_, vector<string>) };
      inline vector<string> getKeepAliveNodes() { DARABONBA_PTR_GET(keepAliveNodes_, vector<string>) };
      inline Queue& setKeepAliveNodes(const vector<string> & keepAliveNodes) { DARABONBA_PTR_SET_VALUE(keepAliveNodes_, keepAliveNodes) };
      inline Queue& setKeepAliveNodes(vector<string> && keepAliveNodes) { DARABONBA_PTR_SET_RVALUE(keepAliveNodes_, keepAliveNodes) };


      // maxCount Field Functions 
      bool hasMaxCount() const { return this->maxCount_ != nullptr;};
      void deleteMaxCount() { this->maxCount_ = nullptr;};
      inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
      inline Queue& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


      // maxCountPerCycle Field Functions 
      bool hasMaxCountPerCycle() const { return this->maxCountPerCycle_ != nullptr;};
      void deleteMaxCountPerCycle() { this->maxCountPerCycle_ = nullptr;};
      inline int64_t getMaxCountPerCycle() const { DARABONBA_PTR_GET_DEFAULT(maxCountPerCycle_, 0L) };
      inline Queue& setMaxCountPerCycle(int64_t maxCountPerCycle) { DARABONBA_PTR_SET_VALUE(maxCountPerCycle_, maxCountPerCycle) };


      // minCount Field Functions 
      bool hasMinCount() const { return this->minCount_ != nullptr;};
      void deleteMinCount() { this->minCount_ = nullptr;};
      inline int32_t getMinCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, 0) };
      inline Queue& setMinCount(int32_t minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Queue& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Queue& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // reservedNodePoolId Field Functions 
      bool hasReservedNodePoolId() const { return this->reservedNodePoolId_ != nullptr;};
      void deleteReservedNodePoolId() { this->reservedNodePoolId_ = nullptr;};
      inline string getReservedNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(reservedNodePoolId_, "") };
      inline Queue& setReservedNodePoolId(string reservedNodePoolId) { DARABONBA_PTR_SET_VALUE(reservedNodePoolId_, reservedNodePoolId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Queue& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Queue& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The policy based on which instance types are selected for compute nodes during auto scale-outs. Valid values:
      // 
      // *   PriorityInstanceType
      shared_ptr<string> allocationStrategy_ {};
      // The hardware configurations of the compute nodes in the queue. Valid values of N: 1 to 10.
      shared_ptr<vector<NodeTemplate>> computeNodes_ {};
      // Specifies whether to enable auto scale-in for the queue. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableScaleIn_ {};
      // Specifies whether to enable auto scale-out for the queue. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableScaleOut_ {};
      // The hostname prefix of the added compute nodes.
      shared_ptr<string> hostnamePrefix_ {};
      // The hostname suffix of the compute nodes in the queue.
      shared_ptr<string> hostnameSuffix_ {};
      // The initial number of compute nodes in the queue.
      shared_ptr<int32_t> initialCount_ {};
      // The type of the network for interconnecting compute nodes in the queue.
      shared_ptr<string> interConnect_ {};
      // List of excluded compute nodes in the queue.
      shared_ptr<vector<string>> keepAliveNodes_ {};
      // The maximum number of compute nodes that the queue can contain.
      shared_ptr<int32_t> maxCount_ {};
      // The minimum number of compute nodes that are added to the queue during an automatic scale-out.
      shared_ptr<int64_t> maxCountPerCycle_ {};
      // The minimum number of compute nodes that the queue must contain.
      shared_ptr<int32_t> minCount_ {};
      // The queue name.
      // 
      // This parameter is required.
      shared_ptr<string> queueName_ {};
      // The Resource Access Management (RAM) role that is assumed by compute nodes in the queue.
      shared_ptr<string> ramRole_ {};
      shared_ptr<string> reservedNodePoolId_ {};
      // The vSwitches available for use by compute nodes in the queue.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->queue_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateQueueRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline const UpdateQueueRequest::Queue & getQueue() const { DARABONBA_PTR_GET_CONST(queue_, UpdateQueueRequest::Queue) };
    inline UpdateQueueRequest::Queue getQueue() { DARABONBA_PTR_GET(queue_, UpdateQueueRequest::Queue) };
    inline UpdateQueueRequest& setQueue(const UpdateQueueRequest::Queue & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
    inline UpdateQueueRequest& setQueue(UpdateQueueRequest::Queue && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
    // The information about the queue to be updated.
    shared_ptr<UpdateQueueRequest::Queue> queue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
