// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUPABASEINSTANCEINFOFORADMINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUPABASEINSTANCEINFOFORADMINRESPONSEBODY_HPP_
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
  class QuerySupabaseInstanceInfoForAdminResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySupabaseInstanceInfoForAdminResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QuerySupabaseInstanceInfoForAdminResponseBody& obj) { 
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
    QuerySupabaseInstanceInfoForAdminResponseBody() = default ;
    QuerySupabaseInstanceInfoForAdminResponseBody(const QuerySupabaseInstanceInfoForAdminResponseBody &) = default ;
    QuerySupabaseInstanceInfoForAdminResponseBody(QuerySupabaseInstanceInfoForAdminResponseBody &&) = default ;
    QuerySupabaseInstanceInfoForAdminResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySupabaseInstanceInfoForAdminResponseBody() = default ;
    QuerySupabaseInstanceInfoForAdminResponseBody& operator=(const QuerySupabaseInstanceInfoForAdminResponseBody &) = default ;
    QuerySupabaseInstanceInfoForAdminResponseBody& operator=(QuerySupabaseInstanceInfoForAdminResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(DbInstanceCreateTime, dbInstanceCreateTime_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(DbPublicUrl, dbPublicUrl_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(InstanceCreateFinishedTime, instanceCreateFinishedTime_);
        DARABONBA_PTR_TO_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(RdsDatabasePassword, rdsDatabasePassword_);
        DARABONBA_PTR_TO_JSON(ServiceKey, serviceKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupabaseDashboardPassword, supabaseDashboardPassword_);
        DARABONBA_PTR_TO_JSON(SupabaseDashboardUserName, supabaseDashboardUserName_);
        DARABONBA_PTR_TO_JSON(SupabaseInstanceCreateTime, supabaseInstanceCreateTime_);
        DARABONBA_PTR_TO_JSON(SupabaseInstanceId, supabaseInstanceId_);
        DARABONBA_PTR_TO_JSON(SupabaseKongUrl, supabaseKongUrl_);
        DARABONBA_PTR_TO_JSON(SupabasePrivateIp, supabasePrivateIp_);
        DARABONBA_PTR_TO_JSON(SupabasePublicIp, supabasePublicIp_);
        DARABONBA_PTR_TO_JSON(SupabasePublicUrl, supabasePublicUrl_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceCreateTime, dbInstanceCreateTime_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(DbPublicUrl, dbPublicUrl_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(InstanceCreateFinishedTime, instanceCreateFinishedTime_);
        DARABONBA_PTR_FROM_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(RdsDatabasePassword, rdsDatabasePassword_);
        DARABONBA_PTR_FROM_JSON(ServiceKey, serviceKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupabaseDashboardPassword, supabaseDashboardPassword_);
        DARABONBA_PTR_FROM_JSON(SupabaseDashboardUserName, supabaseDashboardUserName_);
        DARABONBA_PTR_FROM_JSON(SupabaseInstanceCreateTime, supabaseInstanceCreateTime_);
        DARABONBA_PTR_FROM_JSON(SupabaseInstanceId, supabaseInstanceId_);
        DARABONBA_PTR_FROM_JSON(SupabaseKongUrl, supabaseKongUrl_);
        DARABONBA_PTR_FROM_JSON(SupabasePrivateIp, supabasePrivateIp_);
        DARABONBA_PTR_FROM_JSON(SupabasePublicIp, supabasePublicIp_);
        DARABONBA_PTR_FROM_JSON(SupabasePublicUrl, supabasePublicUrl_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->anonKey_ == nullptr
        && this->bizId_ == nullptr && this->dbInstanceCreateTime_ == nullptr && this->dbInstanceId_ == nullptr && this->dbPublicUrl_ == nullptr && this->dbType_ == nullptr
        && this->extra_ == nullptr && this->instanceCreateFinishedTime_ == nullptr && this->instanceCreateStatus_ == nullptr && this->isDeleted_ == nullptr && this->rdsDatabasePassword_ == nullptr
        && this->serviceKey_ == nullptr && this->status_ == nullptr && this->supabaseDashboardPassword_ == nullptr && this->supabaseDashboardUserName_ == nullptr && this->supabaseInstanceCreateTime_ == nullptr
        && this->supabaseInstanceId_ == nullptr && this->supabaseKongUrl_ == nullptr && this->supabasePrivateIp_ == nullptr && this->supabasePublicIp_ == nullptr && this->supabasePublicUrl_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // anonKey Field Functions 
      bool hasAnonKey() const { return this->anonKey_ != nullptr;};
      void deleteAnonKey() { this->anonKey_ = nullptr;};
      inline string getAnonKey() const { DARABONBA_PTR_GET_DEFAULT(anonKey_, "") };
      inline Module& setAnonKey(string anonKey) { DARABONBA_PTR_SET_VALUE(anonKey_, anonKey) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // dbInstanceCreateTime Field Functions 
      bool hasDbInstanceCreateTime() const { return this->dbInstanceCreateTime_ != nullptr;};
      void deleteDbInstanceCreateTime() { this->dbInstanceCreateTime_ = nullptr;};
      inline string getDbInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceCreateTime_, "") };
      inline Module& setDbInstanceCreateTime(string dbInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(dbInstanceCreateTime_, dbInstanceCreateTime) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline Module& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // dbPublicUrl Field Functions 
      bool hasDbPublicUrl() const { return this->dbPublicUrl_ != nullptr;};
      void deleteDbPublicUrl() { this->dbPublicUrl_ = nullptr;};
      inline string getDbPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(dbPublicUrl_, "") };
      inline Module& setDbPublicUrl(string dbPublicUrl) { DARABONBA_PTR_SET_VALUE(dbPublicUrl_, dbPublicUrl) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Module& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Module& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // instanceCreateFinishedTime Field Functions 
      bool hasInstanceCreateFinishedTime() const { return this->instanceCreateFinishedTime_ != nullptr;};
      void deleteInstanceCreateFinishedTime() { this->instanceCreateFinishedTime_ = nullptr;};
      inline string getInstanceCreateFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateFinishedTime_, "") };
      inline Module& setInstanceCreateFinishedTime(string instanceCreateFinishedTime) { DARABONBA_PTR_SET_VALUE(instanceCreateFinishedTime_, instanceCreateFinishedTime) };


      // instanceCreateStatus Field Functions 
      bool hasInstanceCreateStatus() const { return this->instanceCreateStatus_ != nullptr;};
      void deleteInstanceCreateStatus() { this->instanceCreateStatus_ = nullptr;};
      inline string getInstanceCreateStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateStatus_, "") };
      inline Module& setInstanceCreateStatus(string instanceCreateStatus) { DARABONBA_PTR_SET_VALUE(instanceCreateStatus_, instanceCreateStatus) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
      inline Module& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // rdsDatabasePassword Field Functions 
      bool hasRdsDatabasePassword() const { return this->rdsDatabasePassword_ != nullptr;};
      void deleteRdsDatabasePassword() { this->rdsDatabasePassword_ = nullptr;};
      inline string getRdsDatabasePassword() const { DARABONBA_PTR_GET_DEFAULT(rdsDatabasePassword_, "") };
      inline Module& setRdsDatabasePassword(string rdsDatabasePassword) { DARABONBA_PTR_SET_VALUE(rdsDatabasePassword_, rdsDatabasePassword) };


      // serviceKey Field Functions 
      bool hasServiceKey() const { return this->serviceKey_ != nullptr;};
      void deleteServiceKey() { this->serviceKey_ = nullptr;};
      inline string getServiceKey() const { DARABONBA_PTR_GET_DEFAULT(serviceKey_, "") };
      inline Module& setServiceKey(string serviceKey) { DARABONBA_PTR_SET_VALUE(serviceKey_, serviceKey) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supabaseDashboardPassword Field Functions 
      bool hasSupabaseDashboardPassword() const { return this->supabaseDashboardPassword_ != nullptr;};
      void deleteSupabaseDashboardPassword() { this->supabaseDashboardPassword_ = nullptr;};
      inline string getSupabaseDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(supabaseDashboardPassword_, "") };
      inline Module& setSupabaseDashboardPassword(string supabaseDashboardPassword) { DARABONBA_PTR_SET_VALUE(supabaseDashboardPassword_, supabaseDashboardPassword) };


      // supabaseDashboardUserName Field Functions 
      bool hasSupabaseDashboardUserName() const { return this->supabaseDashboardUserName_ != nullptr;};
      void deleteSupabaseDashboardUserName() { this->supabaseDashboardUserName_ = nullptr;};
      inline string getSupabaseDashboardUserName() const { DARABONBA_PTR_GET_DEFAULT(supabaseDashboardUserName_, "") };
      inline Module& setSupabaseDashboardUserName(string supabaseDashboardUserName) { DARABONBA_PTR_SET_VALUE(supabaseDashboardUserName_, supabaseDashboardUserName) };


      // supabaseInstanceCreateTime Field Functions 
      bool hasSupabaseInstanceCreateTime() const { return this->supabaseInstanceCreateTime_ != nullptr;};
      void deleteSupabaseInstanceCreateTime() { this->supabaseInstanceCreateTime_ = nullptr;};
      inline string getSupabaseInstanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(supabaseInstanceCreateTime_, "") };
      inline Module& setSupabaseInstanceCreateTime(string supabaseInstanceCreateTime) { DARABONBA_PTR_SET_VALUE(supabaseInstanceCreateTime_, supabaseInstanceCreateTime) };


      // supabaseInstanceId Field Functions 
      bool hasSupabaseInstanceId() const { return this->supabaseInstanceId_ != nullptr;};
      void deleteSupabaseInstanceId() { this->supabaseInstanceId_ = nullptr;};
      inline string getSupabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(supabaseInstanceId_, "") };
      inline Module& setSupabaseInstanceId(string supabaseInstanceId) { DARABONBA_PTR_SET_VALUE(supabaseInstanceId_, supabaseInstanceId) };


      // supabaseKongUrl Field Functions 
      bool hasSupabaseKongUrl() const { return this->supabaseKongUrl_ != nullptr;};
      void deleteSupabaseKongUrl() { this->supabaseKongUrl_ = nullptr;};
      inline string getSupabaseKongUrl() const { DARABONBA_PTR_GET_DEFAULT(supabaseKongUrl_, "") };
      inline Module& setSupabaseKongUrl(string supabaseKongUrl) { DARABONBA_PTR_SET_VALUE(supabaseKongUrl_, supabaseKongUrl) };


      // supabasePrivateIp Field Functions 
      bool hasSupabasePrivateIp() const { return this->supabasePrivateIp_ != nullptr;};
      void deleteSupabasePrivateIp() { this->supabasePrivateIp_ = nullptr;};
      inline string getSupabasePrivateIp() const { DARABONBA_PTR_GET_DEFAULT(supabasePrivateIp_, "") };
      inline Module& setSupabasePrivateIp(string supabasePrivateIp) { DARABONBA_PTR_SET_VALUE(supabasePrivateIp_, supabasePrivateIp) };


      // supabasePublicIp Field Functions 
      bool hasSupabasePublicIp() const { return this->supabasePublicIp_ != nullptr;};
      void deleteSupabasePublicIp() { this->supabasePublicIp_ = nullptr;};
      inline string getSupabasePublicIp() const { DARABONBA_PTR_GET_DEFAULT(supabasePublicIp_, "") };
      inline Module& setSupabasePublicIp(string supabasePublicIp) { DARABONBA_PTR_SET_VALUE(supabasePublicIp_, supabasePublicIp) };


      // supabasePublicUrl Field Functions 
      bool hasSupabasePublicUrl() const { return this->supabasePublicUrl_ != nullptr;};
      void deleteSupabasePublicUrl() { this->supabasePublicUrl_ = nullptr;};
      inline string getSupabasePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(supabasePublicUrl_, "") };
      inline Module& setSupabasePublicUrl(string supabasePublicUrl) { DARABONBA_PTR_SET_VALUE(supabasePublicUrl_, supabasePublicUrl) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Module& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> anonKey_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> dbInstanceCreateTime_ {};
      shared_ptr<string> dbInstanceId_ {};
      shared_ptr<string> dbPublicUrl_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> instanceCreateFinishedTime_ {};
      shared_ptr<string> instanceCreateStatus_ {};
      shared_ptr<int32_t> isDeleted_ {};
      shared_ptr<string> rdsDatabasePassword_ {};
      shared_ptr<string> serviceKey_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> supabaseDashboardPassword_ {};
      shared_ptr<string> supabaseDashboardUserName_ {};
      shared_ptr<string> supabaseInstanceCreateTime_ {};
      shared_ptr<string> supabaseInstanceId_ {};
      // Supabase Kong URL
      shared_ptr<string> supabaseKongUrl_ {};
      shared_ptr<string> supabasePrivateIp_ {};
      shared_ptr<string> supabasePublicIp_ {};
      shared_ptr<string> supabasePublicUrl_ {};
      shared_ptr<string> tenantId_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QuerySupabaseInstanceInfoForAdminResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QuerySupabaseInstanceInfoForAdminResponseBody::Module) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QuerySupabaseInstanceInfoForAdminResponseBody::Module) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setModule(const QuerySupabaseInstanceInfoForAdminResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setModule(QuerySupabaseInstanceInfoForAdminResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline QuerySupabaseInstanceInfoForAdminResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<QuerySupabaseInstanceInfoForAdminResponseBody::Module> module_ {};
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
