// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMDSCUBERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMDSCUBERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMdsCubeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMdsCubeResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidMaxVersion, androidMaxVersion_);
      DARABONBA_PTR_TO_JSON(AndroidMinVersion, androidMinVersion_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(IosMaxVersion, iosMaxVersion_);
      DARABONBA_PTR_TO_JSON(IosMinVersion, iosMinVersion_);
      DARABONBA_PTR_TO_JSON(MockDataUrl, mockDataUrl_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PreviewPictureUrl, previewPictureUrl_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateResourceDesc, templateResourceDesc_);
      DARABONBA_PTR_TO_JSON(TemplateResourceVersion, templateResourceVersion_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMdsCubeResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidMaxVersion, androidMaxVersion_);
      DARABONBA_PTR_FROM_JSON(AndroidMinVersion, androidMinVersion_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(IosMaxVersion, iosMaxVersion_);
      DARABONBA_PTR_FROM_JSON(IosMinVersion, iosMinVersion_);
      DARABONBA_PTR_FROM_JSON(MockDataUrl, mockDataUrl_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PreviewPictureUrl, previewPictureUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceDesc, templateResourceDesc_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceVersion, templateResourceVersion_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMdsCubeResourceRequest() = default ;
    CreateMdsCubeResourceRequest(const CreateMdsCubeResourceRequest &) = default ;
    CreateMdsCubeResourceRequest(CreateMdsCubeResourceRequest &&) = default ;
    CreateMdsCubeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMdsCubeResourceRequest() = default ;
    CreateMdsCubeResourceRequest& operator=(const CreateMdsCubeResourceRequest &) = default ;
    CreateMdsCubeResourceRequest& operator=(CreateMdsCubeResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidMaxVersion_ == nullptr
        && return this->androidMinVersion_ == nullptr && return this->appId_ == nullptr && return this->extendInfo_ == nullptr && return this->fileUrl_ == nullptr && return this->iosMaxVersion_ == nullptr
        && return this->iosMinVersion_ == nullptr && return this->mockDataUrl_ == nullptr && return this->onexFlag_ == nullptr && return this->platform_ == nullptr && return this->previewPictureUrl_ == nullptr
        && return this->templateId_ == nullptr && return this->templateResourceDesc_ == nullptr && return this->templateResourceVersion_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // androidMaxVersion Field Functions 
    bool hasAndroidMaxVersion() const { return this->androidMaxVersion_ != nullptr;};
    void deleteAndroidMaxVersion() { this->androidMaxVersion_ = nullptr;};
    inline string androidMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMaxVersion_, "") };
    inline CreateMdsCubeResourceRequest& setAndroidMaxVersion(string androidMaxVersion) { DARABONBA_PTR_SET_VALUE(androidMaxVersion_, androidMaxVersion) };


    // androidMinVersion Field Functions 
    bool hasAndroidMinVersion() const { return this->androidMinVersion_ != nullptr;};
    void deleteAndroidMinVersion() { this->androidMinVersion_ = nullptr;};
    inline string androidMinVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMinVersion_, "") };
    inline CreateMdsCubeResourceRequest& setAndroidMinVersion(string androidMinVersion) { DARABONBA_PTR_SET_VALUE(androidMinVersion_, androidMinVersion) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMdsCubeResourceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateMdsCubeResourceRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateMdsCubeResourceRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // iosMaxVersion Field Functions 
    bool hasIosMaxVersion() const { return this->iosMaxVersion_ != nullptr;};
    void deleteIosMaxVersion() { this->iosMaxVersion_ = nullptr;};
    inline string iosMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMaxVersion_, "") };
    inline CreateMdsCubeResourceRequest& setIosMaxVersion(string iosMaxVersion) { DARABONBA_PTR_SET_VALUE(iosMaxVersion_, iosMaxVersion) };


    // iosMinVersion Field Functions 
    bool hasIosMinVersion() const { return this->iosMinVersion_ != nullptr;};
    void deleteIosMinVersion() { this->iosMinVersion_ = nullptr;};
    inline string iosMinVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMinVersion_, "") };
    inline CreateMdsCubeResourceRequest& setIosMinVersion(string iosMinVersion) { DARABONBA_PTR_SET_VALUE(iosMinVersion_, iosMinVersion) };


    // mockDataUrl Field Functions 
    bool hasMockDataUrl() const { return this->mockDataUrl_ != nullptr;};
    void deleteMockDataUrl() { this->mockDataUrl_ = nullptr;};
    inline string mockDataUrl() const { DARABONBA_PTR_GET_DEFAULT(mockDataUrl_, "") };
    inline CreateMdsCubeResourceRequest& setMockDataUrl(string mockDataUrl) { DARABONBA_PTR_SET_VALUE(mockDataUrl_, mockDataUrl) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool onexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline CreateMdsCubeResourceRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateMdsCubeResourceRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // previewPictureUrl Field Functions 
    bool hasPreviewPictureUrl() const { return this->previewPictureUrl_ != nullptr;};
    void deletePreviewPictureUrl() { this->previewPictureUrl_ = nullptr;};
    inline string previewPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(previewPictureUrl_, "") };
    inline CreateMdsCubeResourceRequest& setPreviewPictureUrl(string previewPictureUrl) { DARABONBA_PTR_SET_VALUE(previewPictureUrl_, previewPictureUrl) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateMdsCubeResourceRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateResourceDesc Field Functions 
    bool hasTemplateResourceDesc() const { return this->templateResourceDesc_ != nullptr;};
    void deleteTemplateResourceDesc() { this->templateResourceDesc_ = nullptr;};
    inline string templateResourceDesc() const { DARABONBA_PTR_GET_DEFAULT(templateResourceDesc_, "") };
    inline CreateMdsCubeResourceRequest& setTemplateResourceDesc(string templateResourceDesc) { DARABONBA_PTR_SET_VALUE(templateResourceDesc_, templateResourceDesc) };


    // templateResourceVersion Field Functions 
    bool hasTemplateResourceVersion() const { return this->templateResourceVersion_ != nullptr;};
    void deleteTemplateResourceVersion() { this->templateResourceVersion_ = nullptr;};
    inline string templateResourceVersion() const { DARABONBA_PTR_GET_DEFAULT(templateResourceVersion_, "") };
    inline CreateMdsCubeResourceRequest& setTemplateResourceVersion(string templateResourceVersion) { DARABONBA_PTR_SET_VALUE(templateResourceVersion_, templateResourceVersion) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMdsCubeResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMdsCubeResourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> androidMaxVersion_ = nullptr;
    std::shared_ptr<string> androidMinVersion_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> iosMaxVersion_ = nullptr;
    std::shared_ptr<string> iosMinVersion_ = nullptr;
    std::shared_ptr<string> mockDataUrl_ = nullptr;
    std::shared_ptr<bool> onexFlag_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> previewPictureUrl_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateResourceDesc_ = nullptr;
    std::shared_ptr<string> templateResourceVersion_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
