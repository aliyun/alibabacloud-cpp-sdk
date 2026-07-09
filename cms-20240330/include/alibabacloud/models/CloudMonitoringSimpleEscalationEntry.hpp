// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGSIMPLEESCALATIONENTRY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGSIMPLEESCALATIONENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringSimpleEscalationEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringSimpleEscalationEntry& obj) { 
      DARABONBA_PTR_TO_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(preCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringSimpleEscalationEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(comparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(preCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    CloudMonitoringSimpleEscalationEntry() = default ;
    CloudMonitoringSimpleEscalationEntry(const CloudMonitoringSimpleEscalationEntry &) = default ;
    CloudMonitoringSimpleEscalationEntry(CloudMonitoringSimpleEscalationEntry &&) = default ;
    CloudMonitoringSimpleEscalationEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringSimpleEscalationEntry() = default ;
    CloudMonitoringSimpleEscalationEntry& operator=(const CloudMonitoringSimpleEscalationEntry &) = default ;
    CloudMonitoringSimpleEscalationEntry& operator=(CloudMonitoringSimpleEscalationEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comparisonOperator_ == nullptr
        && this->preCondition_ == nullptr && this->severity_ == nullptr && this->statistics_ == nullptr && this->threshold_ == nullptr && this->times_ == nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string getComparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline CloudMonitoringSimpleEscalationEntry& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string getPreCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline CloudMonitoringSimpleEscalationEntry& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CloudMonitoringSimpleEscalationEntry& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline CloudMonitoringSimpleEscalationEntry& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline CloudMonitoringSimpleEscalationEntry& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CloudMonitoringSimpleEscalationEntry& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    shared_ptr<string> comparisonOperator_ {};
    shared_ptr<string> preCondition_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<string> statistics_ {};
    shared_ptr<string> threshold_ {};
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
