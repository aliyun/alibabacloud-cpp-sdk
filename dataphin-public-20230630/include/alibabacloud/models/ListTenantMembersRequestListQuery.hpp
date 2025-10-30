// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENANTMEMBERSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENANTMEMBERSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListTenantMembersRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTenantMembersRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(UserGroupIdList, userGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTenantMembersRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(UserGroupIdList, userGroupIdList_);
    };
    ListTenantMembersRequestListQuery() = default ;
    ListTenantMembersRequestListQuery(const ListTenantMembersRequestListQuery &) = default ;
    ListTenantMembersRequestListQuery(ListTenantMembersRequestListQuery &&) = default ;
    ListTenantMembersRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTenantMembersRequestListQuery() = default ;
    ListTenantMembersRequestListQuery& operator=(const ListTenantMembersRequestListQuery &) = default ;
    ListTenantMembersRequestListQuery& operator=(ListTenantMembersRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->pageSize_ == nullptr && return this->roleList_ == nullptr && return this->searchText_ == nullptr && return this->userGroupIdList_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListTenantMembersRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTenantMembersRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<string> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
    inline vector<string> roleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
    inline ListTenantMembersRequestListQuery& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline ListTenantMembersRequestListQuery& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListTenantMembersRequestListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // userGroupIdList Field Functions 
    bool hasUserGroupIdList() const { return this->userGroupIdList_ != nullptr;};
    void deleteUserGroupIdList() { this->userGroupIdList_ = nullptr;};
    inline const vector<string> & userGroupIdList() const { DARABONBA_PTR_GET_CONST(userGroupIdList_, vector<string>) };
    inline vector<string> userGroupIdList() { DARABONBA_PTR_GET(userGroupIdList_, vector<string>) };
    inline ListTenantMembersRequestListQuery& setUserGroupIdList(const vector<string> & userGroupIdList) { DARABONBA_PTR_SET_VALUE(userGroupIdList_, userGroupIdList) };
    inline ListTenantMembersRequestListQuery& setUserGroupIdList(vector<string> && userGroupIdList) { DARABONBA_PTR_SET_RVALUE(userGroupIdList_, userGroupIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> roleList_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
