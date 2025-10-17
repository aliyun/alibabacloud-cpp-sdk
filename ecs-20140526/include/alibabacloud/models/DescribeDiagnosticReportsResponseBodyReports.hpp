// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSRESPONSEBODYREPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosticReportsResponseBodyReportsReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsResponseBodyReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_TO_JSON(Report, report_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_FROM_JSON(Report, report_);
    };
    DescribeDiagnosticReportsResponseBodyReports() = default ;
    DescribeDiagnosticReportsResponseBodyReports(const DescribeDiagnosticReportsResponseBodyReports &) = default ;
    DescribeDiagnosticReportsResponseBodyReports(DescribeDiagnosticReportsResponseBodyReports &&) = default ;
    DescribeDiagnosticReportsResponseBodyReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsResponseBodyReports() = default ;
    DescribeDiagnosticReportsResponseBodyReports& operator=(const DescribeDiagnosticReportsResponseBodyReports &) = default ;
    DescribeDiagnosticReportsResponseBodyReports& operator=(DescribeDiagnosticReportsResponseBodyReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->report_ == nullptr; };
    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport> & report() const { DARABONBA_PTR_GET_CONST(report_, vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport>) };
    inline vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport> report() { DARABONBA_PTR_GET(report_, vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport>) };
    inline DescribeDiagnosticReportsResponseBodyReports& setReport(const vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport> & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeDiagnosticReportsResponseBodyReports& setReport(vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport> && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


  protected:
    std::shared_ptr<vector<Models::DescribeDiagnosticReportsResponseBodyReportsReport>> report_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
