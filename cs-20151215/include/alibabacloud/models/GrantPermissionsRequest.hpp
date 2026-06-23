// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
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
  class GrantPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GrantPermissionsRequest() = default ;
    GrantPermissionsRequest(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest(GrantPermissionsRequest &&) = default ;
    GrantPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantPermissionsRequest() = default ;
    GrantPermissionsRequest& operator=(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest& operator=(GrantPermissionsRequest &&) = default ;
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
      // The ID of the cluster to be authorized.
      // 
      // - If the value of the `role_type` parameter is `all-clusters`, set this parameter to an empty string.
      // 
      // This parameter is required.
      shared_ptr<string> cluster_ {};
      // Specifies whether the authorization is a custom authorization, which means `role_name` uses a custom ClusterRole name.
      shared_ptr<bool> isCustom_ {};
      // Specifies whether the authorization is for a RAM role.
      shared_ptr<bool> isRamRole_ {};
      // The namespace name. This parameter is empty by default for cluster-level authorization.
      shared_ptr<string> namespace_ {};
      // The name of the preset role. Valid values:
      // 
      // - `admin`: administrator.
      // - `admin-view`: read-only administrator.
      // - `ops`: O&M engineer.
      // - `dev`: developer.
      // - `restricted`: restricted user.
      // - Custom ClusterRole name.
      // 
      // >Notice: 
      // 
      // - `admin`, `admin-view`, `ops`: cannot be granted at the namespace level.
      // - `admin-view`: cannot be granted at the all-clusters level.
      // .
      // 
      // This parameter is required.
      shared_ptr<string> roleName_ {};
      // The authorization type. Valid values:
      // 
      // - `cluster`: cluster level.
      // - `namespace`: namespace level.
      // - `all-clusters`: all-clusters level.
      // 
      // This parameter is required.
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<GrantPermissionsRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<GrantPermissionsRequest::Body>) };
    inline vector<GrantPermissionsRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<GrantPermissionsRequest::Body>) };
    inline GrantPermissionsRequest& setBody(const vector<GrantPermissionsRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GrantPermissionsRequest& setBody(vector<GrantPermissionsRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body parameters.
    shared_ptr<vector<GrantPermissionsRequest::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
