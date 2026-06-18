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
    // A list of configurations for individual rules.
    shared_ptr<string> configsShrink_ {};
    // The WAF rule runtime phase.
    // 
    // - `http_whitelist`: whitelist rule
    // 
    // - `http_custom`: custom rule
    // 
    // - `http_managed`: managed rule
    // 
    // - `http_anti_scan`: scan protection rule
    // 
    // - `http_ratelimit`: rate limiting rule
    // 
    // - `ip_access_rule`: IP access rule
    // 
    // - `http_bot`: advanced bot rule
    // 
    // - `http_security_level_rule`: security rule
    shared_ptr<string> phase_ {};
    // The ID of the WAF ruleset. You can call the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation to obtain this ID.
    shared_ptr<int64_t> rulesetId_ {};
    // The configuration properties that are shared by all rules in this batch update.
    shared_ptr<string> sharedShrink_ {};
    // The ID of the site. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version of the site configuration. For sites that have configuration version management enabled, this parameter specifies the version to which the configuration applies. The default value is 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
