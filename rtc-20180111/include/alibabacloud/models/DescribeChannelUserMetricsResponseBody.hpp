// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELUSERMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelUserMetricsResponseBodyMetricDatas.hpp>
#include <alibabacloud/models/DescribeChannelUserMetricsResponseBodyOverallData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelUserMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelUserMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelUserMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelUserMetricsResponseBody() = default ;
    DescribeChannelUserMetricsResponseBody(const DescribeChannelUserMetricsResponseBody &) = default ;
    DescribeChannelUserMetricsResponseBody(DescribeChannelUserMetricsResponseBody &&) = default ;
    DescribeChannelUserMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelUserMetricsResponseBody() = default ;
    DescribeChannelUserMetricsResponseBody& operator=(const DescribeChannelUserMetricsResponseBody &) = default ;
    DescribeChannelUserMetricsResponseBody& operator=(DescribeChannelUserMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricDatas_ != nullptr
        && this->overallData_ != nullptr && this->requestId_ != nullptr; };
    // metricDatas Field Functions 
    bool hasMetricDatas() const { return this->metricDatas_ != nullptr;};
    void deleteMetricDatas() { this->metricDatas_ = nullptr;};
    inline const vector<DescribeChannelUserMetricsResponseBodyMetricDatas> & metricDatas() const { DARABONBA_PTR_GET_CONST(metricDatas_, vector<DescribeChannelUserMetricsResponseBodyMetricDatas>) };
    inline vector<DescribeChannelUserMetricsResponseBodyMetricDatas> metricDatas() { DARABONBA_PTR_GET(metricDatas_, vector<DescribeChannelUserMetricsResponseBodyMetricDatas>) };
    inline DescribeChannelUserMetricsResponseBody& setMetricDatas(const vector<DescribeChannelUserMetricsResponseBodyMetricDatas> & metricDatas) { DARABONBA_PTR_SET_VALUE(metricDatas_, metricDatas) };
    inline DescribeChannelUserMetricsResponseBody& setMetricDatas(vector<DescribeChannelUserMetricsResponseBodyMetricDatas> && metricDatas) { DARABONBA_PTR_SET_RVALUE(metricDatas_, metricDatas) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeChannelUserMetricsResponseBodyOverallData & overallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeChannelUserMetricsResponseBodyOverallData) };
    inline DescribeChannelUserMetricsResponseBodyOverallData overallData() { DARABONBA_PTR_GET(overallData_, DescribeChannelUserMetricsResponseBodyOverallData) };
    inline DescribeChannelUserMetricsResponseBody& setOverallData(const DescribeChannelUserMetricsResponseBodyOverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeChannelUserMetricsResponseBody& setOverallData(DescribeChannelUserMetricsResponseBodyOverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelUserMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeChannelUserMetricsResponseBodyMetricDatas>> metricDatas_ = nullptr;
    std::shared_ptr<DescribeChannelUserMetricsResponseBodyOverallData> overallData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
