// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWorkspaceUserRolesByUserIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceUserRolesByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(RoleModel, roleModel_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceUserRolesByUserIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleModel, roleModel_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListWorkspaceUserRolesByUserIdResponseBodyResult() = default ;
    ListWorkspaceUserRolesByUserIdResponseBodyResult(const ListWorkspaceUserRolesByUserIdResponseBodyResult &) = default ;
    ListWorkspaceUserRolesByUserIdResponseBodyResult(ListWorkspaceUserRolesByUserIdResponseBodyResult &&) = default ;
    ListWorkspaceUserRolesByUserIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceUserRolesByUserIdResponseBodyResult() = default ;
    ListWorkspaceUserRolesByUserIdResponseBodyResult& operator=(const ListWorkspaceUserRolesByUserIdResponseBodyResult &) = default ;
    ListWorkspaceUserRolesByUserIdResponseBodyResult& operator=(ListWorkspaceUserRolesByUserIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleModel_ == nullptr
        && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // roleModel Field Functions 
    bool hasRoleModel() const { return this->roleModel_ != nullptr;};
    void deleteRoleModel() { this->roleModel_ = nullptr;};
    inline const Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel & roleModel() const { DARABONBA_PTR_GET_CONST(roleModel_, Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel) };
    inline Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel roleModel() { DARABONBA_PTR_GET(roleModel_, Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel) };
    inline ListWorkspaceUserRolesByUserIdResponseBodyResult& setRoleModel(const Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel & roleModel) { DARABONBA_PTR_SET_VALUE(roleModel_, roleModel) };
    inline ListWorkspaceUserRolesByUserIdResponseBodyResult& setRoleModel(Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel && roleModel) { DARABONBA_PTR_SET_RVALUE(roleModel_, roleModel) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspaceUserRolesByUserIdResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspaceUserRolesByUserIdResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<Models::ListWorkspaceUserRolesByUserIdResponseBodyResultRoleModel> roleModel_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
