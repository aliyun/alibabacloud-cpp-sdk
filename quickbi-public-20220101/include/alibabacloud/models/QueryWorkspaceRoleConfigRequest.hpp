// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceRoleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceRoleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceRoleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    QueryWorkspaceRoleConfigRequest() = default ;
    QueryWorkspaceRoleConfigRequest(const QueryWorkspaceRoleConfigRequest &) = default ;
    QueryWorkspaceRoleConfigRequest(QueryWorkspaceRoleConfigRequest &&) = default ;
    QueryWorkspaceRoleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceRoleConfigRequest() = default ;
    QueryWorkspaceRoleConfigRequest& operator=(const QueryWorkspaceRoleConfigRequest &) = default ;
    QueryWorkspaceRoleConfigRequest& operator=(QueryWorkspaceRoleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline QueryWorkspaceRoleConfigRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // Workspace role ID, including predefined roles and custom roles:
    // 
    // - 25: Workspace Administrator (predefined role)
    // - 26: Developer (predefined role)
    // - 27: Analyst (predefined role)
    // - 30: Viewer (predefined role)
    // - Custom role: The corresponding role ID for the custom role
    // 
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
