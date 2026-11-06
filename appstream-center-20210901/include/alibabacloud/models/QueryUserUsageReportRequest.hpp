// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERUSAGEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERUSAGEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryUserUsageReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserUsageReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserUsageReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryUserUsageReportRequest() = default ;
    QueryUserUsageReportRequest(const QueryUserUsageReportRequest &) = default ;
    QueryUserUsageReportRequest(QueryUserUsageReportRequest &&) = default ;
    QueryUserUsageReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserUsageReportRequest() = default ;
    QueryUserUsageReportRequest& operator=(const QueryUserUsageReportRequest &) = default ;
    QueryUserUsageReportRequest& operator=(QueryUserUsageReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->bizRegionId_ == nullptr && this->connectionStatus_ == nullptr && this->endDate_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->productType_ == nullptr && this->startDate_ == nullptr && this->userId_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QueryUserUsageReportRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QueryUserUsageReportRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline QueryUserUsageReportRequest& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryUserUsageReportRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryUserUsageReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryUserUsageReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryUserUsageReportRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryUserUsageReportRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserUsageReportRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the app instance group. This parameter is used to filter data for a specified app instance group. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID. If you do not specify this parameter, data is not filtered by app instance group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the business region. This parameter is used to filter report data. You can call the [ListRegions](~~ListRegions~~) operation to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The filter condition for the user connection status. The value is not case-sensitive. An unrecognized value is equivalent to not filtering by connection status.
    // 
    // Valid values:
    // 
    // - `Connected`: At least one currently connected session exists.
    // - `Disconnected`: The session binding is retained, but no currently connected session exists.
    // - `Unbound`: No session binding exists.
    shared_ptr<string> connectionStatus_ {};
    // The end time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The end time cannot be earlier than StartDate. The service converts the time to `yyyyMMdd` and calculates the statistics by natural days in a closed interval. The hours, minutes, and seconds are not involved in the day-level filtering. The time span cannot exceed 60 months. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
    shared_ptr<string> endDate_ {};
    // The page number to query. Specify a value starting from 1. If you do not specify this parameter, the service processes the request as the first page, but the response may return 0.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 200. If the value is greater than 1,500, it is processed as 1,500.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. **Required**.
    // 
    // Valid values:
    // 
    // - `CloudApp`: WUYING Cloud App.
    // - `CloudBrowser`: Cloud Browser.
    // - `WuyingServer`: Enterprise Edition workstation.
    // - `WuyingWorkstation`: Personal Edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Team Edition Linggou container workstation.
    // - `WuyingWorkstationBusiness`: Dedicated Edition Linggou container workstation.
    // - `AndroidCloud`: Cloud Phone.
    // - `AIAgent`: AgentBay (AI agent).
    shared_ptr<string> productType_ {};
    // The start time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The service converts the time to `yyyyMMdd` and calculates the statistics by natural days in a closed interval. The hours, minutes, and seconds are not involved in the day-level filtering. The time span cannot exceed 60 months. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
    shared_ptr<string> startDate_ {};
    // The ID of the end user. This parameter is used to accurately filter users. If you do not specify this parameter, data is not filtered by user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
