// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDAUREPORTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDAUREPORTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryDauReportDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDauReportDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDauReportDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryDauReportDataRequest() = default ;
    QueryDauReportDataRequest(const QueryDauReportDataRequest &) = default ;
    QueryDauReportDataRequest(QueryDauReportDataRequest &&) = default ;
    QueryDauReportDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDauReportDataRequest() = default ;
    QueryDauReportDataRequest& operator=(const QueryDauReportDataRequest &) = default ;
    QueryDauReportDataRequest& operator=(QueryDauReportDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->bizRegionId_ == nullptr && this->endDate_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr
        && this->startDate_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline QueryDauReportDataRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QueryDauReportDataRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryDauReportDataRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryDauReportDataRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDauReportDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryDauReportDataRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryDauReportDataRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The ID of the app instance group, which is used to filter data for a specific app instance group. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID. If this parameter is not specified, data is not filtered by app instance group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the business region, which is used to filter report data. You can call the [ListRegions](~~ListRegions~~) operation to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The end time of the statistics period. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The value cannot be earlier than StartDate. The service extracts the calendar day based on `yyyy-MM-dd`. The string does not contain a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> endDate_ {};
    // The page number to query. Explicitly specify a value starting from `1`. If this parameter is not specified, the service processes the request as the first page, but the response may return `0`.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 200. If the specified value is greater than 1,500, the value 1,500 is used.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. Optional. If this parameter is not specified or cannot be recognized, the query defaults to `CloudApp`.
    // 
    // Valid values:
    // 
    // - `CloudApp`: Wuying Cloud App.
    // - `CloudBrowser`: Cloud browser.
    // - `WuyingServer`: Enterprise Edition workstation.
    // - `WuyingWorkstation`: Personal Edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Team Edition Linggou container workstation.
    // - `WuyingWorkstationBusiness`: Dedicated Edition Linggou container workstation.
    // - `AndroidCloud`: Cloud phone.
    // - `AIAgent`: AgentBay (AI agent).
    shared_ptr<string> productType_ {};
    // The start time of the statistics period. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The service extracts the calendar day based on `yyyy-MM-dd`. The date range is inclusive and cannot exceed 180 days. The string does not contain a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
