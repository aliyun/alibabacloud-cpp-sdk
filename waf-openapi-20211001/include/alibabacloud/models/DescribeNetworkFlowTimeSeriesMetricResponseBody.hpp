// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkFlowTimeSeries, networkFlowTimeSeries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkFlowTimeSeries, networkFlowTimeSeries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeSeriesMetaData, timeSeriesMetaData_);
    };
    DescribeNetworkFlowTimeSeriesMetricResponseBody() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(const DescribeNetworkFlowTimeSeriesMetricResponseBody &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(DescribeNetworkFlowTimeSeriesMetricResponseBody &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricResponseBody() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody& operator=(const DescribeNetworkFlowTimeSeriesMetricResponseBody &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBody& operator=(DescribeNetworkFlowTimeSeriesMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkFlowTimeSeries_ == nullptr
        && return this->requestId_ == nullptr && return this->timeSeriesMetaData_ == nullptr; };
    // networkFlowTimeSeries Field Functions 
    bool hasNetworkFlowTimeSeries() const { return this->networkFlowTimeSeries_ != nullptr;};
    void deleteNetworkFlowTimeSeries() { this->networkFlowTimeSeries_ = nullptr;};
    inline const vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries> & networkFlowTimeSeries() const { DARABONBA_PTR_GET_CONST(networkFlowTimeSeries_, vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries>) };
    inline vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries> networkFlowTimeSeries() { DARABONBA_PTR_GET(networkFlowTimeSeries_, vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries>) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setNetworkFlowTimeSeries(const vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries> & networkFlowTimeSeries) { DARABONBA_PTR_SET_VALUE(networkFlowTimeSeries_, networkFlowTimeSeries) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setNetworkFlowTimeSeries(vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries> && networkFlowTimeSeries) { DARABONBA_PTR_SET_RVALUE(networkFlowTimeSeries_, networkFlowTimeSeries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeSeriesMetaData Field Functions 
    bool hasTimeSeriesMetaData() const { return this->timeSeriesMetaData_ != nullptr;};
    void deleteTimeSeriesMetaData() { this->timeSeriesMetaData_ = nullptr;};
    inline const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData & timeSeriesMetaData() const { DARABONBA_PTR_GET_CONST(timeSeriesMetaData_, DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData timeSeriesMetaData() { DARABONBA_PTR_GET(timeSeriesMetaData_, DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setTimeSeriesMetaData(const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData & timeSeriesMetaData) { DARABONBA_PTR_SET_VALUE(timeSeriesMetaData_, timeSeriesMetaData) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBody& setTimeSeriesMetaData(DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData && timeSeriesMetaData) { DARABONBA_PTR_SET_RVALUE(timeSeriesMetaData_, timeSeriesMetaData) };


  protected:
    // The array of time-series data. Supports returning data with multiple values.
    std::shared_ptr<vector<DescribeNetworkFlowTimeSeriesMetricResponseBodyNetworkFlowTimeSeries>> networkFlowTimeSeries_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metadata of the returned data.
    std::shared_ptr<DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData> timeSeriesMetaData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
