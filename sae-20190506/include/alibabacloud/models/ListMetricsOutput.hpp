// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETRICSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTMETRICSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/MetricInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListMetricsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetricsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetricsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
    };
    ListMetricsOutput() = default ;
    ListMetricsOutput(const ListMetricsOutput &) = default ;
    ListMetricsOutput(ListMetricsOutput &&) = default ;
    ListMetricsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetricsOutput() = default ;
    ListMetricsOutput& operator=(const ListMetricsOutput &) = default ;
    ListMetricsOutput& operator=(ListMetricsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->metrics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetricsOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const map<string, vector<MetricInfo>> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, map<string, vector<MetricInfo>>) };
    inline map<string, vector<MetricInfo>> metrics() { DARABONBA_PTR_GET(metrics_, map<string, vector<MetricInfo>>) };
    inline ListMetricsOutput& setMetrics(const map<string, vector<MetricInfo>> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListMetricsOutput& setMetrics(map<string, vector<MetricInfo>> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<map<string, vector<MetricInfo>>> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
