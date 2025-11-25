// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYGROUPPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSecurityGroupPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityGroupPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityGroupPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DeleteSecurityGroupPermissionsShrinkRequest() = default ;
    DeleteSecurityGroupPermissionsShrinkRequest(const DeleteSecurityGroupPermissionsShrinkRequest &) = default ;
    DeleteSecurityGroupPermissionsShrinkRequest(DeleteSecurityGroupPermissionsShrinkRequest &&) = default ;
    DeleteSecurityGroupPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityGroupPermissionsShrinkRequest() = default ;
    DeleteSecurityGroupPermissionsShrinkRequest& operator=(const DeleteSecurityGroupPermissionsShrinkRequest &) = default ;
    DeleteSecurityGroupPermissionsShrinkRequest& operator=(DeleteSecurityGroupPermissionsShrinkRequest &&) = default ;
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
    inline DeleteSecurityGroupPermissionsShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DeleteSecurityGroupPermissionsShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> permissionsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
