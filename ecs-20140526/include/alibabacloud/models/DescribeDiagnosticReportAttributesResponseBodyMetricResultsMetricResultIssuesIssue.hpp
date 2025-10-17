// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULTISSUESISSUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULTISSUESISSUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& obj) { 
      DARABONBA_PTR_TO_JSON(Additional, additional_);
      DARABONBA_PTR_TO_JSON(IssueId, issueId_);
      DARABONBA_PTR_TO_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& obj) { 
      DARABONBA_PTR_FROM_JSON(Additional, additional_);
      DARABONBA_PTR_FROM_JSON(IssueId, issueId_);
      DARABONBA_PTR_FROM_JSON(OccurrenceTime, occurrenceTime_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
    };
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue &&) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& operator=(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& operator=(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additional_ == nullptr
        && return this->issueId_ == nullptr && return this->occurrenceTime_ == nullptr && return this->severity_ == nullptr; };
    // additional Field Functions 
    bool hasAdditional() const { return this->additional_ != nullptr;};
    void deleteAdditional() { this->additional_ = nullptr;};
    inline string additional() const { DARABONBA_PTR_GET_DEFAULT(additional_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& setAdditional(string additional) { DARABONBA_PTR_SET_VALUE(additional_, additional) };


    // issueId Field Functions 
    bool hasIssueId() const { return this->issueId_ != nullptr;};
    void deleteIssueId() { this->issueId_ = nullptr;};
    inline string issueId() const { DARABONBA_PTR_GET_DEFAULT(issueId_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& setIssueId(string issueId) { DARABONBA_PTR_SET_VALUE(issueId_, issueId) };


    // occurrenceTime Field Functions 
    bool hasOccurrenceTime() const { return this->occurrenceTime_ != nullptr;};
    void deleteOccurrenceTime() { this->occurrenceTime_ = nullptr;};
    inline string occurrenceTime() const { DARABONBA_PTR_GET_DEFAULT(occurrenceTime_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& setOccurrenceTime(string occurrenceTime) { DARABONBA_PTR_SET_VALUE(occurrenceTime_, occurrenceTime) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


  protected:
    // The additional data about the diagnosed issue. The value is a JSON string.
    std::shared_ptr<string> additional_ = nullptr;
    // The ID of the diagnosed issue, which is the unique identifier of the issue.
    std::shared_ptr<string> issueId_ = nullptr;
    // The time when the diagnosed issue occurred.
    std::shared_ptr<string> occurrenceTime_ = nullptr;
    // The severity level of the diagnosed issue. Valid values:
    // 
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate potential exceptions.
    // *   Critical: Critical exceptions were detected.
    std::shared_ptr<string> severity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
