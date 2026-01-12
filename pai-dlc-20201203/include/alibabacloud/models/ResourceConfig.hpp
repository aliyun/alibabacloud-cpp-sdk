// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_RESOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ResourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
    };
    ResourceConfig() = default ;
    ResourceConfig(const ResourceConfig &) = default ;
    ResourceConfig(ResourceConfig &&) = default ;
    ResourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceConfig() = default ;
    ResourceConfig& operator=(const ResourceConfig &) = default ;
    ResourceConfig& operator=(ResourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->memory_ == nullptr && this->sharedMemory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline ResourceConfig& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline ResourceConfig& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline ResourceConfig& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ResourceConfig& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline string getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, "") };
    inline ResourceConfig& setSharedMemory(string sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


  protected:
    shared_ptr<string> CPU_ {};
    shared_ptr<string> GPU_ {};
    shared_ptr<string> GPUType_ {};
    shared_ptr<string> memory_ {};
    shared_ptr<string> sharedMemory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
