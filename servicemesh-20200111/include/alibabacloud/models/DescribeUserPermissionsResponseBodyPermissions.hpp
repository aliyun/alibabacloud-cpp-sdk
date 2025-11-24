// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUserPermissionsResponseBodyPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(IsRamRole, isRamRole_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(IsRamRole, isRamRole_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeUserPermissionsResponseBodyPermissions() = default ;
    DescribeUserPermissionsResponseBodyPermissions(const DescribeUserPermissionsResponseBodyPermissions &) = default ;
    DescribeUserPermissionsResponseBodyPermissions(DescribeUserPermissionsResponseBodyPermissions &&) = default ;
    DescribeUserPermissionsResponseBodyPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserPermissionsResponseBodyPermissions() = default ;
    DescribeUserPermissionsResponseBodyPermissions& operator=(const DescribeUserPermissionsResponseBodyPermissions &) = default ;
    DescribeUserPermissionsResponseBodyPermissions& operator=(DescribeUserPermissionsResponseBodyPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isRamRole_ == nullptr
        && return this->parentId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->roleName_ == nullptr && return this->roleType_ == nullptr; };
    // isRamRole Field Functions 
    bool hasIsRamRole() const { return this->isRamRole_ != nullptr;};
    void deleteIsRamRole() { this->isRamRole_ = nullptr;};
    inline string isRamRole() const { DARABONBA_PTR_GET_DEFAULT(isRamRole_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setIsRamRole(string isRamRole) { DARABONBA_PTR_SET_VALUE(isRamRole_, isRamRole) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeUserPermissionsResponseBodyPermissions& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The entity to which the permissions are granted. A value of `true` indicates that the permissions are granted to a RAM user. A value of `false` indicates that the permissions are granted to a RAM role.
    std::shared_ptr<string> isRamRole_ = nullptr;
    // The value is fixed as `0`.
    std::shared_ptr<string> parentId_ = nullptr;
    // The ID of the ASM instance.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The value is fixed as `cluster`.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The name of the permissions. Valid values:
    // 
    // *   `istio-admin`: the permissions of ASM administrators.
    // *   `istio-ops`: the permissions of ASM restricted users.
    // *   `istio-readonly`: the read-only permissions.
    std::shared_ptr<string> roleName_ = nullptr;
    // The value is fixed as `custom`.
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
