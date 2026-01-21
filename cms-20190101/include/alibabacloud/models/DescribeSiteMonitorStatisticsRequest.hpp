// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    DescribeSiteMonitorStatisticsRequest() = default ;
    DescribeSiteMonitorStatisticsRequest(const DescribeSiteMonitorStatisticsRequest &) = default ;
    DescribeSiteMonitorStatisticsRequest(DescribeSiteMonitorStatisticsRequest &&) = default ;
    DescribeSiteMonitorStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorStatisticsRequest() = default ;
    DescribeSiteMonitorStatisticsRequest& operator=(const DescribeSiteMonitorStatisticsRequest &) = default ;
    DescribeSiteMonitorStatisticsRequest& operator=(DescribeSiteMonitorStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr && this->timeRange_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeSiteMonitorStatisticsRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorStatisticsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteMonitorStatisticsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSiteMonitorStatisticsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline DescribeSiteMonitorStatisticsRequest& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    // The metric name. Valid values:
    // 
    // *   Availability
    // *   ErrorRate
    // *   ResponseTime
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query.
    // 
    // Unit: milliseconds. The default value is 1 hour ahead of the current time.
    shared_ptr<string> startTime_ {};
    // The ID of the site monitoring task.
    // 
    // For more information about how to obtain the ID of a site monitoring task, see [DescribeSiteMonitorList](https://help.aliyun.com/document_detail/115052.html).
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The statistical period.
    // 
    // Unit: minutes. Default value: 1440 (one day). Maximum value: 43200 (30 days).
    shared_ptr<string> timeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
