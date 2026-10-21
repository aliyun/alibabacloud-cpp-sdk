// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeUserPermissionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserPermissionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserPermissionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeUserPermissionResponse() = default ;
    DescribeUserPermissionResponse(const DescribeUserPermissionResponse &) = default ;
    DescribeUserPermissionResponse(DescribeUserPermissionResponse &&) = default ;
    DescribeUserPermissionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserPermissionResponse() = default ;
    DescribeUserPermissionResponse& operator=(const DescribeUserPermissionResponse &) = default ;
    DescribeUserPermissionResponse& operator=(DescribeUserPermissionResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(resource_id, resourceId_);
        DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
        DARABONBA_PTR_TO_JSON(role_name, roleName_);
        DARABONBA_PTR_TO_JSON(role_type, roleType_);
        DARABONBA_PTR_TO_JSON(is_owner, isOwner_);
        DARABONBA_PTR_TO_JSON(is_ram_role, isRamRole_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(resource_id, resourceId_);
        DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
        DARABONBA_PTR_FROM_JSON(role_name, roleName_);
        DARABONBA_PTR_FROM_JSON(role_type, roleType_);
        DARABONBA_PTR_FROM_JSON(is_owner, isOwner_);
        DARABONBA_PTR_FROM_JSON(is_ram_role, isRamRole_);
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
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->roleName_ == nullptr && this->roleType_ == nullptr && this->isOwner_ == nullptr && this->isRamRole_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Body& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Body& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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


      // isOwner Field Functions 
      bool hasIsOwner() const { return this->isOwner_ != nullptr;};
      void deleteIsOwner() { this->isOwner_ = nullptr;};
      inline int64_t getIsOwner() const { DARABONBA_PTR_GET_DEFAULT(isOwner_, 0L) };
      inline Body& setIsOwner(int64_t isOwner) { DARABONBA_PTR_SET_VALUE(isOwner_, isOwner) };


      // isRamRole Field Functions 
      bool hasIsRamRole() const { return this->isRamRole_ != nullptr;};
      void deleteIsRamRole() { this->isRamRole_ = nullptr;};
      inline int64_t getIsRamRole() const { DARABONBA_PTR_GET_DEFAULT(isRamRole_, 0L) };
      inline Body& setIsRamRole(int64_t isRamRole) { DARABONBA_PTR_SET_VALUE(isRamRole_, isRamRole) };


    protected:
      // The cluster access configuration. The format varies based on the authorization scope:
      // 
      // - Cluster-level authorization: `{cluster_id}`.
      // - Namespace-level authorization: `{cluster_id}/{namespace}`.
      // - All-cluster authorization: `all-clusters`.
      shared_ptr<string> resourceId_ {};
      // The authorization type. Valid values:
      // 
      // - `cluster`: cluster-level.
      // - `namespace`: namespace-level.
      // - `console`: all-cluster-level authorization.
      shared_ptr<string> resourceType_ {};
      // The custom role name. When a custom role is authorized, this field specifies the name of the custom cluster management role.
      shared_ptr<string> roleName_ {};
      // The preset role type. Valid values:
      // 
      // - `admin`: Administrator.
      // - `ops`: O&M engineer.
      // - `dev`: Developer.
      // - `restricted`: Restricted user.
      // - `custom`: Custom cluster management role.
      shared_ptr<string> roleType_ {};
      // Indicates whether the authorization belongs to the cluster creator. Valid values:
      // 
      // - `0`: The authorization record does not belong to the cluster creator.
      // - `1`: The authorization record represents the administrator permissions of the cluster creator.
      shared_ptr<int64_t> isOwner_ {};
      // Indicates whether the authorization is for a RAM role. Valid values:
      // 
      // - `0`: The record is not a RAM role authorization.
      // - `1`: The record is a RAM role authorization.
      shared_ptr<int64_t> isRamRole_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeUserPermissionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeUserPermissionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeUserPermissionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeUserPermissionResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeUserPermissionResponse::Body>) };
    inline vector<DescribeUserPermissionResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeUserPermissionResponse::Body>) };
    inline DescribeUserPermissionResponse& setBody(const vector<DescribeUserPermissionResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeUserPermissionResponse& setBody(vector<DescribeUserPermissionResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeUserPermissionResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
