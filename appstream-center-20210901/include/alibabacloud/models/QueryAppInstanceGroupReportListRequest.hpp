// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPINSTANCEGROUPREPORTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPINSTANCEGROUPREPORTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryAppInstanceGroupReportListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppInstanceGroupReportListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StatDate, statDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppInstanceGroupReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StatDate, statDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryAppInstanceGroupReportListRequest() = default ;
    QueryAppInstanceGroupReportListRequest(const QueryAppInstanceGroupReportListRequest &) = default ;
    QueryAppInstanceGroupReportListRequest(QueryAppInstanceGroupReportListRequest &&) = default ;
    QueryAppInstanceGroupReportListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppInstanceGroupReportListRequest() = default ;
    QueryAppInstanceGroupReportListRequest& operator=(const QueryAppInstanceGroupReportListRequest &) = default ;
    QueryAppInstanceGroupReportListRequest& operator=(QueryAppInstanceGroupReportListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->bizRegionId_ == nullptr && this->endDate_ == nullptr && this->endUserId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr && this->statDate_ == nullptr && this->status_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QueryAppInstanceGroupReportListRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline QueryAppInstanceGroupReportListRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QueryAppInstanceGroupReportListRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryAppInstanceGroupReportListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline QueryAppInstanceGroupReportListRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryAppInstanceGroupReportListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAppInstanceGroupReportListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryAppInstanceGroupReportListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryAppInstanceGroupReportListRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statDate Field Functions 
    bool hasStatDate() const { return this->statDate_ != nullptr;};
    void deleteStatDate() { this->statDate_ = nullptr;};
    inline string getStatDate() const { DARABONBA_PTR_GET_DEFAULT(statDate_, "") };
    inline QueryAppInstanceGroupReportListRequest& setStatDate(string statDate) { DARABONBA_PTR_SET_VALUE(statDate_, statDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline QueryAppInstanceGroupReportListRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline QueryAppInstanceGroupReportListRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The filter condition for the app instance group ID, which matches the exact ID. If this parameter is not specified, the results are not filtered by ID. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the ID.
    shared_ptr<string> appInstanceGroupId_ {};
    // The filter condition for the app instance group name, which supports inclusion matching. If this parameter is not specified, the results are not filtered by name.
    shared_ptr<string> appInstanceGroupName_ {};
    // The ID of the business region to which the app instance group belongs. You can call [ListRegions](~~ListRegions~~) to obtain the ID. If this parameter is not specified, the results are not filtered by business region.
    shared_ptr<string> bizRegionId_ {};
    // The end date of the statistics. Format: `yyyyMMdd`. This parameter must be specified in pairs with `StartDate` and cannot be earlier than the start date. The string itself does not carry a time zone and is interpreted as a natural date in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> endDate_ {};
    // The ID of the end user, which is used to filter app instance groups based on the current valid authorization relationship. Before the call, make sure that the user has at least one valid authorization. If no valid authorization exists, the current version does not narrow down the results based on this parameter. If this parameter is not specified, the results are not filtered by user.
    shared_ptr<string> endUserId_ {};
    // The page number to query. Specify a value starting from `1`. If this parameter is not specified, the service processes the request as the first page, but the response may return `0`.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 200. The current operation does not have an additional upper limit for a single page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID for OpenAPI access, which is used for request authentication and routing. To filter business data by region, use `BizRegionId`.
    shared_ptr<string> regionId_ {};
    // The start date of the statistics. Format: `yyyyMMdd`. This parameter must be specified in pairs with `EndDate`, and the interval includes the start and end dates. The string itself does not carry a time zone and is interpreted as a natural date in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> startDate_ {};
    // The statistical date for a single day. Format: `yyyyMMdd`. If this parameter is specified along with `StartDate` and `EndDate`, the results must meet both the single-day and interval conditions. The string itself does not carry a time zone and is interpreted as a natural date in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> statDate_ {};
    // The list of app instance group statuses. Multiple values have an OR relationship. Unrecognized values do not participate in filtering. If all values are unrecognized, the results are not filtered by status.
    // 
    // Valid values:
    // 
    // - `DEPLOYING`: Deploying.
    // - `DEPLOYED`: Deployed but not published.
    // - `PUBLISHED`: Published and available to provide services based on the current configurations.
    // - `STOPPING`: Stopping.
    // - `STOPPED`: Stopped.
    // - `MAINTAINING`: Maintaining.
    // - `FAILED`: Deployment or running failed.
    // - `MAINTAIN_FAILED`: Maintenance failed.
    // - `DELETING`: Deleting.
    // - `DELETED`: Deleted.
    shared_ptr<vector<string>> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
