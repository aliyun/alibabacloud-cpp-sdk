// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteSecurityGroupPermissionsRequestPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSecurityGroupPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityGroupPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DeleteSecurityGroupPermissionsRequest() = default ;
    DeleteSecurityGroupPermissionsRequest(const DeleteSecurityGroupPermissionsRequest &) = default ;
    DeleteSecurityGroupPermissionsRequest(DeleteSecurityGroupPermissionsRequest &&) = default ;
    DeleteSecurityGroupPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityGroupPermissionsRequest() = default ;
    DeleteSecurityGroupPermissionsRequest& operator=(const DeleteSecurityGroupPermissionsRequest &) = default ;
    DeleteSecurityGroupPermissionsRequest& operator=(DeleteSecurityGroupPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && return this->securityGroupId_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<DeleteSecurityGroupPermissionsRequestPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<DeleteSecurityGroupPermissionsRequestPermissions>) };
    inline vector<DeleteSecurityGroupPermissionsRequestPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<DeleteSecurityGroupPermissionsRequestPermissions>) };
    inline DeleteSecurityGroupPermissionsRequest& setPermissions(const vector<DeleteSecurityGroupPermissionsRequestPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DeleteSecurityGroupPermissionsRequest& setPermissions(vector<DeleteSecurityGroupPermissionsRequestPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DeleteSecurityGroupPermissionsRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DeleteSecurityGroupPermissionsRequestPermissions>> permissions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
