// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGRUNMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOGRUNMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class LogRunMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogRunMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, LogRunMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    LogRunMetricsRequest() = default ;
    LogRunMetricsRequest(const LogRunMetricsRequest &) = default ;
    LogRunMetricsRequest(LogRunMetricsRequest &&) = default ;
    LogRunMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogRunMetricsRequest() = default ;
    LogRunMetricsRequest& operator=(const LogRunMetricsRequest &) = default ;
    LogRunMetricsRequest& operator=(LogRunMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<RunMetric> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<RunMetric>) };
    inline vector<RunMetric> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<RunMetric>) };
    inline LogRunMetricsRequest& setMetrics(const vector<RunMetric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline LogRunMetricsRequest& setMetrics(vector<RunMetric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The metrics.
    shared_ptr<vector<RunMetric>> metrics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
