// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(IsOverseas, isOverseas_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(IsOverseas, isOverseas_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnReportRequest() = default ;
    DescribeDcdnReportRequest(const DescribeDcdnReportRequest &) = default ;
    DescribeDcdnReportRequest(DescribeDcdnReportRequest &&) = default ;
    DescribeDcdnReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnReportRequest() = default ;
    DescribeDcdnReportRequest& operator=(const DescribeDcdnReportRequest &) = default ;
    DescribeDcdnReportRequest& operator=(DescribeDcdnReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->httpCode_ == nullptr && this->isOverseas_ == nullptr && this->reportId_ == nullptr
        && this->startTime_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDcdnReportRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnReportRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline DescribeDcdnReportRequest& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // isOverseas Field Functions 
    bool hasIsOverseas() const { return this->isOverseas_ != nullptr;};
    void deleteIsOverseas() { this->isOverseas_ = nullptr;};
    inline string getIsOverseas() const { DARABONBA_PTR_GET_DEFAULT(isOverseas_, "") };
    inline DescribeDcdnReportRequest& setIsOverseas(string isOverseas) { DARABONBA_PTR_SET_VALUE(isOverseas_, isOverseas) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeDcdnReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The region. You can call the [DescribeDcdnRegionAndIsp](https://help.aliyun.com/document_detail/207199.html) operation to query regions.
    // 
    // *   If you do not specify a region, data in all regions is queried.
    // *   If you specify a region, data in the specified region is returned. You can specify one or more regions. Separate regions with commas (,).
    shared_ptr<string> area_ {};
    // The domain names that you want to query. Separate domain names with commas (,).
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: HTTP 2xx status codes
    // *   **3xx**: HTTP 3xx status codes
    // *   **4xx**: HTTP 4xx status codes
    // *   **5xx**: HTTP 5xx status codes
    // 
    // If you do not specify an HTTP status code, data for all preceding HTTP status codes is queried.
    shared_ptr<string> httpCode_ {};
    // Specify whether the region is outside the Chinese mainland. Valid values:
    // 
    // *   **1**: outside the Chinese mainland
    // *   **0**: inside the Chinese mainland
    shared_ptr<string> isOverseas_ {};
    // The ID of the operations report that you want to query. You can enter only one ID in each call. You can call the [DescribeDcdnSubList](https://help.aliyun.com/document_detail/270075.html) operation to query report IDs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reportId_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
