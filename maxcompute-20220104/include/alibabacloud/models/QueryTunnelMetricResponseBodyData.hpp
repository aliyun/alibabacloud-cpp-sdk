// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTunnelMetricResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryTunnelMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    QueryTunnelMetricResponseBodyData() = default ;
    QueryTunnelMetricResponseBodyData(const QueryTunnelMetricResponseBodyData &) = default ;
    QueryTunnelMetricResponseBodyData(QueryTunnelMetricResponseBodyData &&) = default ;
    QueryTunnelMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricResponseBodyData() = default ;
    QueryTunnelMetricResponseBodyData& operator=(const QueryTunnelMetricResponseBodyData &) = default ;
    QueryTunnelMetricResponseBodyData& operator=(QueryTunnelMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->metrics_ == nullptr && return this->name_ == nullptr && return this->period_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline QueryTunnelMetricResponseBodyData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::QueryTunnelMetricResponseBodyDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::QueryTunnelMetricResponseBodyDataMetrics>) };
    inline vector<Models::QueryTunnelMetricResponseBodyDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::QueryTunnelMetricResponseBodyDataMetrics>) };
    inline QueryTunnelMetricResponseBodyData& setMetrics(const vector<Models::QueryTunnelMetricResponseBodyDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline QueryTunnelMetricResponseBodyData& setMetrics(vector<Models::QueryTunnelMetricResponseBodyDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryTunnelMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline QueryTunnelMetricResponseBodyData& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<Models::QueryTunnelMetricResponseBodyDataMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
