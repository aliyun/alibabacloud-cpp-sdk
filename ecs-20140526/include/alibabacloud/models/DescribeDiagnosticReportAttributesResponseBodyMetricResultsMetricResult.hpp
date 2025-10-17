// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& obj) { 
      DARABONBA_PTR_TO_JSON(Issues, issues_);
      DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_TO_JSON(MetricId, metricId_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Issues, issues_);
      DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult &&) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& operator=(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& operator=(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issues_ == nullptr
        && return this->metricCategory_ == nullptr && return this->metricId_ == nullptr && return this->severity_ == nullptr && return this->status_ == nullptr; };
    // issues Field Functions 
    bool hasIssues() const { return this->issues_ != nullptr;};
    void deleteIssues() { this->issues_ = nullptr;};
    inline const Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues & issues() const { DARABONBA_PTR_GET_CONST(issues_, Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues) };
    inline Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues issues() { DARABONBA_PTR_GET(issues_, Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setIssues(const Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setIssues(Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


    // metricCategory Field Functions 
    bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
    void deleteMetricCategory() { this->metricCategory_ = nullptr;};
    inline string metricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


    // metricId Field Functions 
    bool hasMetricId() const { return this->metricId_ != nullptr;};
    void deleteMetricId() { this->metricId_ = nullptr;};
    inline string metricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The diagnosed issues.
    std::shared_ptr<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues> issues_ = nullptr;
    // The category of the diagnostic metric.
    std::shared_ptr<string> metricCategory_ = nullptr;
    // The ID of the diagnostic metric.
    std::shared_ptr<string> metricId_ = nullptr;
    // The severity level of the diagnostic metric. Valid values:
    // 
    // *   Unknown: The diagnostic has not started, failed to run, or exited unexpectedly without a diagnosis.
    // *   Normal: No exceptions were detected.
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   NotSupport: The version of the guest operating system does support diagnosing the metric.
    // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
    // *   Critical: Critical exceptions were detected.
    std::shared_ptr<string> severity_ = nullptr;
    // The state of the diagnostic metric. Valid values:
    // 
    // *   InProgress.
    // *   Finished.
    // *   Failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
