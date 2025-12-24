// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODYHISTORICALMETRICS_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODYHISTORICALMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryHistoricalMetricResponseBodyHistoricalMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoricalMetricResponseBodyHistoricalMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(HistoricalMetric, historicalMetric_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoricalMetricResponseBodyHistoricalMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoricalMetric, historicalMetric_);
    };
    QueryHistoricalMetricResponseBodyHistoricalMetrics() = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetrics(const QueryHistoricalMetricResponseBodyHistoricalMetrics &) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetrics(QueryHistoricalMetricResponseBodyHistoricalMetrics &&) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoricalMetricResponseBodyHistoricalMetrics() = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetrics& operator=(const QueryHistoricalMetricResponseBodyHistoricalMetrics &) = default ;
    QueryHistoricalMetricResponseBodyHistoricalMetrics& operator=(QueryHistoricalMetricResponseBodyHistoricalMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historicalMetric_ == nullptr; };
    // historicalMetric Field Functions 
    bool hasHistoricalMetric() const { return this->historicalMetric_ != nullptr;};
    void deleteHistoricalMetric() { this->historicalMetric_ = nullptr;};
    inline const vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric> & historicalMetric() const { DARABONBA_PTR_GET_CONST(historicalMetric_, vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric>) };
    inline vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric> historicalMetric() { DARABONBA_PTR_GET(historicalMetric_, vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric>) };
    inline QueryHistoricalMetricResponseBodyHistoricalMetrics& setHistoricalMetric(const vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric> & historicalMetric) { DARABONBA_PTR_SET_VALUE(historicalMetric_, historicalMetric) };
    inline QueryHistoricalMetricResponseBodyHistoricalMetrics& setHistoricalMetric(vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric> && historicalMetric) { DARABONBA_PTR_SET_RVALUE(historicalMetric_, historicalMetric) };


  protected:
    std::shared_ptr<vector<Models::QueryHistoricalMetricResponseBodyHistoricalMetricsHistoricalMetric>> historicalMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
