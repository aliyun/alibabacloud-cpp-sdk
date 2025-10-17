// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORTISSUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTSREPORTISSUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsResponseBodyReportsReportIssues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsResponseBodyReportsReportIssues& obj) { 
      DARABONBA_PTR_TO_JSON(Issue, issue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsResponseBodyReportsReportIssues& obj) { 
      DARABONBA_PTR_FROM_JSON(Issue, issue_);
    };
    DescribeDiagnosticReportsResponseBodyReportsReportIssues() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssues(const DescribeDiagnosticReportsResponseBodyReportsReportIssues &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssues(DescribeDiagnosticReportsResponseBodyReportsReportIssues &&) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsResponseBodyReportsReportIssues() = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssues& operator=(const DescribeDiagnosticReportsResponseBodyReportsReportIssues &) = default ;
    DescribeDiagnosticReportsResponseBodyReportsReportIssues& operator=(DescribeDiagnosticReportsResponseBodyReportsReportIssues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issue_ == nullptr; };
    // issue Field Functions 
    bool hasIssue() const { return this->issue_ != nullptr;};
    void deleteIssue() { this->issue_ = nullptr;};
    inline const vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue> & issue() const { DARABONBA_PTR_GET_CONST(issue_, vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue>) };
    inline vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue> issue() { DARABONBA_PTR_GET(issue_, vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue>) };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssues& setIssue(const vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue> & issue) { DARABONBA_PTR_SET_VALUE(issue_, issue) };
    inline DescribeDiagnosticReportsResponseBodyReportsReportIssues& setIssue(vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue> && issue) { DARABONBA_PTR_SET_RVALUE(issue_, issue) };


  protected:
    std::shared_ptr<vector<Models::DescribeDiagnosticReportsResponseBodyReportsReportIssuesIssue>> issue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
