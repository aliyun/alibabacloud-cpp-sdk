// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRESOURCEPERMISSIONRECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRESOURCEPERMISSIONRECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAppResourcePermissionRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppResourcePermissionRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(granteeId, granteeId_);
      DARABONBA_PTR_TO_JSON(granteeTenantId, granteeTenantId_);
      DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppResourcePermissionRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(granteeId, granteeId_);
      DARABONBA_PTR_FROM_JSON(granteeTenantId, granteeTenantId_);
      DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAppResourcePermissionRecordsShrinkRequest() = default ;
    ListAppResourcePermissionRecordsShrinkRequest(const ListAppResourcePermissionRecordsShrinkRequest &) = default ;
    ListAppResourcePermissionRecordsShrinkRequest(ListAppResourcePermissionRecordsShrinkRequest &&) = default ;
    ListAppResourcePermissionRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppResourcePermissionRecordsShrinkRequest() = default ;
    ListAppResourcePermissionRecordsShrinkRequest& operator=(const ListAppResourcePermissionRecordsShrinkRequest &) = default ;
    ListAppResourcePermissionRecordsShrinkRequest& operator=(ListAppResourcePermissionRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->granteeId_ == nullptr && this->granteeTenantId_ == nullptr && this->granteeType_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->permissionsShrink_ == nullptr && this->resourceKeyPrefix_ == nullptr && this->resourceTenantId_ == nullptr
        && this->resourceType_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // granteeId Field Functions 
    bool hasGranteeId() const { return this->granteeId_ != nullptr;};
    void deleteGranteeId() { this->granteeId_ = nullptr;};
    inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


    // granteeTenantId Field Functions 
    bool hasGranteeTenantId() const { return this->granteeTenantId_ != nullptr;};
    void deleteGranteeTenantId() { this->granteeTenantId_ = nullptr;};
    inline string getGranteeTenantId() const { DARABONBA_PTR_GET_DEFAULT(granteeTenantId_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setGranteeTenantId(string granteeTenantId) { DARABONBA_PTR_SET_VALUE(granteeTenantId_, granteeTenantId) };


    // granteeType Field Functions 
    bool hasGranteeType() const { return this->granteeType_ != nullptr;};
    void deleteGranteeType() { this->granteeType_ = nullptr;};
    inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAppResourcePermissionRecordsShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAppResourcePermissionRecordsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // permissionsShrink Field Functions 
    bool hasPermissionsShrink() const { return this->permissionsShrink_ != nullptr;};
    void deletePermissionsShrink() { this->permissionsShrink_ = nullptr;};
    inline string getPermissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionsShrink_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // resourceKeyPrefix Field Functions 
    bool hasResourceKeyPrefix() const { return this->resourceKeyPrefix_ != nullptr;};
    void deleteResourceKeyPrefix() { this->resourceKeyPrefix_ = nullptr;};
    inline string getResourceKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(resourceKeyPrefix_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setResourceKeyPrefix(string resourceKeyPrefix) { DARABONBA_PTR_SET_VALUE(resourceKeyPrefix_, resourceKeyPrefix) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAppResourcePermissionRecordsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 平台应用 Token（控制台签发）。传入后将以 opsUserId 或 opsUserCode 指定的用户身份执行
    shared_ptr<string> appToken_ {};
    // The tenant filter for cross-tenant users.
    shared_ptr<string> granteeId_ {};
    // The permission filter.
    shared_ptr<string> granteeTenantId_ {};
    // The principal ID filter.
    shared_ptr<string> granteeType_ {};
    // 代理用户编码（租户内唯一），仅当应用凭证配置为 source_uid 时使用
    shared_ptr<string> opsUserCode_ {};
    // 代理用户ID（WINNEXO 平台用户ID），仅当应用凭证配置为 winnexo_uid 时使用
    shared_ptr<string> opsUserId_ {};
    // The number of items per page.
    shared_ptr<int64_t> page_ {};
    // The principal type filter.
    shared_ptr<int64_t> pageSize_ {};
    // The permission filter.
    shared_ptr<string> permissionsShrink_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<string> resourceKeyPrefix_ {};
    // The resource tenant ID. This parameter is fixed to APP_RESOURCE.
    shared_ptr<string> resourceTenantId_ {};
    // The application key or its subpath.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The ID of the tenant to which the resource belongs. If omitted, the current tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
