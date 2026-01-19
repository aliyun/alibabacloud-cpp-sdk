// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPSBASICCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPSBASICCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateHttpsBasicConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpsBasicConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphersuite, ciphersuite_);
      DARABONBA_PTR_TO_JSON(CiphersuiteGroup, ciphersuiteGroup_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(Http3, http3_);
      DARABONBA_PTR_TO_JSON(Https, https_);
      DARABONBA_PTR_TO_JSON(OcspStapling, ocspStapling_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Tls10, tls10_);
      DARABONBA_PTR_TO_JSON(Tls11, tls11_);
      DARABONBA_PTR_TO_JSON(Tls12, tls12_);
      DARABONBA_PTR_TO_JSON(Tls13, tls13_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpsBasicConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphersuite, ciphersuite_);
      DARABONBA_PTR_FROM_JSON(CiphersuiteGroup, ciphersuiteGroup_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(Http3, http3_);
      DARABONBA_PTR_FROM_JSON(Https, https_);
      DARABONBA_PTR_FROM_JSON(OcspStapling, ocspStapling_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Tls10, tls10_);
      DARABONBA_PTR_FROM_JSON(Tls11, tls11_);
      DARABONBA_PTR_FROM_JSON(Tls12, tls12_);
      DARABONBA_PTR_FROM_JSON(Tls13, tls13_);
    };
    CreateHttpsBasicConfigurationRequest() = default ;
    CreateHttpsBasicConfigurationRequest(const CreateHttpsBasicConfigurationRequest &) = default ;
    CreateHttpsBasicConfigurationRequest(CreateHttpsBasicConfigurationRequest &&) = default ;
    CreateHttpsBasicConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpsBasicConfigurationRequest() = default ;
    CreateHttpsBasicConfigurationRequest& operator=(const CreateHttpsBasicConfigurationRequest &) = default ;
    CreateHttpsBasicConfigurationRequest& operator=(CreateHttpsBasicConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphersuite_ == nullptr
        && this->ciphersuiteGroup_ == nullptr && this->http2_ == nullptr && this->http3_ == nullptr && this->https_ == nullptr && this->ocspStapling_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr
        && this->tls10_ == nullptr && this->tls11_ == nullptr && this->tls12_ == nullptr && this->tls13_ == nullptr; };
    // ciphersuite Field Functions 
    bool hasCiphersuite() const { return this->ciphersuite_ != nullptr;};
    void deleteCiphersuite() { this->ciphersuite_ = nullptr;};
    inline string getCiphersuite() const { DARABONBA_PTR_GET_DEFAULT(ciphersuite_, "") };
    inline CreateHttpsBasicConfigurationRequest& setCiphersuite(string ciphersuite) { DARABONBA_PTR_SET_VALUE(ciphersuite_, ciphersuite) };


    // ciphersuiteGroup Field Functions 
    bool hasCiphersuiteGroup() const { return this->ciphersuiteGroup_ != nullptr;};
    void deleteCiphersuiteGroup() { this->ciphersuiteGroup_ = nullptr;};
    inline string getCiphersuiteGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersuiteGroup_, "") };
    inline CreateHttpsBasicConfigurationRequest& setCiphersuiteGroup(string ciphersuiteGroup) { DARABONBA_PTR_SET_VALUE(ciphersuiteGroup_, ciphersuiteGroup) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string getHttp2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline CreateHttpsBasicConfigurationRequest& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // http3 Field Functions 
    bool hasHttp3() const { return this->http3_ != nullptr;};
    void deleteHttp3() { this->http3_ = nullptr;};
    inline string getHttp3() const { DARABONBA_PTR_GET_DEFAULT(http3_, "") };
    inline CreateHttpsBasicConfigurationRequest& setHttp3(string http3) { DARABONBA_PTR_SET_VALUE(http3_, http3) };


    // https Field Functions 
    bool hasHttps() const { return this->https_ != nullptr;};
    void deleteHttps() { this->https_ = nullptr;};
    inline string getHttps() const { DARABONBA_PTR_GET_DEFAULT(https_, "") };
    inline CreateHttpsBasicConfigurationRequest& setHttps(string https) { DARABONBA_PTR_SET_VALUE(https_, https) };


    // ocspStapling Field Functions 
    bool hasOcspStapling() const { return this->ocspStapling_ != nullptr;};
    void deleteOcspStapling() { this->ocspStapling_ = nullptr;};
    inline string getOcspStapling() const { DARABONBA_PTR_GET_DEFAULT(ocspStapling_, "") };
    inline CreateHttpsBasicConfigurationRequest& setOcspStapling(string ocspStapling) { DARABONBA_PTR_SET_VALUE(ocspStapling_, ocspStapling) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpsBasicConfigurationRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpsBasicConfigurationRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpsBasicConfigurationRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpsBasicConfigurationRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpsBasicConfigurationRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // tls10 Field Functions 
    bool hasTls10() const { return this->tls10_ != nullptr;};
    void deleteTls10() { this->tls10_ = nullptr;};
    inline string getTls10() const { DARABONBA_PTR_GET_DEFAULT(tls10_, "") };
    inline CreateHttpsBasicConfigurationRequest& setTls10(string tls10) { DARABONBA_PTR_SET_VALUE(tls10_, tls10) };


    // tls11 Field Functions 
    bool hasTls11() const { return this->tls11_ != nullptr;};
    void deleteTls11() { this->tls11_ = nullptr;};
    inline string getTls11() const { DARABONBA_PTR_GET_DEFAULT(tls11_, "") };
    inline CreateHttpsBasicConfigurationRequest& setTls11(string tls11) { DARABONBA_PTR_SET_VALUE(tls11_, tls11) };


    // tls12 Field Functions 
    bool hasTls12() const { return this->tls12_ != nullptr;};
    void deleteTls12() { this->tls12_ = nullptr;};
    inline string getTls12() const { DARABONBA_PTR_GET_DEFAULT(tls12_, "") };
    inline CreateHttpsBasicConfigurationRequest& setTls12(string tls12) { DARABONBA_PTR_SET_VALUE(tls12_, tls12) };


    // tls13 Field Functions 
    bool hasTls13() const { return this->tls13_ != nullptr;};
    void deleteTls13() { this->tls13_ = nullptr;};
    inline string getTls13() const { DARABONBA_PTR_GET_DEFAULT(tls13_, "") };
    inline CreateHttpsBasicConfigurationRequest& setTls13(string tls13) { DARABONBA_PTR_SET_VALUE(tls13_, tls13) };


  protected:
    // Custom cipher suite, indicating the specific encryption algorithm selected when CiphersuiteGroup is set to custom.
    shared_ptr<string> ciphersuite_ {};
    // Cipher suite group. Default uses all cipher suites. Value range:
    // - all: All cipher suites.
    // - strict: Strong cipher suites.
    // - custom: Custom cipher suites.
    shared_ptr<string> ciphersuiteGroup_ {};
    // Whether to enable HTTP2. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> http2_ {};
    // Whether to enable HTTP3. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> http3_ {};
    // Whether to enable HTTPS. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> https_ {};
    // Whether to enable OCSP. Default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ocspStapling_ {};
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter is not required when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> sequence_ {};
    // Site ID, which can be obtained by calling the [ListSites](~~ListSites~~) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Whether to enable TLS1.0. Default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> tls10_ {};
    // Whether to enable TLS1.1. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> tls11_ {};
    // Whether to enable TLS1.2. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> tls12_ {};
    // Whether to enable TLS1.3. Default is enabled. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> tls13_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
