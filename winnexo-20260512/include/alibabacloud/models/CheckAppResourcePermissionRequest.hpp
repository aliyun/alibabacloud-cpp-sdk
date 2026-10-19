// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CheckAppResourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAppResourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(permission, permission_);
      DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAppResourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(permission, permission_);
      DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CheckAppResourcePermissionRequest() = default ;
    CheckAppResourcePermissionRequest(const CheckAppResourcePermissionRequest &) = default ;
    CheckAppResourcePermissionRequest(CheckAppResourcePermissionRequest &&) = default ;
    CheckAppResourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAppResourcePermissionRequest() = default ;
    CheckAppResourcePermissionRequest& operator=(const CheckAppResourcePermissionRequest &) = default ;
    CheckAppResourcePermissionRequest& operator=(CheckAppResourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permission_ == nullptr
        && this->resourceKey_ == nullptr && this->resourceTenantId_ == nullptr && this->resourceType_ == nullptr && this->targetUserId_ == nullptr && this->targetUserTenantId_ == nullptr
        && this->tenantId_ == nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline CheckAppResourcePermissionRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // resourceKey Field Functions 
    bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
    void deleteResourceKey() { this->resourceKey_ = nullptr;};
    inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
    inline CheckAppResourcePermissionRequest& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline CheckAppResourcePermissionRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CheckAppResourcePermissionRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline CheckAppResourcePermissionRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // targetUserTenantId Field Functions 
    bool hasTargetUserTenantId() const { return this->targetUserTenantId_ != nullptr;};
    void deleteTargetUserTenantId() { this->targetUserTenantId_ = nullptr;};
    inline string getTargetUserTenantId() const { DARABONBA_PTR_GET_DEFAULT(targetUserTenantId_, "") };
    inline CheckAppResourcePermissionRequest& setTargetUserTenantId(string targetUserTenantId) { DARABONBA_PTR_SET_VALUE(targetUserTenantId_, targetUserTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CheckAppResourcePermissionRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 需要检查的权限点
    // 
    // This parameter is required.
    shared_ptr<string> permission_ {};
    // 首段为 APP 应用键的点分资源键
    // 
    // This parameter is required.
    shared_ptr<string> resourceKey_ {};
    // 资源所属租户 ID；省略为调用人当前租户
    shared_ptr<string> resourceTenantId_ {};
    // 固定为 APP_RESOURCE
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // 目标平台用户 ID
    shared_ptr<int64_t> targetUserId_ {};
    // 目标用户所属租户；跨租户目标必填
    shared_ptr<string> targetUserTenantId_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
