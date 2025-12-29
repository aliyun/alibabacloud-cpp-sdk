// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVENODEPOOLNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RemoveNodePoolNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveNodePoolNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(drain_node, drainNode_);
      DARABONBA_PTR_TO_JSON(instance_ids, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(nodes, nodesShrink_);
      DARABONBA_PTR_TO_JSON(release_node, releaseNode_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveNodePoolNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(drain_node, drainNode_);
      DARABONBA_PTR_FROM_JSON(instance_ids, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(nodes, nodesShrink_);
      DARABONBA_PTR_FROM_JSON(release_node, releaseNode_);
    };
    RemoveNodePoolNodesShrinkRequest() = default ;
    RemoveNodePoolNodesShrinkRequest(const RemoveNodePoolNodesShrinkRequest &) = default ;
    RemoveNodePoolNodesShrinkRequest(RemoveNodePoolNodesShrinkRequest &&) = default ;
    RemoveNodePoolNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveNodePoolNodesShrinkRequest() = default ;
    RemoveNodePoolNodesShrinkRequest& operator=(const RemoveNodePoolNodesShrinkRequest &) = default ;
    RemoveNodePoolNodesShrinkRequest& operator=(RemoveNodePoolNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrency_ == nullptr
        && this->drainNode_ == nullptr && this->instanceIdsShrink_ == nullptr && this->nodesShrink_ == nullptr && this->releaseNode_ == nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline bool getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, false) };
    inline RemoveNodePoolNodesShrinkRequest& setConcurrency(bool concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // drainNode Field Functions 
    bool hasDrainNode() const { return this->drainNode_ != nullptr;};
    void deleteDrainNode() { this->drainNode_ = nullptr;};
    inline bool getDrainNode() const { DARABONBA_PTR_GET_DEFAULT(drainNode_, false) };
    inline RemoveNodePoolNodesShrinkRequest& setDrainNode(bool drainNode) { DARABONBA_PTR_SET_VALUE(drainNode_, drainNode) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RemoveNodePoolNodesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string getNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline RemoveNodePoolNodesShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


    // releaseNode Field Functions 
    bool hasReleaseNode() const { return this->releaseNode_ != nullptr;};
    void deleteReleaseNode() { this->releaseNode_ = nullptr;};
    inline bool getReleaseNode() const { DARABONBA_PTR_GET_DEFAULT(releaseNode_, false) };
    inline RemoveNodePoolNodesShrinkRequest& setReleaseNode(bool releaseNode) { DARABONBA_PTR_SET_VALUE(releaseNode_, releaseNode) };


  protected:
    // Whether to remove concurrently.
    shared_ptr<bool> concurrency_ {};
    // Specifies whether to drain the nodes that you want to remove. Valid values:
    // 
    // *   true: drain the nodes that you want to remove.
    // *   false: do not drain the nodes that you want to remove.
    shared_ptr<bool> drainNode_ {};
    // A list of instances that you want to remove.
    shared_ptr<string> instanceIdsShrink_ {};
    // This parameter is deprecated.
    // 
    // A list of nodes that you want to remove.
    // 
    // >  This parameter is deprecated. Use instance_ids instead.
    shared_ptr<string> nodesShrink_ {};
    // Specifies whether to release the nodes after they are removed. Valid values:
    // 
    // *   true: release the nodes after they are removed.
    // *   false: do not release the nodes after they are removed.
    shared_ptr<bool> releaseNode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
