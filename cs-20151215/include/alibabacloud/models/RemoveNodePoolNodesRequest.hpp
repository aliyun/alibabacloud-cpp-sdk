// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESREQUEST_HPP_
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
  class RemoveNodePoolNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveNodePoolNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(drain_node, drainNode_);
      DARABONBA_PTR_TO_JSON(instance_ids, instanceIds_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(release_node, releaseNode_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveNodePoolNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(drain_node, drainNode_);
      DARABONBA_PTR_FROM_JSON(instance_ids, instanceIds_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(release_node, releaseNode_);
    };
    RemoveNodePoolNodesRequest() = default ;
    RemoveNodePoolNodesRequest(const RemoveNodePoolNodesRequest &) = default ;
    RemoveNodePoolNodesRequest(RemoveNodePoolNodesRequest &&) = default ;
    RemoveNodePoolNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveNodePoolNodesRequest() = default ;
    RemoveNodePoolNodesRequest& operator=(const RemoveNodePoolNodesRequest &) = default ;
    RemoveNodePoolNodesRequest& operator=(RemoveNodePoolNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrency_ != nullptr
        && this->drainNode_ != nullptr && this->instanceIds_ != nullptr && this->nodes_ != nullptr && this->releaseNode_ != nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline bool concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, false) };
    inline RemoveNodePoolNodesRequest& setConcurrency(bool concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // drainNode Field Functions 
    bool hasDrainNode() const { return this->drainNode_ != nullptr;};
    void deleteDrainNode() { this->drainNode_ = nullptr;};
    inline bool drainNode() const { DARABONBA_PTR_GET_DEFAULT(drainNode_, false) };
    inline RemoveNodePoolNodesRequest& setDrainNode(bool drainNode) { DARABONBA_PTR_SET_VALUE(drainNode_, drainNode) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RemoveNodePoolNodesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RemoveNodePoolNodesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline RemoveNodePoolNodesRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline RemoveNodePoolNodesRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // releaseNode Field Functions 
    bool hasReleaseNode() const { return this->releaseNode_ != nullptr;};
    void deleteReleaseNode() { this->releaseNode_ = nullptr;};
    inline bool releaseNode() const { DARABONBA_PTR_GET_DEFAULT(releaseNode_, false) };
    inline RemoveNodePoolNodesRequest& setReleaseNode(bool releaseNode) { DARABONBA_PTR_SET_VALUE(releaseNode_, releaseNode) };


  protected:
    // Whether to remove concurrently.
    std::shared_ptr<bool> concurrency_ = nullptr;
    // Specifies whether to drain the nodes that you want to remove. Valid values:
    // 
    // *   true: drain the nodes that you want to remove.
    // *   false: do not drain the nodes that you want to remove.
    std::shared_ptr<bool> drainNode_ = nullptr;
    // A list of instances that you want to remove.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // This parameter is deprecated.
    // 
    // A list of nodes that you want to remove.
    // 
    // >  This parameter is deprecated. Use instance_ids instead.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // Specifies whether to release the nodes after they are removed. Valid values:
    // 
    // *   true: release the nodes after they are removed.
    // *   false: do not release the nodes after they are removed.
    std::shared_ptr<bool> releaseNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
