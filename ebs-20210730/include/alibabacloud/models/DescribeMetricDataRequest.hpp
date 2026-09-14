// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggreOps, aggreOps_);
      DARABONBA_PTR_TO_JSON(AggreOverLineOps, aggreOverLineOps_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupByLabels, groupByLabels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggreOps, aggreOps_);
      DARABONBA_PTR_FROM_JSON(AggreOverLineOps, aggreOverLineOps_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupByLabels, groupByLabels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMetricDataRequest() = default ;
    DescribeMetricDataRequest(const DescribeMetricDataRequest &) = default ;
    DescribeMetricDataRequest(DescribeMetricDataRequest &&) = default ;
    DescribeMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricDataRequest() = default ;
    DescribeMetricDataRequest& operator=(const DescribeMetricDataRequest &) = default ;
    DescribeMetricDataRequest& operator=(DescribeMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggreOps_ == nullptr
        && this->aggreOverLineOps_ == nullptr && this->dimensions_ == nullptr && this->endTime_ == nullptr && this->groupByLabels_ == nullptr && this->metricName_ == nullptr
        && this->period_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // aggreOps Field Functions 
    bool hasAggreOps() const { return this->aggreOps_ != nullptr;};
    void deleteAggreOps() { this->aggreOps_ = nullptr;};
    inline string getAggreOps() const { DARABONBA_PTR_GET_DEFAULT(aggreOps_, "") };
    inline DescribeMetricDataRequest& setAggreOps(string aggreOps) { DARABONBA_PTR_SET_VALUE(aggreOps_, aggreOps) };


    // aggreOverLineOps Field Functions 
    bool hasAggreOverLineOps() const { return this->aggreOverLineOps_ != nullptr;};
    void deleteAggreOverLineOps() { this->aggreOverLineOps_ = nullptr;};
    inline string getAggreOverLineOps() const { DARABONBA_PTR_GET_DEFAULT(aggreOverLineOps_, "") };
    inline DescribeMetricDataRequest& setAggreOverLineOps(string aggreOverLineOps) { DARABONBA_PTR_SET_VALUE(aggreOverLineOps_, aggreOverLineOps) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricDataRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupByLabels Field Functions 
    bool hasGroupByLabels() const { return this->groupByLabels_ != nullptr;};
    void deleteGroupByLabels() { this->groupByLabels_ = nullptr;};
    inline const vector<string> & getGroupByLabels() const { DARABONBA_PTR_GET_CONST(groupByLabels_, vector<string>) };
    inline vector<string> getGroupByLabels() { DARABONBA_PTR_GET(groupByLabels_, vector<string>) };
    inline DescribeMetricDataRequest& setGroupByLabels(const vector<string> & groupByLabels) { DARABONBA_PTR_SET_VALUE(groupByLabels_, groupByLabels) };
    inline DescribeMetricDataRequest& setGroupByLabels(vector<string> && groupByLabels) { DARABONBA_PTR_SET_RVALUE(groupByLabels_, groupByLabels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricDataRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeMetricDataRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The method for aggregating data over time. Valid values:
    // 
    // - SUM_OVER_TIME
    // - COUNT_OVER_TIME
    // - AVG_OVER_TIME
    // - MAX_OVER_TIME
    // - MIN_OVER_TIME
    // - SUM_OVER_TIME_LCRO: The sum of values in a left-closed, right-open interval.
    // - AVG_OVER_TIME_LCRO: The average of values in a left-closed, right-open interval.
    // - SUM_OVER_TIME_LORC: The sum of values in a left-open, right-closed interval.
    // - AVG_OVER_TIME_LORC: The average of values in a left-open, right-closed interval.
    shared_ptr<string> aggreOps_ {};
    // The method for aggregating data across different lines. Valid values:
    // 
    // - NON: No aggregation is performed.
    // - SUM: The sum of values.
    // - AVG: The average of values.
    // - COUNT: The number of values.
    // - MAX: The maximum value.
    // - MIN: The minimum value.
    shared_ptr<string> aggreOverLineOps_ {};
    // A map of dimensions in the JSON format. The map specifies the dimensions to query. The following keys are supported:
    // 
    // - DiskId: The disk name, such as d-xxx.
    // - DeviceType: The disk category. \\`system\\` indicates a system disk and \\`data\\` indicates a data disk.
    // - DeviceCategory: The disk type, such as cloud_essd.
    // - EcsInstanceId: The name of the ECS instance to which the disk is attached, such as i-xxx.
    // - Azone: The zone, such as cn-hangzhou-a.
    // 
    // The returned results are the intersection of all specified dimension-based filter conditions.
    shared_ptr<string> dimensions_ {};
    // The end of the time range to query metric data. The time cannot be later than the current time. The time must be in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // A list of fields for grouping and aggregation.
    shared_ptr<vector<string>> groupByLabels_ {};
    // The name of the metric. Valid values:
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
    shared_ptr<string> metricName_ {};
    // The interval at which to query metric data. Unit: seconds. The default value is 5. Valid values:
    // 
    // - 5: 5-second precision. You can query data within a 12-hour time range.
    // - 10: 10-second precision. You can query data within a 24-hour time range.
    // - 60: 60-second precision. You can query data within a 7-day time range.
    // - 300: 300-second precision. You can query data within a 30-day time range.
    // - 600: 600-second precision. You can query data within a 30-day time range.
    // - 3600: 3600-second precision. You can query data within a 30-day time range.
    shared_ptr<int32_t> period_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query metric data. The start time can be up to 30 days before the current time. If you leave both the StartTime and EndTime parameters empty, the system queries the metrics for the most recent period. The time must be in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
