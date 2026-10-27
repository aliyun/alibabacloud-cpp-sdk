// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENODEPOOLCOMPONENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENODEPOOLCOMPONENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteNodePoolComponentInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNodePoolComponentInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_TO_JSON(max_failed_nodes, maxFailedNodes_);
      DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_TO_JSON(node_names, nodeNames_);
      DARABONBA_PTR_TO_JSON(pause_policy, pausePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNodePoolComponentInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_FROM_JSON(max_failed_nodes, maxFailedNodes_);
      DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNames_);
      DARABONBA_PTR_FROM_JSON(pause_policy, pausePolicy_);
    };
    DeleteNodePoolComponentInstanceRequest() = default ;
    DeleteNodePoolComponentInstanceRequest(const DeleteNodePoolComponentInstanceRequest &) = default ;
    DeleteNodePoolComponentInstanceRequest(DeleteNodePoolComponentInstanceRequest &&) = default ;
    DeleteNodePoolComponentInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNodePoolComponentInstanceRequest() = default ;
    DeleteNodePoolComponentInstanceRequest& operator=(const DeleteNodePoolComponentInstanceRequest &) = default ;
    DeleteNodePoolComponentInstanceRequest& operator=(DeleteNodePoolComponentInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchInterval_ == nullptr
        && this->maxFailedNodes_ == nullptr && this->maxParallelism_ == nullptr && this->nodeNames_ == nullptr && this->pausePolicy_ == nullptr; };
    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int64_t getBatchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0L) };
    inline DeleteNodePoolComponentInstanceRequest& setBatchInterval(int64_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // maxFailedNodes Field Functions 
    bool hasMaxFailedNodes() const { return this->maxFailedNodes_ != nullptr;};
    void deleteMaxFailedNodes() { this->maxFailedNodes_ = nullptr;};
    inline int64_t getMaxFailedNodes() const { DARABONBA_PTR_GET_DEFAULT(maxFailedNodes_, 0L) };
    inline DeleteNodePoolComponentInstanceRequest& setMaxFailedNodes(int64_t maxFailedNodes) { DARABONBA_PTR_SET_VALUE(maxFailedNodes_, maxFailedNodes) };


    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int64_t getMaxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0L) };
    inline DeleteNodePoolComponentInstanceRequest& setMaxParallelism(int64_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline DeleteNodePoolComponentInstanceRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline DeleteNodePoolComponentInstanceRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // pausePolicy Field Functions 
    bool hasPausePolicy() const { return this->pausePolicy_ != nullptr;};
    void deletePausePolicy() { this->pausePolicy_ = nullptr;};
    inline string getPausePolicy() const { DARABONBA_PTR_GET_DEFAULT(pausePolicy_, "") };
    inline DeleteNodePoolComponentInstanceRequest& setPausePolicy(string pausePolicy) { DARABONBA_PTR_SET_VALUE(pausePolicy_, pausePolicy) };


  protected:
    // The interval between batches, in seconds. Default value: 0.
    shared_ptr<int64_t> batchInterval_ {};
    // The maximum number of nodes that are allowed to fail during the rolling process. Default value: 0. A value of 0 indicates that the task fails if any node fails. A value greater than 0 indicates that the task fails and stops if the cumulative number of failed nodes exceeds this value.
    shared_ptr<int64_t> maxFailedNodes_ {};
    // The maximum number of parallel nodes per batch. Default value: 1.
    shared_ptr<int64_t> maxParallelism_ {};
    // The list of nodes to rotate. Default value: all nodes.
    shared_ptr<vector<string>> nodeNames_ {};
    // The auto-pause policy during the node upgrade process. Valid values:
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
