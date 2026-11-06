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
      DARABONBA_PTR_TO_JSON(drain_timeout_seconds, drainTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(release_node, releaseNode_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(drain_node, drainNode_);
      DARABONBA_PTR_FROM_JSON(drain_timeout_seconds, drainTimeoutSeconds_);
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
    virtual bool empty() const override { return this->drainNode_ == nullptr
        && this->drainTimeoutSeconds_ == nullptr && this->nodes_ == nullptr && this->releaseNode_ == nullptr; };
    // drainNode Field Functions 
    bool hasDrainNode() const { return this->drainNode_ != nullptr;};
    void deleteDrainNode() { this->drainNode_ = nullptr;};
    inline bool getDrainNode() const { DARABONBA_PTR_GET_DEFAULT(drainNode_, false) };
    inline DeleteClusterNodesRequest& setDrainNode(bool drainNode) { DARABONBA_PTR_SET_VALUE(drainNode_, drainNode) };


    // drainTimeoutSeconds Field Functions 
    bool hasDrainTimeoutSeconds() const { return this->drainTimeoutSeconds_ != nullptr;};
    void deleteDrainTimeoutSeconds() { this->drainTimeoutSeconds_ = nullptr;};
    inline int64_t getDrainTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(drainTimeoutSeconds_, 0L) };
    inline DeleteClusterNodesRequest& setDrainTimeoutSeconds(int64_t drainTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(drainTimeoutSeconds_, drainTimeoutSeconds) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> getNodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline DeleteClusterNodesRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DeleteClusterNodesRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // releaseNode Field Functions 
    bool hasReleaseNode() const { return this->releaseNode_ != nullptr;};
    void deleteReleaseNode() { this->releaseNode_ = nullptr;};
    inline bool getReleaseNode() const { DARABONBA_PTR_GET_DEFAULT(releaseNode_, false) };
    inline DeleteClusterNodesRequest& setReleaseNode(bool releaseNode) { DARABONBA_PTR_SET_VALUE(releaseNode_, releaseNode) };


  protected:
    // Specifies whether to automatically drain pods from the nodes. Valid values:
    // - `true`: Automatically drains pods from the nodes.
    // - `false`: Does not automatically drain pods from the nodes.
    // 
    // Default value: `false`.
    shared_ptr<bool> drainNode_ {};
    // The drain timeout period in seconds. Valid values: (0, 1800]. If this parameter is not specified, the default value 1800 is used. This parameter takes effect only when drain_node is set to true.
    shared_ptr<int64_t> drainTimeoutSeconds_ {};
    // The list of nodes to remove. The node name must be the name of the node in the cluster, such as `cn-hangzhou.192.168.xx.xx`.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> nodes_ {};
    // Specifies whether to release the associated ECS instances. Valid values:
    // 
    // - `true`: Releases the associated ECS instances.
    // - `false`: Retains the associated ECS instances.
    // 
    // Default value: `false`.
    // 
    // > When a node is a subscription instance, you cannot release the associated ECS instance.
    shared_ptr<bool> releaseNode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
