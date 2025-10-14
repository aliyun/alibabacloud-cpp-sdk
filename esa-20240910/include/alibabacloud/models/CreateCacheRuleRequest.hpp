// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECACHERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECACHERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCacheRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCacheRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_TO_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_TO_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_TO_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_TO_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_TO_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_TO_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_TO_JSON(CheckPresenceHeader, checkPresenceHeader_);
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
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_TO_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_TO_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_TO_JSON(UserLanguage, userLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCacheRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheMode, browserCacheMode_);
      DARABONBA_PTR_FROM_JSON(BrowserCacheTtl, browserCacheTtl_);
      DARABONBA_PTR_FROM_JSON(BypassCache, bypassCache_);
      DARABONBA_PTR_FROM_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
      DARABONBA_PTR_FROM_JSON(CacheReserveEligibility, cacheReserveEligibility_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceCookie, checkPresenceCookie_);
      DARABONBA_PTR_FROM_JSON(CheckPresenceHeader, checkPresenceHeader_);
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
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(SortQueryStringForCache, sortQueryStringForCache_);
      DARABONBA_PTR_FROM_JSON(UserDeviceType, userDeviceType_);
      DARABONBA_PTR_FROM_JSON(UserGeo, userGeo_);
      DARABONBA_PTR_FROM_JSON(UserLanguage, userLanguage_);
    };
    CreateCacheRuleRequest() = default ;
    CreateCacheRuleRequest(const CreateCacheRuleRequest &) = default ;
    CreateCacheRuleRequest(CreateCacheRuleRequest &&) = default ;
    CreateCacheRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCacheRuleRequest() = default ;
    CreateCacheRuleRequest& operator=(const CreateCacheRuleRequest &) = default ;
    CreateCacheRuleRequest& operator=(CreateCacheRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalCacheablePorts_ == nullptr
        && return this->browserCacheMode_ == nullptr && return this->browserCacheTtl_ == nullptr && return this->bypassCache_ == nullptr && return this->cacheDeceptionArmor_ == nullptr && return this->cacheReserveEligibility_ == nullptr
        && return this->checkPresenceCookie_ == nullptr && return this->checkPresenceHeader_ == nullptr && return this->edgeCacheMode_ == nullptr && return this->edgeCacheTtl_ == nullptr && return this->edgeStatusCodeCacheTtl_ == nullptr
        && return this->includeCookie_ == nullptr && return this->includeHeader_ == nullptr && return this->queryString_ == nullptr && return this->queryStringMode_ == nullptr && return this->rule_ == nullptr
        && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->serveStale_ == nullptr && return this->siteId_ == nullptr
        && return this->siteVersion_ == nullptr && return this->sortQueryStringForCache_ == nullptr && return this->userDeviceType_ == nullptr && return this->userGeo_ == nullptr && return this->userLanguage_ == nullptr; };
    // additionalCacheablePorts Field Functions 
    bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
    void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
    inline string additionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
    inline CreateCacheRuleRequest& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


    // browserCacheMode Field Functions 
    bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
    void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
    inline string browserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
    inline CreateCacheRuleRequest& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


    // browserCacheTtl Field Functions 
    bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
    void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
    inline string browserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
    inline CreateCacheRuleRequest& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


    // bypassCache Field Functions 
    bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
    void deleteBypassCache() { this->bypassCache_ = nullptr;};
    inline string bypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
    inline CreateCacheRuleRequest& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


    // cacheDeceptionArmor Field Functions 
    bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
    void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
    inline string cacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
    inline CreateCacheRuleRequest& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


    // cacheReserveEligibility Field Functions 
    bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
    void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
    inline string cacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
    inline CreateCacheRuleRequest& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


    // checkPresenceCookie Field Functions 
    bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
    void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
    inline string checkPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
    inline CreateCacheRuleRequest& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


    // checkPresenceHeader Field Functions 
    bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
    void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
    inline string checkPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
    inline CreateCacheRuleRequest& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


    // edgeCacheMode Field Functions 
    bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
    void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
    inline string edgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
    inline CreateCacheRuleRequest& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


    // edgeCacheTtl Field Functions 
    bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
    void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
    inline string edgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
    inline CreateCacheRuleRequest& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


    // edgeStatusCodeCacheTtl Field Functions 
    bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
    void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
    inline string edgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
    inline CreateCacheRuleRequest& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


    // includeCookie Field Functions 
    bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
    void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
    inline string includeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
    inline CreateCacheRuleRequest& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


    // includeHeader Field Functions 
    bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
    void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
    inline string includeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
    inline CreateCacheRuleRequest& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


    // queryString Field Functions 
    bool hasQueryString() const { return this->queryString_ != nullptr;};
    void deleteQueryString() { this->queryString_ = nullptr;};
    inline string queryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
    inline CreateCacheRuleRequest& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


    // queryStringMode Field Functions 
    bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
    void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
    inline string queryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
    inline CreateCacheRuleRequest& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateCacheRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateCacheRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateCacheRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateCacheRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // serveStale Field Functions 
    bool hasServeStale() const { return this->serveStale_ != nullptr;};
    void deleteServeStale() { this->serveStale_ = nullptr;};
    inline string serveStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
    inline CreateCacheRuleRequest& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateCacheRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateCacheRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // sortQueryStringForCache Field Functions 
    bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
    void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
    inline string sortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
    inline CreateCacheRuleRequest& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


    // userDeviceType Field Functions 
    bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
    void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
    inline string userDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
    inline CreateCacheRuleRequest& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


    // userGeo Field Functions 
    bool hasUserGeo() const { return this->userGeo_ != nullptr;};
    void deleteUserGeo() { this->userGeo_ = nullptr;};
    inline string userGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
    inline CreateCacheRuleRequest& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


    // userLanguage Field Functions 
    bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
    void deleteUserLanguage() { this->userLanguage_ = nullptr;};
    inline string userLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
    inline CreateCacheRuleRequest& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


  protected:
    // Enable caching on specified ports. Value range: 8880, 2052, 2082, 2086, 2095, 2053, 2083, 2087, 2096
    std::shared_ptr<string> additionalCacheablePorts_ = nullptr;
    // Browser cache mode. Possible values:
    // - no_cache: Do not cache.
    // - follow_origin: Follow the origin server\\"s cache policy.
    // - override_origin: Override the origin server\\"s cache policy.
    std::shared_ptr<string> browserCacheMode_ = nullptr;
    // Browser cache expiration time, in seconds.
    std::shared_ptr<string> browserCacheTtl_ = nullptr;
    // Set the bypass cache mode. Possible values:
    // - cache_all: Cache all requests.
    // - bypass_all: Bypass cache for all requests.
    std::shared_ptr<string> bypassCache_ = nullptr;
    // Cache deception defense. Used to defend against web cache deception attacks; only the verified cache content will be cached. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> cacheDeceptionArmor_ = nullptr;
    // Cache retention eligibility. Used to control whether user requests bypass the cache retention node when returning to the origin. Possible values:
    // - bypass_cache_reserve: Requests bypass cache retention.
    // - eligible_for_cache_reserve: Eligible for cache retention.
    std::shared_ptr<string> cacheReserveEligibility_ = nullptr;
    // When generating the cache key, check if the cookie exists. If it does, add the cookie name (case-insensitive) to the cache key. Multiple cookie names are supported, separated by spaces.
    std::shared_ptr<string> checkPresenceCookie_ = nullptr;
    // When generating the cache key, check if the header exists. If it does, add the header name (case-insensitive) to the cache key. Multiple header names are supported, separated by spaces.
    std::shared_ptr<string> checkPresenceHeader_ = nullptr;
    // Edge cache mode. Possible values:
    // - follow_origin: Follow the origin server\\"s cache policy (if it exists), otherwise use the default cache policy.
    // - no_cache: Do not cache.
    // - override_origin: Override the origin server\\"s cache policy.
    // - follow_origin_bypass: Follow the origin server\\"s cache policy (if it exists), otherwise do not cache.
    std::shared_ptr<string> edgeCacheMode_ = nullptr;
    // Edge cache expiration time, in seconds.
    std::shared_ptr<string> edgeCacheTtl_ = nullptr;
    // Status code cache expiration time, in seconds.
    std::shared_ptr<string> edgeStatusCodeCacheTtl_ = nullptr;
    // When generating the cache key, add the specified cookie names and their values. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> includeCookie_ = nullptr;
    // When generating the cache key, add the specified header names and their values. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> includeHeader_ = nullptr;
    // Query strings to be reserved or excluded. Multiple values are supported, separated by spaces.
    std::shared_ptr<string> queryString_ = nullptr;
    // The processing mode for query strings when generating the cache key. Possible values:
    // - ignore_all: Ignore all.
    // - exclude_query_string: Exclude specified query strings.
    // - reserve_all: Default, reserve all.
    // - include_query_string: Include specified query strings.
    std::shared_ptr<string> queryStringMode_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Serve stale cache. When enabled, the node can still use the expired cached files to respond to user requests even if the origin server is unavailable. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> serveStale_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the version for the configuration to take effect. The default is version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Query string sorting, disabled by default. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> sortQueryStringForCache_ = nullptr;
    // When generating the cache key, include the client device type. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userDeviceType_ = nullptr;
    // Include the client\\"s geographical location when generating the cache key. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userGeo_ = nullptr;
    // Include the client\\"s language type when generating the cache key. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> userLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
