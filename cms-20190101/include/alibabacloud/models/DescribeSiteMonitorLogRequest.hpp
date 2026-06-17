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
        && this->browserInfo_ == nullptr && this->city_ == nullptr && this->device_ == nullptr && this->endTime_ == nullptr && this->filter_ == nullptr
        && this->isp_ == nullptr && this->length_ == nullptr && this->metricName_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->startTime_ == nullptr && this->taskIds_ == nullptr; };
    // browser Field Functions 
    bool hasBrowser() const { return this->browser_ != nullptr;};
    void deleteBrowser() { this->browser_ = nullptr;};
    inline string getBrowser() const { DARABONBA_PTR_GET_DEFAULT(browser_, "") };
    inline DescribeSiteMonitorLogRequest& setBrowser(string browser) { DARABONBA_PTR_SET_VALUE(browser_, browser) };


    // browserInfo Field Functions 
    bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
    void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
    inline string getBrowserInfo() const { DARABONBA_PTR_GET_DEFAULT(browserInfo_, "") };
    inline DescribeSiteMonitorLogRequest& setBrowserInfo(string browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSiteMonitorLogRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeSiteMonitorLogRequest& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteMonitorLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeSiteMonitorLogRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeSiteMonitorLogRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline DescribeSiteMonitorLogRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeSiteMonitorLogRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSiteMonitorLogRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSiteMonitorLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteMonitorLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string getTaskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline DescribeSiteMonitorLogRequest& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    // The type of the browser.
    shared_ptr<string> browser_ {};
    // This parameter is deprecated. You do not need to specify this parameter.
    shared_ptr<string> browserInfo_ {};
    // The city ID.
    shared_ptr<string> city_ {};
    // The type of the device. This parameter specifies the screen size for impersonation.
    shared_ptr<string> device_ {};
    // The end of the time range to query. The following formats are supported:
    // 
    // - UNIX timestamp: the number of milliseconds that have elapsed since January 1, 1970.
    // 
    // - UTC format: YYYY-MM-DDThh:mm:ssZ.
    // 
    // > Use UNIX timestamps to prevent time zone-related issues.
    shared_ptr<string> endTime_ {};
    // The filter expression for detection results.
    // 
    // Simple expressions are supported. For example, you can use the `TotalTime>100` expression to query the detection data whose total response time exceeds 100 milliseconds.
    shared_ptr<string> filter_ {};
    // The carrier ID.
    shared_ptr<string> isp_ {};
    // The number of entries to return on each page for a paged query. Valid values: 1 to 1440.
    shared_ptr<int32_t> length_ {};
    // The metric.
    // 
    // Only the `ProbeLog` metric is supported.
    shared_ptr<string> metricName_ {};
    // If the response is truncated, use the `NextToken` parameter to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query. The following formats are supported:
    // 
    // - UNIX timestamp: the number of milliseconds that have elapsed since January 1, 1970.
    // 
    // - UTC format: YYYY-MM-DDThh:mm:ssZ.
    // 
    // > * The start time and end time follow the (StartTime, EndTime] pattern. The value of StartTime cannot be the same as or later than the value of EndTime.<br> - Use UNIX timestamps to prevent time zone-related issues.<br>
    shared_ptr<string> startTime_ {};
    // The ID of the detection task. You can specify multiple task IDs. Separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
