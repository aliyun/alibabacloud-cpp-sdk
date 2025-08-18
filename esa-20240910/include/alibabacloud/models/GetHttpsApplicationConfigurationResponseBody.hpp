// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPSAPPLICATIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPSAPPLICATIONCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetHttpsApplicationConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpsApplicationConfigurationResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpsApplicationConfigurationResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    GetHttpsApplicationConfigurationResponseBody() = default ;
    GetHttpsApplicationConfigurationResponseBody(const GetHttpsApplicationConfigurationResponseBody &) = default ;
    GetHttpsApplicationConfigurationResponseBody(GetHttpsApplicationConfigurationResponseBody &&) = default ;
    GetHttpsApplicationConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpsApplicationConfigurationResponseBody() = default ;
    GetHttpsApplicationConfigurationResponseBody& operator=(const GetHttpsApplicationConfigurationResponseBody &) = default ;
    GetHttpsApplicationConfigurationResponseBody& operator=(GetHttpsApplicationConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->altSvc_ != nullptr
        && this->altSvcClear_ != nullptr && this->altSvcMa_ != nullptr && this->altSvcPersist_ != nullptr && this->configId_ != nullptr && this->configType_ != nullptr
        && this->hsts_ != nullptr && this->hstsIncludeSubdomains_ != nullptr && this->hstsMaxAge_ != nullptr && this->hstsPreload_ != nullptr && this->httpsForce_ != nullptr
        && this->httpsForceCode_ != nullptr && this->httpsNoSniDeny_ != nullptr && this->httpsSniVerify_ != nullptr && this->httpsSniWhitelist_ != nullptr && this->requestId_ != nullptr
        && this->rule_ != nullptr && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr && this->siteVersion_ != nullptr; };
    // altSvc Field Functions 
    bool hasAltSvc() const { return this->altSvc_ != nullptr;};
    void deleteAltSvc() { this->altSvc_ = nullptr;};
    inline string altSvc() const { DARABONBA_PTR_GET_DEFAULT(altSvc_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setAltSvc(string altSvc) { DARABONBA_PTR_SET_VALUE(altSvc_, altSvc) };


    // altSvcClear Field Functions 
    bool hasAltSvcClear() const { return this->altSvcClear_ != nullptr;};
    void deleteAltSvcClear() { this->altSvcClear_ = nullptr;};
    inline string altSvcClear() const { DARABONBA_PTR_GET_DEFAULT(altSvcClear_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setAltSvcClear(string altSvcClear) { DARABONBA_PTR_SET_VALUE(altSvcClear_, altSvcClear) };


    // altSvcMa Field Functions 
    bool hasAltSvcMa() const { return this->altSvcMa_ != nullptr;};
    void deleteAltSvcMa() { this->altSvcMa_ = nullptr;};
    inline string altSvcMa() const { DARABONBA_PTR_GET_DEFAULT(altSvcMa_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setAltSvcMa(string altSvcMa) { DARABONBA_PTR_SET_VALUE(altSvcMa_, altSvcMa) };


    // altSvcPersist Field Functions 
    bool hasAltSvcPersist() const { return this->altSvcPersist_ != nullptr;};
    void deleteAltSvcPersist() { this->altSvcPersist_ = nullptr;};
    inline string altSvcPersist() const { DARABONBA_PTR_GET_DEFAULT(altSvcPersist_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setAltSvcPersist(string altSvcPersist) { DARABONBA_PTR_SET_VALUE(altSvcPersist_, altSvcPersist) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetHttpsApplicationConfigurationResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // hsts Field Functions 
    bool hasHsts() const { return this->hsts_ != nullptr;};
    void deleteHsts() { this->hsts_ = nullptr;};
    inline string hsts() const { DARABONBA_PTR_GET_DEFAULT(hsts_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHsts(string hsts) { DARABONBA_PTR_SET_VALUE(hsts_, hsts) };


    // hstsIncludeSubdomains Field Functions 
    bool hasHstsIncludeSubdomains() const { return this->hstsIncludeSubdomains_ != nullptr;};
    void deleteHstsIncludeSubdomains() { this->hstsIncludeSubdomains_ = nullptr;};
    inline string hstsIncludeSubdomains() const { DARABONBA_PTR_GET_DEFAULT(hstsIncludeSubdomains_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHstsIncludeSubdomains(string hstsIncludeSubdomains) { DARABONBA_PTR_SET_VALUE(hstsIncludeSubdomains_, hstsIncludeSubdomains) };


    // hstsMaxAge Field Functions 
    bool hasHstsMaxAge() const { return this->hstsMaxAge_ != nullptr;};
    void deleteHstsMaxAge() { this->hstsMaxAge_ = nullptr;};
    inline string hstsMaxAge() const { DARABONBA_PTR_GET_DEFAULT(hstsMaxAge_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHstsMaxAge(string hstsMaxAge) { DARABONBA_PTR_SET_VALUE(hstsMaxAge_, hstsMaxAge) };


    // hstsPreload Field Functions 
    bool hasHstsPreload() const { return this->hstsPreload_ != nullptr;};
    void deleteHstsPreload() { this->hstsPreload_ = nullptr;};
    inline string hstsPreload() const { DARABONBA_PTR_GET_DEFAULT(hstsPreload_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHstsPreload(string hstsPreload) { DARABONBA_PTR_SET_VALUE(hstsPreload_, hstsPreload) };


    // httpsForce Field Functions 
    bool hasHttpsForce() const { return this->httpsForce_ != nullptr;};
    void deleteHttpsForce() { this->httpsForce_ = nullptr;};
    inline string httpsForce() const { DARABONBA_PTR_GET_DEFAULT(httpsForce_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHttpsForce(string httpsForce) { DARABONBA_PTR_SET_VALUE(httpsForce_, httpsForce) };


    // httpsForceCode Field Functions 
    bool hasHttpsForceCode() const { return this->httpsForceCode_ != nullptr;};
    void deleteHttpsForceCode() { this->httpsForceCode_ = nullptr;};
    inline string httpsForceCode() const { DARABONBA_PTR_GET_DEFAULT(httpsForceCode_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHttpsForceCode(string httpsForceCode) { DARABONBA_PTR_SET_VALUE(httpsForceCode_, httpsForceCode) };


    // httpsNoSniDeny Field Functions 
    bool hasHttpsNoSniDeny() const { return this->httpsNoSniDeny_ != nullptr;};
    void deleteHttpsNoSniDeny() { this->httpsNoSniDeny_ = nullptr;};
    inline string httpsNoSniDeny() const { DARABONBA_PTR_GET_DEFAULT(httpsNoSniDeny_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHttpsNoSniDeny(string httpsNoSniDeny) { DARABONBA_PTR_SET_VALUE(httpsNoSniDeny_, httpsNoSniDeny) };


    // httpsSniVerify Field Functions 
    bool hasHttpsSniVerify() const { return this->httpsSniVerify_ != nullptr;};
    void deleteHttpsSniVerify() { this->httpsSniVerify_ = nullptr;};
    inline string httpsSniVerify() const { DARABONBA_PTR_GET_DEFAULT(httpsSniVerify_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHttpsSniVerify(string httpsSniVerify) { DARABONBA_PTR_SET_VALUE(httpsSniVerify_, httpsSniVerify) };


    // httpsSniWhitelist Field Functions 
    bool hasHttpsSniWhitelist() const { return this->httpsSniWhitelist_ != nullptr;};
    void deleteHttpsSniWhitelist() { this->httpsSniWhitelist_ = nullptr;};
    inline string httpsSniWhitelist() const { DARABONBA_PTR_GET_DEFAULT(httpsSniWhitelist_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setHttpsSniWhitelist(string httpsSniWhitelist) { DARABONBA_PTR_SET_VALUE(httpsSniWhitelist_, httpsSniWhitelist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetHttpsApplicationConfigurationResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetHttpsApplicationConfigurationResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetHttpsApplicationConfigurationResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Alt-Svc feature switch. Default is disabled. Possible values:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> altSvc_ = nullptr;
    // Whether the Alt-Svc header includes the clear parameter. Default is disabled. Possible values:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> altSvcClear_ = nullptr;
    // Alt-Svc validity period in seconds. The default is 86400 seconds.
    std::shared_ptr<string> altSvcMa_ = nullptr;
    // Whether the Alt-Svc header includes the persist parameter. Default is disabled. Possible values:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> altSvcPersist_ = nullptr;
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type, which can be used to query global or rule configurations. Possible values:
    // 
    // - global: Query global configuration.
    // - rule: Query rule configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Whether to enable HSTS. Default is disabled. Possible values:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> hsts_ = nullptr;
    // Whether to include subdomains in HSTS, default is off. Value range:
    // - on: enabled. 
    // - off: disabled.
    std::shared_ptr<string> hstsIncludeSubdomains_ = nullptr;
    // HSTS expiration time in seconds.
    std::shared_ptr<string> hstsMaxAge_ = nullptr;
    // Whether to enable HSTS preload, default is off. Value range:
    // 
    // - on: enabled.
    // - off: disabled.
    std::shared_ptr<string> hstsPreload_ = nullptr;
    // Whether to enable forced HTTPS. Default is disabled. Possible values:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> httpsForce_ = nullptr;
    // Status code for forced HTTPS redirection. Possible values:
    // 
    // - 301
    // - 302
    // - 307
    // - 308
    std::shared_ptr<string> httpsForceCode_ = nullptr;
    std::shared_ptr<string> httpsNoSniDeny_ = nullptr;
    std::shared_ptr<string> httpsSniVerify_ = nullptr;
    std::shared_ptr<string> httpsSniWhitelist_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter does not need to be set when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true.
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq "video.example.com")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter does not need to be set when adding a global configuration. Possible values:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter does not need to be set when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the version of the site for which the configuration takes effect. The default is version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
