// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODYECSSPECS_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODYECSSPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseJobResponseBodyEcsSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseJobResponseBodyEcsSpecs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseJobResponseBodyEcsSpecs& obj) { 
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
    GetKnowledgeBaseJobResponseBodyEcsSpecs() = default ;
    GetKnowledgeBaseJobResponseBodyEcsSpecs(const GetKnowledgeBaseJobResponseBodyEcsSpecs &) = default ;
    GetKnowledgeBaseJobResponseBodyEcsSpecs(GetKnowledgeBaseJobResponseBodyEcsSpecs &&) = default ;
    GetKnowledgeBaseJobResponseBodyEcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseJobResponseBodyEcsSpecs() = default ;
    GetKnowledgeBaseJobResponseBodyEcsSpecs& operator=(const GetKnowledgeBaseJobResponseBodyEcsSpecs &) = default ;
    GetKnowledgeBaseJobResponseBodyEcsSpecs& operator=(GetKnowledgeBaseJobResponseBodyEcsSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->driver_ == nullptr && return this->GPU_ == nullptr && return this->GPUType_ == nullptr && return this->instanceType_ == nullptr && return this->memory_ == nullptr
        && return this->podCount_ == nullptr && return this->sharedMemory_ == nullptr && return this->type_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline int32_t GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t podCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline int32_t sharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetKnowledgeBaseJobResponseBodyEcsSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // CPU核数
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // 驱动版本
    std::shared_ptr<string> driver_ = nullptr;
    // GPU卡数
    std::shared_ptr<int32_t> GPU_ = nullptr;
    // GPU类型
    std::shared_ptr<string> GPUType_ = nullptr;
    // 机型名称
    std::shared_ptr<string> instanceType_ = nullptr;
    // 内存大小
    std::shared_ptr<int32_t> memory_ = nullptr;
    // 副本数量
    std::shared_ptr<int32_t> podCount_ = nullptr;
    // 共享内存容量
    std::shared_ptr<int32_t> sharedMemory_ = nullptr;
    // 节点类型
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
