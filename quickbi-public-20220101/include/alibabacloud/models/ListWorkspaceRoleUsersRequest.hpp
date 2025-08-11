// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWorkspaceRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListWorkspaceRoleUsersRequest() = default ;
    ListWorkspaceRoleUsersRequest(const ListWorkspaceRoleUsersRequest &) = default ;
    ListWorkspaceRoleUsersRequest(ListWorkspaceRoleUsersRequest &&) = default ;
    ListWorkspaceRoleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceRoleUsersRequest() = default ;
    ListWorkspaceRoleUsersRequest& operator=(const ListWorkspaceRoleUsersRequest &) = default ;
    ListWorkspaceRoleUsersRequest& operator=(ListWorkspaceRoleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->roleId_ != nullptr && this->workspaceId_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListWorkspaceRoleUsersRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListWorkspaceRoleUsersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkspaceRoleUsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListWorkspaceRoleUsersRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspaceRoleUsersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Keyword for the user\\"s nickname.
    std::shared_ptr<string> keyword_ = nullptr;
    // Current page number for pagination:
    // 
    // - Starting value: 1
    // - Default value: 1
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Number of items per page for pagination:
    // 
    // - Default value: 10
    // - Maximum value: 1000
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Workspace role ID, including predefined roles and custom roles:
    // 
    // - 25: Workspace Administrator (predefined role)
    // - 26: Developer (predefined role)
    // - 27: Analyst (predefined role)
    // - 30: Viewer (predefined role)
    // - Custom roles: The corresponding role ID for custom roles
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // The ID of the workspace. This parameter is optional. If you do not set this parameter, the roles of all workspaces are returned.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
