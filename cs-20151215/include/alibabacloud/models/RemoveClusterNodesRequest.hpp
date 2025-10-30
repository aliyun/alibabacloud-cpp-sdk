// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECLUSTERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECLUSTERNODESREQUEST_HPP_
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
  class RemoveClusterNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveClusterNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(drain_node, drainNode_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(release_node, releaseNode_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(drain_node, drainNode_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(release_node, releaseNode_);
    };
    RemoveClusterNodesRequest() = default ;
    RemoveClusterNodesRequest(const RemoveClusterNodesRequest &) = default ;
    RemoveClusterNodesRequest(RemoveClusterNodesRequest &&) = default ;
    RemoveClusterNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveClusterNodesRequest() = default ;
    RemoveClusterNodesRequest& operator=(const RemoveClusterNodesRequest &) = default ;
    RemoveClusterNodesRequest& operator=(RemoveClusterNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drainNode_ == nullptr
        && return this->nodes_ == nullptr && return this->releaseNode_ == nullptr; };
    // drainNode Field Functions 
    bool hasDrainNode() const { return this->drainNode_ != nullptr;};
    void deleteDrainNode() { this->drainNode_ = nullptr;};
    inline bool drainNode() const { DARABONBA_PTR_GET_DEFAULT(drainNode_, false) };
    inline RemoveClusterNodesRequest& setDrainNode(bool drainNode) { DARABONBA_PTR_SET_VALUE(drainNode_, drainNode) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RemoveClusterNodesRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RemoveClusterNodesRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // releaseNode Field Functions 
    bool hasReleaseNode() const { return this->releaseNode_ != nullptr;};
    void deleteReleaseNode() { this->releaseNode_ = nullptr;};
    inline bool releaseNode() const { DARABONBA_PTR_GET_DEFAULT(releaseNode_, false) };
    inline RemoveClusterNodesRequest& setReleaseNode(bool releaseNode) { DARABONBA_PTR_SET_VALUE(releaseNode_, releaseNode) };


  protected:
    // Specifies whether to evict all pods from the nodes that you want to remove.
    std::shared_ptr<bool> drainNode_ = nullptr;
    // The list of nodes to be removed.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // Specifies whether to release the Elastic Compute Service (ECS) instances when they are removed from the cluster.
    std::shared_ptr<bool> releaseNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
