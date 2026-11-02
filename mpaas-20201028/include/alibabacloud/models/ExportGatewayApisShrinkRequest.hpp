// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTGATEWAYAPISSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTGATEWAYAPISSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ExportGatewayApisShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportGatewayApisShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIdsShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportGatewayApisShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExportGatewayApisShrinkRequest() = default ;
    ExportGatewayApisShrinkRequest(const ExportGatewayApisShrinkRequest &) = default ;
    ExportGatewayApisShrinkRequest(ExportGatewayApisShrinkRequest &&) = default ;
    ExportGatewayApisShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportGatewayApisShrinkRequest() = default ;
    ExportGatewayApisShrinkRequest& operator=(const ExportGatewayApisShrinkRequest &) = default ;
    ExportGatewayApisShrinkRequest& operator=(ExportGatewayApisShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIdsShrink_ == nullptr
        && this->appId_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // apiIdsShrink Field Functions 
    bool hasApiIdsShrink() const { return this->apiIdsShrink_ != nullptr;};
    void deleteApiIdsShrink() { this->apiIdsShrink_ = nullptr;};
    inline string getApiIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiIdsShrink_, "") };
    inline ExportGatewayApisShrinkRequest& setApiIdsShrink(string apiIdsShrink) { DARABONBA_PTR_SET_VALUE(apiIdsShrink_, apiIdsShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ExportGatewayApisShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ExportGatewayApisShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExportGatewayApisShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> apiIdsShrink_ {};
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
