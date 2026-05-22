// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGETRANSFORMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGETRANSFORMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateImageTransformRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageTransformRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAvif, autoAvif_);
      DARABONBA_PTR_TO_JSON(AutoWebp, autoWebp_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageTransformRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAvif, autoAvif_);
      DARABONBA_PTR_FROM_JSON(AutoWebp, autoWebp_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateImageTransformRequest() = default ;
    UpdateImageTransformRequest(const UpdateImageTransformRequest &) = default ;
    UpdateImageTransformRequest(UpdateImageTransformRequest &&) = default ;
    UpdateImageTransformRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageTransformRequest() = default ;
    UpdateImageTransformRequest& operator=(const UpdateImageTransformRequest &) = default ;
    UpdateImageTransformRequest& operator=(UpdateImageTransformRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAvif_ == nullptr
        && this->autoWebp_ == nullptr && this->configId_ == nullptr && this->enable_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr; };
    // autoAvif Field Functions 
    bool hasAutoAvif() const { return this->autoAvif_ != nullptr;};
    void deleteAutoAvif() { this->autoAvif_ = nullptr;};
    inline string getAutoAvif() const { DARABONBA_PTR_GET_DEFAULT(autoAvif_, "") };
    inline UpdateImageTransformRequest& setAutoAvif(string autoAvif) { DARABONBA_PTR_SET_VALUE(autoAvif_, autoAvif) };


    // autoWebp Field Functions 
    bool hasAutoWebp() const { return this->autoWebp_ != nullptr;};
    void deleteAutoWebp() { this->autoWebp_ = nullptr;};
    inline string getAutoWebp() const { DARABONBA_PTR_GET_DEFAULT(autoWebp_, "") };
    inline UpdateImageTransformRequest& setAutoWebp(string autoWebp) { DARABONBA_PTR_SET_VALUE(autoWebp_, autoWebp) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateImageTransformRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdateImageTransformRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateImageTransformRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateImageTransformRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateImageTransformRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateImageTransformRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateImageTransformRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> autoAvif_ {};
    shared_ptr<string> autoWebp_ {};
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    shared_ptr<string> enable_ {};
    shared_ptr<string> rule_ {};
    shared_ptr<string> ruleEnable_ {};
    shared_ptr<string> ruleName_ {};
    shared_ptr<int32_t> sequence_ {};
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
