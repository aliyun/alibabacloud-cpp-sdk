// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
    };
    UpdateUserPermissionsRequest() = default ;
    UpdateUserPermissionsRequest(const UpdateUserPermissionsRequest &) = default ;
    UpdateUserPermissionsRequest(UpdateUserPermissionsRequest &&) = default ;
    UpdateUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserPermissionsRequest() = default ;
    UpdateUserPermissionsRequest& operator=(const UpdateUserPermissionsRequest &) = default ;
    UpdateUserPermissionsRequest& operator=(UpdateUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(cluster, cluster_);
        DARABONBA_PTR_TO_JSON(is_custom, isCustom_);
        DARABONBA_PTR_TO_JSON(is_ram_role, isRamRole_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(role_name, roleName_);
        DARABONBA_PTR_TO_JSON(role_type, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(is_custom, isCustom_);
        DARABONBA_PTR_FROM_JSON(is_ram_role, isRamRole_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(role_name, roleName_);
        DARABONBA_PTR_FROM_JSON(role_type, roleType_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cluster_ == nullptr
        && this->isCustom_ == nullptr && this->isRamRole_ == nullptr && this->namespace_ == nullptr && this->roleName_ == nullptr && this->roleType_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
      inline Body& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


      // isCustom Field Functions 
      bool hasIsCustom() const { return this->isCustom_ != nullptr;};
      void deleteIsCustom() { this->isCustom_ = nullptr;};
      inline bool getIsCustom() const { DARABONBA_PTR_GET_DEFAULT(isCustom_, false) };
      inline Body& setIsCustom(bool isCustom) { DARABONBA_PTR_SET_VALUE(isCustom_, isCustom) };


      // isRamRole Field Functions 
      bool hasIsRamRole() const { return this->isRamRole_ != nullptr;};
      void deleteIsRamRole() { this->isRamRole_ = nullptr;};
      inline bool getIsRamRole() const { DARABONBA_PTR_GET_DEFAULT(isRamRole_, false) };
      inline Body& setIsRamRole(bool isRamRole) { DARABONBA_PTR_SET_VALUE(isRamRole_, isRamRole) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Body& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Body& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Body& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      // The ID of the target cluster.
      // 
      // This parameter is not required when the role_type parameter is set to all-clusters.
      shared_ptr<string> cluster_ {};
      // Specifies whether the authorization is custom. A custom authorization uses a custom ClusterRole name for the role_name parameter.
      // 
      // Valid values:
      // - true: The authorized role is a custom cluster role.
      // - false: The authorized role is a preset cluster role.
      shared_ptr<bool> isCustom_ {};
      // Specifies whether the authorized entity is a RAM role.
      // 
      // Valid values:
      // - true: The authorization is for a RAM role.
      // - false: The authorization is for a Resource Access Management (RAM) user.
      shared_ptr<bool> isRamRole_ {};
      // The namespace name. This parameter is empty by default for cluster-level authorization.
      shared_ptr<string> namespace_ {};
      // The preset role name. Valid values:
      // 
      // - admin: administrator.
      // - admin-view: read-only administrator.
      // - ops: O&M engineer.
      // - dev: developer.
      // - restricted: restricted user.
      // - A custom ClusterRole name.
      // 
      // > - The admin, admin-view, and ops roles do not support authorization at the **namespace level**.
      // > - The admin-view role does not support authorization at the **all-clusters level**.
      shared_ptr<string> roleName_ {};
      // The authorization type. Valid values:
      // 
      // - cluster: cluster level.
      // - namespace: namespace level.
      // - all-clusters: all-clusters level.
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->mode_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateUserPermissionsRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateUserPermissionsRequest::Body>) };
    inline vector<UpdateUserPermissionsRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpdateUserPermissionsRequest::Body>) };
    inline UpdateUserPermissionsRequest& setBody(const vector<UpdateUserPermissionsRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateUserPermissionsRequest& setBody(vector<UpdateUserPermissionsRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateUserPermissionsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The request body parameters.
    shared_ptr<vector<UpdateUserPermissionsRequest::Body>> body_ {};
    // The authorization method. Valid values:
    // 
    // - `apply`: Fully updates permissions. This operation overwrites the existing cluster permissions of the target RAM user or RAM role. The request must include all permission configurations to be granted to the target RAM user or RAM role.
    // - `delete`: Deletes permissions. This operation deletes only the cluster authorization information specified in the request and does not affect other cluster permissions of the RAM user or RAM role.
    // - `patch`: Adds permissions. This operation adds only the cluster authorization information specified in the request and does not affect other cluster permissions of the RAM user or RAM role.
    // 
    // Default value: `apply`.
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
