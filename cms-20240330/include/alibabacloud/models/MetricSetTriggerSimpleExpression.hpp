// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICSETTRIGGERSIMPLEEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_METRICSETTRIGGERSIMPLEEXPRESSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MetricSetTriggerSimpleExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricSetTriggerSimpleExpression& obj) { 
      DARABONBA_PTR_TO_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_TO_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_TO_JSON(expressionType, expressionType_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(sensitivity, sensitivity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, MetricSetTriggerSimpleExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_FROM_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_FROM_JSON(expressionType, expressionType_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(sensitivity, sensitivity_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    MetricSetTriggerSimpleExpression() = default ;
    MetricSetTriggerSimpleExpression(const MetricSetTriggerSimpleExpression &) = default ;
    MetricSetTriggerSimpleExpression(MetricSetTriggerSimpleExpression &&) = default ;
    MetricSetTriggerSimpleExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricSetTriggerSimpleExpression() = default ;
    MetricSetTriggerSimpleExpression& operator=(const MetricSetTriggerSimpleExpression &) = default ;
    MetricSetTriggerSimpleExpression& operator=(MetricSetTriggerSimpleExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->absDeviation_ == nullptr
        && this->baselinePeriod_ == nullptr && this->expressionType_ == nullptr && this->max_ == nullptr && this->min_ == nullptr && this->operator_ == nullptr
        && this->queryName_ == nullptr && this->sensitivity_ == nullptr && this->threshold_ == nullptr; };
    // absDeviation Field Functions 
    bool hasAbsDeviation() const { return this->absDeviation_ != nullptr;};
    void deleteAbsDeviation() { this->absDeviation_ = nullptr;};
    inline double getAbsDeviation() const { DARABONBA_PTR_GET_DEFAULT(absDeviation_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setAbsDeviation(double absDeviation) { DARABONBA_PTR_SET_VALUE(absDeviation_, absDeviation) };


    // baselinePeriod Field Functions 
    bool hasBaselinePeriod() const { return this->baselinePeriod_ != nullptr;};
    void deleteBaselinePeriod() { this->baselinePeriod_ = nullptr;};
    inline string getBaselinePeriod() const { DARABONBA_PTR_GET_DEFAULT(baselinePeriod_, "") };
    inline MetricSetTriggerSimpleExpression& setBaselinePeriod(string baselinePeriod) { DARABONBA_PTR_SET_VALUE(baselinePeriod_, baselinePeriod) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline MetricSetTriggerSimpleExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline MetricSetTriggerSimpleExpression& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline MetricSetTriggerSimpleExpression& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline string getSensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, "") };
    inline MetricSetTriggerSimpleExpression& setSensitivity(string sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline MetricSetTriggerSimpleExpression& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The minimum deviation or absolute deviation dead zone for the dynamic baseline. Takes effect only for baseline operators. The unit is the same as the metric. The value must be greater than or equal to 0. A value of 0 indicates no restriction.
    shared_ptr<double> absDeviation_ {};
    // The baseline period. Takes effect only for baseline operators. Valid values:
    // - AUTO: Automatically identifies the period.
    // - DAILY: Daily period.
    // - WEEKLY: Weekly period. The backend automatically expands the historical training window to at least 14 days.
    // - NONE: No period.
    shared_ptr<string> baselinePeriod_ {};
    // The expression type. Fixed value: SIMPLE.
    shared_ptr<string> expressionType_ {};
    // The upper bound of the range. Required when operator is set to IN_RANGE or OUT_OF_RANGE. The value must be greater than or equal to min.
    shared_ptr<double> max_ {};
    // The lower bound of the range. Required when operator is set to IN_RANGE or OUT_OF_RANGE.
    shared_ptr<double> min_ {};
    // The comparison operator. Valid values:
    // - GT: Greater than.
    // - GE: Greater than or equal to.
    // - LT: Less than.
    // - LE: Less than or equal to.
    // - EQ: Equal to.
    // - NE: Not equal to.
    // - IN_RANGE: Within the range. Both min and max must be specified.
    // - OUT_OF_RANGE: Outside the range. Both min and max must be specified.
    // - PRESENT: The field exists. The threshold, min, and max parameters are not required.
    // - NOT_PRESENT: The field does not exist. The threshold, min, and max parameters are not required.
    // - ABOVE_UPPER: Dynamic baseline spike. The sensitivity parameter is required. The threshold, min, and max parameters are not required.
    // - BELOW_LOWER: Dynamic baseline drop. The sensitivity parameter is required. The threshold, min, and max parameters are not required.
    // - OUT_OF_BAND: Dynamic baseline bidirectional deviation. The sensitivity parameter is required. The threshold, min, and max parameters are not required.
    shared_ptr<string> operator_ {};
    // The referenced query name, corresponding to QueryConfigUnified.queries[].name.
    shared_ptr<string> queryName_ {};
    // The dynamic baseline sensitivity. Takes effect only for baseline operators. Valid values:
    // - HIGH: The narrowest band and highest sensitivity.
    // - MEDIUM: Medium sensitivity.
    // - LOW: The widest band and lowest sensitivity.
    shared_ptr<string> sensitivity_ {};
    // The comparison threshold. Used when operator is set to GT, GE, LT, LE, EQ, or NE. For IN_RANGE or OUT_OF_RANGE, use min and max instead. Not required for PRESENT or NOT_PRESENT.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
