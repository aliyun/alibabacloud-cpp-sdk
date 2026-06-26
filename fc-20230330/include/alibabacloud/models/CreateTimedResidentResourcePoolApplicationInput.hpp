// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMEDRESIDENTRESOURCEPOOLAPPLICATIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMEDRESIDENTRESOURCEPOOLAPPLICATIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TimedPoolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateTimedResidentResourcePoolApplicationInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimedResidentResourcePoolApplicationInput& obj) { 
      DARABONBA_PTR_TO_JSON(associatedPoolId, associatedPoolId_);
      DARABONBA_PTR_TO_JSON(diskSizeInGB, diskSizeInGB_);
      DARABONBA_PTR_TO_JSON(gpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(memorySizeInGB, memorySizeInGB_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(poolName, poolName_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(timedConfig, timedConfig_);
      DARABONBA_PTR_TO_JSON(timedPoolId, timedPoolId_);
      DARABONBA_PTR_TO_JSON(totalGPUCards, totalGPUCards_);
      DARABONBA_PTR_TO_JSON(vCpuCores, vCpuCores_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimedResidentResourcePoolApplicationInput& obj) { 
      DARABONBA_PTR_FROM_JSON(associatedPoolId, associatedPoolId_);
      DARABONBA_PTR_FROM_JSON(diskSizeInGB, diskSizeInGB_);
      DARABONBA_PTR_FROM_JSON(gpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(memorySizeInGB, memorySizeInGB_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(poolName, poolName_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(timedConfig, timedConfig_);
      DARABONBA_PTR_FROM_JSON(timedPoolId, timedPoolId_);
      DARABONBA_PTR_FROM_JSON(totalGPUCards, totalGPUCards_);
      DARABONBA_PTR_FROM_JSON(vCpuCores, vCpuCores_);
    };
    CreateTimedResidentResourcePoolApplicationInput() = default ;
    CreateTimedResidentResourcePoolApplicationInput(const CreateTimedResidentResourcePoolApplicationInput &) = default ;
    CreateTimedResidentResourcePoolApplicationInput(CreateTimedResidentResourcePoolApplicationInput &&) = default ;
    CreateTimedResidentResourcePoolApplicationInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimedResidentResourcePoolApplicationInput() = default ;
    CreateTimedResidentResourcePoolApplicationInput& operator=(const CreateTimedResidentResourcePoolApplicationInput &) = default ;
    CreateTimedResidentResourcePoolApplicationInput& operator=(CreateTimedResidentResourcePoolApplicationInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedPoolId_ == nullptr
        && this->diskSizeInGB_ == nullptr && this->gpuType_ == nullptr && this->memorySizeInGB_ == nullptr && this->operationType_ == nullptr && this->poolName_ == nullptr
        && this->reason_ == nullptr && this->timedConfig_ == nullptr && this->timedPoolId_ == nullptr && this->totalGPUCards_ == nullptr && this->vCpuCores_ == nullptr; };
    // associatedPoolId Field Functions 
    bool hasAssociatedPoolId() const { return this->associatedPoolId_ != nullptr;};
    void deleteAssociatedPoolId() { this->associatedPoolId_ = nullptr;};
    inline string getAssociatedPoolId() const { DARABONBA_PTR_GET_DEFAULT(associatedPoolId_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setAssociatedPoolId(string associatedPoolId) { DARABONBA_PTR_SET_VALUE(associatedPoolId_, associatedPoolId) };


    // diskSizeInGB Field Functions 
    bool hasDiskSizeInGB() const { return this->diskSizeInGB_ != nullptr;};
    void deleteDiskSizeInGB() { this->diskSizeInGB_ = nullptr;};
    inline int64_t getDiskSizeInGB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeInGB_, 0L) };
    inline CreateTimedResidentResourcePoolApplicationInput& setDiskSizeInGB(int64_t diskSizeInGB) { DARABONBA_PTR_SET_VALUE(diskSizeInGB_, diskSizeInGB) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string getGpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // memorySizeInGB Field Functions 
    bool hasMemorySizeInGB() const { return this->memorySizeInGB_ != nullptr;};
    void deleteMemorySizeInGB() { this->memorySizeInGB_ = nullptr;};
    inline int64_t getMemorySizeInGB() const { DARABONBA_PTR_GET_DEFAULT(memorySizeInGB_, 0L) };
    inline CreateTimedResidentResourcePoolApplicationInput& setMemorySizeInGB(int64_t memorySizeInGB) { DARABONBA_PTR_SET_VALUE(memorySizeInGB_, memorySizeInGB) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const TimedPoolConfig & getTimedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, TimedPoolConfig) };
    inline TimedPoolConfig getTimedConfig() { DARABONBA_PTR_GET(timedConfig_, TimedPoolConfig) };
    inline CreateTimedResidentResourcePoolApplicationInput& setTimedConfig(const TimedPoolConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline CreateTimedResidentResourcePoolApplicationInput& setTimedConfig(TimedPoolConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


    // timedPoolId Field Functions 
    bool hasTimedPoolId() const { return this->timedPoolId_ != nullptr;};
    void deleteTimedPoolId() { this->timedPoolId_ = nullptr;};
    inline string getTimedPoolId() const { DARABONBA_PTR_GET_DEFAULT(timedPoolId_, "") };
    inline CreateTimedResidentResourcePoolApplicationInput& setTimedPoolId(string timedPoolId) { DARABONBA_PTR_SET_VALUE(timedPoolId_, timedPoolId) };


    // totalGPUCards Field Functions 
    bool hasTotalGPUCards() const { return this->totalGPUCards_ != nullptr;};
    void deleteTotalGPUCards() { this->totalGPUCards_ = nullptr;};
    inline int64_t getTotalGPUCards() const { DARABONBA_PTR_GET_DEFAULT(totalGPUCards_, 0L) };
    inline CreateTimedResidentResourcePoolApplicationInput& setTotalGPUCards(int64_t totalGPUCards) { DARABONBA_PTR_SET_VALUE(totalGPUCards_, totalGPUCards) };


    // vCpuCores Field Functions 
    bool hasVCpuCores() const { return this->vCpuCores_ != nullptr;};
    void deleteVCpuCores() { this->vCpuCores_ = nullptr;};
    inline int64_t getVCpuCores() const { DARABONBA_PTR_GET_DEFAULT(vCpuCores_, 0L) };
    inline CreateTimedResidentResourcePoolApplicationInput& setVCpuCores(int64_t vCpuCores) { DARABONBA_PTR_SET_VALUE(vCpuCores_, vCpuCores) };


  protected:
    shared_ptr<string> associatedPoolId_ {};
    shared_ptr<int64_t> diskSizeInGB_ {};
    shared_ptr<string> gpuType_ {};
    shared_ptr<int64_t> memorySizeInGB_ {};
    shared_ptr<string> operationType_ {};
    shared_ptr<string> poolName_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<TimedPoolConfig> timedConfig_ {};
    shared_ptr<string> timedPoolId_ {};
    shared_ptr<int64_t> totalGPUCards_ {};
    shared_ptr<int64_t> vCpuCores_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
