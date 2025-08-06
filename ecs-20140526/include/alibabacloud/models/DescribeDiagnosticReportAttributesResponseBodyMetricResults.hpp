// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTATTRIBUTESRESPONSEBODYMETRICRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportAttributesResponseBodyMetricResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportAttributesResponseBodyMetricResults& obj) { 
      DARABONBA_PTR_TO_JSON(MetricResult, metricResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportAttributesResponseBodyMetricResults& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricResult, metricResult_);
    };
    DescribeDiagnosticReportAttributesResponseBodyMetricResults() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResults(const DescribeDiagnosticReportAttributesResponseBodyMetricResults &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResults(DescribeDiagnosticReportAttributesResponseBodyMetricResults &&) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportAttributesResponseBodyMetricResults() = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResults& operator=(const DescribeDiagnosticReportAttributesResponseBodyMetricResults &) = default ;
    DescribeDiagnosticReportAttributesResponseBodyMetricResults& operator=(DescribeDiagnosticReportAttributesResponseBodyMetricResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricResult_ != nullptr; };
    // metricResult Field Functions 
    bool hasMetricResult() const { return this->metricResult_ != nullptr;};
    void deleteMetricResult() { this->metricResult_ = nullptr;};
    inline const vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult> & metricResult() const { DARABONBA_PTR_GET_CONST(metricResult_, vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult>) };
    inline vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult> metricResult() { DARABONBA_PTR_GET(metricResult_, vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult>) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResults& setMetricResult(const vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult> & metricResult) { DARABONBA_PTR_SET_VALUE(metricResult_, metricResult) };
    inline DescribeDiagnosticReportAttributesResponseBodyMetricResults& setMetricResult(vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult> && metricResult) { DARABONBA_PTR_SET_RVALUE(metricResult_, metricResult) };


  protected:
    std::shared_ptr<vector<Models::DescribeDiagnosticReportAttributesResponseBodyMetricResultsMetricResult>> metricResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
