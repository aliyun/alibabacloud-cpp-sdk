// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMAPPCENTERAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMappCenterAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMappCenterAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QueryMappCenterAppResult, queryMappCenterAppResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMappCenterAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QueryMappCenterAppResult, queryMappCenterAppResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMappCenterAppResponseBody() = default ;
    QueryMappCenterAppResponseBody(const QueryMappCenterAppResponseBody &) = default ;
    QueryMappCenterAppResponseBody(QueryMappCenterAppResponseBody &&) = default ;
    QueryMappCenterAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMappCenterAppResponseBody() = default ;
    QueryMappCenterAppResponseBody& operator=(const QueryMappCenterAppResponseBody &) = default ;
    QueryMappCenterAppResponseBody& operator=(QueryMappCenterAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryMappCenterAppResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryMappCenterAppResult& obj) { 
        DARABONBA_PTR_TO_JSON(MappCenterApp, mappCenterApp_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, QueryMappCenterAppResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MappCenterApp, mappCenterApp_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      QueryMappCenterAppResult() = default ;
      QueryMappCenterAppResult(const QueryMappCenterAppResult &) = default ;
      QueryMappCenterAppResult(QueryMappCenterAppResult &&) = default ;
      QueryMappCenterAppResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryMappCenterAppResult() = default ;
      QueryMappCenterAppResult& operator=(const QueryMappCenterAppResult &) = default ;
      QueryMappCenterAppResult& operator=(QueryMappCenterAppResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MappCenterApp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MappCenterApp& obj) { 
          DARABONBA_PTR_TO_JSON(AndroidConfig, androidConfig_);
          DARABONBA_PTR_TO_JSON(AppDesc, appDesc_);
          DARABONBA_PTR_TO_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IosConfig, iosConfig_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(MonitorJson, monitorJson_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MappCenterApp& obj) { 
          DARABONBA_PTR_FROM_JSON(AndroidConfig, androidConfig_);
          DARABONBA_PTR_FROM_JSON(AppDesc, appDesc_);
          DARABONBA_PTR_FROM_JSON(AppIcon, appIcon_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IosConfig, iosConfig_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(MonitorJson, monitorJson_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MappCenterApp() = default ;
        MappCenterApp(const MappCenterApp &) = default ;
        MappCenterApp(MappCenterApp &&) = default ;
        MappCenterApp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MappCenterApp() = default ;
        MappCenterApp& operator=(const MappCenterApp &) = default ;
        MappCenterApp& operator=(MappCenterApp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IosConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IosConfig& obj) { 
            DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
          };
          friend void from_json(const Darabonba::Json& j, IosConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
          };
          IosConfig() = default ;
          IosConfig(const IosConfig &) = default ;
          IosConfig(IosConfig &&) = default ;
          IosConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IosConfig() = default ;
          IosConfig& operator=(const IosConfig &) = default ;
          IosConfig& operator=(IosConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bundleId_ == nullptr; };
          // bundleId Field Functions 
          bool hasBundleId() const { return this->bundleId_ != nullptr;};
          void deleteBundleId() { this->bundleId_ = nullptr;};
          inline string getBundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
          inline IosConfig& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


        protected:
          shared_ptr<string> bundleId_ {};
        };

        class AndroidConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AndroidConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CertRSA, certRSA_);
            DARABONBA_PTR_TO_JSON(PackageName, packageName_);
          };
          friend void from_json(const Darabonba::Json& j, AndroidConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CertRSA, certRSA_);
            DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
          };
          AndroidConfig() = default ;
          AndroidConfig(const AndroidConfig &) = default ;
          AndroidConfig(AndroidConfig &&) = default ;
          AndroidConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AndroidConfig() = default ;
          AndroidConfig& operator=(const AndroidConfig &) = default ;
          AndroidConfig& operator=(AndroidConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certRSA_ == nullptr
        && this->packageName_ == nullptr; };
          // certRSA Field Functions 
          bool hasCertRSA() const { return this->certRSA_ != nullptr;};
          void deleteCertRSA() { this->certRSA_ = nullptr;};
          inline string getCertRSA() const { DARABONBA_PTR_GET_DEFAULT(certRSA_, "") };
          inline AndroidConfig& setCertRSA(string certRSA) { DARABONBA_PTR_SET_VALUE(certRSA_, certRSA) };


          // packageName Field Functions 
          bool hasPackageName() const { return this->packageName_ != nullptr;};
          void deletePackageName() { this->packageName_ = nullptr;};
          inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
          inline AndroidConfig& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


        protected:
          shared_ptr<string> certRSA_ {};
          shared_ptr<string> packageName_ {};
        };

        virtual bool empty() const override { return this->androidConfig_ == nullptr
        && this->appDesc_ == nullptr && this->appIcon_ == nullptr && this->appId_ == nullptr && this->appName_ == nullptr && this->appSecret_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->iosConfig_ == nullptr
        && this->modifier_ == nullptr && this->monitorJson_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr; };
        // androidConfig Field Functions 
        bool hasAndroidConfig() const { return this->androidConfig_ != nullptr;};
        void deleteAndroidConfig() { this->androidConfig_ = nullptr;};
        inline const MappCenterApp::AndroidConfig & getAndroidConfig() const { DARABONBA_PTR_GET_CONST(androidConfig_, MappCenterApp::AndroidConfig) };
        inline MappCenterApp::AndroidConfig getAndroidConfig() { DARABONBA_PTR_GET(androidConfig_, MappCenterApp::AndroidConfig) };
        inline MappCenterApp& setAndroidConfig(const MappCenterApp::AndroidConfig & androidConfig) { DARABONBA_PTR_SET_VALUE(androidConfig_, androidConfig) };
        inline MappCenterApp& setAndroidConfig(MappCenterApp::AndroidConfig && androidConfig) { DARABONBA_PTR_SET_RVALUE(androidConfig_, androidConfig) };


        // appDesc Field Functions 
        bool hasAppDesc() const { return this->appDesc_ != nullptr;};
        void deleteAppDesc() { this->appDesc_ = nullptr;};
        inline string getAppDesc() const { DARABONBA_PTR_GET_DEFAULT(appDesc_, "") };
        inline MappCenterApp& setAppDesc(string appDesc) { DARABONBA_PTR_SET_VALUE(appDesc_, appDesc) };


        // appIcon Field Functions 
        bool hasAppIcon() const { return this->appIcon_ != nullptr;};
        void deleteAppIcon() { this->appIcon_ = nullptr;};
        inline string getAppIcon() const { DARABONBA_PTR_GET_DEFAULT(appIcon_, "") };
        inline MappCenterApp& setAppIcon(string appIcon) { DARABONBA_PTR_SET_VALUE(appIcon_, appIcon) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline MappCenterApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline MappCenterApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline MappCenterApp& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline MappCenterApp& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline MappCenterApp& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline MappCenterApp& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline MappCenterApp& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // iosConfig Field Functions 
        bool hasIosConfig() const { return this->iosConfig_ != nullptr;};
        void deleteIosConfig() { this->iosConfig_ = nullptr;};
        inline const MappCenterApp::IosConfig & getIosConfig() const { DARABONBA_PTR_GET_CONST(iosConfig_, MappCenterApp::IosConfig) };
        inline MappCenterApp::IosConfig getIosConfig() { DARABONBA_PTR_GET(iosConfig_, MappCenterApp::IosConfig) };
        inline MappCenterApp& setIosConfig(const MappCenterApp::IosConfig & iosConfig) { DARABONBA_PTR_SET_VALUE(iosConfig_, iosConfig) };
        inline MappCenterApp& setIosConfig(MappCenterApp::IosConfig && iosConfig) { DARABONBA_PTR_SET_RVALUE(iosConfig_, iosConfig) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline MappCenterApp& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // monitorJson Field Functions 
        bool hasMonitorJson() const { return this->monitorJson_ != nullptr;};
        void deleteMonitorJson() { this->monitorJson_ = nullptr;};
        inline string getMonitorJson() const { DARABONBA_PTR_GET_DEFAULT(monitorJson_, "") };
        inline MappCenterApp& setMonitorJson(string monitorJson) { DARABONBA_PTR_SET_VALUE(monitorJson_, monitorJson) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline MappCenterApp& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline MappCenterApp& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline MappCenterApp& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<MappCenterApp::AndroidConfig> androidConfig_ {};
        shared_ptr<string> appDesc_ {};
        shared_ptr<string> appIcon_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> appSecret_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<MappCenterApp::IosConfig> iosConfig_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> monitorJson_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<int64_t> type_ {};
      };

      virtual bool empty() const override { return this->mappCenterApp_ == nullptr
        && this->resultMsg_ == nullptr && this->success_ == nullptr; };
      // mappCenterApp Field Functions 
      bool hasMappCenterApp() const { return this->mappCenterApp_ != nullptr;};
      void deleteMappCenterApp() { this->mappCenterApp_ = nullptr;};
      inline const QueryMappCenterAppResult::MappCenterApp & getMappCenterApp() const { DARABONBA_PTR_GET_CONST(mappCenterApp_, QueryMappCenterAppResult::MappCenterApp) };
      inline QueryMappCenterAppResult::MappCenterApp getMappCenterApp() { DARABONBA_PTR_GET(mappCenterApp_, QueryMappCenterAppResult::MappCenterApp) };
      inline QueryMappCenterAppResult& setMappCenterApp(const QueryMappCenterAppResult::MappCenterApp & mappCenterApp) { DARABONBA_PTR_SET_VALUE(mappCenterApp_, mappCenterApp) };
      inline QueryMappCenterAppResult& setMappCenterApp(QueryMappCenterAppResult::MappCenterApp && mappCenterApp) { DARABONBA_PTR_SET_RVALUE(mappCenterApp_, mappCenterApp) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline QueryMappCenterAppResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline QueryMappCenterAppResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<QueryMappCenterAppResult::MappCenterApp> mappCenterApp_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->queryMappCenterAppResult_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
    // queryMappCenterAppResult Field Functions 
    bool hasQueryMappCenterAppResult() const { return this->queryMappCenterAppResult_ != nullptr;};
    void deleteQueryMappCenterAppResult() { this->queryMappCenterAppResult_ = nullptr;};
    inline const QueryMappCenterAppResponseBody::QueryMappCenterAppResult & getQueryMappCenterAppResult() const { DARABONBA_PTR_GET_CONST(queryMappCenterAppResult_, QueryMappCenterAppResponseBody::QueryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBody::QueryMappCenterAppResult getQueryMappCenterAppResult() { DARABONBA_PTR_GET(queryMappCenterAppResult_, QueryMappCenterAppResponseBody::QueryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBody& setQueryMappCenterAppResult(const QueryMappCenterAppResponseBody::QueryMappCenterAppResult & queryMappCenterAppResult) { DARABONBA_PTR_SET_VALUE(queryMappCenterAppResult_, queryMappCenterAppResult) };
    inline QueryMappCenterAppResponseBody& setQueryMappCenterAppResult(QueryMappCenterAppResponseBody::QueryMappCenterAppResult && queryMappCenterAppResult) { DARABONBA_PTR_SET_RVALUE(queryMappCenterAppResult_, queryMappCenterAppResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMappCenterAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMappCenterAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMappCenterAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<QueryMappCenterAppResponseBody::QueryMappCenterAppResult> queryMappCenterAppResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
