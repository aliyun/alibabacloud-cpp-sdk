// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricLastResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricLastResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricLastResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeJobMetricLastResponseBody() = default ;
    DescribeJobMetricLastResponseBody(const DescribeJobMetricLastResponseBody &) = default ;
    DescribeJobMetricLastResponseBody(DescribeJobMetricLastResponseBody &&) = default ;
    DescribeJobMetricLastResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricLastResponseBody() = default ;
    DescribeJobMetricLastResponseBody& operator=(const DescribeJobMetricLastResponseBody &) = default ;
    DescribeJobMetricLastResponseBody& operator=(DescribeJobMetricLastResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_TO_JSON(Metric, metric_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
        DARABONBA_PTR_FROM_JSON(Metric, metric_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arrayIndex_ == nullptr
        && this->metric_ == nullptr; };
      // arrayIndex Field Functions 
      bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
      void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
      inline int32_t getArrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
      inline Metrics& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline Metrics& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    protected:
      // The index of the array job.
      shared_ptr<int32_t> arrayIndex_ {};
      // The monitoring item information corresponding to the array job index.
      shared_ptr<string> metric_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<DescribeJobMetricLastResponseBody::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<DescribeJobMetricLastResponseBody::Metrics>) };
    inline vector<DescribeJobMetricLastResponseBody::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<DescribeJobMetricLastResponseBody::Metrics>) };
    inline DescribeJobMetricLastResponseBody& setMetrics(const vector<DescribeJobMetricLastResponseBody::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeJobMetricLastResponseBody& setMetrics(vector<DescribeJobMetricLastResponseBody::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobMetricLastResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of the JobMetric details.
    shared_ptr<vector<DescribeJobMetricLastResponseBody::Metrics>> metrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
