// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAFRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAFRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateWafRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWafRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWafRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateWafRuleRequest() = default ;
    CreateWafRuleRequest(const CreateWafRuleRequest &) = default ;
    CreateWafRuleRequest(CreateWafRuleRequest &&) = default ;
    CreateWafRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWafRuleRequest() = default ;
    CreateWafRuleRequest& operator=(const CreateWafRuleRequest &) = default ;
    CreateWafRuleRequest& operator=(CreateWafRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->phase_ == nullptr && this->rulesetId_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const WafRuleConfig & getConfig() const { DARABONBA_PTR_GET_CONST(config_, WafRuleConfig) };
    inline WafRuleConfig getConfig() { DARABONBA_PTR_GET(config_, WafRuleConfig) };
    inline CreateWafRuleRequest& setConfig(const WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateWafRuleRequest& setConfig(WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline CreateWafRuleRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t getRulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline CreateWafRuleRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateWafRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateWafRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Rule configuration, specifying the detailed configuration for creating a rule.
    shared_ptr<WafRuleConfig> config_ {};
    // WAF operation phase.
    // 
    // This parameter is required.
    shared_ptr<string> phase_ {};
    // Ruleset ID.
    shared_ptr<int64_t> rulesetId_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // Site version.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
