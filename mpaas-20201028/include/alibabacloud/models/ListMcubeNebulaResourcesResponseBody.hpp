// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMCUBENEBULARESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMcubeNebulaResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMcubeNebulaResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListMcubeNebulaResourceResult, listMcubeNebulaResourceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMcubeNebulaResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListMcubeNebulaResourceResult, listMcubeNebulaResourceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ListMcubeNebulaResourcesResponseBody() = default ;
    ListMcubeNebulaResourcesResponseBody(const ListMcubeNebulaResourcesResponseBody &) = default ;
    ListMcubeNebulaResourcesResponseBody(ListMcubeNebulaResourcesResponseBody &&) = default ;
    ListMcubeNebulaResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMcubeNebulaResourcesResponseBody() = default ;
    ListMcubeNebulaResourcesResponseBody& operator=(const ListMcubeNebulaResourcesResponseBody &) = default ;
    ListMcubeNebulaResourcesResponseBody& operator=(ListMcubeNebulaResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListMcubeNebulaResourceResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListMcubeNebulaResourceResult& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
        DARABONBA_PTR_TO_JSON(NebulaResourceInfo, nebulaResourceInfo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListMcubeNebulaResourceResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
        DARABONBA_PTR_FROM_JSON(NebulaResourceInfo, nebulaResourceInfo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListMcubeNebulaResourceResult() = default ;
      ListMcubeNebulaResourceResult(const ListMcubeNebulaResourceResult &) = default ;
      ListMcubeNebulaResourceResult(ListMcubeNebulaResourceResult &&) = default ;
      ListMcubeNebulaResourceResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListMcubeNebulaResourceResult() = default ;
      ListMcubeNebulaResourceResult& operator=(const ListMcubeNebulaResourceResult &) = default ;
      ListMcubeNebulaResourceResult& operator=(ListMcubeNebulaResourceResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NebulaResourceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NebulaResourceInfo& obj) { 
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
        friend void from_json(const Darabonba::Json& j, NebulaResourceInfo& obj) { 
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
        NebulaResourceInfo() = default ;
        NebulaResourceInfo(const NebulaResourceInfo &) = default ;
        NebulaResourceInfo(NebulaResourceInfo &&) = default ;
        NebulaResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NebulaResourceInfo() = default ;
        NebulaResourceInfo& operator=(const NebulaResourceInfo &) = default ;
        NebulaResourceInfo& operator=(NebulaResourceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->autoInstall_ == nullptr && this->clientVersionMax_ == nullptr && this->clientVersionMin_ == nullptr && this->creator_ == nullptr && this->debugUrl_ == nullptr
        && this->downloadUrl_ == nullptr && this->extendInfo_ == nullptr && this->extraData_ == nullptr && this->fallbackBaseUrl_ == nullptr && this->fileSize_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->h5Id_ == nullptr && this->h5Name_ == nullptr && this->h5Version_ == nullptr
        && this->id_ == nullptr && this->installType_ == nullptr && this->lazyLoad_ == nullptr && this->mainUrl_ == nullptr && this->md5_ == nullptr
        && this->memo_ == nullptr && this->metaId_ == nullptr && this->modifier_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr
        && this->publishPeriod_ == nullptr && this->releaseVersion_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr && this->vhost_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline NebulaResourceInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // autoInstall Field Functions 
        bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
        void deleteAutoInstall() { this->autoInstall_ = nullptr;};
        inline int32_t getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0) };
        inline NebulaResourceInfo& setAutoInstall(int32_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


        // clientVersionMax Field Functions 
        bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
        void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
        inline string getClientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
        inline NebulaResourceInfo& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


        // clientVersionMin Field Functions 
        bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
        void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
        inline string getClientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
        inline NebulaResourceInfo& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline NebulaResourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // debugUrl Field Functions 
        bool hasDebugUrl() const { return this->debugUrl_ != nullptr;};
        void deleteDebugUrl() { this->debugUrl_ = nullptr;};
        inline string getDebugUrl() const { DARABONBA_PTR_GET_DEFAULT(debugUrl_, "") };
        inline NebulaResourceInfo& setDebugUrl(string debugUrl) { DARABONBA_PTR_SET_VALUE(debugUrl_, debugUrl) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline NebulaResourceInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
        inline NebulaResourceInfo& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


        // extraData Field Functions 
        bool hasExtraData() const { return this->extraData_ != nullptr;};
        void deleteExtraData() { this->extraData_ = nullptr;};
        inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
        inline NebulaResourceInfo& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


        // fallbackBaseUrl Field Functions 
        bool hasFallbackBaseUrl() const { return this->fallbackBaseUrl_ != nullptr;};
        void deleteFallbackBaseUrl() { this->fallbackBaseUrl_ = nullptr;};
        inline string getFallbackBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fallbackBaseUrl_, "") };
        inline NebulaResourceInfo& setFallbackBaseUrl(string fallbackBaseUrl) { DARABONBA_PTR_SET_VALUE(fallbackBaseUrl_, fallbackBaseUrl) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline NebulaResourceInfo& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline NebulaResourceInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline NebulaResourceInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // h5Id Field Functions 
        bool hasH5Id() const { return this->h5Id_ != nullptr;};
        void deleteH5Id() { this->h5Id_ = nullptr;};
        inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
        inline NebulaResourceInfo& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


        // h5Name Field Functions 
        bool hasH5Name() const { return this->h5Name_ != nullptr;};
        void deleteH5Name() { this->h5Name_ = nullptr;};
        inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
        inline NebulaResourceInfo& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


        // h5Version Field Functions 
        bool hasH5Version() const { return this->h5Version_ != nullptr;};
        void deleteH5Version() { this->h5Version_ = nullptr;};
        inline string getH5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
        inline NebulaResourceInfo& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline NebulaResourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // installType Field Functions 
        bool hasInstallType() const { return this->installType_ != nullptr;};
        void deleteInstallType() { this->installType_ = nullptr;};
        inline int32_t getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0) };
        inline NebulaResourceInfo& setInstallType(int32_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


        // lazyLoad Field Functions 
        bool hasLazyLoad() const { return this->lazyLoad_ != nullptr;};
        void deleteLazyLoad() { this->lazyLoad_ = nullptr;};
        inline int32_t getLazyLoad() const { DARABONBA_PTR_GET_DEFAULT(lazyLoad_, 0) };
        inline NebulaResourceInfo& setLazyLoad(int32_t lazyLoad) { DARABONBA_PTR_SET_VALUE(lazyLoad_, lazyLoad) };


        // mainUrl Field Functions 
        bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
        void deleteMainUrl() { this->mainUrl_ = nullptr;};
        inline string getMainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
        inline NebulaResourceInfo& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline NebulaResourceInfo& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline NebulaResourceInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // metaId Field Functions 
        bool hasMetaId() const { return this->metaId_ != nullptr;};
        void deleteMetaId() { this->metaId_ = nullptr;};
        inline int64_t getMetaId() const { DARABONBA_PTR_GET_DEFAULT(metaId_, 0L) };
        inline NebulaResourceInfo& setMetaId(int64_t metaId) { DARABONBA_PTR_SET_VALUE(metaId_, metaId) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline NebulaResourceInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline int32_t getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, 0) };
        inline NebulaResourceInfo& setPackageType(int32_t packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline NebulaResourceInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int32_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0) };
        inline NebulaResourceInfo& setPublishPeriod(int32_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // releaseVersion Field Functions 
        bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
        void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
        inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
        inline NebulaResourceInfo& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline NebulaResourceInfo& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline NebulaResourceInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vhost Field Functions 
        bool hasVhost() const { return this->vhost_ != nullptr;};
        void deleteVhost() { this->vhost_ = nullptr;};
        inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
        inline NebulaResourceInfo& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<int32_t> autoInstall_ {};
        shared_ptr<string> clientVersionMax_ {};
        shared_ptr<string> clientVersionMin_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> debugUrl_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> extendInfo_ {};
        shared_ptr<string> extraData_ {};
        shared_ptr<string> fallbackBaseUrl_ {};
        shared_ptr<string> fileSize_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> h5Id_ {};
        shared_ptr<string> h5Name_ {};
        shared_ptr<string> h5Version_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> installType_ {};
        shared_ptr<int32_t> lazyLoad_ {};
        shared_ptr<string> mainUrl_ {};
        shared_ptr<string> md5_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<int64_t> metaId_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<int32_t> packageType_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<int32_t> publishPeriod_ {};
        shared_ptr<string> releaseVersion_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> vhost_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->errorCode_ == nullptr && this->hasMore_ == nullptr && this->nebulaResourceInfo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ListMcubeNebulaResourceResult& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ListMcubeNebulaResourceResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // hasMore Field Functions 
      bool hasHasMore() const { return this->hasMore_ != nullptr;};
      void deleteHasMore() { this->hasMore_ = nullptr;};
      inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
      inline ListMcubeNebulaResourceResult& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


      // nebulaResourceInfo Field Functions 
      bool hasNebulaResourceInfo() const { return this->nebulaResourceInfo_ != nullptr;};
      void deleteNebulaResourceInfo() { this->nebulaResourceInfo_ = nullptr;};
      inline const vector<ListMcubeNebulaResourceResult::NebulaResourceInfo> & getNebulaResourceInfo() const { DARABONBA_PTR_GET_CONST(nebulaResourceInfo_, vector<ListMcubeNebulaResourceResult::NebulaResourceInfo>) };
      inline vector<ListMcubeNebulaResourceResult::NebulaResourceInfo> getNebulaResourceInfo() { DARABONBA_PTR_GET(nebulaResourceInfo_, vector<ListMcubeNebulaResourceResult::NebulaResourceInfo>) };
      inline ListMcubeNebulaResourceResult& setNebulaResourceInfo(const vector<ListMcubeNebulaResourceResult::NebulaResourceInfo> & nebulaResourceInfo) { DARABONBA_PTR_SET_VALUE(nebulaResourceInfo_, nebulaResourceInfo) };
      inline ListMcubeNebulaResourceResult& setNebulaResourceInfo(vector<ListMcubeNebulaResourceResult::NebulaResourceInfo> && nebulaResourceInfo) { DARABONBA_PTR_SET_RVALUE(nebulaResourceInfo_, nebulaResourceInfo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListMcubeNebulaResourceResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ListMcubeNebulaResourceResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ListMcubeNebulaResourceResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ListMcubeNebulaResourceResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ListMcubeNebulaResourceResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<bool> hasMore_ {};
      shared_ptr<vector<ListMcubeNebulaResourceResult::NebulaResourceInfo>> nebulaResourceInfo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->listMcubeNebulaResourceResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // listMcubeNebulaResourceResult Field Functions 
    bool hasListMcubeNebulaResourceResult() const { return this->listMcubeNebulaResourceResult_ != nullptr;};
    void deleteListMcubeNebulaResourceResult() { this->listMcubeNebulaResourceResult_ = nullptr;};
    inline const ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult & getListMcubeNebulaResourceResult() const { DARABONBA_PTR_GET_CONST(listMcubeNebulaResourceResult_, ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult getListMcubeNebulaResourceResult() { DARABONBA_PTR_GET(listMcubeNebulaResourceResult_, ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBody& setListMcubeNebulaResourceResult(const ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult & listMcubeNebulaResourceResult) { DARABONBA_PTR_SET_VALUE(listMcubeNebulaResourceResult_, listMcubeNebulaResourceResult) };
    inline ListMcubeNebulaResourcesResponseBody& setListMcubeNebulaResourceResult(ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult && listMcubeNebulaResourceResult) { DARABONBA_PTR_SET_RVALUE(listMcubeNebulaResourceResult_, listMcubeNebulaResourceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListMcubeNebulaResourcesResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<ListMcubeNebulaResourcesResponseBody::ListMcubeNebulaResourceResult> listMcubeNebulaResourceResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
