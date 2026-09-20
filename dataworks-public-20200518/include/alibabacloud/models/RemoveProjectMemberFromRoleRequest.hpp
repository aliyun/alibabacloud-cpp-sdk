// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERFROMROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPROJECTMEMBERFROMROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RemoveProjectMemberFromRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveProjectMemberFromRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveProjectMemberFromRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemoveProjectMemberFromRoleRequest() = default ;
    RemoveProjectMemberFromRoleRequest(const RemoveProjectMemberFromRoleRequest &) = default ;
    RemoveProjectMemberFromRoleRequest(RemoveProjectMemberFromRoleRequest &&) = default ;
    RemoveProjectMemberFromRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveProjectMemberFromRoleRequest() = default ;
    RemoveProjectMemberFromRoleRequest& operator=(const RemoveProjectMemberFromRoleRequest &) = default ;
    RemoveProjectMemberFromRoleRequest& operator=(RemoveProjectMemberFromRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->roleCode_ == nullptr && this->userId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RemoveProjectMemberFromRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline RemoveProjectMemberFromRoleRequest& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveProjectMemberFromRoleRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the DataWorks workspace.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The role code of the DataWorks workspace. You can invoke the ListProjectRoles operation to obtain the list of role codes for a project.
    // The default preset roles are as follows:
    // 
    // - role_project_owner: Project owner.
    // - role_project_admin: Storage management administrator.
    // - role_project_dev: Developer.
    // - role_project_pe: O&M engineer.
    // - role_project_deploy: Deployment.
    // - role_project_guest: Visitor.
    // - role_project_security: Security administrator.
    // - role_project_tester: Experience user.
    // - role_project_erd: Model designer.
    // 
    // This parameter is required.
    shared_ptr<string> roleCode_ {};
    // The ID of the user.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
