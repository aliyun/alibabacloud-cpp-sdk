// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportList, reportList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportList, reportList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomizeReportListResponseBody() = default ;
    DescribeCustomizeReportListResponseBody(const DescribeCustomizeReportListResponseBody &) = default ;
    DescribeCustomizeReportListResponseBody(DescribeCustomizeReportListResponseBody &&) = default ;
    DescribeCustomizeReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportListResponseBody() = default ;
    DescribeCustomizeReportListResponseBody& operator=(const DescribeCustomizeReportListResponseBody &) = default ;
    DescribeCustomizeReportListResponseBody& operator=(DescribeCustomizeReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ReportList& obj) { 
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
      ReportList() = default ;
      ReportList(const ReportList &) = default ;
      ReportList(ReportList &&) = default ;
      ReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportList() = default ;
      ReportList& operator=(const ReportList &) = default ;
      ReportList& operator=(ReportList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->pinnedTime_ == nullptr && this->reportDays_ == nullptr && this->reportEndDate_ == nullptr && this->reportId_ == nullptr && this->reportStartDate_ == nullptr
        && this->reportStatus_ == nullptr && this->reportType_ == nullptr && this->reportVersion_ == nullptr && this->title_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline ReportList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // pinnedTime Field Functions 
      bool hasPinnedTime() const { return this->pinnedTime_ != nullptr;};
      void deletePinnedTime() { this->pinnedTime_ = nullptr;};
      inline int64_t getPinnedTime() const { DARABONBA_PTR_GET_DEFAULT(pinnedTime_, 0L) };
      inline ReportList& setPinnedTime(int64_t pinnedTime) { DARABONBA_PTR_SET_VALUE(pinnedTime_, pinnedTime) };


      // reportDays Field Functions 
      bool hasReportDays() const { return this->reportDays_ != nullptr;};
      void deleteReportDays() { this->reportDays_ = nullptr;};
      inline int32_t getReportDays() const { DARABONBA_PTR_GET_DEFAULT(reportDays_, 0) };
      inline ReportList& setReportDays(int32_t reportDays) { DARABONBA_PTR_SET_VALUE(reportDays_, reportDays) };


      // reportEndDate Field Functions 
      bool hasReportEndDate() const { return this->reportEndDate_ != nullptr;};
      void deleteReportEndDate() { this->reportEndDate_ = nullptr;};
      inline int64_t getReportEndDate() const { DARABONBA_PTR_GET_DEFAULT(reportEndDate_, 0L) };
      inline ReportList& setReportEndDate(int64_t reportEndDate) { DARABONBA_PTR_SET_VALUE(reportEndDate_, reportEndDate) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
      inline ReportList& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportStartDate Field Functions 
      bool hasReportStartDate() const { return this->reportStartDate_ != nullptr;};
      void deleteReportStartDate() { this->reportStartDate_ = nullptr;};
      inline int64_t getReportStartDate() const { DARABONBA_PTR_GET_DEFAULT(reportStartDate_, 0L) };
      inline ReportList& setReportStartDate(int64_t reportStartDate) { DARABONBA_PTR_SET_VALUE(reportStartDate_, reportStartDate) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline ReportList& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline int32_t getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, 0) };
      inline ReportList& setReportType(int32_t reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // reportVersion Field Functions 
      bool hasReportVersion() const { return this->reportVersion_ != nullptr;};
      void deleteReportVersion() { this->reportVersion_ = nullptr;};
      inline string getReportVersion() const { DARABONBA_PTR_GET_DEFAULT(reportVersion_, "") };
      inline ReportList& setReportVersion(string reportVersion) { DARABONBA_PTR_SET_VALUE(reportVersion_, reportVersion) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ReportList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Indicates whether the report is the default report. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<string> isDefault_ {};
      // The timestamp when the report is pinned. Unit: milliseconds.
      shared_ptr<int64_t> pinnedTime_ {};
      // The most recent days for report statistics.
      shared_ptr<int32_t> reportDays_ {};
      // The end date on which the report is sent. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> reportEndDate_ {};
      // The ID of the report.
      shared_ptr<int64_t> reportId_ {};
      // The start date on which the report is sent. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> reportStartDate_ {};
      // The state of the report. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<string> reportStatus_ {};
      // The type of the report. Valid values:
      // 
      // *   **0**: daily report
      // *   **1**: weekly report
      // *   **2**: monthly report
      // *   **3**: report whose statistics are collected in a custom time range
      shared_ptr<int32_t> reportType_ {};
      // The report version.
      shared_ptr<string> reportVersion_ {};
      // The name of the report.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->reportList_ == nullptr
        && this->requestId_ == nullptr; };
    // reportList Field Functions 
    bool hasReportList() const { return this->reportList_ != nullptr;};
    void deleteReportList() { this->reportList_ = nullptr;};
    inline const vector<DescribeCustomizeReportListResponseBody::ReportList> & getReportList() const { DARABONBA_PTR_GET_CONST(reportList_, vector<DescribeCustomizeReportListResponseBody::ReportList>) };
    inline vector<DescribeCustomizeReportListResponseBody::ReportList> getReportList() { DARABONBA_PTR_GET(reportList_, vector<DescribeCustomizeReportListResponseBody::ReportList>) };
    inline DescribeCustomizeReportListResponseBody& setReportList(const vector<DescribeCustomizeReportListResponseBody::ReportList> & reportList) { DARABONBA_PTR_SET_VALUE(reportList_, reportList) };
    inline DescribeCustomizeReportListResponseBody& setReportList(vector<DescribeCustomizeReportListResponseBody::ReportList> && reportList) { DARABONBA_PTR_SET_RVALUE(reportList_, reportList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizeReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The reports.
    shared_ptr<vector<DescribeCustomizeReportListResponseBody::ReportList>> reportList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
