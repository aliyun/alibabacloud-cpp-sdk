// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPSBASICCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPSBASICCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetHttpsBasicConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpsBasicConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ciphersuite, ciphersuite_);
      DARABONBA_PTR_TO_JSON(CiphersuiteGroup, ciphersuiteGroup_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(Http3, http3_);
      DARABONBA_PTR_TO_JSON(Https, https_);
      DARABONBA_PTR_TO_JSON(OcspStapling, ocspStapling_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(Tls10, tls10_);
      DARABONBA_PTR_TO_JSON(Tls11, tls11_);
      DARABONBA_PTR_TO_JSON(Tls12, tls12_);
      DARABONBA_PTR_TO_JSON(Tls13, tls13_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpsBasicConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ciphersuite, ciphersuite_);
      DARABONBA_PTR_FROM_JSON(CiphersuiteGroup, ciphersuiteGroup_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(Http3, http3_);
      DARABONBA_PTR_FROM_JSON(Https, https_);
      DARABONBA_PTR_FROM_JSON(OcspStapling, ocspStapling_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(Tls10, tls10_);
      DARABONBA_PTR_FROM_JSON(Tls11, tls11_);
      DARABONBA_PTR_FROM_JSON(Tls12, tls12_);
      DARABONBA_PTR_FROM_JSON(Tls13, tls13_);
    };
    GetHttpsBasicConfigurationResponseBody() = default ;
    GetHttpsBasicConfigurationResponseBody(const GetHttpsBasicConfigurationResponseBody &) = default ;
    GetHttpsBasicConfigurationResponseBody(GetHttpsBasicConfigurationResponseBody &&) = default ;
    GetHttpsBasicConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpsBasicConfigurationResponseBody() = default ;
    GetHttpsBasicConfigurationResponseBody& operator=(const GetHttpsBasicConfigurationResponseBody &) = default ;
    GetHttpsBasicConfigurationResponseBody& operator=(GetHttpsBasicConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ciphersuite_ == nullptr
        && return this->ciphersuiteGroup_ == nullptr && return this->configId_ == nullptr && return this->configType_ == nullptr && return this->http2_ == nullptr && return this->http3_ == nullptr
        && return this->https_ == nullptr && return this->ocspStapling_ == nullptr && return this->requestId_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr
        && return this->ruleName_ == nullptr && return this->sequence_ == nullptr && return this->tls10_ == nullptr && return this->tls11_ == nullptr && return this->tls12_ == nullptr
        && return this->tls13_ == nullptr; };
    // ciphersuite Field Functions 
    bool hasCiphersuite() const { return this->ciphersuite_ != nullptr;};
    void deleteCiphersuite() { this->ciphersuite_ = nullptr;};
    inline string ciphersuite() const { DARABONBA_PTR_GET_DEFAULT(ciphersuite_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setCiphersuite(string ciphersuite) { DARABONBA_PTR_SET_VALUE(ciphersuite_, ciphersuite) };


    // ciphersuiteGroup Field Functions 
    bool hasCiphersuiteGroup() const { return this->ciphersuiteGroup_ != nullptr;};
    void deleteCiphersuiteGroup() { this->ciphersuiteGroup_ = nullptr;};
    inline string ciphersuiteGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersuiteGroup_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setCiphersuiteGroup(string ciphersuiteGroup) { DARABONBA_PTR_SET_VALUE(ciphersuiteGroup_, ciphersuiteGroup) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetHttpsBasicConfigurationResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string http2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // http3 Field Functions 
    bool hasHttp3() const { return this->http3_ != nullptr;};
    void deleteHttp3() { this->http3_ = nullptr;};
    inline string http3() const { DARABONBA_PTR_GET_DEFAULT(http3_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setHttp3(string http3) { DARABONBA_PTR_SET_VALUE(http3_, http3) };


    // https Field Functions 
    bool hasHttps() const { return this->https_ != nullptr;};
    void deleteHttps() { this->https_ = nullptr;};
    inline string https() const { DARABONBA_PTR_GET_DEFAULT(https_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setHttps(string https) { DARABONBA_PTR_SET_VALUE(https_, https) };


    // ocspStapling Field Functions 
    bool hasOcspStapling() const { return this->ocspStapling_ != nullptr;};
    void deleteOcspStapling() { this->ocspStapling_ = nullptr;};
    inline string ocspStapling() const { DARABONBA_PTR_GET_DEFAULT(ocspStapling_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setOcspStapling(string ocspStapling) { DARABONBA_PTR_SET_VALUE(ocspStapling_, ocspStapling) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetHttpsBasicConfigurationResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // tls10 Field Functions 
    bool hasTls10() const { return this->tls10_ != nullptr;};
    void deleteTls10() { this->tls10_ = nullptr;};
    inline string tls10() const { DARABONBA_PTR_GET_DEFAULT(tls10_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setTls10(string tls10) { DARABONBA_PTR_SET_VALUE(tls10_, tls10) };


    // tls11 Field Functions 
    bool hasTls11() const { return this->tls11_ != nullptr;};
    void deleteTls11() { this->tls11_ = nullptr;};
    inline string tls11() const { DARABONBA_PTR_GET_DEFAULT(tls11_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setTls11(string tls11) { DARABONBA_PTR_SET_VALUE(tls11_, tls11) };


    // tls12 Field Functions 
    bool hasTls12() const { return this->tls12_ != nullptr;};
    void deleteTls12() { this->tls12_ = nullptr;};
    inline string tls12() const { DARABONBA_PTR_GET_DEFAULT(tls12_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setTls12(string tls12) { DARABONBA_PTR_SET_VALUE(tls12_, tls12) };


    // tls13 Field Functions 
    bool hasTls13() const { return this->tls13_ != nullptr;};
    void deleteTls13() { this->tls13_ = nullptr;};
    inline string tls13() const { DARABONBA_PTR_GET_DEFAULT(tls13_, "") };
    inline GetHttpsBasicConfigurationResponseBody& setTls13(string tls13) { DARABONBA_PTR_SET_VALUE(tls13_, tls13) };


  protected:
    // Custom cipher suite, indicating the specific encryption algorithm selected when CiphersuiteGroup is set to custom.
    std::shared_ptr<string> ciphersuite_ = nullptr;
    // Cipher suite group, default is all cipher suites. Value range:
    // 
    // - all: All cipher suites.
    // - strict: Strong cipher suites.
    // - custom: Custom cipher suites.
    std::shared_ptr<string> ciphersuiteGroup_ = nullptr;
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type, which can be used to query global or rule configurations. Value range:
    // - global: Query global configuration;
    // - rule: Query rule configuration;
    std::shared_ptr<string> configType_ = nullptr;
    // Whether to enable HTTP2, default is enabled. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> http2_ = nullptr;
    // Whether to enable HTTP3, which is enabled by default. The value can be:
    // - on: Enabled. 
    // - off: Disabled.
    std::shared_ptr<string> http3_ = nullptr;
    // Whether to enable HTTPS, default is enabled. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> https_ = nullptr;
    // Whether to enable OCSP, default is disabled. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ocspStapling_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Matching rule content.
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution sequence.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Whether to enable TLS1.0, default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> tls10_ = nullptr;
    // Whether to enable TLS1.1, default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> tls11_ = nullptr;
    // Whether to enable TLS1.2, default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> tls12_ = nullptr;
    // Whether to enable TLS1.3, default is disabled. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> tls13_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
