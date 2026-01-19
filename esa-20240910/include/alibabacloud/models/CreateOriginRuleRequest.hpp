// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORIGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORIGINRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateOriginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOriginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_TO_JSON(Follow302Enable, follow302Enable_);
      DARABONBA_PTR_TO_JSON(Follow302MaxTries, follow302MaxTries_);
      DARABONBA_PTR_TO_JSON(Follow302RetainArgs, follow302RetainArgs_);
      DARABONBA_PTR_TO_JSON(Follow302RetainHeader, follow302RetainHeader_);
      DARABONBA_PTR_TO_JSON(Follow302TargetHost, follow302TargetHost_);
      DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
      DARABONBA_PTR_TO_JSON(OriginHttpPort, originHttpPort_);
      DARABONBA_PTR_TO_JSON(OriginHttpsPort, originHttpsPort_);
      DARABONBA_PTR_TO_JSON(OriginMtls, originMtls_);
      DARABONBA_PTR_TO_JSON(OriginReadTimeout, originReadTimeout_);
      DARABONBA_PTR_TO_JSON(OriginScheme, originScheme_);
      DARABONBA_PTR_TO_JSON(OriginSni, originSni_);
      DARABONBA_PTR_TO_JSON(OriginVerify, originVerify_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(RangeChunkSize, rangeChunkSize_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOriginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_FROM_JSON(Follow302Enable, follow302Enable_);
      DARABONBA_PTR_FROM_JSON(Follow302MaxTries, follow302MaxTries_);
      DARABONBA_PTR_FROM_JSON(Follow302RetainArgs, follow302RetainArgs_);
      DARABONBA_PTR_FROM_JSON(Follow302RetainHeader, follow302RetainHeader_);
      DARABONBA_PTR_FROM_JSON(Follow302TargetHost, follow302TargetHost_);
      DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
      DARABONBA_PTR_FROM_JSON(OriginHttpPort, originHttpPort_);
      DARABONBA_PTR_FROM_JSON(OriginHttpsPort, originHttpsPort_);
      DARABONBA_PTR_FROM_JSON(OriginMtls, originMtls_);
      DARABONBA_PTR_FROM_JSON(OriginReadTimeout, originReadTimeout_);
      DARABONBA_PTR_FROM_JSON(OriginScheme, originScheme_);
      DARABONBA_PTR_FROM_JSON(OriginSni, originSni_);
      DARABONBA_PTR_FROM_JSON(OriginVerify, originVerify_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(RangeChunkSize, rangeChunkSize_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateOriginRuleRequest() = default ;
    CreateOriginRuleRequest(const CreateOriginRuleRequest &) = default ;
    CreateOriginRuleRequest(CreateOriginRuleRequest &&) = default ;
    CreateOriginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOriginRuleRequest() = default ;
    CreateOriginRuleRequest& operator=(const CreateOriginRuleRequest &) = default ;
    CreateOriginRuleRequest& operator=(CreateOriginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsRecord_ == nullptr
        && this->follow302Enable_ == nullptr && this->follow302MaxTries_ == nullptr && this->follow302RetainArgs_ == nullptr && this->follow302RetainHeader_ == nullptr && this->follow302TargetHost_ == nullptr
        && this->originHost_ == nullptr && this->originHttpPort_ == nullptr && this->originHttpsPort_ == nullptr && this->originMtls_ == nullptr && this->originReadTimeout_ == nullptr
        && this->originScheme_ == nullptr && this->originSni_ == nullptr && this->originVerify_ == nullptr && this->range_ == nullptr && this->rangeChunkSize_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // dnsRecord Field Functions 
    bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
    void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
    inline string getDnsRecord() const { DARABONBA_PTR_GET_DEFAULT(dnsRecord_, "") };
    inline CreateOriginRuleRequest& setDnsRecord(string dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };


    // follow302Enable Field Functions 
    bool hasFollow302Enable() const { return this->follow302Enable_ != nullptr;};
    void deleteFollow302Enable() { this->follow302Enable_ = nullptr;};
    inline string getFollow302Enable() const { DARABONBA_PTR_GET_DEFAULT(follow302Enable_, "") };
    inline CreateOriginRuleRequest& setFollow302Enable(string follow302Enable) { DARABONBA_PTR_SET_VALUE(follow302Enable_, follow302Enable) };


    // follow302MaxTries Field Functions 
    bool hasFollow302MaxTries() const { return this->follow302MaxTries_ != nullptr;};
    void deleteFollow302MaxTries() { this->follow302MaxTries_ = nullptr;};
    inline string getFollow302MaxTries() const { DARABONBA_PTR_GET_DEFAULT(follow302MaxTries_, "") };
    inline CreateOriginRuleRequest& setFollow302MaxTries(string follow302MaxTries) { DARABONBA_PTR_SET_VALUE(follow302MaxTries_, follow302MaxTries) };


    // follow302RetainArgs Field Functions 
    bool hasFollow302RetainArgs() const { return this->follow302RetainArgs_ != nullptr;};
    void deleteFollow302RetainArgs() { this->follow302RetainArgs_ = nullptr;};
    inline string getFollow302RetainArgs() const { DARABONBA_PTR_GET_DEFAULT(follow302RetainArgs_, "") };
    inline CreateOriginRuleRequest& setFollow302RetainArgs(string follow302RetainArgs) { DARABONBA_PTR_SET_VALUE(follow302RetainArgs_, follow302RetainArgs) };


    // follow302RetainHeader Field Functions 
    bool hasFollow302RetainHeader() const { return this->follow302RetainHeader_ != nullptr;};
    void deleteFollow302RetainHeader() { this->follow302RetainHeader_ = nullptr;};
    inline string getFollow302RetainHeader() const { DARABONBA_PTR_GET_DEFAULT(follow302RetainHeader_, "") };
    inline CreateOriginRuleRequest& setFollow302RetainHeader(string follow302RetainHeader) { DARABONBA_PTR_SET_VALUE(follow302RetainHeader_, follow302RetainHeader) };


    // follow302TargetHost Field Functions 
    bool hasFollow302TargetHost() const { return this->follow302TargetHost_ != nullptr;};
    void deleteFollow302TargetHost() { this->follow302TargetHost_ = nullptr;};
    inline string getFollow302TargetHost() const { DARABONBA_PTR_GET_DEFAULT(follow302TargetHost_, "") };
    inline CreateOriginRuleRequest& setFollow302TargetHost(string follow302TargetHost) { DARABONBA_PTR_SET_VALUE(follow302TargetHost_, follow302TargetHost) };


    // originHost Field Functions 
    bool hasOriginHost() const { return this->originHost_ != nullptr;};
    void deleteOriginHost() { this->originHost_ = nullptr;};
    inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
    inline CreateOriginRuleRequest& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


    // originHttpPort Field Functions 
    bool hasOriginHttpPort() const { return this->originHttpPort_ != nullptr;};
    void deleteOriginHttpPort() { this->originHttpPort_ = nullptr;};
    inline string getOriginHttpPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpPort_, "") };
    inline CreateOriginRuleRequest& setOriginHttpPort(string originHttpPort) { DARABONBA_PTR_SET_VALUE(originHttpPort_, originHttpPort) };


    // originHttpsPort Field Functions 
    bool hasOriginHttpsPort() const { return this->originHttpsPort_ != nullptr;};
    void deleteOriginHttpsPort() { this->originHttpsPort_ = nullptr;};
    inline string getOriginHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpsPort_, "") };
    inline CreateOriginRuleRequest& setOriginHttpsPort(string originHttpsPort) { DARABONBA_PTR_SET_VALUE(originHttpsPort_, originHttpsPort) };


    // originMtls Field Functions 
    bool hasOriginMtls() const { return this->originMtls_ != nullptr;};
    void deleteOriginMtls() { this->originMtls_ = nullptr;};
    inline string getOriginMtls() const { DARABONBA_PTR_GET_DEFAULT(originMtls_, "") };
    inline CreateOriginRuleRequest& setOriginMtls(string originMtls) { DARABONBA_PTR_SET_VALUE(originMtls_, originMtls) };


    // originReadTimeout Field Functions 
    bool hasOriginReadTimeout() const { return this->originReadTimeout_ != nullptr;};
    void deleteOriginReadTimeout() { this->originReadTimeout_ = nullptr;};
    inline string getOriginReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(originReadTimeout_, "") };
    inline CreateOriginRuleRequest& setOriginReadTimeout(string originReadTimeout) { DARABONBA_PTR_SET_VALUE(originReadTimeout_, originReadTimeout) };


    // originScheme Field Functions 
    bool hasOriginScheme() const { return this->originScheme_ != nullptr;};
    void deleteOriginScheme() { this->originScheme_ = nullptr;};
    inline string getOriginScheme() const { DARABONBA_PTR_GET_DEFAULT(originScheme_, "") };
    inline CreateOriginRuleRequest& setOriginScheme(string originScheme) { DARABONBA_PTR_SET_VALUE(originScheme_, originScheme) };


    // originSni Field Functions 
    bool hasOriginSni() const { return this->originSni_ != nullptr;};
    void deleteOriginSni() { this->originSni_ = nullptr;};
    inline string getOriginSni() const { DARABONBA_PTR_GET_DEFAULT(originSni_, "") };
    inline CreateOriginRuleRequest& setOriginSni(string originSni) { DARABONBA_PTR_SET_VALUE(originSni_, originSni) };


    // originVerify Field Functions 
    bool hasOriginVerify() const { return this->originVerify_ != nullptr;};
    void deleteOriginVerify() { this->originVerify_ = nullptr;};
    inline string getOriginVerify() const { DARABONBA_PTR_GET_DEFAULT(originVerify_, "") };
    inline CreateOriginRuleRequest& setOriginVerify(string originVerify) { DARABONBA_PTR_SET_VALUE(originVerify_, originVerify) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline CreateOriginRuleRequest& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // rangeChunkSize Field Functions 
    bool hasRangeChunkSize() const { return this->rangeChunkSize_ != nullptr;};
    void deleteRangeChunkSize() { this->rangeChunkSize_ = nullptr;};
    inline string getRangeChunkSize() const { DARABONBA_PTR_GET_DEFAULT(rangeChunkSize_, "") };
    inline CreateOriginRuleRequest& setRangeChunkSize(string rangeChunkSize) { DARABONBA_PTR_SET_VALUE(rangeChunkSize_, rangeChunkSize) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateOriginRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateOriginRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateOriginRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateOriginRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateOriginRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateOriginRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Rewrite the DNS resolution record for the origin request.
    shared_ptr<string> dnsRecord_ {};
    shared_ptr<string> follow302Enable_ {};
    shared_ptr<string> follow302MaxTries_ {};
    shared_ptr<string> follow302RetainArgs_ {};
    shared_ptr<string> follow302RetainHeader_ {};
    shared_ptr<string> follow302TargetHost_ {};
    // The HOST carried in the origin request.
    shared_ptr<string> originHost_ {};
    // Port of the origin server when using the HTTP protocol for origin requests.
    shared_ptr<string> originHttpPort_ {};
    // Port of the origin server when using the HTTPS protocol for origin requests.
    shared_ptr<string> originHttpsPort_ {};
    // mTLS switch. Possible values:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> originMtls_ {};
    shared_ptr<string> originReadTimeout_ {};
    // Protocol used for the origin request. Possible values:
    // - http: Use HTTP protocol for origin requests.
    // - https: Use HTTPS protocol for origin requests.
    // - follow: Follow the client\\"s protocol for origin requests.
    shared_ptr<string> originScheme_ {};
    // SNI carried in the origin request.
    shared_ptr<string> originSni_ {};
    // Origin certificate verification switch. Possible values:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> originVerify_ {};
    // Use range chunking for origin downloads. Possible values:
    // - on: Enable
    // - off: Disable
    // - force: Force
    shared_ptr<string> range_ {};
    shared_ptr<string> rangeChunkSize_ {};
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding global configurations. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter is not required when adding global configurations. Possible values:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter is not required when adding global configurations.
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> sequence_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the version of the site where the configuration takes effect. The default is version 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
