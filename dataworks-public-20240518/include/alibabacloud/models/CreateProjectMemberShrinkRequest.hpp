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
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->roleCodesShrink_ != nullptr && this->userId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateProjectMemberShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string roleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline CreateProjectMemberShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateProjectMemberShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The codes of the roles in the workspace. You can call the [ListProjectRoles](https://help.aliyun.com/document_detail/2853930.html) operation to query the codes of all roles in the workspace.
    // 
    // This parameter specifies the roles that you can assign to a member when you add the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleCodesShrink_ = nullptr;
    // The ID of the account that you want to add to the workspace as a member. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/product/ms_menu), choose More > Management Center in the left-side navigation pane, select the desired workspace on the Management Center page, and then click Go to Management Center. In the left-side navigation pane of the SettingCenter page, click **Tenant Members and Roles**. On the Tenant Members and Roles page, view the ID of the account that you want to add to the workspace as a member.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
