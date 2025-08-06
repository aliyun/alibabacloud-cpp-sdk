// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNODEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetNodeMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(NodesMetrics, nodesMetrics_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(NodesMetrics, nodesMetrics_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
    };
    GetNodeMetricsResponseBody() = default ;
    GetNodeMetricsResponseBody(const GetNodeMetricsResponseBody &) = default ;
    GetNodeMetricsResponseBody(GetNodeMetricsResponseBody &&) = default ;
    GetNodeMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeMetricsResponseBody() = default ;
    GetNodeMetricsResponseBody& operator=(const GetNodeMetricsResponseBody &) = default ;
    GetNodeMetricsResponseBody& operator=(GetNodeMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricType_ != nullptr
        && this->nodesMetrics_ != nullptr && this->resourceGroupID_ != nullptr; };
    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetNodeMetricsResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // nodesMetrics Field Functions 
    bool hasNodesMetrics() const { return this->nodesMetrics_ != nullptr;};
    void deleteNodesMetrics() { this->nodesMetrics_ = nullptr;};
    inline const vector<NodeMetric> & nodesMetrics() const { DARABONBA_PTR_GET_CONST(nodesMetrics_, vector<NodeMetric>) };
    inline vector<NodeMetric> nodesMetrics() { DARABONBA_PTR_GET(nodesMetrics_, vector<NodeMetric>) };
    inline GetNodeMetricsResponseBody& setNodesMetrics(const vector<NodeMetric> & nodesMetrics) { DARABONBA_PTR_SET_VALUE(nodesMetrics_, nodesMetrics) };
    inline GetNodeMetricsResponseBody& setNodesMetrics(vector<NodeMetric> && nodesMetrics) { DARABONBA_PTR_SET_RVALUE(nodesMetrics_, nodesMetrics) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline GetNodeMetricsResponseBody& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


  protected:
    std::shared_ptr<string> metricType_ = nullptr;
    std::shared_ptr<vector<NodeMetric>> nodesMetrics_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
