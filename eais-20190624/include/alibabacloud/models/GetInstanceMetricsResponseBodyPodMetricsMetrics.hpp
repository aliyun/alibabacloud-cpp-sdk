// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICSMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICSMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
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
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetInstanceMetricsResponseBodyPodMetricsMetrics& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetInstanceMetricsResponseBodyPodMetricsMetrics& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
