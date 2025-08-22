// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEALERTRULECONTENTALERTRULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEALERTRULECONTENTALERTRULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(MetricKey, metricKey_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(MetricKey, metricKey_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems(CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems &&) = default ;
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
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // metricKey Field Functions 
    bool hasMetricKey() const { return this->metricKey_ != nullptr;};
    void deleteMetricKey() { this->metricKey_ = nullptr;};
    inline string metricKey() const { DARABONBA_PTR_GET_DEFAULT(metricKey_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& setMetricKey(string metricKey) { DARABONBA_PTR_SET_VALUE(metricKey_, metricKey) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline float n() const { DARABONBA_PTR_GET_DEFAULT(n_, 0.0) };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& setN(float n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAlertRuleContentAlertRuleItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
    // Indicates the last N minutes.
    std::shared_ptr<float> n_ = nullptr;
    // The comparison operator that was used to compare the metric value with the threshold. Valid values:
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
    // The threshold of the alert condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
