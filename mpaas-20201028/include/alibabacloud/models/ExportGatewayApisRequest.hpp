// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTGATEWAYAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTGATEWAYAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExportGatewayApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportGatewayApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportGatewayApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportGatewayApisRequest() = default ;
    ExportGatewayApisRequest(const ExportGatewayApisRequest &) = default ;
    ExportGatewayApisRequest(ExportGatewayApisRequest &&) = default ;
    ExportGatewayApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportGatewayApisRequest() = default ;
    ExportGatewayApisRequest& operator=(const ExportGatewayApisRequest &) = default ;
    ExportGatewayApisRequest& operator=(ExportGatewayApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && this->appId_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline const vector<int64_t> & getApiIds() const { DARABONBA_PTR_GET_CONST(apiIds_, vector<int64_t>) };
    inline vector<int64_t> getApiIds() { DARABONBA_PTR_GET(apiIds_, vector<int64_t>) };
    inline ExportGatewayApisRequest& setApiIds(const vector<int64_t> & apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };
    inline ExportGatewayApisRequest& setApiIds(vector<int64_t> && apiIds) { DARABONBA_PTR_SET_RVALUE(apiIds_, apiIds) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ExportGatewayApisRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ExportGatewayApisRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportGatewayApisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<int64_t>> apiIds_ {};
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
