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
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(preCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringCompositeEscalationEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(preCondition, preCondition_);
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
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr && this->preCondition_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr; };
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
    shared_ptr<string> comparisonOperator_ {};
    shared_ptr<string> metricName_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> preCondition_ {};
    shared_ptr<string> statistics_ {};
    shared_ptr<string> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
