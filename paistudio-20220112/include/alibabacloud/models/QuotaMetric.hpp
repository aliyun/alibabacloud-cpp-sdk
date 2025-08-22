// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAMETRIC_HPP_
#define ALIBABACLOUD_MODELS_QUOTAMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Metric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaMetric& obj) { 
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    QuotaMetric() = default ;
    QuotaMetric(const QuotaMetric &) = default ;
    QuotaMetric(QuotaMetric &&) = default ;
    QuotaMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaMetric() = default ;
    QuotaMetric& operator=(const QuotaMetric &) = default ;
    QuotaMetric& operator=(QuotaMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->GPUType_ != nullptr
        && this->metrics_ != nullptr; };
    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline QuotaMetric& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> metrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline QuotaMetric& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline QuotaMetric& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<vector<Metric>> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
