// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddPermissionRequestMembers.hpp>
#include <alibabacloud/models/AddPermissionRequestOption.hpp>
#include <alibabacloud/models/AddPermissionRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Members, members_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, AddPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Members, members_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    AddPermissionRequest() = default ;
    AddPermissionRequest(const AddPermissionRequest &) = default ;
    AddPermissionRequest(AddPermissionRequest &&) = default ;
    AddPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPermissionRequest() = default ;
    AddPermissionRequest& operator=(const AddPermissionRequest &) = default ;
    AddPermissionRequest& operator=(AddPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->members_ != nullptr && this->option_ != nullptr && this->roleId_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline AddPermissionRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<AddPermissionRequestMembers> & members() const { DARABONBA_PTR_GET_CONST(members_, vector<AddPermissionRequestMembers>) };
    inline vector<AddPermissionRequestMembers> members() { DARABONBA_PTR_GET(members_, vector<AddPermissionRequestMembers>) };
    inline AddPermissionRequest& setMembers(const vector<AddPermissionRequestMembers> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline AddPermissionRequest& setMembers(vector<AddPermissionRequestMembers> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const AddPermissionRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, AddPermissionRequestOption) };
    inline AddPermissionRequestOption option() { DARABONBA_PTR_GET(option_, AddPermissionRequestOption) };
    inline AddPermissionRequest& setOption(const AddPermissionRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline AddPermissionRequest& setOption(AddPermissionRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline AddPermissionRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddPermissionRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddPermissionRequestTenantContext) };
    inline AddPermissionRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddPermissionRequestTenantContext) };
    inline AddPermissionRequest& setTenantContext(const AddPermissionRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddPermissionRequest& setTenantContext(AddPermissionRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> dentryUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AddPermissionRequestMembers>> members_ = nullptr;
    std::shared_ptr<AddPermissionRequestOption> option_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<AddPermissionRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
