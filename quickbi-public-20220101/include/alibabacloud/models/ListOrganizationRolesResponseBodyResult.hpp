// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOrganizationRolesResponseBodyResultAuthConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRolesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRolesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfigList, authConfigList_);
      DARABONBA_PTR_TO_JSON(IsSystemRole, isSystemRole_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRolesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfigList, authConfigList_);
      DARABONBA_PTR_FROM_JSON(IsSystemRole, isSystemRole_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    ListOrganizationRolesResponseBodyResult() = default ;
    ListOrganizationRolesResponseBodyResult(const ListOrganizationRolesResponseBodyResult &) = default ;
    ListOrganizationRolesResponseBodyResult(ListOrganizationRolesResponseBodyResult &&) = default ;
    ListOrganizationRolesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRolesResponseBodyResult() = default ;
    ListOrganizationRolesResponseBodyResult& operator=(const ListOrganizationRolesResponseBodyResult &) = default ;
    ListOrganizationRolesResponseBodyResult& operator=(ListOrganizationRolesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfigList_ == nullptr
        && return this->isSystemRole_ == nullptr && return this->roleId_ == nullptr && return this->roleName_ == nullptr; };
    // authConfigList Field Functions 
    bool hasAuthConfigList() const { return this->authConfigList_ != nullptr;};
    void deleteAuthConfigList() { this->authConfigList_ = nullptr;};
    inline const vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList> & authConfigList() const { DARABONBA_PTR_GET_CONST(authConfigList_, vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList>) };
    inline vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList> authConfigList() { DARABONBA_PTR_GET(authConfigList_, vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList>) };
    inline ListOrganizationRolesResponseBodyResult& setAuthConfigList(const vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList> & authConfigList) { DARABONBA_PTR_SET_VALUE(authConfigList_, authConfigList) };
    inline ListOrganizationRolesResponseBodyResult& setAuthConfigList(vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList> && authConfigList) { DARABONBA_PTR_SET_RVALUE(authConfigList_, authConfigList) };


    // isSystemRole Field Functions 
    bool hasIsSystemRole() const { return this->isSystemRole_ != nullptr;};
    void deleteIsSystemRole() { this->isSystemRole_ = nullptr;};
    inline bool isSystemRole() const { DARABONBA_PTR_GET_DEFAULT(isSystemRole_, false) };
    inline ListOrganizationRolesResponseBodyResult& setIsSystemRole(bool isSystemRole) { DARABONBA_PTR_SET_VALUE(isSystemRole_, isSystemRole) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListOrganizationRolesResponseBodyResult& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListOrganizationRolesResponseBodyResult& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // List of role permission configurations.
    std::shared_ptr<vector<Models::ListOrganizationRolesResponseBodyResultAuthConfigList>> authConfigList_ = nullptr;
    // Whether it is a predefined role. Possible values:
    // - true: Yes
    // - false: No
    std::shared_ptr<bool> isSystemRole_ = nullptr;
    // Role ID.
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // Role name.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
