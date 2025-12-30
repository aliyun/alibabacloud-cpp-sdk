// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_TO_JSON(TargetNodeGroupId, targetNodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodesShrink_);
      DARABONBA_PTR_FROM_JSON(TargetNodeGroupId, targetNodeGroupId_);
    };
    ChangeNodeGroupShrinkRequest() = default ;
    ChangeNodeGroupShrinkRequest(const ChangeNodeGroupShrinkRequest &) = default ;
    ChangeNodeGroupShrinkRequest(ChangeNodeGroupShrinkRequest &&) = default ;
    ChangeNodeGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeGroupShrinkRequest() = default ;
    ChangeNodeGroupShrinkRequest& operator=(const ChangeNodeGroupShrinkRequest &) = default ;
    ChangeNodeGroupShrinkRequest& operator=(ChangeNodeGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreFailedNodeTasks_ == nullptr
        && this->nodesShrink_ == nullptr && this->targetNodeGroupId_ == nullptr; };
    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ChangeNodeGroupShrinkRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodesShrink Field Functions 
    bool hasNodesShrink() const { return this->nodesShrink_ != nullptr;};
    void deleteNodesShrink() { this->nodesShrink_ = nullptr;};
    inline string getNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodesShrink_, "") };
    inline ChangeNodeGroupShrinkRequest& setNodesShrink(string nodesShrink) { DARABONBA_PTR_SET_VALUE(nodesShrink_, nodesShrink) };


    // targetNodeGroupId Field Functions 
    bool hasTargetNodeGroupId() const { return this->targetNodeGroupId_ != nullptr;};
    void deleteTargetNodeGroupId() { this->targetNodeGroupId_ = nullptr;};
    inline string getTargetNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetNodeGroupId_, "") };
    inline ChangeNodeGroupShrinkRequest& setTargetNodeGroupId(string targetNodeGroupId) { DARABONBA_PTR_SET_VALUE(targetNodeGroupId_, targetNodeGroupId) };


  protected:
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    shared_ptr<string> nodesShrink_ {};
    shared_ptr<string> targetNodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
