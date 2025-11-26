// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_METRICSTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TriggerCondition.hpp>
#include <alibabacloud/models/TimeConstraint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class MetricsTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricsTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionLogicOperator, conditionLogicOperator_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_TO_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_TO_JSON(TimeConstraints, timeConstraints_);
      DARABONBA_PTR_TO_JSON(TimeWindow, timeWindow_);
    };
    friend void from_json(const Darabonba::Json& j, MetricsTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionLogicOperator, conditionLogicOperator_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(CoolDownInterval, coolDownInterval_);
      DARABONBA_PTR_FROM_JSON(EvaluationCount, evaluationCount_);
      DARABONBA_PTR_FROM_JSON(TimeConstraints, timeConstraints_);
      DARABONBA_PTR_FROM_JSON(TimeWindow, timeWindow_);
    };
    MetricsTrigger() = default ;
    MetricsTrigger(const MetricsTrigger &) = default ;
    MetricsTrigger(MetricsTrigger &&) = default ;
    MetricsTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricsTrigger() = default ;
    MetricsTrigger& operator=(const MetricsTrigger &) = default ;
    MetricsTrigger& operator=(MetricsTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionLogicOperator_ == nullptr
        && return this->conditions_ == nullptr && return this->coolDownInterval_ == nullptr && return this->evaluationCount_ == nullptr && return this->timeConstraints_ == nullptr && return this->timeWindow_ == nullptr; };
    // conditionLogicOperator Field Functions 
    bool hasConditionLogicOperator() const { return this->conditionLogicOperator_ != nullptr;};
    void deleteConditionLogicOperator() { this->conditionLogicOperator_ = nullptr;};
    inline string conditionLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(conditionLogicOperator_, "") };
    inline MetricsTrigger& setConditionLogicOperator(string conditionLogicOperator) { DARABONBA_PTR_SET_VALUE(conditionLogicOperator_, conditionLogicOperator) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<TriggerCondition> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<TriggerCondition>) };
    inline vector<TriggerCondition> conditions() { DARABONBA_PTR_GET(conditions_, vector<TriggerCondition>) };
    inline MetricsTrigger& setConditions(const vector<TriggerCondition> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline MetricsTrigger& setConditions(vector<TriggerCondition> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // coolDownInterval Field Functions 
    bool hasCoolDownInterval() const { return this->coolDownInterval_ != nullptr;};
    void deleteCoolDownInterval() { this->coolDownInterval_ = nullptr;};
    inline int32_t coolDownInterval() const { DARABONBA_PTR_GET_DEFAULT(coolDownInterval_, 0) };
    inline MetricsTrigger& setCoolDownInterval(int32_t coolDownInterval) { DARABONBA_PTR_SET_VALUE(coolDownInterval_, coolDownInterval) };


    // evaluationCount Field Functions 
    bool hasEvaluationCount() const { return this->evaluationCount_ != nullptr;};
    void deleteEvaluationCount() { this->evaluationCount_ = nullptr;};
    inline int32_t evaluationCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationCount_, 0) };
    inline MetricsTrigger& setEvaluationCount(int32_t evaluationCount) { DARABONBA_PTR_SET_VALUE(evaluationCount_, evaluationCount) };


    // timeConstraints Field Functions 
    bool hasTimeConstraints() const { return this->timeConstraints_ != nullptr;};
    void deleteTimeConstraints() { this->timeConstraints_ = nullptr;};
    inline const vector<TimeConstraint> & timeConstraints() const { DARABONBA_PTR_GET_CONST(timeConstraints_, vector<TimeConstraint>) };
    inline vector<TimeConstraint> timeConstraints() { DARABONBA_PTR_GET(timeConstraints_, vector<TimeConstraint>) };
    inline MetricsTrigger& setTimeConstraints(const vector<TimeConstraint> & timeConstraints) { DARABONBA_PTR_SET_VALUE(timeConstraints_, timeConstraints) };
    inline MetricsTrigger& setTimeConstraints(vector<TimeConstraint> && timeConstraints) { DARABONBA_PTR_SET_RVALUE(timeConstraints_, timeConstraints) };


    // timeWindow Field Functions 
    bool hasTimeWindow() const { return this->timeWindow_ != nullptr;};
    void deleteTimeWindow() { this->timeWindow_ = nullptr;};
    inline int32_t timeWindow() const { DARABONBA_PTR_GET_DEFAULT(timeWindow_, 0) };
    inline MetricsTrigger& setTimeWindow(int32_t timeWindow) { DARABONBA_PTR_SET_VALUE(timeWindow_, timeWindow) };


  protected:
    // 多指标逻辑关系。默认：Or。取值范围：
    // - And:与
    // - Or：或
    std::shared_ptr<string> conditionLogicOperator_ = nullptr;
    // 指标触发条件列表。
    std::shared_ptr<vector<TriggerCondition>> conditions_ = nullptr;
    // 冷却时间。 单位为秒
    std::shared_ptr<int32_t> coolDownInterval_ = nullptr;
    // 统计次数。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> evaluationCount_ = nullptr;
    // 时间限制。
    std::shared_ptr<vector<TimeConstraint>> timeConstraints_ = nullptr;
    // 统计窗口。单位为秒。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> timeWindow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
