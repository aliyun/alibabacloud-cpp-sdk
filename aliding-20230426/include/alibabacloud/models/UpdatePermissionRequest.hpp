// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePermissionRequestMembers.hpp>
#include <alibabacloud/models/UpdatePermissionRequestOption.hpp>
#include <alibabacloud/models/UpdatePermissionRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdatePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdatePermissionRequest() = default ;
    UpdatePermissionRequest(const UpdatePermissionRequest &) = default ;
    UpdatePermissionRequest(UpdatePermissionRequest &&) = default ;
    UpdatePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePermissionRequest() = default ;
    UpdatePermissionRequest& operator=(const UpdatePermissionRequest &) = default ;
    UpdatePermissionRequest& operator=(UpdatePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && return this->members_ == nullptr && return this->option_ == nullptr && return this->roleId_ == nullptr && return this->tenantContext_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline UpdatePermissionRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<UpdatePermissionRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<UpdatePermissionRequestMembers>) };
    inline vector<UpdatePermissionRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<UpdatePermissionRequestMembers>) };
    inline UpdatePermissionRequest& setMembers(const vector<UpdatePermissionRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline UpdatePermissionRequest& setMembers(vector<UpdatePermissionRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const UpdatePermissionRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, UpdatePermissionRequestOption) };
    inline UpdatePermissionRequestOption option() { DARABONBA_PTR_GET(option_, UpdatePermissionRequestOption) };
    inline UpdatePermissionRequest& setOption(const UpdatePermissionRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline UpdatePermissionRequest& setOption(UpdatePermissionRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline UpdatePermissionRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdatePermissionRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdatePermissionRequestTenantContext) };
    inline UpdatePermissionRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdatePermissionRequestTenantContext) };
    inline UpdatePermissionRequest& setTenantContext(const UpdatePermissionRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdatePermissionRequest& setTenantContext(UpdatePermissionRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> dentryUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdatePermissionRequestMembers>> members_ = nullptr;
    std::shared_ptr<UpdatePermissionRequestOption> option_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<UpdatePermissionRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
