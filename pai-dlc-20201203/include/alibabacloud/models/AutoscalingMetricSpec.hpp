// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGMETRICSPEC_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGMETRICSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AutoscalingMetricSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoscalingMetricSpec& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, AutoscalingMetricSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    AutoscalingMetricSpec() = default ;
    AutoscalingMetricSpec(const AutoscalingMetricSpec &) = default ;
    AutoscalingMetricSpec(AutoscalingMetricSpec &&) = default ;
    AutoscalingMetricSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoscalingMetricSpec() = default ;
    AutoscalingMetricSpec& operator=(const AutoscalingMetricSpec &) = default ;
    AutoscalingMetricSpec& operator=(AutoscalingMetricSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && return this->targetValue_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AutoscalingMetricSpec& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline int32_t targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, 0) };
    inline AutoscalingMetricSpec& setTargetValue(int32_t targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<int32_t> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
