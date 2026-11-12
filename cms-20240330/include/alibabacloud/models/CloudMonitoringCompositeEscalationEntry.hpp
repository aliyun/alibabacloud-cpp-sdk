// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGCOMPOSITEESCALATIONENTRY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGCOMPOSITEESCALATIONENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringCompositeEscalationEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringCompositeEscalationEntry& obj) { 
      DARABONBA_PTR_TO_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_TO_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(preCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(sensitivity, sensitivity_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringCompositeEscalationEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(absDeviation, absDeviation_);
      DARABONBA_PTR_FROM_JSON(baselinePeriod, baselinePeriod_);
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(preCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(sensitivity, sensitivity_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    CloudMonitoringCompositeEscalationEntry() = default ;
    CloudMonitoringCompositeEscalationEntry(const CloudMonitoringCompositeEscalationEntry &) = default ;
    CloudMonitoringCompositeEscalationEntry(CloudMonitoringCompositeEscalationEntry &&) = default ;
    CloudMonitoringCompositeEscalationEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringCompositeEscalationEntry() = default ;
    CloudMonitoringCompositeEscalationEntry& operator=(const CloudMonitoringCompositeEscalationEntry &) = default ;
    CloudMonitoringCompositeEscalationEntry& operator=(CloudMonitoringCompositeEscalationEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->absDeviation_ == nullptr
        && this->baselinePeriod_ == nullptr && this->comparisonOperator_ == nullptr && this->metricName_ == nullptr && this->period_ == nullptr && this->preCondition_ == nullptr
        && this->sensitivity_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
    // absDeviation Field Functions 
    bool hasAbsDeviation() const { return this->absDeviation_ != nullptr;};
    void deleteAbsDeviation() { this->absDeviation_ = nullptr;};
    inline double getAbsDeviation() const { DARABONBA_PTR_GET_DEFAULT(absDeviation_, 0.0) };
    inline CloudMonitoringCompositeEscalationEntry& setAbsDeviation(double absDeviation) { DARABONBA_PTR_SET_VALUE(absDeviation_, absDeviation) };


    // baselinePeriod Field Functions 
    bool hasBaselinePeriod() const { return this->baselinePeriod_ != nullptr;};
    void deleteBaselinePeriod() { this->baselinePeriod_ = nullptr;};
    inline string getBaselinePeriod() const { DARABONBA_PTR_GET_DEFAULT(baselinePeriod_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setBaselinePeriod(string baselinePeriod) { DARABONBA_PTR_SET_VALUE(baselinePeriod_, baselinePeriod) };


    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CloudMonitoringCompositeEscalationEntry& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline string getSensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setSensitivity(string sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline CloudMonitoringCompositeEscalationEntry& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The minimum deviation or absolute deviation dead zone for the dynamic baseline. This parameter takes effect only when the comparisonOperator is set to a baseline operator. If the absolute difference between the current value and the boundary is less than the absDeviation value, no alert is triggered. The unit is the same as the metric unit. The value must be greater than or equal to 0. A value of 0 indicates no limit.
    shared_ptr<double> absDeviation_ {};
    // The baseline period. This parameter takes effect only when the comparisonOperator is set to a baseline operator. Valid values: AUTO (automatic identification), DAILY (daily), WEEKLY (weekly), and NONE (no period). If you set this parameter to WEEKLY, the backend automatically extends the historical training window to at least 14 days. Specific identification results are not returned for automatic identification.
    shared_ptr<string> baselinePeriod_ {};
    // The comparison operator.
    shared_ptr<string> comparisonOperator_ {};
    // The metric name.
    shared_ptr<string> metricName_ {};
    // The collection period in seconds.
    shared_ptr<int32_t> period_ {};
    // The precondition.
    shared_ptr<string> preCondition_ {};
    // The sensitivity of the dynamic baseline. This parameter takes effect only when the comparisonOperator is set to a baseline operator. Valid values: HIGH (narrowest band and most sensitive), MEDIUM (medium), and LOW (widest band and least sensitive).
    shared_ptr<string> sensitivity_ {};
    // The statistical method.
    shared_ptr<string> statistics_ {};
    // The threshold.
    shared_ptr<string> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
