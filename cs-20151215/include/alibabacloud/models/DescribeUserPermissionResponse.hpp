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
      // 集群访问配置，格式为：
      // 
      // - 当是集群维度授权时，格式为：`{cluster_id}`。
      // - 当是命名空间维度授权时，格式为：`{cluster_id}/{namespace}`。
      // - 当是所有集群授权时，值固定为：`all-clusters`。
      shared_ptr<string> resourceId_ {};
      // 授权类型，取值：
      // 
      // - `cluster`：集群维度。
      // - `namespace`：命名空间维度。
      // - `console`：所有集群维度的授权。
      shared_ptr<string> resourceType_ {};
      // 自定义角色名称，当授权自定义角色时，该字段为指定的自定义集群管理角色名称。
      shared_ptr<string> roleName_ {};
      // 预置的角色类型，取值：
      // 
      // - `admin`：管理员。
      // - `ops`：运维人员。
      // - `dev`：开发人员。
      // - `restricted`：受限用户。
      // - `custom`：使用自定义的集群管理角色。
      shared_ptr<string> roleType_ {};
      // 是否为集群创建者的授权，取值：
      // 
      // - `0`：代表不是集群创建者的授权记录。
      // - `1`：代表该授权记录为集群创建者的管理员权限。
      shared_ptr<int64_t> isOwner_ {};
      // 是否为RAM角色授权，取值：
      // 
      // - `0`：代表当前记录不是RAM角色授权。
      // - `1`：代表当前记录是RAM角色授权。
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
