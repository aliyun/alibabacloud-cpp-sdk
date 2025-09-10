// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODYCURRENTMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERRESPONSEBODYCURRENTMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceAutoScalerResponseBodyCurrentMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceAutoScalerResponseBodyCurrentMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceAutoScalerResponseBodyCurrentMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeServiceAutoScalerResponseBodyCurrentMetrics() = default ;
    DescribeServiceAutoScalerResponseBodyCurrentMetrics(const DescribeServiceAutoScalerResponseBodyCurrentMetrics &) = default ;
    DescribeServiceAutoScalerResponseBodyCurrentMetrics(DescribeServiceAutoScalerResponseBodyCurrentMetrics &&) = default ;
    DescribeServiceAutoScalerResponseBodyCurrentMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceAutoScalerResponseBodyCurrentMetrics() = default ;
    DescribeServiceAutoScalerResponseBodyCurrentMetrics& operator=(const DescribeServiceAutoScalerResponseBodyCurrentMetrics &) = default ;
    DescribeServiceAutoScalerResponseBodyCurrentMetrics& operator=(DescribeServiceAutoScalerResponseBodyCurrentMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricName_ != nullptr
        && this->service_ != nullptr && this->value_ != nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeServiceAutoScalerResponseBodyCurrentMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeServiceAutoScalerResponseBodyCurrentMetrics& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DescribeServiceAutoScalerResponseBodyCurrentMetrics& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The metric name. Valid values:
    // 
    // *   QPS
    // *   CPU
    std::shared_ptr<string> metricName_ = nullptr;
    // The service for which the metric is specified.
    std::shared_ptr<string> service_ = nullptr;
    // The metric value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
