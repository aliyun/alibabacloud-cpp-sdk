// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPSAPPLICATIONCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPSAPPLICATIONCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpsApplicationConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpsApplicationConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AltSvc, altSvc_);
      DARABONBA_PTR_TO_JSON(AltSvcClear, altSvcClear_);
      DARABONBA_PTR_TO_JSON(AltSvcMa, altSvcMa_);
      DARABONBA_PTR_TO_JSON(AltSvcPersist, altSvcPersist_);
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
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpsApplicationConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AltSvc, altSvc_);
      DARABONBA_PTR_FROM_JSON(AltSvcClear, altSvcClear_);
      DARABONBA_PTR_FROM_JSON(AltSvcMa, altSvcMa_);
      DARABONBA_PTR_FROM_JSON(AltSvcPersist, altSvcPersist_);
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
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateHttpsApplicationConfigurationRequest() = default ;
    CreateHttpsApplicationConfigurationRequest(const CreateHttpsApplicationConfigurationRequest &) = default ;
    CreateHttpsApplicationConfigurationRequest(CreateHttpsApplicationConfigurationRequest &&) = default ;
    CreateHttpsApplicationConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpsApplicationConfigurationRequest() = default ;
    CreateHttpsApplicationConfigurationRequest& operator=(const CreateHttpsApplicationConfigurationRequest &) = default ;
    CreateHttpsApplicationConfigurationRequest& operator=(CreateHttpsApplicationConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->altSvc_ == nullptr
        && this->altSvcClear_ == nullptr && this->altSvcMa_ == nullptr && this->altSvcPersist_ == nullptr && this->hsts_ == nullptr && this->hstsIncludeSubdomains_ == nullptr
        && this->hstsMaxAge_ == nullptr && this->hstsPreload_ == nullptr && this->httpsForce_ == nullptr && this->httpsForceCode_ == nullptr && this->httpsNoSniDeny_ == nullptr
        && this->httpsSniVerify_ == nullptr && this->httpsSniWhitelist_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // altSvc Field Functions 
    bool hasAltSvc() const { return this->altSvc_ != nullptr;};
    void deleteAltSvc() { this->altSvc_ = nullptr;};
    inline string getAltSvc() const { DARABONBA_PTR_GET_DEFAULT(altSvc_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setAltSvc(string altSvc) { DARABONBA_PTR_SET_VALUE(altSvc_, altSvc) };


    // altSvcClear Field Functions 
    bool hasAltSvcClear() const { return this->altSvcClear_ != nullptr;};
    void deleteAltSvcClear() { this->altSvcClear_ = nullptr;};
    inline string getAltSvcClear() const { DARABONBA_PTR_GET_DEFAULT(altSvcClear_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setAltSvcClear(string altSvcClear) { DARABONBA_PTR_SET_VALUE(altSvcClear_, altSvcClear) };


    // altSvcMa Field Functions 
    bool hasAltSvcMa() const { return this->altSvcMa_ != nullptr;};
    void deleteAltSvcMa() { this->altSvcMa_ = nullptr;};
    inline string getAltSvcMa() const { DARABONBA_PTR_GET_DEFAULT(altSvcMa_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setAltSvcMa(string altSvcMa) { DARABONBA_PTR_SET_VALUE(altSvcMa_, altSvcMa) };


    // altSvcPersist Field Functions 
    bool hasAltSvcPersist() const { return this->altSvcPersist_ != nullptr;};
    void deleteAltSvcPersist() { this->altSvcPersist_ = nullptr;};
    inline string getAltSvcPersist() const { DARABONBA_PTR_GET_DEFAULT(altSvcPersist_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setAltSvcPersist(string altSvcPersist) { DARABONBA_PTR_SET_VALUE(altSvcPersist_, altSvcPersist) };


    // hsts Field Functions 
    bool hasHsts() const { return this->hsts_ != nullptr;};
    void deleteHsts() { this->hsts_ = nullptr;};
    inline string getHsts() const { DARABONBA_PTR_GET_DEFAULT(hsts_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHsts(string hsts) { DARABONBA_PTR_SET_VALUE(hsts_, hsts) };


    // hstsIncludeSubdomains Field Functions 
    bool hasHstsIncludeSubdomains() const { return this->hstsIncludeSubdomains_ != nullptr;};
    void deleteHstsIncludeSubdomains() { this->hstsIncludeSubdomains_ = nullptr;};
    inline string getHstsIncludeSubdomains() const { DARABONBA_PTR_GET_DEFAULT(hstsIncludeSubdomains_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHstsIncludeSubdomains(string hstsIncludeSubdomains) { DARABONBA_PTR_SET_VALUE(hstsIncludeSubdomains_, hstsIncludeSubdomains) };


    // hstsMaxAge Field Functions 
    bool hasHstsMaxAge() const { return this->hstsMaxAge_ != nullptr;};
    void deleteHstsMaxAge() { this->hstsMaxAge_ = nullptr;};
    inline string getHstsMaxAge() const { DARABONBA_PTR_GET_DEFAULT(hstsMaxAge_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHstsMaxAge(string hstsMaxAge) { DARABONBA_PTR_SET_VALUE(hstsMaxAge_, hstsMaxAge) };


    // hstsPreload Field Functions 
    bool hasHstsPreload() const { return this->hstsPreload_ != nullptr;};
    void deleteHstsPreload() { this->hstsPreload_ = nullptr;};
    inline string getHstsPreload() const { DARABONBA_PTR_GET_DEFAULT(hstsPreload_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHstsPreload(string hstsPreload) { DARABONBA_PTR_SET_VALUE(hstsPreload_, hstsPreload) };


    // httpsForce Field Functions 
    bool hasHttpsForce() const { return this->httpsForce_ != nullptr;};
    void deleteHttpsForce() { this->httpsForce_ = nullptr;};
    inline string getHttpsForce() const { DARABONBA_PTR_GET_DEFAULT(httpsForce_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHttpsForce(string httpsForce) { DARABONBA_PTR_SET_VALUE(httpsForce_, httpsForce) };


    // httpsForceCode Field Functions 
    bool hasHttpsForceCode() const { return this->httpsForceCode_ != nullptr;};
    void deleteHttpsForceCode() { this->httpsForceCode_ = nullptr;};
    inline string getHttpsForceCode() const { DARABONBA_PTR_GET_DEFAULT(httpsForceCode_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHttpsForceCode(string httpsForceCode) { DARABONBA_PTR_SET_VALUE(httpsForceCode_, httpsForceCode) };


    // httpsNoSniDeny Field Functions 
    bool hasHttpsNoSniDeny() const { return this->httpsNoSniDeny_ != nullptr;};
    void deleteHttpsNoSniDeny() { this->httpsNoSniDeny_ = nullptr;};
    inline string getHttpsNoSniDeny() const { DARABONBA_PTR_GET_DEFAULT(httpsNoSniDeny_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHttpsNoSniDeny(string httpsNoSniDeny) { DARABONBA_PTR_SET_VALUE(httpsNoSniDeny_, httpsNoSniDeny) };


    // httpsSniVerify Field Functions 
    bool hasHttpsSniVerify() const { return this->httpsSniVerify_ != nullptr;};
    void deleteHttpsSniVerify() { this->httpsSniVerify_ = nullptr;};
    inline string getHttpsSniVerify() const { DARABONBA_PTR_GET_DEFAULT(httpsSniVerify_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHttpsSniVerify(string httpsSniVerify) { DARABONBA_PTR_SET_VALUE(httpsSniVerify_, httpsSniVerify) };


    // httpsSniWhitelist Field Functions 
    bool hasHttpsSniWhitelist() const { return this->httpsSniWhitelist_ != nullptr;};
    void deleteHttpsSniWhitelist() { this->httpsSniWhitelist_ = nullptr;};
    inline string getHttpsSniWhitelist() const { DARABONBA_PTR_GET_DEFAULT(httpsSniWhitelist_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setHttpsSniWhitelist(string httpsSniWhitelist) { DARABONBA_PTR_SET_VALUE(httpsSniWhitelist_, httpsSniWhitelist) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpsApplicationConfigurationRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpsApplicationConfigurationRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpsApplicationConfigurationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateHttpsApplicationConfigurationRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Alt-Svc feature switch, default is disabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> altSvc_ {};
    // Whether the Alt-Svc header includes the clear parameter, default is disabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> altSvcClear_ {};
    // Alt-Svc validity period in seconds, default is 86400 seconds.
    shared_ptr<string> altSvcMa_ {};
    // Whether the Alt-Svc header includes the persist parameter, default is disabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> altSvcPersist_ {};
    // Whether to enable HSTS, default is disabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> hsts_ {};
    // Whether to include subdomains in HSTS, default is disabled. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> hstsIncludeSubdomains_ {};
    // HSTS expiration time in seconds.
    shared_ptr<string> hstsMaxAge_ {};
    // Whether to enable HSTS preload, default is disabled. Possible values:
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
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter is not required when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> sequence_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Version number of the site configuration. For sites with version management enabled, this parameter can specify the version to which the configuration applies, defaulting to version 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
