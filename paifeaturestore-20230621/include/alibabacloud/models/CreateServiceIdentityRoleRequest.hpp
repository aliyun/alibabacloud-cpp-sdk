// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEIDENTITYROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEIDENTITYROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateServiceIdentityRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceIdentityRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceIdentityRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateServiceIdentityRoleRequest() = default ;
    CreateServiceIdentityRoleRequest(const CreateServiceIdentityRoleRequest &) = default ;
    CreateServiceIdentityRoleRequest(CreateServiceIdentityRoleRequest &&) = default ;
    CreateServiceIdentityRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceIdentityRoleRequest() = default ;
    CreateServiceIdentityRoleRequest& operator=(const CreateServiceIdentityRoleRequest &) = default ;
    CreateServiceIdentityRoleRequest& operator=(CreateServiceIdentityRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateServiceIdentityRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // This parameter is required.
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
