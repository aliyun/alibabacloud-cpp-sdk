// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPOSITEESCALATIONESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPOSITEESCALATIONESCALATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionCompositeEscalationEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionCompositeEscalationEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionCompositeEscalationEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    AlertRuleConditionCompositeEscalationEscalations() = default ;
    AlertRuleConditionCompositeEscalationEscalations(const AlertRuleConditionCompositeEscalationEscalations &) = default ;
    AlertRuleConditionCompositeEscalationEscalations(AlertRuleConditionCompositeEscalationEscalations &&) = default ;
    AlertRuleConditionCompositeEscalationEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionCompositeEscalationEscalations() = default ;
    AlertRuleConditionCompositeEscalationEscalations& operator=(const AlertRuleConditionCompositeEscalationEscalations &) = default ;
    AlertRuleConditionCompositeEscalationEscalations& operator=(AlertRuleConditionCompositeEscalationEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && return this->metricName_ == nullptr && return this->period_ == nullptr && return this->statistics_ == nullptr && return this->threshold_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline AlertRuleConditionCompositeEscalationEscalations& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AlertRuleConditionCompositeEscalationEscalations& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline AlertRuleConditionCompositeEscalationEscalations& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline AlertRuleConditionCompositeEscalationEscalations& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline AlertRuleConditionCompositeEscalationEscalations& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<double> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
