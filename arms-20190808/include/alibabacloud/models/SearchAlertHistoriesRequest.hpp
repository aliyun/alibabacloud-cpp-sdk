// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertHistoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertHistoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertHistoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    SearchAlertHistoriesRequest() = default ;
    SearchAlertHistoriesRequest(const SearchAlertHistoriesRequest &) = default ;
    SearchAlertHistoriesRequest(SearchAlertHistoriesRequest &&) = default ;
    SearchAlertHistoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertHistoriesRequest() = default ;
    SearchAlertHistoriesRequest& operator=(const SearchAlertHistoriesRequest &) = default ;
    SearchAlertHistoriesRequest& operator=(SearchAlertHistoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertType_ != nullptr && this->currentPage_ != nullptr && this->endTime_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->startTime_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline SearchAlertHistoriesRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline int32_t alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
    inline SearchAlertHistoriesRequest& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline SearchAlertHistoriesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchAlertHistoriesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAlertHistoriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchAlertHistoriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchAlertHistoriesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the alert rule. You can call the SearchAlertRules operation and view the `Id` parameter in the response. For more information, see [SearchAlertRules](https://help.aliyun.com/document_detail/175825.html).
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // *   `1`: a custom alert rule that is used to monitor drill-down data sets
    // *   `3`: a custom alert rule that is used to monitor tiled data sets
    // *   `4`: an alert rule that is used to monitor web pages, including the default alert rule for browser monitoring
    // *   `5`: an alert rule that is used to monitor applications, including the default alert rule for application monitoring
    // *   `6`: the default alert rule for browser monitoring
    // *   `7`: the default alert rule for application monitoring
    // *   `8`: a Tracing Analysis alert rule
    // *   `101`: a Prometheus alert rule
    std::shared_ptr<int32_t> alertType_ = nullptr;
    // The number of the page to return. Default value: `1`.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp of the LONG data type. Unit: milliseconds. The default value is the current time.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of entries to return on each page. Default value: `10`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region. Default value: `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp of the LONG data type. Unit: milliseconds. The default value is 10 minutes before the current time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
