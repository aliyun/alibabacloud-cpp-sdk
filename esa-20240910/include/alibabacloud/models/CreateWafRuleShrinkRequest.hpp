// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAFRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAFRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateWafRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWafRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWafRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateWafRuleShrinkRequest() = default ;
    CreateWafRuleShrinkRequest(const CreateWafRuleShrinkRequest &) = default ;
    CreateWafRuleShrinkRequest(CreateWafRuleShrinkRequest &&) = default ;
    CreateWafRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWafRuleShrinkRequest() = default ;
    CreateWafRuleShrinkRequest& operator=(const CreateWafRuleShrinkRequest &) = default ;
    CreateWafRuleShrinkRequest& operator=(CreateWafRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configShrink_ == nullptr
        && this->phase_ == nullptr && this->rulesetId_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string getConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline CreateWafRuleShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline CreateWafRuleShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline CreateWafRuleShrinkRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateWafRuleShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateWafRuleShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The specific configuration of the WAF rule (`WafRuleConfig` data structure). The required fields vary depending on the Phase value:
    // 
    // - `http_custom`: `Expression` (match expression) and `Action` (action upon match) are required. Setting `Name` is recommended for easier identification.
    // - `http_whitelist`: `Expression` is required. Matched requests are allowed directly (no Action).
    // - `http_ratelimit`: `Expression` and `RateLimit` (rate limiting parameters) are required.
    // - `ip_access_rule`: `Expression` (containing IP match) and `Action` are required.
    // 
    // > The complete field definitions are based on the `WafRuleConfig` data structure. If required fields are missing, the service returns `InvalidParameter(400)` / `Rule.Config.Malformed`.
    shared_ptr<string> configShrink_ {};
    // The WAF rule execution phase. This **single-creation operation** supports the following phases (it does not support `http_anti_scan` or `http_bot`. For these two phases, use the batch operation `BatchCreateWafRules`):
    // - `http_whitelist`: whitelist rule
    // - `http_custom`: custom rule
    // - `http_managed`: managed rule
    // - `http_ratelimit`: rate limiting rule
    // - `ip_access_rule`: IP access rule
    // - `http_security_level_rule`: security rule
    // 
    // > Note: `http_anti_scan` and `http_bot` can only be created through the batch operation. Passing these two values to this operation returns an error.
    // 
    // This parameter is required.
    shared_ptr<string> phase_ {};
    // The ID of the WAF ruleset. You can call the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation to obtain the ruleset ID.
    shared_ptr<int64_t> rulesetId_ {};
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
