// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEGPUMETRIC_HPP_
#define ALIBABACLOUD_MODELS_NODEGPUMETRIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GPUMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeGPUMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeGPUMetric& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(GPUCount, GPUCount_);
      DARABONBA_PTR_TO_JSON(GPUMetrics, GPUMetrics_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(MemoryUtil, memoryUtil_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_TO_JSON(UsedMemory, usedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, NodeGPUMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(GPUCount, GPUCount_);
      DARABONBA_PTR_FROM_JSON(GPUMetrics, GPUMetrics_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(MemoryUtil, memoryUtil_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
      DARABONBA_PTR_FROM_JSON(UsedMemory, usedMemory_);
    };
    NodeGPUMetric() = default ;
    NodeGPUMetric(const NodeGPUMetric &) = default ;
    NodeGPUMetric(NodeGPUMetric &&) = default ;
    NodeGPUMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeGPUMetric() = default ;
    NodeGPUMetric& operator=(const NodeGPUMetric &) = default ;
    NodeGPUMetric& operator=(NodeGPUMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceleratorType_ != nullptr
        && this->GPUCount_ != nullptr && this->GPUMetrics_ != nullptr && this->GPUType_ != nullptr && this->memoryUtil_ != nullptr && this->nodeId_ != nullptr
        && this->nodeType_ != nullptr && this->totalMemory_ != nullptr && this->usedMemory_ != nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline NodeGPUMetric& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // GPUCount Field Functions 
    bool hasGPUCount() const { return this->GPUCount_ != nullptr;};
    void deleteGPUCount() { this->GPUCount_ = nullptr;};
    inline int32_t GPUCount() const { DARABONBA_PTR_GET_DEFAULT(GPUCount_, 0) };
    inline NodeGPUMetric& setGPUCount(int32_t GPUCount) { DARABONBA_PTR_SET_VALUE(GPUCount_, GPUCount) };


    // GPUMetrics Field Functions 
    bool hasGPUMetrics() const { return this->GPUMetrics_ != nullptr;};
    void deleteGPUMetrics() { this->GPUMetrics_ = nullptr;};
    inline const vector<GPUMetric> & GPUMetrics() const { DARABONBA_PTR_GET_CONST(GPUMetrics_, vector<GPUMetric>) };
    inline vector<GPUMetric> GPUMetrics() { DARABONBA_PTR_GET(GPUMetrics_, vector<GPUMetric>) };
    inline NodeGPUMetric& setGPUMetrics(const vector<GPUMetric> & GPUMetrics) { DARABONBA_PTR_SET_VALUE(GPUMetrics_, GPUMetrics) };
    inline NodeGPUMetric& setGPUMetrics(vector<GPUMetric> && GPUMetrics) { DARABONBA_PTR_SET_RVALUE(GPUMetrics_, GPUMetrics) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline NodeGPUMetric& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memoryUtil Field Functions 
    bool hasMemoryUtil() const { return this->memoryUtil_ != nullptr;};
    void deleteMemoryUtil() { this->memoryUtil_ = nullptr;};
    inline float memoryUtil() const { DARABONBA_PTR_GET_DEFAULT(memoryUtil_, 0.0) };
    inline NodeGPUMetric& setMemoryUtil(float memoryUtil) { DARABONBA_PTR_SET_VALUE(memoryUtil_, memoryUtil) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline NodeGPUMetric& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline NodeGPUMetric& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // totalMemory Field Functions 
    bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
    void deleteTotalMemory() { this->totalMemory_ = nullptr;};
    inline float totalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0.0) };
    inline NodeGPUMetric& setTotalMemory(float totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


    // usedMemory Field Functions 
    bool hasUsedMemory() const { return this->usedMemory_ != nullptr;};
    void deleteUsedMemory() { this->usedMemory_ = nullptr;};
    inline float usedMemory() const { DARABONBA_PTR_GET_DEFAULT(usedMemory_, 0.0) };
    inline NodeGPUMetric& setUsedMemory(float usedMemory) { DARABONBA_PTR_SET_VALUE(usedMemory_, usedMemory) };


  protected:
    std::shared_ptr<string> acceleratorType_ = nullptr;
    std::shared_ptr<int32_t> GPUCount_ = nullptr;
    std::shared_ptr<vector<GPUMetric>> GPUMetrics_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<float> memoryUtil_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<float> totalMemory_ = nullptr;
    std::shared_ptr<float> usedMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
