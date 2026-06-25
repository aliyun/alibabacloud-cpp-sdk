// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListWorkspaceRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VerboseFields, verboseFields_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VerboseFields, verboseFields_);
    };
    ListWorkspaceRolesRequest() = default ;
    ListWorkspaceRolesRequest(const ListWorkspaceRolesRequest &) = default ;
    ListWorkspaceRolesRequest(ListWorkspaceRolesRequest &&) = default ;
    ListWorkspaceRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceRolesRequest() = default ;
    ListWorkspaceRolesRequest& operator=(const ListWorkspaceRolesRequest &) = default ;
    ListWorkspaceRolesRequest& operator=(ListWorkspaceRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->roleIds_ == nullptr && this->roleName_ == nullptr && this->roleType_ == nullptr
        && this->sortBy_ == nullptr && this->status_ == nullptr && this->verboseFields_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListWorkspaceRolesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkspaceRolesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkspaceRolesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline string getRoleIds() const { DARABONBA_PTR_GET_DEFAULT(roleIds_, "") };
    inline ListWorkspaceRolesRequest& setRoleIds(string roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListWorkspaceRolesRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline ListWorkspaceRolesRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListWorkspaceRolesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkspaceRolesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // verboseFields Field Functions 
    bool hasVerboseFields() const { return this->verboseFields_ != nullptr;};
    void deleteVerboseFields() { this->verboseFields_ = nullptr;};
    inline string getVerboseFields() const { DARABONBA_PTR_GET_DEFAULT(verboseFields_, "") };
    inline ListWorkspaceRolesRequest& setVerboseFields(string verboseFields) { DARABONBA_PTR_SET_VALUE(verboseFields_, verboseFields) };


  protected:
    // The sort order for the specified sort field. Valid values:
    // 
    // - `ASC` (default): Ascending order.
    // 
    // - `DESC`: Descending order.
    shared_ptr<string> order_ {};
    // The page number. Pages start from 1. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. The default value is 20.
    shared_ptr<int32_t> pageSize_ {};
    // A comma-separated list of role IDs.
    shared_ptr<string> roleIds_ {};
    // The role name.
    shared_ptr<string> roleName_ {};
    // The role type.
    // 
    // - `custom`: A custom role.
    shared_ptr<string> roleType_ {};
    // The sort field for paginated queries. Valid values:
    // 
    // - `GmtCreateTime` (default): Sorts by creation time.
    // 
    // - `GmtModifiedTime`: Sorts by modification time.
    shared_ptr<string> sortBy_ {};
    // The status. Valid values:
    // 
    // - `Creating`
    // 
    // - `Updating`
    // 
    // - `Deleting`
    // 
    // - `Succeeded`: A terminal state.
    // 
    // - `Failed`: A terminal state.
    shared_ptr<string> status_ {};
    // A comma-separated list of fields to return. Currently, only `ModulePermissions` is supported, which returns the permission configuration of the role.
    shared_ptr<string> verboseFields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
