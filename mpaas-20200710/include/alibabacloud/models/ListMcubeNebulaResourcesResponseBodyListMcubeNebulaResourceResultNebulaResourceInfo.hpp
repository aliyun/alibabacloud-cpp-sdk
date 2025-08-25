// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODYLISTMCUBENEBULARESOURCERESULTNEBULARESOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODYLISTMCUBENEBULARESOURCERESULTNEBULARESOURCEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_TO_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DebugUrl, debugUrl_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(FallbackBaseUrl, fallbackBaseUrl_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(H5Version, h5Version_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstallType, installType_);
      DARABONBA_PTR_TO_JSON(LazyLoad, lazyLoad_);
      DARABONBA_PTR_TO_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(MetaId, metaId_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DebugUrl, debugUrl_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(FallbackBaseUrl, fallbackBaseUrl_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(H5Version, h5Version_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstallType, installType_);
      DARABONBA_PTR_FROM_JSON(LazyLoad, lazyLoad_);
      DARABONBA_PTR_FROM_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(MetaId, metaId_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
    };
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo() = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo(const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo &) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo(ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo &&) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo() = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& operator=(const ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo &) = default ;
    ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& operator=(ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->autoInstall_ != nullptr && this->clientVersionMax_ != nullptr && this->clientVersionMin_ != nullptr && this->creator_ != nullptr && this->debugUrl_ != nullptr
        && this->downloadUrl_ != nullptr && this->extendInfo_ != nullptr && this->extraData_ != nullptr && this->fallbackBaseUrl_ != nullptr && this->fileSize_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->h5Id_ != nullptr && this->h5Name_ != nullptr && this->h5Version_ != nullptr
        && this->id_ != nullptr && this->installType_ != nullptr && this->lazyLoad_ != nullptr && this->mainUrl_ != nullptr && this->md5_ != nullptr
        && this->memo_ != nullptr && this->metaId_ != nullptr && this->modifier_ != nullptr && this->packageType_ != nullptr && this->platform_ != nullptr
        && this->publishPeriod_ != nullptr && this->releaseVersion_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->vhost_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline int32_t autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setAutoInstall(int32_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientVersionMax Field Functions 
    bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
    void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
    inline string clientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


    // clientVersionMin Field Functions 
    bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
    void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
    inline string clientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // debugUrl Field Functions 
    bool hasDebugUrl() const { return this->debugUrl_ != nullptr;};
    void deleteDebugUrl() { this->debugUrl_ = nullptr;};
    inline string debugUrl() const { DARABONBA_PTR_GET_DEFAULT(debugUrl_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setDebugUrl(string debugUrl) { DARABONBA_PTR_SET_VALUE(debugUrl_, debugUrl) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // fallbackBaseUrl Field Functions 
    bool hasFallbackBaseUrl() const { return this->fallbackBaseUrl_ != nullptr;};
    void deleteFallbackBaseUrl() { this->fallbackBaseUrl_ = nullptr;};
    inline string fallbackBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fallbackBaseUrl_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setFallbackBaseUrl(string fallbackBaseUrl) { DARABONBA_PTR_SET_VALUE(fallbackBaseUrl_, fallbackBaseUrl) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // h5Version Field Functions 
    bool hasH5Version() const { return this->h5Version_ != nullptr;};
    void deleteH5Version() { this->h5Version_ = nullptr;};
    inline string h5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline int32_t installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setInstallType(int32_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // lazyLoad Field Functions 
    bool hasLazyLoad() const { return this->lazyLoad_ != nullptr;};
    void deleteLazyLoad() { this->lazyLoad_ = nullptr;};
    inline int32_t lazyLoad() const { DARABONBA_PTR_GET_DEFAULT(lazyLoad_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setLazyLoad(int32_t lazyLoad) { DARABONBA_PTR_SET_VALUE(lazyLoad_, lazyLoad) };


    // mainUrl Field Functions 
    bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
    void deleteMainUrl() { this->mainUrl_ = nullptr;};
    inline string mainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // metaId Field Functions 
    bool hasMetaId() const { return this->metaId_ != nullptr;};
    void deleteMetaId() { this->metaId_ = nullptr;};
    inline int64_t metaId() const { DARABONBA_PTR_GET_DEFAULT(metaId_, 0L) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setMetaId(int64_t metaId) { DARABONBA_PTR_SET_VALUE(metaId_, metaId) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline int32_t packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setPackageType(int32_t packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // publishPeriod Field Functions 
    bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
    void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
    inline int32_t publishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string vhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline ListMcubeNebulaResourcesResponseBodyListMcubeNebulaResourceResultNebulaResourceInfo& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<int32_t> autoInstall_ = nullptr;
    std::shared_ptr<string> clientVersionMax_ = nullptr;
    std::shared_ptr<string> clientVersionMin_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> debugUrl_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    std::shared_ptr<string> fallbackBaseUrl_ = nullptr;
    std::shared_ptr<string> fileSize_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
    std::shared_ptr<string> h5Version_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> installType_ = nullptr;
    std::shared_ptr<int32_t> lazyLoad_ = nullptr;
    std::shared_ptr<string> mainUrl_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<int64_t> metaId_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<int32_t> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int32_t> publishPeriod_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> vhost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
