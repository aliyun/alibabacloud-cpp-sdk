// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULE_HPP_
#define ALIBABACLOUD_MODELS_RULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Rule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class Rule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Rule& obj) { 
      DARABONBA_PTR_TO_JSON(Combinator, combinator_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(RuleSubType, ruleSubType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, Rule& obj) { 
      DARABONBA_PTR_FROM_JSON(Combinator, combinator_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(RuleSubType, ruleSubType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    Rule() = default ;
    Rule(const Rule &) = default ;
    Rule(Rule &&) = default ;
    Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Rule() = default ;
    Rule& operator=(const Rule &) = default ;
    Rule& operator=(Rule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->combinator_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->operator_ == nullptr && return this->ruleSubType_ == nullptr && return this->ruleType_ == nullptr
        && return this->rules_ == nullptr && return this->values_ == nullptr; };
    // combinator Field Functions 
    bool hasCombinator() const { return this->combinator_ != nullptr;};
    void deleteCombinator() { this->combinator_ = nullptr;};
    inline string combinator() const { DARABONBA_PTR_GET_DEFAULT(combinator_, "") };
    inline Rule& setCombinator(string combinator) { DARABONBA_PTR_SET_VALUE(combinator_, combinator) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Rule& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline Rule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // ruleSubType Field Functions 
    bool hasRuleSubType() const { return this->ruleSubType_ != nullptr;};
    void deleteRuleSubType() { this->ruleSubType_ = nullptr;};
    inline string ruleSubType() const { DARABONBA_PTR_GET_DEFAULT(ruleSubType_, "") };
    inline Rule& setRuleSubType(string ruleSubType) { DARABONBA_PTR_SET_VALUE(ruleSubType_, ruleSubType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline Rule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Rule> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Rule>) };
    inline vector<Rule> rules() { DARABONBA_PTR_GET(rules_, vector<Rule>) };
    inline Rule& setRules(const vector<Rule> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline Rule& setRules(vector<Rule> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline Rule& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline Rule& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> combinator_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> ruleSubType_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<vector<Rule>> rules_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
