// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTRESPONSEBODYRESULTDATAROLE_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEUSERLISTRESPONSEBODYRESULTDATAROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceUserListResponseBodyResultDataRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceUserListResponseBodyResultDataRole& obj) { 
      DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceUserListResponseBodyResultDataRole& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    QueryWorkspaceUserListResponseBodyResultDataRole() = default ;
    QueryWorkspaceUserListResponseBodyResultDataRole(const QueryWorkspaceUserListResponseBodyResultDataRole &) = default ;
    QueryWorkspaceUserListResponseBodyResultDataRole(QueryWorkspaceUserListResponseBodyResultDataRole &&) = default ;
    QueryWorkspaceUserListResponseBodyResultDataRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceUserListResponseBodyResultDataRole() = default ;
    QueryWorkspaceUserListResponseBodyResultDataRole& operator=(const QueryWorkspaceUserListResponseBodyResultDataRole &) = default ;
    QueryWorkspaceUserListResponseBodyResultDataRole& operator=(QueryWorkspaceUserListResponseBodyResultDataRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleCode_ == nullptr
        && return this->roleId_ == nullptr && return this->roleName_ == nullptr; };
    // roleCode Field Functions 
    bool hasRoleCode() const { return this->roleCode_ != nullptr;};
    void deleteRoleCode() { this->roleCode_ = nullptr;};
    inline string roleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
    inline QueryWorkspaceUserListResponseBodyResultDataRole& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline QueryWorkspaceUserListResponseBodyResultDataRole& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline QueryWorkspaceUserListResponseBodyResultDataRole& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // Code corresponding to the preset role.
    std::shared_ptr<string> roleCode_ = nullptr;
    // Preset role ID. Possible values:
    // 
    // - 25: Workspace Administrator
    // - 26: Workspace Developer
    // - 27: Workspace Analyst
    // - 30: Workspace Viewer
    std::shared_ptr<int64_t> roleId_ = nullptr;
    // Name of the preset role.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
