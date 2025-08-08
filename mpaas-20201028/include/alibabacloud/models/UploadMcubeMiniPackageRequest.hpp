// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeMiniPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeMiniPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_TO_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_TO_JSON(EnableKeepAlive, enableKeepAlive_);
      DARABONBA_PTR_TO_JSON(EnableOptionMenu, enableOptionMenu_);
      DARABONBA_PTR_TO_JSON(EnableTabBar, enableTabBar_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(H5Version, h5Version_);
      DARABONBA_PTR_TO_JSON(IconFileUrl, iconFileUrl_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(InstallType, installType_);
      DARABONBA_PTR_TO_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceFileUrl, resourceFileUrl_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeMiniPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_FROM_JSON(EnableKeepAlive, enableKeepAlive_);
      DARABONBA_PTR_FROM_JSON(EnableOptionMenu, enableOptionMenu_);
      DARABONBA_PTR_FROM_JSON(EnableTabBar, enableTabBar_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(H5Version, h5Version_);
      DARABONBA_PTR_FROM_JSON(IconFileUrl, iconFileUrl_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(InstallType, installType_);
      DARABONBA_PTR_FROM_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceFileUrl, resourceFileUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UploadMcubeMiniPackageRequest() = default ;
    UploadMcubeMiniPackageRequest(const UploadMcubeMiniPackageRequest &) = default ;
    UploadMcubeMiniPackageRequest(UploadMcubeMiniPackageRequest &&) = default ;
    UploadMcubeMiniPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeMiniPackageRequest() = default ;
    UploadMcubeMiniPackageRequest& operator=(const UploadMcubeMiniPackageRequest &) = default ;
    UploadMcubeMiniPackageRequest& operator=(UploadMcubeMiniPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->autoInstall_ != nullptr && this->clientVersionMax_ != nullptr && this->clientVersionMin_ != nullptr && this->enableKeepAlive_ != nullptr && this->enableOptionMenu_ != nullptr
        && this->enableTabBar_ != nullptr && this->extendInfo_ != nullptr && this->h5Id_ != nullptr && this->h5Name_ != nullptr && this->h5Version_ != nullptr
        && this->iconFileUrl_ != nullptr && this->iconUrl_ != nullptr && this->installType_ != nullptr && this->mainUrl_ != nullptr && this->onexFlag_ != nullptr
        && this->packageType_ != nullptr && this->platform_ != nullptr && this->resourceFileUrl_ != nullptr && this->resourceType_ != nullptr && this->tenantId_ != nullptr
        && this->userId_ != nullptr && this->uuid_ != nullptr && this->vhost_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UploadMcubeMiniPackageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline int64_t autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0L) };
    inline UploadMcubeMiniPackageRequest& setAutoInstall(int64_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientVersionMax Field Functions 
    bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
    void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
    inline string clientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
    inline UploadMcubeMiniPackageRequest& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


    // clientVersionMin Field Functions 
    bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
    void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
    inline string clientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
    inline UploadMcubeMiniPackageRequest& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


    // enableKeepAlive Field Functions 
    bool hasEnableKeepAlive() const { return this->enableKeepAlive_ != nullptr;};
    void deleteEnableKeepAlive() { this->enableKeepAlive_ = nullptr;};
    inline string enableKeepAlive() const { DARABONBA_PTR_GET_DEFAULT(enableKeepAlive_, "") };
    inline UploadMcubeMiniPackageRequest& setEnableKeepAlive(string enableKeepAlive) { DARABONBA_PTR_SET_VALUE(enableKeepAlive_, enableKeepAlive) };


    // enableOptionMenu Field Functions 
    bool hasEnableOptionMenu() const { return this->enableOptionMenu_ != nullptr;};
    void deleteEnableOptionMenu() { this->enableOptionMenu_ = nullptr;};
    inline string enableOptionMenu() const { DARABONBA_PTR_GET_DEFAULT(enableOptionMenu_, "") };
    inline UploadMcubeMiniPackageRequest& setEnableOptionMenu(string enableOptionMenu) { DARABONBA_PTR_SET_VALUE(enableOptionMenu_, enableOptionMenu) };


    // enableTabBar Field Functions 
    bool hasEnableTabBar() const { return this->enableTabBar_ != nullptr;};
    void deleteEnableTabBar() { this->enableTabBar_ = nullptr;};
    inline int64_t enableTabBar() const { DARABONBA_PTR_GET_DEFAULT(enableTabBar_, 0L) };
    inline UploadMcubeMiniPackageRequest& setEnableTabBar(int64_t enableTabBar) { DARABONBA_PTR_SET_VALUE(enableTabBar_, enableTabBar) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline UploadMcubeMiniPackageRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline UploadMcubeMiniPackageRequest& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline UploadMcubeMiniPackageRequest& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // h5Version Field Functions 
    bool hasH5Version() const { return this->h5Version_ != nullptr;};
    void deleteH5Version() { this->h5Version_ = nullptr;};
    inline string h5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
    inline UploadMcubeMiniPackageRequest& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


    // iconFileUrl Field Functions 
    bool hasIconFileUrl() const { return this->iconFileUrl_ != nullptr;};
    void deleteIconFileUrl() { this->iconFileUrl_ = nullptr;};
    inline string iconFileUrl() const { DARABONBA_PTR_GET_DEFAULT(iconFileUrl_, "") };
    inline UploadMcubeMiniPackageRequest& setIconFileUrl(string iconFileUrl) { DARABONBA_PTR_SET_VALUE(iconFileUrl_, iconFileUrl) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline UploadMcubeMiniPackageRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline int64_t installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0L) };
    inline UploadMcubeMiniPackageRequest& setInstallType(int64_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // mainUrl Field Functions 
    bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
    void deleteMainUrl() { this->mainUrl_ = nullptr;};
    inline string mainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
    inline UploadMcubeMiniPackageRequest& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool onexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline UploadMcubeMiniPackageRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline int64_t packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, 0L) };
    inline UploadMcubeMiniPackageRequest& setPackageType(int64_t packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline UploadMcubeMiniPackageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceFileUrl Field Functions 
    bool hasResourceFileUrl() const { return this->resourceFileUrl_ != nullptr;};
    void deleteResourceFileUrl() { this->resourceFileUrl_ = nullptr;};
    inline string resourceFileUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceFileUrl_, "") };
    inline UploadMcubeMiniPackageRequest& setResourceFileUrl(string resourceFileUrl) { DARABONBA_PTR_SET_VALUE(resourceFileUrl_, resourceFileUrl) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline UploadMcubeMiniPackageRequest& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UploadMcubeMiniPackageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UploadMcubeMiniPackageRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UploadMcubeMiniPackageRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string vhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline UploadMcubeMiniPackageRequest& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UploadMcubeMiniPackageRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> autoInstall_ = nullptr;
    std::shared_ptr<string> clientVersionMax_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientVersionMin_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> enableKeepAlive_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> enableOptionMenu_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> enableTabBar_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> h5Id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> h5Name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> h5Version_ = nullptr;
    std::shared_ptr<string> iconFileUrl_ = nullptr;
    std::shared_ptr<string> iconUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> installType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mainUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> onexFlag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> packageType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceFileUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhost_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
