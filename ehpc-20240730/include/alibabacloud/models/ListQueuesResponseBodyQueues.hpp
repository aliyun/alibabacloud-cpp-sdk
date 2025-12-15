// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYQUEUES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYQUEUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeTemplate.hpp>
#include <alibabacloud/models/ListQueuesResponseBodyQueuesNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListQueuesResponseBodyQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBodyQueues& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeNodes, computeNodes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(MaxCountPerCycle, maxCountPerCycle_);
      DARABONBA_PTR_TO_JSON(MinCount, minCount_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(TotalCores, totalCores_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBodyQueues& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeNodes, computeNodes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(MaxCountPerCycle, maxCountPerCycle_);
      DARABONBA_PTR_FROM_JSON(MinCount, minCount_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(TotalCores, totalCores_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ListQueuesResponseBodyQueues() = default ;
    ListQueuesResponseBodyQueues(const ListQueuesResponseBodyQueues &) = default ;
    ListQueuesResponseBodyQueues(ListQueuesResponseBodyQueues &&) = default ;
    ListQueuesResponseBodyQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBodyQueues() = default ;
    ListQueuesResponseBodyQueues& operator=(const ListQueuesResponseBodyQueues &) = default ;
    ListQueuesResponseBodyQueues& operator=(ListQueuesResponseBodyQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeNodes_ == nullptr
        && return this->createTime_ == nullptr && return this->enableScaleIn_ == nullptr && return this->enableScaleOut_ == nullptr && return this->maxCount_ == nullptr && return this->maxCountPerCycle_ == nullptr
        && return this->minCount_ == nullptr && return this->nodes_ == nullptr && return this->queueName_ == nullptr && return this->totalCores_ == nullptr && return this->updateTime_ == nullptr
        && return this->vSwitchIds_ == nullptr; };
    // computeNodes Field Functions 
    bool hasComputeNodes() const { return this->computeNodes_ != nullptr;};
    void deleteComputeNodes() { this->computeNodes_ = nullptr;};
    inline const vector<Models::NodeTemplate> & computeNodes() const { DARABONBA_PTR_GET_CONST(computeNodes_, vector<Models::NodeTemplate>) };
    inline vector<Models::NodeTemplate> computeNodes() { DARABONBA_PTR_GET(computeNodes_, vector<Models::NodeTemplate>) };
    inline ListQueuesResponseBodyQueues& setComputeNodes(const vector<Models::NodeTemplate> & computeNodes) { DARABONBA_PTR_SET_VALUE(computeNodes_, computeNodes) };
    inline ListQueuesResponseBodyQueues& setComputeNodes(vector<Models::NodeTemplate> && computeNodes) { DARABONBA_PTR_SET_RVALUE(computeNodes_, computeNodes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListQueuesResponseBodyQueues& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool enableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline ListQueuesResponseBodyQueues& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool enableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline ListQueuesResponseBodyQueues& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline ListQueuesResponseBodyQueues& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // maxCountPerCycle Field Functions 
    bool hasMaxCountPerCycle() const { return this->maxCountPerCycle_ != nullptr;};
    void deleteMaxCountPerCycle() { this->maxCountPerCycle_ = nullptr;};
    inline int32_t maxCountPerCycle() const { DARABONBA_PTR_GET_DEFAULT(maxCountPerCycle_, 0) };
    inline ListQueuesResponseBodyQueues& setMaxCountPerCycle(int32_t maxCountPerCycle) { DARABONBA_PTR_SET_VALUE(maxCountPerCycle_, maxCountPerCycle) };


    // minCount Field Functions 
    bool hasMinCount() const { return this->minCount_ != nullptr;};
    void deleteMinCount() { this->minCount_ = nullptr;};
    inline int32_t minCount() const { DARABONBA_PTR_GET_DEFAULT(minCount_, 0) };
    inline ListQueuesResponseBodyQueues& setMinCount(int32_t minCount) { DARABONBA_PTR_SET_VALUE(minCount_, minCount) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const Models::ListQueuesResponseBodyQueuesNodes & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, Models::ListQueuesResponseBodyQueuesNodes) };
    inline Models::ListQueuesResponseBodyQueuesNodes nodes() { DARABONBA_PTR_GET(nodes_, Models::ListQueuesResponseBodyQueuesNodes) };
    inline ListQueuesResponseBodyQueues& setNodes(const Models::ListQueuesResponseBodyQueuesNodes & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListQueuesResponseBodyQueues& setNodes(Models::ListQueuesResponseBodyQueuesNodes && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListQueuesResponseBodyQueues& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // totalCores Field Functions 
    bool hasTotalCores() const { return this->totalCores_ != nullptr;};
    void deleteTotalCores() { this->totalCores_ = nullptr;};
    inline int32_t totalCores() const { DARABONBA_PTR_GET_DEFAULT(totalCores_, 0) };
    inline ListQueuesResponseBodyQueues& setTotalCores(int32_t totalCores) { DARABONBA_PTR_SET_VALUE(totalCores_, totalCores) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListQueuesResponseBodyQueues& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ListQueuesResponseBodyQueues& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListQueuesResponseBodyQueues& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The hardware configurations of the compute nodes that are added in auto scale-outs. Up to five nodes are displayed.
    std::shared_ptr<vector<Models::NodeTemplate>> computeNodes_ = nullptr;
    // The time when the queue was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
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
    // The maximum number of compute nodes that the queue can contain.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
    // The minimum number of compute nodes that are added to the queue in each auto scale-out.
    std::shared_ptr<int32_t> maxCountPerCycle_ = nullptr;
    // The minimum number of compute nodes that the queue must contain.
    std::shared_ptr<int32_t> minCount_ = nullptr;
    // The statistics about the compute nodes in the queue.
    std::shared_ptr<Models::ListQueuesResponseBodyQueuesNodes> nodes_ = nullptr;
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
    // The total number of vCPUs that are used by all compute nodes in the queue.
    std::shared_ptr<int32_t> totalCores_ = nullptr;
    // The time when the queue was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    std::shared_ptr<string> updateTime_ = nullptr;
    // The vSwitches that can be used for added nodes during auto scale-outs. Up to three vSwitches are displayed.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
