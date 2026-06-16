// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSPIRATIONBALANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSPIRATIONBALANCERESPONSEBODY_HPP_
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
  class QueryInspirationBalanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInspirationBalanceResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryInspirationBalanceResponseBody& obj) { 
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
    QueryInspirationBalanceResponseBody() = default ;
    QueryInspirationBalanceResponseBody(const QueryInspirationBalanceResponseBody &) = default ;
    QueryInspirationBalanceResponseBody(QueryInspirationBalanceResponseBody &&) = default ;
    QueryInspirationBalanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInspirationBalanceResponseBody() = default ;
    QueryInspirationBalanceResponseBody& operator=(const QueryInspirationBalanceResponseBody &) = default ;
    QueryInspirationBalanceResponseBody& operator=(QueryInspirationBalanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Remaining, remaining_);
        DARABONBA_PTR_TO_JSON(RemainingStr, remainingStr_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(TotalQuotaStr, totalQuotaStr_);
        DARABONBA_PTR_TO_JSON(TotalUsed, totalUsed_);
        DARABONBA_PTR_TO_JSON(TotalUsedStr, totalUsedStr_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Remaining, remaining_);
        DARABONBA_PTR_FROM_JSON(RemainingStr, remainingStr_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(TotalQuotaStr, totalQuotaStr_);
        DARABONBA_PTR_FROM_JSON(TotalUsed, totalUsed_);
        DARABONBA_PTR_FROM_JSON(TotalUsedStr, totalUsedStr_);
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
      virtual bool empty() const override { return this->remaining_ == nullptr
        && this->remainingStr_ == nullptr && this->totalQuota_ == nullptr && this->totalQuotaStr_ == nullptr && this->totalUsed_ == nullptr && this->totalUsedStr_ == nullptr; };
      // remaining Field Functions 
      bool hasRemaining() const { return this->remaining_ != nullptr;};
      void deleteRemaining() { this->remaining_ = nullptr;};
      inline int64_t getRemaining() const { DARABONBA_PTR_GET_DEFAULT(remaining_, 0L) };
      inline Module& setRemaining(int64_t remaining) { DARABONBA_PTR_SET_VALUE(remaining_, remaining) };


      // remainingStr Field Functions 
      bool hasRemainingStr() const { return this->remainingStr_ != nullptr;};
      void deleteRemainingStr() { this->remainingStr_ = nullptr;};
      inline string getRemainingStr() const { DARABONBA_PTR_GET_DEFAULT(remainingStr_, "") };
      inline Module& setRemainingStr(string remainingStr) { DARABONBA_PTR_SET_VALUE(remainingStr_, remainingStr) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
      inline Module& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // totalQuotaStr Field Functions 
      bool hasTotalQuotaStr() const { return this->totalQuotaStr_ != nullptr;};
      void deleteTotalQuotaStr() { this->totalQuotaStr_ = nullptr;};
      inline string getTotalQuotaStr() const { DARABONBA_PTR_GET_DEFAULT(totalQuotaStr_, "") };
      inline Module& setTotalQuotaStr(string totalQuotaStr) { DARABONBA_PTR_SET_VALUE(totalQuotaStr_, totalQuotaStr) };


      // totalUsed Field Functions 
      bool hasTotalUsed() const { return this->totalUsed_ != nullptr;};
      void deleteTotalUsed() { this->totalUsed_ = nullptr;};
      inline int64_t getTotalUsed() const { DARABONBA_PTR_GET_DEFAULT(totalUsed_, 0L) };
      inline Module& setTotalUsed(int64_t totalUsed) { DARABONBA_PTR_SET_VALUE(totalUsed_, totalUsed) };


      // totalUsedStr Field Functions 
      bool hasTotalUsedStr() const { return this->totalUsedStr_ != nullptr;};
      void deleteTotalUsedStr() { this->totalUsedStr_ = nullptr;};
      inline string getTotalUsedStr() const { DARABONBA_PTR_GET_DEFAULT(totalUsedStr_, "") };
      inline Module& setTotalUsedStr(string totalUsedStr) { DARABONBA_PTR_SET_VALUE(totalUsedStr_, totalUsedStr) };


    protected:
      // Remaining (totalQuota - totalUsed).
      shared_ptr<int64_t> remaining_ {};
      shared_ptr<string> remainingStr_ {};
      // Total quota (sum of initQuota for all active accounts).
      shared_ptr<int64_t> totalQuota_ {};
      shared_ptr<string> totalQuotaStr_ {};
      // Total used (sum of used for all active accounts).
      shared_ptr<int64_t> totalUsed_ {};
      shared_ptr<string> totalUsedStr_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryInspirationBalanceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline QueryInspirationBalanceResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryInspirationBalanceResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline QueryInspirationBalanceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryInspirationBalanceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline QueryInspirationBalanceResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline QueryInspirationBalanceResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryInspirationBalanceResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryInspirationBalanceResponseBody::Module) };
    inline QueryInspirationBalanceResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryInspirationBalanceResponseBody::Module) };
    inline QueryInspirationBalanceResponseBody& setModule(const QueryInspirationBalanceResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryInspirationBalanceResponseBody& setModule(QueryInspirationBalanceResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInspirationBalanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline QueryInspirationBalanceResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline QueryInspirationBalanceResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline QueryInspirationBalanceResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Detailed reason for access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // Application name. Query the application with this name.
    shared_ptr<string> appName_ {};
    // Dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // Dynamic error message, used to replace `%s` in the **ErrMessage** error message of the response parameters.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, it indicates that the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // Error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Response data.
    shared_ptr<QueryInspirationBalanceResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Error code.
    shared_ptr<string> rootErrorCode_ {};
    // Exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // Indicates whether to process synchronously.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
