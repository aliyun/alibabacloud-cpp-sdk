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
namespace PaiDlc20201203
{
namespace Models
{
  class NodeMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeMetric& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, NodeMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
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
    virtual bool empty() const override { this->metrics_ != nullptr
        && this->nodeName_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Metric> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Metric>) };
    inline vector<Metric> metrics() { DARABONBA_PTR_GET(metrics_, vector<Metric>) };
    inline NodeMetric& setMetrics(const vector<Metric> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline NodeMetric& setMetrics(vector<Metric> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline NodeMetric& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<vector<Metric>> metrics_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
