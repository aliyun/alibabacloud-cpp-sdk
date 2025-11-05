// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeMetricDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggreOps, aggreOps_);
      DARABONBA_PTR_TO_JSON(AggreOverLineOps, aggreOverLineOps_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupByLabels, groupByLabelsShrink_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggreOps, aggreOps_);
      DARABONBA_PTR_FROM_JSON(AggreOverLineOps, aggreOverLineOps_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupByLabels, groupByLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMetricDataShrinkRequest() = default ;
    DescribeMetricDataShrinkRequest(const DescribeMetricDataShrinkRequest &) = default ;
    DescribeMetricDataShrinkRequest(DescribeMetricDataShrinkRequest &&) = default ;
    DescribeMetricDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricDataShrinkRequest() = default ;
    DescribeMetricDataShrinkRequest& operator=(const DescribeMetricDataShrinkRequest &) = default ;
    DescribeMetricDataShrinkRequest& operator=(DescribeMetricDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggreOps_ == nullptr
        && return this->aggreOverLineOps_ == nullptr && return this->dimensions_ == nullptr && return this->endTime_ == nullptr && return this->groupByLabelsShrink_ == nullptr && return this->metricName_ == nullptr
        && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // aggreOps Field Functions 
    bool hasAggreOps() const { return this->aggreOps_ != nullptr;};
    void deleteAggreOps() { this->aggreOps_ = nullptr;};
    inline string aggreOps() const { DARABONBA_PTR_GET_DEFAULT(aggreOps_, "") };
    inline DescribeMetricDataShrinkRequest& setAggreOps(string aggreOps) { DARABONBA_PTR_SET_VALUE(aggreOps_, aggreOps) };


    // aggreOverLineOps Field Functions 
    bool hasAggreOverLineOps() const { return this->aggreOverLineOps_ != nullptr;};
    void deleteAggreOverLineOps() { this->aggreOverLineOps_ = nullptr;};
    inline string aggreOverLineOps() const { DARABONBA_PTR_GET_DEFAULT(aggreOverLineOps_, "") };
    inline DescribeMetricDataShrinkRequest& setAggreOverLineOps(string aggreOverLineOps) { DARABONBA_PTR_SET_VALUE(aggreOverLineOps_, aggreOverLineOps) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricDataShrinkRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupByLabelsShrink Field Functions 
    bool hasGroupByLabelsShrink() const { return this->groupByLabelsShrink_ != nullptr;};
    void deleteGroupByLabelsShrink() { this->groupByLabelsShrink_ = nullptr;};
    inline string groupByLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByLabelsShrink_, "") };
    inline DescribeMetricDataShrinkRequest& setGroupByLabelsShrink(string groupByLabelsShrink) { DARABONBA_PTR_SET_VALUE(groupByLabelsShrink_, groupByLabelsShrink) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricDataShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeMetricDataShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricDataShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Aggregation method over time. Possible values include:
    // 
    // - SUM_OVER_TIME
    // - COUNT_OVER_TIME
    // - AVG_OVER_TIME
    // - MAX_OVER_TIME
    // - MIN_OVER_TIME
    // - SUM_OVER_TIME_LCRO: Sum over a left-closed, right-open interval
    // - AVG_OVER_TIME_LCRO: Average over a left-closed, right-open interval
    // - SUM_OVER_TIME_LORC: Sum over a left-open, right-closed interval
    // - AVG_OVER_TIME_LORC: Average over a left-open, right-closed interval
    std::shared_ptr<string> aggreOps_ = nullptr;
    // Aggregation method between lines. Possible values include:
    // - NON: No aggregation
    // - SUM: Sum
    // - AVG: Average
    // - COUNT: Count
    // - MAX: Maximum
    // - MIN: Minimum
    std::shared_ptr<string> aggreOverLineOps_ = nullptr;
    // The dimension map, in the JSON format. Valid values:
    // 
    // *   DiskId: the disk name. Example: d-xxx.
    // *   DeviceType: the disk type. system indicates the system disk, and data indicates the data disk.
    // *   DeviceCategory: the disk category. Example: cloud_essd.
    // *   EcsInstanceId: the ECS instance name. Example: i-xxx.
    // *   Azone: the zone, such as cn-hangzhou-a.
    // 
    // The returned result is the intersection of all dimension filtering conditions.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The end time point for obtaining metric data. It should not be later than the current moment. Represented according to the ISO 8601 standard, using UTC +0 time, in the format yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> endTime_ = nullptr;
    // The list of fields used for grouping and aggregation.
    std::shared_ptr<string> groupByLabelsShrink_ = nullptr;
    // Metric name. Possible values include:
    //    
    // - disk_bps_percent
    // - disk_iops_percent
    // - disk_read_block_size
    // - disk_read_bps
    // - disk_read_iops
    // - disk_write_block_size
    // - disk_write_bps
    // - disk_write_iops
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The granularity at which data is collected for the metric. Unit: seconds. Default value: 5. Valid values:
    // 
    // *   5: 5 seconds. The query time range can be up to 12 hours.
    // *   10: 10 seconds. The query time range can be up to 24 hours.
    // *   60: 60 seconds. The query time range can be up to 7 days.
    // *   300: 300 seconds. The query time range can be up to 30 days.
    // *   600: 600 seconds. The query time range can be up to 30 days.
    // *   3600: 3,600 seconds. The query time range can be up to 30 days.
    std::shared_ptr<int32_t> period_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. You can specify a point in time that is up to 30 days before the current time. If both StartTime and EndTime are left empty, the monitoring metric data of the most recent statistical period is queried. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
