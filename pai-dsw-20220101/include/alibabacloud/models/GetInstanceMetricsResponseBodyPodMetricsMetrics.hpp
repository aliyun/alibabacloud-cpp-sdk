// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICSMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICSMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceMetricsResponseBodyPodMetricsMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMetricsResponseBodyPodMetricsMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMetricsResponseBodyPodMetricsMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetInstanceMetricsResponseBodyPodMetricsMetrics() = default ;
    GetInstanceMetricsResponseBodyPodMetricsMetrics(const GetInstanceMetricsResponseBodyPodMetricsMetrics &) = default ;
    GetInstanceMetricsResponseBodyPodMetricsMetrics(GetInstanceMetricsResponseBodyPodMetricsMetrics &&) = default ;
    GetInstanceMetricsResponseBodyPodMetricsMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMetricsResponseBodyPodMetricsMetrics() = default ;
    GetInstanceMetricsResponseBodyPodMetricsMetrics& operator=(const GetInstanceMetricsResponseBodyPodMetricsMetrics &) = default ;
    GetInstanceMetricsResponseBodyPodMetricsMetrics& operator=(GetInstanceMetricsResponseBodyPodMetricsMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->time_ == nullptr
        && return this->value_ == nullptr; };
    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline GetInstanceMetricsResponseBodyPodMetricsMetrics& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetInstanceMetricsResponseBodyPodMetricsMetrics& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The timestamp corresponding to the metric.
    std::shared_ptr<int64_t> time_ = nullptr;
    // The metric value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
