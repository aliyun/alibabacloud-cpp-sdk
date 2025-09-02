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
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->roleCode_ != nullptr && this->userId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RemoveProjectMemberFromRoleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline RemoveProjectMemberFromRoleRequest& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveProjectMemberFromRoleRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The code of the role in the DataWorks workspace. You can call the ListProjectRoles operation to query the codes of all roles in a DataWorks workspace. Valid values:
    // 
    // *   role_project_owner: workspace owner
    // *   role_project_admin: workspace administrator
    // *   role_project_dev: developer
    // *   role_project_pe: O\\&M engineer
    // *   role_project_deploy: deployment expert
    // *   role_project_guest: visitor
    // *   role_project_security: security administrator
    // *   role_project_tester: experiencer
    // *   role_project_erd: model designer
    // 
    // This parameter is required.
    std::shared_ptr<string> roleCode_ = nullptr;
    // The user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
