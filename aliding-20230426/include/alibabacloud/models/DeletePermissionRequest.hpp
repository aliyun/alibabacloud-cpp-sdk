// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeletePermissionRequestMembers.hpp>
#include <alibabacloud/models/DeletePermissionRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeletePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    DeletePermissionRequest() = default ;
    DeletePermissionRequest(const DeletePermissionRequest &) = default ;
    DeletePermissionRequest(DeletePermissionRequest &&) = default ;
    DeletePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePermissionRequest() = default ;
    DeletePermissionRequest& operator=(const DeletePermissionRequest &) = default ;
    DeletePermissionRequest& operator=(DeletePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && return this->members_ == nullptr && return this->roleId_ == nullptr && return this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline DeletePermissionRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<DeletePermissionRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<DeletePermissionRequestMembers>) };
    inline vector<DeletePermissionRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<DeletePermissionRequestMembers>) };
    inline DeletePermissionRequest& setMembers(const vector<DeletePermissionRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline DeletePermissionRequest& setMembers(vector<DeletePermissionRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DeletePermissionRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeletePermissionRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeletePermissionRequestTenantContext) };
    inline DeletePermissionRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeletePermissionRequestTenantContext) };
    inline DeletePermissionRequest& setTenantContext(const DeletePermissionRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeletePermissionRequest& setTenantContext(DeletePermissionRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DeletePermissionRequestMembers>> members_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<DeletePermissionRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
