// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectMembersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RoleCodes, roleCodesShrink_);
      DARABONBA_PTR_TO_JSON(UserIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RoleCodes, roleCodesShrink_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIdsShrink_);
    };
    ListProjectMembersShrinkRequest() = default ;
    ListProjectMembersShrinkRequest(const ListProjectMembersShrinkRequest &) = default ;
    ListProjectMembersShrinkRequest(ListProjectMembersShrinkRequest &&) = default ;
    ListProjectMembersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersShrinkRequest() = default ;
    ListProjectMembersShrinkRequest& operator=(const ListProjectMembersShrinkRequest &) = default ;
    ListProjectMembersShrinkRequest& operator=(ListProjectMembersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->roleCodesShrink_ != nullptr && this->userIdsShrink_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectMembersShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectMembersShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectMembersShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roleCodesShrink Field Functions 
    bool hasRoleCodesShrink() const { return this->roleCodesShrink_ != nullptr;};
    void deleteRoleCodesShrink() { this->roleCodesShrink_ = nullptr;};
    inline string roleCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(roleCodesShrink_, "") };
    inline ListProjectMembersShrinkRequest& setRoleCodesShrink(string roleCodesShrink) { DARABONBA_PTR_SET_VALUE(roleCodesShrink_, roleCodesShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string userIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline ListProjectMembersShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The codes of the roles in the workspace. You can call the [ListProjectRoles](https://help.aliyun.com/document_detail/2853930.html) operation to query the codes of all roles in the workspace.
    std::shared_ptr<string> roleCodesShrink_ = nullptr;
    // The IDs of the accounts used by the members in the workspace. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/product/ms_menu), choose More > Management Center in the left-side navigation pane, select the desired workspace on the Management Center page, and then click Go to Management Center. In the left-side navigation pane of the SettingCenter page, click Tenant Members and Roles. On the Tenant Members and Roles page, view the IDs of the accounts used by the members in the workspace.
    std::shared_ptr<string> userIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
