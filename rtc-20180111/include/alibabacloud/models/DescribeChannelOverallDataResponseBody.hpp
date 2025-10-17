// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeChannelOverallDataResponseBodyCallInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChannelOverallDataResponseBodyMetricDatas.hpp>
#include <alibabacloud/models/DescribeChannelOverallDataResponseBodyOverallData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_TO_JSON(OverallData, overallData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(MetricDatas, metricDatas_);
      DARABONBA_PTR_FROM_JSON(OverallData, overallData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelOverallDataResponseBody() = default ;
    DescribeChannelOverallDataResponseBody(const DescribeChannelOverallDataResponseBody &) = default ;
    DescribeChannelOverallDataResponseBody(DescribeChannelOverallDataResponseBody &&) = default ;
    DescribeChannelOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelOverallDataResponseBody() = default ;
    DescribeChannelOverallDataResponseBody& operator=(const DescribeChannelOverallDataResponseBody &) = default ;
    DescribeChannelOverallDataResponseBody& operator=(DescribeChannelOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callInfo_ == nullptr
        && return this->metricDatas_ == nullptr && return this->overallData_ == nullptr && return this->requestId_ == nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeChannelOverallDataResponseBodyCallInfo & callInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeChannelOverallDataResponseBodyCallInfo) };
    inline DescribeChannelOverallDataResponseBodyCallInfo callInfo() { DARABONBA_PTR_GET(callInfo_, DescribeChannelOverallDataResponseBodyCallInfo) };
    inline DescribeChannelOverallDataResponseBody& setCallInfo(const DescribeChannelOverallDataResponseBodyCallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeChannelOverallDataResponseBody& setCallInfo(DescribeChannelOverallDataResponseBodyCallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // metricDatas Field Functions 
    bool hasMetricDatas() const { return this->metricDatas_ != nullptr;};
    void deleteMetricDatas() { this->metricDatas_ = nullptr;};
    inline const vector<DescribeChannelOverallDataResponseBodyMetricDatas> & metricDatas() const { DARABONBA_PTR_GET_CONST(metricDatas_, vector<DescribeChannelOverallDataResponseBodyMetricDatas>) };
    inline vector<DescribeChannelOverallDataResponseBodyMetricDatas> metricDatas() { DARABONBA_PTR_GET(metricDatas_, vector<DescribeChannelOverallDataResponseBodyMetricDatas>) };
    inline DescribeChannelOverallDataResponseBody& setMetricDatas(const vector<DescribeChannelOverallDataResponseBodyMetricDatas> & metricDatas) { DARABONBA_PTR_SET_VALUE(metricDatas_, metricDatas) };
    inline DescribeChannelOverallDataResponseBody& setMetricDatas(vector<DescribeChannelOverallDataResponseBodyMetricDatas> && metricDatas) { DARABONBA_PTR_SET_RVALUE(metricDatas_, metricDatas) };


    // overallData Field Functions 
    bool hasOverallData() const { return this->overallData_ != nullptr;};
    void deleteOverallData() { this->overallData_ = nullptr;};
    inline const DescribeChannelOverallDataResponseBodyOverallData & overallData() const { DARABONBA_PTR_GET_CONST(overallData_, DescribeChannelOverallDataResponseBodyOverallData) };
    inline DescribeChannelOverallDataResponseBodyOverallData overallData() { DARABONBA_PTR_GET(overallData_, DescribeChannelOverallDataResponseBodyOverallData) };
    inline DescribeChannelOverallDataResponseBody& setOverallData(const DescribeChannelOverallDataResponseBodyOverallData & overallData) { DARABONBA_PTR_SET_VALUE(overallData_, overallData) };
    inline DescribeChannelOverallDataResponseBody& setOverallData(DescribeChannelOverallDataResponseBodyOverallData && overallData) { DARABONBA_PTR_SET_RVALUE(overallData_, overallData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeChannelOverallDataResponseBodyCallInfo> callInfo_ = nullptr;
    std::shared_ptr<vector<DescribeChannelOverallDataResponseBodyMetricDatas>> metricDatas_ = nullptr;
    std::shared_ptr<DescribeChannelOverallDataResponseBodyOverallData> overallData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
