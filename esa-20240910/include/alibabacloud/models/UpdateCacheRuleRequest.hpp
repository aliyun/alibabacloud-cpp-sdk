// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECACHERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECACHERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCacheRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCacheRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_TO_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_TO_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_TO_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_TO_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_TO_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_TO_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_TO_JSON(CheckPresenceHeader, checkPresenceHeader_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
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
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(ServeStale, serveStale_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_TO_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_TO_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_TO_JSON(UserLanguage, userLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCacheRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_FROM_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_FROM_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_FROM_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceHeader, checkPresenceHeader_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
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
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(ServeStale, serveStale_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_FROM_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_FROM_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_FROM_JSON(UserLanguage, userLanguage_);
    };
    UpdateCacheRuleRequest() = default ;
    UpdateCacheRuleRequest(const UpdateCacheRuleRequest &) = default ;
    UpdateCacheRuleRequest(UpdateCacheRuleRequest &&) = default ;
    UpdateCacheRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCacheRuleRequest() = default ;
    UpdateCacheRuleRequest& operator=(const UpdateCacheRuleRequest &) = default ;
    UpdateCacheRuleRequest& operator=(UpdateCacheRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalCacheablePorts_ == nullptr
        && this->browserCacheMode_ == nullptr && this->browserCacheTtl_ == nullptr && this->bypassCache_ == nullptr && this->cacheDeceptionArmor_ == nullptr && this->cacheReserveEligibility_ == nullptr
        && this->checkPresenceCookie_ == nullptr && this->checkPresenceHeader_ == nullptr && this->configId_ == nullptr && this->edgeCacheMode_ == nullptr && this->edgeCacheTtl_ == nullptr
        && this->edgeStatusCodeCacheTtl_ == nullptr && this->includeCookie_ == nullptr && this->includeHeader_ == nullptr && this->postBodyCacheKey_ == nullptr && this->postBodySizeLimit_ == nullptr
        && this->postCache_ == nullptr && this->queryString_ == nullptr && this->queryStringMode_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->serveStale_ == nullptr && this->siteId_ == nullptr && this->sortQueryStringForCache_ == nullptr
        && this->userDeviceType_ == nullptr && this->userGeo_ == nullptr && this->userLanguage_ == nullptr; };
    // additionalCacheablePorts Field Functions 
    bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
    void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
    inline string getAdditionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
    inline UpdateCacheRuleRequest& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


    // browserCacheMode Field Functions 
    bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
    void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
    inline string getBrowserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
    inline UpdateCacheRuleRequest& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


    // browserCacheTtl Field Functions 
    bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
    void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
    inline string getBrowserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
    inline UpdateCacheRuleRequest& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


    // bypassCache Field Functions 
    bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
    void deleteBypassCache() { this->bypassCache_ = nullptr;};
    inline string getBypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
    inline UpdateCacheRuleRequest& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


    // cacheDeceptionArmor Field Functions 
    bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
    void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
    inline string getCacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
    inline UpdateCacheRuleRequest& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


    // cacheReserveEligibility Field Functions 
    bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
    void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
    inline string getCacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
    inline UpdateCacheRuleRequest& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


    // checkPresenceCookie Field Functions 
    bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
    void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
    inline string getCheckPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
    inline UpdateCacheRuleRequest& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


    // checkPresenceHeader Field Functions 
    bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
    void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
    inline string getCheckPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
    inline UpdateCacheRuleRequest& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateCacheRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // edgeCacheMode Field Functions 
    bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
    void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
    inline string getEdgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
    inline UpdateCacheRuleRequest& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


    // edgeCacheTtl Field Functions 
    bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
    void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
    inline string getEdgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
    inline UpdateCacheRuleRequest& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


    // edgeStatusCodeCacheTtl Field Functions 
    bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
    void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
    inline string getEdgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
    inline UpdateCacheRuleRequest& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


    // includeCookie Field Functions 
    bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
    void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
    inline string getIncludeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
    inline UpdateCacheRuleRequest& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


    // includeHeader Field Functions 
    bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
    void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
    inline string getIncludeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
    inline UpdateCacheRuleRequest& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


    // postBodyCacheKey Field Functions 
    bool hasPostBodyCacheKey() const { return this->postBodyCacheKey_ != nullptr;};
    void deletePostBodyCacheKey() { this->postBodyCacheKey_ = nullptr;};
    inline string getPostBodyCacheKey() const { DARABONBA_PTR_GET_DEFAULT(postBodyCacheKey_, "") };
    inline UpdateCacheRuleRequest& setPostBodyCacheKey(string postBodyCacheKey) { DARABONBA_PTR_SET_VALUE(postBodyCacheKey_, postBodyCacheKey) };


    // postBodySizeLimit Field Functions 
    bool hasPostBodySizeLimit() const { return this->postBodySizeLimit_ != nullptr;};
    void deletePostBodySizeLimit() { this->postBodySizeLimit_ = nullptr;};
    inline string getPostBodySizeLimit() const { DARABONBA_PTR_GET_DEFAULT(postBodySizeLimit_, "") };
    inline UpdateCacheRuleRequest& setPostBodySizeLimit(string postBodySizeLimit) { DARABONBA_PTR_SET_VALUE(postBodySizeLimit_, postBodySizeLimit) };


    // postCache Field Functions 
    bool hasPostCache() const { return this->postCache_ != nullptr;};
    void deletePostCache() { this->postCache_ = nullptr;};
    inline string getPostCache() const { DARABONBA_PTR_GET_DEFAULT(postCache_, "") };
    inline UpdateCacheRuleRequest& setPostCache(string postCache) { DARABONBA_PTR_SET_VALUE(postCache_, postCache) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string getQueryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline UpdateCacheRuleRequest& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // queryStringMode Field Functions 
    bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
    void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
    inline string getQueryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
    inline UpdateCacheRuleRequest& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateCacheRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateCacheRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateCacheRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateCacheRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serveStale Field Functions 
    bool hasServeStale() const { return this->serveStale_ != nullptr;};
    void deleteServeStale() { this->serveStale_ = nullptr;};
    inline string getServeStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
    inline UpdateCacheRuleRequest& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCacheRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sortQueryStringForCache Field Functions 
    bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
    void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
    inline string getSortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
    inline UpdateCacheRuleRequest& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


    // userDeviceType Field Functions 
    bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
    void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
    inline string getUserDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
    inline UpdateCacheRuleRequest& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


    // userGeo Field Functions 
    bool hasUserGeo() const { return this->userGeo_ != nullptr;};
    void deleteUserGeo() { this->userGeo_ = nullptr;};
    inline string getUserGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
    inline UpdateCacheRuleRequest& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


    // userLanguage Field Functions 
    bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
    void deleteUserLanguage() { this->userLanguage_ = nullptr;};
    inline string getUserLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
    inline UpdateCacheRuleRequest& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


  protected:
    // - Enables caching on the specified ports.
    // 
    // - Valid values: `8880`, `2052`, `2082`, `2086`, `2095`, `2053`, `2083`, `2087`, `2096`
    // 
    // - Separate multiple ports with commas.
    shared_ptr<string> additionalCacheablePorts_ {};
    // The browser cache mode. Valid values:
    // 
    // - `no_cache`: Does not cache content in the browser.
    // 
    // - `follow_origin`: Follows the caching policy of the origin server.
    // 
    // - `override_origin`: Overrides the caching policy of the origin server.
    shared_ptr<string> browserCacheMode_ {};
    // The browser cache TTL (Time to Live), in seconds.
    shared_ptr<string> browserCacheTtl_ {};
    // The cache bypass mode. Valid values:
    // 
    // - `cache_all`: Caches all requests.
    // 
    // - `bypass_all`: Bypasses the cache for all requests.
    shared_ptr<string> bypassCache_ {};
    // Defends against Web Cache Deception attacks by caching only validated content. Valid values:
    // 
    // - `on`: Enables the feature.
    // 
    // - `off`: Disables the feature.
    shared_ptr<string> cacheDeceptionArmor_ {};
    // Controls whether requests bypass the cache reserve node during an origin-pull. Valid values:
    // 
    // - `bypass_cache_reserve`: The request bypasses the cache reserve.
    // 
    // - `eligible_for_cache_reserve`: The request is eligible for cache reserve.
    shared_ptr<string> cacheReserveEligibility_ {};
    // The cookies to check for. If a specified cookie is present in the request, its name (case-insensitive) is added to the cache key. Separate multiple cookies with spaces. Cookie names can contain the following characters:
    // 
    // - Symbols: ! # $ % & \\" \\* + - . ^ _ | \\~
    // 
    // - Digits: 0-9
    // 
    // - Lowercase letters: a-z
    shared_ptr<string> checkPresenceCookie_ {};
    // The headers to check for. If a specified header is present in the request, its name (case-insensitive) is added to the cache key. Separate multiple headers with spaces. Header names can contain the following characters:
    // 
    // - Symbols: ! # $ % & \\" \\* + - . ^ _ | \\~
    // 
    // - Digits: 0-9
    // 
    // - Lowercase letters: a-z
    shared_ptr<string> checkPresenceHeader_ {};
    // The configuration ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // The cache mode for the edge node. Valid values:
    // 
    // - `follow_origin`: Follows the origin server\\"s caching policy. If the origin server has no policy, the default policy is used.
    // 
    // - `no_cache`: Does not cache content.
    // 
    // - `override_origin`: Overrides the caching policy of the origin server.
    // 
    // - `follow_origin_bypass`: Follows the caching policy of the origin server, if one exists. Otherwise, content is not cached.
    // 
    // - `follow_origin_override`: Follows the caching policy of the origin server, if one exists. Otherwise, a custom cache TTL is used.
    shared_ptr<string> edgeCacheMode_ {};
    // The edge node cache TTL (Time to Live), in seconds.
    shared_ptr<string> edgeCacheTtl_ {};
    // The cache TTL for specific status codes, in seconds.
    // 
    // - You can set the cache TTL for a specific status code. For example, `404=10` caches responses with a 404 status code for 10 seconds.
    // 
    // - You can set the cache TTL for `4xx` and `5xx` status code ranges. For example, `4xx=10` caches all responses with a `4xx` status code for 10 seconds.
    // 
    // - Separate multiple status code settings with commas.
    shared_ptr<string> edgeStatusCodeCacheTtl_ {};
    // The cookies to include in the cache key. Both the cookie names (case-insensitive) and their values are used. Separate multiple cookies with spaces. Cookie names can contain the following characters:
    // 
    // - Symbols: ! # $ % & \\" \\* + - . ^ _ | \\~
    // 
    // - Digits: 0-9
    // 
    // - Lowercase letters: a-z
    shared_ptr<string> includeCookie_ {};
    // The headers to include in the cache key. Both the header names (case-insensitive) and their values are used. Separate multiple headers with spaces. Header names can contain the following characters:
    // 
    // - Symbols: ! # $ % & \\" \\* + - . ^ _ | \\~
    // 
    // - Digits: 0-9
    // 
    // - Lowercase letters: a-z
    shared_ptr<string> includeHeader_ {};
    // Controls how the request body is used to generate the cache key for POST requests. Valid values:
    // 
    // - `md5`: Calculates the MD5 hash of the request body and includes the hash in the cache key.
    // 
    // - `ignore`: Ignores the request body when generating the cache key.
    shared_ptr<string> postBodyCacheKey_ {};
    // The maximum size of a request body for POST caching, in KB. The value must be an integer from 1 to 8. If you leave this parameter empty, the default value of 8 KB is used.
    shared_ptr<string> postBodySizeLimit_ {};
    // Controls whether to cache responses to POST requests.
    shared_ptr<string> postCache_ {};
    // The query string parameters to include in or exclude from the cache key. Separate multiple parameters with spaces.
    shared_ptr<string> queryString_ {};
    // Controls how query strings are used to generate a cache key. Valid values:
    // 
    // - `ignore_all`: Ignores all query strings.
    // 
    // - `exclude_query_string`: Removes specified query strings.
    // 
    // - `reserve_all`: Retains all query strings. This is the default value.
    // 
    // - `include_query_string`: Retains only specified query strings.
    shared_ptr<string> queryStringMode_ {};
    // A conditional expression that matches user requests. This parameter is optional for a global configuration. Two scenarios are supported:
    // 
    // - To match all incoming requests, set the value to `true`.
    // 
    // - To match specific requests, set the value to a custom expression, for example, `(http.host eq "video.example.com")`.
    shared_ptr<string> rule_ {};
    // Controls whether the rule is enabled. This parameter is optional for a global configuration. Valid values:
    // 
    // - `on`: Enables the rule.
    // 
    // - `off`: Disables the rule.
    shared_ptr<string> ruleEnable_ {};
    // The name of the rule. This parameter is optional for a global configuration.
    shared_ptr<string> ruleName_ {};
    // The execution priority of the rule. A smaller value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // Controls whether to serve stale content. If enabled, an edge node can serve expired content from its cache if the origin server is unavailable. Valid values:
    // 
    // - `on`: Enables this feature.
    // 
    // - `off`: Disables this feature.
    shared_ptr<string> serveStale_ {};
    // The ID of the site. To get this ID, call the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Controls whether to sort query string parameters when generating a cache key. Valid values:
    // 
    // - `on`: Enables sorting.
    // 
    // - `off`: Disables sorting.
    shared_ptr<string> sortQueryStringForCache_ {};
    // Controls whether to include the client device type in the cache key. Valid values:
    // 
    // - `on`: Enables this feature.
    // 
    // - `off`: Disables this feature.
    shared_ptr<string> userDeviceType_ {};
    // Controls whether to include the client\\"s geographic location in the cache key. Valid values:
    // 
    // - `on`: Enables this feature.
    // 
    // - `off`: Disables this feature.
    shared_ptr<string> userGeo_ {};
    // Controls whether to include the client\\"s language in the cache key. Valid values:
    // 
    // - `on`: Enables this feature.
    // 
    // - `off`: Disables this feature.
    shared_ptr<string> userLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
