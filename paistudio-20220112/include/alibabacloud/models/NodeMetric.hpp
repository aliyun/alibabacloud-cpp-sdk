// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_NODEMETRIC_HPP_
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
  class NodeMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeMetric& obj) { 
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NodeID, nodeID_);
    };
    friend void from_json(const Darabonba::Json& j, NodeMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NodeID, nodeID_);
    };
    NodeMetric() = default ;
    NodeMetric(const NodeMetric &) = default ;
    NodeMetric(NodeMetric &&) = default ;
    NodeMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeMetric() = default ;
    NodeMetric& operator=(const NodeMetric &) = default ;
    NodeMetric& operator=(NodeMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->GPUType_ == nullptr
        && this->metrics_ == nullptr && this->nodeID_ == nullptr; };
    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline NodeMetric& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline NodeMetric& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline NodeMetric& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nodeID Field Functions 
    bool hasNodeID() const { return this->nodeID_ != nullptr;};
    void deleteNodeID() { this->nodeID_ = nullptr;};
    inline string getNodeID() const { DARABONBA_PTR_GET_DEFAULT(nodeID_, "") };
    inline NodeMetric& setNodeID(string nodeID) { DARABONBA_PTR_SET_VALUE(nodeID_, nodeID) };


  protected:
    shared_ptr<string> GPUType_ {};
    shared_ptr<vector<Metric>> metrics_ {};
    shared_ptr<string> nodeID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
