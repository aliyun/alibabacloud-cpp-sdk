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
        && return this->phase_ == nullptr && return this->rulesetId_ == nullptr && return this->sharedShrink_ == nullptr && return this->siteId_ == nullptr && return this->siteVersion_ == nullptr; };
    // configsShrink Field Functions 
    bool hasConfigsShrink() const { return this->configsShrink_ != nullptr;};
    void deleteConfigsShrink() { this->configsShrink_ = nullptr;};
    inline string configsShrink() const { DARABONBA_PTR_GET_DEFAULT(configsShrink_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setConfigsShrink(string configsShrink) { DARABONBA_PTR_SET_VALUE(configsShrink_, configsShrink) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline BatchUpdateWafRulesShrinkRequest& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // sharedShrink Field Functions 
    bool hasSharedShrink() const { return this->sharedShrink_ != nullptr;};
    void deleteSharedShrink() { this->sharedShrink_ = nullptr;};
    inline string sharedShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedShrink_, "") };
    inline BatchUpdateWafRulesShrinkRequest& setSharedShrink(string sharedShrink) { DARABONBA_PTR_SET_VALUE(sharedShrink_, sharedShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchUpdateWafRulesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline BatchUpdateWafRulesShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The configurations of rules.
    std::shared_ptr<string> configsShrink_ = nullptr;
    // The WAF rule category.
    std::shared_ptr<string> phase_ = nullptr;
    // The ID of the WAF ruleset, which can be obtained by calling the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation.
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    // The configurations shared by multiple rules.
    std::shared_ptr<string> sharedShrink_ = nullptr;
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
