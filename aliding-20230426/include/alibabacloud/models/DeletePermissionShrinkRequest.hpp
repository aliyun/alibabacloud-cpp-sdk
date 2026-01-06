// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeletePermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Members, membersShrink_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Members, membersShrink_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    DeletePermissionShrinkRequest() = default ;
    DeletePermissionShrinkRequest(const DeletePermissionShrinkRequest &) = default ;
    DeletePermissionShrinkRequest(DeletePermissionShrinkRequest &&) = default ;
    DeletePermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePermissionShrinkRequest() = default ;
    DeletePermissionShrinkRequest& operator=(const DeletePermissionShrinkRequest &) = default ;
    DeletePermissionShrinkRequest& operator=(DeletePermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && this->membersShrink_ == nullptr && this->roleId_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string getDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DeletePermissionShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // membersShrink Field Functions 
    bool hasMembersShrink() const { return this->membersShrink_ != nullptr;};
    void deleteMembersShrink() { this->membersShrink_ = nullptr;};
    inline string getMembersShrink() const { DARABONBA_PTR_GET_DEFAULT(membersShrink_, "") };
    inline DeletePermissionShrinkRequest& setMembersShrink(string membersShrink) { DARABONBA_PTR_SET_VALUE(membersShrink_, membersShrink) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DeletePermissionShrinkRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeletePermissionShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> dentryUuid_ {};
    // This parameter is required.
    shared_ptr<string> membersShrink_ {};
    // This parameter is required.
    shared_ptr<string> roleId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
