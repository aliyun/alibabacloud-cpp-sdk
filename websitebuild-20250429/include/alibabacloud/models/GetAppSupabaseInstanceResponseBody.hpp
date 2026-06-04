// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSUPABASEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSUPABASEINSTANCERESPONSEBODY_HPP_
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
  class GetAppSupabaseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSupabaseInstanceResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAppSupabaseInstanceResponseBody& obj) { 
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
    GetAppSupabaseInstanceResponseBody() = default ;
    GetAppSupabaseInstanceResponseBody(const GetAppSupabaseInstanceResponseBody &) = default ;
    GetAppSupabaseInstanceResponseBody(GetAppSupabaseInstanceResponseBody &&) = default ;
    GetAppSupabaseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSupabaseInstanceResponseBody() = default ;
    GetAppSupabaseInstanceResponseBody& operator=(const GetAppSupabaseInstanceResponseBody &) = default ;
    GetAppSupabaseInstanceResponseBody& operator=(GetAppSupabaseInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(DbPublicUrl, dbPublicUrl_);
        DARABONBA_PTR_TO_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_TO_JSON(ServiceKey, serviceKey_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupabaseInstanceId, supabaseInstanceId_);
        DARABONBA_PTR_TO_JSON(SupabasePublicUrl, supabasePublicUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(DbPublicUrl, dbPublicUrl_);
        DARABONBA_PTR_FROM_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceKey, serviceKey_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupabaseInstanceId, supabaseInstanceId_);
        DARABONBA_PTR_FROM_JSON(SupabasePublicUrl, supabasePublicUrl_);
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
        && this->bizId_ == nullptr && this->dbInstanceId_ == nullptr && this->dbPublicUrl_ == nullptr && this->instanceCreateStatus_ == nullptr && this->serviceKey_ == nullptr
        && this->status_ == nullptr && this->supabaseInstanceId_ == nullptr && this->supabasePublicUrl_ == nullptr; };
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


      // instanceCreateStatus Field Functions 
      bool hasInstanceCreateStatus() const { return this->instanceCreateStatus_ != nullptr;};
      void deleteInstanceCreateStatus() { this->instanceCreateStatus_ = nullptr;};
      inline string getInstanceCreateStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateStatus_, "") };
      inline Module& setInstanceCreateStatus(string instanceCreateStatus) { DARABONBA_PTR_SET_VALUE(instanceCreateStatus_, instanceCreateStatus) };


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


      // supabaseInstanceId Field Functions 
      bool hasSupabaseInstanceId() const { return this->supabaseInstanceId_ != nullptr;};
      void deleteSupabaseInstanceId() { this->supabaseInstanceId_ = nullptr;};
      inline string getSupabaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(supabaseInstanceId_, "") };
      inline Module& setSupabaseInstanceId(string supabaseInstanceId) { DARABONBA_PTR_SET_VALUE(supabaseInstanceId_, supabaseInstanceId) };


      // supabasePublicUrl Field Functions 
      bool hasSupabasePublicUrl() const { return this->supabasePublicUrl_ != nullptr;};
      void deleteSupabasePublicUrl() { this->supabasePublicUrl_ = nullptr;};
      inline string getSupabasePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(supabasePublicUrl_, "") };
      inline Module& setSupabasePublicUrl(string supabasePublicUrl) { DARABONBA_PTR_SET_VALUE(supabasePublicUrl_, supabasePublicUrl) };


    protected:
      shared_ptr<string> anonKey_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> dbInstanceId_ {};
      shared_ptr<string> dbPublicUrl_ {};
      shared_ptr<string> instanceCreateStatus_ {};
      shared_ptr<string> serviceKey_ {};
      // trial,draft,live,refunded,expired,released
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> supabaseInstanceId_ {};
      shared_ptr<string> supabasePublicUrl_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppSupabaseInstanceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppSupabaseInstanceResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppSupabaseInstanceResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppSupabaseInstanceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppSupabaseInstanceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppSupabaseInstanceResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppSupabaseInstanceResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppSupabaseInstanceResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppSupabaseInstanceResponseBody::Module) };
    inline GetAppSupabaseInstanceResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppSupabaseInstanceResponseBody::Module) };
    inline GetAppSupabaseInstanceResponseBody& setModule(const GetAppSupabaseInstanceResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppSupabaseInstanceResponseBody& setModule(GetAppSupabaseInstanceResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppSupabaseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppSupabaseInstanceResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppSupabaseInstanceResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppSupabaseInstanceResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetAppSupabaseInstanceResponseBody::Module> module_ {};
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
