// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsStatus& obj) { 
      DARABONBA_PTR_TO_JSON(failed_nodes, failedNodes_);
      DARABONBA_PTR_TO_JSON(healthy_nodes, healthyNodes_);
      DARABONBA_PTR_TO_JSON(initial_nodes, initialNodes_);
      DARABONBA_PTR_TO_JSON(offline_nodes, offlineNodes_);
      DARABONBA_PTR_TO_JSON(removing_nodes, removingNodes_);
      DARABONBA_PTR_TO_JSON(serving_nodes, servingNodes_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(total_nodes, totalNodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(failed_nodes, failedNodes_);
      DARABONBA_PTR_FROM_JSON(healthy_nodes, healthyNodes_);
      DARABONBA_PTR_FROM_JSON(initial_nodes, initialNodes_);
      DARABONBA_PTR_FROM_JSON(offline_nodes, offlineNodes_);
      DARABONBA_PTR_FROM_JSON(removing_nodes, removingNodes_);
      DARABONBA_PTR_FROM_JSON(serving_nodes, servingNodes_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(total_nodes, totalNodes_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus(const DescribeClusterNodePoolsResponseBodyNodepoolsStatus &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus(DescribeClusterNodePoolsResponseBodyNodepoolsStatus &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsStatus() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsStatus &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsStatus& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedNodes_ != nullptr
        && this->healthyNodes_ != nullptr && this->initialNodes_ != nullptr && this->offlineNodes_ != nullptr && this->removingNodes_ != nullptr && this->servingNodes_ != nullptr
        && this->state_ != nullptr && this->totalNodes_ != nullptr; };
    // failedNodes Field Functions 
    bool hasFailedNodes() const { return this->failedNodes_ != nullptr;};
    void deleteFailedNodes() { this->failedNodes_ = nullptr;};
    inline int64_t failedNodes() const { DARABONBA_PTR_GET_DEFAULT(failedNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setFailedNodes(int64_t failedNodes) { DARABONBA_PTR_SET_VALUE(failedNodes_, failedNodes) };


    // healthyNodes Field Functions 
    bool hasHealthyNodes() const { return this->healthyNodes_ != nullptr;};
    void deleteHealthyNodes() { this->healthyNodes_ = nullptr;};
    inline int64_t healthyNodes() const { DARABONBA_PTR_GET_DEFAULT(healthyNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setHealthyNodes(int64_t healthyNodes) { DARABONBA_PTR_SET_VALUE(healthyNodes_, healthyNodes) };


    // initialNodes Field Functions 
    bool hasInitialNodes() const { return this->initialNodes_ != nullptr;};
    void deleteInitialNodes() { this->initialNodes_ = nullptr;};
    inline int64_t initialNodes() const { DARABONBA_PTR_GET_DEFAULT(initialNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setInitialNodes(int64_t initialNodes) { DARABONBA_PTR_SET_VALUE(initialNodes_, initialNodes) };


    // offlineNodes Field Functions 
    bool hasOfflineNodes() const { return this->offlineNodes_ != nullptr;};
    void deleteOfflineNodes() { this->offlineNodes_ = nullptr;};
    inline int64_t offlineNodes() const { DARABONBA_PTR_GET_DEFAULT(offlineNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setOfflineNodes(int64_t offlineNodes) { DARABONBA_PTR_SET_VALUE(offlineNodes_, offlineNodes) };


    // removingNodes Field Functions 
    bool hasRemovingNodes() const { return this->removingNodes_ != nullptr;};
    void deleteRemovingNodes() { this->removingNodes_ = nullptr;};
    inline int64_t removingNodes() const { DARABONBA_PTR_GET_DEFAULT(removingNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setRemovingNodes(int64_t removingNodes) { DARABONBA_PTR_SET_VALUE(removingNodes_, removingNodes) };


    // servingNodes Field Functions 
    bool hasServingNodes() const { return this->servingNodes_ != nullptr;};
    void deleteServingNodes() { this->servingNodes_ = nullptr;};
    inline int64_t servingNodes() const { DARABONBA_PTR_GET_DEFAULT(servingNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setServingNodes(int64_t servingNodes) { DARABONBA_PTR_SET_VALUE(servingNodes_, servingNodes) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // totalNodes Field Functions 
    bool hasTotalNodes() const { return this->totalNodes_ != nullptr;};
    void deleteTotalNodes() { this->totalNodes_ = nullptr;};
    inline int64_t totalNodes() const { DARABONBA_PTR_GET_DEFAULT(totalNodes_, 0L) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsStatus& setTotalNodes(int64_t totalNodes) { DARABONBA_PTR_SET_VALUE(totalNodes_, totalNodes) };


  protected:
    // The number of failed nodes.
    std::shared_ptr<int64_t> failedNodes_ = nullptr;
    // The number of healthy nodes.
    std::shared_ptr<int64_t> healthyNodes_ = nullptr;
    // The number of nodes that are being created.
    std::shared_ptr<int64_t> initialNodes_ = nullptr;
    // The number of offline nodes.
    std::shared_ptr<int64_t> offlineNodes_ = nullptr;
    // The number of nodes that are being removed.
    std::shared_ptr<int64_t> removingNodes_ = nullptr;
    // The number of running nodes.
    std::shared_ptr<int64_t> servingNodes_ = nullptr;
    // The status of the node pool. Valid values:
    // 
    // *   `active`: The node pool is active.
    // *   `scaling`: The node pool is being scaled.
    // *   `removing`: The nodes are being removed from the node pool.
    // *   `deleting`: The node pool is being deleted.
    // *   `updating`: The node pool is being updated.
    std::shared_ptr<string> state_ = nullptr;
    // The total number of nodes in the node pool.
    std::shared_ptr<int64_t> totalNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
