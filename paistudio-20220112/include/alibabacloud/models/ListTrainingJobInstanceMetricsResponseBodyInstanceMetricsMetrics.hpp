// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODYINSTANCEMETRICSMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODYINSTANCEMETRICSMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics() = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics(const ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics &) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics(ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics &&) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics() = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& operator=(const ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics &) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& operator=(ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics &&) = default ;
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
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
