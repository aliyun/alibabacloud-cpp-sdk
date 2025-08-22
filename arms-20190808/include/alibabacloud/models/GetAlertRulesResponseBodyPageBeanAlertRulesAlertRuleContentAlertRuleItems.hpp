// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULECONTENTALERTRULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEANALERTRULESALERTRULECONTENTALERTRULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(MetricKey, metricKey_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(MetricKey, metricKey_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems(const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems(GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems &&) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems() = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& operator=(const GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems &) = default ;
    GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& operator=(GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregate_ != nullptr
        && this->metricKey_ != nullptr && this->n_ != nullptr && this->operator_ != nullptr && this->value_ != nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string aggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // metricKey Field Functions 
    bool hasMetricKey() const { return this->metricKey_ != nullptr;};
    void deleteMetricKey() { this->metricKey_ = nullptr;};
    inline string metricKey() const { DARABONBA_PTR_GET_DEFAULT(metricKey_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& setMetricKey(string metricKey) { DARABONBA_PTR_SET_VALUE(metricKey_, metricKey) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int64_t n() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAlertRulesResponseBodyPageBeanAlertRulesAlertRuleContentAlertRuleItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The aggregation method of the alert condition. Valid values:
    // 
    // *   AVG: calculates the average value
    // *   SUM: calculates the total value
    // *   MAX: selects the maximum value
    // *   MIN: selects the minimum value
    std::shared_ptr<string> aggregate_ = nullptr;
    // The metric of the alert condition.
    std::shared_ptr<string> metricKey_ = nullptr;
    // The last N minutes.
    std::shared_ptr<int64_t> n_ = nullptr;
    // The operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   CURRENT_GTE: greater than or equal to
    // *   CURRENT_LTE: less than or equal to
    // *   PREVIOUS_UP: increase in percentage compared with the previous period
    // *   PREVIOUS_DOWN: decrease in percentage compared with the previous period
    // *   HOH_UP: increase in percentage compared with the same period in the previous hour
    // *   HOH_DOWN: decrease in percentage compared with the same period in the previous hour
    // *   DOD_UP: increase in percentage compared with the same period in the previous day
    // *   DOD_DOWN: decrease in percentage compared with the same period in the previous day
    std::shared_ptr<string> operator_ = nullptr;
    // The threshold of the alert condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
