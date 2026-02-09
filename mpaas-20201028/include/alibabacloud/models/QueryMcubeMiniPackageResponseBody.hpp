// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMCUBEMINIPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMcubeMiniPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMiniPackageResult, queryMiniPackageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMcubeMiniPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMiniPackageResult, queryMiniPackageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMcubeMiniPackageResponseBody() = default ;
    QueryMcubeMiniPackageResponseBody(const QueryMcubeMiniPackageResponseBody &) = default ;
    QueryMcubeMiniPackageResponseBody(QueryMcubeMiniPackageResponseBody &&) = default ;
    QueryMcubeMiniPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMcubeMiniPackageResponseBody() = default ;
    QueryMcubeMiniPackageResponseBody& operator=(const QueryMcubeMiniPackageResponseBody &) = default ;
    QueryMcubeMiniPackageResponseBody& operator=(QueryMcubeMiniPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryMiniPackageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryMiniPackageResult& obj) { 
        DARABONBA_PTR_TO_JSON(MiniPackageInfo, miniPackageInfo_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, QueryMiniPackageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MiniPackageInfo, miniPackageInfo_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      QueryMiniPackageResult() = default ;
      QueryMiniPackageResult(const QueryMiniPackageResult &) = default ;
      QueryMiniPackageResult(QueryMiniPackageResult &&) = default ;
      QueryMiniPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryMiniPackageResult() = default ;
      QueryMiniPackageResult& operator=(const QueryMiniPackageResult &) = default ;
      QueryMiniPackageResult& operator=(QueryMiniPackageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MiniPackageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MiniPackageInfo& obj) { 
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
        friend void from_json(const Darabonba::Json& j, MiniPackageInfo& obj) { 
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
        MiniPackageInfo() = default ;
        MiniPackageInfo(const MiniPackageInfo &) = default ;
        MiniPackageInfo(MiniPackageInfo &&) = default ;
        MiniPackageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MiniPackageInfo() = default ;
        MiniPackageInfo& operator=(const MiniPackageInfo &) = default ;
        MiniPackageInfo& operator=(MiniPackageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->autoInstall_ == nullptr && this->clientVersionMax_ == nullptr && this->clientVersionMin_ == nullptr && this->downloadUrl_ == nullptr && this->extendInfo_ == nullptr
        && this->extraData_ == nullptr && this->fallbackBaseUrl_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->h5Id_ == nullptr
        && this->h5Name_ == nullptr && this->h5Version_ == nullptr && this->id_ == nullptr && this->installType_ == nullptr && this->mainUrl_ == nullptr
        && this->memo_ == nullptr && this->packageType_ == nullptr && this->platform_ == nullptr && this->publishPeriod_ == nullptr && this->resourceType_ == nullptr
        && this->status_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline MiniPackageInfo& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // autoInstall Field Functions 
        bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
        void deleteAutoInstall() { this->autoInstall_ = nullptr;};
        inline int64_t getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, 0L) };
        inline MiniPackageInfo& setAutoInstall(int64_t autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


        // clientVersionMax Field Functions 
        bool hasClientVersionMax() const { return this->clientVersionMax_ != nullptr;};
        void deleteClientVersionMax() { this->clientVersionMax_ = nullptr;};
        inline string getClientVersionMax() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMax_, "") };
        inline MiniPackageInfo& setClientVersionMax(string clientVersionMax) { DARABONBA_PTR_SET_VALUE(clientVersionMax_, clientVersionMax) };


        // clientVersionMin Field Functions 
        bool hasClientVersionMin() const { return this->clientVersionMin_ != nullptr;};
        void deleteClientVersionMin() { this->clientVersionMin_ = nullptr;};
        inline string getClientVersionMin() const { DARABONBA_PTR_GET_DEFAULT(clientVersionMin_, "") };
        inline MiniPackageInfo& setClientVersionMin(string clientVersionMin) { DARABONBA_PTR_SET_VALUE(clientVersionMin_, clientVersionMin) };


        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline MiniPackageInfo& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
        inline MiniPackageInfo& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


        // extraData Field Functions 
        bool hasExtraData() const { return this->extraData_ != nullptr;};
        void deleteExtraData() { this->extraData_ = nullptr;};
        inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
        inline MiniPackageInfo& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


        // fallbackBaseUrl Field Functions 
        bool hasFallbackBaseUrl() const { return this->fallbackBaseUrl_ != nullptr;};
        void deleteFallbackBaseUrl() { this->fallbackBaseUrl_ = nullptr;};
        inline string getFallbackBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fallbackBaseUrl_, "") };
        inline MiniPackageInfo& setFallbackBaseUrl(string fallbackBaseUrl) { DARABONBA_PTR_SET_VALUE(fallbackBaseUrl_, fallbackBaseUrl) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline MiniPackageInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline MiniPackageInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // h5Id Field Functions 
        bool hasH5Id() const { return this->h5Id_ != nullptr;};
        void deleteH5Id() { this->h5Id_ = nullptr;};
        inline string getH5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
        inline MiniPackageInfo& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


        // h5Name Field Functions 
        bool hasH5Name() const { return this->h5Name_ != nullptr;};
        void deleteH5Name() { this->h5Name_ = nullptr;};
        inline string getH5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
        inline MiniPackageInfo& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


        // h5Version Field Functions 
        bool hasH5Version() const { return this->h5Version_ != nullptr;};
        void deleteH5Version() { this->h5Version_ = nullptr;};
        inline string getH5Version() const { DARABONBA_PTR_GET_DEFAULT(h5Version_, "") };
        inline MiniPackageInfo& setH5Version(string h5Version) { DARABONBA_PTR_SET_VALUE(h5Version_, h5Version) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MiniPackageInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // installType Field Functions 
        bool hasInstallType() const { return this->installType_ != nullptr;};
        void deleteInstallType() { this->installType_ = nullptr;};
        inline int64_t getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0L) };
        inline MiniPackageInfo& setInstallType(int64_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


        // mainUrl Field Functions 
        bool hasMainUrl() const { return this->mainUrl_ != nullptr;};
        void deleteMainUrl() { this->mainUrl_ = nullptr;};
        inline string getMainUrl() const { DARABONBA_PTR_GET_DEFAULT(mainUrl_, "") };
        inline MiniPackageInfo& setMainUrl(string mainUrl) { DARABONBA_PTR_SET_VALUE(mainUrl_, mainUrl) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline MiniPackageInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline int64_t getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, 0L) };
        inline MiniPackageInfo& setPackageType(int64_t packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline MiniPackageInfo& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // publishPeriod Field Functions 
        bool hasPublishPeriod() const { return this->publishPeriod_ != nullptr;};
        void deletePublishPeriod() { this->publishPeriod_ = nullptr;};
        inline int64_t getPublishPeriod() const { DARABONBA_PTR_GET_DEFAULT(publishPeriod_, 0L) };
        inline MiniPackageInfo& setPublishPeriod(int64_t publishPeriod) { DARABONBA_PTR_SET_VALUE(publishPeriod_, publishPeriod) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
        inline MiniPackageInfo& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline MiniPackageInfo& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> appCode_ {};
        shared_ptr<int64_t> autoInstall_ {};
        shared_ptr<string> clientVersionMax_ {};
        shared_ptr<string> clientVersionMin_ {};
        shared_ptr<string> downloadUrl_ {};
        shared_ptr<string> extendInfo_ {};
        shared_ptr<string> extraData_ {};
        shared_ptr<string> fallbackBaseUrl_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> h5Id_ {};
        shared_ptr<string> h5Name_ {};
        shared_ptr<string> h5Version_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> installType_ {};
        shared_ptr<string> mainUrl_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<int64_t> packageType_ {};
        shared_ptr<string> platform_ {};
        shared_ptr<int64_t> publishPeriod_ {};
        shared_ptr<int64_t> resourceType_ {};
        shared_ptr<int64_t> status_ {};
      };

      virtual bool empty() const override { return this->miniPackageInfo_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // miniPackageInfo Field Functions 
      bool hasMiniPackageInfo() const { return this->miniPackageInfo_ != nullptr;};
      void deleteMiniPackageInfo() { this->miniPackageInfo_ = nullptr;};
      inline const QueryMiniPackageResult::MiniPackageInfo & getMiniPackageInfo() const { DARABONBA_PTR_GET_CONST(miniPackageInfo_, QueryMiniPackageResult::MiniPackageInfo) };
      inline QueryMiniPackageResult::MiniPackageInfo getMiniPackageInfo() { DARABONBA_PTR_GET(miniPackageInfo_, QueryMiniPackageResult::MiniPackageInfo) };
      inline QueryMiniPackageResult& setMiniPackageInfo(const QueryMiniPackageResult::MiniPackageInfo & miniPackageInfo) { DARABONBA_PTR_SET_VALUE(miniPackageInfo_, miniPackageInfo) };
      inline QueryMiniPackageResult& setMiniPackageInfo(QueryMiniPackageResult::MiniPackageInfo && miniPackageInfo) { DARABONBA_PTR_SET_RVALUE(miniPackageInfo_, miniPackageInfo) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline QueryMiniPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline QueryMiniPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<QueryMiniPackageResult::MiniPackageInfo> miniPackageInfo_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->queryMiniPackageResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // queryMiniPackageResult Field Functions 
    bool hasQueryMiniPackageResult() const { return this->queryMiniPackageResult_ != nullptr;};
    void deleteQueryMiniPackageResult() { this->queryMiniPackageResult_ = nullptr;};
    inline const QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult & getQueryMiniPackageResult() const { DARABONBA_PTR_GET_CONST(queryMiniPackageResult_, QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult getQueryMiniPackageResult() { DARABONBA_PTR_GET(queryMiniPackageResult_, QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBody& setQueryMiniPackageResult(const QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult & queryMiniPackageResult) { DARABONBA_PTR_SET_VALUE(queryMiniPackageResult_, queryMiniPackageResult) };
    inline QueryMcubeMiniPackageResponseBody& setQueryMiniPackageResult(QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult && queryMiniPackageResult) { DARABONBA_PTR_SET_RVALUE(queryMiniPackageResult_, queryMiniPackageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMcubeMiniPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMcubeMiniPackageResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMcubeMiniPackageResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<QueryMcubeMiniPackageResponseBody::QueryMiniPackageResult> queryMiniPackageResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
