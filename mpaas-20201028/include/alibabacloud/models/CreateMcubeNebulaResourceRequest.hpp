// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULARESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULARESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_TO_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_TO_JSON(CustomDomainName, customDomainName_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(H5Version, h5Version_);
      DARABONBA_PTR_TO_JSON(InstallType, installType_);
      DARABONBA_PTR_TO_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RepeatNebula, repeatNebula_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SubUrl, subUrl_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_FROM_JSON(CustomDomainName, customDomainName_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(H5Version, h5Version_);
      DARABONBA_PTR_FROM_JSON(InstallType, installType_);
      DARABONBA_PTR_FROM_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RepeatNebula, repeatNebula_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SubUrl, subUrl_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMcubeNebulaResourceRequest() = default ;
    CreateMcubeNebulaResourceRequest(const CreateMcubeNebulaResourceRequest &) = default ;
    CreateMcubeNebulaResourceRequest(CreateMcubeNebulaResourceRequest &&) = default ;
    CreateMcubeNebulaResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaResourceRequest() = default ;
    CreateMcubeNebulaResourceRequest& operator=(const CreateMcubeNebulaResourceRequest &) = default ;
    CreateMcubeNebulaResourceRequest& operator=(CreateMcubeNebulaResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoInstall_ == nullptr && this->clientVersionMax_ == nullptr && this->clientVersionMin_ == nullptr && this->customDomainName_ == nullptr && this->extendInfo_ == nullptr
        && this->fileUrl_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->h5Version_ == nullptr && this->installType_ == nullptr
        && this->mainUrl_ == nullptr && this->onexFlag_ == nullptr && this->platform_ == nullptr && this->repeatNebula_ == nullptr && this->resourceType_ == nullptr
        && this->subUrl_ == nullptr && this->tenantId_ == nullptr && this->vhost_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMcubeNebulaResourceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline int32_t getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0) };
    inline CreateMcubeNebulaResourceRequest& setAutoInstall(int32_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientVersionMax Field Functions 
    bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
    void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
    inline string getClientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
    inline CreateMcubeNebulaResourceRequest& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


    // clientVersionMin Field Functions 
    bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
    void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
    inline string getClientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
    inline CreateMcubeNebulaResourceRequest& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


    // customDomainName Field Functions 
    bool hasCustomDomainName() const { return this->customDomainName_ != nullptr;};
    void deleteCustomDomainName() { this->customDomainName_ = nullptr;};
    inline string getCustomDomainName() const { DARABONBA_PTR_GET_DEFAULT(customDomainName_, "") };
    inline CreateMcubeNebulaResourceRequest& setCustomDomainName(string customDomainName) { DARABONBA_PTR_SET_VALUE(customDomainName_, customDomainName) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline CreateMcubeNebulaResourceRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateMcubeNebulaResourceRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline CreateMcubeNebulaResourceRequest& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline CreateMcubeNebulaResourceRequest& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // h5Version Field Functions 
    bool hasH5Version() const { return this->h5Version_ != nullptr;};
    void deleteH5Version() { this->h5Version_ = nullptr;};
    inline string getH5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
    inline CreateMcubeNebulaResourceRequest& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline int32_t getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0) };
    inline CreateMcubeNebulaResourceRequest& setInstallType(int32_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // mainUrl Field Functions 
    bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
    void deleteMainUrl() { this->mainUrl_ = nullptr;};
    inline string getMainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
    inline CreateMcubeNebulaResourceRequest& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool getOnexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline CreateMcubeNebulaResourceRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateMcubeNebulaResourceRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // repeatNebula Field Functions 
    bool hasRepeatNebula() const { return this->repeatNebula_ != nullptr;};
    void deleteRepeatNebula() { this->repeatNebula_ = nullptr;};
    inline int32_t getRepeatNebula() const { DARABONBA_PTR_GET_DEFAULT(repeatNebula_, 0) };
    inline CreateMcubeNebulaResourceRequest& setRepeatNebula(int32_t repeatNebula) { DARABONBA_PTR_SET_VALUE(repeatNebula_, repeatNebula) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline CreateMcubeNebulaResourceRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // subUrl Field Functions 
    bool hasSubUrl() const { return this->subUrl_ != nullptr;};
    void deleteSubUrl() { this->subUrl_ = nullptr;};
    inline string getSubUrl() const { DARABONBA_PTR_GET_DEFAULT(subUrl_, "") };
    inline CreateMcubeNebulaResourceRequest& setSubUrl(string subUrl) { DARABONBA_PTR_SET_VALUE(subUrl_, subUrl) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMcubeNebulaResourceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline CreateMcubeNebulaResourceRequest& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMcubeNebulaResourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> autoInstall_ {};
    shared_ptr<string> clientVersionMax_ {};
    shared_ptr<string> clientVersionMin_ {};
    shared_ptr<string> customDomainName_ {};
    shared_ptr<string> extendInfo_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> h5Id_ {};
    shared_ptr<string> h5Name_ {};
    shared_ptr<string> h5Version_ {};
    shared_ptr<int32_t> installType_ {};
    shared_ptr<string> mainUrl_ {};
    shared_ptr<bool> onexFlag_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<int32_t> repeatNebula_ {};
    shared_ptr<int32_t> resourceType_ {};
    shared_ptr<string> subUrl_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> vhost_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
