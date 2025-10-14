// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPRESSIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPRESSIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCompressionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCompressionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brotli, brotli_);
      DARABONBA_PTR_TO_JSON(Gzip, gzip_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Zstd, zstd_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCompressionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brotli, brotli_);
      DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Zstd, zstd_);
    };
    CreateCompressionRuleRequest() = default ;
    CreateCompressionRuleRequest(const CreateCompressionRuleRequest &) = default ;
    CreateCompressionRuleRequest(CreateCompressionRuleRequest &&) = default ;
    CreateCompressionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCompressionRuleRequest() = default ;
    CreateCompressionRuleRequest& operator=(const CreateCompressionRuleRequest &) = default ;
    CreateCompressionRuleRequest& operator=(CreateCompressionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brotli_ == nullptr
        && return this->gzip_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr && return this->zstd_ == nullptr; };
    // brotli Field Functions 
    bool hasBrotli() const { return this->brotli_ != nullptr;};
    void deleteBrotli() { this->brotli_ = nullptr;};
    inline string brotli() const { DARABONBA_PTR_GET_DEFAULT(brotli_, "") };
    inline CreateCompressionRuleRequest& setBrotli(string brotli) { DARABONBA_PTR_SET_VALUE(brotli_, brotli) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline CreateCompressionRuleRequest& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateCompressionRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateCompressionRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateCompressionRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateCompressionRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateCompressionRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateCompressionRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // zstd Field Functions 
    bool hasZstd() const { return this->zstd_ != nullptr;};
    void deleteZstd() { this->zstd_ = nullptr;};
    inline string zstd() const { DARABONBA_PTR_GET_DEFAULT(zstd_, "") };
    inline CreateCompressionRuleRequest& setZstd(string zstd) { DARABONBA_PTR_SET_VALUE(zstd_, zstd) };


  protected:
    // Brotli compression. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> brotli_ = nullptr;
    // Gzip compression. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> gzip_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding a global configuration. There are two usage scenarios:
    // - To match all incoming requests: Set the value to true
    // - To match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding a global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding a global configuration.
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the effective version of the site configuration, defaulting to version 0.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Zstd compression. Value range:
    // 
    // - on: Enable.
    // - off: Disable.
    std::shared_ptr<string> zstd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
