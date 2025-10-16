// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODYNODEINSTANCETYPEMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINSTANCETYPERESPONSEBODYNODEINSTANCETYPEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceTypeFamily, nodeInstanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
    };
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() = default ;
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels(const ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels &) = default ;
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels(ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels &&) = default ;
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() = default ;
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& operator=(const ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels &) = default ;
    ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& operator=(ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->gpu_ == nullptr && return this->gpuMemory_ == nullptr && return this->maxCapacity_ == nullptr && return this->memory_ == nullptr && return this->nodeInstanceType_ == nullptr
        && return this->nodeInstanceTypeFamily_ == nullptr && return this->nodeTypeName_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline string gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int64_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // maxCapacity Field Functions 
    bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
    void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
    inline int32_t maxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // nodeInstanceTypeFamily Field Functions 
    bool hasNodeInstanceTypeFamily() const { return this->nodeInstanceTypeFamily_ != nullptr;};
    void deleteNodeInstanceTypeFamily() { this->nodeInstanceTypeFamily_ = nullptr;};
    inline string nodeInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceTypeFamily_, "") };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setNodeInstanceTypeFamily(string nodeInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(nodeInstanceTypeFamily_, nodeInstanceTypeFamily) };


    // nodeTypeName Field Functions 
    bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
    void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
    inline string nodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
    inline ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<string> cpu_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<string> gpu_ = nullptr;
    // The GPU size. Unit: MB.
    std::shared_ptr<int64_t> gpuMemory_ = nullptr;
    // The maximum number of sessions to which a resource can connect at the same time. If a resource connects to a large number of sessions at the same time, user experience can be compromised. The value range varies based on the resource type. The following items describe the value ranges of different resource types:
    // 
    // *   appstreaming.general.4c8g: 1 to 2
    // *   appstreaming.general.8c16g: 1 to 4
    // *   appstreaming.vgpu.8c16g.4g: 1 to 4
    // *   appstreaming.vgpu.8c31g.16g: 1 to 4
    // *   appstreaming.vgpu.14c93g.12g: 1 to 6
    std::shared_ptr<int32_t> maxCapacity_ = nullptr;
    // The memory size. Unit: MB.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The ID of the resource type.
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    // The resource type family.
    // 
    // Valid values:
    // 
    // *   appstreaming.general: WUYING - General
    // *   appstreaming.vgpu: WUYING - Graphics
    std::shared_ptr<string> nodeInstanceTypeFamily_ = nullptr;
    // The name of the resource type.
    std::shared_ptr<string> nodeTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
