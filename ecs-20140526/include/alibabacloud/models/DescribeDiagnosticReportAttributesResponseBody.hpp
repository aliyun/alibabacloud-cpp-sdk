// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDiagnosticReportAttributesResponseBodyMetricResults.hpp>
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
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->creationTime_ == nullptr && return this->endTime_ == nullptr && return this->finishedTime_ == nullptr && return this->metricResults_ == nullptr && return this->metricSetId_ == nullptr
        && return this->reportId_ == nullptr && return this->requestId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->severity_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // metricResults Field Functions 
    bool hasMetricResults() const { return this->metricResults_ != nullptr;};
    void deleteMetricResults() { this->metricResults_ = nullptr;};
    inline const DescribeDiagnosticReportAttributesResponseBodyMetricResults & metricResults() const { DARABONBA_PTR_GET_CONST(metricResults_, DescribeDiagnosticReportAttributesResponseBodyMetricResults) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResults metricResults() { DARABONBA_PTR_GET(metricResults_, DescribeDiagnosticReportAttributesResponseBodyMetricResults) };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricResults(const DescribeDiagnosticReportAttributesResponseBodyMetricResults & metricResults) { DARABONBA_PTR_SET_VALUE(metricResults_, metricResults) };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricResults(DescribeDiagnosticReportAttributesResponseBodyMetricResults && metricResults) { DARABONBA_PTR_SET_RVALUE(metricResults_, metricResults) };


    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string metricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosticReportAttributesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The extended attributes of the diagnostic report.
    std::shared_ptr<string> attributes_ = nullptr;
    // The time when the diagnostic report was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The end of the reporting period of the diagnostic report. The value is the EndTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the diagnostic report was complete.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The results of all diagnostic metrics in the diagnostic metric set.
    std::shared_ptr<DescribeDiagnosticReportAttributesResponseBodyMetricResults> metricResults_ = nullptr;
    // The ID of the diagnostic metric set.
    std::shared_ptr<string> metricSetId_ = nullptr;
    // The ID of the diagnostic report, which is the unique identifier of the report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource. ResourceType can only be set to instance, which indicates that only instances are supported.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The severity level of the diagnostic report. The value of this parameter is determined by the highest severity level of all diagnostic metrics. Valid values:
    // 
    // *   Unknown: The diagnostic has not started, failed to run, or exited unexpectedly without a diagnosis.
    // *   Normal: No exceptions were detected.
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
    // *   Critical: Critical exceptions were detected.
    std::shared_ptr<string> severity_ = nullptr;
    // The beginning of the reporting period of the diagnostic report. The value is the StartTime value that was passed in when you called the [CreateDiagnosticReport](https://help.aliyun.com/document_detail/442490.html) operation to create the diagnostic report.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the diagnostic report. Valid values:
    // 
    // *   InProgress: The diagnostic is in progress.
    // *   Finished: The diagnostic is complete.
    // *   Failed: The diagnostic failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
