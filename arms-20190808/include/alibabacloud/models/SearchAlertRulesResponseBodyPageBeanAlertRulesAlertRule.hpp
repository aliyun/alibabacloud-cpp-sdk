// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule(SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operator_ != nullptr
        && this->rules_ != nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules>) };
    inline vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules>) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& setRules(const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule& setRules(vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The logical operator between conditions. Valid values: `&`: AND. `|`: OR.
    std::shared_ptr<string> operator_ = nullptr;
    // The condition of the alert rule.
    std::shared_ptr<vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
