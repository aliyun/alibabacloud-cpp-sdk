// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPRESSIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPRESSIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCompressionRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompressionRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Brotli, brotli_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(Gzip, gzip_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Zstd, zstd_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompressionRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Brotli, brotli_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Zstd, zstd_);
    };
    GetCompressionRuleResponseBody() = default ;
    GetCompressionRuleResponseBody(const GetCompressionRuleResponseBody &) = default ;
    GetCompressionRuleResponseBody(GetCompressionRuleResponseBody &&) = default ;
    GetCompressionRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompressionRuleResponseBody() = default ;
    GetCompressionRuleResponseBody& operator=(const GetCompressionRuleResponseBody &) = default ;
    GetCompressionRuleResponseBody& operator=(GetCompressionRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->brotli_ != nullptr
        && this->configId_ != nullptr && this->configType_ != nullptr && this->gzip_ != nullptr && this->requestId_ != nullptr && this->rule_ != nullptr
        && this->ruleEnable_ != nullptr && this->ruleName_ != nullptr && this->sequence_ != nullptr && this->siteVersion_ != nullptr && this->zstd_ != nullptr; };
    // brotli Field Functions 
    bool hasBrotli() const { return this->brotli_ != nullptr;};
    void deleteBrotli() { this->brotli_ = nullptr;};
    inline string brotli() const { DARABONBA_PTR_GET_DEFAULT(brotli_, "") };
    inline GetCompressionRuleResponseBody& setBrotli(string brotli) { DARABONBA_PTR_SET_VALUE(brotli_, brotli) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetCompressionRuleResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetCompressionRuleResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline GetCompressionRuleResponseBody& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCompressionRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetCompressionRuleResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetCompressionRuleResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetCompressionRuleResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetCompressionRuleResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetCompressionRuleResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // zstd Field Functions 
    bool hasZstd() const { return this->zstd_ != nullptr;};
    void deleteZstd() { this->zstd_ = nullptr;};
    inline string zstd() const { DARABONBA_PTR_GET_DEFAULT(zstd_, "") };
    inline GetCompressionRuleResponseBody& setZstd(string zstd) { DARABONBA_PTR_SET_VALUE(zstd_, zstd) };


  protected:
    // Brotli compression. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> brotli_ = nullptr;
    // Configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // Configuration type. Possible values:
    // - global: Global configuration.
    // - rule: Rule-based configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // Gzip compression. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> gzip_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, this parameter can specify the effective version of the configuration, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Zstd compression. Value range: 
    // - on: enabled. 
    // - off: disabled.
    std::shared_ptr<string> zstd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
