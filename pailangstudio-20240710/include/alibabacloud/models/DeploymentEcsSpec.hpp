// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTECSSPEC_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTECSSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentEcsSpecComputingInstanceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentEcsSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentEcsSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(ComputingInstanceConfig, computingInstanceConfig_);
      DARABONBA_PTR_TO_JSON(ExtraEphemeralStorage, extraEphemeralStorage_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(GPUCorePercentage, GPUCorePercentage_);
      DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentEcsSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(ComputingInstanceConfig, computingInstanceConfig_);
      DARABONBA_PTR_FROM_JSON(ExtraEphemeralStorage, extraEphemeralStorage_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(GPUCorePercentage, GPUCorePercentage_);
      DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(ResourceBurstable, resourceBurstable_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
    };
    DeploymentEcsSpec() = default ;
    DeploymentEcsSpec(const DeploymentEcsSpec &) = default ;
    DeploymentEcsSpec(DeploymentEcsSpec &&) = default ;
    DeploymentEcsSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentEcsSpec() = default ;
    DeploymentEcsSpec& operator=(const DeploymentEcsSpec &) = default ;
    DeploymentEcsSpec& operator=(DeploymentEcsSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->computingInstanceConfig_ == nullptr && return this->extraEphemeralStorage_ == nullptr && return this->GPU_ == nullptr && return this->GPUCorePercentage_ == nullptr && return this->GPUMemory_ == nullptr
        && return this->GPUType_ == nullptr && return this->instanceType_ == nullptr && return this->memory_ == nullptr && return this->podCount_ == nullptr && return this->quotaId_ == nullptr
        && return this->quotaType_ == nullptr && return this->resourceBurstable_ == nullptr && return this->resourceId_ == nullptr && return this->sharedMemory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline int32_t CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
    inline DeploymentEcsSpec& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // computingInstanceConfig Field Functions 
    bool hasComputingInstanceConfig() const { return this->computingInstanceConfig_ != nullptr;};
    void deleteComputingInstanceConfig() { this->computingInstanceConfig_ = nullptr;};
    inline const Models::DeploymentEcsSpecComputingInstanceConfig & computingInstanceConfig() const { DARABONBA_PTR_GET_CONST(computingInstanceConfig_, Models::DeploymentEcsSpecComputingInstanceConfig) };
    inline Models::DeploymentEcsSpecComputingInstanceConfig computingInstanceConfig() { DARABONBA_PTR_GET(computingInstanceConfig_, Models::DeploymentEcsSpecComputingInstanceConfig) };
    inline DeploymentEcsSpec& setComputingInstanceConfig(const Models::DeploymentEcsSpecComputingInstanceConfig & computingInstanceConfig) { DARABONBA_PTR_SET_VALUE(computingInstanceConfig_, computingInstanceConfig) };
    inline DeploymentEcsSpec& setComputingInstanceConfig(Models::DeploymentEcsSpecComputingInstanceConfig && computingInstanceConfig) { DARABONBA_PTR_SET_RVALUE(computingInstanceConfig_, computingInstanceConfig) };


    // extraEphemeralStorage Field Functions 
    bool hasExtraEphemeralStorage() const { return this->extraEphemeralStorage_ != nullptr;};
    void deleteExtraEphemeralStorage() { this->extraEphemeralStorage_ = nullptr;};
    inline int32_t extraEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(extraEphemeralStorage_, 0) };
    inline DeploymentEcsSpec& setExtraEphemeralStorage(int32_t extraEphemeralStorage) { DARABONBA_PTR_SET_VALUE(extraEphemeralStorage_, extraEphemeralStorage) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline int32_t GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
    inline DeploymentEcsSpec& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // GPUCorePercentage Field Functions 
    bool hasGPUCorePercentage() const { return this->GPUCorePercentage_ != nullptr;};
    void deleteGPUCorePercentage() { this->GPUCorePercentage_ = nullptr;};
    inline int32_t GPUCorePercentage() const { DARABONBA_PTR_GET_DEFAULT(GPUCorePercentage_, 0) };
    inline DeploymentEcsSpec& setGPUCorePercentage(int32_t GPUCorePercentage) { DARABONBA_PTR_SET_VALUE(GPUCorePercentage_, GPUCorePercentage) };


    // GPUMemory Field Functions 
    bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
    void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
    inline int32_t GPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0) };
    inline DeploymentEcsSpec& setGPUMemory(int32_t GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline DeploymentEcsSpec& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DeploymentEcsSpec& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DeploymentEcsSpec& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int32_t podCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
    inline DeploymentEcsSpec& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline DeploymentEcsSpec& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline DeploymentEcsSpec& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // resourceBurstable Field Functions 
    bool hasResourceBurstable() const { return this->resourceBurstable_ != nullptr;};
    void deleteResourceBurstable() { this->resourceBurstable_ = nullptr;};
    inline bool resourceBurstable() const { DARABONBA_PTR_GET_DEFAULT(resourceBurstable_, false) };
    inline DeploymentEcsSpec& setResourceBurstable(bool resourceBurstable) { DARABONBA_PTR_SET_VALUE(resourceBurstable_, resourceBurstable) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DeploymentEcsSpec& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sharedMemory Field Functions 
    bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
    void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
    inline int32_t sharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
    inline DeploymentEcsSpec& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


  protected:
    // CPU信息
    std::shared_ptr<int32_t> CPU_ = nullptr;
    // 竞价资源配置
    std::shared_ptr<Models::DeploymentEcsSpecComputingInstanceConfig> computingInstanceConfig_ = nullptr;
    // 额外系统盘
    std::shared_ptr<int32_t> extraEphemeralStorage_ = nullptr;
    // GPU信息
    std::shared_ptr<int32_t> GPU_ = nullptr;
    // GPU算力占比
    std::shared_ptr<int32_t> GPUCorePercentage_ = nullptr;
    // GPU显存
    std::shared_ptr<int32_t> GPUMemory_ = nullptr;
    // GPU类型
    std::shared_ptr<string> GPUType_ = nullptr;
    // 实例类型
    std::shared_ptr<string> instanceType_ = nullptr;
    // 内存信息
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Pod数量
    std::shared_ptr<int32_t> podCount_ = nullptr;
    // 资源配额ID
    std::shared_ptr<string> quotaId_ = nullptr;
    // 资源配额类型
    std::shared_ptr<string> quotaType_ = nullptr;
    // 是否启用弹性资源池
    std::shared_ptr<bool> resourceBurstable_ = nullptr;
    // 资源组ID
    std::shared_ptr<string> resourceId_ = nullptr;
    // 共享内存
    std::shared_ptr<int32_t> sharedMemory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
