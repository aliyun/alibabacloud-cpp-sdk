// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILDELIVERYMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILDELIVERYMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailDeliveryMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailDeliveryMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailDeliveryMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrailDeliveryMetricDataResponseBody() = default ;
    DescribeTrailDeliveryMetricDataResponseBody(const DescribeTrailDeliveryMetricDataResponseBody &) = default ;
    DescribeTrailDeliveryMetricDataResponseBody(DescribeTrailDeliveryMetricDataResponseBody &&) = default ;
    DescribeTrailDeliveryMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailDeliveryMetricDataResponseBody() = default ;
    DescribeTrailDeliveryMetricDataResponseBody& operator=(const DescribeTrailDeliveryMetricDataResponseBody &) = default ;
    DescribeTrailDeliveryMetricDataResponseBody& operator=(DescribeTrailDeliveryMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, MetricList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      MetricList() = default ;
      MetricList(const MetricList &) = default ;
      MetricList(MetricList &&) = default ;
      MetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricList() = default ;
      MetricList& operator=(const MetricList &) = default ;
      MetricList& operator=(MetricList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->timestamp_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline MetricList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline MetricList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->metricList_ == nullptr
        && this->requestId_ == nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList> & getMetricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList>) };
    inline vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList> getMetricList() { DARABONBA_PTR_GET(metricList_, vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList>) };
    inline DescribeTrailDeliveryMetricDataResponseBody& setMetricList(const vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline DescribeTrailDeliveryMetricDataResponseBody& setMetricList(vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrailDeliveryMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeTrailDeliveryMetricDataResponseBody::MetricList>> metricList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
