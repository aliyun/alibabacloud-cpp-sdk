// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULERESPONSEBODYDATAMETRICMETRICSSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_TO_JSON(CurrentReplicas, currentReplicas_);
      DARABONBA_PTR_TO_JSON(DesiredReplicas, desiredReplicas_);
      DARABONBA_PTR_TO_JSON(LastScaleTime, lastScaleTime_);
      DARABONBA_PTR_TO_JSON(NextScaleMetrics, nextScaleMetrics_);
      DARABONBA_PTR_TO_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_FROM_JSON(CurrentReplicas, currentReplicas_);
      DARABONBA_PTR_FROM_JSON(DesiredReplicas, desiredReplicas_);
      DARABONBA_PTR_FROM_JSON(LastScaleTime, lastScaleTime_);
      DARABONBA_PTR_FROM_JSON(NextScaleMetrics, nextScaleMetrics_);
      DARABONBA_PTR_FROM_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
    };
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus(const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus(DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus &&) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus() = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& operator=(const DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus &) = default ;
    DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& operator=(DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentMetrics_ == nullptr
        && return this->currentReplicas_ == nullptr && return this->desiredReplicas_ == nullptr && return this->lastScaleTime_ == nullptr && return this->nextScaleMetrics_ == nullptr && return this->nextScaleTimePeriod_ == nullptr; };
    // currentMetrics Field Functions 
    bool hasCurrentMetrics() const { return this->currentMetrics_ != nullptr;};
    void deleteCurrentMetrics() { this->currentMetrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics> & currentMetrics() const { DARABONBA_PTR_GET_CONST(currentMetrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics>) };
    inline vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics> currentMetrics() { DARABONBA_PTR_GET(currentMetrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics>) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setCurrentMetrics(const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics> & currentMetrics) { DARABONBA_PTR_SET_VALUE(currentMetrics_, currentMetrics) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setCurrentMetrics(vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics> && currentMetrics) { DARABONBA_PTR_SET_RVALUE(currentMetrics_, currentMetrics) };


    // currentReplicas Field Functions 
    bool hasCurrentReplicas() const { return this->currentReplicas_ != nullptr;};
    void deleteCurrentReplicas() { this->currentReplicas_ = nullptr;};
    inline int64_t currentReplicas() const { DARABONBA_PTR_GET_DEFAULT(currentReplicas_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setCurrentReplicas(int64_t currentReplicas) { DARABONBA_PTR_SET_VALUE(currentReplicas_, currentReplicas) };


    // desiredReplicas Field Functions 
    bool hasDesiredReplicas() const { return this->desiredReplicas_ != nullptr;};
    void deleteDesiredReplicas() { this->desiredReplicas_ = nullptr;};
    inline int64_t desiredReplicas() const { DARABONBA_PTR_GET_DEFAULT(desiredReplicas_, 0L) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setDesiredReplicas(int64_t desiredReplicas) { DARABONBA_PTR_SET_VALUE(desiredReplicas_, desiredReplicas) };


    // lastScaleTime Field Functions 
    bool hasLastScaleTime() const { return this->lastScaleTime_ != nullptr;};
    void deleteLastScaleTime() { this->lastScaleTime_ = nullptr;};
    inline string lastScaleTime() const { DARABONBA_PTR_GET_DEFAULT(lastScaleTime_, "") };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setLastScaleTime(string lastScaleTime) { DARABONBA_PTR_SET_VALUE(lastScaleTime_, lastScaleTime) };


    // nextScaleMetrics Field Functions 
    bool hasNextScaleMetrics() const { return this->nextScaleMetrics_ != nullptr;};
    void deleteNextScaleMetrics() { this->nextScaleMetrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics> & nextScaleMetrics() const { DARABONBA_PTR_GET_CONST(nextScaleMetrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics>) };
    inline vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics> nextScaleMetrics() { DARABONBA_PTR_GET(nextScaleMetrics_, vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics>) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setNextScaleMetrics(const vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics> & nextScaleMetrics) { DARABONBA_PTR_SET_VALUE(nextScaleMetrics_, nextScaleMetrics) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setNextScaleMetrics(vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics> && nextScaleMetrics) { DARABONBA_PTR_SET_RVALUE(nextScaleMetrics_, nextScaleMetrics) };


    // nextScaleTimePeriod Field Functions 
    bool hasNextScaleTimePeriod() const { return this->nextScaleTimePeriod_ != nullptr;};
    void deleteNextScaleTimePeriod() { this->nextScaleTimePeriod_ = nullptr;};
    inline int32_t nextScaleTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(nextScaleTimePeriod_, 0) };
    inline DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatus& setNextScaleTimePeriod(int32_t nextScaleTimePeriod) { DARABONBA_PTR_SET_VALUE(nextScaleTimePeriod_, nextScaleTimePeriod) };


  protected:
    // The metrics that is used to trigger the current auto scaling policy.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusCurrentMetrics>> currentMetrics_ = nullptr;
    // The current number of instances.
    std::shared_ptr<int64_t> currentReplicas_ = nullptr;
    // The expected number of instances.
    std::shared_ptr<int64_t> desiredReplicas_ = nullptr;
    // The time when the auto scaling policy was last triggered.
    std::shared_ptr<string> lastScaleTime_ = nullptr;
    // The metrics that are used to trigger the auto scaling policy next time.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRuleResponseBodyDataMetricMetricsStatusNextScaleMetrics>> nextScaleMetrics_ = nullptr;
    // The duration for which the metric-based auto scaling policy takes effect next time.
    std::shared_ptr<int32_t> nextScaleTimePeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
