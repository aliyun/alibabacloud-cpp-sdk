// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHREQUEST_HPP_
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
  class CheckAppResourcePermissionsBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAppResourcePermissionsBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checks, checks_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAppResourcePermissionsBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checks, checks_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CheckAppResourcePermissionsBatchRequest() = default ;
    CheckAppResourcePermissionsBatchRequest(const CheckAppResourcePermissionsBatchRequest &) = default ;
    CheckAppResourcePermissionsBatchRequest(CheckAppResourcePermissionsBatchRequest &&) = default ;
    CheckAppResourcePermissionsBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAppResourcePermissionsBatchRequest() = default ;
    CheckAppResourcePermissionsBatchRequest& operator=(const CheckAppResourcePermissionsBatchRequest &) = default ;
    CheckAppResourcePermissionsBatchRequest& operator=(CheckAppResourcePermissionsBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Checks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Checks& obj) { 
        DARABONBA_PTR_TO_JSON(permission, permission_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Checks& obj) { 
        DARABONBA_PTR_FROM_JSON(permission, permission_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      Checks() = default ;
      Checks(const Checks &) = default ;
      Checks(Checks &&) = default ;
      Checks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Checks() = default ;
      Checks& operator=(const Checks &) = default ;
      Checks& operator=(Checks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->permission_ == nullptr
        && this->resourceKey_ == nullptr && this->resourceType_ == nullptr; };
      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline Checks& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline Checks& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Checks& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The target permission.
      // 
      // This parameter is required.
      shared_ptr<string> permission_ {};
      // The dot-separated resource key whose first segment is the APP application key.
      // 
      // This parameter is required.
      shared_ptr<string> resourceKey_ {};
      // The resource type. Set the value to APP_RESOURCE.
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->checks_ == nullptr
        && this->resourceTenantId_ == nullptr && this->targetUserId_ == nullptr && this->targetUserTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<CheckAppResourcePermissionsBatchRequest::Checks> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<CheckAppResourcePermissionsBatchRequest::Checks>) };
    inline vector<CheckAppResourcePermissionsBatchRequest::Checks> getChecks() { DARABONBA_PTR_GET(checks_, vector<CheckAppResourcePermissionsBatchRequest::Checks>) };
    inline CheckAppResourcePermissionsBatchRequest& setChecks(const vector<CheckAppResourcePermissionsBatchRequest::Checks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline CheckAppResourcePermissionsBatchRequest& setChecks(vector<CheckAppResourcePermissionsBatchRequest::Checks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline CheckAppResourcePermissionsBatchRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline CheckAppResourcePermissionsBatchRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // targetUserTenantId Field Functions 
    bool hasTargetUserTenantId() const { return this->targetUserTenantId_ != nullptr;};
    void deleteTargetUserTenantId() { this->targetUserTenantId_ = nullptr;};
    inline string getTargetUserTenantId() const { DARABONBA_PTR_GET_DEFAULT(targetUserTenantId_, "") };
    inline CheckAppResourcePermissionsBatchRequest& setTargetUserTenantId(string targetUserTenantId) { DARABONBA_PTR_SET_VALUE(targetUserTenantId_, targetUserTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CheckAppResourcePermissionsBatchRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The check items.
    // 
    // This parameter is required.
    shared_ptr<vector<CheckAppResourcePermissionsBatchRequest::Checks>> checks_ {};
    // The ID of the tenant to which the resource belongs. If not specified, the current tenant of the caller is used.
    shared_ptr<string> resourceTenantId_ {};
    // The ID of the target platform user.
    shared_ptr<int64_t> targetUserId_ {};
    // The tenant to which the target user belongs. This parameter is required for cross-tenant targets.
    shared_ptr<string> targetUserTenantId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
