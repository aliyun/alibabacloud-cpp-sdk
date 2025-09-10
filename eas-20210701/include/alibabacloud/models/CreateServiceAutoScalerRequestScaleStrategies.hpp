// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTSCALESTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEAUTOSCALERREQUESTSCALESTRATEGIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceAutoScalerRequestScaleStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAutoScalerRequestScaleStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAutoScalerRequestScaleStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    CreateServiceAutoScalerRequestScaleStrategies() = default ;
    CreateServiceAutoScalerRequestScaleStrategies(const CreateServiceAutoScalerRequestScaleStrategies &) = default ;
    CreateServiceAutoScalerRequestScaleStrategies(CreateServiceAutoScalerRequestScaleStrategies &&) = default ;
    CreateServiceAutoScalerRequestScaleStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAutoScalerRequestScaleStrategies() = default ;
    CreateServiceAutoScalerRequestScaleStrategies& operator=(const CreateServiceAutoScalerRequestScaleStrategies &) = default ;
    CreateServiceAutoScalerRequestScaleStrategies& operator=(CreateServiceAutoScalerRequestScaleStrategies &&) = default ;
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
    inline CreateServiceAutoScalerRequestScaleStrategies& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline CreateServiceAutoScalerRequestScaleStrategies& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreateServiceAutoScalerRequestScaleStrategies& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The name of the metric for triggering auto scaling. Valid values:
    // 
    // *   qps: the queries per second (qps) for an individual instance.
    // *   cpu: the cpu utilization.
    // * gpu[util]: gpu utilization.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The service for which the metric is specified. If you do not set this parameter, the current service is specified by default.
    std::shared_ptr<string> service_ = nullptr;
    // The threshold of the metric that triggers auto scaling.
    // 
    // *   If you set metricName to qps, scale-out is triggered when the average qps for a single instance is greater than this threshold.
    // *   If you set metricName to cpu, scale-out is triggered when the average cpu utilization for a single instance is greater than this threshold.
    // *   If you set metricName to gpu, scale-out is triggered when the average gpu utilization for a single instance is greater than this threshold.
    // 
    // This parameter is required.
    std::shared_ptr<float> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
