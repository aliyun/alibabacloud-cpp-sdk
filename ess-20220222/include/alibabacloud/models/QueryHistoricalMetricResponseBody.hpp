// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORICALMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryHistoricalMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoricalMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoricalMetrics, historicalMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoricalMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoricalMetrics, historicalMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryHistoricalMetricResponseBody() = default ;
    QueryHistoricalMetricResponseBody(const QueryHistoricalMetricResponseBody &) = default ;
    QueryHistoricalMetricResponseBody(QueryHistoricalMetricResponseBody &&) = default ;
    QueryHistoricalMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoricalMetricResponseBody() = default ;
    QueryHistoricalMetricResponseBody& operator=(const QueryHistoricalMetricResponseBody &) = default ;
    QueryHistoricalMetricResponseBody& operator=(QueryHistoricalMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoricalMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoricalMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(HistoricalMetric, historicalMetric_);
      };
      friend void from_json(const Darabonba::Json& j, HistoricalMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoricalMetric, historicalMetric_);
      };
      HistoricalMetrics() = default ;
      HistoricalMetrics(const HistoricalMetrics &) = default ;
      HistoricalMetrics(HistoricalMetrics &&) = default ;
      HistoricalMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoricalMetrics() = default ;
      HistoricalMetrics& operator=(const HistoricalMetrics &) = default ;
      HistoricalMetrics& operator=(HistoricalMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoricalMetric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoricalMetric& obj) { 
          DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, HistoricalMetric& obj) { 
          DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        HistoricalMetric() = default ;
        HistoricalMetric(const HistoricalMetric &) = default ;
        HistoricalMetric(HistoricalMetric &&) = default ;
        HistoricalMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoricalMetric() = default ;
        HistoricalMetric& operator=(const HistoricalMetric &) = default ;
        HistoricalMetric& operator=(HistoricalMetric &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->metricValue_ == nullptr
        && this->time_ == nullptr; };
        // metricValue Field Functions 
        bool hasMetricValue() const { return this->metricValue_ != nullptr;};
        void deleteMetricValue() { this->metricValue_ = nullptr;};
        inline string getMetricValue() const { DARABONBA_PTR_GET_DEFAULT(metricValue_, "") };
        inline HistoricalMetric& setMetricValue(string metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline HistoricalMetric& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The value of the metric.
        shared_ptr<string> metricValue_ {};
        // The point in time of the monitoring metric. The value must be in the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->historicalMetric_ == nullptr; };
      // historicalMetric Field Functions 
      bool hasHistoricalMetric() const { return this->historicalMetric_ != nullptr;};
      void deleteHistoricalMetric() { this->historicalMetric_ = nullptr;};
      inline const vector<HistoricalMetrics::HistoricalMetric> & getHistoricalMetric() const { DARABONBA_PTR_GET_CONST(historicalMetric_, vector<HistoricalMetrics::HistoricalMetric>) };
      inline vector<HistoricalMetrics::HistoricalMetric> getHistoricalMetric() { DARABONBA_PTR_GET(historicalMetric_, vector<HistoricalMetrics::HistoricalMetric>) };
      inline HistoricalMetrics& setHistoricalMetric(const vector<HistoricalMetrics::HistoricalMetric> & historicalMetric) { DARABONBA_PTR_SET_VALUE(historicalMetric_, historicalMetric) };
      inline HistoricalMetrics& setHistoricalMetric(vector<HistoricalMetrics::HistoricalMetric> && historicalMetric) { DARABONBA_PTR_SET_RVALUE(historicalMetric_, historicalMetric) };


    protected:
      shared_ptr<vector<HistoricalMetrics::HistoricalMetric>> historicalMetric_ {};
    };

    virtual bool empty() const override { return this->historicalMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // historicalMetrics Field Functions 
    bool hasHistoricalMetrics() const { return this->historicalMetrics_ != nullptr;};
    void deleteHistoricalMetrics() { this->historicalMetrics_ = nullptr;};
    inline const QueryHistoricalMetricResponseBody::HistoricalMetrics & getHistoricalMetrics() const { DARABONBA_PTR_GET_CONST(historicalMetrics_, QueryHistoricalMetricResponseBody::HistoricalMetrics) };
    inline QueryHistoricalMetricResponseBody::HistoricalMetrics getHistoricalMetrics() { DARABONBA_PTR_GET(historicalMetrics_, QueryHistoricalMetricResponseBody::HistoricalMetrics) };
    inline QueryHistoricalMetricResponseBody& setHistoricalMetrics(const QueryHistoricalMetricResponseBody::HistoricalMetrics & historicalMetrics) { DARABONBA_PTR_SET_VALUE(historicalMetrics_, historicalMetrics) };
    inline QueryHistoricalMetricResponseBody& setHistoricalMetrics(QueryHistoricalMetricResponseBody::HistoricalMetrics && historicalMetrics) { DARABONBA_PTR_SET_RVALUE(historicalMetrics_, historicalMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoricalMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring metrics of the prediction rule.
    shared_ptr<QueryHistoricalMetricResponseBody::HistoricalMetrics> historicalMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
