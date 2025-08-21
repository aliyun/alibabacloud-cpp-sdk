// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(IsOverseas, isOverseas_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(IsOverseas, isOverseas_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCdnReportRequest() = default ;
    DescribeCdnReportRequest(const DescribeCdnReportRequest &) = default ;
    DescribeCdnReportRequest(DescribeCdnReportRequest &&) = default ;
    DescribeCdnReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportRequest() = default ;
    DescribeCdnReportRequest& operator=(const DescribeCdnReportRequest &) = default ;
    DescribeCdnReportRequest& operator=(DescribeCdnReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->area_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->httpCode_ != nullptr && this->isOverseas_ != nullptr && this->reportId_ != nullptr
        && this->startTime_ != nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeCdnReportRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnReportRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCdnReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline DescribeCdnReportRequest& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // isOverseas Field Functions 
    bool hasIsOverseas() const { return this->isOverseas_ != nullptr;};
    void deleteIsOverseas() { this->isOverseas_ = nullptr;};
    inline string isOverseas() const { DARABONBA_PTR_GET_DEFAULT(isOverseas_, "") };
    inline DescribeCdnReportRequest& setIsOverseas(string isOverseas) { DARABONBA_PTR_SET_VALUE(isOverseas_, isOverseas) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCdnReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCdnReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The region. You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions.
    // 
    // *   If you do not specify a region, data in all regions is queried.
    // *   If you specify a region, data in the specified region is queried. You can specify one or more regions. If you specify multiple regions, separate the regions with commas (,).
    std::shared_ptr<string> area_ = nullptr;
    // The domain name that you want to query. Separate domain names with commas (,).
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**
    // *   **3xx**
    // *   **4xx**
    // *   **5xx**
    // 
    // If you do not specify this parameter, all HTTP status codes are queried.
    std::shared_ptr<string> httpCode_ = nullptr;
    // Specifies whether the region is outside the Chinese mainland. Valid values:
    // 
    // *   **1**: outside the Chinese mainland
    // *   **0**: inside the Chinese mainland
    std::shared_ptr<string> isOverseas_ = nullptr;
    // The ID of the operations report that you want to query. You can specify only one ID in each request. You can call the [DescribeCdnSubList](https://help.aliyun.com/document_detail/271655.html) operation to query report IDs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
