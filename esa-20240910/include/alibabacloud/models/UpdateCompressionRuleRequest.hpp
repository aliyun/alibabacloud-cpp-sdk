// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPRESSIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPRESSIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateCompressionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCompressionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brotli, brotli_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Gzip, gzip_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Zstd, zstd_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCompressionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brotli, brotli_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Zstd, zstd_);
    };
    UpdateCompressionRuleRequest() = default ;
    UpdateCompressionRuleRequest(const UpdateCompressionRuleRequest &) = default ;
    UpdateCompressionRuleRequest(UpdateCompressionRuleRequest &&) = default ;
    UpdateCompressionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCompressionRuleRequest() = default ;
    UpdateCompressionRuleRequest& operator=(const UpdateCompressionRuleRequest &) = default ;
    UpdateCompressionRuleRequest& operator=(UpdateCompressionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brotli_ == nullptr
        && this->configId_ == nullptr && this->gzip_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteId_ == nullptr && this->zstd_ == nullptr; };
    // brotli Field Functions 
    bool hasBrotli() const { return this->brotli_ != nullptr;};
    void deleteBrotli() { this->brotli_ = nullptr;};
    inline string getBrotli() const { DARABONBA_PTR_GET_DEFAULT(brotli_, "") };
    inline UpdateCompressionRuleRequest& setBrotli(string brotli) { DARABONBA_PTR_SET_VALUE(brotli_, brotli) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateCompressionRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string getGzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline UpdateCompressionRuleRequest& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateCompressionRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateCompressionRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateCompressionRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateCompressionRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateCompressionRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // zstd Field Functions 
    bool hasZstd() const { return this->zstd_ != nullptr;};
    void deleteZstd() { this->zstd_ = nullptr;};
    inline string getZstd() const { DARABONBA_PTR_GET_DEFAULT(zstd_, "") };
    inline UpdateCompressionRuleRequest& setZstd(string zstd) { DARABONBA_PTR_SET_VALUE(zstd_, zstd) };


  protected:
    // Brotli compression. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> brotli_ {};
    // Configuration ID. It can be obtained by calling the [ListCompressionRules](~~ListCompressionRules~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // Gzip compression. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> gzip_ {};
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - To match all incoming requests: Set the value to true
    // - To match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter is not required when adding a global configuration.
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> sequence_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Zstd compression. Value range:
    // - on: Enable.
    // - off: Disable.
    shared_ptr<string> zstd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
