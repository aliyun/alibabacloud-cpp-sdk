// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACEROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACEROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteWorkspaceRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
    };
    DeleteWorkspaceRolesRequest() = default ;
    DeleteWorkspaceRolesRequest(const DeleteWorkspaceRolesRequest &) = default ;
    DeleteWorkspaceRolesRequest(DeleteWorkspaceRolesRequest &&) = default ;
    DeleteWorkspaceRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceRolesRequest() = default ;
    DeleteWorkspaceRolesRequest& operator=(const DeleteWorkspaceRolesRequest &) = default ;
    DeleteWorkspaceRolesRequest& operator=(DeleteWorkspaceRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleIds_ == nullptr; };
    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<string> & getRoleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<string>) };
    inline vector<string> getRoleIds() { DARABONBA_PTR_GET(roleIds_, vector<string>) };
    inline DeleteWorkspaceRolesRequest& setRoleIds(const vector<string> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline DeleteWorkspaceRolesRequest& setRoleIds(vector<string> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


  protected:
    // The IDs of the roles to delete.
    shared_ptr<vector<string>> roleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
