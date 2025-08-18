// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACHERULESRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCACHERULESRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCacheRulesResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCacheRulesResponseBodyConfigs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCacheRulesResponseBodyConfigs& obj) { 
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
    ListCacheRulesResponseBodyConfigs() = default ;
    ListCacheRulesResponseBodyConfigs(const ListCacheRulesResponseBodyConfigs &) = default ;
    ListCacheRulesResponseBodyConfigs(ListCacheRulesResponseBodyConfigs &&) = default ;
    ListCacheRulesResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCacheRulesResponseBodyConfigs() = default ;
    ListCacheRulesResponseBodyConfigs& operator=(const ListCacheRulesResponseBodyConfigs &) = default ;
    ListCacheRulesResponseBodyConfigs& operator=(ListCacheRulesResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalCacheablePorts_ != nullptr
        && this->browserCacheMode_ != nullptr && this->browserCacheTtl_ != nullptr && this->bypassCache_ != nullptr && this->cacheDeceptionArmor_ != nullptr && this->cacheReserveEligibility_ != nullptr
        && this->checkPresenceCookie_ != nullptr && this->checkPresenceHeader_ != nullptr && this->configId_ != nullptr && this->configType_ != nullptr && this->edgeCacheMode_ != nullptr
        && this->edgeCacheTtl_ != nullptr && this->edgeStatusCodeCacheTtl_ != nullptr && this->includeCookie_ != nullptr && this->includeHeader_ != nullptr && this->queryString_ != nullptr
        && this->queryStringMode_ != nullptr && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr
        && this->serveStale_ != nullptr && this->siteVersion_ != nullptr && this->sortQueryStringForCache_ != nullptr && this->userDeviceType_ != nullptr && this->userGeo_ != nullptr
        && this->userLanguage_ != nullptr; };
    // additionalCacheablePorts Field Functions 
    bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
    void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
    inline string additionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
    inline ListCacheRulesResponseBodyConfigs& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


    // browserCacheMode Field Functions 
    bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
    void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
    inline string browserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
    inline ListCacheRulesResponseBodyConfigs& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


    // browserCacheTtl Field Functions 
    bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
    void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
    inline string browserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
    inline ListCacheRulesResponseBodyConfigs& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


    // bypassCache Field Functions 
    bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
    void deleteBypassCache() { this->bypassCache_ = nullptr;};
    inline string bypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
    inline ListCacheRulesResponseBodyConfigs& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


    // cacheDeceptionArmor Field Functions 
    bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
    void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
    inline string cacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
    inline ListCacheRulesResponseBodyConfigs& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


    // cacheReserveEligibility Field Functions 
    bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
    void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
    inline string cacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
    inline ListCacheRulesResponseBodyConfigs& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


    // checkPresenceCookie Field Functions 
    bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
    void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
    inline string checkPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
    inline ListCacheRulesResponseBodyConfigs& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


    // checkPresenceHeader Field Functions 
    bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
    void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
    inline string checkPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
    inline ListCacheRulesResponseBodyConfigs& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListCacheRulesResponseBodyConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline ListCacheRulesResponseBodyConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // edgeCacheMode Field Functions 
    bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
    void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
    inline string edgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
    inline ListCacheRulesResponseBodyConfigs& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


    // edgeCacheTtl Field Functions 
    bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
    void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
    inline string edgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
    inline ListCacheRulesResponseBodyConfigs& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


    // edgeStatusCodeCacheTtl Field Functions 
    bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
    void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
    inline string edgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
    inline ListCacheRulesResponseBodyConfigs& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


    // includeCookie Field Functions 
    bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
    void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
    inline string includeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
    inline ListCacheRulesResponseBodyConfigs& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


    // includeHeader Field Functions 
    bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
    void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
    inline string includeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
    inline ListCacheRulesResponseBodyConfigs& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string queryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline ListCacheRulesResponseBodyConfigs& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // queryStringMode Field Functions 
    bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
    void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
    inline string queryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
    inline ListCacheRulesResponseBodyConfigs& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ListCacheRulesResponseBodyConfigs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline ListCacheRulesResponseBodyConfigs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListCacheRulesResponseBodyConfigs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListCacheRulesResponseBodyConfigs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serveStale Field Functions 
    bool hasServeStale() const { return this->serveStale_ != nullptr;};
    void deleteServeStale() { this->serveStale_ = nullptr;};
    inline string serveStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
    inline ListCacheRulesResponseBodyConfigs& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListCacheRulesResponseBodyConfigs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // sortQueryStringForCache Field Functions 
    bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
    void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
    inline string sortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
    inline ListCacheRulesResponseBodyConfigs& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


    // userDeviceType Field Functions 
    bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
    void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
    inline string userDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
    inline ListCacheRulesResponseBodyConfigs& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


    // userGeo Field Functions 
    bool hasUserGeo() const { return this->userGeo_ != nullptr;};
    void deleteUserGeo() { this->userGeo_ = nullptr;};
    inline string userGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
    inline ListCacheRulesResponseBodyConfigs& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


    // userLanguage Field Functions 
    bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
    void deleteUserLanguage() { this->userLanguage_ = nullptr;};
    inline string userLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
    inline ListCacheRulesResponseBodyConfigs& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


  protected:
    // Enable caching on specified ports. Value range: 8880, 2052, 2082, 2086, 2095, 2053, 2083, 2087, 2096.
    std::shared_ptr<string> additionalCacheablePorts_ = nullptr;
    // Browser cache mode. Possible values:
    // - no_cache: Do not cache.
    // - follow_origin: Follow origin cache policy.
    // - override_origin: Override origin cache policy.
    std::shared_ptr<string> browserCacheMode_ = nullptr;
    // Browser cache expiration time, in seconds.
    std::shared_ptr<string> browserCacheTtl_ = nullptr;
    // Set bypass cache mode. Possible values:
    // - cache_all: Cache all requests.
    // - bypass_all: Bypass cache for all requests.
    std::shared_ptr<string> bypassCache_ = nullptr;
    // Cache deception defense. Used to defend against web cache deception attacks; only verified cache content will be cached. Value range:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> cacheDeceptionArmor_ = nullptr;
    // Cache reserve eligibility. This is used to control whether user requests bypass the cache reserve node when returning to the origin. The value range is as follows:
    // - bypass_cache_reserve: Requests bypass the cache reserve.
    // - eligible_for_cache_reserve: Eligible for cache reserve.
    std::shared_ptr<string> cacheReserveEligibility_ = nullptr;
    // When generating the cache key, check if the cookie exists. If it does, add the cookie name (case-insensitive) to the cache key. Multiple cookie names are supported, separated by spaces.
    std::shared_ptr<string> checkPresenceCookie_ = nullptr;
    // When generating the cache key, check if the header exists. If it does, add the header name (case-insensitive) to the cache key. Multiple header names are supported, separated by spaces.
    std::shared_ptr<string> checkPresenceHeader_ = nullptr;
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type, which can be used to query global or rule-based configurations. Possible values:
    // - global: Query global configuration.
    // - rule: Query rule-based configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Edge cache mode. The value range is as follows:
    // - follow_origin: Follow the origin server\\"s cache policy (if it exists), otherwise use the default cache policy.
    // - no_cache: Do not cache.
    // - override_origin: Override the origin server\\"s cache policy.
    // - follow_origin_bypass: Follow the origin server\\"s cache policy (if it exists), otherwise do not cache.
    std::shared_ptr<string> edgeCacheMode_ = nullptr;
    // Edge cache expiration time, in seconds.
    std::shared_ptr<string> edgeCacheTtl_ = nullptr;
    // Edge cache expiration time, in seconds.
    std::shared_ptr<string> edgeStatusCodeCacheTtl_ = nullptr;
    // Include the specified cookie names and their values when generating the cache key. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> includeCookie_ = nullptr;
    // Include the specified header names and their values when generating the cache key. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> includeHeader_ = nullptr;
    // The query strings to be reserved or excluded. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> queryString_ = nullptr;
    // The processing mode for query strings when generating the cache key. The value range is as follows:
    // - ignore_all: Ignore all query strings.
    // - exclude_query_string: Exclude specified query strings.
    // - reserve_all: Default, reserve all query strings.
    // - include_query_string: Include specified query strings.
    std::shared_ptr<string> queryStringMode_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Serve stale cache. When enabled, the node can still respond to user requests with expired cached files even when the origin server is unavailable. Value range:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> serveStale_ = nullptr;
    // Site configuration version number. For sites with version management enabled, this parameter can specify the site version for which the configuration takes effect, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Query string sorting. The value range is as follows:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> sortQueryStringForCache_ = nullptr;
    // Include the client device type when generating the cache key. The value range is as follows:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userDeviceType_ = nullptr;
    // Include the client\\"s geographic location when generating the cache key. The value range is as follows:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userGeo_ = nullptr;
    // Include the client\\"s language type when generating the cache key. The value range is as follows:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
