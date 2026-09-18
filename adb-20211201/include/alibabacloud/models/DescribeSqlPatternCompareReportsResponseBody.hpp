// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternCompareReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternCompareReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternCompareReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSqlPatternCompareReportsResponseBody() = default ;
    DescribeSqlPatternCompareReportsResponseBody(const DescribeSqlPatternCompareReportsResponseBody &) = default ;
    DescribeSqlPatternCompareReportsResponseBody(DescribeSqlPatternCompareReportsResponseBody &&) = default ;
    DescribeSqlPatternCompareReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternCompareReportsResponseBody() = default ;
    DescribeSqlPatternCompareReportsResponseBody& operator=(const DescribeSqlPatternCompareReportsResponseBody &) = default ;
    DescribeSqlPatternCompareReportsResponseBody& operator=(DescribeSqlPatternCompareReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CancelAvailable, cancelAvailable_);
        DARABONBA_PTR_TO_JSON(CompareEndTime, compareEndTime_);
        DARABONBA_PTR_TO_JSON(CompareStartTime, compareStartTime_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(DetailEnabled, detailEnabled_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(ReportTypeName, reportTypeName_);
        DARABONBA_PTR_TO_JSON(RowNumber, rowNumber_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CancelAvailable, cancelAvailable_);
        DARABONBA_PTR_FROM_JSON(CompareEndTime, compareEndTime_);
        DARABONBA_PTR_FROM_JSON(CompareStartTime, compareStartTime_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(DetailEnabled, detailEnabled_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(ReportTypeName, reportTypeName_);
        DARABONBA_PTR_FROM_JSON(RowNumber, rowNumber_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cancelAvailable_ == nullptr
        && this->compareEndTime_ == nullptr && this->compareStartTime_ == nullptr && this->createdAt_ == nullptr && this->detailEnabled_ == nullptr && this->endTime_ == nullptr
        && this->reportId_ == nullptr && this->reportType_ == nullptr && this->reportTypeName_ == nullptr && this->rowNumber_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
      // cancelAvailable Field Functions 
      bool hasCancelAvailable() const { return this->cancelAvailable_ != nullptr;};
      void deleteCancelAvailable() { this->cancelAvailable_ = nullptr;};
      inline bool getCancelAvailable() const { DARABONBA_PTR_GET_DEFAULT(cancelAvailable_, false) };
      inline Items& setCancelAvailable(bool cancelAvailable) { DARABONBA_PTR_SET_VALUE(cancelAvailable_, cancelAvailable) };


      // compareEndTime Field Functions 
      bool hasCompareEndTime() const { return this->compareEndTime_ != nullptr;};
      void deleteCompareEndTime() { this->compareEndTime_ = nullptr;};
      inline string getCompareEndTime() const { DARABONBA_PTR_GET_DEFAULT(compareEndTime_, "") };
      inline Items& setCompareEndTime(string compareEndTime) { DARABONBA_PTR_SET_VALUE(compareEndTime_, compareEndTime) };


      // compareStartTime Field Functions 
      bool hasCompareStartTime() const { return this->compareStartTime_ != nullptr;};
      void deleteCompareStartTime() { this->compareStartTime_ = nullptr;};
      inline string getCompareStartTime() const { DARABONBA_PTR_GET_DEFAULT(compareStartTime_, "") };
      inline Items& setCompareStartTime(string compareStartTime) { DARABONBA_PTR_SET_VALUE(compareStartTime_, compareStartTime) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // detailEnabled Field Functions 
      bool hasDetailEnabled() const { return this->detailEnabled_ != nullptr;};
      void deleteDetailEnabled() { this->detailEnabled_ = nullptr;};
      inline bool getDetailEnabled() const { DARABONBA_PTR_GET_DEFAULT(detailEnabled_, false) };
      inline Items& setDetailEnabled(bool detailEnabled) { DARABONBA_PTR_SET_VALUE(detailEnabled_, detailEnabled) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
      inline Items& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Items& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // reportTypeName Field Functions 
      bool hasReportTypeName() const { return this->reportTypeName_ != nullptr;};
      void deleteReportTypeName() { this->reportTypeName_ = nullptr;};
      inline string getReportTypeName() const { DARABONBA_PTR_GET_DEFAULT(reportTypeName_, "") };
      inline Items& setReportTypeName(string reportTypeName) { DARABONBA_PTR_SET_VALUE(reportTypeName_, reportTypeName) };


      // rowNumber Field Functions 
      bool hasRowNumber() const { return this->rowNumber_ != nullptr;};
      void deleteRowNumber() { this->rowNumber_ = nullptr;};
      inline int32_t getRowNumber() const { DARABONBA_PTR_GET_DEFAULT(rowNumber_, 0) };
      inline Items& setRowNumber(int32_t rowNumber) { DARABONBA_PTR_SET_VALUE(rowNumber_, rowNumber) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the report can be canceled. The value is true when the report is in the PENDING or RUNNING state.
      shared_ptr<bool> cancelAvailable_ {};
      // The end time of time range 2. The time is in the yyyy-MM-ddTHH:mmZ UTC format.
      shared_ptr<string> compareEndTime_ {};
      // The start time of time range 2. The time is in the yyyy-MM-ddTHH:mmZ UTC format.
      shared_ptr<string> compareStartTime_ {};
      // The time when the report was created. The time is in the yyyy-MM-ddTHH:mmZ UTC format.
      shared_ptr<string> createdAt_ {};
      // Indicates whether report details can be queried. The value is true when the report is in the SUCCESS state.
      shared_ptr<bool> detailEnabled_ {};
      // The end time of time range 1. The time is in the yyyy-MM-ddTHH:mmZ UTC format.
      shared_ptr<string> endTime_ {};
      // The ID of the SQL Pattern comparison report.
      shared_ptr<int64_t> reportId_ {};
      // The report type. Valid values:
      // 
      // - `NEW`: new patterns.
      // - `CHANGED`: patterns with increased metrics.
      shared_ptr<string> reportType_ {};
      // The name of the report type.
      shared_ptr<string> reportTypeName_ {};
      // The sequence number in the current sorted result. The value starts from 1.
      shared_ptr<int32_t> rowNumber_ {};
      // The start time of time range 1. The time is in the yyyy-MM-ddTHH:mmZ UTC format.
      shared_ptr<string> startTime_ {};
      // The report status. Valid values:
      // 
      // - `PENDING`: waiting to be generated.
      // - `RUNNING`: being generated.
      // - `SUCCESS`: generated.
      // - `FAILED`: failed to be generated.
      // - `CANCELED`: canceled.
      // - `EXPIRED`: expired.
      // 
      // > The current list returns only reports in the `PENDING`, `RUNNING`, or `SUCCESS` state.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSqlPatternCompareReportsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSqlPatternCompareReportsResponseBody::Items>) };
    inline vector<DescribeSqlPatternCompareReportsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSqlPatternCompareReportsResponseBody::Items>) };
    inline DescribeSqlPatternCompareReportsResponseBody& setItems(const vector<DescribeSqlPatternCompareReportsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSqlPatternCompareReportsResponseBody& setItems(vector<DescribeSqlPatternCompareReportsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSqlPatternCompareReportsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSqlPatternCompareReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternCompareReportsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternCompareReportsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlPatternCompareReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSqlPatternCompareReportsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of reports on the current page. An empty array is returned if no reports match the conditions.
    shared_ptr<vector<DescribeSqlPatternCompareReportsResponseBody::Items>> items_ {};
    // The number of rows per page used in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page. An empty value indicates that no more pages are available.
    shared_ptr<string> nextToken_ {};
    // The page number used in this query. Pages start from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of rows per page used in this query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of reports that match the conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
