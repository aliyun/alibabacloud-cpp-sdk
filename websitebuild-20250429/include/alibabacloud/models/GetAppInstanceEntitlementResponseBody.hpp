// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEENTITLEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEENTITLEMENTRESPONSEBODY_HPP_
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
  class GetAppInstanceEntitlementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceEntitlementResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAppInstanceEntitlementResponseBody& obj) { 
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
    GetAppInstanceEntitlementResponseBody() = default ;
    GetAppInstanceEntitlementResponseBody(const GetAppInstanceEntitlementResponseBody &) = default ;
    GetAppInstanceEntitlementResponseBody(GetAppInstanceEntitlementResponseBody &&) = default ;
    GetAppInstanceEntitlementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceEntitlementResponseBody() = default ;
    GetAppInstanceEntitlementResponseBody& operator=(const GetAppInstanceEntitlementResponseBody &) = default ;
    GetAppInstanceEntitlementResponseBody& operator=(GetAppInstanceEntitlementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Allocated, allocated_);
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Configured, configured_);
          DARABONBA_PTR_TO_JSON(Entitled, entitled_);
          DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(Remaining, remaining_);
          DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Running, running_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UsagePercent, usagePercent_);
          DARABONBA_PTR_TO_JSON(Used, used_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Allocated, allocated_);
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Configured, configured_);
          DARABONBA_PTR_FROM_JSON(Entitled, entitled_);
          DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(Remaining, remaining_);
          DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Running, running_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UsagePercent, usagePercent_);
          DARABONBA_PTR_FROM_JSON(Used, used_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allocated_ == nullptr
        && this->available_ == nullptr && this->code_ == nullptr && this->configured_ == nullptr && this->entitled_ == nullptr && this->featureType_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->pluginId_ == nullptr && this->quota_ == nullptr && this->remaining_ == nullptr
        && this->resourceCode_ == nullptr && this->resourceType_ == nullptr && this->running_ == nullptr && this->type_ == nullptr && this->usagePercent_ == nullptr
        && this->used_ == nullptr; };
        // allocated Field Functions 
        bool hasAllocated() const { return this->allocated_ != nullptr;};
        void deleteAllocated() { this->allocated_ = nullptr;};
        inline bool getAllocated() const { DARABONBA_PTR_GET_DEFAULT(allocated_, false) };
        inline Items& setAllocated(bool allocated) { DARABONBA_PTR_SET_VALUE(allocated_, allocated) };


        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline Items& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // configured Field Functions 
        bool hasConfigured() const { return this->configured_ != nullptr;};
        void deleteConfigured() { this->configured_ = nullptr;};
        inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
        inline Items& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


        // entitled Field Functions 
        bool hasEntitled() const { return this->entitled_ != nullptr;};
        void deleteEntitled() { this->entitled_ = nullptr;};
        inline bool getEntitled() const { DARABONBA_PTR_GET_DEFAULT(entitled_, false) };
        inline Items& setEntitled(bool entitled) { DARABONBA_PTR_SET_VALUE(entitled_, entitled) };


        // featureType Field Functions 
        bool hasFeatureType() const { return this->featureType_ != nullptr;};
        void deleteFeatureType() { this->featureType_ = nullptr;};
        inline string getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
        inline Items& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
        inline Items& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
        inline Items& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


        // remaining Field Functions 
        bool hasRemaining() const { return this->remaining_ != nullptr;};
        void deleteRemaining() { this->remaining_ = nullptr;};
        inline int64_t getRemaining() const { DARABONBA_PTR_GET_DEFAULT(remaining_, 0L) };
        inline Items& setRemaining(int64_t remaining) { DARABONBA_PTR_SET_VALUE(remaining_, remaining) };


        // resourceCode Field Functions 
        bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
        void deleteResourceCode() { this->resourceCode_ = nullptr;};
        inline string getResourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
        inline Items& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // running Field Functions 
        bool hasRunning() const { return this->running_ != nullptr;};
        void deleteRunning() { this->running_ = nullptr;};
        inline bool getRunning() const { DARABONBA_PTR_GET_DEFAULT(running_, false) };
        inline Items& setRunning(bool running) { DARABONBA_PTR_SET_VALUE(running_, running) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // usagePercent Field Functions 
        bool hasUsagePercent() const { return this->usagePercent_ != nullptr;};
        void deleteUsagePercent() { this->usagePercent_ = nullptr;};
        inline int32_t getUsagePercent() const { DARABONBA_PTR_GET_DEFAULT(usagePercent_, 0) };
        inline Items& setUsagePercent(int32_t usagePercent) { DARABONBA_PTR_SET_VALUE(usagePercent_, usagePercent) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Items& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


      protected:
        shared_ptr<bool> allocated_ {};
        shared_ptr<bool> available_ {};
        shared_ptr<string> code_ {};
        shared_ptr<bool> configured_ {};
        shared_ptr<bool> entitled_ {};
        shared_ptr<string> featureType_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> pluginId_ {};
        shared_ptr<int64_t> quota_ {};
        shared_ptr<int64_t> remaining_ {};
        shared_ptr<string> resourceCode_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<bool> running_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> usagePercent_ {};
        shared_ptr<int64_t> used_ {};
      };

      virtual bool empty() const override { return this->bizId_ == nullptr
        && this->items_ == nullptr; };
      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<string> bizId_ {};
      shared_ptr<vector<Module::Items>> items_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppInstanceEntitlementResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppInstanceEntitlementResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppInstanceEntitlementResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppInstanceEntitlementResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppInstanceEntitlementResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppInstanceEntitlementResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppInstanceEntitlementResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppInstanceEntitlementResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppInstanceEntitlementResponseBody::Module) };
    inline GetAppInstanceEntitlementResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppInstanceEntitlementResponseBody::Module) };
    inline GetAppInstanceEntitlementResponseBody& setModule(const GetAppInstanceEntitlementResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppInstanceEntitlementResponseBody& setModule(GetAppInstanceEntitlementResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppInstanceEntitlementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppInstanceEntitlementResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppInstanceEntitlementResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppInstanceEntitlementResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetAppInstanceEntitlementResponseBody::Module> module_ {};
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
