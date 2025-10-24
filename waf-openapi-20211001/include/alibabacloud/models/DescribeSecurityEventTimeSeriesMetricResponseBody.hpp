// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries.hpp>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTimeSeriesMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventTimeSeries, securityEventTimeSeries_);
      DARABONBA_PTR_TO_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventTimeSeries, securityEventTimeSeries_);
      DARABONBA_PTR_FROM_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    DescribeSecurityEventTimeSeriesMetricResponseBody() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(const DescribeSecurityEventTimeSeriesMetricResponseBody &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(DescribeSecurityEventTimeSeriesMetricResponseBody &&) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTimeSeriesMetricResponseBody() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody& operator=(const DescribeSecurityEventTimeSeriesMetricResponseBody &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBody& operator=(DescribeSecurityEventTimeSeriesMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->securityEventTimeSeries_ == nullptr && return this->timeSeriesMetaData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventTimeSeries Field Functions 
    bool hasSecurityEventTimeSeries() const { return this->securityEventTimeSeries_ != nullptr;};
    void deleteSecurityEventTimeSeries() { this->securityEventTimeSeries_ = nullptr;};
    inline const vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries> & securityEventTimeSeries() const { DARABONBA_PTR_GET_CONST(securityEventTimeSeries_, vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries>) };
    inline vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries> securityEventTimeSeries() { DARABONBA_PTR_GET(securityEventTimeSeries_, vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries>) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setSecurityEventTimeSeries(const vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries> & securityEventTimeSeries) { DARABONBA_PTR_SET_VALUE(securityEventTimeSeries_, securityEventTimeSeries) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setSecurityEventTimeSeries(vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries> && securityEventTimeSeries) { DARABONBA_PTR_SET_RVALUE(securityEventTimeSeries_, securityEventTimeSeries) };


    // timeSeriesMetaData Field Functions 
    bool hasTimeSeriesMetaData() const { return this->timeSeriesMetaData_ != nullptr;};
    void deleteTimeSeriesMetaData() { this->timeSeriesMetaData_ = nullptr;};
    inline const DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData & timeSeriesMetaData() const { DARABONBA_PTR_GET_CONST(timeSeriesMetaData_, DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData timeSeriesMetaData() { DARABONBA_PTR_GET(timeSeriesMetaData_, DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setTimeSeriesMetaData(const DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData & timeSeriesMetaData) { DARABONBA_PTR_SET_VALUE(timeSeriesMetaData_, timeSeriesMetaData) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBody& setTimeSeriesMetaData(DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData && timeSeriesMetaData) { DARABONBA_PTR_SET_RVALUE(timeSeriesMetaData_, timeSeriesMetaData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time series data returned. This operation can return time series for multiple metrics.
    std::shared_ptr<vector<DescribeSecurityEventTimeSeriesMetricResponseBodySecurityEventTimeSeries>> securityEventTimeSeries_ = nullptr;
    // The metadata of the time series data returned.
    std::shared_ptr<DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData> timeSeriesMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
