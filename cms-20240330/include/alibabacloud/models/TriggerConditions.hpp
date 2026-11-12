// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class TriggerConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerConditions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, TriggerConditions& obj) { 
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
    TriggerConditions() = default ;
    TriggerConditions(const TriggerConditions &) = default ;
    TriggerConditions(TriggerConditions &&) = default ;
    TriggerConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerConditions() = default ;
    TriggerConditions& operator=(const TriggerConditions &) = default ;
    TriggerConditions& operator=(TriggerConditions &&) = default ;
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
    inline TriggerConditions& setAbsDeviation(double absDeviation) { DARABONBA_PTR_SET_VALUE(absDeviation_, absDeviation) };


    // baselinePeriod Field Functions 
    bool hasBaselinePeriod() const { return this->baselinePeriod_ != nullptr;};
    void deleteBaselinePeriod() { this->baselinePeriod_ = nullptr;};
    inline string getBaselinePeriod() const { DARABONBA_PTR_GET_DEFAULT(baselinePeriod_, "") };
    inline TriggerConditions& setBaselinePeriod(string baselinePeriod) { DARABONBA_PTR_SET_VALUE(baselinePeriod_, baselinePeriod) };


    // expressionType Field Functions 
    bool hasExpressionType() const { return this->expressionType_ != nullptr;};
    void deleteExpressionType() { this->expressionType_ = nullptr;};
    inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
    inline TriggerConditions& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline TriggerConditions& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline TriggerConditions& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline TriggerConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline TriggerConditions& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline string getSensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, "") };
    inline TriggerConditions& setSensitivity(string sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline TriggerConditions& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The minimum deviation or absolute deviation dead zone for dynamic baselines, which takes effect only for baseline operators. No alert is triggered if the absolute difference between the current value and the boundary is less than the absDeviation value. The unit is the same as the metric unit. The value must be greater than or equal to 0. A value of 0 indicates no limit.
    shared_ptr<double> absDeviation_ {};
    // The baseline period, which takes effect only for baseline operators. Valid values: AUTO for automatic identification, DAILY for daily, WEEKLY for weekly, and NONE for no period. If you set this parameter to WEEKLY, the backend automatically extends the historical training window to at least 14 days.
    shared_ptr<string> baselinePeriod_ {};
    // The expression type. The value is fixed as SIMPLE, which is used for MetricSet multi-threshold triggers.
    shared_ptr<string> expressionType_ {};
    // The upper bound of the range. This parameter is required when the operator is IN_RANGE or OUT_OF_RANGE, and the value must be greater than or equal to the min value.
    shared_ptr<double> max_ {};
    // The lower bound of the range. This parameter is required when the operator is IN_RANGE or OUT_OF_RANGE.
    shared_ptr<double> min_ {};
    // The comparison operator. Valid values: GT, GE, LT, LE, EQ, NE, IN_RANGE (requires both min and max), OUT_OF_RANGE (requires both min and max), PRESENT, and NOT_PRESENT.
    shared_ptr<string> operator_ {};
    // The referenced query name, which corresponds to QueryConfigUnified.queries[].name.
    shared_ptr<string> queryName_ {};
    // The dynamic baseline sensitivity, which takes effect only when the operator is ABOVE_UPPER, BELOW_LOWER, or OUT_OF_BAND. Valid values: HIGH for the narrowest and most sensitive band, MEDIUM for medium sensitivity, and LOW for the widest and least sensitive band. You can configure different sensitivities for multiple subconditions.
    shared_ptr<string> sensitivity_ {};
    // The comparison threshold. This parameter is used when the operator is GT, GE, LT, LE, EQ, or NE. For IN_RANGE or OUT_OF_RANGE, use the min and max parameters. For PRESENT or NOT_PRESENT, leave this parameter empty.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
