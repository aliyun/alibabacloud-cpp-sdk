// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULTISSUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTSMETRICRESULTISSUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& obj) { 
      DARABONBA_PTR_TO_JSON(Issue, issue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& obj) { 
      DARABONBA_PTR_FROM_JSON(Issue, issue_);
    };
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues &&) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& operator=(const DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& operator=(DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issue_ == nullptr; };
    // issue Field Functions 
    bool hasIssue() const { return this->issue_ != nullptr;};
    void deleteIssue() { this->issue_ = nullptr;};
    inline const vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue> & issue() const { DARABONBA_PTR_GET_CONST(issue_, vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue>) };
    inline vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue> issue() { DARABONBA_PTR_GET(issue_, vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue>) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& setIssue(const vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue> & issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssues& setIssue(vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue> && issue) { DARABONBA_PTR_SET_RVALUE(issue_, issue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResultIssuesIssue>> issue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
