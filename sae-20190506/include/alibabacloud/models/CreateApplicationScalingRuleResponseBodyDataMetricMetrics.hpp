// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyDataMetricMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyDataMetricMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbLogstore, slbLogstore_);
      DARABONBA_PTR_TO_JSON(SlbProject, slbProject_);
      DARABONBA_PTR_TO_JSON(Vport, vport_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyDataMetricMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricTargetAverageUtilization, metricTargetAverageUtilization_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbLogstore, slbLogstore_);
      DARABONBA_PTR_FROM_JSON(SlbProject, slbProject_);
      DARABONBA_PTR_FROM_JSON(Vport, vport_);
    };
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics() = default ;
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics(const CreateApplicationScalingRuleResponseBodyDataMetricMetrics &) = default ;
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics(CreateApplicationScalingRuleResponseBodyDataMetricMetrics &&) = default ;
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyDataMetricMetrics() = default ;
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics& operator=(const CreateApplicationScalingRuleResponseBodyDataMetricMetrics &) = default ;
    CreateApplicationScalingRuleResponseBodyDataMetricMetrics& operator=(CreateApplicationScalingRuleResponseBodyDataMetricMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricTargetAverageUtilization_ == nullptr
        && return this->metricType_ == nullptr && return this->slbId_ == nullptr && return this->slbLogstore_ == nullptr && return this->slbProject_ == nullptr && return this->vport_ == nullptr; };
    // metricTargetAverageUtilization Field Functions 
    bool hasMetricTargetAverageUtilization() const { return this->metricTargetAverageUtilization_ != nullptr;};
    void deleteMetricTargetAverageUtilization() { this->metricTargetAverageUtilization_ = nullptr;};
    inline int32_t metricTargetAverageUtilization() const { DARABONBA_PTR_GET_DEFAULT(metricTargetAverageUtilization_, 0) };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setMetricTargetAverageUtilization(int32_t metricTargetAverageUtilization) { DARABONBA_PTR_SET_VALUE(metricTargetAverageUtilization_, metricTargetAverageUtilization) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbLogstore Field Functions 
    bool hasSlbLogstore() const { return this->slbLogstore_ != nullptr;};
    void deleteSlbLogstore() { this->slbLogstore_ = nullptr;};
    inline string slbLogstore() const { DARABONBA_PTR_GET_DEFAULT(slbLogstore_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setSlbLogstore(string slbLogstore) { DARABONBA_PTR_SET_VALUE(slbLogstore_, slbLogstore) };


    // slbProject Field Functions 
    bool hasSlbProject() const { return this->slbProject_ != nullptr;};
    void deleteSlbProject() { this->slbProject_ = nullptr;};
    inline string slbProject() const { DARABONBA_PTR_GET_DEFAULT(slbProject_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setSlbProject(string slbProject) { DARABONBA_PTR_SET_VALUE(slbProject_, slbProject) };


    // vport Field Functions 
    bool hasVport() const { return this->vport_ != nullptr;};
    void deleteVport() { this->vport_ = nullptr;};
    inline string vport() const { DARABONBA_PTR_GET_DEFAULT(vport_, "") };
    inline CreateApplicationScalingRuleResponseBodyDataMetricMetrics& setVport(string vport) { DARABONBA_PTR_SET_VALUE(vport_, vport) };


  protected:
    // The limit on the metric.
    // 
    // *   The limit on the CPU utilization. Unit: percentage.
    // *   The limit on the memory usage. Unit: percentage.
    // *   The limit on the queries per second (QPS). Unit: seconds.
    // *   The limit on the response time. Unit: milliseconds.
    // *   The limit on the average number of active TCP connections per second.
    // *   The limit on the QPS of the Internet-facing SLB instance.
    // *   The limit on the response time of the Internet-facing SLB instance. Unit: milliseconds.
    // *   The limit on the QPS of the internal-facing SLB instance.
    // *   The limit on the response time of the internal-facing SLB instance. Unit: milliseconds.
    std::shared_ptr<int32_t> metricTargetAverageUtilization_ = nullptr;
    // The metric that is used to trigger the auto scaling policy. Valid values:
    // 
    // *   **CPU**: the CPU utilization.
    // *   **MEMORY**: the memory usage.
    // *   **QPS**: the average QPS within 1 minute per Java application instance.
    // *   **RT**: the average response time of all API operations within 1 minute in the Java application.
    // *   **tcpActiveConn**: the average number of active TCP connections within 30 seconds per instance.
    // *   **SLB_QPS**: the average QPS of the Internet-facing SLB instance within 15 seconds per instance.
    // *   **SLB_RT**: the average response time of the Internet-facing SLB instance within 15 seconds.
    // *   **INTRANET_SLB_QPS**: the average QPS of the internal-facing SLB instance within 15 seconds per instance.
    // *   **INTRANET_SLB_RT**: the average response time of the internal-facing SLB instance within 15 seconds.
    std::shared_ptr<string> metricType_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The Logstore that stores the SLB access logs.
    std::shared_ptr<string> slbLogstore_ = nullptr;
    // The project that stores the SLB access logs.
    std::shared_ptr<string> slbProject_ = nullptr;
    // The port number of the SLB instance.
    std::shared_ptr<string> vport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
