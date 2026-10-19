// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPRESOURCEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPRESOURCEPERMISSIONSREQUEST_HPP_
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
  class DeleteAppResourcePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    DeleteAppResourcePermissionsRequest() = default ;
    DeleteAppResourcePermissionsRequest(const DeleteAppResourcePermissionsRequest &) = default ;
    DeleteAppResourcePermissionsRequest(DeleteAppResourcePermissionsRequest &&) = default ;
    DeleteAppResourcePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppResourcePermissionsRequest() = default ;
    DeleteAppResourcePermissionsRequest& operator=(const DeleteAppResourcePermissionsRequest &) = default ;
    DeleteAppResourcePermissionsRequest& operator=(DeleteAppResourcePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(granteeIds, granteeIds_);
        DARABONBA_PTR_TO_JSON(granteeTenantId, granteeTenantId_);
        DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
        DARABONBA_PTR_TO_JSON(includeDescendants, includeDescendants_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(granteeIds, granteeIds_);
        DARABONBA_PTR_FROM_JSON(granteeTenantId, granteeTenantId_);
        DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
        DARABONBA_PTR_FROM_JSON(includeDescendants, includeDescendants_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->granteeIds_ == nullptr
        && this->granteeTenantId_ == nullptr && this->granteeType_ == nullptr && this->includeDescendants_ == nullptr && this->resourceKey_ == nullptr && this->resourceType_ == nullptr
        && this->scope_ == nullptr; };
      // granteeIds Field Functions 
      bool hasGranteeIds() const { return this->granteeIds_ != nullptr;};
      void deleteGranteeIds() { this->granteeIds_ = nullptr;};
      inline const vector<string> & getGranteeIds() const { DARABONBA_PTR_GET_CONST(granteeIds_, vector<string>) };
      inline vector<string> getGranteeIds() { DARABONBA_PTR_GET(granteeIds_, vector<string>) };
      inline Items& setGranteeIds(const vector<string> & granteeIds) { DARABONBA_PTR_SET_VALUE(granteeIds_, granteeIds) };
      inline Items& setGranteeIds(vector<string> && granteeIds) { DARABONBA_PTR_SET_RVALUE(granteeIds_, granteeIds) };


      // granteeTenantId Field Functions 
      bool hasGranteeTenantId() const { return this->granteeTenantId_ != nullptr;};
      void deleteGranteeTenantId() { this->granteeTenantId_ = nullptr;};
      inline string getGranteeTenantId() const { DARABONBA_PTR_GET_DEFAULT(granteeTenantId_, "") };
      inline Items& setGranteeTenantId(string granteeTenantId) { DARABONBA_PTR_SET_VALUE(granteeTenantId_, granteeTenantId) };


      // granteeType Field Functions 
      bool hasGranteeType() const { return this->granteeType_ != nullptr;};
      void deleteGranteeType() { this->granteeType_ = nullptr;};
      inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
      inline Items& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


      // includeDescendants Field Functions 
      bool hasIncludeDescendants() const { return this->includeDescendants_ != nullptr;};
      void deleteIncludeDescendants() { this->includeDescendants_ = nullptr;};
      inline bool getIncludeDescendants() const { DARABONBA_PTR_GET_DEFAULT(includeDescendants_, false) };
      inline Items& setIncludeDescendants(bool includeDescendants) { DARABONBA_PTR_SET_VALUE(includeDescendants_, includeDescendants) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline Items& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Items& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // GRANTEE 主体 ID 列表
      shared_ptr<vector<string>> granteeIds_ {};
      // GRANTEE USER 所属租户；同资源租户可省略，跨租户 USER 必填
      shared_ptr<string> granteeTenantId_ {};
      // GRANTEE 主体类型
      shared_ptr<string> granteeType_ {};
      // RESOURCE 是否包含点分后代资源；省略为 false
      shared_ptr<bool> includeDescendants_ {};
      // 首段为 APP 应用键的点分资源键
      // 
      // This parameter is required.
      shared_ptr<string> resourceKey_ {};
      // 固定为 APP_RESOURCE
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // 删除范围：按资源或按主体
      // 
      // This parameter is required.
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->resourceTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DeleteAppResourcePermissionsRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DeleteAppResourcePermissionsRequest::Items>) };
    inline vector<DeleteAppResourcePermissionsRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DeleteAppResourcePermissionsRequest::Items>) };
    inline DeleteAppResourcePermissionsRequest& setItems(const vector<DeleteAppResourcePermissionsRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DeleteAppResourcePermissionsRequest& setItems(vector<DeleteAppResourcePermissionsRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline DeleteAppResourcePermissionsRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteAppResourcePermissionsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 撤权范围
    // 
    // This parameter is required.
    shared_ptr<vector<DeleteAppResourcePermissionsRequest::Items>> items_ {};
    // 资源所属租户 ID；省略为调用人当前租户
    shared_ptr<string> resourceTenantId_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
