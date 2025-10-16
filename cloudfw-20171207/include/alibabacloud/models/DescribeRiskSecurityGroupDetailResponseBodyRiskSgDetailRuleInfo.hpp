// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAILRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAILRULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_TO_JSON(RuleUuid, ruleUuid_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
      DARABONBA_PTR_FROM_JSON(RuleUuid, ruleUuid_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo &&) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& operator=(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& operator=(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->riskLevel_ == nullptr && return this->ruleName_ == nullptr && return this->ruleStatus_ == nullptr && return this->ruleUuid_ == nullptr && return this->suggestion_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


    // ruleUuid Field Functions 
    bool hasRuleUuid() const { return this->ruleUuid_ != nullptr;};
    void deleteRuleUuid() { this->ruleUuid_ = nullptr;};
    inline string ruleUuid() const { DARABONBA_PTR_GET_DEFAULT(ruleUuid_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setRuleUuid(string ruleUuid) { DARABONBA_PTR_SET_VALUE(ruleUuid_, ruleUuid) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailRuleInfo& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> ruleStatus_ = nullptr;
    std::shared_ptr<string> ruleUuid_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
