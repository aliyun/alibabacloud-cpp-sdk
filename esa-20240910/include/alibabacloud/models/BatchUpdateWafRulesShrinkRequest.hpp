// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEWAFRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEWAFRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchUpdateWafRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateWafRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configsShrink_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateWafRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configsShrink_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    BatchUpdateWafRulesShrinkRequest() = default ;
    BatchUpdateWafRulesShrinkRequest(const BatchUpdateWafRulesShrinkRequest &) = default ;
    BatchUpdateWafRulesShrinkRequest(BatchUpdateWafRulesShrinkRequest &&) = default ;
    BatchUpdateWafRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateWafRulesShrinkRequest() = default ;
    BatchUpdateWafRulesShrinkRequest& operator=(const BatchUpdateWafRulesShrinkRequest &) = default ;
    BatchUpdateWafRulesShrinkRequest& operator=(BatchUpdateWafRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configsShrink_ == nullptr
        && this->phase_ == nullptr && this->rulesetId_ == nullptr && this->sharedShrink_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // configsShrink Field Functions 
    bool hasConfigsShrink() const { return this->configsShrink_ != nullptr;};
    void deleteConfigsShrink() { this->configsShrink_ = nullptr;};
    inline string getConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(configsShrink_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setConfigsShrink(string configsShrink) { DARABONBA_PTR_SET_VALUE(configsShrink_, configsShrink) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchUpdateWafRulesShrinkRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // sharedShrink Field Functions 
    bool hasSharedShrink() const { return this->sharedShrink_ != nullptr;};
    void deleteSharedShrink() { this->sharedShrink_ = nullptr;};
    inline string getSharedShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedShrink_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setSharedShrink(string sharedShrink) { DARABONBA_PTR_SET_VALUE(sharedShrink_, sharedShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchUpdateWafRulesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchUpdateWafRulesShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The list of rule configurations, which specifies the detailed configuration of each rule.
    // 
    // **Required sub-fields for each phase** (applicable only to the two phases supported by this batch operation):
    // 
    // - `http_anti_scan`: You must provide `Type`, and at least one of `ManagedList` or `RateLimit`.
    // - `http_bot`: You must provide configurations related to advanced bot management. The sub-fields are subject to the definition of the `WafRuleConfig` data structure.
    // 
    // > Note: Other phases such as `http_custom` and `http_whitelist` cannot be updated by using this batch operation. Use the single-rule operation `UpdateWafRule` instead. The sub-field constraints are subject to the documentation of the single-rule operation.
    // 
    // > Note: If `Configs` is empty or sub-fields are missing, the server returns an `InvalidParameter(400)` or `Rule.Config.Malformed` error.
    shared_ptr<string> configsShrink_ {};
    // The execution phase of WAF rules. This **batch operation supports only** the following two phases. For other phases, use the single-rule operation `UpdateWafRule`:
    // - `http_anti_scan`: scan protection rules
    // - `http_bot`: advanced bot management rules
    // 
    // > Note: The `http_anti_scan` and `http_bot` phases **support only batch updates**. The single-rule operation `UpdateWafRule` does not accept these two values. Conversely, other phases (such as `http_custom` and `http_whitelist`) can only be updated by using the single-rule operation and cannot be updated by using this batch operation.
    // 
    // **Required constraint**: Although this parameter is marked as optional (required: false) in the specification, it **must be specified** when you call this batch operation. The server cannot determine the target rule set without the Phase parameter. If this parameter is not provided, an `InvalidParameter(400)` error is returned.
    shared_ptr<string> phase_ {};
    // The ID of the WAF rule set. You can obtain the ID by calling the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation.
    shared_ptr<int64_t> rulesetId_ {};
    // The shared configuration for multiple rules, which specifies the common properties of multiple rules.
    // 
    // **Conditional requirement**: Although this parameter is marked as optional (required: false) in the specification, it is **actually required** when `Phase` is set to `http_anti_scan`. If this parameter is not provided, the server returns an `InvalidParameter(400)` error.
    // 
    // **Sub-field requirements**: In the `http_anti_scan` phase, the Shared parameter must include shared fields such as `Name` (rule name), `Expression` (match expression), and `Action` (rule action). For other phases, the required sub-fields of Shared depend on the specific phase.
    shared_ptr<string> sharedShrink_ {};
    // The ID of the site. You can obtain the ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site configuration. For sites with configuration version management enabled, you can use this parameter to specify the site version for which the configuration takes effect. Default value: 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
