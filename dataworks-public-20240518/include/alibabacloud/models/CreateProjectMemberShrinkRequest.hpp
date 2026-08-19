// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTMEMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTMEMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProjectMemberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RoleCodes, roleCodesShrink_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectMemberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RoleCodes, roleCodesShrink_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateProjectMemberShrinkRequest() = default ;
    CreateProjectMemberShrinkRequest(const CreateProjectMemberShrinkRequest &) = default ;
    CreateProjectMemberShrinkRequest(CreateProjectMemberShrinkRequest &&) = default ;
    CreateProjectMemberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectMemberShrinkRequest() = default ;
    CreateProjectMemberShrinkRequest& operator=(const CreateProjectMemberShrinkRequest &) = default ;
    CreateProjectMemberShrinkRequest& operator=(CreateProjectMemberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->roleCodesShrink_ == nullptr && this->userId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateProjectMemberShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string getRoleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline CreateProjectMemberShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateProjectMemberShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace for this API call operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The list of workspace role codes. You can call [ListProjectRoles](https://help.aliyun.com/document_detail/2853930.html) to obtain the role codes.
    // 
    // This parameter is used to grant workspace roles to the member when adding the member to the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> roleCodesShrink_ {};
    // The ID of the DataWorks account. You can log on to the [DataWorks console - Management Center](https://dataworks.console.aliyun.com/product/ms_menu), select the workspace to which you want to add a member, go to the Management Center page, and then navigate to the **Tenant Members and Roles** page to view the account ID of the user you want to add to the workspace.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
