// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RoleInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleInput, roleInput_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleInput, roleInput_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    UpdateRoleRequest() = default ;
    UpdateRoleRequest(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest(UpdateRoleRequest &&) = default ;
    UpdateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleRequest() = default ;
    UpdateRoleRequest& operator=(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest& operator=(UpdateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleInput_ == nullptr
        && return this->roleName_ == nullptr; };
    // roleInput Field Functions 
    bool hasRoleInput() const { return this->roleInput_ != nullptr;};
    void deleteRoleInput() { this->roleInput_ = nullptr;};
    inline const RoleInput & roleInput() const { DARABONBA_PTR_GET_CONST(roleInput_, RoleInput) };
    inline RoleInput roleInput() { DARABONBA_PTR_GET(roleInput_, RoleInput) };
    inline UpdateRoleRequest& setRoleInput(const RoleInput & roleInput) { DARABONBA_PTR_SET_VALUE(roleInput_, roleInput) };
    inline UpdateRoleRequest& setRoleInput(RoleInput && roleInput) { DARABONBA_PTR_SET_RVALUE(roleInput_, roleInput) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The input information of the updated role.
    std::shared_ptr<RoleInput> roleInput_ = nullptr;
    // The role name.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
