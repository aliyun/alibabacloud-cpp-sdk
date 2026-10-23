// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRESOURCEPERMISSIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRESOURCEPERMISSIONRECORDSREQUEST_HPP_
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
  class ListAppResourcePermissionRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppResourcePermissionRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(granteeId, granteeId_);
      DARABONBA_PTR_TO_JSON(granteeTenantId, granteeTenantId_);
      DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(permissions, permissions_);
      DARABONBA_PTR_TO_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppResourcePermissionRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(granteeId, granteeId_);
      DARABONBA_PTR_FROM_JSON(granteeTenantId, granteeTenantId_);
      DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(resourceKeyPrefix, resourceKeyPrefix_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAppResourcePermissionRecordsRequest() = default ;
    ListAppResourcePermissionRecordsRequest(const ListAppResourcePermissionRecordsRequest &) = default ;
    ListAppResourcePermissionRecordsRequest(ListAppResourcePermissionRecordsRequest &&) = default ;
    ListAppResourcePermissionRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppResourcePermissionRecordsRequest() = default ;
    ListAppResourcePermissionRecordsRequest& operator=(const ListAppResourcePermissionRecordsRequest &) = default ;
    ListAppResourcePermissionRecordsRequest& operator=(ListAppResourcePermissionRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->granteeId_ == nullptr
        && this->granteeTenantId_ == nullptr && this->granteeType_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->permissions_ == nullptr
        && this->resourceKeyPrefix_ == nullptr && this->resourceTenantId_ == nullptr && this->resourceType_ == nullptr && this->tenantId_ == nullptr; };
    // granteeId Field Functions 
    bool hasGranteeId() const { return this->granteeId_ != nullptr;};
    void deleteGranteeId() { this->granteeId_ = nullptr;};
    inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
    inline ListAppResourcePermissionRecordsRequest& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


    // granteeTenantId Field Functions 
    bool hasGranteeTenantId() const { return this->granteeTenantId_ != nullptr;};
    void deleteGranteeTenantId() { this->granteeTenantId_ = nullptr;};
    inline string getGranteeTenantId() const { DARABONBA_PTR_GET_DEFAULT(granteeTenantId_, "") };
    inline ListAppResourcePermissionRecordsRequest& setGranteeTenantId(string granteeTenantId) { DARABONBA_PTR_SET_VALUE(granteeTenantId_, granteeTenantId) };


    // granteeType Field Functions 
    bool hasGranteeType() const { return this->granteeType_ != nullptr;};
    void deleteGranteeType() { this->granteeType_ = nullptr;};
    inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
    inline ListAppResourcePermissionRecordsRequest& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAppResourcePermissionRecordsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAppResourcePermissionRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
    inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
    inline ListAppResourcePermissionRecordsRequest& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline ListAppResourcePermissionRecordsRequest& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // resourceKeyPrefix Field Functions 
    bool hasResourceKeyPrefix() const { return this->resourceKeyPrefix_ != nullptr;};
    void deleteResourceKeyPrefix() { this->resourceKeyPrefix_ = nullptr;};
    inline string getResourceKeyPrefix() const { DARABONBA_PTR_GET_DEFAULT(resourceKeyPrefix_, "") };
    inline ListAppResourcePermissionRecordsRequest& setResourceKeyPrefix(string resourceKeyPrefix) { DARABONBA_PTR_SET_VALUE(resourceKeyPrefix_, resourceKeyPrefix) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline ListAppResourcePermissionRecordsRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAppResourcePermissionRecordsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAppResourcePermissionRecordsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The grantee ID filter.
    shared_ptr<string> granteeId_ {};
    // The tenant ID filter for cross-tenant users.
    shared_ptr<string> granteeTenantId_ {};
    // The grantee type filter.
    shared_ptr<string> granteeType_ {};
    // The page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The permission filter.
    shared_ptr<vector<string>> permissions_ {};
    // The application key or its subpath.
    // 
    // This parameter is required.
    shared_ptr<string> resourceKeyPrefix_ {};
    // The ID of the tenant to which the resource belongs. If not specified, the current tenant of the caller is used.
    shared_ptr<string> resourceTenantId_ {};
    // The resource type. Set this parameter to APP_RESOURCE.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
