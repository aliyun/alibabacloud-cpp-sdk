// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODYREPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODYREPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportListResponseBodyReportList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportListResponseBodyReportList& obj) { 
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_TO_JSON(ReportDays, reportDays_);
      DARABONBA_PTR_TO_JSON(ReportEndDate, reportEndDate_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportStartDate, reportStartDate_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportListResponseBodyReportList& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(PinnedTime, pinnedTime_);
      DARABONBA_PTR_FROM_JSON(ReportDays, reportDays_);
      DARABONBA_PTR_FROM_JSON(ReportEndDate, reportEndDate_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportStartDate, reportStartDate_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeCustomizeReportListResponseBodyReportList() = default ;
    DescribeCustomizeReportListResponseBodyReportList(const DescribeCustomizeReportListResponseBodyReportList &) = default ;
    DescribeCustomizeReportListResponseBodyReportList(DescribeCustomizeReportListResponseBodyReportList &&) = default ;
    DescribeCustomizeReportListResponseBodyReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportListResponseBodyReportList() = default ;
    DescribeCustomizeReportListResponseBodyReportList& operator=(const DescribeCustomizeReportListResponseBodyReportList &) = default ;
    DescribeCustomizeReportListResponseBodyReportList& operator=(DescribeCustomizeReportListResponseBodyReportList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDefault_ != nullptr
        && this->pinnedTime_ != nullptr && this->reportDays_ != nullptr && this->reportEndDate_ != nullptr && this->reportId_ != nullptr && this->reportStartDate_ != nullptr
        && this->reportStatus_ != nullptr && this->reportType_ != nullptr && this->reportVersion_ != nullptr && this->title_ != nullptr; };
    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline DescribeCustomizeReportListResponseBodyReportList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // pinnedTime Field Functions 
    bool hasPinnedTime() const { return this->pinnedTime_ != nullptr;};
    void deletePinnedTime() { this->pinnedTime_ = nullptr;};
    inline int64_t pinnedTime() const { DARABONBA_PTR_GET_DEFAULT(pinnedTime_, 0L) };
    inline DescribeCustomizeReportListResponseBodyReportList& setPinnedTime(int64_t pinnedTime) { DARABONBA_PTR_SET_VALUE(pinnedTime_, pinnedTime) };


    // reportDays Field Functions 
    bool hasReportDays() const { return this->reportDays_ != nullptr;};
    void deleteReportDays() { this->reportDays_ = nullptr;};
    inline int32_t reportDays() const { DARABONBA_PTR_GET_DEFAULT(reportDays_, 0) };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportDays(int32_t reportDays) { DARABONBA_PTR_SET_VALUE(reportDays_, reportDays) };


    // reportEndDate Field Functions 
    bool hasReportEndDate() const { return this->reportEndDate_ != nullptr;};
    void deleteReportEndDate() { this->reportEndDate_ = nullptr;};
    inline int64_t reportEndDate() const { DARABONBA_PTR_GET_DEFAULT(reportEndDate_, 0L) };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportEndDate(int64_t reportEndDate) { DARABONBA_PTR_SET_VALUE(reportEndDate_, reportEndDate) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportStartDate Field Functions 
    bool hasReportStartDate() const { return this->reportStartDate_ != nullptr;};
    void deleteReportStartDate() { this->reportStartDate_ = nullptr;};
    inline int64_t reportStartDate() const { DARABONBA_PTR_GET_DEFAULT(reportStartDate_, 0L) };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportStartDate(int64_t reportStartDate) { DARABONBA_PTR_SET_VALUE(reportStartDate_, reportStartDate) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline int32_t reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, 0) };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportType(int32_t reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportVersion Field Functions 
    bool hasReportVersion() const { return this->reportVersion_ != nullptr;};
    void deleteReportVersion() { this->reportVersion_ = nullptr;};
    inline string reportVersion() const { DARABONBA_PTR_GET_DEFAULT(reportVersion_, "") };
    inline DescribeCustomizeReportListResponseBodyReportList& setReportVersion(string reportVersion) { DARABONBA_PTR_SET_VALUE(reportVersion_, reportVersion) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustomizeReportListResponseBodyReportList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Indicates whether the report is the default report. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<string> isDefault_ = nullptr;
    // The timestamp when the report is pinned. Unit: milliseconds.
    std::shared_ptr<int64_t> pinnedTime_ = nullptr;
    // The most recent days for report statistics.
    std::shared_ptr<int32_t> reportDays_ = nullptr;
    // The end date on which the report is sent. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> reportEndDate_ = nullptr;
    // The ID of the report.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The start date on which the report is sent. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> reportStartDate_ = nullptr;
    // The state of the report. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<string> reportStatus_ = nullptr;
    // The type of the report. Valid values:
    // 
    // *   **0**: daily report
    // *   **1**: weekly report
    // *   **2**: monthly report
    // *   **3**: report whose statistics are collected in a custom time range
    std::shared_ptr<int32_t> reportType_ = nullptr;
    // The report version.
    std::shared_ptr<string> reportVersion_ = nullptr;
    // The name of the report.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
