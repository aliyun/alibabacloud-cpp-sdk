// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PODMETRIC_HPP_
#define ALIBABACLOUD_MODELS_PODMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Metric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class PodMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PodMetric& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
    };
    friend void from_json(const Darabonba::Json& j, PodMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
    };
    PodMetric() = default ;
    PodMetric(const PodMetric &) = default ;
    PodMetric(PodMetric &&) = default ;
    PodMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PodMetric() = default ;
    PodMetric& operator=(const PodMetric &) = default ;
    PodMetric& operator=(PodMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->podId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> metrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline PodMetric& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline PodMetric& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline PodMetric& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


  protected:
    std::shared_ptr<vector<Metric>> metrics_ = nullptr;
    std::shared_ptr<string> podId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
