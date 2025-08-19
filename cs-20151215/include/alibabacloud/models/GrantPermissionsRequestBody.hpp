// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GrantPermissionsRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantPermissionsRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(is_custom, isCustom_);
      DARABONBA_PTR_TO_JSON(is_ram_role, isRamRole_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(role_name, roleName_);
      DARABONBA_PTR_TO_JSON(role_type, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, GrantPermissionsRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(is_custom, isCustom_);
      DARABONBA_PTR_FROM_JSON(is_ram_role, isRamRole_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(role_name, roleName_);
      DARABONBA_PTR_FROM_JSON(role_type, roleType_);
    };
    GrantPermissionsRequestBody() = default ;
    GrantPermissionsRequestBody(const GrantPermissionsRequestBody &) = default ;
    GrantPermissionsRequestBody(GrantPermissionsRequestBody &&) = default ;
    GrantPermissionsRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantPermissionsRequestBody() = default ;
    GrantPermissionsRequestBody& operator=(const GrantPermissionsRequestBody &) = default ;
    GrantPermissionsRequestBody& operator=(GrantPermissionsRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->isCustom_ != nullptr && this->isRamRole_ != nullptr && this->namespace_ != nullptr && this->roleName_ != nullptr && this->roleType_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GrantPermissionsRequestBody& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // isCustom Field Functions 
    bool hasIsCustom() const { return this->isCustom_ != nullptr;};
    void deleteIsCustom() { this->isCustom_ = nullptr;};
    inline bool isCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
    inline GrantPermissionsRequestBody& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


    // isRamRole Field Functions 
    bool hasIsRamRole() const { return this->isRamRole_ != nullptr;};
    void deleteIsRamRole() { this->isRamRole_ = nullptr;};
    inline bool isRamRole() const { DARABONBA_PTR_GET_DEFAULT(isRamRole_, false) };
    inline GrantPermissionsRequestBody& setIsRamRole(bool isRamRole) { DARABONBA_PTR_SET_VALUE(isRamRole_, isRamRole) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GrantPermissionsRequestBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GrantPermissionsRequestBody& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline GrantPermissionsRequestBody& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The ID of the cluster on which you want to grant permissions to the RAM role or RAM role.
    // 
    // *   Set this parameter to an empty string if `role_type` is set to `all-clusters`.
    // 
    // This parameter is required.
    std::shared_ptr<string> cluster_ = nullptr;
    // Specifies whether to assign a custom role to the RAM user or RAM role. If you want to assign a custom role to the RAM user or RAM role, set `role_name` to the name of the custom role.
    std::shared_ptr<bool> isCustom_ = nullptr;
    // Specifies whether to use a RAM role to grant permissions.
    std::shared_ptr<bool> isRamRole_ = nullptr;
    // The namespace that you want to authorize the RAM user or RAM role to manage. This parameter is required only if you set role_type to namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The predefined role name. Valid values:
    // 
    // *   `admin`: administrator
    // *   `admin-view`: read-only administrator
    // *   `ops`: O\\&M engineer
    // *   `dev`: developer
    // *   `restricted`: restricted user
    // *   Custom role
    // 
    // Note:
    // 
    // *   You cannot grant namespace-level permissions to the `admin`, `admin-view`, and `ops` roles.
    // *   You cannot grant all cluster-level permissions to the `admin-view` role.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
    // The authorization type. Valid values:
    // 
    // *   `cluster`: authorizes the RAM user or RAM role to manage the specified clusters.
    // *   `namespace`: authorizes the RAM user or RAM role to manage the specified namespaces.
    // *   `all-clusters`: authorizes the RAM user or RAM role to manage all clusters.
    // 
    // This parameter is required.
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
