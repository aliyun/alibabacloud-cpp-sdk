// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULERULES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULERULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Measure, measure_);
      DARABONBA_PTR_TO_JSON(NValue, NValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregates, aggregates_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Measure, measure_);
      DARABONBA_PTR_FROM_JSON(NValue, NValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules(SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregates_ != nullptr
        && this->alias_ != nullptr && this->measure_ != nullptr && this->NValue_ != nullptr && this->operator_ != nullptr && this->value_ != nullptr; };
    // aggregates Field Functions 
    bool hasAggregates() const { return this->aggregates_ != nullptr;};
    void deleteAggregates() { this->aggregates_ = nullptr;};
    inline string aggregates() const { DARABONBA_PTR_GET_DEFAULT(aggregates_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setAggregates(string aggregates) { DARABONBA_PTR_SET_VALUE(aggregates_, aggregates) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // measure Field Functions 
    bool hasMeasure() const { return this->measure_ != nullptr;};
    void deleteMeasure() { this->measure_ = nullptr;};
    inline string measure() const { DARABONBA_PTR_GET_DEFAULT(measure_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setMeasure(string measure) { DARABONBA_PTR_SET_VALUE(measure_, measure) };


    // NValue Field Functions 
    bool hasNValue() const { return this->NValue_ != nullptr;};
    void deleteNValue() { this->NValue_ = nullptr;};
    inline int32_t NValue() const { DARABONBA_PTR_GET_DEFAULT(NValue_, 0) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setNValue(int32_t NValue) { DARABONBA_PTR_SET_VALUE(NValue_, NValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRuleRules& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The aggregation logic of the metric data of the alert rule. Valid values:
    // 
    // *   `AVG`: calculates the average value for each minute
    // *   `SUM`: calculates the total value for each minute
    // *   `MAX`: calculates the maximum value for each minute
    // *   `MIN`: calculates the minimum value for each minute
    std::shared_ptr<string> aggregates_ = nullptr;
    // The displayed description of the alert metric.
    std::shared_ptr<string> alias_ = nullptr;
    // The metric based on which alerts are triggered. For more information, see the "[Alert metrics](https://help.aliyun.com/document_detail/175825.html#h2-url-4)" section in this topic.
    std::shared_ptr<string> measure_ = nullptr;
    // The time range when data is requested. Unit: minutes. For example, a value of 5 indicates that the alert rule applies to the data in the last 5 minutes.
    std::shared_ptr<int32_t> NValue_ = nullptr;
    // The operation logic of the condition. Valid values:
    // 
    // *   CURRENT_GTE: greater than or equal to
    // *   CURRENT_LTE: less than or equal to
    // *   PREVIOUS_UP: the increase percentage compared with the last period
    // *   PREVIOUS_DOWN: the decrease percentage compared with the last period
    // *   HOH_UP: the increase percentage compared with the last hour
    // *   HOH_DOWN: the decrease percentage compared with the last hour
    // *   DOD_UP: the increase percentage compared with the last day
    // *   DOD_DOWN: the decrease percentage compared with the last day
    std::shared_ptr<string> operator_ = nullptr;
    // The threshold of the condition.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
