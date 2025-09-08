// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICMETRICSSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYDATAAPPLICATIONSCALINGRULESMETRICMETRICSSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_TO_JSON(CurrentReplicas, currentReplicas_);
      DARABONBA_PTR_TO_JSON(DesiredReplicas, desiredReplicas_);
      DARABONBA_PTR_TO_JSON(LastScaleTime, lastScaleTime_);
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(NextScaleMetrics, nextScaleMetrics_);
      DARABONBA_PTR_TO_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentMetrics, currentMetrics_);
      DARABONBA_PTR_FROM_JSON(CurrentReplicas, currentReplicas_);
      DARABONBA_PTR_FROM_JSON(DesiredReplicas, desiredReplicas_);
      DARABONBA_PTR_FROM_JSON(LastScaleTime, lastScaleTime_);
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(NextScaleMetrics, nextScaleMetrics_);
      DARABONBA_PTR_FROM_JSON(NextScaleTimePeriod, nextScaleTimePeriod_);
    };
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus &&) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus() = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& operator=(const DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus &) = default ;
    DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& operator=(DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentMetrics_ != nullptr
        && this->currentReplicas_ != nullptr && this->desiredReplicas_ != nullptr && this->lastScaleTime_ != nullptr && this->maxReplicas_ != nullptr && this->minReplicas_ != nullptr
        && this->nextScaleMetrics_ != nullptr && this->nextScaleTimePeriod_ != nullptr; };
    // currentMetrics Field Functions 
    bool hasCurrentMetrics() const { return this->currentMetrics_ != nullptr;};
    void deleteCurrentMetrics() { this->currentMetrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics> & currentMetrics() const { DARABONBA_PTR_GET_CONST(currentMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics> currentMetrics() { DARABONBA_PTR_GET(currentMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics>) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setCurrentMetrics(const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics> & currentMetrics) { DARABONBA_PTR_SET_VALUE(currentMetrics_, currentMetrics) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setCurrentMetrics(vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics> && currentMetrics) { DARABONBA_PTR_SET_RVALUE(currentMetrics_, currentMetrics) };


    // currentReplicas Field Functions 
    bool hasCurrentReplicas() const { return this->currentReplicas_ != nullptr;};
    void deleteCurrentReplicas() { this->currentReplicas_ = nullptr;};
    inline int64_t currentReplicas() const { DARABONBA_PTR_GET_DEFAULT(currentReplicas_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setCurrentReplicas(int64_t currentReplicas) { DARABONBA_PTR_SET_VALUE(currentReplicas_, currentReplicas) };


    // desiredReplicas Field Functions 
    bool hasDesiredReplicas() const { return this->desiredReplicas_ != nullptr;};
    void deleteDesiredReplicas() { this->desiredReplicas_ = nullptr;};
    inline int64_t desiredReplicas() const { DARABONBA_PTR_GET_DEFAULT(desiredReplicas_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setDesiredReplicas(int64_t desiredReplicas) { DARABONBA_PTR_SET_VALUE(desiredReplicas_, desiredReplicas) };


    // lastScaleTime Field Functions 
    bool hasLastScaleTime() const { return this->lastScaleTime_ != nullptr;};
    void deleteLastScaleTime() { this->lastScaleTime_ = nullptr;};
    inline string lastScaleTime() const { DARABONBA_PTR_GET_DEFAULT(lastScaleTime_, "") };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setLastScaleTime(string lastScaleTime) { DARABONBA_PTR_SET_VALUE(lastScaleTime_, lastScaleTime) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int64_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setMaxReplicas(int64_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int64_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0L) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setMinReplicas(int64_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // nextScaleMetrics Field Functions 
    bool hasNextScaleMetrics() const { return this->nextScaleMetrics_ != nullptr;};
    void deleteNextScaleMetrics() { this->nextScaleMetrics_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics> & nextScaleMetrics() const { DARABONBA_PTR_GET_CONST(nextScaleMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics> nextScaleMetrics() { DARABONBA_PTR_GET(nextScaleMetrics_, vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics>) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setNextScaleMetrics(const vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics> & nextScaleMetrics) { DARABONBA_PTR_SET_VALUE(nextScaleMetrics_, nextScaleMetrics) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setNextScaleMetrics(vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics> && nextScaleMetrics) { DARABONBA_PTR_SET_RVALUE(nextScaleMetrics_, nextScaleMetrics) };


    // nextScaleTimePeriod Field Functions 
    bool hasNextScaleTimePeriod() const { return this->nextScaleTimePeriod_ != nullptr;};
    void deleteNextScaleTimePeriod() { this->nextScaleTimePeriod_ = nullptr;};
    inline int32_t nextScaleTimePeriod() const { DARABONBA_PTR_GET_DEFAULT(nextScaleTimePeriod_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatus& setNextScaleTimePeriod(int32_t nextScaleTimePeriod) { DARABONBA_PTR_SET_VALUE(nextScaleTimePeriod_, nextScaleTimePeriod) };


  protected:
    // The metrics that are used to trigger the auto scaling policy this time.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusCurrentMetrics>> currentMetrics_ = nullptr;
    // The current number of instances.
    std::shared_ptr<int64_t> currentReplicas_ = nullptr;
    // The expected number of instances.
    std::shared_ptr<int64_t> desiredReplicas_ = nullptr;
    // The time when the auto scaling policy was last triggered.
    std::shared_ptr<string> lastScaleTime_ = nullptr;
    // The maximum number of instances.
    std::shared_ptr<int64_t> maxReplicas_ = nullptr;
    // The minimum number of instances.
    std::shared_ptr<int64_t> minReplicas_ = nullptr;
    // The metrics that are used to trigger the auto scaling policy next time.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyDataApplicationScalingRulesMetricMetricsStatusNextScaleMetrics>> nextScaleMetrics_ = nullptr;
    // The duration for which the metric-based auto scaling policy takes effect next time.
    std::shared_ptr<int32_t> nextScaleTimePeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
