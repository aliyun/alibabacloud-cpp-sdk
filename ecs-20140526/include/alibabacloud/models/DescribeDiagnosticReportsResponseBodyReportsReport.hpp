// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDiagnosticReportsResponseBodyReportsReportIssues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsResponseBodyReportsReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsResponseBodyReportsReport& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsResponseBodyReportsReport& obj) { 
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
    DescribeDiagnosticReportsResponseBodyReportsReport() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReport(const DescribeDiagnosticReportsResponseBodyReportsReport &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReport(DescribeDiagnosticReportsResponseBodyReportsReport &&) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsResponseBodyReportsReport() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReport& operator=(const DescribeDiagnosticReportsResponseBodyReportsReport &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReport& operator=(DescribeDiagnosticReportsResponseBodyReportsReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->endTime_ == nullptr && return this->finishedTime_ == nullptr && return this->issues_ == nullptr && return this->metricSetId_ == nullptr && return this->reportId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->severity_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // issues Field Functions 
    bool hasIssues() const { return this->issues_ != nullptr;};
    void deleteIssues() { this->issues_ = nullptr;};
    inline const Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues & issues() const { DARABONBA_PTR_GET_CONST(issues_, Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues) };
    inline Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues issues() { DARABONBA_PTR_GET(issues_, Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues) };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setIssues(const Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setIssues(Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string metricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReport& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the diagnostic report was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The end of the time range during which data was queried. The value is the EndTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the diagnostic was complete.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The diagnosed issues.
    std::shared_ptr<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssues> issues_ = nullptr;
    // The ID of the diagnostic metric set.
    std::shared_ptr<string> metricSetId_ = nullptr;
    // The ID of the diagnostic report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The severity level of the diagnostic report. Valid values:
    // 
    // *   Unknown: The diagnostic did not start, failed to run, or unexpectedly exited without a diagnosis.
    // *   Normal: No exceptions were detected.
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate exceptions.
    // *   Critical: Critical exceptions were detected.
    std::shared_ptr<string> severity_ = nullptr;
    // The beginning of the time range during which data was queried. The value is the StartTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the diagnostic report.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
