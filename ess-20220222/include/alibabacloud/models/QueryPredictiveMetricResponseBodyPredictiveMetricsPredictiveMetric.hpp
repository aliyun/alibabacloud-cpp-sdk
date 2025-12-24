// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODYPREDICTIVEMETRICSPREDICTIVEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODYPREDICTIVEMETRICSPREDICTIVEMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& obj) { 
      DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric() = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric(const QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric &) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric(QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric &&) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric() = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& operator=(const QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric &) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& operator=(QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricValue_ == nullptr
        && return this->time_ == nullptr; };
    // metricValue Field Functions 
    bool hasMetricValue() const { return this->metricValue_ != nullptr;};
    void deleteMetricValue() { this->metricValue_ = nullptr;};
    inline string metricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, "") };
    inline QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& setMetricValue(string metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> metricValue_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
