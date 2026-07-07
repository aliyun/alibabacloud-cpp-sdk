// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEWAFRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEWAFRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateWafRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateWafRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configsShrink_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateWafRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configsShrink_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Shared, sharedShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    BatchCreateWafRulesShrinkRequest() = default ;
    BatchCreateWafRulesShrinkRequest(const BatchCreateWafRulesShrinkRequest &) = default ;
    BatchCreateWafRulesShrinkRequest(BatchCreateWafRulesShrinkRequest &&) = default ;
    BatchCreateWafRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateWafRulesShrinkRequest() = default ;
    BatchCreateWafRulesShrinkRequest& operator=(const BatchCreateWafRulesShrinkRequest &) = default ;
    BatchCreateWafRulesShrinkRequest& operator=(BatchCreateWafRulesShrinkRequest &&) = default ;
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
    inline BatchCreateWafRulesShrinkRequest& setConfigsShrink(string configsShrink) { DARABONBA_PTR_SET_VALUE(configsShrink_, configsShrink) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchCreateWafRulesShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchCreateWafRulesShrinkRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // sharedShrink Field Functions 
    bool hasSharedShrink() const { return this->sharedShrink_ != nullptr;};
    void deleteSharedShrink() { this->sharedShrink_ = nullptr;};
    inline string getSharedShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedShrink_, "") };
    inline BatchCreateWafRulesShrinkRequest& setSharedShrink(string sharedShrink) { DARABONBA_PTR_SET_VALUE(sharedShrink_, sharedShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateWafRulesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchCreateWafRulesShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The list of rule configurations. Specifies the detailed configuration for each rule.
    // 
    // **Required subfields for each phase** (applicable only to the two phases supported by this batch operation):
    // 
    // - `http_anti_scan`: You must specify `Type` and at least one of `ManagedList` or `RateLimit`.
    // - `http_bot`: You must specify the advanced mode bots configuration. The subfields are defined in the `WafRuleConfig` data structure.
    // 
    // > Note: Other phases such as `http_custom` and `http_whitelist` cannot use this batch operation. Use the single-rule operation `CreateWafRule` instead. The subfield constraints are described in the single-rule operation documentation.
    // 
    // > If `Configs` is not specified or required subfields are missing, the service returns `InvalidParameter(400)` or `Rule.Config.Malformed`.
    shared_ptr<string> configsShrink_ {};
    // The WAF rule execution phase. This **batch operation supports only** the following two phases. For other phases, use the single-rule operations `CreateWafRule` or `UpdateWafRule`:
    // - `http_anti_scan`: scan protection rules
    // - `http_bot`: advanced mode bots
    // 
    // > Note: The `http_anti_scan` and `http_bot` phases **support only batch creation**. The single-rule operation `CreateWafRule` does not accept these two values. Conversely, other phases such as `http_custom` and `http_whitelist` can be created only by using single-rule operations and cannot use this batch operation.
    // 
    // **Required constraint**: Although this parameter is marked as optional (required: false) in the specification, it is **required** when you call this batch operation. If this parameter is not specified, the service returns `InvalidParameter(400)`.
    // 
    // **Plan prerequisite**: `http_anti_scan` requires the site to have a **high or higher plan**. Calling this operation with a basic plan returns `Phase.HttpAntiScan.NotSupport`. Verify the site plan before calling this operation.
    shared_ptr<string> phase_ {};
    // The ID of the WAF ruleset. You can call the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation to obtain the ruleset ID.
    shared_ptr<int64_t> rulesetId_ {};
    // The shared configuration for multiple rules. Specifies the common properties of multiple rules.
    // 
    // **Conditionally required**: Although this parameter is marked as optional (required: false) in the specification, it is **required** when `Phase=http_anti_scan`. If this parameter is not specified, the service returns `InvalidParameter(400)`.
    // 
    // **Subfield requirements**: In the `http_anti_scan` phase, Shared must include shared fields such as `Name` (rule name) and `Action` (rule action). For other phases, the required subfields of Shared vary depending on the specific phase.
    shared_ptr<string> sharedShrink_ {};
    // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number of the site configuration. For sites with version management enabled, you can use this parameter to specify the site version on which the configuration takes effect. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
