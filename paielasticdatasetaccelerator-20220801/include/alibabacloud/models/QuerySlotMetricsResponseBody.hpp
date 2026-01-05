// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSLOTMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSLOTMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Metric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class QuerySlotMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySlotMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySlotMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySlotMetricsResponseBody() = default ;
    QuerySlotMetricsResponseBody(const QuerySlotMetricsResponseBody &) = default ;
    QuerySlotMetricsResponseBody(QuerySlotMetricsResponseBody &&) = default ;
    QuerySlotMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySlotMetricsResponseBody() = default ;
    QuerySlotMetricsResponseBody& operator=(const QuerySlotMetricsResponseBody &) = default ;
    QuerySlotMetricsResponseBody& operator=(QuerySlotMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->period_ == nullptr && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline QuerySlotMetricsResponseBody& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline QuerySlotMetricsResponseBody& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline QuerySlotMetricsResponseBody& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySlotMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<Metric>> metrics_ {};
    shared_ptr<string> period_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
