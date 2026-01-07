// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAAGENTWORKSPACEMEMBERROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAAGENTWORKSPACEMEMBERROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataAgentWorkspaceMemberRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataAgentWorkspaceMemberRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataAgentWorkspaceMemberRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDataAgentWorkspaceMemberRoleRequest() = default ;
    UpdateDataAgentWorkspaceMemberRoleRequest(const UpdateDataAgentWorkspaceMemberRoleRequest &) = default ;
    UpdateDataAgentWorkspaceMemberRoleRequest(UpdateDataAgentWorkspaceMemberRoleRequest &&) = default ;
    UpdateDataAgentWorkspaceMemberRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataAgentWorkspaceMemberRoleRequest() = default ;
    UpdateDataAgentWorkspaceMemberRoleRequest& operator=(const UpdateDataAgentWorkspaceMemberRoleRequest &) = default ;
    UpdateDataAgentWorkspaceMemberRoleRequest& operator=(UpdateDataAgentWorkspaceMemberRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->memberId_ == nullptr && this->roleName_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDataAgentWorkspaceMemberRoleRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> memberId_ {};
    shared_ptr<string> roleName_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
