// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class DeleteMcubeMiniAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeMiniAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeMiniAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteMcubeMiniAppRequest() = default ;
    DeleteMcubeMiniAppRequest(const DeleteMcubeMiniAppRequest &) = default ;
    DeleteMcubeMiniAppRequest(DeleteMcubeMiniAppRequest &&) = default ;
    DeleteMcubeMiniAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeMiniAppRequest() = default ;
    DeleteMcubeMiniAppRequest& operator=(const DeleteMcubeMiniAppRequest &) = default ;
    DeleteMcubeMiniAppRequest& operator=(DeleteMcubeMiniAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->h5Id_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMcubeMiniAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline DeleteMcubeMiniAppRequest& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteMcubeMiniAppRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteMcubeMiniAppRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> h5Id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
