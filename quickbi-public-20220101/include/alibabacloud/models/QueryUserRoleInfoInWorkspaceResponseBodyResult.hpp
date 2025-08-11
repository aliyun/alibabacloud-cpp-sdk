// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserRoleInfoInWorkspaceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserRoleInfoInWorkspaceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserRoleInfoInWorkspaceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    QueryUserRoleInfoInWorkspaceResponseBodyResult() = default ;
    QueryUserRoleInfoInWorkspaceResponseBodyResult(const QueryUserRoleInfoInWorkspaceResponseBodyResult &) = default ;
    QueryUserRoleInfoInWorkspaceResponseBodyResult(QueryUserRoleInfoInWorkspaceResponseBodyResult &&) = default ;
    QueryUserRoleInfoInWorkspaceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserRoleInfoInWorkspaceResponseBodyResult() = default ;
    QueryUserRoleInfoInWorkspaceResponseBodyResult& operator=(const QueryUserRoleInfoInWorkspaceResponseBodyResult &) = default ;
    QueryUserRoleInfoInWorkspaceResponseBodyResult& operator=(QueryUserRoleInfoInWorkspaceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleCode_ != nullptr
        && this->roleId_ != nullptr && this->roleName_ != nullptr; };
    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline QueryUserRoleInfoInWorkspaceResponseBodyResult& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline QueryUserRoleInfoInWorkspaceResponseBodyResult& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline QueryUserRoleInfoInWorkspaceResponseBodyResult& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // Preset role code.
    std::shared_ptr<string> roleCode_ = nullptr;
    // Preset role ID. Possible values:
    // - 25: Space Administrator
    // - 26: Space Developer
    // - 27: Space Analyst
    // - 30: Space Viewer
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // Preset role name.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
