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
    virtual bool empty() const override { return this->configs_ == nullptr
        && this->phase_ == nullptr && this->rulesetId_ == nullptr && this->shared_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<WafRuleConfig> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<WafRuleConfig>) };
    inline vector<WafRuleConfig> getConfigs() { DARABONBA_PTR_GET(configs_, vector<WafRuleConfig>) };
    inline BatchCreateWafRulesRequest& setConfigs(const vector<WafRuleConfig> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline BatchCreateWafRulesRequest& setConfigs(vector<WafRuleConfig> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchCreateWafRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchCreateWafRulesRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const WafBatchRuleShared & getShared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
    inline WafBatchRuleShared getShared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
    inline BatchCreateWafRulesRequest& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline BatchCreateWafRulesRequest& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateWafRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchCreateWafRulesRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The list of rule configurations, which specifies the detailed configuration of each rule.
    // 
    // **Required subfields for each phase** (only applicable to the two phases supported by this batch operation):
    // 
    // - http_anti_scan: You must provide Type and at least one of ManagedList or RateLimit.
    // - http_bot: You must provide configurations related to advanced bots. The subfields are subject to the WafRuleConfig data structure definition.
    // 
    // > Note: Other phases such as http_custom and http_whitelist cannot use this batch operation. Use the single-item operation CreateWafRule instead. The subfield constraints are subject to the single-item operation documentation.
    // 
    // > Notice: If Configs is missing or subfields are missing, the service returns InvalidParameter(400) or Rule.Config.Malformed.
    shared_ptr<vector<WafRuleConfig>> configs_ {};
    // The execution phase of the WAF rule. This **batch operation only supports** the following two phases. For other phases, use the single-item operations CreateWafRule or UpdateWafRule:
    // - http_anti_scan: Scan protection rules.
    // - http_bot: Advanced bots.
    // 
    // > Note: The http_anti_scan and http_bot phases **only support batch creation**. The single-item operation CreateWafRule does not accept these two values. Conversely, other phases (such as http_custom and http_whitelist) can only be created by using the single-item operation and cannot use this batch operation.
    // 
    // **Required constraint**: Although this parameter is marked as optional (required: false) in the specification, it **must be provided** when you call this batch operation. If it is not provided, the service returns InvalidParameter(400).
    // 
    // **Edition prerequisite**: http_anti_scan requires the site to have the **High edition or higher**. Calls from the Basic edition return Phase.HttpAntiScan.NotSupport. Verify the site edition before you call the operation.
    shared_ptr<string> phase_ {};
    // The ID of the WAF ruleset. You can obtain the ruleset ID by calling the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation.
    shared_ptr<int64_t> rulesetId_ {};
    // The shared configuration for multiple rules, which specifies the common attributes of the rules.
    // 
    // **Conditionally required**: Although this parameter is marked as optional (required: false) in the specification, it is **actually required** when Phase is set to http_anti_scan. If it is not provided, the service returns InvalidParameter(400).
    // 
    // **Subfield requirements**: In the http_anti_scan phase, Shared must include shared fields such as Name (rule name) and Action (rule action). For other phases, the required subfields of Shared depend on the specific phase.
    shared_ptr<WafBatchRuleShared> shared_ {};
    // The site ID. You can obtain the site ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version where the configuration takes effect. Default value: 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
