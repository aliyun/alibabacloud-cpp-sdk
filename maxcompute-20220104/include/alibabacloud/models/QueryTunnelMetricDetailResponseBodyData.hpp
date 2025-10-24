// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTunnelMetricDetailResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryTunnelMetricDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    QueryTunnelMetricDetailResponseBodyData() = default ;
    QueryTunnelMetricDetailResponseBodyData(const QueryTunnelMetricDetailResponseBodyData &) = default ;
    QueryTunnelMetricDetailResponseBodyData(QueryTunnelMetricDetailResponseBodyData &&) = default ;
    QueryTunnelMetricDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricDetailResponseBodyData() = default ;
    QueryTunnelMetricDetailResponseBodyData& operator=(const QueryTunnelMetricDetailResponseBodyData &) = default ;
    QueryTunnelMetricDetailResponseBodyData& operator=(QueryTunnelMetricDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->name_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics>) };
    inline vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics>) };
    inline QueryTunnelMetricDetailResponseBodyData& setMetrics(const vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline QueryTunnelMetricDetailResponseBodyData& setMetrics(vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryTunnelMetricDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<Models::QueryTunnelMetricDetailResponseBodyDataMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
