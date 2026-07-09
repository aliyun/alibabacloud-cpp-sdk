// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGSIMPLEESCALATION_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGSIMPLEESCALATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CloudMonitoringSimpleEscalationEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringSimpleEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringSimpleEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringSimpleEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    CloudMonitoringSimpleEscalation() = default ;
    CloudMonitoringSimpleEscalation(const CloudMonitoringSimpleEscalation &) = default ;
    CloudMonitoringSimpleEscalation(CloudMonitoringSimpleEscalation &&) = default ;
    CloudMonitoringSimpleEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringSimpleEscalation() = default ;
    CloudMonitoringSimpleEscalation& operator=(const CloudMonitoringSimpleEscalation &) = default ;
    CloudMonitoringSimpleEscalation& operator=(CloudMonitoringSimpleEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalations_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<CloudMonitoringSimpleEscalationEntry> & getEscalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<CloudMonitoringSimpleEscalationEntry>) };
    inline vector<CloudMonitoringSimpleEscalationEntry> getEscalations() { DARABONBA_PTR_GET(escalations_, vector<CloudMonitoringSimpleEscalationEntry>) };
    inline CloudMonitoringSimpleEscalation& setEscalations(const vector<CloudMonitoringSimpleEscalationEntry> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline CloudMonitoringSimpleEscalation& setEscalations(vector<CloudMonitoringSimpleEscalationEntry> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CloudMonitoringSimpleEscalation& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CloudMonitoringSimpleEscalation& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    // An object that defines a single escalation rule.
    shared_ptr<vector<CloudMonitoringSimpleEscalationEntry>> escalations_ {};
    // The name of the metric.
    shared_ptr<string> metricName_ {};
    // The evaluation period for the metric, in seconds.
    shared_ptr<int32_t> period_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
