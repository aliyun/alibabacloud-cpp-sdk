// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYGROUPPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSecurityGroupPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityGroupPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityGroupPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    CreateSecurityGroupPermissionsShrinkRequest() = default ;
    CreateSecurityGroupPermissionsShrinkRequest(const CreateSecurityGroupPermissionsShrinkRequest &) = default ;
    CreateSecurityGroupPermissionsShrinkRequest(CreateSecurityGroupPermissionsShrinkRequest &&) = default ;
    CreateSecurityGroupPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityGroupPermissionsShrinkRequest() = default ;
    CreateSecurityGroupPermissionsShrinkRequest& operator=(const CreateSecurityGroupPermissionsShrinkRequest &) = default ;
    CreateSecurityGroupPermissionsShrinkRequest& operator=(CreateSecurityGroupPermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissionsShrink_ == nullptr
        && return this->securityGroupId_ == nullptr; };
    // permissionsShrink Field Functions 
    bool hasPermissionsShrink() const { return this->permissionsShrink_ != nullptr;};
    void deletePermissionsShrink() { this->permissionsShrink_ = nullptr;};
    inline string permissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionsShrink_, "") };
    inline CreateSecurityGroupPermissionsShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateSecurityGroupPermissionsShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The security group rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> permissionsShrink_ = nullptr;
    // The IDs of the security groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
