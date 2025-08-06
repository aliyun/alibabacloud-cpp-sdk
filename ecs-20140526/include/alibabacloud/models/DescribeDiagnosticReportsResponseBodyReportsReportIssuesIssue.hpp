// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORTISSUESISSUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORTISSUESISSUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& obj) { 
      DARABONBA_PTR_TO_JSON(IssueId, issueId_);
      DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_TO_JSON(MetricId, metricId_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& obj) { 
      DARABONBA_PTR_FROM_JSON(IssueId, issueId_);
      DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue(const DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue(DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue &&) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& operator=(const DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& operator=(DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->issueId_ != nullptr
        && this->metricCategory_ != nullptr && this->metricId_ != nullptr && this->severity_ != nullptr; };
    // issueId Field Functions 
    bool hasIssueId() const { return this->issueId_ != nullptr;};
    void deleteIssueId() { this->issueId_ = nullptr;};
    inline string issueId() const { DARABONBA_PTR_GET_DEFAULT(issueId_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& setIssueId(string issueId) { DARABONBA_PTR_SET_VALUE(issueId_, issueId) };


    // metricCategory Field Functions 
    bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
    void deleteMetricCategory() { this->metricCategory_ = nullptr;};
    inline string metricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


    // metricId Field Functions 
    bool hasMetricId() const { return this->metricId_ != nullptr;};
    void deleteMetricId() { this->metricId_ = nullptr;};
    inline string metricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // The ID of the diagnosed issue, which is the unique identifier of the issue.
    std::shared_ptr<string> issueId_ = nullptr;
    // The category of the diagnostic metric.
    std::shared_ptr<string> metricCategory_ = nullptr;
    // The ID of the diagnostic metric.
    std::shared_ptr<string> metricId_ = nullptr;
    // The severity level of the diagnostic metric. Valid values:
    // 
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate exceptions.
    // *   Critical: Critical exceptions were detected.
    std::shared_ptr<string> severity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
