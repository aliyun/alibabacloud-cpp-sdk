// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNisNetworkMetricsResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkMetricsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
    };
    GetNisNetworkMetricsResponseBodyData() = default ;
    GetNisNetworkMetricsResponseBodyData(const GetNisNetworkMetricsResponseBodyData &) = default ;
    GetNisNetworkMetricsResponseBodyData(GetNisNetworkMetricsResponseBodyData &&) = default ;
    GetNisNetworkMetricsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkMetricsResponseBodyData() = default ;
    GetNisNetworkMetricsResponseBodyData& operator=(const GetNisNetworkMetricsResponseBodyData &) = default ;
    GetNisNetworkMetricsResponseBodyData& operator=(GetNisNetworkMetricsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->unit_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics>) };
    inline vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics>) };
    inline GetNisNetworkMetricsResponseBodyData& setMetrics(const vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetNisNetworkMetricsResponseBodyData& setMetrics(vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetNisNetworkMetricsResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<vector<Models::GetNisNetworkMetricsResponseBodyDataMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
