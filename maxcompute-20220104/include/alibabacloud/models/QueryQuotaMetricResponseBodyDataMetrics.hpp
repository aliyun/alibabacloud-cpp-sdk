// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUOTAMETRICRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUOTAMETRICRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryQuotaMetricResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQuotaMetricResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQuotaMetricResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    QueryQuotaMetricResponseBodyDataMetrics() = default ;
    QueryQuotaMetricResponseBodyDataMetrics(const QueryQuotaMetricResponseBodyDataMetrics &) = default ;
    QueryQuotaMetricResponseBodyDataMetrics(QueryQuotaMetricResponseBodyDataMetrics &&) = default ;
    QueryQuotaMetricResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQuotaMetricResponseBodyDataMetrics() = default ;
    QueryQuotaMetricResponseBodyDataMetrics& operator=(const QueryQuotaMetricResponseBodyDataMetrics &) = default ;
    QueryQuotaMetricResponseBodyDataMetrics& operator=(QueryQuotaMetricResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metric_ == nullptr
        && return this->values_ == nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const map<string, string> & metric() const { DARABONBA_PTR_GET_CONST(metric_, map<string, string>) };
    inline map<string, string> metric() { DARABONBA_PTR_GET(metric_, map<string, string>) };
    inline QueryQuotaMetricResponseBodyDataMetrics& setMetric(const map<string, string> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline QueryQuotaMetricResponseBodyDataMetrics& setMetric(map<string, string> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<double>> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<double>>) };
    inline vector<vector<double>> values() { DARABONBA_PTR_GET(values_, vector<vector<double>>) };
    inline QueryQuotaMetricResponseBodyDataMetrics& setValues(const vector<vector<double>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryQuotaMetricResponseBodyDataMetrics& setValues(vector<vector<double>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<map<string, string>> metric_ = nullptr;
    std::shared_ptr<vector<vector<double>>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
