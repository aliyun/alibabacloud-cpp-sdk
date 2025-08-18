// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEWAFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    BatchCreateWafRulesRequest() = default ;
    BatchCreateWafRulesRequest(const BatchCreateWafRulesRequest &) = default ;
    BatchCreateWafRulesRequest(BatchCreateWafRulesRequest &&) = default ;
    BatchCreateWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateWafRulesRequest() = default ;
    BatchCreateWafRulesRequest& operator=(const BatchCreateWafRulesRequest &) = default ;
    BatchCreateWafRulesRequest& operator=(BatchCreateWafRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->phase_ != nullptr && this->rulesetId_ != nullptr && this->shared_ != nullptr && this->siteId_ != nullptr && this->siteVersion_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<WafRuleConfig> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<WafRuleConfig>) };
    inline vector<WafRuleConfig> configs() { DARABONBA_PTR_GET(configs_, vector<WafRuleConfig>) };
    inline BatchCreateWafRulesRequest& setConfigs(const vector<WafRuleConfig> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline BatchCreateWafRulesRequest& setConfigs(vector<WafRuleConfig> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchCreateWafRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchCreateWafRulesRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const WafBatchRuleShared & shared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
    inline WafBatchRuleShared shared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
    inline BatchCreateWafRulesRequest& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline BatchCreateWafRulesRequest& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateWafRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchCreateWafRulesRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // A list of configurations for each rule, specifying detailed configurations for each rule.
    std::shared_ptr<vector<WafRuleConfig>> configs_ = nullptr;
    // WAF rule type, with values:
    // 
    // - **http_anti_scan**: Scan protection.
    // - **http_bot**: Bots.
    std::shared_ptr<string> phase_ = nullptr;
    // Ruleset ID.
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    // Shared configuration for multiple rules, specifying common attributes of multiple rules.
    std::shared_ptr<WafBatchRuleShared> shared_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Site version.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
