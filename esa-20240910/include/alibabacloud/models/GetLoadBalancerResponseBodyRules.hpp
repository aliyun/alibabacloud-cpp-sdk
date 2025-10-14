// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoadBalancerResponseBodyRulesFixedResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetLoadBalancerResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(FixedResponse, fixedResponse_);
      DARABONBA_ANY_TO_JSON(Overrides, overrides_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(Terminates, terminates_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedResponse, fixedResponse_);
      DARABONBA_ANY_FROM_JSON(Overrides, overrides_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(Terminates, terminates_);
    };
    GetLoadBalancerResponseBodyRules() = default ;
    GetLoadBalancerResponseBodyRules(const GetLoadBalancerResponseBodyRules &) = default ;
    GetLoadBalancerResponseBodyRules(GetLoadBalancerResponseBodyRules &&) = default ;
    GetLoadBalancerResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerResponseBodyRules() = default ;
    GetLoadBalancerResponseBodyRules& operator=(const GetLoadBalancerResponseBodyRules &) = default ;
    GetLoadBalancerResponseBodyRules& operator=(GetLoadBalancerResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fixedResponse_ == nullptr
        && return this->overrides_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->terminates_ == nullptr; };
    // fixedResponse Field Functions 
    bool hasFixedResponse() const { return this->fixedResponse_ != nullptr;};
    void deleteFixedResponse() { this->fixedResponse_ = nullptr;};
    inline const Models::GetLoadBalancerResponseBodyRulesFixedResponse & fixedResponse() const { DARABONBA_PTR_GET_CONST(fixedResponse_, Models::GetLoadBalancerResponseBodyRulesFixedResponse) };
    inline Models::GetLoadBalancerResponseBodyRulesFixedResponse fixedResponse() { DARABONBA_PTR_GET(fixedResponse_, Models::GetLoadBalancerResponseBodyRulesFixedResponse) };
    inline GetLoadBalancerResponseBodyRules& setFixedResponse(const Models::GetLoadBalancerResponseBodyRulesFixedResponse & fixedResponse) { DARABONBA_PTR_SET_VALUE(fixedResponse_, fixedResponse) };
    inline GetLoadBalancerResponseBodyRules& setFixedResponse(Models::GetLoadBalancerResponseBodyRulesFixedResponse && fixedResponse) { DARABONBA_PTR_SET_RVALUE(fixedResponse_, fixedResponse) };


    // overrides Field Functions 
    bool hasOverrides() const { return this->overrides_ != nullptr;};
    void deleteOverrides() { this->overrides_ = nullptr;};
    inline     const Darabonba::Json & overrides() const { DARABONBA_GET(overrides_) };
    Darabonba::Json & overrides() { DARABONBA_GET(overrides_) };
    inline GetLoadBalancerResponseBodyRules& setOverrides(const Darabonba::Json & overrides) { DARABONBA_SET_VALUE(overrides_, overrides) };
    inline GetLoadBalancerResponseBodyRules& setOverrides(Darabonba::Json & overrides) { DARABONBA_SET_RVALUE(overrides_, overrides) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetLoadBalancerResponseBodyRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetLoadBalancerResponseBodyRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetLoadBalancerResponseBodyRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetLoadBalancerResponseBodyRules& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // terminates Field Functions 
    bool hasTerminates() const { return this->terminates_ != nullptr;};
    void deleteTerminates() { this->terminates_ = nullptr;};
    inline bool terminates() const { DARABONBA_PTR_GET_DEFAULT(terminates_, false) };
    inline GetLoadBalancerResponseBodyRules& setTerminates(bool terminates) { DARABONBA_PTR_SET_VALUE(terminates_, terminates) };


  protected:
    // Executes a specified response after matching the rule.
    std::shared_ptr<Models::GetLoadBalancerResponseBodyRulesFixedResponse> fixedResponse_ = nullptr;
    // Modifies the load balancer configuration for the corresponding request after matching the rule. The fields in this configuration will override the corresponding fields in the load balancer\\"s configuration.
    Darabonba::Json overrides_ = nullptr;
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding global configurations. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq \\"video.example.com\\")
    std::shared_ptr<string> rule_ = nullptr;
    // Rule switch. This parameter is not required when adding global configurations. Possible values:
    // - on: Enabled.
    // - off: Disabled.
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // Rule name. This parameter is not required when adding global configurations.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule execution order. The higher the number, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Whether to terminate the execution of subsequent rules.
    // 
    // - true: Yes.
    // - false: No, default value.
    std::shared_ptr<bool> terminates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
