// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#define ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class EcsSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcsSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EcsImageId, ecsImageId_);
      DARABONBA_PTR_TO_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuGUSpec, gpuGUSpec_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(GpuTypeAlias, gpuTypeAlias_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MachineModel, machineModel_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(PlannedCpu, plannedCpu_);
      DARABONBA_PTR_TO_JSON(PlannedMemory, plannedMemory_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SupportGPUShare, supportGPUShare_);
      DARABONBA_PTR_TO_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_TO_JSON(SupportSetNetworkCardIndex, supportSetNetworkCardIndex_);
    };
    friend void from_json(const Darabonba::Json& j, EcsSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EcsImageId, ecsImageId_);
      DARABONBA_PTR_FROM_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuGUSpec, gpuGUSpec_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(GpuTypeAlias, gpuTypeAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MachineModel, machineModel_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(PlannedCpu, plannedCpu_);
      DARABONBA_PTR_FROM_JSON(PlannedMemory, plannedMemory_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SupportGPUShare, supportGPUShare_);
      DARABONBA_PTR_FROM_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_FROM_JSON(SupportSetNetworkCardIndex, supportSetNetworkCardIndex_);
    };
    EcsSpec() = default ;
    EcsSpec(const EcsSpec &) = default ;
    EcsSpec(EcsSpec &&) = default ;
    EcsSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcsSpec() = default ;
    EcsSpec& operator=(const EcsSpec &) = default ;
    EcsSpec& operator=(EcsSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && return this->cpu_ == nullptr && return this->ecsImageId_ == nullptr && return this->eriQuantity_ == nullptr && return this->gpu_ == nullptr && return this->gpuGUSpec_ == nullptr
        && return this->gpuMemory_ == nullptr && return this->gpuType_ == nullptr && return this->gpuTypeAlias_ == nullptr && return this->instanceType_ == nullptr && return this->machineModel_ == nullptr
        && return this->memory_ == nullptr && return this->networkMode_ == nullptr && return this->plannedCpu_ == nullptr && return this->plannedMemory_ == nullptr && return this->resourceType_ == nullptr
        && return this->supportGPUShare_ == nullptr && return this->supportRDMA_ == nullptr && return this->supportSetNetworkCardIndex_ == nullptr; };
    // acceleratorType Field Functions 
    bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
    void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
    inline string acceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
    inline EcsSpec& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline EcsSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // ecsImageId Field Functions 
    bool hasEcsImageId() const { return this->ecsImageId_ != nullptr;};
    void deleteEcsImageId() { this->ecsImageId_ = nullptr;};
    inline string ecsImageId() const { DARABONBA_PTR_GET_DEFAULT(ecsImageId_, "") };
    inline EcsSpec& setEcsImageId(string ecsImageId) { DARABONBA_PTR_SET_VALUE(ecsImageId_, ecsImageId) };


    // eriQuantity Field Functions 
    bool hasEriQuantity() const { return this->eriQuantity_ != nullptr;};
    void deleteEriQuantity() { this->eriQuantity_ = nullptr;};
    inline int32_t eriQuantity() const { DARABONBA_PTR_GET_DEFAULT(eriQuantity_, 0) };
    inline EcsSpec& setEriQuantity(int32_t eriQuantity) { DARABONBA_PTR_SET_VALUE(eriQuantity_, eriQuantity) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline EcsSpec& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuGUSpec Field Functions 
    bool hasGpuGUSpec() const { return this->gpuGUSpec_ != nullptr;};
    void deleteGpuGUSpec() { this->gpuGUSpec_ = nullptr;};
    inline string gpuGUSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuGUSpec_, "") };
    inline EcsSpec& setGpuGUSpec(string gpuGUSpec) { DARABONBA_PTR_SET_VALUE(gpuGUSpec_, gpuGUSpec) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int32_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
    inline EcsSpec& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline EcsSpec& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // gpuTypeAlias Field Functions 
    bool hasGpuTypeAlias() const { return this->gpuTypeAlias_ != nullptr;};
    void deleteGpuTypeAlias() { this->gpuTypeAlias_ = nullptr;};
    inline string gpuTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(gpuTypeAlias_, "") };
    inline EcsSpec& setGpuTypeAlias(string gpuTypeAlias) { DARABONBA_PTR_SET_VALUE(gpuTypeAlias_, gpuTypeAlias) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline EcsSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // machineModel Field Functions 
    bool hasMachineModel() const { return this->machineModel_ != nullptr;};
    void deleteMachineModel() { this->machineModel_ = nullptr;};
    inline string machineModel() const { DARABONBA_PTR_GET_DEFAULT(machineModel_, "") };
    inline EcsSpec& setMachineModel(string machineModel) { DARABONBA_PTR_SET_VALUE(machineModel_, machineModel) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline EcsSpec& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline EcsSpec& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // plannedCpu Field Functions 
    bool hasPlannedCpu() const { return this->plannedCpu_ != nullptr;};
    void deletePlannedCpu() { this->plannedCpu_ = nullptr;};
    inline int32_t plannedCpu() const { DARABONBA_PTR_GET_DEFAULT(plannedCpu_, 0) };
    inline EcsSpec& setPlannedCpu(int32_t plannedCpu) { DARABONBA_PTR_SET_VALUE(plannedCpu_, plannedCpu) };


    // plannedMemory Field Functions 
    bool hasPlannedMemory() const { return this->plannedMemory_ != nullptr;};
    void deletePlannedMemory() { this->plannedMemory_ = nullptr;};
    inline int32_t plannedMemory() const { DARABONBA_PTR_GET_DEFAULT(plannedMemory_, 0) };
    inline EcsSpec& setPlannedMemory(int32_t plannedMemory) { DARABONBA_PTR_SET_VALUE(plannedMemory_, plannedMemory) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EcsSpec& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // supportGPUShare Field Functions 
    bool hasSupportGPUShare() const { return this->supportGPUShare_ != nullptr;};
    void deleteSupportGPUShare() { this->supportGPUShare_ = nullptr;};
    inline bool supportGPUShare() const { DARABONBA_PTR_GET_DEFAULT(supportGPUShare_, false) };
    inline EcsSpec& setSupportGPUShare(bool supportGPUShare) { DARABONBA_PTR_SET_VALUE(supportGPUShare_, supportGPUShare) };


    // supportRDMA Field Functions 
    bool hasSupportRDMA() const { return this->supportRDMA_ != nullptr;};
    void deleteSupportRDMA() { this->supportRDMA_ = nullptr;};
    inline bool supportRDMA() const { DARABONBA_PTR_GET_DEFAULT(supportRDMA_, false) };
    inline EcsSpec& setSupportRDMA(bool supportRDMA) { DARABONBA_PTR_SET_VALUE(supportRDMA_, supportRDMA) };


    // supportSetNetworkCardIndex Field Functions 
    bool hasSupportSetNetworkCardIndex() const { return this->supportSetNetworkCardIndex_ != nullptr;};
    void deleteSupportSetNetworkCardIndex() { this->supportSetNetworkCardIndex_ = nullptr;};
    inline bool supportSetNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(supportSetNetworkCardIndex_, false) };
    inline EcsSpec& setSupportSetNetworkCardIndex(bool supportSetNetworkCardIndex) { DARABONBA_PTR_SET_VALUE(supportSetNetworkCardIndex_, supportSetNetworkCardIndex) };


  protected:
    std::shared_ptr<string> acceleratorType_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> ecsImageId_ = nullptr;
    std::shared_ptr<int32_t> eriQuantity_ = nullptr;
    std::shared_ptr<int32_t> gpu_ = nullptr;
    std::shared_ptr<string> gpuGUSpec_ = nullptr;
    std::shared_ptr<int32_t> gpuMemory_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<string> gpuTypeAlias_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> machineModel_ = nullptr;
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<string> networkMode_ = nullptr;
    std::shared_ptr<int32_t> plannedCpu_ = nullptr;
    std::shared_ptr<int32_t> plannedMemory_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<bool> supportGPUShare_ = nullptr;
    std::shared_ptr<bool> supportRDMA_ = nullptr;
    std::shared_ptr<bool> supportSetNetworkCardIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
