// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNISTRAFFICMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisTrafficMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisTrafficMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MetricStatics, metricStatics_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisTrafficMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MetricStatics, metricStatics_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    GetNisTrafficMetricsResponseBody() = default ;
    GetNisTrafficMetricsResponseBody(const GetNisTrafficMetricsResponseBody &) = default ;
    GetNisTrafficMetricsResponseBody(GetNisTrafficMetricsResponseBody &&) = default ;
    GetNisTrafficMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisTrafficMetricsResponseBody() = default ;
    GetNisTrafficMetricsResponseBody& operator=(const GetNisTrafficMetricsResponseBody &) = default ;
    GetNisTrafficMetricsResponseBody& operator=(GetNisTrafficMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricStatics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricStatics& obj) { 
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MetricStatics& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MetricStatics() = default ;
      MetricStatics(const MetricStatics &) = default ;
      MetricStatics(MetricStatics &&) = default ;
      MetricStatics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricStatics() = default ;
      MetricStatics& operator=(const MetricStatics &) = default ;
      MetricStatics& operator=(MetricStatics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline MetricStatics& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline MetricStatics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The timestamp of the data point, in milliseconds.
      shared_ptr<int64_t> timeStamp_ {};
      // The metric value at the current time point. The specific meaning and unit are determined by the MetricName in the request.
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->metricStatics_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->unit_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetNisTrafficMetricsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // metricStatics Field Functions 
    bool hasMetricStatics() const { return this->metricStatics_ != nullptr;};
    void deleteMetricStatics() { this->metricStatics_ = nullptr;};
    inline const vector<GetNisTrafficMetricsResponseBody::MetricStatics> & getMetricStatics() const { DARABONBA_PTR_GET_CONST(metricStatics_, vector<GetNisTrafficMetricsResponseBody::MetricStatics>) };
    inline vector<GetNisTrafficMetricsResponseBody::MetricStatics> getMetricStatics() { DARABONBA_PTR_GET(metricStatics_, vector<GetNisTrafficMetricsResponseBody::MetricStatics>) };
    inline GetNisTrafficMetricsResponseBody& setMetricStatics(const vector<GetNisTrafficMetricsResponseBody::MetricStatics> & metricStatics) { DARABONBA_PTR_SET_VALUE(metricStatics_, metricStatics) };
    inline GetNisTrafficMetricsResponseBody& setMetricStatics(vector<GetNisTrafficMetricsResponseBody::MetricStatics> && metricStatics) { DARABONBA_PTR_SET_RVALUE(metricStatics_, metricStatics) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetNisTrafficMetricsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNisTrafficMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetNisTrafficMetricsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetNisTrafficMetricsResponseBody& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The maximum number of entries returned per page or per query. In VPC scenarios, this represents the paging size. In TR and Internet Shared Bandwidth scenarios, this represents the SQL query limit.
    shared_ptr<int32_t> maxResults_ {};
    // The list of time series metric data points. Each element represents an aggregated time point and its corresponding metric value.
    shared_ptr<vector<GetNisTrafficMetricsResponseBody::MetricStatics>> metricStatics_ {};
    // The paging token for the next page. Paging is supported only in VPC scenarios. An empty value indicates that no more pages exist. This field is typically not returned in TR and Internet Shared Bandwidth scenarios.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of data points in the query result.
    shared_ptr<int32_t> totalCount_ {};
    // **Unit and MetricName mapping**
    // 
    // - Bandwidth  
    //   - Unit: Bits/Second  
    //   - Description: bits per second.
    // 
    // - PacketsRate  
    //   - Unit: Packets/Second  
    //   - Description: packets per second.
    // 
    // - RoundTripTime  
    //   - Unit: MicroSecond  
    //   - Description: TCP round-trip time.
    // 
    // - BandwidthUtilization  
    //   - Unit: Percent  
    //   - Description: bandwidth utilization.
    // 
    // - PacketsLostNoRouteRate  
    //   - Unit: PacketsLostNoRouteRate  
    //   - Description: rate of packets dropped due to no route.
    // 
    // - PacketsLostBlackholeRate  
    //   - Unit: PacketsLostBlackholeRate  
    //   - Description: rate of packets dropped due to blackhole routing.
    // 
    // - PacketsLostTTLExpiredRate  
    //   - Unit: PacketsLostTTLExpiredRate  
    //   - Description: rate of packets dropped due to TTL expiration.
    shared_ptr<string> unit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
