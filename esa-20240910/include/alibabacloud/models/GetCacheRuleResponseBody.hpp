// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCACHERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCACHERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCacheRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCacheRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_TO_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_TO_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_TO_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_TO_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_TO_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_TO_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_TO_JSON(CheckPresenceHeader, checkPresenceHeader_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(EdgeCacheMode, edgeCacheMode_);
      DARABONBA_PTR_TO_JSON(EdgeCacheTtl, edgeCacheTtl_);
      DARABONBA_PTR_TO_JSON(EdgeStatusCodeCacheTtl, edgeStatusCodeCacheTtl_);
      DARABONBA_PTR_TO_JSON(IncludeCookie, includeCookie_);
      DARABONBA_PTR_TO_JSON(IncludeHeader, includeHeader_);
      DARABONBA_PTR_TO_JSON(PostBodyCacheKey, postBodyCacheKey_);
      DARABONBA_PTR_TO_JSON(PostBodySizeLimit, postBodySizeLimit_);
      DARABONBA_PTR_TO_JSON(PostCache, postCache_);
      DARABONBA_PTR_TO_JSON(QueryString, queryString_);
      DARABONBA_PTR_TO_JSON(QueryStringMode, queryStringMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(ServeStale, serveStale_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_TO_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_TO_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_TO_JSON(UserLanguage, userLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, GetCacheRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_FROM_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_FROM_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_FROM_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceHeader, checkPresenceHeader_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(EdgeCacheMode, edgeCacheMode_);
      DARABONBA_PTR_FROM_JSON(EdgeCacheTtl, edgeCacheTtl_);
      DARABONBA_PTR_FROM_JSON(EdgeStatusCodeCacheTtl, edgeStatusCodeCacheTtl_);
      DARABONBA_PTR_FROM_JSON(IncludeCookie, includeCookie_);
      DARABONBA_PTR_FROM_JSON(IncludeHeader, includeHeader_);
      DARABONBA_PTR_FROM_JSON(PostBodyCacheKey, postBodyCacheKey_);
      DARABONBA_PTR_FROM_JSON(PostBodySizeLimit, postBodySizeLimit_);
      DARABONBA_PTR_FROM_JSON(PostCache, postCache_);
      DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
      DARABONBA_PTR_FROM_JSON(QueryStringMode, queryStringMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(ServeStale, serveStale_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_FROM_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_FROM_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_FROM_JSON(UserLanguage, userLanguage_);
    };
    GetCacheRuleResponseBody() = default ;
    GetCacheRuleResponseBody(const GetCacheRuleResponseBody &) = default ;
    GetCacheRuleResponseBody(GetCacheRuleResponseBody &&) = default ;
    GetCacheRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCacheRuleResponseBody() = default ;
    GetCacheRuleResponseBody& operator=(const GetCacheRuleResponseBody &) = default ;
    GetCacheRuleResponseBody& operator=(GetCacheRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalCacheablePorts_ == nullptr
        && this->browserCacheMode_ == nullptr && this->browserCacheTtl_ == nullptr && this->bypassCache_ == nullptr && this->cacheDeceptionArmor_ == nullptr && this->cacheReserveEligibility_ == nullptr
        && this->checkPresenceCookie_ == nullptr && this->checkPresenceHeader_ == nullptr && this->configId_ == nullptr && this->configType_ == nullptr && this->edgeCacheMode_ == nullptr
        && this->edgeCacheTtl_ == nullptr && this->edgeStatusCodeCacheTtl_ == nullptr && this->includeCookie_ == nullptr && this->includeHeader_ == nullptr && this->postBodyCacheKey_ == nullptr
        && this->postBodySizeLimit_ == nullptr && this->postCache_ == nullptr && this->queryString_ == nullptr && this->queryStringMode_ == nullptr && this->requestId_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->serveStale_ == nullptr
        && this->siteVersion_ == nullptr && this->sortQueryStringForCache_ == nullptr && this->userDeviceType_ == nullptr && this->userGeo_ == nullptr && this->userLanguage_ == nullptr; };
    // additionalCacheablePorts Field Functions 
    bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
    void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
    inline string getAdditionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
    inline GetCacheRuleResponseBody& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


    // browserCacheMode Field Functions 
    bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
    void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
    inline string getBrowserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
    inline GetCacheRuleResponseBody& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


    // browserCacheTtl Field Functions 
    bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
    void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
    inline string getBrowserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
    inline GetCacheRuleResponseBody& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


    // bypassCache Field Functions 
    bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
    void deleteBypassCache() { this->bypassCache_ = nullptr;};
    inline string getBypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
    inline GetCacheRuleResponseBody& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


    // cacheDeceptionArmor Field Functions 
    bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
    void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
    inline string getCacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
    inline GetCacheRuleResponseBody& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


    // cacheReserveEligibility Field Functions 
    bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
    void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
    inline string getCacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
    inline GetCacheRuleResponseBody& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


    // checkPresenceCookie Field Functions 
    bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
    void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
    inline string getCheckPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
    inline GetCacheRuleResponseBody& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


    // checkPresenceHeader Field Functions 
    bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
    void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
    inline string getCheckPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
    inline GetCacheRuleResponseBody& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetCacheRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetCacheRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // edgeCacheMode Field Functions 
    bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
    void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
    inline string getEdgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
    inline GetCacheRuleResponseBody& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


    // edgeCacheTtl Field Functions 
    bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
    void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
    inline string getEdgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
    inline GetCacheRuleResponseBody& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


    // edgeStatusCodeCacheTtl Field Functions 
    bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
    void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
    inline string getEdgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
    inline GetCacheRuleResponseBody& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


    // includeCookie Field Functions 
    bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
    void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
    inline string getIncludeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
    inline GetCacheRuleResponseBody& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


    // includeHeader Field Functions 
    bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
    void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
    inline string getIncludeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
    inline GetCacheRuleResponseBody& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


    // postBodyCacheKey Field Functions 
    bool hasPostBodyCacheKey() const { return this->postBodyCacheKey_ != nullptr;};
    void deletePostBodyCacheKey() { this->postBodyCacheKey_ = nullptr;};
    inline string getPostBodyCacheKey() const { DARABONBA_PTR_GET_DEFAULT(postBodyCacheKey_, "") };
    inline GetCacheRuleResponseBody& setPostBodyCacheKey(string postBodyCacheKey) { DARABONBA_PTR_SET_VALUE(postBodyCacheKey_, postBodyCacheKey) };


    // postBodySizeLimit Field Functions 
    bool hasPostBodySizeLimit() const { return this->postBodySizeLimit_ != nullptr;};
    void deletePostBodySizeLimit() { this->postBodySizeLimit_ = nullptr;};
    inline string getPostBodySizeLimit() const { DARABONBA_PTR_GET_DEFAULT(postBodySizeLimit_, "") };
    inline GetCacheRuleResponseBody& setPostBodySizeLimit(string postBodySizeLimit) { DARABONBA_PTR_SET_VALUE(postBodySizeLimit_, postBodySizeLimit) };


    // postCache Field Functions 
    bool hasPostCache() const { return this->postCache_ != nullptr;};
    void deletePostCache() { this->postCache_ = nullptr;};
    inline string getPostCache() const { DARABONBA_PTR_GET_DEFAULT(postCache_, "") };
    inline GetCacheRuleResponseBody& setPostCache(string postCache) { DARABONBA_PTR_SET_VALUE(postCache_, postCache) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string getQueryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline GetCacheRuleResponseBody& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // queryStringMode Field Functions 
    bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
    void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
    inline string getQueryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
    inline GetCacheRuleResponseBody& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCacheRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetCacheRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetCacheRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetCacheRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetCacheRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serveStale Field Functions 
    bool hasServeStale() const { return this->serveStale_ != nullptr;};
    void deleteServeStale() { this->serveStale_ = nullptr;};
    inline string getServeStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
    inline GetCacheRuleResponseBody& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetCacheRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // sortQueryStringForCache Field Functions 
    bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
    void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
    inline string getSortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
    inline GetCacheRuleResponseBody& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


    // userDeviceType Field Functions 
    bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
    void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
    inline string getUserDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
    inline GetCacheRuleResponseBody& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


    // userGeo Field Functions 
    bool hasUserGeo() const { return this->userGeo_ != nullptr;};
    void deleteUserGeo() { this->userGeo_ = nullptr;};
    inline string getUserGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
    inline GetCacheRuleResponseBody& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


    // userLanguage Field Functions 
    bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
    void deleteUserLanguage() { this->userLanguage_ = nullptr;};
    inline string getUserLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
    inline GetCacheRuleResponseBody& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


  protected:
    // Enable caching on the specified ports. Value range: 8880, 2052, 2082, 2086, 2095, 2053, 2083, 2087, 2096.
    shared_ptr<string> additionalCacheablePorts_ {};
    // Browser cache mode. Value range:
    // - no_cache: Do not cache.
    // - follow_origin: Follow origin cache policy.
    // - override_origin: Override origin cache policy.
    shared_ptr<string> browserCacheMode_ {};
    // Browser cache expiration time, in seconds.
    shared_ptr<string> browserCacheTtl_ {};
    // Set bypass cache mode. Value range:
    // 
    // - cache_all: Cache all requests.
    // - bypass_all: Bypass cache for all requests.
    shared_ptr<string> bypassCache_ {};
    // Cache deception defense. Used to defend against web cache deception attacks. Only the verified cache content will be cached. Value range:
    // 
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> cacheDeceptionArmor_ {};
    // Cache reserve eligibility. Used to control whether user requests bypass the cache reserve node when returning to the origin. Value range:
    // 
    // - bypass_cache_reserve: Requests bypass the cache reserve.
    // - eligible_for_cache_reserve: Eligible for cache reserve.
    shared_ptr<string> cacheReserveEligibility_ {};
    // When generating the cache key, check if the cookie exists. If it does, add the cookie name (cookie names are case-insensitive) to the cache key. Supports multiple cookie names, separated by spaces.
    shared_ptr<string> checkPresenceCookie_ {};
    // When generating the cache key, check if the header exists. If it does, add the header name (header names are case-insensitive) to the cache key. Supports multiple header names, separated by spaces.
    shared_ptr<string> checkPresenceHeader_ {};
    // Configuration ID.
    shared_ptr<int64_t> configId_ {};
    // Configuration type, which can be used to query global or rule configurations. Value range:
    // - global: Query global configuration;
    // - rule: Query rule configuration;
    shared_ptr<string> configType_ {};
    // Edge cache mode. Value range:
    // - follow_origin: Follow origin cache policy (if exists), otherwise use the default cache policy.
    // - no_cache: Do not cache.
    // - override_origin: Override origin cache policy.
    // - follow_origin_bypass: Follow origin cache policy (if exists), otherwise do not cache.
    shared_ptr<string> edgeCacheMode_ {};
    // Edge cache expiration time, in seconds.
    shared_ptr<string> edgeCacheTtl_ {};
    // Status code cache expiration time, in seconds.
    shared_ptr<string> edgeStatusCodeCacheTtl_ {};
    // When generating the cache key, include the specified cookie names and their values. Supports multiple values, separated by spaces.
    shared_ptr<string> includeCookie_ {};
    // When generating the cache key, include the specified header names and their values. Supports multiple values, separated by spaces.
    shared_ptr<string> includeHeader_ {};
    shared_ptr<string> postBodyCacheKey_ {};
    shared_ptr<string> postBodySizeLimit_ {};
    shared_ptr<string> postCache_ {};
    // The query strings to be retained or deleted, supporting multiple values separated by spaces.
    shared_ptr<string> queryString_ {};
    // The processing mode for query strings when generating cache keys. Value range:
    // 
    // - ignore_all: Ignore all.
    // - exclude_query_string: Exclude specified query strings.
    // - reserve_all: Default, reserve all.
    // - include_query_string: Include specified query strings.
    shared_ptr<string> queryStringMode_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter does not need to be set when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter does not need to be set when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    // Rule execution order. The smaller the value, the higher the priority.
    shared_ptr<int32_t> sequence_ {};
    // Serve stale cache. When enabled, the node can still use the cached expired files to respond to user requests even if the origin server is unavailable. Value range:
    // 
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> serveStale_ {};
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the configuration, defaulting to version 0.
    shared_ptr<int32_t> siteVersion_ {};
    // Query string sorting. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> sortQueryStringForCache_ {};
    // When generating the cache key, include the client device type. Value range:
    // 
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> userDeviceType_ {};
    // When generating the cache key, include the client\\"s geographic location. Value range:
    // 
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> userGeo_ {};
    // When generating the cache key, include the client\\"s language type. Value range:
    // 
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> userLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
