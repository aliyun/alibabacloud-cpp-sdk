// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListApiInvoker.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListCacheRule.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule.hpp>
#include <vector>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListHeaderRule.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListHeaderRules.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListLimitRule.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListMigrateRule.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListMockRule.hpp>
#include <alibabacloud/models/QueryMgsApipageResponseBodyResultContentListRequestParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApipageResponseBodyResultContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApipageResponseBodyResultContentList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryMgsApipageResponseBodyResultContentList& obj) { 
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
    QueryMgsApipageResponseBodyResultContentList() = default ;
    QueryMgsApipageResponseBodyResultContentList(const QueryMgsApipageResponseBodyResultContentList &) = default ;
    QueryMgsApipageResponseBodyResultContentList(QueryMgsApipageResponseBodyResultContentList &&) = default ;
    QueryMgsApipageResponseBodyResultContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApipageResponseBodyResultContentList() = default ;
    QueryMgsApipageResponseBodyResultContentList& operator=(const QueryMgsApipageResponseBodyResultContentList &) = default ;
    QueryMgsApipageResponseBodyResultContentList& operator=(QueryMgsApipageResponseBodyResultContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInvoker_ == nullptr
        && return this->apiName_ == nullptr && return this->apiStatus_ == nullptr && return this->apiType_ == nullptr && return this->appId_ == nullptr && return this->authRuleName_ == nullptr
        && return this->cacheRule_ == nullptr && return this->charset_ == nullptr && return this->circuitBreakerRule_ == nullptr && return this->contentType_ == nullptr && return this->description_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->headerRule_ == nullptr && return this->headerRules_ == nullptr && return this->host_ == nullptr
        && return this->id_ == nullptr && return this->interfaceType_ == nullptr && return this->limitRule_ == nullptr && return this->method_ == nullptr && return this->methodName_ == nullptr
        && return this->migrateRule_ == nullptr && return this->mockRule_ == nullptr && return this->needETag_ == nullptr && return this->needEncrypt_ == nullptr && return this->needJsonp_ == nullptr
        && return this->needSign_ == nullptr && return this->operationType_ == nullptr && return this->paramGetMethod_ == nullptr && return this->path_ == nullptr && return this->requestBodyModel_ == nullptr
        && return this->requestParams_ == nullptr && return this->responseBodyModel_ == nullptr && return this->sysId_ == nullptr && return this->sysName_ == nullptr && return this->timeout_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // apiInvoker Field Functions 
    bool hasApiInvoker() const { return this->apiInvoker_ != nullptr;};
    void deleteApiInvoker() { this->apiInvoker_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListApiInvoker & apiInvoker() const { DARABONBA_PTR_GET_CONST(apiInvoker_, Models::QueryMgsApipageResponseBodyResultContentListApiInvoker) };
    inline Models::QueryMgsApipageResponseBodyResultContentListApiInvoker apiInvoker() { DARABONBA_PTR_GET(apiInvoker_, Models::QueryMgsApipageResponseBodyResultContentListApiInvoker) };
    inline QueryMgsApipageResponseBodyResultContentList& setApiInvoker(const Models::QueryMgsApipageResponseBodyResultContentListApiInvoker & apiInvoker) { DARABONBA_PTR_SET_VALUE(apiInvoker_, apiInvoker) };
    inline QueryMgsApipageResponseBodyResultContentList& setApiInvoker(Models::QueryMgsApipageResponseBodyResultContentListApiInvoker && apiInvoker) { DARABONBA_PTR_SET_RVALUE(apiInvoker_, apiInvoker) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string apiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authRuleName Field Functions 
    bool hasAuthRuleName() const { return this->authRuleName_ != nullptr;};
    void deleteAuthRuleName() { this->authRuleName_ = nullptr;};
    inline string authRuleName() const { DARABONBA_PTR_GET_DEFAULT(authRuleName_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setAuthRuleName(string authRuleName) { DARABONBA_PTR_SET_VALUE(authRuleName_, authRuleName) };


    // cacheRule Field Functions 
    bool hasCacheRule() const { return this->cacheRule_ != nullptr;};
    void deleteCacheRule() { this->cacheRule_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListCacheRule & cacheRule() const { DARABONBA_PTR_GET_CONST(cacheRule_, Models::QueryMgsApipageResponseBodyResultContentListCacheRule) };
    inline Models::QueryMgsApipageResponseBodyResultContentListCacheRule cacheRule() { DARABONBA_PTR_GET(cacheRule_, Models::QueryMgsApipageResponseBodyResultContentListCacheRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setCacheRule(const Models::QueryMgsApipageResponseBodyResultContentListCacheRule & cacheRule) { DARABONBA_PTR_SET_VALUE(cacheRule_, cacheRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setCacheRule(Models::QueryMgsApipageResponseBodyResultContentListCacheRule && cacheRule) { DARABONBA_PTR_SET_RVALUE(cacheRule_, cacheRule) };


    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string charset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // circuitBreakerRule Field Functions 
    bool hasCircuitBreakerRule() const { return this->circuitBreakerRule_ != nullptr;};
    void deleteCircuitBreakerRule() { this->circuitBreakerRule_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule & circuitBreakerRule() const { DARABONBA_PTR_GET_CONST(circuitBreakerRule_, Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule) };
    inline Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule circuitBreakerRule() { DARABONBA_PTR_GET(circuitBreakerRule_, Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setCircuitBreakerRule(const Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule & circuitBreakerRule) { DARABONBA_PTR_SET_VALUE(circuitBreakerRule_, circuitBreakerRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setCircuitBreakerRule(Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule && circuitBreakerRule) { DARABONBA_PTR_SET_RVALUE(circuitBreakerRule_, circuitBreakerRule) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // headerRule Field Functions 
    bool hasHeaderRule() const { return this->headerRule_ != nullptr;};
    void deleteHeaderRule() { this->headerRule_ = nullptr;};
    inline const vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule> & headerRule() const { DARABONBA_PTR_GET_CONST(headerRule_, vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule>) };
    inline vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule> headerRule() { DARABONBA_PTR_GET(headerRule_, vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule>) };
    inline QueryMgsApipageResponseBodyResultContentList& setHeaderRule(const vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule> & headerRule) { DARABONBA_PTR_SET_VALUE(headerRule_, headerRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setHeaderRule(vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule> && headerRule) { DARABONBA_PTR_SET_RVALUE(headerRule_, headerRule) };


    // headerRules Field Functions 
    bool hasHeaderRules() const { return this->headerRules_ != nullptr;};
    void deleteHeaderRules() { this->headerRules_ = nullptr;};
    inline const vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules> & headerRules() const { DARABONBA_PTR_GET_CONST(headerRules_, vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules>) };
    inline vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules> headerRules() { DARABONBA_PTR_GET(headerRules_, vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules>) };
    inline QueryMgsApipageResponseBodyResultContentList& setHeaderRules(const vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules> & headerRules) { DARABONBA_PTR_SET_VALUE(headerRules_, headerRules) };
    inline QueryMgsApipageResponseBodyResultContentList& setHeaderRules(vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules> && headerRules) { DARABONBA_PTR_SET_RVALUE(headerRules_, headerRules) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryMgsApipageResponseBodyResultContentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interfaceType Field Functions 
    bool hasInterfaceType() const { return this->interfaceType_ != nullptr;};
    void deleteInterfaceType() { this->interfaceType_ = nullptr;};
    inline string interfaceType() const { DARABONBA_PTR_GET_DEFAULT(interfaceType_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setInterfaceType(string interfaceType) { DARABONBA_PTR_SET_VALUE(interfaceType_, interfaceType) };


    // limitRule Field Functions 
    bool hasLimitRule() const { return this->limitRule_ != nullptr;};
    void deleteLimitRule() { this->limitRule_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListLimitRule & limitRule() const { DARABONBA_PTR_GET_CONST(limitRule_, Models::QueryMgsApipageResponseBodyResultContentListLimitRule) };
    inline Models::QueryMgsApipageResponseBodyResultContentListLimitRule limitRule() { DARABONBA_PTR_GET(limitRule_, Models::QueryMgsApipageResponseBodyResultContentListLimitRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setLimitRule(const Models::QueryMgsApipageResponseBodyResultContentListLimitRule & limitRule) { DARABONBA_PTR_SET_VALUE(limitRule_, limitRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setLimitRule(Models::QueryMgsApipageResponseBodyResultContentListLimitRule && limitRule) { DARABONBA_PTR_SET_RVALUE(limitRule_, limitRule) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // migrateRule Field Functions 
    bool hasMigrateRule() const { return this->migrateRule_ != nullptr;};
    void deleteMigrateRule() { this->migrateRule_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListMigrateRule & migrateRule() const { DARABONBA_PTR_GET_CONST(migrateRule_, Models::QueryMgsApipageResponseBodyResultContentListMigrateRule) };
    inline Models::QueryMgsApipageResponseBodyResultContentListMigrateRule migrateRule() { DARABONBA_PTR_GET(migrateRule_, Models::QueryMgsApipageResponseBodyResultContentListMigrateRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setMigrateRule(const Models::QueryMgsApipageResponseBodyResultContentListMigrateRule & migrateRule) { DARABONBA_PTR_SET_VALUE(migrateRule_, migrateRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setMigrateRule(Models::QueryMgsApipageResponseBodyResultContentListMigrateRule && migrateRule) { DARABONBA_PTR_SET_RVALUE(migrateRule_, migrateRule) };


    // mockRule Field Functions 
    bool hasMockRule() const { return this->mockRule_ != nullptr;};
    void deleteMockRule() { this->mockRule_ = nullptr;};
    inline const Models::QueryMgsApipageResponseBodyResultContentListMockRule & mockRule() const { DARABONBA_PTR_GET_CONST(mockRule_, Models::QueryMgsApipageResponseBodyResultContentListMockRule) };
    inline Models::QueryMgsApipageResponseBodyResultContentListMockRule mockRule() { DARABONBA_PTR_GET(mockRule_, Models::QueryMgsApipageResponseBodyResultContentListMockRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setMockRule(const Models::QueryMgsApipageResponseBodyResultContentListMockRule & mockRule) { DARABONBA_PTR_SET_VALUE(mockRule_, mockRule) };
    inline QueryMgsApipageResponseBodyResultContentList& setMockRule(Models::QueryMgsApipageResponseBodyResultContentListMockRule && mockRule) { DARABONBA_PTR_SET_RVALUE(mockRule_, mockRule) };


    // needETag Field Functions 
    bool hasNeedETag() const { return this->needETag_ != nullptr;};
    void deleteNeedETag() { this->needETag_ = nullptr;};
    inline string needETag() const { DARABONBA_PTR_GET_DEFAULT(needETag_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setNeedETag(string needETag) { DARABONBA_PTR_SET_VALUE(needETag_, needETag) };


    // needEncrypt Field Functions 
    bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
    void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
    inline string needEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setNeedEncrypt(string needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


    // needJsonp Field Functions 
    bool hasNeedJsonp() const { return this->needJsonp_ != nullptr;};
    void deleteNeedJsonp() { this->needJsonp_ = nullptr;};
    inline string needJsonp() const { DARABONBA_PTR_GET_DEFAULT(needJsonp_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setNeedJsonp(string needJsonp) { DARABONBA_PTR_SET_VALUE(needJsonp_, needJsonp) };


    // needSign Field Functions 
    bool hasNeedSign() const { return this->needSign_ != nullptr;};
    void deleteNeedSign() { this->needSign_ = nullptr;};
    inline string needSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setNeedSign(string needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // paramGetMethod Field Functions 
    bool hasParamGetMethod() const { return this->paramGetMethod_ != nullptr;};
    void deleteParamGetMethod() { this->paramGetMethod_ = nullptr;};
    inline string paramGetMethod() const { DARABONBA_PTR_GET_DEFAULT(paramGetMethod_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setParamGetMethod(string paramGetMethod) { DARABONBA_PTR_SET_VALUE(paramGetMethod_, paramGetMethod) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestBodyModel Field Functions 
    bool hasRequestBodyModel() const { return this->requestBodyModel_ != nullptr;};
    void deleteRequestBodyModel() { this->requestBodyModel_ = nullptr;};
    inline string requestBodyModel() const { DARABONBA_PTR_GET_DEFAULT(requestBodyModel_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setRequestBodyModel(string requestBodyModel) { DARABONBA_PTR_SET_VALUE(requestBodyModel_, requestBodyModel) };


    // requestParams Field Functions 
    bool hasRequestParams() const { return this->requestParams_ != nullptr;};
    void deleteRequestParams() { this->requestParams_ = nullptr;};
    inline const vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams> & requestParams() const { DARABONBA_PTR_GET_CONST(requestParams_, vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams>) };
    inline vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams> requestParams() { DARABONBA_PTR_GET(requestParams_, vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams>) };
    inline QueryMgsApipageResponseBodyResultContentList& setRequestParams(const vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams> & requestParams) { DARABONBA_PTR_SET_VALUE(requestParams_, requestParams) };
    inline QueryMgsApipageResponseBodyResultContentList& setRequestParams(vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams> && requestParams) { DARABONBA_PTR_SET_RVALUE(requestParams_, requestParams) };


    // responseBodyModel Field Functions 
    bool hasResponseBodyModel() const { return this->responseBodyModel_ != nullptr;};
    void deleteResponseBodyModel() { this->responseBodyModel_ = nullptr;};
    inline string responseBodyModel() const { DARABONBA_PTR_GET_DEFAULT(responseBodyModel_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setResponseBodyModel(string responseBodyModel) { DARABONBA_PTR_SET_VALUE(responseBodyModel_, responseBodyModel) };


    // sysId Field Functions 
    bool hasSysId() const { return this->sysId_ != nullptr;};
    void deleteSysId() { this->sysId_ = nullptr;};
    inline int64_t sysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
    inline QueryMgsApipageResponseBodyResultContentList& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


    // sysName Field Functions 
    bool hasSysName() const { return this->sysName_ != nullptr;};
    void deleteSysName() { this->sysName_ = nullptr;};
    inline string sysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryMgsApipageResponseBodyResultContentList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListApiInvoker> apiInvoker_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<string> apiStatus_ = nullptr;
    std::shared_ptr<string> apiType_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> authRuleName_ = nullptr;
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListCacheRule> cacheRule_ = nullptr;
    std::shared_ptr<string> charset_ = nullptr;
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListCircuitBreakerRule> circuitBreakerRule_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRule>> headerRule_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApipageResponseBodyResultContentListHeaderRules>> headerRules_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> interfaceType_ = nullptr;
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListLimitRule> limitRule_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListMigrateRule> migrateRule_ = nullptr;
    std::shared_ptr<Models::QueryMgsApipageResponseBodyResultContentListMockRule> mockRule_ = nullptr;
    std::shared_ptr<string> needETag_ = nullptr;
    std::shared_ptr<string> needEncrypt_ = nullptr;
    std::shared_ptr<string> needJsonp_ = nullptr;
    std::shared_ptr<string> needSign_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> paramGetMethod_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> requestBodyModel_ = nullptr;
    std::shared_ptr<vector<Models::QueryMgsApipageResponseBodyResultContentListRequestParams>> requestParams_ = nullptr;
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
