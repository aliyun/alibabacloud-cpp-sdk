// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBASESYSTEMRULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBASESYSTEMRULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeBaseSystemRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBaseSystemRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetectType, detectType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBaseSystemRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetectType, detectType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeBaseSystemRulesResponseBodyRules() = default ;
    DescribeBaseSystemRulesResponseBodyRules(const DescribeBaseSystemRulesResponseBodyRules &) = default ;
    DescribeBaseSystemRulesResponseBodyRules(DescribeBaseSystemRulesResponseBodyRules &&) = default ;
    DescribeBaseSystemRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBaseSystemRulesResponseBodyRules() = default ;
    DescribeBaseSystemRulesResponseBodyRules& operator=(const DescribeBaseSystemRulesResponseBodyRules &) = default ;
    DescribeBaseSystemRulesResponseBodyRules& operator=(DescribeBaseSystemRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cveId_ == nullptr
        && return this->description_ == nullptr && return this->detectType_ == nullptr && return this->riskLevel_ == nullptr && return this->ruleAction_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr && return this->updateTime_ == nullptr; };
    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detectType Field Functions 
    bool hasDetectType() const { return this->detectType_ != nullptr;};
    void deleteDetectType() { this->detectType_ = nullptr;};
    inline string detectType() const { DARABONBA_PTR_GET_DEFAULT(detectType_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setDetectType(string detectType) { DARABONBA_PTR_SET_VALUE(detectType_, detectType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeBaseSystemRulesResponseBodyRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeBaseSystemRulesResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline int32_t ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
    inline DescribeBaseSystemRulesResponseBodyRules& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeBaseSystemRulesResponseBodyRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> cveId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> detectType_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> ruleAction_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> ruleStatus_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
