// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSETMULTITRIGGER_HPP_
#define ALIBABACLOUD_MODELS_METRICSETMULTITRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricSetTriggerSimpleExpression.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MetricSetMultiTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricSetMultiTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetMultiTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    MetricSetMultiTrigger() = default ;
    MetricSetMultiTrigger(const MetricSetMultiTrigger &) = default ;
    MetricSetMultiTrigger(MetricSetMultiTrigger &&) = default ;
    MetricSetMultiTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricSetMultiTrigger() = default ;
    MetricSetMultiTrigger& operator=(const MetricSetMultiTrigger &) = default ;
    MetricSetMultiTrigger& operator=(MetricSetMultiTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->durationSecs_ == nullptr && this->expressionType_ == nullptr && this->logicOperator_ == nullptr && this->max_ == nullptr && this->min_ == nullptr
        && this->operator_ == nullptr && this->queryName_ == nullptr && this->severity_ == nullptr && this->threshold_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<MetricSetTriggerSimpleExpression> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<MetricSetTriggerSimpleExpression>) };
    inline vector<MetricSetTriggerSimpleExpression> getConditions() { DARABONBA_PTR_GET(conditions_, vector<MetricSetTriggerSimpleExpression>) };
    inline MetricSetMultiTrigger& setConditions(const vector<MetricSetTriggerSimpleExpression> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline MetricSetMultiTrigger& setConditions(vector<MetricSetTriggerSimpleExpression> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // durationSecs Field Functions 
    bool hasDurationSecs() const { return this->durationSecs_ != nullptr;};
    void deleteDurationSecs() { this->durationSecs_ = nullptr;};
    inline int32_t getDurationSecs() const { DARABONBA_PTR_GET_DEFAULT(durationSecs_, 0) };
    inline MetricSetMultiTrigger& setDurationSecs(int32_t durationSecs) { DARABONBA_PTR_SET_VALUE(durationSecs_, durationSecs) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline MetricSetMultiTrigger& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // logicOperator Field Functions 
    bool hasLogicOperator() const { return this->logicOperator_ != nullptr;};
    void deleteLogicOperator() { this->logicOperator_ = nullptr;};
    inline string getLogicOperator() const { DARABONBA_PTR_GET_DEFAULT(logicOperator_, "") };
    inline MetricSetMultiTrigger& setLogicOperator(string logicOperator) { DARABONBA_PTR_SET_VALUE(logicOperator_, logicOperator) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline MetricSetMultiTrigger& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline MetricSetMultiTrigger& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline MetricSetMultiTrigger& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline MetricSetMultiTrigger& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline MetricSetMultiTrigger& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline MetricSetMultiTrigger& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The list of sub-conditions (used when expressionType=COMPOSITE). Each item contains queryName, operator, and threshold.
    shared_ptr<vector<MetricSetTriggerSimpleExpression>> conditions_ {};
    // The duration in seconds that data must continuously meet the condition to trigger an alert. If not specified, the value is inherited from conditionConfig.durationSecs.
    shared_ptr<int32_t> durationSecs_ {};
    // The expression type. Valid values: SIMPLE (single-metric threshold) or COMPOSITE (multi-metric AND/OR/UNLESS combination).
    shared_ptr<string> expressionType_ {};
    // The logic operator (used when expressionType=COMPOSITE). Valid values: AND (all conditions met), OR (any condition met), UNLESS (first condition met and all others not met).
    shared_ptr<string> logicOperator_ {};
    // The upper bound of the range. Required when expressionType=SIMPLE and operator is IN_RANGE or OUT_OF_RANGE. The value must be greater than or equal to min.
    shared_ptr<double> max_ {};
    // The lower bound of the range. Required when expressionType=SIMPLE and operator is IN_RANGE or OUT_OF_RANGE.
    shared_ptr<double> min_ {};
    // The comparison operator (used when expressionType=SIMPLE). Valid values: GT (greater than), GE (greater than or equal to), LT (less than), LE (less than or equal to), EQ (equal to), NE (not equal to), IN_RANGE (within range, requires min/max), OUT_OF_RANGE (outside range, requires min/max), PRESENT (field exists, no threshold/min/max needed), NOT_PRESENT (field does not exist, no threshold/min/max needed).
    shared_ptr<string> operator_ {};
    // The referenced query name (used when expressionType=SIMPLE), corresponding to QueryConfigUnified.queries[].name.
    shared_ptr<string> queryName_ {};
    // The alert severity level: CRITICAL > ERROR > WARN / WARNING > INFO. Multiple triggers are sorted by this priority, and the first match fires.
    shared_ptr<string> severity_ {};
    // The comparison threshold. Used when expressionType=SIMPLE and operator is GT/GE/LT/LE/EQ/NE. For IN_RANGE/OUT_OF_RANGE, use min/max instead. For PRESENT/NOT_PRESENT, leave this field empty.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
