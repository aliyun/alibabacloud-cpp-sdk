// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UpdateCustomRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(role_id, roleId_);
      DARABONBA_PTR_TO_JSON(role_name, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(role_id, roleId_);
      DARABONBA_PTR_FROM_JSON(role_name, roleName_);
    };
    UpdateCustomRoleRequest() = default ;
    UpdateCustomRoleRequest(const UpdateCustomRoleRequest &) = default ;
    UpdateCustomRoleRequest(UpdateCustomRoleRequest &&) = default ;
    UpdateCustomRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomRoleRequest() = default ;
    UpdateCustomRoleRequest& operator=(const UpdateCustomRoleRequest &) = default ;
    UpdateCustomRoleRequest& operator=(UpdateCustomRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleId_ != nullptr
        && this->roleName_ != nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline UpdateCustomRoleRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateCustomRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
