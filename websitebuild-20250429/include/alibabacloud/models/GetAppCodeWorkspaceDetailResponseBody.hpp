// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCODEWORKSPACEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCODEWORKSPACEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppCodeWorkspaceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppCodeWorkspaceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppCodeWorkspaceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetAppCodeWorkspaceDetailResponseBody() = default ;
    GetAppCodeWorkspaceDetailResponseBody(const GetAppCodeWorkspaceDetailResponseBody &) = default ;
    GetAppCodeWorkspaceDetailResponseBody(GetAppCodeWorkspaceDetailResponseBody &&) = default ;
    GetAppCodeWorkspaceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppCodeWorkspaceDetailResponseBody() = default ;
    GetAppCodeWorkspaceDetailResponseBody& operator=(const GetAppCodeWorkspaceDetailResponseBody &) = default ;
    GetAppCodeWorkspaceDetailResponseBody& operator=(GetAppCodeWorkspaceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveLogicalNumber, activeLogicalNumber_);
        DARABONBA_PTR_TO_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_TO_JSON(IsDirty, isDirty_);
        DARABONBA_PTR_TO_JSON(MaxLogicalNumber, maxLogicalNumber_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveLogicalNumber, activeLogicalNumber_);
        DARABONBA_PTR_FROM_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_FROM_JSON(IsDirty, isDirty_);
        DARABONBA_PTR_FROM_JSON(MaxLogicalNumber, maxLogicalNumber_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Snapshots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
          DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_TO_JSON(LogicalNumber, logicalNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
          DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
          DARABONBA_PTR_FROM_JSON(LogicalNumber, logicalNumber_);
        };
        Snapshots() = default ;
        Snapshots(const Snapshots &) = default ;
        Snapshots(Snapshots &&) = default ;
        Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Snapshots() = default ;
        Snapshots& operator=(const Snapshots &) = default ;
        Snapshots& operator=(Snapshots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeLog_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->logicalNumber_ == nullptr; };
        // changeLog Field Functions 
        bool hasChangeLog() const { return this->changeLog_ != nullptr;};
        void deleteChangeLog() { this->changeLog_ = nullptr;};
        inline string getChangeLog() const { DARABONBA_PTR_GET_DEFAULT(changeLog_, "") };
        inline Snapshots& setChangeLog(string changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };


        // gmtCreateTime Field Functions 
        bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
        void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
        inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
        inline Snapshots& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


        // logicalNumber Field Functions 
        bool hasLogicalNumber() const { return this->logicalNumber_ != nullptr;};
        void deleteLogicalNumber() { this->logicalNumber_ = nullptr;};
        inline int32_t getLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(logicalNumber_, 0) };
        inline Snapshots& setLogicalNumber(int32_t logicalNumber) { DARABONBA_PTR_SET_VALUE(logicalNumber_, logicalNumber) };


      protected:
        // SDK change log
        shared_ptr<string> changeLog_ {};
        // Creation UTC time in ISO8601 format.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> gmtCreateTime_ {};
        // Logical value
        shared_ptr<int32_t> logicalNumber_ {};
      };

      virtual bool empty() const override { return this->activeLogicalNumber_ == nullptr
        && this->commitHash_ == nullptr && this->isDirty_ == nullptr && this->maxLogicalNumber_ == nullptr && this->siteId_ == nullptr && this->snapshots_ == nullptr; };
      // activeLogicalNumber Field Functions 
      bool hasActiveLogicalNumber() const { return this->activeLogicalNumber_ != nullptr;};
      void deleteActiveLogicalNumber() { this->activeLogicalNumber_ = nullptr;};
      inline int32_t getActiveLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(activeLogicalNumber_, 0) };
      inline Module& setActiveLogicalNumber(int32_t activeLogicalNumber) { DARABONBA_PTR_SET_VALUE(activeLogicalNumber_, activeLogicalNumber) };


      // commitHash Field Functions 
      bool hasCommitHash() const { return this->commitHash_ != nullptr;};
      void deleteCommitHash() { this->commitHash_ = nullptr;};
      inline string getCommitHash() const { DARABONBA_PTR_GET_DEFAULT(commitHash_, "") };
      inline Module& setCommitHash(string commitHash) { DARABONBA_PTR_SET_VALUE(commitHash_, commitHash) };


      // isDirty Field Functions 
      bool hasIsDirty() const { return this->isDirty_ != nullptr;};
      void deleteIsDirty() { this->isDirty_ = nullptr;};
      inline bool getIsDirty() const { DARABONBA_PTR_GET_DEFAULT(isDirty_, false) };
      inline Module& setIsDirty(bool isDirty) { DARABONBA_PTR_SET_VALUE(isDirty_, isDirty) };


      // maxLogicalNumber Field Functions 
      bool hasMaxLogicalNumber() const { return this->maxLogicalNumber_ != nullptr;};
      void deleteMaxLogicalNumber() { this->maxLogicalNumber_ = nullptr;};
      inline int32_t getMaxLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(maxLogicalNumber_, 0) };
      inline Module& setMaxLogicalNumber(int32_t maxLogicalNumber) { DARABONBA_PTR_SET_VALUE(maxLogicalNumber_, maxLogicalNumber) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline Module& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<Module::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<Module::Snapshots>) };
      inline vector<Module::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<Module::Snapshots>) };
      inline Module& setSnapshots(const vector<Module::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline Module& setSnapshots(vector<Module::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    protected:
      // 11111
      shared_ptr<int32_t> activeLogicalNumber_ {};
      shared_ptr<string> commitHash_ {};
      // true
      shared_ptr<bool> isDirty_ {};
      // 1111
      shared_ptr<int32_t> maxLogicalNumber_ {};
      // Site ID, which can be obtained by invoking the [ListSites](~~ListSites~~) API.
      shared_ptr<string> siteId_ {};
      // API Guide information.
      shared_ptr<vector<Module::Snapshots>> snapshots_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppCodeWorkspaceDetailResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppCodeWorkspaceDetailResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppCodeWorkspaceDetailResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppCodeWorkspaceDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppCodeWorkspaceDetailResponseBody::Module) };
    inline GetAppCodeWorkspaceDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppCodeWorkspaceDetailResponseBody::Module) };
    inline GetAppCodeWorkspaceDetailResponseBody& setModule(const GetAppCodeWorkspaceDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppCodeWorkspaceDetailResponseBody& setModule(GetAppCodeWorkspaceDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppCodeWorkspaceDetailResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppCodeWorkspaceDetailResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Detailed reason for access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed. Valid values:  
    // - false: Retry is not allowed.  
    // - true: Retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // App name.
    shared_ptr<string> appName_ {};
    // Dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // Dynamic error message, used to replace the `%s` placeholder in the **ErrMessage** error message.  
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, it indicates that the provided request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // Faulty parameters
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Application module
    shared_ptr<GetAppCodeWorkspaceDetailResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Error code
    shared_ptr<string> rootErrorCode_ {};
    // Abnormal message
    shared_ptr<string> rootErrorMsg_ {};
    // Reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
