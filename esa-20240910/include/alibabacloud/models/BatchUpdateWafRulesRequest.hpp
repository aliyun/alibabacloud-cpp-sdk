// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEWAFRULESREQUEST_HPP_
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
  class BatchUpdateWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    BatchUpdateWafRulesRequest() = default ;
    BatchUpdateWafRulesRequest(const BatchUpdateWafRulesRequest &) = default ;
    BatchUpdateWafRulesRequest(BatchUpdateWafRulesRequest &&) = default ;
    BatchUpdateWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateWafRulesRequest() = default ;
    BatchUpdateWafRulesRequest& operator=(const BatchUpdateWafRulesRequest &) = default ;
    BatchUpdateWafRulesRequest& operator=(BatchUpdateWafRulesRequest &&) = default ;
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
    inline BatchUpdateWafRulesRequest& setConfigs(const vector<WafRuleConfig> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline BatchUpdateWafRulesRequest& setConfigs(vector<WafRuleConfig> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchUpdateWafRulesRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchUpdateWafRulesRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const WafBatchRuleShared & shared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
    inline WafBatchRuleShared shared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
    inline BatchUpdateWafRulesRequest& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline BatchUpdateWafRulesRequest& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchUpdateWafRulesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchUpdateWafRulesRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The configurations of rules.
    std::shared_ptr<vector<WafRuleConfig>> configs_ = nullptr;
    // The WAF rule category.
    std::shared_ptr<string> phase_ = nullptr;
    // The ID of the WAF ruleset, which can be obtained by calling the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation.
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    // The configurations shared by multiple rules.
    std::shared_ptr<WafBatchRuleShared> shared_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The version of the website.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
