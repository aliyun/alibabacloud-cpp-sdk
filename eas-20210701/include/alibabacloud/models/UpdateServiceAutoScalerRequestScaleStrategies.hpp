// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTSCALESTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEAUTOSCALERREQUESTSCALESTRATEGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceAutoScalerRequestScaleStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceAutoScalerRequestScaleStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceAutoScalerRequestScaleStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    UpdateServiceAutoScalerRequestScaleStrategies() = default ;
    UpdateServiceAutoScalerRequestScaleStrategies(const UpdateServiceAutoScalerRequestScaleStrategies &) = default ;
    UpdateServiceAutoScalerRequestScaleStrategies(UpdateServiceAutoScalerRequestScaleStrategies &&) = default ;
    UpdateServiceAutoScalerRequestScaleStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceAutoScalerRequestScaleStrategies() = default ;
    UpdateServiceAutoScalerRequestScaleStrategies& operator=(const UpdateServiceAutoScalerRequestScaleStrategies &) = default ;
    UpdateServiceAutoScalerRequestScaleStrategies& operator=(UpdateServiceAutoScalerRequestScaleStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricName_ != nullptr
        && this->service_ != nullptr && this->threshold_ != nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline UpdateServiceAutoScalerRequestScaleStrategies& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline UpdateServiceAutoScalerRequestScaleStrategies& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline UpdateServiceAutoScalerRequestScaleStrategies& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The name of the metric for triggering auto scaling. Valid values:
    // 
    // *   qps: the queries per second (QPS) for an individual instance.
    // *   cpu: the CPU utilization.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
    std::shared_ptr<string> service_ = nullptr;
    // The threshold of the metric that triggers auto scaling.
    // 
    // *   If you set metricName to QPS, scale-out is triggered when the average QPS for a single instance is greater than this threshold.
    // *   If you set metricName to CPU, scale-out is triggered when the average CPU utilization for a single instance is greater than this threshold.
    // 
    // This parameter is required.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
