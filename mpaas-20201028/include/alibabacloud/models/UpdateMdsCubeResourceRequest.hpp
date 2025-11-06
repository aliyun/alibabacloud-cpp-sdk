// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMDSCUBERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMDSCUBERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateMdsCubeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMdsCubeResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MockDataUrl, mockDataUrl_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(TemplateResourceId, templateResourceId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMdsCubeResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MockDataUrl, mockDataUrl_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceId, templateResourceId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMdsCubeResourceRequest() = default ;
    UpdateMdsCubeResourceRequest(const UpdateMdsCubeResourceRequest &) = default ;
    UpdateMdsCubeResourceRequest(UpdateMdsCubeResourceRequest &&) = default ;
    UpdateMdsCubeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMdsCubeResourceRequest() = default ;
    UpdateMdsCubeResourceRequest& operator=(const UpdateMdsCubeResourceRequest &) = default ;
    UpdateMdsCubeResourceRequest& operator=(UpdateMdsCubeResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->mockDataUrl_ == nullptr && return this->onexFlag_ == nullptr && return this->templateResourceId_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMdsCubeResourceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mockDataUrl Field Functions 
    bool hasMockDataUrl() const { return this->mockDataUrl_ != nullptr;};
    void deleteMockDataUrl() { this->mockDataUrl_ = nullptr;};
    inline string mockDataUrl() const { DARABONBA_PTR_GET_DEFAULT(mockDataUrl_, "") };
    inline UpdateMdsCubeResourceRequest& setMockDataUrl(string mockDataUrl) { DARABONBA_PTR_SET_VALUE(mockDataUrl_, mockDataUrl) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool onexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline UpdateMdsCubeResourceRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // templateResourceId Field Functions 
    bool hasTemplateResourceId() const { return this->templateResourceId_ != nullptr;};
    void deleteTemplateResourceId() { this->templateResourceId_ = nullptr;};
    inline int64_t templateResourceId() const { DARABONBA_PTR_GET_DEFAULT(templateResourceId_, 0L) };
    inline UpdateMdsCubeResourceRequest& setTemplateResourceId(int64_t templateResourceId) { DARABONBA_PTR_SET_VALUE(templateResourceId_, templateResourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateMdsCubeResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMdsCubeResourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mockDataUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> onexFlag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> templateResourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
