// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONNECTIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONNECTIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class QueryConnectionReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConnectionReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConnectionReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryConnectionReportRequest() = default ;
    QueryConnectionReportRequest(const QueryConnectionReportRequest &) = default ;
    QueryConnectionReportRequest(QueryConnectionReportRequest &&) = default ;
    QueryConnectionReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConnectionReportRequest() = default ;
    QueryConnectionReportRequest& operator=(const QueryConnectionReportRequest &) = default ;
    QueryConnectionReportRequest& operator=(QueryConnectionReportRequest &&) = default ;
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
    inline QueryConnectionReportRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline QueryConnectionReportRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryConnectionReportRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryConnectionReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryConnectionReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryConnectionReportRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryConnectionReportRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The ID of the app instance group, which is used to filter data for a specified app instance group. You can call [ListAppInstanceGroup](~~ListAppInstanceGroup~~) to obtain the ID. If you do not specify this parameter, data is not filtered by app instance group.
    shared_ptr<string> appInstanceGroupId_ {};
    // The ID of the business region, which is used to filter report data. You can call [ListRegions](~~ListRegions~~) to obtain the ID.
    shared_ptr<string> bizRegionId_ {};
    // The end time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The value cannot be earlier than `StartDate`. The statistical interval includes the start time but excludes the end time. The time span cannot exceed 60 months. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> endDate_ {};
    // The page number to query. We recommend that you explicitly specify a value starting from `1`. If you do not specify this parameter, the service processes the request as the first page, but the response may echo `0`.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 200. If the value exceeds 1,500, it is processed as 1,500.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. **Required**.
    // 
    // Valid values:
    // 
    // - `CloudApp`: Wuying cloud app.
    // - `CloudBrowser`: Cloud browser.
    // - `WuyingServer`: Enterprise edition workstation.
    // - `WuyingWorkstation`: Personal edition Linggou container workstation.
    // - `WuyingWorkstationTeam`: Team edition Linggou container workstation.
    // - `WuyingWorkstationBusiness`: Dedicated edition Linggou container workstation.
    // - `AndroidCloud`: Cloud phone.
    // - `AIAgent`: AgentBay (AI agent).
    shared_ptr<string> productType_ {};
    // The start time of the statistics. **Required**. Format: `yyyy-MM-dd HH:mm:ss`. The statistical interval includes the start time but excludes the end time. The time span cannot exceed 60 months. The string itself does not carry a time zone and is interpreted in the Asia/Shanghai (UTC+8) time zone.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
