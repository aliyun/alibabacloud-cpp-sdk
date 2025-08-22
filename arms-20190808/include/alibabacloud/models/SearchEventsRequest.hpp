// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    SearchEventsRequest() = default ;
    SearchEventsRequest(const SearchEventsRequest &) = default ;
    SearchEventsRequest(SearchEventsRequest &&) = default ;
    SearchEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEventsRequest() = default ;
    SearchEventsRequest& operator=(const SearchEventsRequest &) = default ;
    SearchEventsRequest& operator=(SearchEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertType_ != nullptr && this->appType_ != nullptr && this->currentPage_ != nullptr && this->endTime_ != nullptr && this->isTrigger_ != nullptr
        && this->pageSize_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline SearchEventsRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline int32_t alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
    inline SearchEventsRequest& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchEventsRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline SearchEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchEventsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isTrigger Field Functions 
    bool hasIsTrigger() const { return this->isTrigger_ != nullptr;};
    void deleteIsTrigger() { this->isTrigger_ = nullptr;};
    inline int32_t isTrigger() const { DARABONBA_PTR_GET_DEFAULT(isTrigger_, 0) };
    inline SearchEventsRequest& setIsTrigger(int32_t isTrigger) { DARABONBA_PTR_SET_VALUE(isTrigger_, isTrigger) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchEventsRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchEventsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the alert rule. You can call the SearchAlertRules operation and view the `Id` parameter in the response. For more information, see [SearchAlertRules](https://help.aliyun.com/document_detail/175825.html).
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // *   `1`: custom alert rules to monitor drill-down data sets
    // *   `3`: custom alert rules to monitor tiled data sets
    // *   `4`: alert rules to monitor the frontend, including the default frontend alert rules
    // *   `5`: alert rules to monitor applications, including the default application alert rules
    // *   `6`: the default frontend alert rules
    // *   `7`: the default application alert rules
    // *   `8`: Tracing Analysis alert rules
    // *   `101`: Prometheus alert rules
    std::shared_ptr<int32_t> alertType_ = nullptr;
    // The type of the application that is associated with the alert rule. Valid values:
    // 
    // *   `TRACE`: application monitoring
    // *   `RETCODE`: frontend monitoring
    std::shared_ptr<string> appType_ = nullptr;
    // The number of the page to return. Default value: `1`.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. Specify a UNIX timestamp of the LONG data type, in milliseconds. The default value is the current time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Specifies whether the alert event is triggered. If you do not set this parameter, all alert events are queried. Valid values:
    // 
    // *   `1`: The event is triggered.
    // *   `0`: The event is not triggered.
    std::shared_ptr<int32_t> isTrigger_ = nullptr;
    // The number of entries to return on each page. Default value: `10`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The process identifier (PID) of the application that is associated with the alert rule.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Specify a UNIX timestamp of the LONG data type, in milliseconds. The default value is 10 minutes before the current time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
