// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONSIMPLEESCALATIONESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONSIMPLEESCALATIONESCALATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionSimpleEscalationEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionSimpleEscalationEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionSimpleEscalationEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    AlertRuleConditionSimpleEscalationEscalations() = default ;
    AlertRuleConditionSimpleEscalationEscalations(const AlertRuleConditionSimpleEscalationEscalations &) = default ;
    AlertRuleConditionSimpleEscalationEscalations(AlertRuleConditionSimpleEscalationEscalations &&) = default ;
    AlertRuleConditionSimpleEscalationEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionSimpleEscalationEscalations() = default ;
    AlertRuleConditionSimpleEscalationEscalations& operator=(const AlertRuleConditionSimpleEscalationEscalations &) = default ;
    AlertRuleConditionSimpleEscalationEscalations& operator=(AlertRuleConditionSimpleEscalationEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->level_ != nullptr && this->statistics_ != nullptr && this->threshold_ != nullptr && this->times_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline AlertRuleConditionSimpleEscalationEscalations& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AlertRuleConditionSimpleEscalationEscalations& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline AlertRuleConditionSimpleEscalationEscalations& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline AlertRuleConditionSimpleEscalationEscalations& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline AlertRuleConditionSimpleEscalationEscalations& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<double> threshold_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
