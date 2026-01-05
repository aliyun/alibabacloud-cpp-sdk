// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeDiagnosticReportAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(MetricResults, metricResults_);
      DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(MetricResults, metricResults_);
      DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDiagnosticReportAttributesResponseBody() = default ;
    DescribeDiagnosticReportAttributesResponseBody(const DescribeDiagnosticReportAttributesResponseBody &) = default ;
    DescribeDiagnosticReportAttributesResponseBody(DescribeDiagnosticReportAttributesResponseBody &&) = default ;
    DescribeDiagnosticReportAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportAttributesResponseBody() = default ;
    DescribeDiagnosticReportAttributesResponseBody& operator=(const DescribeDiagnosticReportAttributesResponseBody &) = default ;
    DescribeDiagnosticReportAttributesResponseBody& operator=(DescribeDiagnosticReportAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricResults& obj) { 
        DARABONBA_PTR_TO_JSON(MetricResult, metricResult_);
      };
      friend void from_json(const Darabonba::Json& j, MetricResults& obj) { 
        DARABONBA_PTR_FROM_JSON(MetricResult, metricResult_);
      };
      MetricResults() = default ;
      MetricResults(const MetricResults &) = default ;
      MetricResults(MetricResults &&) = default ;
      MetricResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricResults() = default ;
      MetricResults& operator=(const MetricResults &) = default ;
      MetricResults& operator=(MetricResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetricResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetricResult& obj) { 
          DARABONBA_PTR_TO_JSON(Issues, issues_);
          DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
          DARABONBA_PTR_TO_JSON(MetricId, metricId_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, MetricResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Issues, issues_);
          DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
          DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        MetricResult() = default ;
        MetricResult(const MetricResult &) = default ;
        MetricResult(MetricResult &&) = default ;
        MetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetricResult() = default ;
        MetricResult& operator=(const MetricResult &) = default ;
        MetricResult& operator=(MetricResult &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Additional, additional_);
              DARABONBA_PTR_TO_JSON(IssueId, issueId_);
              DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
              DARABONBA_PTR_TO_JSON(Severity, severity_);
            };
            friend void from_json(const Darabonba::Json& j, Issue& obj) { 
              DARABONBA_PTR_FROM_JSON(Additional, additional_);
              DARABONBA_PTR_FROM_JSON(IssueId, issueId_);
              DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
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
            virtual bool empty() const override { return this->additional_ == nullptr
        && this->issueId_ == nullptr && this->occurrenceTime_ == nullptr && this->severity_ == nullptr; };
            // additional Field Functions 
            bool hasAdditional() const { return this->additional_ != nullptr;};
            void deleteAdditional() { this->additional_ = nullptr;};
            inline string getAdditional() const { DARABONBA_PTR_GET_DEFAULT(additional_, "") };
            inline Issue& setAdditional(string additional) { DARABONBA_PTR_SET_VALUE(additional_, additional) };


            // issueId Field Functions 
            bool hasIssueId() const { return this->issueId_ != nullptr;};
            void deleteIssueId() { this->issueId_ = nullptr;};
            inline string getIssueId() const { DARABONBA_PTR_GET_DEFAULT(issueId_, "") };
            inline Issue& setIssueId(string issueId) { DARABONBA_PTR_SET_VALUE(issueId_, issueId) };


            // occurrenceTime Field Functions 
            bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
            void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
            inline string getOccurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
            inline Issue& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


            // severity Field Functions 
            bool hasSeverity() const { return this->severity_ != nullptr;};
            void deleteSeverity() { this->severity_ = nullptr;};
            inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
            inline Issue& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          protected:
            // The additional data about the diagnosed issue. The value is a JSON string.
            shared_ptr<string> additional_ {};
            // The ID of the diagnosed issue, which is the unique identifier of the issue.
            shared_ptr<string> issueId_ {};
            // The time when the diagnosed issue occurred.
            shared_ptr<string> occurrenceTime_ {};
            // The severity level of the diagnosed issue. Valid values:
            // 
            // *   Info: Diagnostic information was recorded and may be related to exceptions.
            // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
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

        virtual bool empty() const override { return this->issues_ == nullptr
        && this->metricCategory_ == nullptr && this->metricId_ == nullptr && this->severity_ == nullptr && this->status_ == nullptr; };
        // issues Field Functions 
        bool hasIssues() const { return this->issues_ != nullptr;};
        void deleteIssues() { this->issues_ = nullptr;};
        inline const MetricResult::Issues & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, MetricResult::Issues) };
        inline MetricResult::Issues getIssues() { DARABONBA_PTR_GET(issues_, MetricResult::Issues) };
        inline MetricResult& setIssues(const MetricResult::Issues & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
        inline MetricResult& setIssues(MetricResult::Issues && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


        // metricCategory Field Functions 
        bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
        void deleteMetricCategory() { this->metricCategory_ = nullptr;};
        inline string getMetricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
        inline MetricResult& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


        // metricId Field Functions 
        bool hasMetricId() const { return this->metricId_ != nullptr;};
        void deleteMetricId() { this->metricId_ = nullptr;};
        inline string getMetricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
        inline MetricResult& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline MetricResult& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MetricResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The diagnosed issues.
        shared_ptr<MetricResult::Issues> issues_ {};
        // The category of the diagnostic metric.
        shared_ptr<string> metricCategory_ {};
        // The ID of the diagnostic metric.
        shared_ptr<string> metricId_ {};
        // The severity level of the diagnostic metric. Valid values:
        // 
        // *   Unknown: The diagnostic has not started, failed to run, or exited unexpectedly without a diagnosis.
        // *   Normal: No exceptions were detected.
        // *   Info: Diagnostic information was recorded and may be related to exceptions.
        // *   NotSupport: The version of the guest operating system does support diagnosing the metric.
        // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
        // *   Critical: Critical exceptions were detected.
        shared_ptr<string> severity_ {};
        // The state of the diagnostic metric. Valid values:
        // 
        // *   InProgress.
        // *   Finished.
        // *   Failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->metricResult_ == nullptr; };
      // metricResult Field Functions 
      bool hasMetricResult() const { return this->metricResult_ != nullptr;};
      void deleteMetricResult() { this->metricResult_ = nullptr;};
      inline const vector<MetricResults::MetricResult> & getMetricResult() const { DARABONBA_PTR_GET_CONST(metricResult_, vector<MetricResults::MetricResult>) };
      inline vector<MetricResults::MetricResult> getMetricResult() { DARABONBA_PTR_GET(metricResult_, vector<MetricResults::MetricResult>) };
      inline MetricResults& setMetricResult(const vector<MetricResults::MetricResult> & metricResult) { DARABONBA_PTR_SET_VALUE(metricResult_, metricResult) };
      inline MetricResults& setMetricResult(vector<MetricResults::MetricResult> && metricResult) { DARABONBA_PTR_SET_RVALUE(metricResult_, metricResult) };


    protected:
      shared_ptr<vector<MetricResults::MetricResult>> metricResult_ {};
    };

    virtual bool empty() const override { return this->attributes_ == nullptr
        && this->creationTime_ == nullptr && this->endTime_ == nullptr && this->finishedTime_ == nullptr && this->metricResults_ == nullptr && this->metricSetId_ == nullptr
        && this->reportId_ == nullptr && this->requestId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->severity_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // metricResults Field Functions 
    bool hasMetricResults() const { return this->metricResults_ != nullptr;};
    void deleteMetricResults() { this->metricResults_ = nullptr;};
    inline const DescribeDiagnosticReportAttributesResponseBody::MetricResults & getMetricResults() const { DARABONBA_PTR_GET_CONST(metricResults_, DescribeDiagnosticReportAttributesResponseBody::MetricResults) };
    inline DescribeDiagnosticReportAttributesResponseBody::MetricResults getMetricResults() { DARABONBA_PTR_GET(metricResults_, DescribeDiagnosticReportAttributesResponseBody::MetricResults) };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricResults(const DescribeDiagnosticReportAttributesResponseBody::MetricResults & metricResults) { DARABONBA_PTR_SET_VALUE(metricResults_, metricResults) };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricResults(DescribeDiagnosticReportAttributesResponseBody::MetricResults && metricResults) { DARABONBA_PTR_SET_RVALUE(metricResults_, metricResults) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string getMetricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The extended attributes of the diagnostic report.
    shared_ptr<string> attributes_ {};
    // The time when the diagnostic report was created.
    shared_ptr<string> creationTime_ {};
    // The end of the reporting period of the diagnostic report. The value is the EndTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    shared_ptr<string> endTime_ {};
    // The time when the diagnostic report was complete.
    shared_ptr<string> finishedTime_ {};
    // The results of all diagnostic metrics in the diagnostic metric set.
    shared_ptr<DescribeDiagnosticReportAttributesResponseBody::MetricResults> metricResults_ {};
    // The ID of the diagnostic metric set.
    shared_ptr<string> metricSetId_ {};
    // The ID of the diagnostic report, which is the unique identifier of the report.
    shared_ptr<string> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    // The type of the resource. ResourceType can only be set to instance, which indicates that only instances are supported.
    shared_ptr<string> resourceType_ {};
    // The severity level of the diagnostic report. The value of this parameter is determined by the highest severity level of all diagnostic metrics. Valid values:
    // 
    // *   Unknown: The diagnostic has not started, failed to run, or exited unexpectedly without a diagnosis.
    // *   Normal: No exceptions were detected.
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
    // *   Critical: Critical exceptions were detected.
    shared_ptr<string> severity_ {};
    // The beginning of the reporting period of the diagnostic report. The value is the StartTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    shared_ptr<string> startTime_ {};
    // The state of the diagnostic report. Valid values:
    // 
    // *   InProgress: The diagnostic is in progress.
    // *   Finished: The diagnostic is complete.
    // *   Failed: The diagnostic failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
