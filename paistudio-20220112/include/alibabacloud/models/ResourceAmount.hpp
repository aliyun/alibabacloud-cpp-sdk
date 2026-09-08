// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEAMOUNT_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEAMOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceAmount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceAmount& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(GPUMemoryBytes, GPUMemoryBytes_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceAmount& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(GPUMemoryBytes, GPUMemoryBytes_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    ResourceAmount() = default ;
    ResourceAmount(const ResourceAmount &) = default ;
    ResourceAmount(ResourceAmount &&) = default ;
    ResourceAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceAmount() = default ;
    ResourceAmount& operator=(const ResourceAmount &) = default ;
    ResourceAmount& operator=(ResourceAmount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUMemory_ == nullptr && this->GPUMemoryBytes_ == nullptr && this->GPUType_ == nullptr && this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline ResourceAmount& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline ResourceAmount& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline string getGPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, "") };
    inline ResourceAmount& setGPUMemory(string GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // GPUMemoryBytes Field Functions 
    bool hasGPUMemoryBytes() const { return this->GPUMemoryBytes_ != nullptr;};
    void deleteGPUMemoryBytes() { this->GPUMemoryBytes_ = nullptr;};
    inline int64_t getGPUMemoryBytes() const { DARABONBA_PTR_GET_DEFAULT(GPUMemoryBytes_, 0L) };
    inline ResourceAmount& setGPUMemoryBytes(int64_t GPUMemoryBytes) { DARABONBA_PTR_SET_VALUE(GPUMemoryBytes_, GPUMemoryBytes) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ResourceAmount& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ResourceAmount& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // Total CPU
    shared_ptr<string> CPU_ {};
    // Total GPU cards
    shared_ptr<string> GPU_ {};
    shared_ptr<string> GPUMemory_ {};
    shared_ptr<int64_t> GPUMemoryBytes_ {};
    // GPU card type
    shared_ptr<string> GPUType_ {};
    // Total memory
    shared_ptr<string> memory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
