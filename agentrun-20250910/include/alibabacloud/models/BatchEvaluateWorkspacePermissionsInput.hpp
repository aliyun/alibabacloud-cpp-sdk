// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSINPUT_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVALUATEWORKSPACEPERMISSIONSINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BatchEvaluateWorkspacePermissionsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEvaluateWorkspacePermissionsInput& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(workspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEvaluateWorkspacePermissionsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(workspaceIds, workspaceIds_);
    };
    BatchEvaluateWorkspacePermissionsInput() = default ;
    BatchEvaluateWorkspacePermissionsInput(const BatchEvaluateWorkspacePermissionsInput &) = default ;
    BatchEvaluateWorkspacePermissionsInput(BatchEvaluateWorkspacePermissionsInput &&) = default ;
    BatchEvaluateWorkspacePermissionsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEvaluateWorkspacePermissionsInput() = default ;
    BatchEvaluateWorkspacePermissionsInput& operator=(const BatchEvaluateWorkspacePermissionsInput &) = default ;
    BatchEvaluateWorkspacePermissionsInput& operator=(BatchEvaluateWorkspacePermissionsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->workspaceIds_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline BatchEvaluateWorkspacePermissionsInput& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline BatchEvaluateWorkspacePermissionsInput& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline const vector<string> & getWorkspaceIds() const { DARABONBA_PTR_GET_CONST(workspaceIds_, vector<string>) };
    inline vector<string> getWorkspaceIds() { DARABONBA_PTR_GET(workspaceIds_, vector<string>) };
    inline BatchEvaluateWorkspacePermissionsInput& setWorkspaceIds(const vector<string> & workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };
    inline BatchEvaluateWorkspacePermissionsInput& setWorkspaceIds(vector<string> && workspaceIds) { DARABONBA_PTR_SET_RVALUE(workspaceIds_, workspaceIds) };


  protected:
    // RAM List 类 action 列表；支持带 agentrun: 前缀或不带（服务端归一化）；顺序与每条 permissions 一致；上限 20 条
    // 
    // This parameter is required.
    shared_ptr<vector<string>> actions_ {};
    // Workspace 资源 ID 列表（UUID 字符串）；顺序与响应 results 一致；上限 50 条
    // 
    // This parameter is required.
    shared_ptr<vector<string>> workspaceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
