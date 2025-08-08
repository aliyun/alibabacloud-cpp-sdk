// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODYQUERYMINIPACKAGERESULTMINIPACKAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODYQUERYMINIPACKAGERESULTMINIPACKAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_TO_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(FallbackBaseUrl, fallbackBaseUrl_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(H5Version, h5Version_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstallType, installType_);
      DARABONBA_PTR_TO_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_TO_JSON(Memo, memo_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMax, clientVersionMax_);
      DARABONBA_PTR_FROM_JSON(ClientVersionMin, clientVersionMin_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(FallbackBaseUrl, fallbackBaseUrl_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(H5Version, h5Version_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstallType, installType_);
      DARABONBA_PTR_FROM_JSON(MainUrl, mainUrl_);
      DARABONBA_PTR_FROM_JSON(Memo, memo_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PublishPeriod, publishPeriod_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo() = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo(const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo &) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo(QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo &&) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo() = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& operator=(const QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo &) = default ;
    QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& operator=(QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCode_ != nullptr
        && this->autoInstall_ != nullptr && this->clientVersionMax_ != nullptr && this->clientVersionMin_ != nullptr && this->downloadUrl_ != nullptr && this->extendInfo_ != nullptr
        && this->extraData_ != nullptr && this->fallbackBaseUrl_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->h5Id_ != nullptr
        && this->h5Name_ != nullptr && this->h5Version_ != nullptr && this->id_ != nullptr && this->installType_ != nullptr && this->mainUrl_ != nullptr
        && this->memo_ != nullptr && this->packageType_ != nullptr && this->platform_ != nullptr && this->publishPeriod_ != nullptr && this->resourceType_ != nullptr
        && this->status_ != nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline int64_t autoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setAutoInstall(int64_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // clientVersionMax Field Functions 
    bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
    void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
    inline string clientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


    // clientVersionMin Field Functions 
    bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
    void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
    inline string clientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // fallbackBaseUrl Field Functions 
    bool hasFallbackBaseUrl() const { return this->fallbackBaseUrl_ != nullptr;};
    void deleteFallbackBaseUrl() { this->fallbackBaseUrl_ = nullptr;};
    inline string fallbackBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fallbackBaseUrl_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setFallbackBaseUrl(string fallbackBaseUrl) { DARABONBA_PTR_SET_VALUE(fallbackBaseUrl_, fallbackBaseUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // h5Version Field Functions 
    bool hasH5Version() const { return this->h5Version_ != nullptr;};
    void deleteH5Version() { this->h5Version_ = nullptr;};
    inline string h5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline int64_t installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setInstallType(int64_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // mainUrl Field Functions 
    bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
    void deleteMainUrl() { this->mainUrl_ = nullptr;};
    inline string mainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline int64_t packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setPackageType(int64_t packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // publishPeriod Field Functions 
    bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
    void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
    inline int64_t publishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setPublishPeriod(int64_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline QueryMcubeMiniPackageResponseBodyQueryMiniPackageResultMiniPackageInfo& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<int64_t> autoInstall_ = nullptr;
    std::shared_ptr<string> clientVersionMax_ = nullptr;
    std::shared_ptr<string> clientVersionMin_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> extraData_ = nullptr;
    std::shared_ptr<string> fallbackBaseUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
    std::shared_ptr<string> h5Version_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> installType_ = nullptr;
    std::shared_ptr<string> mainUrl_ = nullptr;
    std::shared_ptr<string> memo_ = nullptr;
    std::shared_ptr<int64_t> packageType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<int64_t> publishPeriod_ = nullptr;
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
