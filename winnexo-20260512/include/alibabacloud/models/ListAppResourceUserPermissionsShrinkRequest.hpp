// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRESOURCEUSERPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRESOURCEUSERPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAppResourceUserPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppResourceUserPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppResourceUserPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(targetUserTenantId, targetUserTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAppResourceUserPermissionsShrinkRequest() = default ;
    ListAppResourceUserPermissionsShrinkRequest(const ListAppResourceUserPermissionsShrinkRequest &) = default ;
    ListAppResourceUserPermissionsShrinkRequest(ListAppResourceUserPermissionsShrinkRequest &&) = default ;
    ListAppResourceUserPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppResourceUserPermissionsShrinkRequest() = default ;
    ListAppResourceUserPermissionsShrinkRequest& operator=(const ListAppResourceUserPermissionsShrinkRequest &) = default ;
    ListAppResourceUserPermissionsShrinkRequest& operator=(ListAppResourceUserPermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->permissionsShrink_ == nullptr && this->resourceKeyPrefix_ == nullptr && this->resourceTenantId_ == nullptr && this->resourceType_ == nullptr
        && this->targetUserId_ == nullptr && this->targetUserTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAppResourceUserPermissionsShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAppResourceUserPermissionsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // permissionsShrink Field Functions 
    bool hasPermissionsShrink() const { return this->permissionsShrink_ != nullptr;};
    void deletePermissionsShrink() { this->permissionsShrink_ = nullptr;};
    inline string getPermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionsShrink_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // resourceKeyPrefix Field Functions 
    bool hasResourceKeyPrefix() const { return this->resourceKeyPrefix_ != nullptr;};
    void deleteResourceKeyPrefix() { this->resourceKeyPrefix_ = nullptr;};
    inline string getResourceKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(resourceKeyPrefix_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setResourceKeyPrefix(string resourceKeyPrefix) { DARABONBA_PTR_SET_VALUE(resourceKeyPrefix_, resourceKeyPrefix) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline ListAppResourceUserPermissionsShrinkRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // targetUserTenantId Field Functions 
    bool hasTargetUserTenantId() const { return this->targetUserTenantId_ != nullptr;};
    void deleteTargetUserTenantId() { this->targetUserTenantId_ = nullptr;};
    inline string getTargetUserTenantId() const { DARABONBA_PTR_GET_DEFAULT(targetUserTenantId_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setTargetUserTenantId(string targetUserTenantId) { DARABONBA_PTR_SET_VALUE(targetUserTenantId_, targetUserTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAppResourceUserPermissionsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The permission points to filter.
    shared_ptr<string> permissionsShrink_ {};
    // The application key or its subpath.
    // 
    // This parameter is required.
    shared_ptr<string> resourceKeyPrefix_ {};
    // The ID of the tenant to which the resource belongs. If you do not specify this parameter, the current tenant of the caller is used.
    shared_ptr<string> resourceTenantId_ {};
    // The resource type. Set the value to APP_RESOURCE.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The ID of the target platform user.
    shared_ptr<int64_t> targetUserId_ {};
    // The tenant to which the target user belongs. This parameter is required for cross-tenant targets.
    shared_ptr<string> targetUserTenantId_ {};
    // The tenant ID. This is a common parameter. If you do not specify this parameter, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
