// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPSAPPLICATIONCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPSAPPLICATIONCONFIGURATIONSRESPONSEBODY_HPP_
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
  class ListHttpsApplicationConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpsApplicationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpsApplicationConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListHttpsApplicationConfigurationsResponseBody() = default ;
    ListHttpsApplicationConfigurationsResponseBody(const ListHttpsApplicationConfigurationsResponseBody &) = default ;
    ListHttpsApplicationConfigurationsResponseBody(ListHttpsApplicationConfigurationsResponseBody &&) = default ;
    ListHttpsApplicationConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpsApplicationConfigurationsResponseBody() = default ;
    ListHttpsApplicationConfigurationsResponseBody& operator=(const ListHttpsApplicationConfigurationsResponseBody &) = default ;
    ListHttpsApplicationConfigurationsResponseBody& operator=(ListHttpsApplicationConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(AltSvc, altSvc_);
        DARABONBA_PTR_TO_JSON(AltSvcClear, altSvcClear_);
        DARABONBA_PTR_TO_JSON(AltSvcMa, altSvcMa_);
        DARABONBA_PTR_TO_JSON(AltSvcPersist, altSvcPersist_);
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(Hsts, hsts_);
        DARABONBA_PTR_TO_JSON(HstsIncludeSubdomains, hstsIncludeSubdomains_);
        DARABONBA_PTR_TO_JSON(HstsMaxAge, hstsMaxAge_);
        DARABONBA_PTR_TO_JSON(HstsPreload, hstsPreload_);
        DARABONBA_PTR_TO_JSON(HttpsForce, httpsForce_);
        DARABONBA_PTR_TO_JSON(HttpsForceCode, httpsForceCode_);
        DARABONBA_PTR_TO_JSON(HttpsNoSniDeny, httpsNoSniDeny_);
        DARABONBA_PTR_TO_JSON(HttpsSniVerify, httpsSniVerify_);
        DARABONBA_PTR_TO_JSON(HttpsSniWhitelist, httpsSniWhitelist_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(AltSvc, altSvc_);
        DARABONBA_PTR_FROM_JSON(AltSvcClear, altSvcClear_);
        DARABONBA_PTR_FROM_JSON(AltSvcMa, altSvcMa_);
        DARABONBA_PTR_FROM_JSON(AltSvcPersist, altSvcPersist_);
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(Hsts, hsts_);
        DARABONBA_PTR_FROM_JSON(HstsIncludeSubdomains, hstsIncludeSubdomains_);
        DARABONBA_PTR_FROM_JSON(HstsMaxAge, hstsMaxAge_);
        DARABONBA_PTR_FROM_JSON(HstsPreload, hstsPreload_);
        DARABONBA_PTR_FROM_JSON(HttpsForce, httpsForce_);
        DARABONBA_PTR_FROM_JSON(HttpsForceCode, httpsForceCode_);
        DARABONBA_PTR_FROM_JSON(HttpsNoSniDeny, httpsNoSniDeny_);
        DARABONBA_PTR_FROM_JSON(HttpsSniVerify, httpsSniVerify_);
        DARABONBA_PTR_FROM_JSON(HttpsSniWhitelist, httpsSniWhitelist_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
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
      virtual bool empty() const override { return this->altSvc_ == nullptr
        && this->altSvcClear_ == nullptr && this->altSvcMa_ == nullptr && this->altSvcPersist_ == nullptr && this->configId_ == nullptr && this->configType_ == nullptr
        && this->hsts_ == nullptr && this->hstsIncludeSubdomains_ == nullptr && this->hstsMaxAge_ == nullptr && this->hstsPreload_ == nullptr && this->httpsForce_ == nullptr
        && this->httpsForceCode_ == nullptr && this->httpsNoSniDeny_ == nullptr && this->httpsSniVerify_ == nullptr && this->httpsSniWhitelist_ == nullptr && this->rule_ == nullptr
        && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteVersion_ == nullptr; };
      // altSvc Field Functions 
      bool hasAltSvc() const { return this->altSvc_ != nullptr;};
      void deleteAltSvc() { this->altSvc_ = nullptr;};
      inline string getAltSvc() const { DARABONBA_PTR_GET_DEFAULT(altSvc_, "") };
      inline Configs& setAltSvc(string altSvc) { DARABONBA_PTR_SET_VALUE(altSvc_, altSvc) };


      // altSvcClear Field Functions 
      bool hasAltSvcClear() const { return this->altSvcClear_ != nullptr;};
      void deleteAltSvcClear() { this->altSvcClear_ = nullptr;};
      inline string getAltSvcClear() const { DARABONBA_PTR_GET_DEFAULT(altSvcClear_, "") };
      inline Configs& setAltSvcClear(string altSvcClear) { DARABONBA_PTR_SET_VALUE(altSvcClear_, altSvcClear) };


      // altSvcMa Field Functions 
      bool hasAltSvcMa() const { return this->altSvcMa_ != nullptr;};
      void deleteAltSvcMa() { this->altSvcMa_ = nullptr;};
      inline string getAltSvcMa() const { DARABONBA_PTR_GET_DEFAULT(altSvcMa_, "") };
      inline Configs& setAltSvcMa(string altSvcMa) { DARABONBA_PTR_SET_VALUE(altSvcMa_, altSvcMa) };


      // altSvcPersist Field Functions 
      bool hasAltSvcPersist() const { return this->altSvcPersist_ != nullptr;};
      void deleteAltSvcPersist() { this->altSvcPersist_ = nullptr;};
      inline string getAltSvcPersist() const { DARABONBA_PTR_GET_DEFAULT(altSvcPersist_, "") };
      inline Configs& setAltSvcPersist(string altSvcPersist) { DARABONBA_PTR_SET_VALUE(altSvcPersist_, altSvcPersist) };


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


      // hsts Field Functions 
      bool hasHsts() const { return this->hsts_ != nullptr;};
      void deleteHsts() { this->hsts_ = nullptr;};
      inline string getHsts() const { DARABONBA_PTR_GET_DEFAULT(hsts_, "") };
      inline Configs& setHsts(string hsts) { DARABONBA_PTR_SET_VALUE(hsts_, hsts) };


      // hstsIncludeSubdomains Field Functions 
      bool hasHstsIncludeSubdomains() const { return this->hstsIncludeSubdomains_ != nullptr;};
      void deleteHstsIncludeSubdomains() { this->hstsIncludeSubdomains_ = nullptr;};
      inline string getHstsIncludeSubdomains() const { DARABONBA_PTR_GET_DEFAULT(hstsIncludeSubdomains_, "") };
      inline Configs& setHstsIncludeSubdomains(string hstsIncludeSubdomains) { DARABONBA_PTR_SET_VALUE(hstsIncludeSubdomains_, hstsIncludeSubdomains) };


      // hstsMaxAge Field Functions 
      bool hasHstsMaxAge() const { return this->hstsMaxAge_ != nullptr;};
      void deleteHstsMaxAge() { this->hstsMaxAge_ = nullptr;};
      inline string getHstsMaxAge() const { DARABONBA_PTR_GET_DEFAULT(hstsMaxAge_, "") };
      inline Configs& setHstsMaxAge(string hstsMaxAge) { DARABONBA_PTR_SET_VALUE(hstsMaxAge_, hstsMaxAge) };


      // hstsPreload Field Functions 
      bool hasHstsPreload() const { return this->hstsPreload_ != nullptr;};
      void deleteHstsPreload() { this->hstsPreload_ = nullptr;};
      inline string getHstsPreload() const { DARABONBA_PTR_GET_DEFAULT(hstsPreload_, "") };
      inline Configs& setHstsPreload(string hstsPreload) { DARABONBA_PTR_SET_VALUE(hstsPreload_, hstsPreload) };


      // httpsForce Field Functions 
      bool hasHttpsForce() const { return this->httpsForce_ != nullptr;};
      void deleteHttpsForce() { this->httpsForce_ = nullptr;};
      inline string getHttpsForce() const { DARABONBA_PTR_GET_DEFAULT(httpsForce_, "") };
      inline Configs& setHttpsForce(string httpsForce) { DARABONBA_PTR_SET_VALUE(httpsForce_, httpsForce) };


      // httpsForceCode Field Functions 
      bool hasHttpsForceCode() const { return this->httpsForceCode_ != nullptr;};
      void deleteHttpsForceCode() { this->httpsForceCode_ = nullptr;};
      inline string getHttpsForceCode() const { DARABONBA_PTR_GET_DEFAULT(httpsForceCode_, "") };
      inline Configs& setHttpsForceCode(string httpsForceCode) { DARABONBA_PTR_SET_VALUE(httpsForceCode_, httpsForceCode) };


      // httpsNoSniDeny Field Functions 
      bool hasHttpsNoSniDeny() const { return this->httpsNoSniDeny_ != nullptr;};
      void deleteHttpsNoSniDeny() { this->httpsNoSniDeny_ = nullptr;};
      inline string getHttpsNoSniDeny() const { DARABONBA_PTR_GET_DEFAULT(httpsNoSniDeny_, "") };
      inline Configs& setHttpsNoSniDeny(string httpsNoSniDeny) { DARABONBA_PTR_SET_VALUE(httpsNoSniDeny_, httpsNoSniDeny) };


      // httpsSniVerify Field Functions 
      bool hasHttpsSniVerify() const { return this->httpsSniVerify_ != nullptr;};
      void deleteHttpsSniVerify() { this->httpsSniVerify_ = nullptr;};
      inline string getHttpsSniVerify() const { DARABONBA_PTR_GET_DEFAULT(httpsSniVerify_, "") };
      inline Configs& setHttpsSniVerify(string httpsSniVerify) { DARABONBA_PTR_SET_VALUE(httpsSniVerify_, httpsSniVerify) };


      // httpsSniWhitelist Field Functions 
      bool hasHttpsSniWhitelist() const { return this->httpsSniWhitelist_ != nullptr;};
      void deleteHttpsSniWhitelist() { this->httpsSniWhitelist_ = nullptr;};
      inline string getHttpsSniWhitelist() const { DARABONBA_PTR_GET_DEFAULT(httpsSniWhitelist_, "") };
      inline Configs& setHttpsSniWhitelist(string httpsSniWhitelist) { DARABONBA_PTR_SET_VALUE(httpsSniWhitelist_, httpsSniWhitelist) };


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


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    protected:
      // Alt-Svc feature switch, default is off. Value range: 
      // - on: enabled. 
      // - off: disabled.
      shared_ptr<string> altSvc_ {};
      // Whether the Alt-Svc header includes the clear parameter, default is off. Values:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> altSvcClear_ {};
      // The validity period of Alt-Svc in seconds, default is 86400 seconds.
      shared_ptr<string> altSvcMa_ {};
      // Whether the Alt-Svc header includes the persist parameter, default is off. Values:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> altSvcPersist_ {};
      // Configuration ID.
      shared_ptr<int64_t> configId_ {};
      // Configuration type, which can be used to query global or rule-based configurations. Possible values:
      // - global: Query global configuration.
      // - rule: Query rule-based configuration.
      shared_ptr<string> configType_ {};
      // Whether HSTS is enabled, default is off. Value range:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> hsts_ {};
      // Whether to include subdomains in HSTS, default is off. Value range:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> hstsIncludeSubdomains_ {};
      // The expiration time of HSTS in seconds.
      shared_ptr<string> hstsMaxAge_ {};
      // Whether HSTS preloading is enabled, default is off. Value range:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> hstsPreload_ {};
      // Whether to enable forced HTTPS, default is disabled. Possible values:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> httpsForce_ {};
      // Forced HTTPS redirect status code. Possible values:
      // - 301
      // - 302
      // - 307
      // - 308
      shared_ptr<string> httpsForceCode_ {};
      shared_ptr<string> httpsNoSniDeny_ {};
      shared_ptr<string> httpsSniVerify_ {};
      shared_ptr<string> httpsSniWhitelist_ {};
      // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
      // - Match all incoming requests: Set the value to true.
      // - Match specific requests: Set the value to a custom expression, e.g., (http.host eq \\"video.example.com\\")
      shared_ptr<string> rule_ {};
      // Rule switch. This parameter is not required when adding a global configuration. Possible values:
      // - on: Enabled.
      // - off: Disabled.
      shared_ptr<string> ruleEnable_ {};
      // Rule name. This parameter is not required when adding a global configuration.
      shared_ptr<string> ruleName_ {};
      // Rule execution order. The smaller the value, the higher the priority.
      shared_ptr<int32_t> sequence_ {};
      // Site configuration version number. For sites with version management enabled, this parameter can specify the site version for which the configuration is effective, default is version 0.
      shared_ptr<int32_t> siteVersion_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListHttpsApplicationConfigurationsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListHttpsApplicationConfigurationsResponseBody::Configs>) };
    inline vector<ListHttpsApplicationConfigurationsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListHttpsApplicationConfigurationsResponseBody::Configs>) };
    inline ListHttpsApplicationConfigurationsResponseBody& setConfigs(const vector<ListHttpsApplicationConfigurationsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListHttpsApplicationConfigurationsResponseBody& setConfigs(vector<ListHttpsApplicationConfigurationsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpsApplicationConfigurationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpsApplicationConfigurationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHttpsApplicationConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHttpsApplicationConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListHttpsApplicationConfigurationsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Response body configurations.
    shared_ptr<vector<ListHttpsApplicationConfigurationsResponseBody::Configs>> configs_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
