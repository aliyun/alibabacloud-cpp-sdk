// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQuotaUsageResponseBodyDataPlot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUsageResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(plot, plot_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUsageResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(plot, plot_);
    };
    GetQuotaUsageResponseBodyData() = default ;
    GetQuotaUsageResponseBodyData(const GetQuotaUsageResponseBodyData &) = default ;
    GetQuotaUsageResponseBodyData(GetQuotaUsageResponseBodyData &&) = default ;
    GetQuotaUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUsageResponseBodyData() = default ;
    GetQuotaUsageResponseBodyData& operator=(const GetQuotaUsageResponseBodyData &) = default ;
    GetQuotaUsageResponseBodyData& operator=(GetQuotaUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metrics_ != nullptr
        && this->plot_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline     const Darabonba::Json & metrics() const { DARABONBA_GET(metrics_) };
    Darabonba::Json & metrics() { DARABONBA_GET(metrics_) };
    inline GetQuotaUsageResponseBodyData& setMetrics(const Darabonba::Json & metrics) { DARABONBA_SET_VALUE(metrics_, metrics) };
    inline GetQuotaUsageResponseBodyData& setMetrics(Darabonba::Json & metrics) { DARABONBA_SET_RVALUE(metrics_, metrics) };


    // plot Field Functions 
    bool hasPlot() const { return this->plot_ != nullptr;};
    void deletePlot() { this->plot_ = nullptr;};
    inline const vector<Models::GetQuotaUsageResponseBodyDataPlot> & plot() const { DARABONBA_PTR_GET_CONST(plot_, vector<Models::GetQuotaUsageResponseBodyDataPlot>) };
    inline vector<Models::GetQuotaUsageResponseBodyDataPlot> plot() { DARABONBA_PTR_GET(plot_, vector<Models::GetQuotaUsageResponseBodyDataPlot>) };
    inline GetQuotaUsageResponseBodyData& setPlot(const vector<Models::GetQuotaUsageResponseBodyDataPlot> & plot) { DARABONBA_PTR_SET_VALUE(plot_, plot) };
    inline GetQuotaUsageResponseBodyData& setPlot(vector<Models::GetQuotaUsageResponseBodyDataPlot> && plot) { DARABONBA_PTR_SET_RVALUE(plot_, plot) };


  protected:
    // The metric results.
    Darabonba::Json metrics_ = nullptr;
    // The information about the chart.
    std::shared_ptr<vector<Models::GetQuotaUsageResponseBodyDataPlot>> plot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
