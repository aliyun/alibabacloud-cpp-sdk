// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERNODESREQUEST_HPP_
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
  class DeleteClusterNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(drain_node, drainNode_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(release_node, releaseNode_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(drain_node, drainNode_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(release_node, releaseNode_);
    };
    DeleteClusterNodesRequest() = default ;
    DeleteClusterNodesRequest(const DeleteClusterNodesRequest &) = default ;
    DeleteClusterNodesRequest(DeleteClusterNodesRequest &&) = default ;
    DeleteClusterNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterNodesRequest() = default ;
    DeleteClusterNodesRequest& operator=(const DeleteClusterNodesRequest &) = default ;
    DeleteClusterNodesRequest& operator=(DeleteClusterNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drainNode_ != nullptr
        && this->nodes_ != nullptr && this->releaseNode_ != nullptr; };
    // drainNode Field Functions 
    bool hasDrainNode() const { return this->drainNode_ != nullptr;};
    void deleteDrainNode() { this->drainNode_ = nullptr;};
    inline bool drainNode() const { DARABONBA_PTR_GET_DEFAULT(drainNode_, false) };
    inline DeleteClusterNodesRequest& setDrainNode(bool drainNode) { DARABONBA_PTR_SET_VALUE(drainNode_, drainNode) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline DeleteClusterNodesRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DeleteClusterNodesRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // releaseNode Field Functions 
    bool hasReleaseNode() const { return this->releaseNode_ != nullptr;};
    void deleteReleaseNode() { this->releaseNode_ = nullptr;};
    inline bool releaseNode() const { DARABONBA_PTR_GET_DEFAULT(releaseNode_, false) };
    inline DeleteClusterNodesRequest& setReleaseNode(bool releaseNode) { DARABONBA_PTR_SET_VALUE(releaseNode_, releaseNode) };


  protected:
    // Specifies whether to remove all pods from the nodes you want to remove. Valid values:
    // 
    // *   `true`: removes all pods automatically.
    // *   `false`: skips removing pods.
    // 
    // Default value: `false`
    std::shared_ptr<bool> drainNode_ = nullptr;
    // The list of nodes to remove. You must specify the node names used in the cluster, for example, `cn-hangzhou.192.168.xx.xx`.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // Specifies whether to release the ECS instances. Valid values:
    // 
    // *   `true`: releases the ECS instances.
    // *   `false`: retains the ECS instances.
    // 
    // Default value: `false`
    // 
    // **
    // 
    // **Notes** Unsupported for subscription ECS instances.
    std::shared_ptr<bool> releaseNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
