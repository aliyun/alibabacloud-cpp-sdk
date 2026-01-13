// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeJobMetricDataResponseBody() = default ;
    DescribeJobMetricDataResponseBody(const DescribeJobMetricDataResponseBody &) = default ;
    DescribeJobMetricDataResponseBody(DescribeJobMetricDataResponseBody &&) = default ;
    DescribeJobMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricDataResponseBody() = default ;
    DescribeJobMetricDataResponseBody& operator=(const DescribeJobMetricDataResponseBody &) = default ;
    DescribeJobMetricDataResponseBody& operator=(DescribeJobMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->period_ == nullptr && this->requestId_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline string getDataPoints() const { DARABONBA_PTR_GET_DEFAULT(dataPoints_, "") };
    inline DescribeJobMetricDataResponseBody& setDataPoints(string dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeJobMetricDataResponseBody& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeJobMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Monitoring statistics points.
    shared_ptr<string> dataPoints_ {};
    // The statistical period of the monitoring data. Valid values: 15, 60, 900, and 3600. Unit: seconds.
    shared_ptr<int32_t> period_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
