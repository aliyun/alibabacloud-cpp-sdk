// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEUPGRADEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeUpgradePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeUpgradePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(CustomDomainName, customDomainName_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(IconFileUrl, iconFileUrl_);
      DARABONBA_PTR_TO_JSON(InstallAmount, installAmount_);
      DARABONBA_PTR_TO_JSON(IosSymbolfileUrl, iosSymbolfileUrl_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_TO_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ValidDays, validDays_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeUpgradePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(CustomDomainName, customDomainName_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(IconFileUrl, iconFileUrl_);
      DARABONBA_PTR_FROM_JSON(InstallAmount, installAmount_);
      DARABONBA_PTR_FROM_JSON(IosSymbolfileUrl, iosSymbolfileUrl_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_FROM_JSON(OnexFlag, onexFlag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ValidDays, validDays_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMcubeUpgradePackageRequest() = default ;
    CreateMcubeUpgradePackageRequest(const CreateMcubeUpgradePackageRequest &) = default ;
    CreateMcubeUpgradePackageRequest(CreateMcubeUpgradePackageRequest &&) = default ;
    CreateMcubeUpgradePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeUpgradePackageRequest() = default ;
    CreateMcubeUpgradePackageRequest& operator=(const CreateMcubeUpgradePackageRequest &) = default ;
    CreateMcubeUpgradePackageRequest& operator=(CreateMcubeUpgradePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appVersion_ != nullptr && this->appstoreUrl_ != nullptr && this->bundleId_ != nullptr && this->customDomainName_ != nullptr && this->desc_ != nullptr
        && this->downloadUrl_ != nullptr && this->fileUrl_ != nullptr && this->iconFileUrl_ != nullptr && this->installAmount_ != nullptr && this->iosSymbolfileUrl_ != nullptr
        && this->isEnterprise_ != nullptr && this->needCheck_ != nullptr && this->onexFlag_ != nullptr && this->platform_ != nullptr && this->tenantId_ != nullptr
        && this->validDays_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMcubeUpgradePackageRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline CreateMcubeUpgradePackageRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // appstoreUrl Field Functions 
    bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
    void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
    inline string appstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
    inline CreateMcubeUpgradePackageRequest& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateMcubeUpgradePackageRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // customDomainName Field Functions 
    bool hasCustomDomainName() const { return this->customDomainName_ != nullptr;};
    void deleteCustomDomainName() { this->customDomainName_ = nullptr;};
    inline string customDomainName() const { DARABONBA_PTR_GET_DEFAULT(customDomainName_, "") };
    inline CreateMcubeUpgradePackageRequest& setCustomDomainName(string customDomainName) { DARABONBA_PTR_SET_VALUE(customDomainName_, customDomainName) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateMcubeUpgradePackageRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline CreateMcubeUpgradePackageRequest& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline CreateMcubeUpgradePackageRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // iconFileUrl Field Functions 
    bool hasIconFileUrl() const { return this->iconFileUrl_ != nullptr;};
    void deleteIconFileUrl() { this->iconFileUrl_ = nullptr;};
    inline string iconFileUrl() const { DARABONBA_PTR_GET_DEFAULT(iconFileUrl_, "") };
    inline CreateMcubeUpgradePackageRequest& setIconFileUrl(string iconFileUrl) { DARABONBA_PTR_SET_VALUE(iconFileUrl_, iconFileUrl) };


    // installAmount Field Functions 
    bool hasInstallAmount() const { return this->installAmount_ != nullptr;};
    void deleteInstallAmount() { this->installAmount_ = nullptr;};
    inline int32_t installAmount() const { DARABONBA_PTR_GET_DEFAULT(installAmount_, 0) };
    inline CreateMcubeUpgradePackageRequest& setInstallAmount(int32_t installAmount) { DARABONBA_PTR_SET_VALUE(installAmount_, installAmount) };


    // iosSymbolfileUrl Field Functions 
    bool hasIosSymbolfileUrl() const { return this->iosSymbolfileUrl_ != nullptr;};
    void deleteIosSymbolfileUrl() { this->iosSymbolfileUrl_ = nullptr;};
    inline string iosSymbolfileUrl() const { DARABONBA_PTR_GET_DEFAULT(iosSymbolfileUrl_, "") };
    inline CreateMcubeUpgradePackageRequest& setIosSymbolfileUrl(string iosSymbolfileUrl) { DARABONBA_PTR_SET_VALUE(iosSymbolfileUrl_, iosSymbolfileUrl) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline CreateMcubeUpgradePackageRequest& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // needCheck Field Functions 
    bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
    void deleteNeedCheck() { this->needCheck_ = nullptr;};
    inline int32_t needCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, 0) };
    inline CreateMcubeUpgradePackageRequest& setNeedCheck(int32_t needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


    // onexFlag Field Functions 
    bool hasOnexFlag() const { return this->onexFlag_ != nullptr;};
    void deleteOnexFlag() { this->onexFlag_ = nullptr;};
    inline bool onexFlag() const { DARABONBA_PTR_GET_DEFAULT(onexFlag_, false) };
    inline CreateMcubeUpgradePackageRequest& setOnexFlag(bool onexFlag) { DARABONBA_PTR_SET_VALUE(onexFlag_, onexFlag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline CreateMcubeUpgradePackageRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMcubeUpgradePackageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // validDays Field Functions 
    bool hasValidDays() const { return this->validDays_ != nullptr;};
    void deleteValidDays() { this->validDays_ = nullptr;};
    inline int32_t validDays() const { DARABONBA_PTR_GET_DEFAULT(validDays_, 0) };
    inline CreateMcubeUpgradePackageRequest& setValidDays(int32_t validDays) { DARABONBA_PTR_SET_VALUE(validDays_, validDays) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMcubeUpgradePackageRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> appstoreUrl_ = nullptr;
    std::shared_ptr<string> bundleId_ = nullptr;
    std::shared_ptr<string> customDomainName_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> iconFileUrl_ = nullptr;
    std::shared_ptr<int32_t> installAmount_ = nullptr;
    std::shared_ptr<string> iosSymbolfileUrl_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<int32_t> needCheck_ = nullptr;
    std::shared_ptr<bool> onexFlag_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int32_t> validDays_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
