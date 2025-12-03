// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODYPODMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceMetricsResponseBodyPodMetricsMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class GetInstanceMetricsResponseBodyPodMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMetricsResponseBodyPodMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMetricsResponseBodyPodMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
    };
    GetInstanceMetricsResponseBodyPodMetrics() = default ;
    GetInstanceMetricsResponseBodyPodMetrics(const GetInstanceMetricsResponseBodyPodMetrics &) = default ;
    GetInstanceMetricsResponseBodyPodMetrics(GetInstanceMetricsResponseBodyPodMetrics &&) = default ;
    GetInstanceMetricsResponseBodyPodMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMetricsResponseBodyPodMetrics() = default ;
    GetInstanceMetricsResponseBodyPodMetrics& operator=(const GetInstanceMetricsResponseBodyPodMetrics &) = default ;
    GetInstanceMetricsResponseBodyPodMetrics& operator=(GetInstanceMetricsResponseBodyPodMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->podId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics>) };
    inline vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics>) };
    inline GetInstanceMetricsResponseBodyPodMetrics& setMetrics(const vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetInstanceMetricsResponseBodyPodMetrics& setMetrics(vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline GetInstanceMetricsResponseBodyPodMetrics& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceMetricsResponseBodyPodMetricsMetrics>> metrics_ = nullptr;
    // Pod ID。
    std::shared_ptr<string> podId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
