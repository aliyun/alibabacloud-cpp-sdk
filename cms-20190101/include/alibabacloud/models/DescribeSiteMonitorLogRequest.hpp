// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Browser, browser_);
      DARABONBA_PTR_TO_JSON(BrowserInfo, browserInfo_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Browser, browser_);
      DARABONBA_PTR_FROM_JSON(BrowserInfo, browserInfo_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    DescribeSiteMonitorLogRequest() = default ;
    DescribeSiteMonitorLogRequest(const DescribeSiteMonitorLogRequest &) = default ;
    DescribeSiteMonitorLogRequest(DescribeSiteMonitorLogRequest &&) = default ;
    DescribeSiteMonitorLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorLogRequest() = default ;
    DescribeSiteMonitorLogRequest& operator=(const DescribeSiteMonitorLogRequest &) = default ;
    DescribeSiteMonitorLogRequest& operator=(DescribeSiteMonitorLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browser_ == nullptr
        && return this->browserInfo_ == nullptr && return this->city_ == nullptr && return this->device_ == nullptr && return this->endTime_ == nullptr && return this->filter_ == nullptr
        && return this->isp_ == nullptr && return this->length_ == nullptr && return this->metricName_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr
        && return this->startTime_ == nullptr && return this->taskIds_ == nullptr; };
    // browser Field Functions 
    bool hasBrowser() const { return this->browser_ != nullptr;};
    void deleteBrowser() { this->browser_ = nullptr;};
    inline string browser() const { DARABONBA_PTR_GET_DEFAULT(browser_, "") };
    inline DescribeSiteMonitorLogRequest& setBrowser(string browser) { DARABONBA_PTR_SET_VALUE(browser_, browser) };


    // browserInfo Field Functions 
    bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
    void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
    inline string browserInfo() const { DARABONBA_PTR_GET_DEFAULT(browserInfo_, "") };
    inline DescribeSiteMonitorLogRequest& setBrowserInfo(string browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSiteMonitorLogRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeSiteMonitorLogRequest& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteMonitorLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeSiteMonitorLogRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSiteMonitorLogRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline DescribeSiteMonitorLogRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeSiteMonitorLogRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSiteMonitorLogRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteMonitorLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string taskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DescribeSiteMonitorLogRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    std::shared_ptr<string> browser_ = nullptr;
    std::shared_ptr<string> browserInfo_ = nullptr;
    // The city identification code.
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> device_ = nullptr;
    // The end of the time range to query. Valid values:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   UTC time: the UTC time that follows the YYYY-MM-DDThh:mm:ssZ format
    // 
    // >  We recommend that you use UNIX timestamps to prevent time zone-related issues.
    std::shared_ptr<string> endTime_ = nullptr;
    // The filter condition.
    // 
    // You can specify a simple expression, for example, `TotalTime>100`. In this case, the operation returns only the data for instant test tasks whose total response time exceeds 100 milliseconds.
    std::shared_ptr<string> filter_ = nullptr;
    // The carrier identification code.
    std::shared_ptr<string> isp_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 1440.
    std::shared_ptr<int32_t> length_ = nullptr;
    // The name of the metric.
    // 
    // Only the `ProbeLog` metric is supported.
    std::shared_ptr<string> metricName_ = nullptr;
    // The token that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.``
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The start of the time range to query. The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   UTC time: the UTC time that follows the YYYY-MM-DDThh:mm:ssZ format
    // 
    // > 
    // 
    // *   The specified time range includes the end time and excludes the start time. The start time must be earlier than the end time.\\
    //     We recommend that you use UNIX timestamps to prevent time zone-related issues.
    std::shared_ptr<string> startTime_ = nullptr;
    // The IDs of the instant test tasks. Separate multiple task IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
