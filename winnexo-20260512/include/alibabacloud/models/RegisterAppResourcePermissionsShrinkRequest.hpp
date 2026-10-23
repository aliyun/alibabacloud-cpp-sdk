// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAPPRESOURCEPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RegisterAppResourcePermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAppResourcePermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(items, itemsShrink_);
      DARABONBA_PTR_TO_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAppResourcePermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(items, itemsShrink_);
      DARABONBA_PTR_FROM_JSON(resourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RegisterAppResourcePermissionsShrinkRequest() = default ;
    RegisterAppResourcePermissionsShrinkRequest(const RegisterAppResourcePermissionsShrinkRequest &) = default ;
    RegisterAppResourcePermissionsShrinkRequest(RegisterAppResourcePermissionsShrinkRequest &&) = default ;
    RegisterAppResourcePermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAppResourcePermissionsShrinkRequest() = default ;
    RegisterAppResourcePermissionsShrinkRequest& operator=(const RegisterAppResourcePermissionsShrinkRequest &) = default ;
    RegisterAppResourcePermissionsShrinkRequest& operator=(RegisterAppResourcePermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemsShrink_ == nullptr
        && this->resourceTenantId_ == nullptr && this->tenantId_ == nullptr; };
    // itemsShrink Field Functions 
    bool hasItemsShrink() const { return this->itemsShrink_ != nullptr;};
    void deleteItemsShrink() { this->itemsShrink_ = nullptr;};
    inline string getItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(itemsShrink_, "") };
    inline RegisterAppResourcePermissionsShrinkRequest& setItemsShrink(string itemsShrink) { DARABONBA_PTR_SET_VALUE(itemsShrink_, itemsShrink) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline RegisterAppResourcePermissionsShrinkRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RegisterAppResourcePermissionsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The batch authorization items.
    // 
    // This parameter is required.
    shared_ptr<string> itemsShrink_ {};
    // The ID of the tenant to which the resource belongs. If not specified, the current tenant of the caller is used.
    shared_ptr<string> resourceTenantId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
