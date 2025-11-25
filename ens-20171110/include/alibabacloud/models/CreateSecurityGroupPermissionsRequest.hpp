// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSecurityGroupPermissionsRequestPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSecurityGroupPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    CreateSecurityGroupPermissionsRequest() = default ;
    CreateSecurityGroupPermissionsRequest(const CreateSecurityGroupPermissionsRequest &) = default ;
    CreateSecurityGroupPermissionsRequest(CreateSecurityGroupPermissionsRequest &&) = default ;
    CreateSecurityGroupPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityGroupPermissionsRequest() = default ;
    CreateSecurityGroupPermissionsRequest& operator=(const CreateSecurityGroupPermissionsRequest &) = default ;
    CreateSecurityGroupPermissionsRequest& operator=(CreateSecurityGroupPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && return this->securityGroupId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<CreateSecurityGroupPermissionsRequestPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<CreateSecurityGroupPermissionsRequestPermissions>) };
    inline vector<CreateSecurityGroupPermissionsRequestPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<CreateSecurityGroupPermissionsRequestPermissions>) };
    inline CreateSecurityGroupPermissionsRequest& setPermissions(const vector<CreateSecurityGroupPermissionsRequestPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline CreateSecurityGroupPermissionsRequest& setPermissions(vector<CreateSecurityGroupPermissionsRequestPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateSecurityGroupPermissionsRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateSecurityGroupPermissionsRequestPermissions>> permissions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
