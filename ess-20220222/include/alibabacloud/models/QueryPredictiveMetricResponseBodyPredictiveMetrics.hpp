// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODYPREDICTIVEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODYPREDICTIVEMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveMetricResponseBodyPredictiveMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveMetricResponseBodyPredictiveMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(PredictiveMetric, predictiveMetric_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveMetricResponseBodyPredictiveMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(PredictiveMetric, predictiveMetric_);
    };
    QueryPredictiveMetricResponseBodyPredictiveMetrics() = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetrics(const QueryPredictiveMetricResponseBodyPredictiveMetrics &) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetrics(QueryPredictiveMetricResponseBodyPredictiveMetrics &&) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveMetricResponseBodyPredictiveMetrics() = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetrics& operator=(const QueryPredictiveMetricResponseBodyPredictiveMetrics &) = default ;
    QueryPredictiveMetricResponseBodyPredictiveMetrics& operator=(QueryPredictiveMetricResponseBodyPredictiveMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->predictiveMetric_ == nullptr; };
    // predictiveMetric Field Functions 
    bool hasPredictiveMetric() const { return this->predictiveMetric_ != nullptr;};
    void deletePredictiveMetric() { this->predictiveMetric_ = nullptr;};
    inline const vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric> & predictiveMetric() const { DARABONBA_PTR_GET_CONST(predictiveMetric_, vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric>) };
    inline vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric> predictiveMetric() { DARABONBA_PTR_GET(predictiveMetric_, vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric>) };
    inline QueryPredictiveMetricResponseBodyPredictiveMetrics& setPredictiveMetric(const vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric> & predictiveMetric) { DARABONBA_PTR_SET_VALUE(predictiveMetric_, predictiveMetric) };
    inline QueryPredictiveMetricResponseBodyPredictiveMetrics& setPredictiveMetric(vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric> && predictiveMetric) { DARABONBA_PTR_SET_RVALUE(predictiveMetric_, predictiveMetric) };


  protected:
    std::shared_ptr<vector<Models::QueryPredictiveMetricResponseBodyPredictiveMetricsPredictiveMetric>> predictiveMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
