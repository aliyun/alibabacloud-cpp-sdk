// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKAPPRESOURCEPERMISSIONSBATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CheckAppResourcePermissionsBatchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAppResourcePermissionsBatchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(checks, checksShrink_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAppResourcePermissionsBatchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(checks, checksShrink_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CheckAppResourcePermissionsBatchShrinkRequest() = default ;
    CheckAppResourcePermissionsBatchShrinkRequest(const CheckAppResourcePermissionsBatchShrinkRequest &) = default ;
    CheckAppResourcePermissionsBatchShrinkRequest(CheckAppResourcePermissionsBatchShrinkRequest &&) = default ;
    CheckAppResourcePermissionsBatchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAppResourcePermissionsBatchShrinkRequest() = default ;
    CheckAppResourcePermissionsBatchShrinkRequest& operator=(const CheckAppResourcePermissionsBatchShrinkRequest &) = default ;
    CheckAppResourcePermissionsBatchShrinkRequest& operator=(CheckAppResourcePermissionsBatchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksShrink_ == nullptr
        && this->resourceTenantId_ == nullptr && this->targetUserId_ == nullptr && this->targetUserTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // checksShrink Field Functions 
    bool hasChecksShrink() const { return this->checksShrink_ != nullptr;};
    void deleteChecksShrink() { this->checksShrink_ = nullptr;};
    inline string getChecksShrink() const { DARABONBA_PTR_GET_DEFAULT(checksShrink_, "") };
    inline CheckAppResourcePermissionsBatchShrinkRequest& setChecksShrink(string checksShrink) { DARABONBA_PTR_SET_VALUE(checksShrink_, checksShrink) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline CheckAppResourcePermissionsBatchShrinkRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline CheckAppResourcePermissionsBatchShrinkRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // targetUserTenantId Field Functions 
    bool hasTargetUserTenantId() const { return this->targetUserTenantId_ != nullptr;};
    void deleteTargetUserTenantId() { this->targetUserTenantId_ = nullptr;};
    inline string getTargetUserTenantId() const { DARABONBA_PTR_GET_DEFAULT(targetUserTenantId_, "") };
    inline CheckAppResourcePermissionsBatchShrinkRequest& setTargetUserTenantId(string targetUserTenantId) { DARABONBA_PTR_SET_VALUE(targetUserTenantId_, targetUserTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CheckAppResourcePermissionsBatchShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The check items.
    // 
    // This parameter is required.
    shared_ptr<string> checksShrink_ {};
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
