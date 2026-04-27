// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILDELIVERYMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILDELIVERYMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailDeliveryMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailDeliveryMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrailName, trailName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailDeliveryMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrailName, trailName_);
    };
    DescribeTrailDeliveryMetricDataRequest() = default ;
    DescribeTrailDeliveryMetricDataRequest(const DescribeTrailDeliveryMetricDataRequest &) = default ;
    DescribeTrailDeliveryMetricDataRequest(DescribeTrailDeliveryMetricDataRequest &&) = default ;
    DescribeTrailDeliveryMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailDeliveryMetricDataRequest() = default ;
    DescribeTrailDeliveryMetricDataRequest& operator=(const DescribeTrailDeliveryMetricDataRequest &) = default ;
    DescribeTrailDeliveryMetricDataRequest& operator=(DescribeTrailDeliveryMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->metricName_ == nullptr && this->period_ == nullptr && this->startTime_ == nullptr && this->trailName_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeTrailDeliveryMetricDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeTrailDeliveryMetricDataRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline DescribeTrailDeliveryMetricDataRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTrailDeliveryMetricDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trailName Field Functions 
    bool hasTrailName() const { return this->trailName_ != nullptr;};
    void deleteTrailName() { this->trailName_ = nullptr;};
    inline string getTrailName() const { DARABONBA_PTR_GET_DEFAULT(trailName_, "") };
    inline DescribeTrailDeliveryMetricDataRequest& setTrailName(string trailName) { DARABONBA_PTR_SET_VALUE(trailName_, trailName) };


  protected:
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // This parameter is required.
    shared_ptr<int64_t> period_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<string> trailName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
