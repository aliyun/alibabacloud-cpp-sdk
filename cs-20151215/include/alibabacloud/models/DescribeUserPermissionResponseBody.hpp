// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeUserPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(resource_id, resourceId_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(role_name, roleName_);
      DARABONBA_PTR_TO_JSON(role_type, roleType_);
      DARABONBA_PTR_TO_JSON(is_owner, isOwner_);
      DARABONBA_PTR_TO_JSON(is_ram_role, isRamRole_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(resource_id, resourceId_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(role_name, roleName_);
      DARABONBA_PTR_FROM_JSON(role_type, roleType_);
      DARABONBA_PTR_FROM_JSON(is_owner, isOwner_);
      DARABONBA_PTR_FROM_JSON(is_ram_role, isRamRole_);
    };
    DescribeUserPermissionResponseBody() = default ;
    DescribeUserPermissionResponseBody(const DescribeUserPermissionResponseBody &) = default ;
    DescribeUserPermissionResponseBody(DescribeUserPermissionResponseBody &&) = default ;
    DescribeUserPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserPermissionResponseBody() = default ;
    DescribeUserPermissionResponseBody& operator=(const DescribeUserPermissionResponseBody &) = default ;
    DescribeUserPermissionResponseBody& operator=(DescribeUserPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->roleName_ == nullptr && return this->roleType_ == nullptr && return this->isOwner_ == nullptr && return this->isRamRole_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeUserPermissionResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeUserPermissionResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DescribeUserPermissionResponseBody& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeUserPermissionResponseBody& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // isOwner Field Functions 
    bool hasIsOwner() const { return this->isOwner_ != nullptr;};
    void deleteIsOwner() { this->isOwner_ = nullptr;};
    inline int64_t isOwner() const { DARABONBA_PTR_GET_DEFAULT(isOwner_, 0L) };
    inline DescribeUserPermissionResponseBody& setIsOwner(int64_t isOwner) { DARABONBA_PTR_SET_VALUE(isOwner_, isOwner) };


    // isRamRole Field Functions 
    bool hasIsRamRole() const { return this->isRamRole_ != nullptr;};
    void deleteIsRamRole() { this->isRamRole_ = nullptr;};
    inline int64_t isRamRole() const { DARABONBA_PTR_GET_DEFAULT(isRamRole_, 0L) };
    inline DescribeUserPermissionResponseBody& setIsRamRole(int64_t isRamRole) { DARABONBA_PTR_SET_VALUE(isRamRole_, isRamRole) };


  protected:
    // The authorization setting. Valid values:
    // 
    // *   `{cluster_id}` is returned if the permissions are scoped to a cluster.
    // *   `{cluster_id}/{namespace}` is returned if the permissions are scoped to a namespace of a cluster.
    // *   `all-clusters` is returned if the permissions are scoped to all clusters.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The authorization type. Valid values:
    // 
    // *   `cluster`: indicates that the permissions are scoped to a cluster.
    // *   `namespace`: indicates that the permissions are scoped to a namespace of a cluster.
    // *   `console`: indicates that the permissions are scoped to all clusters.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The name of the custom role. If a custom role is assigned, the value is the name of the assigned custom role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The type of predefined role. Valid values:
    // 
    // *   `admin`: administrator
    // *   `ops`: O\\&M engineer
    // *   `dev`: developer
    // *   `restricted`: restricted user
    // *   `custom`: custom role
    std::shared_ptr<string> roleType_ = nullptr;
    // Indicates whether the permissions are granted to the cluster owner.
    // 
    // *   `0`: indicates that the permissions are not granted to the cluster owner.
    // *   `1`: indicates that the permissions are granted to the cluster owner. The cluster owner is the administrator.
    std::shared_ptr<int64_t> isOwner_ = nullptr;
    // Indicates whether the permissions are granted to the RAM role. Valid values:
    // 
    // *   `0`: indicates that the permissions are not granted to the RAM role.
    // *   `1`: indicates that the permissions are granted to the RAM role.
    std::shared_ptr<int64_t> isRamRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
