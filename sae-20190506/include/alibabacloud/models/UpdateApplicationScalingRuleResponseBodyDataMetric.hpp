// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRIC_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyDataMetricMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyDataMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyDataMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyDataMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
    };
    UpdateApplicationScalingRuleResponseBodyDataMetric() = default ;
    UpdateApplicationScalingRuleResponseBodyDataMetric(const UpdateApplicationScalingRuleResponseBodyDataMetric &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataMetric(UpdateApplicationScalingRuleResponseBodyDataMetric &&) = default ;
    UpdateApplicationScalingRuleResponseBodyDataMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyDataMetric() = default ;
    UpdateApplicationScalingRuleResponseBodyDataMetric& operator=(const UpdateApplicationScalingRuleResponseBodyDataMetric &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataMetric& operator=(UpdateApplicationScalingRuleResponseBodyDataMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxReplicas_ != nullptr
        && this->metrics_ != nullptr && this->minReplicas_ != nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyDataMetric& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics>) };
    inline vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics>) };
    inline UpdateApplicationScalingRuleResponseBodyDataMetric& setMetrics(const vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline UpdateApplicationScalingRuleResponseBodyDataMetric& setMetrics(vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyDataMetric& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


  protected:
    // The maximum number of instances.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // The metrics that are used to trigger the auto scaling policy.
    std::shared_ptr<vector<Models::UpdateApplicationScalingRuleResponseBodyDataMetricMetrics>> metrics_ = nullptr;
    // The minimum number of instances.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
