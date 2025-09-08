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
    virtual bool empty() const override { this->metricTargetAverageUtilization_ != nullptr
        && this->metricType_ != nullptr && this->slbId_ != nullptr && this->slbLogstore_ != nullptr && this->slbProject_ != nullptr && this->vport_ != nullptr; };
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
    std::shared_ptr<int32_t> metricTargetAverageUtilization_ = nullptr;
    std::shared_ptr<string> metricType_ = nullptr;
    std::shared_ptr<string> slbId_ = nullptr;
    std::shared_ptr<string> slbLogstore_ = nullptr;
    std::shared_ptr<string> slbProject_ = nullptr;
    std::shared_ptr<string> vport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
