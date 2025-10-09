// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RoleCodes, roleCodes_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RoleCodes, roleCodes_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateProjectMemberRequest() = default ;
    CreateProjectMemberRequest(const CreateProjectMemberRequest &) = default ;
    CreateProjectMemberRequest(CreateProjectMemberRequest &&) = default ;
    CreateProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectMemberRequest() = default ;
    CreateProjectMemberRequest& operator=(const CreateProjectMemberRequest &) = default ;
    CreateProjectMemberRequest& operator=(CreateProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->roleCodes_ != nullptr && this->userId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateProjectMemberRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCodes Field Functions 
    bool hasRoleCodes() const { return this->roleCodes_ != nullptr;};
    void deleteRoleCodes() { this->roleCodes_ = nullptr;};
    inline const vector<string> & roleCodes() const { DARABONBA_PTR_GET_CONST(roleCodes_, vector<string>) };
    inline vector<string> roleCodes() { DARABONBA_PTR_GET(roleCodes_, vector<string>) };
    inline CreateProjectMemberRequest& setRoleCodes(const vector<string> & roleCodes) { DARABONBA_PTR_SET_VALUE(roleCodes_, roleCodes) };
    inline CreateProjectMemberRequest& setRoleCodes(vector<string> && roleCodes) { DARABONBA_PTR_SET_RVALUE(roleCodes_, roleCodes) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateProjectMemberRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
    std::shared_ptr<vector<string>> roleCodes_ = nullptr;
    // The ID of the account that you want to add to the workspace as a member. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/product/ms_menu), choose More > Management Center in the left-side navigation pane, select the desired workspace on the Management Center page, and then click Go to Management Center. In the left-side navigation pane of the SettingCenter page, click **Tenant Members and Roles**. On the Tenant Members and Roles page, view the ID of the account that you want to add to the workspace as a member.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
