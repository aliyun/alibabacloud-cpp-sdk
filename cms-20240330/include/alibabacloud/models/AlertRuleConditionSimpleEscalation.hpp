// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONSIMPLEESCALATION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONSIMPLEESCALATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleConditionSimpleEscalationEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionSimpleEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionSimpleEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionSimpleEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    AlertRuleConditionSimpleEscalation() = default ;
    AlertRuleConditionSimpleEscalation(const AlertRuleConditionSimpleEscalation &) = default ;
    AlertRuleConditionSimpleEscalation(AlertRuleConditionSimpleEscalation &&) = default ;
    AlertRuleConditionSimpleEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionSimpleEscalation() = default ;
    AlertRuleConditionSimpleEscalation& operator=(const AlertRuleConditionSimpleEscalation &) = default ;
    AlertRuleConditionSimpleEscalation& operator=(AlertRuleConditionSimpleEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalations_ != nullptr
        && this->metricName_ != nullptr && this->period_ != nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<Models::AlertRuleConditionSimpleEscalationEscalations> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Models::AlertRuleConditionSimpleEscalationEscalations>) };
    inline vector<Models::AlertRuleConditionSimpleEscalationEscalations> escalations() { DARABONBA_PTR_GET(escalations_, vector<Models::AlertRuleConditionSimpleEscalationEscalations>) };
    inline AlertRuleConditionSimpleEscalation& setEscalations(const vector<Models::AlertRuleConditionSimpleEscalationEscalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline AlertRuleConditionSimpleEscalation& setEscalations(vector<Models::AlertRuleConditionSimpleEscalationEscalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AlertRuleConditionSimpleEscalation& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline AlertRuleConditionSimpleEscalation& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    std::shared_ptr<vector<Models::AlertRuleConditionSimpleEscalationEscalations>> escalations_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
