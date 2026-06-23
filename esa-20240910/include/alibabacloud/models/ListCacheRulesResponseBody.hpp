// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACHERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCACHERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCacheRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCacheRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListCacheRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListCacheRulesResponseBody() = default ;
    ListCacheRulesResponseBody(const ListCacheRulesResponseBody &) = default ;
    ListCacheRulesResponseBody(ListCacheRulesResponseBody &&) = default ;
    ListCacheRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCacheRulesResponseBody() = default ;
    ListCacheRulesResponseBody& operator=(const ListCacheRulesResponseBody &) = default ;
    ListCacheRulesResponseBody& operator=(ListCacheRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
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
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->additionalCacheablePorts_ == nullptr
        && this->browserCacheMode_ == nullptr && this->browserCacheTtl_ == nullptr && this->bypassCache_ == nullptr && this->cacheDeceptionArmor_ == nullptr && this->cacheReserveEligibility_ == nullptr
        && this->checkPresenceCookie_ == nullptr && this->checkPresenceHeader_ == nullptr && this->configId_ == nullptr && this->configType_ == nullptr && this->edgeCacheMode_ == nullptr
        && this->edgeCacheTtl_ == nullptr && this->edgeStatusCodeCacheTtl_ == nullptr && this->includeCookie_ == nullptr && this->includeHeader_ == nullptr && this->postBodyCacheKey_ == nullptr
        && this->postBodySizeLimit_ == nullptr && this->postCache_ == nullptr && this->queryString_ == nullptr && this->queryStringMode_ == nullptr && this->rule_ == nullptr
        && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->serveStale_ == nullptr && this->siteVersion_ == nullptr
        && this->sortQueryStringForCache_ == nullptr && this->userDeviceType_ == nullptr && this->userGeo_ == nullptr && this->userLanguage_ == nullptr; };
      // additionalCacheablePorts Field Functions 
      bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
      void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
      inline string getAdditionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
      inline Configs& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


      // browserCacheMode Field Functions 
      bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
      void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
      inline string getBrowserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
      inline Configs& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


      // browserCacheTtl Field Functions 
      bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
      void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
      inline string getBrowserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
      inline Configs& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


      // bypassCache Field Functions 
      bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
      void deleteBypassCache() { this->bypassCache_ = nullptr;};
      inline string getBypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
      inline Configs& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


      // cacheDeceptionArmor Field Functions 
      bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
      void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
      inline string getCacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
      inline Configs& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


      // cacheReserveEligibility Field Functions 
      bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
      void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
      inline string getCacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
      inline Configs& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


      // checkPresenceCookie Field Functions 
      bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
      void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
      inline string getCheckPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
      inline Configs& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


      // checkPresenceHeader Field Functions 
      bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
      void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
      inline string getCheckPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
      inline Configs& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // edgeCacheMode Field Functions 
      bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
      void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
      inline string getEdgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
      inline Configs& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


      // edgeCacheTtl Field Functions 
      bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
      void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
      inline string getEdgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
      inline Configs& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


      // edgeStatusCodeCacheTtl Field Functions 
      bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
      void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
      inline string getEdgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
      inline Configs& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


      // includeCookie Field Functions 
      bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
      void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
      inline string getIncludeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
      inline Configs& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


      // includeHeader Field Functions 
      bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
      void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
      inline string getIncludeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
      inline Configs& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


      // postBodyCacheKey Field Functions 
      bool hasPostBodyCacheKey() const { return this->postBodyCacheKey_ != nullptr;};
      void deletePostBodyCacheKey() { this->postBodyCacheKey_ = nullptr;};
      inline string getPostBodyCacheKey() const { DARABONBA_PTR_GET_DEFAULT(postBodyCacheKey_, "") };
      inline Configs& setPostBodyCacheKey(string postBodyCacheKey) { DARABONBA_PTR_SET_VALUE(postBodyCacheKey_, postBodyCacheKey) };


      // postBodySizeLimit Field Functions 
      bool hasPostBodySizeLimit() const { return this->postBodySizeLimit_ != nullptr;};
      void deletePostBodySizeLimit() { this->postBodySizeLimit_ = nullptr;};
      inline string getPostBodySizeLimit() const { DARABONBA_PTR_GET_DEFAULT(postBodySizeLimit_, "") };
      inline Configs& setPostBodySizeLimit(string postBodySizeLimit) { DARABONBA_PTR_SET_VALUE(postBodySizeLimit_, postBodySizeLimit) };


      // postCache Field Functions 
      bool hasPostCache() const { return this->postCache_ != nullptr;};
      void deletePostCache() { this->postCache_ = nullptr;};
      inline string getPostCache() const { DARABONBA_PTR_GET_DEFAULT(postCache_, "") };
      inline Configs& setPostCache(string postCache) { DARABONBA_PTR_SET_VALUE(postCache_, postCache) };


      // queryString Field Functions 
      bool hasQueryString() const { return this->queryString_ != nullptr;};
      void deleteQueryString() { this->queryString_ = nullptr;};
      inline string getQueryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
      inline Configs& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


      // queryStringMode Field Functions 
      bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
      void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
      inline string getQueryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
      inline Configs& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Configs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // ruleEnable Field Functions 
      bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
      void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
      inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
      inline Configs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Configs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Configs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // serveStale Field Functions 
      bool hasServeStale() const { return this->serveStale_ != nullptr;};
      void deleteServeStale() { this->serveStale_ = nullptr;};
      inline string getServeStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
      inline Configs& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


      // sortQueryStringForCache Field Functions 
      bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
      void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
      inline string getSortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
      inline Configs& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


      // userDeviceType Field Functions 
      bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
      void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
      inline string getUserDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
      inline Configs& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


      // userGeo Field Functions 
      bool hasUserGeo() const { return this->userGeo_ != nullptr;};
      void deleteUserGeo() { this->userGeo_ = nullptr;};
      inline string getUserGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
      inline Configs& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


      // userLanguage Field Functions 
      bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
      void deleteUserLanguage() { this->userLanguage_ = nullptr;};
      inline string getUserLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
      inline Configs& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


    protected:
      // - Enables caching on specified ports.
      // - Valid values: 8880, 2052, 2082, 2086, 2095, 2053, 2083, 2087, and 2096.
      // - Multiple ports are separated by commas (,).
      shared_ptr<string> additionalCacheablePorts_ {};
      // The browser cache mode. Valid values:
      // - no_cache: does not cache.
      // - follow_origin: follows the origin cache policy.
      // - override_origin: overrides the origin cache policy.
      shared_ptr<string> browserCacheMode_ {};
      // The browser cache expiration time, in seconds.
      shared_ptr<string> browserCacheTtl_ {};
      // The bypass cache mode. Valid values:
      // - cache_all: caches all requests.
      // - bypass_all: bypasses cache for all requests.
      shared_ptr<string> bypassCache_ {};
      // The cache deception armor. Protects against web cache deception attacks by caching only content that passes validation. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> cacheDeceptionArmor_ {};
      // The cache reserve eligibility. Controls whether user requests bypass the cache reserve node during back-to-origin. Valid values:
      // - bypass_cache_reserve: requests bypass cache reserve.
      // - eligible_for_cache_reserve: requests are eligible for cache reserve.
      shared_ptr<string> cacheReserveEligibility_ {};
      // When generating cache keys, checks whether the specified cookies exist. If a cookie exists, its name (case-insensitive) is added to the cache key. Multiple cookie names are separated by spaces. Cookie names support the following character types:
      // - Symbols: ! # $ % & \\" * + - . ^ _ ` | ~
      // - Digits: 0-9
      // - Letters: lowercase a-z.
      shared_ptr<string> checkPresenceCookie_ {};
      // When generating cache keys, checks whether the specified headers exist. If a header exists, its name (case-insensitive) is added to the cache key. Multiple header names are separated by spaces. Header names support the following character types:
      // - Symbols: ! # $ % & \\" * + - . ^ _ ` | ~
      // - Digits: 0-9
      // - Letters: lowercase a-z.
      shared_ptr<string> checkPresenceHeader_ {};
      // The configuration ID.
      shared_ptr<int64_t> configId_ {};
      // The configuration type. You can use this parameter to query global or rule configurations. Valid values:
      // 
      // - global: global configuration.
      // - rule: rule configuration.
      shared_ptr<string> configType_ {};
      // The edge cache mode. Valid values:
      // - follow_origin: follows the origin cache policy if present. Otherwise, uses the default cache policy.
      // - no_cache: does not cache.
      // - override_origin: overrides the origin cache policy.
      // - follow_origin_bypass: follows the origin cache policy if present. Otherwise, does not cache.
      // - follow_origin_override: follows the origin cache policy if present. Otherwise, uses a custom cache TTL.
      shared_ptr<string> edgeCacheMode_ {};
      // The edge cache expiration time, in seconds.
      shared_ptr<string> edgeCacheTtl_ {};
      // The status code cache expiration time, in seconds.
      // - You can set the cache expiration time for specific status codes. For example, 404=10 indicates that the 404 status code is cached for 10 seconds.
      // - You can set the cache expiration time for 4xx or 5xx series status codes. For example, 4xx=10 indicates that all 4xx status codes are cached for 10 seconds.
      // - You can set the cache expiration time for multiple status codes. Separate multiple status codes with commas (,).
      shared_ptr<string> edgeStatusCodeCacheTtl_ {};
      // The specified cookie names (case-insensitive) and their values to include when generating cache keys. Multiple values are separated by spaces. Cookie names support the following character types:
      // - Symbols: ! # $ % & \\" * + - . ^ _ ` | ~
      // - Digits: 0-9
      // - Letters: lowercase a-z.
      shared_ptr<string> includeCookie_ {};
      // The specified header names (case-insensitive) and their values to include when generating cache keys. Multiple values are separated by spaces. Header names support the following character types:
      // - Symbols: ! # $ % & \\" * + - . ^ _ ` | ~
      // - Digits: 0-9
      // - Letters: lowercase a-z.
      shared_ptr<string> includeHeader_ {};
      // The cache key handling mode for POST caching. The following two modes are supported:
      // - md5: calculates the MD5 hash of the body content and adds the MD5 value to the cache key.
      // - ignore: ignores the body content in the cache key.
      shared_ptr<string> postBodyCacheKey_ {};
      // The body size limit for POST caching. The value is a number in KB. Valid values: 1 to 8. If this parameter is left empty, the default value of 8 KB takes effect.
      shared_ptr<string> postBodySizeLimit_ {};
      // Specifies whether to enable POST caching.
      shared_ptr<string> postCache_ {};
      // The query strings to retain or remove when generating cache keys. Multiple values are separated by spaces.
      shared_ptr<string> queryString_ {};
      // The query string handling mode when generating cache keys. Valid values:
      // - ignore_all: ignores all query strings.
      // - exclude_query_string: removes specified query strings.
      // - reserve_all: retains all query strings. This is the default value.
      // - include_query_string: retains specified query strings.
      shared_ptr<string> queryStringMode_ {};
      // The rule content, which uses conditional expressions to match user requests. You do not need to set this parameter when you add a global configuration. Two scenarios are supported:
      // - Match all incoming requests: set the value to true.
      // - Match specified requests: set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
      shared_ptr<string> rule_ {};
      // The rule switch. You do not need to set this parameter when you add a global configuration. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> ruleEnable_ {};
      // The rule name. You do not need to set this parameter when you add a global configuration.
      shared_ptr<string> ruleName_ {};
      // The rule execution order. A smaller value indicates a higher priority.
      shared_ptr<int32_t> sequence_ {};
      // Specifies whether to serve stale cache. When enabled, edge nodes can respond to user requests with cached expired files when the origin server is unavailable. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> serveStale_ {};
      // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version for which the configuration takes effect. Default value: 0.
      shared_ptr<int32_t> siteVersion_ {};
      // Specifies whether to sort query strings. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> sortQueryStringForCache_ {};
      // Specifies whether to include the type of the client when generating cache keys. Valid values:
      // - on: enabled.
      // - off: shutdown.
      shared_ptr<string> userDeviceType_ {};
      // Specifies whether to include the client geographic location when generating cache keys. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> userGeo_ {};
      // Specifies whether to include the client language type when generating cache keys. Valid values:
      // - on: enabled.
      // - off: disabled.
      shared_ptr<string> userLanguage_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListCacheRulesResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListCacheRulesResponseBody::Configs>) };
    inline vector<ListCacheRulesResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListCacheRulesResponseBody::Configs>) };
    inline ListCacheRulesResponseBody& setConfigs(const vector<ListCacheRulesResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListCacheRulesResponseBody& setConfigs(vector<ListCacheRulesResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCacheRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCacheRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCacheRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCacheRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListCacheRulesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configuration list in the response body.
    shared_ptr<vector<ListCacheRulesResponseBody::Configs>> configs_ {};
    // The current page number, which is the same as the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
