// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODYRESULTCONTENTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueApiInvoker.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueCacheRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule.hpp>
#include <vector>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueHeaderRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueHeaderRules.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueLimitRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueMigrateRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueMockRule.hpp>
#include <alibabacloud/models/QueryMgsApirestResponseBodyResultContentValueRequestParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBodyResultContentValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBodyResultContentValue& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInvoker, apiInvoker_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthRuleName, authRuleName_);
      DARABONBA_PTR_TO_JSON(CacheRule, cacheRule_);
      DARABONBA_PTR_TO_JSON(Charset, charset_);
      DARABONBA_PTR_TO_JSON(CircuitBreakerRule, circuitBreakerRule_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DefaultLimitRule, defaultLimitRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HeaderRule, headerRule_);
      DARABONBA_PTR_TO_JSON(HeaderRules, headerRules_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InterfaceType, interfaceType_);
      DARABONBA_PTR_TO_JSON(LimitRule, limitRule_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(MigrateRule, migrateRule_);
      DARABONBA_PTR_TO_JSON(MockRule, mockRule_);
      DARABONBA_PTR_TO_JSON(NeedETag, needETag_);
      DARABONBA_PTR_TO_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_TO_JSON(NeedJsonp, needJsonp_);
      DARABONBA_PTR_TO_JSON(NeedSign, needSign_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ParamGetMethod, paramGetMethod_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestBodyModel, requestBodyModel_);
      DARABONBA_PTR_TO_JSON(RequestParams, requestParams_);
      DARABONBA_PTR_TO_JSON(ResponseBodyModel, responseBodyModel_);
      DARABONBA_PTR_TO_JSON(SysId, sysId_);
      DARABONBA_PTR_TO_JSON(SysName, sysName_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBodyResultContentValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInvoker, apiInvoker_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthRuleName, authRuleName_);
      DARABONBA_PTR_FROM_JSON(CacheRule, cacheRule_);
      DARABONBA_PTR_FROM_JSON(Charset, charset_);
      DARABONBA_PTR_FROM_JSON(CircuitBreakerRule, circuitBreakerRule_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DefaultLimitRule, defaultLimitRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HeaderRule, headerRule_);
      DARABONBA_PTR_FROM_JSON(HeaderRules, headerRules_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InterfaceType, interfaceType_);
      DARABONBA_PTR_FROM_JSON(LimitRule, limitRule_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(MigrateRule, migrateRule_);
      DARABONBA_PTR_FROM_JSON(MockRule, mockRule_);
      DARABONBA_PTR_FROM_JSON(NeedETag, needETag_);
      DARABONBA_PTR_FROM_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_FROM_JSON(NeedJsonp, needJsonp_);
      DARABONBA_PTR_FROM_JSON(NeedSign, needSign_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ParamGetMethod, paramGetMethod_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestBodyModel, requestBodyModel_);
      DARABONBA_PTR_FROM_JSON(RequestParams, requestParams_);
      DARABONBA_PTR_FROM_JSON(ResponseBodyModel, responseBodyModel_);
      DARABONBA_PTR_FROM_JSON(SysId, sysId_);
      DARABONBA_PTR_FROM_JSON(SysName, sysName_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryMgsApirestResponseBodyResultContentValue() = default ;
    QueryMgsApirestResponseBodyResultContentValue(const QueryMgsApirestResponseBodyResultContentValue &) = default ;
    QueryMgsApirestResponseBodyResultContentValue(QueryMgsApirestResponseBodyResultContentValue &&) = default ;
    QueryMgsApirestResponseBodyResultContentValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBodyResultContentValue() = default ;
    QueryMgsApirestResponseBodyResultContentValue& operator=(const QueryMgsApirestResponseBodyResultContentValue &) = default ;
    QueryMgsApirestResponseBodyResultContentValue& operator=(QueryMgsApirestResponseBodyResultContentValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInvoker_ == nullptr
        && return this->apiName_ == nullptr && return this->apiStatus_ == nullptr && return this->apiType_ == nullptr && return this->appId_ == nullptr && return this->authRuleName_ == nullptr
        && return this->cacheRule_ == nullptr && return this->charset_ == nullptr && return this->circuitBreakerRule_ == nullptr && return this->contentType_ == nullptr && return this->defaultLimitRule_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->headerRule_ == nullptr && return this->headerRules_ == nullptr
        && return this->host_ == nullptr && return this->id_ == nullptr && return this->interfaceType_ == nullptr && return this->limitRule_ == nullptr && return this->method_ == nullptr
        && return this->methodName_ == nullptr && return this->migrateRule_ == nullptr && return this->mockRule_ == nullptr && return this->needETag_ == nullptr && return this->needEncrypt_ == nullptr
        && return this->needJsonp_ == nullptr && return this->needSign_ == nullptr && return this->operationType_ == nullptr && return this->paramGetMethod_ == nullptr && return this->path_ == nullptr
        && return this->requestBodyModel_ == nullptr && return this->requestParams_ == nullptr && return this->responseBodyModel_ == nullptr && return this->sysId_ == nullptr && return this->sysName_ == nullptr
        && return this->timeout_ == nullptr && return this->workspaceId_ == nullptr; };
    // apiInvoker Field Functions 
    bool hasApiInvoker() const { return this->apiInvoker_ != nullptr;};
    void deleteApiInvoker() { this->apiInvoker_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker & apiInvoker() const { DARABONBA_PTR_GET_CONST(apiInvoker_, Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker apiInvoker() { DARABONBA_PTR_GET(apiInvoker_, Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker) };
    inline QueryMgsApirestResponseBodyResultContentValue& setApiInvoker(const Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker & apiInvoker) { DARABONBA_PTR_SET_VALUE(apiInvoker_, apiInvoker) };
    inline QueryMgsApirestResponseBodyResultContentValue& setApiInvoker(Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker && apiInvoker) { DARABONBA_PTR_SET_RVALUE(apiInvoker_, apiInvoker) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string apiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authRuleName Field Functions 
    bool hasAuthRuleName() const { return this->authRuleName_ != nullptr;};
    void deleteAuthRuleName() { this->authRuleName_ = nullptr;};
    inline string authRuleName() const { DARABONBA_PTR_GET_DEFAULT(authRuleName_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setAuthRuleName(string authRuleName) { DARABONBA_PTR_SET_VALUE(authRuleName_, authRuleName) };


    // cacheRule Field Functions 
    bool hasCacheRule() const { return this->cacheRule_ != nullptr;};
    void deleteCacheRule() { this->cacheRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueCacheRule & cacheRule() const { DARABONBA_PTR_GET_CONST(cacheRule_, Models::QueryMgsApirestResponseBodyResultContentValueCacheRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueCacheRule cacheRule() { DARABONBA_PTR_GET(cacheRule_, Models::QueryMgsApirestResponseBodyResultContentValueCacheRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setCacheRule(const Models::QueryMgsApirestResponseBodyResultContentValueCacheRule & cacheRule) { DARABONBA_PTR_SET_VALUE(cacheRule_, cacheRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setCacheRule(Models::QueryMgsApirestResponseBodyResultContentValueCacheRule && cacheRule) { DARABONBA_PTR_SET_RVALUE(cacheRule_, cacheRule) };


    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string charset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // circuitBreakerRule Field Functions 
    bool hasCircuitBreakerRule() const { return this->circuitBreakerRule_ != nullptr;};
    void deleteCircuitBreakerRule() { this->circuitBreakerRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule & circuitBreakerRule() const { DARABONBA_PTR_GET_CONST(circuitBreakerRule_, Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule circuitBreakerRule() { DARABONBA_PTR_GET(circuitBreakerRule_, Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setCircuitBreakerRule(const Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule & circuitBreakerRule) { DARABONBA_PTR_SET_VALUE(circuitBreakerRule_, circuitBreakerRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setCircuitBreakerRule(Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule && circuitBreakerRule) { DARABONBA_PTR_SET_RVALUE(circuitBreakerRule_, circuitBreakerRule) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // defaultLimitRule Field Functions 
    bool hasDefaultLimitRule() const { return this->defaultLimitRule_ != nullptr;};
    void deleteDefaultLimitRule() { this->defaultLimitRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule & defaultLimitRule() const { DARABONBA_PTR_GET_CONST(defaultLimitRule_, Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule defaultLimitRule() { DARABONBA_PTR_GET(defaultLimitRule_, Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setDefaultLimitRule(const Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule & defaultLimitRule) { DARABONBA_PTR_SET_VALUE(defaultLimitRule_, defaultLimitRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setDefaultLimitRule(Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule && defaultLimitRule) { DARABONBA_PTR_SET_RVALUE(defaultLimitRule_, defaultLimitRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // headerRule Field Functions 
    bool hasHeaderRule() const { return this->headerRule_ != nullptr;};
    void deleteHeaderRule() { this->headerRule_ = nullptr;};
    inline const vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule> & headerRule() const { DARABONBA_PTR_GET_CONST(headerRule_, vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule>) };
    inline vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule> headerRule() { DARABONBA_PTR_GET(headerRule_, vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule>) };
    inline QueryMgsApirestResponseBodyResultContentValue& setHeaderRule(const vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule> & headerRule) { DARABONBA_PTR_SET_VALUE(headerRule_, headerRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setHeaderRule(vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule> && headerRule) { DARABONBA_PTR_SET_RVALUE(headerRule_, headerRule) };


    // headerRules Field Functions 
    bool hasHeaderRules() const { return this->headerRules_ != nullptr;};
    void deleteHeaderRules() { this->headerRules_ = nullptr;};
    inline const vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules> & headerRules() const { DARABONBA_PTR_GET_CONST(headerRules_, vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules>) };
    inline vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules> headerRules() { DARABONBA_PTR_GET(headerRules_, vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules>) };
    inline QueryMgsApirestResponseBodyResultContentValue& setHeaderRules(const vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules> & headerRules) { DARABONBA_PTR_SET_VALUE(headerRules_, headerRules) };
    inline QueryMgsApirestResponseBodyResultContentValue& setHeaderRules(vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules> && headerRules) { DARABONBA_PTR_SET_RVALUE(headerRules_, headerRules) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValue& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interfaceType Field Functions 
    bool hasInterfaceType() const { return this->interfaceType_ != nullptr;};
    void deleteInterfaceType() { this->interfaceType_ = nullptr;};
    inline string interfaceType() const { DARABONBA_PTR_GET_DEFAULT(interfaceType_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setInterfaceType(string interfaceType) { DARABONBA_PTR_SET_VALUE(interfaceType_, interfaceType) };


    // limitRule Field Functions 
    bool hasLimitRule() const { return this->limitRule_ != nullptr;};
    void deleteLimitRule() { this->limitRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueLimitRule & limitRule() const { DARABONBA_PTR_GET_CONST(limitRule_, Models::QueryMgsApirestResponseBodyResultContentValueLimitRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueLimitRule limitRule() { DARABONBA_PTR_GET(limitRule_, Models::QueryMgsApirestResponseBodyResultContentValueLimitRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setLimitRule(const Models::QueryMgsApirestResponseBodyResultContentValueLimitRule & limitRule) { DARABONBA_PTR_SET_VALUE(limitRule_, limitRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setLimitRule(Models::QueryMgsApirestResponseBodyResultContentValueLimitRule && limitRule) { DARABONBA_PTR_SET_RVALUE(limitRule_, limitRule) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // migrateRule Field Functions 
    bool hasMigrateRule() const { return this->migrateRule_ != nullptr;};
    void deleteMigrateRule() { this->migrateRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule & migrateRule() const { DARABONBA_PTR_GET_CONST(migrateRule_, Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule migrateRule() { DARABONBA_PTR_GET(migrateRule_, Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setMigrateRule(const Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule & migrateRule) { DARABONBA_PTR_SET_VALUE(migrateRule_, migrateRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setMigrateRule(Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule && migrateRule) { DARABONBA_PTR_SET_RVALUE(migrateRule_, migrateRule) };


    // mockRule Field Functions 
    bool hasMockRule() const { return this->mockRule_ != nullptr;};
    void deleteMockRule() { this->mockRule_ = nullptr;};
    inline const Models::QueryMgsApirestResponseBodyResultContentValueMockRule & mockRule() const { DARABONBA_PTR_GET_CONST(mockRule_, Models::QueryMgsApirestResponseBodyResultContentValueMockRule) };
    inline Models::QueryMgsApirestResponseBodyResultContentValueMockRule mockRule() { DARABONBA_PTR_GET(mockRule_, Models::QueryMgsApirestResponseBodyResultContentValueMockRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setMockRule(const Models::QueryMgsApirestResponseBodyResultContentValueMockRule & mockRule) { DARABONBA_PTR_SET_VALUE(mockRule_, mockRule) };
    inline QueryMgsApirestResponseBodyResultContentValue& setMockRule(Models::QueryMgsApirestResponseBodyResultContentValueMockRule && mockRule) { DARABONBA_PTR_SET_RVALUE(mockRule_, mockRule) };


    // needETag Field Functions 
    bool hasNeedETag() const { return this->needETag_ != nullptr;};
    void deleteNeedETag() { this->needETag_ = nullptr;};
    inline string needETag() const { DARABONBA_PTR_GET_DEFAULT(needETag_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setNeedETag(string needETag) { DARABONBA_PTR_SET_VALUE(needETag_, needETag) };


    // needEncrypt Field Functions 
    bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
    void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
    inline string needEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setNeedEncrypt(string needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


    // needJsonp Field Functions 
    bool hasNeedJsonp() const { return this->needJsonp_ != nullptr;};
    void deleteNeedJsonp() { this->needJsonp_ = nullptr;};
    inline string needJsonp() const { DARABONBA_PTR_GET_DEFAULT(needJsonp_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setNeedJsonp(string needJsonp) { DARABONBA_PTR_SET_VALUE(needJsonp_, needJsonp) };


    // needSign Field Functions 
    bool hasNeedSign() const { return this->needSign_ != nullptr;};
    void deleteNeedSign() { this->needSign_ = nullptr;};
    inline string needSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setNeedSign(string needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // paramGetMethod Field Functions 
    bool hasParamGetMethod() const { return this->paramGetMethod_ != nullptr;};
    void deleteParamGetMethod() { this->paramGetMethod_ = nullptr;};
    inline string paramGetMethod() const { DARABONBA_PTR_GET_DEFAULT(paramGetMethod_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setParamGetMethod(string paramGetMethod) { DARABONBA_PTR_SET_VALUE(paramGetMethod_, paramGetMethod) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestBodyModel Field Functions 
    bool hasRequestBodyModel() const { return this->requestBodyModel_ != nullptr;};
    void deleteRequestBodyModel() { this->requestBodyModel_ = nullptr;};
    inline string requestBodyModel() const { DARABONBA_PTR_GET_DEFAULT(requestBodyModel_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setRequestBodyModel(string requestBodyModel) { DARABONBA_PTR_SET_VALUE(requestBodyModel_, requestBodyModel) };


    // requestParams Field Functions 
    bool hasRequestParams() const { return this->requestParams_ != nullptr;};
    void deleteRequestParams() { this->requestParams_ = nullptr;};
    inline const vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams> & requestParams() const { DARABONBA_PTR_GET_CONST(requestParams_, vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams>) };
    inline vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams> requestParams() { DARABONBA_PTR_GET(requestParams_, vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams>) };
    inline QueryMgsApirestResponseBodyResultContentValue& setRequestParams(const vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams> & requestParams) { DARABONBA_PTR_SET_VALUE(requestParams_, requestParams) };
    inline QueryMgsApirestResponseBodyResultContentValue& setRequestParams(vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams> && requestParams) { DARABONBA_PTR_SET_RVALUE(requestParams_, requestParams) };


    // responseBodyModel Field Functions 
    bool hasResponseBodyModel() const { return this->responseBodyModel_ != nullptr;};
    void deleteResponseBodyModel() { this->responseBodyModel_ = nullptr;};
    inline string responseBodyModel() const { DARABONBA_PTR_GET_DEFAULT(responseBodyModel_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setResponseBodyModel(string responseBodyModel) { DARABONBA_PTR_SET_VALUE(responseBodyModel_, responseBodyModel) };


    // sysId Field Functions 
    bool hasSysId() const { return this->sysId_ != nullptr;};
    void deleteSysId() { this->sysId_ = nullptr;};
    inline int64_t sysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
    inline QueryMgsApirestResponseBodyResultContentValue& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


    // sysName Field Functions 
    bool hasSysName() const { return this->sysName_ != nullptr;};
    void deleteSysName() { this->sysName_ = nullptr;};
    inline string sysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryMgsApirestResponseBodyResultContentValue& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueApiInvoker> apiInvoker_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> apiStatus_ = nullptr;
    std::shared_ptr<string> apiType_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> authRuleName_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueCacheRule> cacheRule_ = nullptr;
    std::shared_ptr<string> charset_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueCircuitBreakerRule> circuitBreakerRule_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueDefaultLimitRule> defaultLimitRule_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRule>> headerRule_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApirestResponseBodyResultContentValueHeaderRules>> headerRules_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> interfaceType_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueLimitRule> limitRule_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueMigrateRule> migrateRule_ = nullptr;
    std::shared_ptr<Models::QueryMgsApirestResponseBodyResultContentValueMockRule> mockRule_ = nullptr;
    std::shared_ptr<string> needETag_ = nullptr;
    std::shared_ptr<string> needEncrypt_ = nullptr;
    std::shared_ptr<string> needJsonp_ = nullptr;
    std::shared_ptr<string> needSign_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> paramGetMethod_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> requestBodyModel_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApirestResponseBodyResultContentValueRequestParams>> requestParams_ = nullptr;
    std::shared_ptr<string> responseBodyModel_ = nullptr;
    std::shared_ptr<int64_t> sysId_ = nullptr;
    std::shared_ptr<string> sysName_ = nullptr;
    std::shared_ptr<string> timeout_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
