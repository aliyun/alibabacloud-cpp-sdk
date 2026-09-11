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
      DARABONBA_PTR_TO_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_TO_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(sensitivity, sensitivity_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetMultiTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_FROM_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(durationSecs, durationSecs_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(logicOperator, logicOperator_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(sensitivity, sensitivity_);
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
    virtual bool empty() const override { return this->absDeviation_ == nullptr
        && this->baselinePeriod_ == nullptr && this->conditions_ == nullptr && this->durationSecs_ == nullptr && this->expressionType_ == nullptr && this->logicOperator_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->operator_ == nullptr && this->queryName_ == nullptr && this->sensitivity_ == nullptr
        && this->severity_ == nullptr && this->threshold_ == nullptr; };
    // absDeviation Field Functions 
    bool hasAbsDeviation() const { return this->absDeviation_ != nullptr;};
    void deleteAbsDeviation() { this->absDeviation_ = nullptr;};
    inline double getAbsDeviation() const { DARABONBA_PTR_GET_DEFAULT(absDeviation_, 0.0) };
    inline MetricSetMultiTrigger& setAbsDeviation(double absDeviation) { DARABONBA_PTR_SET_VALUE(absDeviation_, absDeviation) };


    // baselinePeriod Field Functions 
    bool hasBaselinePeriod() const { return this->baselinePeriod_ != nullptr;};
    void deleteBaselinePeriod() { this->baselinePeriod_ = nullptr;};
    inline string getBaselinePeriod() const { DARABONBA_PTR_GET_DEFAULT(baselinePeriod_, "") };
    inline MetricSetMultiTrigger& setBaselinePeriod(string baselinePeriod) { DARABONBA_PTR_SET_VALUE(baselinePeriod_, baselinePeriod) };


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


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline string getSensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, "") };
    inline MetricSetMultiTrigger& setSensitivity(string sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


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
    // The minimum deviation or absolute deviation dead zone for the dynamic baseline. Takes effect only with baseline operators. The unit is the same as the metric. The value must be greater than or equal to 0. A value of 0 means no restriction.
    shared_ptr<double> absDeviation_ {};
    // The baseline period. Takes effect only with baseline operators. Valid values: AUTO (automatic detection), DAILY (daily), WEEKLY (weekly), and NONE (no period). When set to WEEKLY, the backend automatically expands the historical training window to at least 14 days.
    shared_ptr<string> baselinePeriod_ {};
    // The list of sub-conditions. Used when expressionType is COMPOSITE. Each item contains queryName, operator, and threshold.
    shared_ptr<vector<MetricSetTriggerSimpleExpression>> conditions_ {};
    // The duration in seconds that data must continuously meet the condition before an alert is triggered. If not specified, the value is inherited from conditionConfig.durationSecs.
    shared_ptr<int32_t> durationSecs_ {};
    // The expression type. Valid values: SIMPLE (single-metric threshold) and COMPOSITE (multi-metric AND/OR/UNLESS combination).
    shared_ptr<string> expressionType_ {};
    // The logical operator. Used when expressionType is COMPOSITE. Valid values: AND (all conditions met), OR (any condition met), and UNLESS (first condition met and all others not met).
    shared_ptr<string> logicOperator_ {};
    // The upper bound of the range. Required when expressionType is SIMPLE and operator is IN_RANGE or OUT_OF_RANGE. The value must be greater than or equal to min.
    shared_ptr<double> max_ {};
    // The lower bound of the range. Required when expressionType is SIMPLE and operator is IN_RANGE or OUT_OF_RANGE.
    shared_ptr<double> min_ {};
    // The comparison operator (used when expressionType is SIMPLE). Valid values: GT (greater than), GE (greater than or equal to), LT (less than), LE (less than or equal to), EQ (equal to), NE (not equal to), IN_RANGE (within range, requires min/max), OUT_OF_RANGE (outside range, requires min/max), PRESENT (field exists, no threshold/min/max required), NOT_PRESENT (field does not exist, no threshold/min/max required), ABOVE_UPPER/BELOW_LOWER/OUT_OF_BAND (dynamic baseline spike/drop/bidirectional, requires sensitivity, no threshold/min/max).
    shared_ptr<string> operator_ {};
    // The referenced query name (used when expressionType is SIMPLE), corresponding to QueryConfigUnified.queries[].name.
    shared_ptr<string> queryName_ {};
    // The dynamic baseline sensitivity. Takes effect when expressionType is SIMPLE and a baseline operator is used. Valid values: HIGH (narrowest and most sensitive band), MEDIUM, and LOW (widest and least sensitive band).
    shared_ptr<string> sensitivity_ {};
    // The alert severity level: CRITICAL > ERROR > WARN / WARNING > INFO. Multiple triggers are sorted by this priority, and the first match fires.
    shared_ptr<string> severity_ {};
    // The comparison threshold. Used when expressionType is SIMPLE and operator is GT/GE/LT/LE/EQ/NE. For IN_RANGE/OUT_OF_RANGE, use min/max instead. Not required for PRESENT/NOT_PRESENT.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
