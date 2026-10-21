// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENODEPOOLCOMPONENTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENODEPOOLCOMPONENTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteNodePoolComponentInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNodePoolComponentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_TO_JSON(max_failed_nodes, maxFailedNodes_);
      DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_TO_JSON(node_names, nodeNamesShrink_);
      DARABONBA_PTR_TO_JSON(pause_policy, pausePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNodePoolComponentInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_FROM_JSON(max_failed_nodes, maxFailedNodes_);
      DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNamesShrink_);
      DARABONBA_PTR_FROM_JSON(pause_policy, pausePolicy_);
    };
    DeleteNodePoolComponentInstanceShrinkRequest() = default ;
    DeleteNodePoolComponentInstanceShrinkRequest(const DeleteNodePoolComponentInstanceShrinkRequest &) = default ;
    DeleteNodePoolComponentInstanceShrinkRequest(DeleteNodePoolComponentInstanceShrinkRequest &&) = default ;
    DeleteNodePoolComponentInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNodePoolComponentInstanceShrinkRequest() = default ;
    DeleteNodePoolComponentInstanceShrinkRequest& operator=(const DeleteNodePoolComponentInstanceShrinkRequest &) = default ;
    DeleteNodePoolComponentInstanceShrinkRequest& operator=(DeleteNodePoolComponentInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchInterval_ == nullptr
        && this->maxFailedNodes_ == nullptr && this->maxParallelism_ == nullptr && this->nodeNamesShrink_ == nullptr && this->pausePolicy_ == nullptr; };
    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int64_t getBatchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0L) };
    inline DeleteNodePoolComponentInstanceShrinkRequest& setBatchInterval(int64_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // maxFailedNodes Field Functions 
    bool hasMaxFailedNodes() const { return this->maxFailedNodes_ != nullptr;};
    void deleteMaxFailedNodes() { this->maxFailedNodes_ = nullptr;};
    inline int64_t getMaxFailedNodes() const { DARABONBA_PTR_GET_DEFAULT(maxFailedNodes_, 0L) };
    inline DeleteNodePoolComponentInstanceShrinkRequest& setMaxFailedNodes(int64_t maxFailedNodes) { DARABONBA_PTR_SET_VALUE(maxFailedNodes_, maxFailedNodes) };


    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int64_t getMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0L) };
    inline DeleteNodePoolComponentInstanceShrinkRequest& setMaxParallelism(int64_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    // nodeNamesShrink Field Functions 
    bool hasNodeNamesShrink() const { return this->nodeNamesShrink_ != nullptr;};
    void deleteNodeNamesShrink() { this->nodeNamesShrink_ = nullptr;};
    inline string getNodeNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeNamesShrink_, "") };
    inline DeleteNodePoolComponentInstanceShrinkRequest& setNodeNamesShrink(string nodeNamesShrink) { DARABONBA_PTR_SET_VALUE(nodeNamesShrink_, nodeNamesShrink) };


    // pausePolicy Field Functions 
    bool hasPausePolicy() const { return this->pausePolicy_ != nullptr;};
    void deletePausePolicy() { this->pausePolicy_ = nullptr;};
    inline string getPausePolicy() const { DARABONBA_PTR_GET_DEFAULT(pausePolicy_, "") };
    inline DeleteNodePoolComponentInstanceShrinkRequest& setPausePolicy(string pausePolicy) { DARABONBA_PTR_SET_VALUE(pausePolicy_, pausePolicy) };


  protected:
    // The interval between batches, in seconds. Default value: 0.
    shared_ptr<int64_t> batchInterval_ {};
    // The maximum number of nodes that can fail during the rolling process. Default value: 0. A value of 0 indicates that the task fails if any node fails. A value greater than 0 indicates that the task fails and stops if the cumulative number of failed nodes exceeds this value.
    shared_ptr<int64_t> maxFailedNodes_ {};
    // The maximum number of parallel operations per batch. Default value: 1.
    shared_ptr<int64_t> maxParallelism_ {};
    // The list of nodes to rotate. Default value: all nodes.
    shared_ptr<string> nodeNamesShrink_ {};
    // The auto-pause policy during a node upgrade. Valid values:
    // - NotPause
    // - FirstBatch
    // - EveryBatch
    // 
    // Default value: NotPause.
    shared_ptr<string> pausePolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
