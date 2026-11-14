// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSESSIONREPORTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSESSIONREPORTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QuerySessionReportDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySessionReportDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StatDateType, statDateType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySessionReportDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StatDateType, statDateType_);
    };
    QuerySessionReportDataRequest() = default ;
    QuerySessionReportDataRequest(const QuerySessionReportDataRequest &) = default ;
    QuerySessionReportDataRequest(QuerySessionReportDataRequest &&) = default ;
    QuerySessionReportDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySessionReportDataRequest() = default ;
    QuerySessionReportDataRequest& operator=(const QuerySessionReportDataRequest &) = default ;
    QuerySessionReportDataRequest& operator=(QuerySessionReportDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->bizRegionId_ == nullptr && this->endDate_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr
        && this->startDate_ == nullptr && this->statDateType_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QuerySessionReportDataRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QuerySessionReportDataRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QuerySessionReportDataRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QuerySessionReportDataRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySessionReportDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QuerySessionReportDataRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QuerySessionReportDataRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statDateType Field Functions 
    bool hasStatDateType() const { return this->statDateType_ != nullptr;};
    void deleteStatDateType() { this->statDateType_ = nullptr;};
    inline string getStatDateType() const { DARABONBA_PTR_GET_DEFAULT(statDateType_, "") };
    inline QuerySessionReportDataRequest& setStatDateType(string statDateType) { DARABONBA_PTR_SET_VALUE(statDateType_, statDateType) };


  protected:
    // The ID of the app instance group, which is used to filter data for a specified app instance group. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID. If you do not specify this parameter, data is not filtered by app instance group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the business region, which is used to filter report data. You can call the [ListRegions](~~ListRegions~~) operation to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The end time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The end time cannot be earlier than `StartDate`. The query span must meet the limits corresponding to `StatDateType`. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
    shared_ptr<string> endDate_ {};
    // The page number to query. We recommend that you explicitly specify a value starting from `1`. If you do not specify this parameter, the service processes the request as the first page, but the response may return `0`.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 200. If the value exceeds 1,500, it is processed as 1,500.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. Optional. If you do not specify this parameter, data is queried based on the Wuying Cloud App scope.
    // 
    // Specify the value in the exact case as follows. Data that cannot be matched is not returned.
    // 
    // Valid values:
    // 
    // - `CloudApp`: Wuying Cloud App.
    // - `CloudBrowser`: Cloud Browser.
    // - `WuyingServer`: Enterprise Edition workstation.
    // - `WuyingWorkstation`: Personal Edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Team Edition Linggou container workstation.
    // - `WuyingWorkstationBusiness`: Dedicated Edition Linggou container workstation.
    // - `AndroidCloud`: Cloud Phone.
    // - `AIAgent`: AgentBay (AI agent).
    shared_ptr<string> productType_ {};
    // The start time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The `1d` granularity aggregates data by date, while other granularities are accurate to the minute. The query includes both the start and end boundaries. The string itself does not carry a time zone and is interpreted as Asia/Shanghai (UTC+8).
    shared_ptr<string> startDate_ {};
    // The statistical granularity. **Required**.
    // 
    // Valid values:
    // 
    // - `1m`: aggregates data by 1 minute. The maximum query span is 1 day.
    // - `30m`: aggregates data by 30 minutes. The maximum query span is 1 day.
    // - `6h`: aggregates data by 6 hours. The maximum query span is 15 days.
    // - `1d`: aggregates data by day. The maximum query span is 180 days.
    shared_ptr<string> statDateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
