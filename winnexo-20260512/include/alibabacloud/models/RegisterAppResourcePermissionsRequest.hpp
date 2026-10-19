// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSREQUEST_HPP_
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
  class RegisterAppResourcePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAppResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAppResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RegisterAppResourcePermissionsRequest() = default ;
    RegisterAppResourcePermissionsRequest(const RegisterAppResourcePermissionsRequest &) = default ;
    RegisterAppResourcePermissionsRequest(RegisterAppResourcePermissionsRequest &&) = default ;
    RegisterAppResourcePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAppResourcePermissionsRequest() = default ;
    RegisterAppResourcePermissionsRequest& operator=(const RegisterAppResourcePermissionsRequest &) = default ;
    RegisterAppResourcePermissionsRequest& operator=(RegisterAppResourcePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
        DARABONBA_PTR_TO_JSON(grantees, grantees_);
        DARABONBA_PTR_TO_JSON(permissions, permissions_);
        DARABONBA_PTR_TO_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
        DARABONBA_PTR_FROM_JSON(grantees, grantees_);
        DARABONBA_PTR_FROM_JSON(permissions, permissions_);
        DARABONBA_PTR_FROM_JSON(resourceKey, resourceKey_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
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
      class Grantees : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Grantees& obj) { 
          DARABONBA_PTR_TO_JSON(granteeId, granteeId_);
          DARABONBA_PTR_TO_JSON(granteeTenantId, granteeTenantId_);
          DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
        };
        friend void from_json(const Darabonba::Json& j, Grantees& obj) { 
          DARABONBA_PTR_FROM_JSON(granteeId, granteeId_);
          DARABONBA_PTR_FROM_JSON(granteeTenantId, granteeTenantId_);
          DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
        };
        Grantees() = default ;
        Grantees(const Grantees &) = default ;
        Grantees(Grantees &&) = default ;
        Grantees(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Grantees() = default ;
        Grantees& operator=(const Grantees &) = default ;
        Grantees& operator=(Grantees &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->granteeId_ == nullptr
        && this->granteeTenantId_ == nullptr && this->granteeType_ == nullptr; };
        // granteeId Field Functions 
        bool hasGranteeId() const { return this->granteeId_ != nullptr;};
        void deleteGranteeId() { this->granteeId_ = nullptr;};
        inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
        inline Grantees& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


        // granteeTenantId Field Functions 
        bool hasGranteeTenantId() const { return this->granteeTenantId_ != nullptr;};
        void deleteGranteeTenantId() { this->granteeTenantId_ = nullptr;};
        inline string getGranteeTenantId() const { DARABONBA_PTR_GET_DEFAULT(granteeTenantId_, "") };
        inline Grantees& setGranteeTenantId(string granteeTenantId) { DARABONBA_PTR_SET_VALUE(granteeTenantId_, granteeTenantId) };


        // granteeType Field Functions 
        bool hasGranteeType() const { return this->granteeType_ != nullptr;};
        void deleteGranteeType() { this->granteeType_ = nullptr;};
        inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
        inline Grantees& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


      protected:
        // 主体 ID；ALL_USERS 省略
        shared_ptr<string> granteeId_ {};
        // 跨租户 USER 所属租户
        shared_ptr<string> granteeTenantId_ {};
        // 主体类型
        // 
        // This parameter is required.
        shared_ptr<string> granteeType_ {};
      };

      virtual bool empty() const override { return this->expireAt_ == nullptr
        && this->grantees_ == nullptr && this->permissions_ == nullptr && this->resourceKey_ == nullptr && this->resourceType_ == nullptr; };
      // expireAt Field Functions 
      bool hasExpireAt() const { return this->expireAt_ != nullptr;};
      void deleteExpireAt() { this->expireAt_ = nullptr;};
      inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
      inline Items& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


      // grantees Field Functions 
      bool hasGrantees() const { return this->grantees_ != nullptr;};
      void deleteGrantees() { this->grantees_ = nullptr;};
      inline const vector<Items::Grantees> & getGrantees() const { DARABONBA_PTR_GET_CONST(grantees_, vector<Items::Grantees>) };
      inline vector<Items::Grantees> getGrantees() { DARABONBA_PTR_GET(grantees_, vector<Items::Grantees>) };
      inline Items& setGrantees(const vector<Items::Grantees> & grantees) { DARABONBA_PTR_SET_VALUE(grantees_, grantees) };
      inline Items& setGrantees(vector<Items::Grantees> && grantees) { DARABONBA_PTR_SET_RVALUE(grantees_, grantees) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
      inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
      inline Items& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Items& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


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


    protected:
      // 带时区的到期时间；省略表示永久
      shared_ptr<string> expireAt_ {};
      // 被授权主体
      // 
      // This parameter is required.
      shared_ptr<vector<Items::Grantees>> grantees_ {};
      // 授权权限点
      // 
      // This parameter is required.
      shared_ptr<vector<string>> permissions_ {};
      // 首段为 APP 应用键的点分资源键
      // 
      // This parameter is required.
      shared_ptr<string> resourceKey_ {};
      // 固定为 APP_RESOURCE
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->resourceTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<RegisterAppResourcePermissionsRequest::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<RegisterAppResourcePermissionsRequest::Items>) };
    inline vector<RegisterAppResourcePermissionsRequest::Items> getItems() { DARABONBA_PTR_GET(items_, vector<RegisterAppResourcePermissionsRequest::Items>) };
    inline RegisterAppResourcePermissionsRequest& setItems(const vector<RegisterAppResourcePermissionsRequest::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline RegisterAppResourcePermissionsRequest& setItems(vector<RegisterAppResourcePermissionsRequest::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline RegisterAppResourcePermissionsRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RegisterAppResourcePermissionsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 批量授权项
    // 
    // This parameter is required.
    shared_ptr<vector<RegisterAppResourcePermissionsRequest::Items>> items_ {};
    // 资源所属租户 ID；省略为调用人当前租户
    shared_ptr<string> resourceTenantId_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
