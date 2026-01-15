// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODETYPE_HPP_
#define ALIBABACLOUD_MODELS_NODETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeType& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(AllocatableCPU, allocatableCPU_);
      DARABONBA_PTR_TO_JSON(AllocatableMemory, allocatableMemory_);
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(SystemReservedCPU, systemReservedCPU_);
      DARABONBA_PTR_TO_JSON(SystemReservedMemory, systemReservedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, NodeType& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(AllocatableCPU, allocatableCPU_);
      DARABONBA_PTR_FROM_JSON(AllocatableMemory, allocatableMemory_);
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(SystemReservedCPU, systemReservedCPU_);
      DARABONBA_PTR_FROM_JSON(SystemReservedMemory, systemReservedMemory_);
    };
    NodeType() = default ;
    NodeType(const NodeType &) = default ;
    NodeType(NodeType &&) = default ;
    NodeType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeType() = default ;
    NodeType& operator=(const NodeType &) = default ;
    NodeType& operator=(NodeType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->allocatableCPU_ == nullptr && this->allocatableMemory_ == nullptr && this->CPU_ == nullptr && this->GPU_ == nullptr && this->GPUMemory_ == nullptr
        && this->GPUType_ == nullptr && this->memory_ == nullptr && this->nodeType_ == nullptr && this->systemReservedCPU_ == nullptr && this->systemReservedMemory_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline NodeType& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // allocatableCPU Field Functions 
    bool hasAllocatableCPU() const { return this->allocatableCPU_ != nullptr;};
    void deleteAllocatableCPU() { this->allocatableCPU_ = nullptr;};
    inline string getAllocatableCPU() const { DARABONBA_PTR_GET_DEFAULT(allocatableCPU_, "") };
    inline NodeType& setAllocatableCPU(string allocatableCPU) { DARABONBA_PTR_SET_VALUE(allocatableCPU_, allocatableCPU) };


    // allocatableMemory Field Functions 
    bool hasAllocatableMemory() const { return this->allocatableMemory_ != nullptr;};
    void deleteAllocatableMemory() { this->allocatableMemory_ = nullptr;};
    inline string getAllocatableMemory() const { DARABONBA_PTR_GET_DEFAULT(allocatableMemory_, "") };
    inline NodeType& setAllocatableMemory(string allocatableMemory) { DARABONBA_PTR_SET_VALUE(allocatableMemory_, allocatableMemory) };


    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline NodeType& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline NodeType& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline string getGPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, "") };
    inline NodeType& setGPUMemory(string GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline NodeType& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline NodeType& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline NodeType& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // systemReservedCPU Field Functions 
    bool hasSystemReservedCPU() const { return this->systemReservedCPU_ != nullptr;};
    void deleteSystemReservedCPU() { this->systemReservedCPU_ = nullptr;};
    inline string getSystemReservedCPU() const { DARABONBA_PTR_GET_DEFAULT(systemReservedCPU_, "") };
    inline NodeType& setSystemReservedCPU(string systemReservedCPU) { DARABONBA_PTR_SET_VALUE(systemReservedCPU_, systemReservedCPU) };


    // systemReservedMemory Field Functions 
    bool hasSystemReservedMemory() const { return this->systemReservedMemory_ != nullptr;};
    void deleteSystemReservedMemory() { this->systemReservedMemory_ = nullptr;};
    inline string getSystemReservedMemory() const { DARABONBA_PTR_GET_DEFAULT(systemReservedMemory_, "") };
    inline NodeType& setSystemReservedMemory(string systemReservedMemory) { DARABONBA_PTR_SET_VALUE(systemReservedMemory_, systemReservedMemory) };


  protected:
    shared_ptr<string> acceleratorType_ {};
    shared_ptr<string> allocatableCPU_ {};
    shared_ptr<string> allocatableMemory_ {};
    shared_ptr<string> CPU_ {};
    shared_ptr<string> GPU_ {};
    shared_ptr<string> GPUMemory_ {};
    shared_ptr<string> GPUType_ {};
    shared_ptr<string> memory_ {};
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> systemReservedCPU_ {};
    shared_ptr<string> systemReservedMemory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
