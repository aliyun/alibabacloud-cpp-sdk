// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#define ALIBABACLOUD_MODELS_ECSSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class EcsSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcsSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, EcsSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
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
    virtual bool empty() const override { return this->CPU_ == nullptr
        && this->driver_ == nullptr && this->GPU_ == nullptr && this->GPUType_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr
        && this->podCount_ == nullptr && this->sharedMemory_ == nullptr && this->type_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline EcsSpec& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline EcsSpec& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline int32_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
    inline EcsSpec& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline EcsSpec& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline EcsSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline EcsSpec& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline EcsSpec& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
    inline EcsSpec& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline EcsSpec& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // CPU核数
    shared_ptr<int32_t> CPU_ {};
    // 驱动版本
    shared_ptr<string> driver_ {};
    // GPU卡数
    shared_ptr<int32_t> GPU_ {};
    // GPU类型
    shared_ptr<string> GPUType_ {};
    // 机型名称
    shared_ptr<string> instanceType_ {};
    // 内存大小
    shared_ptr<int32_t> memory_ {};
    // 副本数量
    shared_ptr<int32_t> podCount_ {};
    // 共享内存容量
    shared_ptr<int32_t> sharedMemory_ {};
    // 节点类型
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
