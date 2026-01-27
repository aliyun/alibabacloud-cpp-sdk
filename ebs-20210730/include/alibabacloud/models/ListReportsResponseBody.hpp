// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ListReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryReports, historyReports_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryReports, historyReports_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListReportsResponseBody() = default ;
    ListReportsResponseBody(const ListReportsResponseBody &) = default ;
    ListReportsResponseBody(ListReportsResponseBody &&) = default ;
    ListReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReportsResponseBody() = default ;
    ListReportsResponseBody& operator=(const ListReportsResponseBody &) = default ;
    ListReportsResponseBody& operator=(ListReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoryReports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoryReports& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ReportName, reportName_);
        DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(SubscribePeriod, subscribePeriod_);
      };
      friend void from_json(const Darabonba::Json& j, HistoryReports& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ReportName, reportName_);
        DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(SubscribePeriod, subscribePeriod_);
      };
      HistoryReports() = default ;
      HistoryReports(const HistoryReports &) = default ;
      HistoryReports(HistoryReports &&) = default ;
      HistoryReports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoryReports() = default ;
      HistoryReports& operator=(const HistoryReports &) = default ;
      HistoryReports& operator=(HistoryReports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->reportId_ == nullptr && this->reportName_ == nullptr && this->reportTime_ == nullptr && this->subscribePeriod_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline HistoryReports& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline HistoryReports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportName Field Functions 
      bool hasReportName() const { return this->reportName_ != nullptr;};
      void deleteReportName() { this->reportName_ = nullptr;};
      inline string getReportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
      inline HistoryReports& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
      inline HistoryReports& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      // subscribePeriod Field Functions 
      bool hasSubscribePeriod() const { return this->subscribePeriod_ != nullptr;};
      void deleteSubscribePeriod() { this->subscribePeriod_ = nullptr;};
      inline string getSubscribePeriod() const { DARABONBA_PTR_GET_DEFAULT(subscribePeriod_, "") };
      inline HistoryReports& setSubscribePeriod(string subscribePeriod) { DARABONBA_PTR_SET_VALUE(subscribePeriod_, subscribePeriod) };


    protected:
      // Application name.
      shared_ptr<string> appName_ {};
      // Report ID.
      shared_ptr<string> reportId_ {};
      // Report name.
      shared_ptr<string> reportName_ {};
      // Report generation time.
      shared_ptr<string> reportTime_ {};
      // Report subscription period.
      shared_ptr<string> subscribePeriod_ {};
    };

    virtual bool empty() const override { return this->historyReports_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // historyReports Field Functions 
    bool hasHistoryReports() const { return this->historyReports_ != nullptr;};
    void deleteHistoryReports() { this->historyReports_ = nullptr;};
    inline const vector<ListReportsResponseBody::HistoryReports> & getHistoryReports() const { DARABONBA_PTR_GET_CONST(historyReports_, vector<ListReportsResponseBody::HistoryReports>) };
    inline vector<ListReportsResponseBody::HistoryReports> getHistoryReports() { DARABONBA_PTR_GET(historyReports_, vector<ListReportsResponseBody::HistoryReports>) };
    inline ListReportsResponseBody& setHistoryReports(const vector<ListReportsResponseBody::HistoryReports> & historyReports) { DARABONBA_PTR_SET_VALUE(historyReports_, historyReports) };
    inline ListReportsResponseBody& setHistoryReports(vector<ListReportsResponseBody::HistoryReports> && historyReports) { DARABONBA_PTR_SET_RVALUE(historyReports_, historyReports) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListReportsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListReportsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListReportsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Historical reports.
    shared_ptr<vector<ListReportsResponseBody::HistoryReports>> historyReports_ {};
    // Query token (Token), the value is the NextToken parameter value returned from the previous API call.
    shared_ptr<string> nextToken_ {};
    // Page number for paginated queries.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of records per page for paginated queries.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID, an identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // Total count.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
