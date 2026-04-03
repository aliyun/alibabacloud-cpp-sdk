// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACEPERMISSIONEVALUATERESULT_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACEPERMISSIONEVALUATERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WorkspacePermissionItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class WorkspacePermissionEvaluateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspacePermissionEvaluateResult& obj) { 
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
      DARABONBA_PTR_TO_JSON(workspaceFound, workspaceFound_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspacePermissionEvaluateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(workspaceFound, workspaceFound_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    WorkspacePermissionEvaluateResult() = default ;
    WorkspacePermissionEvaluateResult(const WorkspacePermissionEvaluateResult &) = default ;
    WorkspacePermissionEvaluateResult(WorkspacePermissionEvaluateResult &&) = default ;
    WorkspacePermissionEvaluateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspacePermissionEvaluateResult() = default ;
    WorkspacePermissionEvaluateResult& operator=(const WorkspacePermissionEvaluateResult &) = default ;
    WorkspacePermissionEvaluateResult& operator=(WorkspacePermissionEvaluateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && this->workspaceFound_ == nullptr && this->workspaceId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<WorkspacePermissionItem> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<WorkspacePermissionItem>) };
    inline vector<WorkspacePermissionItem> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<WorkspacePermissionItem>) };
    inline WorkspacePermissionEvaluateResult& setPermissions(const vector<WorkspacePermissionItem> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline WorkspacePermissionEvaluateResult& setPermissions(vector<WorkspacePermissionItem> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // workspaceFound Field Functions 
    bool hasWorkspaceFound() const { return this->workspaceFound_ != nullptr;};
    void deleteWorkspaceFound() { this->workspaceFound_ = nullptr;};
    inline bool getWorkspaceFound() const { DARABONBA_PTR_GET_DEFAULT(workspaceFound_, false) };
    inline WorkspacePermissionEvaluateResult& setWorkspaceFound(bool workspaceFound) { DARABONBA_PTR_SET_VALUE(workspaceFound_, workspaceFound) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline WorkspacePermissionEvaluateResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 各 action 的校验结果；顺序与请求 actions 一致
    shared_ptr<vector<WorkspacePermissionItem>> permissions_ {};
    // 当前租户下是否解析到该 workspace；为 false 时各 permissions 一般为 allowed: false，不会调用 RAM
    shared_ptr<bool> workspaceFound_ {};
    // 回显请求中的 workspace ID（trim 后）
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
