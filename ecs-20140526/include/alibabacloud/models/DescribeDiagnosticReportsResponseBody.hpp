// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosticReportsResponseBody() = default ;
    DescribeDiagnosticReportsResponseBody(const DescribeDiagnosticReportsResponseBody &) = default ;
    DescribeDiagnosticReportsResponseBody(DescribeDiagnosticReportsResponseBody &&) = default ;
    DescribeDiagnosticReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsResponseBody() = default ;
    DescribeDiagnosticReportsResponseBody& operator=(const DescribeDiagnosticReportsResponseBody &) = default ;
    DescribeDiagnosticReportsResponseBody& operator=(DescribeDiagnosticReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(Report, report_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(Report, report_);
      };
      Reports() = default ;
      Reports(const Reports &) = default ;
      Reports(Reports &&) = default ;
      Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reports() = default ;
      Reports& operator=(const Reports &) = default ;
      Reports& operator=(Reports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Report : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Report& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(Issues, issues_);
          DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
          DARABONBA_PTR_TO_JSON(ReportId, reportId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Report& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(Issues, issues_);
          DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
          DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Report() = default ;
        Report(const Report &) = default ;
        Report(Report &&) = default ;
        Report(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Report() = default ;
        Report& operator=(const Report &) = default ;
        Report& operator=(Report &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Issues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Issues& obj) { 
            DARABONBA_PTR_TO_JSON(Issue, issue_);
          };
          friend void from_json(const Darabonba::Json& j, Issues& obj) { 
            DARABONBA_PTR_FROM_JSON(Issue, issue_);
          };
          Issues() = default ;
          Issues(const Issues &) = default ;
          Issues(Issues &&) = default ;
          Issues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Issues() = default ;
          Issues& operator=(const Issues &) = default ;
          Issues& operator=(Issues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Issue : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Issue& obj) { 
              DARABONBA_PTR_TO_JSON(IssueId, issueId_);
              DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
              DARABONBA_PTR_TO_JSON(MetricId, metricId_);
              DARABONBA_PTR_TO_JSON(Severity, severity_);
            };
            friend void from_json(const Darabonba::Json& j, Issue& obj) { 
              DARABONBA_PTR_FROM_JSON(IssueId, issueId_);
              DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
              DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
              DARABONBA_PTR_FROM_JSON(Severity, severity_);
            };
            Issue() = default ;
            Issue(const Issue &) = default ;
            Issue(Issue &&) = default ;
            Issue(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Issue() = default ;
            Issue& operator=(const Issue &) = default ;
            Issue& operator=(Issue &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->issueId_ == nullptr
        && this->metricCategory_ == nullptr && this->metricId_ == nullptr && this->severity_ == nullptr; };
            // issueId Field Functions 
            bool hasIssueId() const { return this->issueId_ != nullptr;};
            void deleteIssueId() { this->issueId_ = nullptr;};
            inline string getIssueId() const { DARABONBA_PTR_GET_DEFAULT(issueId_, "") };
            inline Issue& setIssueId(string issueId) { DARABONBA_PTR_SET_VALUE(issueId_, issueId) };


            // metricCategory Field Functions 
            bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
            void deleteMetricCategory() { this->metricCategory_ = nullptr;};
            inline string getMetricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
            inline Issue& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


            // metricId Field Functions 
            bool hasMetricId() const { return this->metricId_ != nullptr;};
            void deleteMetricId() { this->metricId_ = nullptr;};
            inline string getMetricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
            inline Issue& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


            // severity Field Functions 
            bool hasSeverity() const { return this->severity_ != nullptr;};
            void deleteSeverity() { this->severity_ = nullptr;};
            inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
            inline Issue& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          protected:
            // The ID of the diagnosed issue, which is the unique identifier of the issue.
            shared_ptr<string> issueId_ {};
            // The category of the diagnostic metric.
            shared_ptr<string> metricCategory_ {};
            // The ID of the diagnostic metric.
            shared_ptr<string> metricId_ {};
            // The severity level of the diagnostic metric. Valid values:
            // 
            // *   Info: Diagnostic information was recorded and may be related to exceptions.
            // *   Warn: Diagnostic information was recorded and may indicate exceptions.
            // *   Critical: Critical exceptions were detected.
            shared_ptr<string> severity_ {};
          };

          virtual bool empty() const override { return this->issue_ == nullptr; };
          // issue Field Functions 
          bool hasIssue() const { return this->issue_ != nullptr;};
          void deleteIssue() { this->issue_ = nullptr;};
          inline const vector<Issues::Issue> & getIssue() const { DARABONBA_PTR_GET_CONST(issue_, vector<Issues::Issue>) };
          inline vector<Issues::Issue> getIssue() { DARABONBA_PTR_GET(issue_, vector<Issues::Issue>) };
          inline Issues& setIssue(const vector<Issues::Issue> & issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };
          inline Issues& setIssue(vector<Issues::Issue> && issue) { DARABONBA_PTR_SET_RVALUE(issue_, issue) };


        protected:
          shared_ptr<vector<Issues::Issue>> issue_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->endTime_ == nullptr && this->finishedTime_ == nullptr && this->issues_ == nullptr && this->metricSetId_ == nullptr && this->reportId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->severity_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Report& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Report& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
        inline Report& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // issues Field Functions 
        bool hasIssues() const { return this->issues_ != nullptr;};
        void deleteIssues() { this->issues_ = nullptr;};
        inline const Report::Issues & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, Report::Issues) };
        inline Report::Issues getIssues() { DARABONBA_PTR_GET(issues_, Report::Issues) };
        inline Report& setIssues(const Report::Issues & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
        inline Report& setIssues(Report::Issues && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


        // metricSetId Field Functions 
        bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
        void deleteMetricSetId() { this->metricSetId_ = nullptr;};
        inline string getMetricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
        inline Report& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


        // reportId Field Functions 
        bool hasReportId() const { return this->reportId_ != nullptr;};
        void deleteReportId() { this->reportId_ = nullptr;};
        inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
        inline Report& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Report& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Report& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline Report& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Report& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Report& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the diagnostic report was created.
        shared_ptr<string> creationTime_ {};
        // The end of the time range during which data was queried. The value is the EndTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
        shared_ptr<string> endTime_ {};
        // The time when the diagnostic was complete.
        shared_ptr<string> finishedTime_ {};
        // The diagnosed issues.
        shared_ptr<Report::Issues> issues_ {};
        // The ID of the diagnostic metric set.
        shared_ptr<string> metricSetId_ {};
        // The ID of the diagnostic report.
        shared_ptr<string> reportId_ {};
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The severity level of the diagnostic report. Valid values:
        // 
        // *   Unknown: The diagnostic did not start, failed to run, or unexpectedly exited without a diagnosis.
        // *   Normal: No exceptions were detected.
        // *   Info: Diagnostic information was recorded and may be related to exceptions.
        // *   Warn: Diagnostic information was recorded and may indicate exceptions.
        // *   Critical: Critical exceptions were detected.
        shared_ptr<string> severity_ {};
        // The beginning of the time range during which data was queried. The value is the StartTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
        shared_ptr<string> startTime_ {};
        // The status of the diagnostic report.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->report_ == nullptr; };
      // report Field Functions 
      bool hasReport() const { return this->report_ != nullptr;};
      void deleteReport() { this->report_ = nullptr;};
      inline const vector<Reports::Report> & getReport() const { DARABONBA_PTR_GET_CONST(report_, vector<Reports::Report>) };
      inline vector<Reports::Report> getReport() { DARABONBA_PTR_GET(report_, vector<Reports::Report>) };
      inline Reports& setReport(const vector<Reports::Report> & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
      inline Reports& setReport(vector<Reports::Report> && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


    protected:
      shared_ptr<vector<Reports::Report>> report_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->reports_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticReportsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const DescribeDiagnosticReportsResponseBody::Reports & getReports() const { DARABONBA_PTR_GET_CONST(reports_, DescribeDiagnosticReportsResponseBody::Reports) };
    inline DescribeDiagnosticReportsResponseBody::Reports getReports() { DARABONBA_PTR_GET(reports_, DescribeDiagnosticReportsResponseBody::Reports) };
    inline DescribeDiagnosticReportsResponseBody& setReports(const DescribeDiagnosticReportsResponseBody::Reports & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeDiagnosticReportsResponseBody& setReports(DescribeDiagnosticReportsResponseBody::Reports && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The diagnostic reports.
    shared_ptr<DescribeDiagnosticReportsResponseBody::Reports> reports_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
