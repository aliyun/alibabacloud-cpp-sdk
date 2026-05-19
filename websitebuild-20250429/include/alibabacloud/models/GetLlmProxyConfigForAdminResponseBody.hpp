// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLLMPROXYCONFIGFORADMINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLLMPROXYCONFIGFORADMINRESPONSEBODY_HPP_
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
  class GetLlmProxyConfigForAdminResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLlmProxyConfigForAdminResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetLlmProxyConfigForAdminResponseBody& obj) { 
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
    GetLlmProxyConfigForAdminResponseBody() = default ;
    GetLlmProxyConfigForAdminResponseBody(const GetLlmProxyConfigForAdminResponseBody &) = default ;
    GetLlmProxyConfigForAdminResponseBody(GetLlmProxyConfigForAdminResponseBody &&) = default ;
    GetLlmProxyConfigForAdminResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLlmProxyConfigForAdminResponseBody() = default ;
    GetLlmProxyConfigForAdminResponseBody& operator=(const GetLlmProxyConfigForAdminResponseBody &) = default ;
    GetLlmProxyConfigForAdminResponseBody& operator=(GetLlmProxyConfigForAdminResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedModels, allowedModels_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(BlockedModels, blockedModels_);
        DARABONBA_PTR_TO_JSON(Capability, capability_);
        DARABONBA_PTR_TO_JSON(DailyLimit, dailyLimit_);
        DARABONBA_PTR_TO_JSON(DailyTokenLimit, dailyTokenLimit_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
        DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
        DARABONBA_PTR_TO_JSON(RpmLimit, rpmLimit_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SuspendReason, suspendReason_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedModels, allowedModels_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(BlockedModels, blockedModels_);
        DARABONBA_PTR_FROM_JSON(Capability, capability_);
        DARABONBA_PTR_FROM_JSON(DailyLimit, dailyLimit_);
        DARABONBA_PTR_FROM_JSON(DailyTokenLimit, dailyTokenLimit_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
        DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
        DARABONBA_PTR_FROM_JSON(RpmLimit, rpmLimit_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SuspendReason, suspendReason_);
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
      virtual bool empty() const override { return this->allowedModels_ == nullptr
        && this->bizId_ == nullptr && this->blockedModels_ == nullptr && this->capability_ == nullptr && this->dailyLimit_ == nullptr && this->dailyTokenLimit_ == nullptr
        && this->enabled_ == nullptr && this->extend_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->rpmLimit_ == nullptr && this->status_ == nullptr && this->suspendReason_ == nullptr; };
      // allowedModels Field Functions 
      bool hasAllowedModels() const { return this->allowedModels_ != nullptr;};
      void deleteAllowedModels() { this->allowedModels_ = nullptr;};
      inline string getAllowedModels() const { DARABONBA_PTR_GET_DEFAULT(allowedModels_, "") };
      inline Module& setAllowedModels(string allowedModels) { DARABONBA_PTR_SET_VALUE(allowedModels_, allowedModels) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // blockedModels Field Functions 
      bool hasBlockedModels() const { return this->blockedModels_ != nullptr;};
      void deleteBlockedModels() { this->blockedModels_ = nullptr;};
      inline string getBlockedModels() const { DARABONBA_PTR_GET_DEFAULT(blockedModels_, "") };
      inline Module& setBlockedModels(string blockedModels) { DARABONBA_PTR_SET_VALUE(blockedModels_, blockedModels) };


      // capability Field Functions 
      bool hasCapability() const { return this->capability_ != nullptr;};
      void deleteCapability() { this->capability_ = nullptr;};
      inline string getCapability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
      inline Module& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


      // dailyLimit Field Functions 
      bool hasDailyLimit() const { return this->dailyLimit_ != nullptr;};
      void deleteDailyLimit() { this->dailyLimit_ = nullptr;};
      inline int32_t getDailyLimit() const { DARABONBA_PTR_GET_DEFAULT(dailyLimit_, 0) };
      inline Module& setDailyLimit(int32_t dailyLimit) { DARABONBA_PTR_SET_VALUE(dailyLimit_, dailyLimit) };


      // dailyTokenLimit Field Functions 
      bool hasDailyTokenLimit() const { return this->dailyTokenLimit_ != nullptr;};
      void deleteDailyTokenLimit() { this->dailyTokenLimit_ = nullptr;};
      inline int64_t getDailyTokenLimit() const { DARABONBA_PTR_GET_DEFAULT(dailyTokenLimit_, 0L) };
      inline Module& setDailyTokenLimit(int64_t dailyTokenLimit) { DARABONBA_PTR_SET_VALUE(dailyTokenLimit_, dailyTokenLimit) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Module& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Module& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipBlacklist Field Functions 
      bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
      void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
      inline string getIpBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
      inline Module& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline Module& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


      // rpmLimit Field Functions 
      bool hasRpmLimit() const { return this->rpmLimit_ != nullptr;};
      void deleteRpmLimit() { this->rpmLimit_ = nullptr;};
      inline int32_t getRpmLimit() const { DARABONBA_PTR_GET_DEFAULT(rpmLimit_, 0) };
      inline Module& setRpmLimit(int32_t rpmLimit) { DARABONBA_PTR_SET_VALUE(rpmLimit_, rpmLimit) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // suspendReason Field Functions 
      bool hasSuspendReason() const { return this->suspendReason_ != nullptr;};
      void deleteSuspendReason() { this->suspendReason_ = nullptr;};
      inline string getSuspendReason() const { DARABONBA_PTR_GET_DEFAULT(suspendReason_, "") };
      inline Module& setSuspendReason(string suspendReason) { DARABONBA_PTR_SET_VALUE(suspendReason_, suspendReason) };


    protected:
      shared_ptr<string> allowedModels_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> blockedModels_ {};
      shared_ptr<string> capability_ {};
      shared_ptr<int32_t> dailyLimit_ {};
      shared_ptr<int64_t> dailyTokenLimit_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> extend_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> ipBlacklist_ {};
      shared_ptr<string> ipWhitelist_ {};
      shared_ptr<int32_t> rpmLimit_ {};
      // trial,draft,live,refunded,expired,released
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> suspendReason_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetLlmProxyConfigForAdminResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetLlmProxyConfigForAdminResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetLlmProxyConfigForAdminResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetLlmProxyConfigForAdminResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetLlmProxyConfigForAdminResponseBody::Module) };
    inline GetLlmProxyConfigForAdminResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetLlmProxyConfigForAdminResponseBody::Module) };
    inline GetLlmProxyConfigForAdminResponseBody& setModule(const GetLlmProxyConfigForAdminResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetLlmProxyConfigForAdminResponseBody& setModule(GetLlmProxyConfigForAdminResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetLlmProxyConfigForAdminResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetLlmProxyConfigForAdminResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetLlmProxyConfigForAdminResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
