// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(TargetNodeGroupId, targetNodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(TargetNodeGroupId, targetNodeGroupId_);
    };
    ChangeNodeGroupRequest() = default ;
    ChangeNodeGroupRequest(const ChangeNodeGroupRequest &) = default ;
    ChangeNodeGroupRequest(ChangeNodeGroupRequest &&) = default ;
    ChangeNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeGroupRequest() = default ;
    ChangeNodeGroupRequest& operator=(const ChangeNodeGroupRequest &) = default ;
    ChangeNodeGroupRequest& operator=(ChangeNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreFailedNodeTasks_ == nullptr
        && this->nodes_ == nullptr && this->targetNodeGroupId_ == nullptr; };
    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool getIgnoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline ChangeNodeGroupRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> getNodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline ChangeNodeGroupRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ChangeNodeGroupRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // targetNodeGroupId Field Functions 
    bool hasTargetNodeGroupId() const { return this->targetNodeGroupId_ != nullptr;};
    void deleteTargetNodeGroupId() { this->targetNodeGroupId_ = nullptr;};
    inline string getTargetNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(targetNodeGroupId_, "") };
    inline ChangeNodeGroupRequest& setTargetNodeGroupId(string targetNodeGroupId) { DARABONBA_PTR_SET_VALUE(targetNodeGroupId_, targetNodeGroupId) };


  protected:
    shared_ptr<bool> ignoreFailedNodeTasks_ {};
    shared_ptr<vector<string>> nodes_ {};
    shared_ptr<string> targetNodeGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
