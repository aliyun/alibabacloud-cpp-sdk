// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODYINSTANCEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODYINSTANCEMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics() = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics(const ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics &) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics(ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics &&) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics() = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& operator=(const ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics &) = default ;
    ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& operator=(ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->metrics_ != nullptr && this->nodeName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics>) };
    inline vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics>) };
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& setMetrics(const vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& setMetrics(vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<Models::ListTrainingJobInstanceMetricsResponseBodyInstanceMetricsMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
