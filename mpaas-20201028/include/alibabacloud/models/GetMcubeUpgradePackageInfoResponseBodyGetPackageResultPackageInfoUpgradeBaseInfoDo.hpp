// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOUPGRADEBASEINFODO_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADEPACKAGEINFORESPONSEBODYGETPACKAGERESULTPACKAGEINFOUPGRADEBASEINFODO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& obj) { 
      DARABONBA_PTR_TO_JSON(AllowCreateTask, allowCreateTask_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_TO_JSON(BackLog, backLog_);
      DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
      DARABONBA_PTR_TO_JSON(ClientFileSize, clientFileSize_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(CpId, cpId_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(GlobalVariables, globalVariables_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_TO_JSON(IosSymbol, iosSymbol_);
      DARABONBA_PTR_TO_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_TO_JSON(IsRc, isRc_);
      DARABONBA_PTR_TO_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_TO_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(ReleaseWindow, releaseWindow_);
      DARABONBA_PTR_TO_JSON(ScmDownloadUrl, scmDownloadUrl_);
      DARABONBA_PTR_TO_JSON(ServerVersion, serverVersion_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowCreateTask, allowCreateTask_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppstoreUrl, appstoreUrl_);
      DARABONBA_PTR_FROM_JSON(BackLog, backLog_);
      DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
      DARABONBA_PTR_FROM_JSON(ClientFileSize, clientFileSize_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(CpId, cpId_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(GlobalVariables, globalVariables_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtCreateStr, gmtCreateStr_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedStr, gmtModifiedStr_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InnerVersion, innerVersion_);
      DARABONBA_PTR_FROM_JSON(IosSymbol, iosSymbol_);
      DARABONBA_PTR_FROM_JSON(IsEnterprise, isEnterprise_);
      DARABONBA_PTR_FROM_JSON(IsRc, isRc_);
      DARABONBA_PTR_FROM_JSON(IsRelease, isRelease_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(NeedCheck, needCheck_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
      DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_FROM_JSON(QrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(ReleaseWindow, releaseWindow_);
      DARABONBA_PTR_FROM_JSON(ScmDownloadUrl, scmDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(ServerVersion, serverVersion_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &&) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO() = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& operator=(const GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &) = default ;
    GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& operator=(GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowCreateTask_ == nullptr
        && return this->appCode_ == nullptr && return this->appstoreUrl_ == nullptr && return this->backLog_ == nullptr && return this->changeLog_ == nullptr && return this->clientFileSize_ == nullptr
        && return this->clientName_ == nullptr && return this->cpId_ == nullptr && return this->creator_ == nullptr && return this->downloadUrl_ == nullptr && return this->globalVariables_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtCreateStr_ == nullptr && return this->gmtModified_ == nullptr && return this->gmtModifiedStr_ == nullptr && return this->id_ == nullptr
        && return this->innerVersion_ == nullptr && return this->iosSymbol_ == nullptr && return this->isEnterprise_ == nullptr && return this->isRc_ == nullptr && return this->isRelease_ == nullptr
        && return this->maxVersion_ == nullptr && return this->md5_ == nullptr && return this->modifier_ == nullptr && return this->needCheck_ == nullptr && return this->ossPath_ == nullptr
        && return this->packageType_ == nullptr && return this->platform_ == nullptr && return this->productId_ == nullptr && return this->productName_ == nullptr && return this->productVersion_ == nullptr
        && return this->publishPeriod_ == nullptr && return this->qrcodeUrl_ == nullptr && return this->releaseType_ == nullptr && return this->releaseWindow_ == nullptr && return this->scmDownloadUrl_ == nullptr
        && return this->serverVersion_ == nullptr && return this->verificationCode_ == nullptr && return this->verifyResult_ == nullptr && return this->versionCode_ == nullptr; };
    // allowCreateTask Field Functions 
    bool hasAllowCreateTask() const { return this->allowCreateTask_ != nullptr;};
    void deleteAllowCreateTask() { this->allowCreateTask_ = nullptr;};
    inline bool allowCreateTask() const { DARABONBA_PTR_GET_DEFAULT(allowCreateTask_, false) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAllowCreateTask(bool allowCreateTask) { DARABONBA_PTR_SET_VALUE(allowCreateTask_, allowCreateTask) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appstoreUrl Field Functions 
    bool hasAppstoreUrl() const { return this->appstoreUrl_ != nullptr;};
    void deleteAppstoreUrl() { this->appstoreUrl_ = nullptr;};
    inline string appstoreUrl() const { DARABONBA_PTR_GET_DEFAULT(appstoreUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setAppstoreUrl(string appstoreUrl) { DARABONBA_PTR_SET_VALUE(appstoreUrl_, appstoreUrl) };


    // backLog Field Functions 
    bool hasBackLog() const { return this->backLog_ != nullptr;};
    void deleteBackLog() { this->backLog_ = nullptr;};
    inline string backLog() const { DARABONBA_PTR_GET_DEFAULT(backLog_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setBackLog(string backLog) { DARABONBA_PTR_SET_VALUE(backLog_, backLog) };


    // changeLog Field Functions 
    bool hasChangeLog() const { return this->changeLog_ != nullptr;};
    void deleteChangeLog() { this->changeLog_ = nullptr;};
    inline string changeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


    // clientFileSize Field Functions 
    bool hasClientFileSize() const { return this->clientFileSize_ != nullptr;};
    void deleteClientFileSize() { this->clientFileSize_ = nullptr;};
    inline int32_t clientFileSize() const { DARABONBA_PTR_GET_DEFAULT(clientFileSize_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setClientFileSize(int32_t clientFileSize) { DARABONBA_PTR_SET_VALUE(clientFileSize_, clientFileSize) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string clientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // cpId Field Functions 
    bool hasCpId() const { return this->cpId_ != nullptr;};
    void deleteCpId() { this->cpId_ = nullptr;};
    inline string cpId() const { DARABONBA_PTR_GET_DEFAULT(cpId_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setCpId(string cpId) { DARABONBA_PTR_SET_VALUE(cpId_, cpId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // globalVariables Field Functions 
    bool hasGlobalVariables() const { return this->globalVariables_ != nullptr;};
    void deleteGlobalVariables() { this->globalVariables_ = nullptr;};
    inline string globalVariables() const { DARABONBA_PTR_GET_DEFAULT(globalVariables_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGlobalVariables(string globalVariables) { DARABONBA_PTR_SET_VALUE(globalVariables_, globalVariables) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtCreateStr Field Functions 
    bool hasGmtCreateStr() const { return this->gmtCreateStr_ != nullptr;};
    void deleteGmtCreateStr() { this->gmtCreateStr_ = nullptr;};
    inline string gmtCreateStr() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateStr_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtCreateStr(string gmtCreateStr) { DARABONBA_PTR_SET_VALUE(gmtCreateStr_, gmtCreateStr) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // gmtModifiedStr Field Functions 
    bool hasGmtModifiedStr() const { return this->gmtModifiedStr_ != nullptr;};
    void deleteGmtModifiedStr() { this->gmtModifiedStr_ = nullptr;};
    inline string gmtModifiedStr() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedStr_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setGmtModifiedStr(string gmtModifiedStr) { DARABONBA_PTR_SET_VALUE(gmtModifiedStr_, gmtModifiedStr) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // innerVersion Field Functions 
    bool hasInnerVersion() const { return this->innerVersion_ != nullptr;};
    void deleteInnerVersion() { this->innerVersion_ = nullptr;};
    inline string innerVersion() const { DARABONBA_PTR_GET_DEFAULT(innerVersion_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setInnerVersion(string innerVersion) { DARABONBA_PTR_SET_VALUE(innerVersion_, innerVersion) };


    // iosSymbol Field Functions 
    bool hasIosSymbol() const { return this->iosSymbol_ != nullptr;};
    void deleteIosSymbol() { this->iosSymbol_ = nullptr;};
    inline string iosSymbol() const { DARABONBA_PTR_GET_DEFAULT(iosSymbol_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setIosSymbol(string iosSymbol) { DARABONBA_PTR_SET_VALUE(iosSymbol_, iosSymbol) };


    // isEnterprise Field Functions 
    bool hasIsEnterprise() const { return this->isEnterprise_ != nullptr;};
    void deleteIsEnterprise() { this->isEnterprise_ = nullptr;};
    inline int32_t isEnterprise() const { DARABONBA_PTR_GET_DEFAULT(isEnterprise_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setIsEnterprise(int32_t isEnterprise) { DARABONBA_PTR_SET_VALUE(isEnterprise_, isEnterprise) };


    // isRc Field Functions 
    bool hasIsRc() const { return this->isRc_ != nullptr;};
    void deleteIsRc() { this->isRc_ = nullptr;};
    inline int32_t isRc() const { DARABONBA_PTR_GET_DEFAULT(isRc_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setIsRc(int32_t isRc) { DARABONBA_PTR_SET_VALUE(isRc_, isRc) };


    // isRelease Field Functions 
    bool hasIsRelease() const { return this->isRelease_ != nullptr;};
    void deleteIsRelease() { this->isRelease_ = nullptr;};
    inline int32_t isRelease() const { DARABONBA_PTR_GET_DEFAULT(isRelease_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setIsRelease(int32_t isRelease) { DARABONBA_PTR_SET_VALUE(isRelease_, isRelease) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // needCheck Field Functions 
    bool hasNeedCheck() const { return this->needCheck_ != nullptr;};
    void deleteNeedCheck() { this->needCheck_ = nullptr;};
    inline int32_t needCheck() const { DARABONBA_PTR_GET_DEFAULT(needCheck_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setNeedCheck(int32_t needCheck) { DARABONBA_PTR_SET_VALUE(needCheck_, needCheck) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productVersion Field Functions 
    bool hasProductVersion() const { return this->productVersion_ != nullptr;};
    void deleteProductVersion() { this->productVersion_ = nullptr;};
    inline string productVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


    // publishPeriod Field Functions 
    bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
    void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
    inline int32_t publishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


    // qrcodeUrl Field Functions 
    bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
    void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
    inline string qrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // releaseWindow Field Functions 
    bool hasReleaseWindow() const { return this->releaseWindow_ != nullptr;};
    void deleteReleaseWindow() { this->releaseWindow_ = nullptr;};
    inline string releaseWindow() const { DARABONBA_PTR_GET_DEFAULT(releaseWindow_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setReleaseWindow(string releaseWindow) { DARABONBA_PTR_SET_VALUE(releaseWindow_, releaseWindow) };


    // scmDownloadUrl Field Functions 
    bool hasScmDownloadUrl() const { return this->scmDownloadUrl_ != nullptr;};
    void deleteScmDownloadUrl() { this->scmDownloadUrl_ = nullptr;};
    inline string scmDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(scmDownloadUrl_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setScmDownloadUrl(string scmDownloadUrl) { DARABONBA_PTR_SET_VALUE(scmDownloadUrl_, scmDownloadUrl) };


    // serverVersion Field Functions 
    bool hasServerVersion() const { return this->serverVersion_ != nullptr;};
    void deleteServerVersion() { this->serverVersion_ = nullptr;};
    inline int32_t serverVersion() const { DARABONBA_PTR_GET_DEFAULT(serverVersion_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setServerVersion(int32_t serverVersion) { DARABONBA_PTR_SET_VALUE(serverVersion_, serverVersion) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string verificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline int32_t verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, 0) };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setVerifyResult(int32_t verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline GetMcubeUpgradePackageInfoResponseBodyGetPackageResultPackageInfoUpgradeBaseInfoDO& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    std::shared_ptr<bool> allowCreateTask_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> appstoreUrl_ = nullptr;
    std::shared_ptr<string> backLog_ = nullptr;
    std::shared_ptr<string> changeLog_ = nullptr;
    std::shared_ptr<int32_t> clientFileSize_ = nullptr;
    std::shared_ptr<string> clientName_ = nullptr;
    std::shared_ptr<string> cpId_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> globalVariables_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtCreateStr_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> gmtModifiedStr_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> innerVersion_ = nullptr;
    std::shared_ptr<string> iosSymbol_ = nullptr;
    std::shared_ptr<int32_t> isEnterprise_ = nullptr;
    std::shared_ptr<int32_t> isRc_ = nullptr;
    std::shared_ptr<int32_t> isRelease_ = nullptr;
    std::shared_ptr<string> maxVersion_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<int32_t> needCheck_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productVersion_ = nullptr;
    std::shared_ptr<int32_t> publishPeriod_ = nullptr;
    std::shared_ptr<string> qrcodeUrl_ = nullptr;
    std::shared_ptr<string> releaseType_ = nullptr;
    std::shared_ptr<string> releaseWindow_ = nullptr;
    std::shared_ptr<string> scmDownloadUrl_ = nullptr;
    std::shared_ptr<int32_t> serverVersion_ = nullptr;
    std::shared_ptr<string> verificationCode_ = nullptr;
    std::shared_ptr<int32_t> verifyResult_ = nullptr;
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
