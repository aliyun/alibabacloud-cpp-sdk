// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGRAFANAWORKSPACEACCOUNTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGRAFANAWORKSPACEACCOUNTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteGrafanaWorkspaceAccountRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGrafanaWorkspaceAccountRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGrafanaWorkspaceAccountRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteGrafanaWorkspaceAccountRoleRequest() = default ;
    DeleteGrafanaWorkspaceAccountRoleRequest(const DeleteGrafanaWorkspaceAccountRoleRequest &) = default ;
    DeleteGrafanaWorkspaceAccountRoleRequest(DeleteGrafanaWorkspaceAccountRoleRequest &&) = default ;
    DeleteGrafanaWorkspaceAccountRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGrafanaWorkspaceAccountRoleRequest() = default ;
    DeleteGrafanaWorkspaceAccountRoleRequest& operator=(const DeleteGrafanaWorkspaceAccountRoleRequest &) = default ;
    DeleteGrafanaWorkspaceAccountRoleRequest& operator=(DeleteGrafanaWorkspaceAccountRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->grafanaWorkspaceId_ == nullptr && this->orgId_ == nullptr && this->regionId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline DeleteGrafanaWorkspaceAccountRoleRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline DeleteGrafanaWorkspaceAccountRoleRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline DeleteGrafanaWorkspaceAccountRoleRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteGrafanaWorkspaceAccountRoleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountId_ {};
    // This parameter is required.
    shared_ptr<string> grafanaWorkspaceId_ {};
    // This parameter is required.
    shared_ptr<int64_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
