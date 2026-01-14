// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    ListOrganizationRoleUsersRequest() = default ;
    ListOrganizationRoleUsersRequest(const ListOrganizationRoleUsersRequest &) = default ;
    ListOrganizationRoleUsersRequest(ListOrganizationRoleUsersRequest &&) = default ;
    ListOrganizationRoleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRoleUsersRequest() = default ;
    ListOrganizationRoleUsersRequest& operator=(const ListOrganizationRoleUsersRequest &) = default ;
    ListOrganizationRoleUsersRequest& operator=(ListOrganizationRoleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->roleId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListOrganizationRoleUsersRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListOrganizationRoleUsersRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationRoleUsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListOrganizationRoleUsersRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // Keyword for the nickname of the organization member.
    shared_ptr<string> keyword_ {};
    // Page number.
    // 
    // - Default value is 1.
    shared_ptr<int32_t> pageNum_ {};
    // Number of items per page.
    // - Default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // Organization role ID, including predefined roles and custom roles:
    // 
    // - Organization Administrator (predefined role): 111111111
    // - Permission Administrator (predefined role): 111111112
    // - Regular User (predefined role): 111111113
    // - Custom Role: The corresponding role ID for a custom role
    // 
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
