// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryTunnelMetricDetailResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricDetailResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricDetailResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    QueryTunnelMetricDetailResponseBodyDataMetrics() = default ;
    QueryTunnelMetricDetailResponseBodyDataMetrics(const QueryTunnelMetricDetailResponseBodyDataMetrics &) = default ;
    QueryTunnelMetricDetailResponseBodyDataMetrics(QueryTunnelMetricDetailResponseBodyDataMetrics &&) = default ;
    QueryTunnelMetricDetailResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricDetailResponseBodyDataMetrics() = default ;
    QueryTunnelMetricDetailResponseBodyDataMetrics& operator=(const QueryTunnelMetricDetailResponseBodyDataMetrics &) = default ;
    QueryTunnelMetricDetailResponseBodyDataMetrics& operator=(QueryTunnelMetricDetailResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metric_ == nullptr
        && return this->value_ == nullptr; };
    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const map<string, string> & metric() const { DARABONBA_PTR_GET_CONST(metric_, map<string, string>) };
    inline map<string, string> metric() { DARABONBA_PTR_GET(metric_, map<string, string>) };
    inline QueryTunnelMetricDetailResponseBodyDataMetrics& setMetric(const map<string, string> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline QueryTunnelMetricDetailResponseBodyDataMetrics& setMetric(map<string, string> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline QueryTunnelMetricDetailResponseBodyDataMetrics& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline QueryTunnelMetricDetailResponseBodyDataMetrics& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<map<string, string>> metric_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
