// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEROLESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEROLESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspaceRolesResponseBodyResultAuthConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWorkspaceRolesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceRolesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfigList, authConfigList_);
      DARABONBA_PTR_TO_JSON(IsSystemRole, isSystemRole_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceRolesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfigList, authConfigList_);
      DARABONBA_PTR_FROM_JSON(IsSystemRole, isSystemRole_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    ListWorkspaceRolesResponseBodyResult() = default ;
    ListWorkspaceRolesResponseBodyResult(const ListWorkspaceRolesResponseBodyResult &) = default ;
    ListWorkspaceRolesResponseBodyResult(ListWorkspaceRolesResponseBodyResult &&) = default ;
    ListWorkspaceRolesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceRolesResponseBodyResult() = default ;
    ListWorkspaceRolesResponseBodyResult& operator=(const ListWorkspaceRolesResponseBodyResult &) = default ;
    ListWorkspaceRolesResponseBodyResult& operator=(ListWorkspaceRolesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConfigList_ != nullptr
        && this->isSystemRole_ != nullptr && this->roleId_ != nullptr && this->roleName_ != nullptr; };
    // authConfigList Field Functions 
    bool hasAuthConfigList() const { return this->authConfigList_ != nullptr;};
    void deleteAuthConfigList() { this->authConfigList_ = nullptr;};
    inline const vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList> & authConfigList() const { DARABONBA_PTR_GET_CONST(authConfigList_, vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList>) };
    inline vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList> authConfigList() { DARABONBA_PTR_GET(authConfigList_, vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList>) };
    inline ListWorkspaceRolesResponseBodyResult& setAuthConfigList(const vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList> & authConfigList) { DARABONBA_PTR_SET_VALUE(authConfigList_, authConfigList) };
    inline ListWorkspaceRolesResponseBodyResult& setAuthConfigList(vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList> && authConfigList) { DARABONBA_PTR_SET_RVALUE(authConfigList_, authConfigList) };


    // isSystemRole Field Functions 
    bool hasIsSystemRole() const { return this->isSystemRole_ != nullptr;};
    void deleteIsSystemRole() { this->isSystemRole_ = nullptr;};
    inline bool isSystemRole() const { DARABONBA_PTR_GET_DEFAULT(isSystemRole_, false) };
    inline ListWorkspaceRolesResponseBodyResult& setIsSystemRole(bool isSystemRole) { DARABONBA_PTR_SET_VALUE(isSystemRole_, isSystemRole) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListWorkspaceRolesResponseBodyResult& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListWorkspaceRolesResponseBodyResult& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // List of role authorization configurations.
    std::shared_ptr<vector<Models::ListWorkspaceRolesResponseBodyResultAuthConfigList>> authConfigList_ = nullptr;
    // Whether it is a predefined role. Value range:
    // 
    // - true: Yes
    // - false: No
    std::shared_ptr<bool> isSystemRole_ = nullptr;
    // Workspace role ID, including predefined and custom roles:
    // 
    // - 25: Workspace Administrator (predefined role)
    // - 26: Developer (predefined role)
    // - 27: Analyst (predefined role)
    // - 30: Viewer (predefined role)
    // - Custom role: The corresponding role ID for a custom role
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // Role name.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
