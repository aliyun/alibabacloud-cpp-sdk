// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RegisterAppResourcePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAppResourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAppResourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RegisterAppResourcePermissionsResponseBody() = default ;
    RegisterAppResourcePermissionsResponseBody(const RegisterAppResourcePermissionsResponseBody &) = default ;
    RegisterAppResourcePermissionsResponseBody(RegisterAppResourcePermissionsResponseBody &&) = default ;
    RegisterAppResourcePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAppResourcePermissionsResponseBody() = default ;
    RegisterAppResourcePermissionsResponseBody& operator=(const RegisterAppResourcePermissionsResponseBody &) = default ;
    RegisterAppResourcePermissionsResponseBody& operator=(RegisterAppResourcePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
        DARABONBA_PTR_TO_JSON(grantedBy, grantedBy_);
        DARABONBA_PTR_TO_JSON(granteeId, granteeId_);
        DARABONBA_PTR_TO_JSON(granteeName, granteeName_);
        DARABONBA_PTR_TO_JSON(granteeTenantId, granteeTenantId_);
        DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
        DARABONBA_PTR_TO_JSON(permission, permission_);
        DARABONBA_PTR_TO_JSON(permissionId, permissionId_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
        DARABONBA_PTR_FROM_JSON(grantedBy, grantedBy_);
        DARABONBA_PTR_FROM_JSON(granteeId, granteeId_);
        DARABONBA_PTR_FROM_JSON(granteeName, granteeName_);
        DARABONBA_PTR_FROM_JSON(granteeTenantId, granteeTenantId_);
        DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
        DARABONBA_PTR_FROM_JSON(permission, permission_);
        DARABONBA_PTR_FROM_JSON(permissionId, permissionId_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->expireAt_ == nullptr && this->grantedBy_ == nullptr && this->granteeId_ == nullptr && this->granteeName_ == nullptr && this->granteeTenantId_ == nullptr
        && this->granteeType_ == nullptr && this->permission_ == nullptr && this->permissionId_ == nullptr && this->resourceKey_ == nullptr && this->resourceType_ == nullptr
        && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Records& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // expireAt Field Functions 
      bool hasExpireAt() const { return this->expireAt_ != nullptr;};
      void deleteExpireAt() { this->expireAt_ = nullptr;};
      inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
      inline Records& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


      // grantedBy Field Functions 
      bool hasGrantedBy() const { return this->grantedBy_ != nullptr;};
      void deleteGrantedBy() { this->grantedBy_ = nullptr;};
      inline string getGrantedBy() const { DARABONBA_PTR_GET_DEFAULT(grantedBy_, "") };
      inline Records& setGrantedBy(string grantedBy) { DARABONBA_PTR_SET_VALUE(grantedBy_, grantedBy) };


      // granteeId Field Functions 
      bool hasGranteeId() const { return this->granteeId_ != nullptr;};
      void deleteGranteeId() { this->granteeId_ = nullptr;};
      inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
      inline Records& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


      // granteeName Field Functions 
      bool hasGranteeName() const { return this->granteeName_ != nullptr;};
      void deleteGranteeName() { this->granteeName_ = nullptr;};
      inline string getGranteeName() const { DARABONBA_PTR_GET_DEFAULT(granteeName_, "") };
      inline Records& setGranteeName(string granteeName) { DARABONBA_PTR_SET_VALUE(granteeName_, granteeName) };


      // granteeTenantId Field Functions 
      bool hasGranteeTenantId() const { return this->granteeTenantId_ != nullptr;};
      void deleteGranteeTenantId() { this->granteeTenantId_ = nullptr;};
      inline string getGranteeTenantId() const { DARABONBA_PTR_GET_DEFAULT(granteeTenantId_, "") };
      inline Records& setGranteeTenantId(string granteeTenantId) { DARABONBA_PTR_SET_VALUE(granteeTenantId_, granteeTenantId) };


      // granteeType Field Functions 
      bool hasGranteeType() const { return this->granteeType_ != nullptr;};
      void deleteGranteeType() { this->granteeType_ = nullptr;};
      inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
      inline Records& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline Records& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // permissionId Field Functions 
      bool hasPermissionId() const { return this->permissionId_ != nullptr;};
      void deletePermissionId() { this->permissionId_ = nullptr;};
      inline int64_t getPermissionId() const { DARABONBA_PTR_GET_DEFAULT(permissionId_, 0L) };
      inline Records& setPermissionId(int64_t permissionId) { DARABONBA_PTR_SET_VALUE(permissionId_, permissionId) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline Records& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Records& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Records& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // 创建时间
      shared_ptr<string> createdAt_ {};
      // 到期时间
      shared_ptr<string> expireAt_ {};
      // 授权人平台用户 ID
      shared_ptr<string> grantedBy_ {};
      // 主体 ID
      shared_ptr<string> granteeId_ {};
      // 主体名称
      shared_ptr<string> granteeName_ {};
      // 跨租户 USER 所属租户
      shared_ptr<string> granteeTenantId_ {};
      // 主体类型
      shared_ptr<string> granteeType_ {};
      // 权限点
      shared_ptr<string> permission_ {};
      // 权限记录 ID
      shared_ptr<int64_t> permissionId_ {};
      // 资源键
      shared_ptr<string> resourceKey_ {};
      // 资源类型
      shared_ptr<string> resourceType_ {};
      // 更新时间
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RegisterAppResourcePermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RegisterAppResourcePermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<RegisterAppResourcePermissionsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<RegisterAppResourcePermissionsResponseBody::Records>) };
    inline vector<RegisterAppResourcePermissionsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<RegisterAppResourcePermissionsResponseBody::Records>) };
    inline RegisterAppResourcePermissionsResponseBody& setRecords(const vector<RegisterAppResourcePermissionsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline RegisterAppResourcePermissionsResponseBody& setRecords(vector<RegisterAppResourcePermissionsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterAppResourcePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码；成功为 200
    shared_ptr<string> code_ {};
    // 错误描述；成功时为空
    shared_ptr<string> message_ {};
    // 新建或幂等命中的权限记录
    shared_ptr<vector<RegisterAppResourcePermissionsResponseBody::Records>> records_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
