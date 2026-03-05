// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPRECOMMENDEDCOMMODITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPRECOMMENDEDCOMMODITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppRecommendedCommoditiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppRecommendedCommoditiesResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetAppRecommendedCommoditiesResponseBody& obj) { 
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
    GetAppRecommendedCommoditiesResponseBody() = default ;
    GetAppRecommendedCommoditiesResponseBody(const GetAppRecommendedCommoditiesResponseBody &) = default ;
    GetAppRecommendedCommoditiesResponseBody(GetAppRecommendedCommoditiesResponseBody &&) = default ;
    GetAppRecommendedCommoditiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppRecommendedCommoditiesResponseBody() = default ;
    GetAppRecommendedCommoditiesResponseBody& operator=(const GetAppRecommendedCommoditiesResponseBody &) = default ;
    GetAppRecommendedCommoditiesResponseBody& operator=(GetAppRecommendedCommoditiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Commodities, commodities_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Commodities, commodities_);
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
      class Commodities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commodities& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(PromotionCommodityId, promotionCommodityId_);
          DARABONBA_PTR_TO_JSON(RedirectUrl, redirectUrl_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Commodities& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(PromotionCommodityId, promotionCommodityId_);
          DARABONBA_PTR_FROM_JSON(RedirectUrl, redirectUrl_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Commodities() = default ;
        Commodities(const Commodities &) = default ;
        Commodities(Commodities &&) = default ;
        Commodities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Commodities() = default ;
        Commodities& operator=(const Commodities &) = default ;
        Commodities& operator=(Commodities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->extend_ == nullptr && this->orderType_ == nullptr && this->priority_ == nullptr && this->promotionCommodityId_ == nullptr && this->redirectUrl_ == nullptr
        && this->status_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Commodities& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline const map<string, string> & getExtend() const { DARABONBA_PTR_GET_CONST(extend_, map<string, string>) };
        inline map<string, string> getExtend() { DARABONBA_PTR_GET(extend_, map<string, string>) };
        inline Commodities& setExtend(const map<string, string> & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
        inline Commodities& setExtend(map<string, string> && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline Commodities& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Commodities& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // promotionCommodityId Field Functions 
        bool hasPromotionCommodityId() const { return this->promotionCommodityId_ != nullptr;};
        void deletePromotionCommodityId() { this->promotionCommodityId_ = nullptr;};
        inline string getPromotionCommodityId() const { DARABONBA_PTR_GET_DEFAULT(promotionCommodityId_, "") };
        inline Commodities& setPromotionCommodityId(string promotionCommodityId) { DARABONBA_PTR_SET_VALUE(promotionCommodityId_, promotionCommodityId) };


        // redirectUrl Field Functions 
        bool hasRedirectUrl() const { return this->redirectUrl_ != nullptr;};
        void deleteRedirectUrl() { this->redirectUrl_ = nullptr;};
        inline string getRedirectUrl() const { DARABONBA_PTR_GET_DEFAULT(redirectUrl_, "") };
        inline Commodities& setRedirectUrl(string redirectUrl) { DARABONBA_PTR_SET_VALUE(redirectUrl_, redirectUrl) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Commodities& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> commodityCode_ {};
        shared_ptr<map<string, string>> extend_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> promotionCommodityId_ {};
        shared_ptr<string> redirectUrl_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->commodities_ == nullptr; };
      // commodities Field Functions 
      bool hasCommodities() const { return this->commodities_ != nullptr;};
      void deleteCommodities() { this->commodities_ = nullptr;};
      inline const vector<Module::Commodities> & getCommodities() const { DARABONBA_PTR_GET_CONST(commodities_, vector<Module::Commodities>) };
      inline vector<Module::Commodities> getCommodities() { DARABONBA_PTR_GET(commodities_, vector<Module::Commodities>) };
      inline Module& setCommodities(const vector<Module::Commodities> & commodities) { DARABONBA_PTR_SET_VALUE(commodities_, commodities) };
      inline Module& setCommodities(vector<Module::Commodities> && commodities) { DARABONBA_PTR_SET_RVALUE(commodities_, commodities) };


    protected:
      shared_ptr<vector<Module::Commodities>> commodities_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppRecommendedCommoditiesResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppRecommendedCommoditiesResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppRecommendedCommoditiesResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppRecommendedCommoditiesResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppRecommendedCommoditiesResponseBody::Module) };
    inline GetAppRecommendedCommoditiesResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppRecommendedCommoditiesResponseBody::Module) };
    inline GetAppRecommendedCommoditiesResponseBody& setModule(const GetAppRecommendedCommoditiesResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppRecommendedCommoditiesResponseBody& setModule(GetAppRecommendedCommoditiesResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppRecommendedCommoditiesResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppRecommendedCommoditiesResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetAppRecommendedCommoditiesResponseBody::Module> module_ {};
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
