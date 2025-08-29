// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERIMENTREPORTVALUE_HPP_
#define ALIBABACLOUD_MODELS_EXPERIMENTREPORTVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ExperimentReportValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExperimentReportValue& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(MetricResults, metricResults_);
    };
    friend void from_json(const Darabonba::Json& j, ExperimentReportValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(MetricResults, metricResults_);
    };
    ExperimentReportValue() = default ;
    ExperimentReportValue(const ExperimentReportValue &) = default ;
    ExperimentReportValue(ExperimentReportValue &&) = default ;
    ExperimentReportValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExperimentReportValue() = default ;
    ExperimentReportValue& operator=(const ExperimentReportValue &) = default ;
    ExperimentReportValue& operator=(ExperimentReportValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->metricResults_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline bool baseline() const { DARABONBA_PTR_GET_DEFAULT(baseline_, false) };
    inline ExperimentReportValue& setBaseline(bool baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };


    // metricResults Field Functions 
    bool hasMetricResults() const { return this->metricResults_ != nullptr;};
    void deleteMetricResults() { this->metricResults_ = nullptr;};
    inline const map<string, Darabonba::Json> & metricResults() const { DARABONBA_PTR_GET_CONST(metricResults_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> metricResults() { DARABONBA_PTR_GET(metricResults_, map<string, Darabonba::Json>) };
    inline ExperimentReportValue& setMetricResults(const map<string, Darabonba::Json> & metricResults) { DARABONBA_PTR_SET_VALUE(metricResults_, metricResults) };
    inline ExperimentReportValue& setMetricResults(map<string, Darabonba::Json> && metricResults) { DARABONBA_PTR_SET_RVALUE(metricResults_, metricResults) };


  protected:
    std::shared_ptr<bool> baseline_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> metricResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
