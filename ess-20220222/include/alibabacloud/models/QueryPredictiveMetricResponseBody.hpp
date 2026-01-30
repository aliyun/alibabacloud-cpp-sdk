// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEMETRICRESPONSEBODY_HPP_
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
  class QueryPredictiveMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PredictiveMetrics, predictiveMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PredictiveMetrics, predictiveMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPredictiveMetricResponseBody() = default ;
    QueryPredictiveMetricResponseBody(const QueryPredictiveMetricResponseBody &) = default ;
    QueryPredictiveMetricResponseBody(QueryPredictiveMetricResponseBody &&) = default ;
    QueryPredictiveMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveMetricResponseBody() = default ;
    QueryPredictiveMetricResponseBody& operator=(const QueryPredictiveMetricResponseBody &) = default ;
    QueryPredictiveMetricResponseBody& operator=(QueryPredictiveMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PredictiveMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PredictiveMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(PredictiveMetric, predictiveMetric_);
      };
      friend void from_json(const Darabonba::Json& j, PredictiveMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(PredictiveMetric, predictiveMetric_);
      };
      PredictiveMetrics() = default ;
      PredictiveMetrics(const PredictiveMetrics &) = default ;
      PredictiveMetrics(PredictiveMetrics &&) = default ;
      PredictiveMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PredictiveMetrics() = default ;
      PredictiveMetrics& operator=(const PredictiveMetrics &) = default ;
      PredictiveMetrics& operator=(PredictiveMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PredictiveMetric : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PredictiveMetric& obj) { 
          DARABONBA_PTR_TO_JSON(MetricValue, metricValue_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, PredictiveMetric& obj) { 
          DARABONBA_PTR_FROM_JSON(MetricValue, metricValue_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        PredictiveMetric() = default ;
        PredictiveMetric(const PredictiveMetric &) = default ;
        PredictiveMetric(PredictiveMetric &&) = default ;
        PredictiveMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PredictiveMetric() = default ;
        PredictiveMetric& operator=(const PredictiveMetric &) = default ;
        PredictiveMetric& operator=(PredictiveMetric &&) = default ;
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
        inline PredictiveMetric& setMetricValue(string metricValue) { DARABONBA_PTR_SET_VALUE(metricValue_, metricValue) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline PredictiveMetric& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // Predicted monitoring value.
        shared_ptr<string> metricValue_ {};
        // The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time must be in UTC.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->predictiveMetric_ == nullptr; };
      // predictiveMetric Field Functions 
      bool hasPredictiveMetric() const { return this->predictiveMetric_ != nullptr;};
      void deletePredictiveMetric() { this->predictiveMetric_ = nullptr;};
      inline const vector<PredictiveMetrics::PredictiveMetric> & getPredictiveMetric() const { DARABONBA_PTR_GET_CONST(predictiveMetric_, vector<PredictiveMetrics::PredictiveMetric>) };
      inline vector<PredictiveMetrics::PredictiveMetric> getPredictiveMetric() { DARABONBA_PTR_GET(predictiveMetric_, vector<PredictiveMetrics::PredictiveMetric>) };
      inline PredictiveMetrics& setPredictiveMetric(const vector<PredictiveMetrics::PredictiveMetric> & predictiveMetric) { DARABONBA_PTR_SET_VALUE(predictiveMetric_, predictiveMetric) };
      inline PredictiveMetrics& setPredictiveMetric(vector<PredictiveMetrics::PredictiveMetric> && predictiveMetric) { DARABONBA_PTR_SET_RVALUE(predictiveMetric_, predictiveMetric) };


    protected:
      shared_ptr<vector<PredictiveMetrics::PredictiveMetric>> predictiveMetric_ {};
    };

    virtual bool empty() const override { return this->predictiveMetrics_ == nullptr
        && this->requestId_ == nullptr; };
    // predictiveMetrics Field Functions 
    bool hasPredictiveMetrics() const { return this->predictiveMetrics_ != nullptr;};
    void deletePredictiveMetrics() { this->predictiveMetrics_ = nullptr;};
    inline const QueryPredictiveMetricResponseBody::PredictiveMetrics & getPredictiveMetrics() const { DARABONBA_PTR_GET_CONST(predictiveMetrics_, QueryPredictiveMetricResponseBody::PredictiveMetrics) };
    inline QueryPredictiveMetricResponseBody::PredictiveMetrics getPredictiveMetrics() { DARABONBA_PTR_GET(predictiveMetrics_, QueryPredictiveMetricResponseBody::PredictiveMetrics) };
    inline QueryPredictiveMetricResponseBody& setPredictiveMetrics(const QueryPredictiveMetricResponseBody::PredictiveMetrics & predictiveMetrics) { DARABONBA_PTR_SET_VALUE(predictiveMetrics_, predictiveMetrics) };
    inline QueryPredictiveMetricResponseBody& setPredictiveMetrics(QueryPredictiveMetricResponseBody::PredictiveMetrics && predictiveMetrics) { DARABONBA_PTR_SET_RVALUE(predictiveMetrics_, predictiveMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPredictiveMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Predicted monitoring metrics.
    shared_ptr<QueryPredictiveMetricResponseBody::PredictiveMetrics> predictiveMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
