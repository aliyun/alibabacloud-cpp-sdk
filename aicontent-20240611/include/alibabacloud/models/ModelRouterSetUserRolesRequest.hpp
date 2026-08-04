// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERSETUSERROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERSETUSERROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DepartmentRoleCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterSetUserRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterSetUserRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(departmentRoles, departmentRoles_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterSetUserRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(departmentRoles, departmentRoles_);
    };
    ModelRouterSetUserRolesRequest() = default ;
    ModelRouterSetUserRolesRequest(const ModelRouterSetUserRolesRequest &) = default ;
    ModelRouterSetUserRolesRequest(ModelRouterSetUserRolesRequest &&) = default ;
    ModelRouterSetUserRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterSetUserRolesRequest() = default ;
    ModelRouterSetUserRolesRequest& operator=(const ModelRouterSetUserRolesRequest &) = default ;
    ModelRouterSetUserRolesRequest& operator=(ModelRouterSetUserRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentRoles_ == nullptr; };
    // departmentRoles Field Functions 
    bool hasDepartmentRoles() const { return this->departmentRoles_ != nullptr;};
    void deleteDepartmentRoles() { this->departmentRoles_ = nullptr;};
    inline const vector<DepartmentRoleCmd> & getDepartmentRoles() const { DARABONBA_PTR_GET_CONST(departmentRoles_, vector<DepartmentRoleCmd>) };
    inline vector<DepartmentRoleCmd> getDepartmentRoles() { DARABONBA_PTR_GET(departmentRoles_, vector<DepartmentRoleCmd>) };
    inline ModelRouterSetUserRolesRequest& setDepartmentRoles(const vector<DepartmentRoleCmd> & departmentRoles) { DARABONBA_PTR_SET_VALUE(departmentRoles_, departmentRoles) };
    inline ModelRouterSetUserRolesRequest& setDepartmentRoles(vector<DepartmentRoleCmd> && departmentRoles) { DARABONBA_PTR_SET_RVALUE(departmentRoles_, departmentRoles) };


  protected:
    // The department role list (required, full overwrite).
    shared_ptr<vector<DepartmentRoleCmd>> departmentRoles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
