// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEACCOUNTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGRAFANAWORKSPACEACCOUNTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateGrafanaWorkspaceAccountRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGrafanaWorkspaceAccountRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGrafanaWorkspaceAccountRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    UpdateGrafanaWorkspaceAccountRoleRequest() = default ;
    UpdateGrafanaWorkspaceAccountRoleRequest(const UpdateGrafanaWorkspaceAccountRoleRequest &) = default ;
    UpdateGrafanaWorkspaceAccountRoleRequest(UpdateGrafanaWorkspaceAccountRoleRequest &&) = default ;
    UpdateGrafanaWorkspaceAccountRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGrafanaWorkspaceAccountRoleRequest() = default ;
    UpdateGrafanaWorkspaceAccountRoleRequest& operator=(const UpdateGrafanaWorkspaceAccountRoleRequest &) = default ;
    UpdateGrafanaWorkspaceAccountRoleRequest& operator=(UpdateGrafanaWorkspaceAccountRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->grafanaWorkspaceId_ == nullptr && this->orgId_ == nullptr && this->regionId_ == nullptr && this->role_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline UpdateGrafanaWorkspaceAccountRoleRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline UpdateGrafanaWorkspaceAccountRoleRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline UpdateGrafanaWorkspaceAccountRoleRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateGrafanaWorkspaceAccountRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline UpdateGrafanaWorkspaceAccountRoleRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountId_ {};
    // This parameter is required.
    shared_ptr<string> grafanaWorkspaceId_ {};
    // This parameter is required.
    shared_ptr<int64_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
