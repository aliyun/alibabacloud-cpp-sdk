// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOUPDATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AUTOUPDATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class AutoUpdateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoUpdateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, AutoUpdateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    AutoUpdateConfig() = default ;
    AutoUpdateConfig(const AutoUpdateConfig &) = default ;
    AutoUpdateConfig(AutoUpdateConfig &&) = default ;
    AutoUpdateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoUpdateConfig() = default ;
    AutoUpdateConfig& operator=(const AutoUpdateConfig &) = default ;
    AutoUpdateConfig& operator=(AutoUpdateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EmbeddingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      };
      EmbeddingConfig() = default ;
      EmbeddingConfig(const EmbeddingConfig &) = default ;
      EmbeddingConfig(EmbeddingConfig &&) = default ;
      EmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingConfig() = default ;
      EmbeddingConfig& operator=(const EmbeddingConfig &) = default ;
      EmbeddingConfig& operator=(EmbeddingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchSize_ == nullptr
        && this->concurrency_ == nullptr; };
      // batchSize Field Functions 
      bool hasBatchSize() const { return this->batchSize_ != nullptr;};
      void deleteBatchSize() { this->batchSize_ = nullptr;};
      inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
      inline EmbeddingConfig& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
      inline EmbeddingConfig& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    protected:
      // Embedding分批大小
      shared_ptr<int32_t> batchSize_ {};
      // Embedding并发数
      shared_ptr<int32_t> concurrency_ {};
    };

    class EcsSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsSpecs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, EcsSpecs& obj) { 
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
      EcsSpecs() = default ;
      EcsSpecs(const EcsSpecs &) = default ;
      EcsSpecs(EcsSpecs &&) = default ;
      EcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsSpecs() = default ;
      EcsSpecs& operator=(const EcsSpecs &) = default ;
      EcsSpecs& operator=(EcsSpecs &&) = default ;
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
      inline EcsSpecs& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // driver Field Functions 
      bool hasDriver() const { return this->driver_ != nullptr;};
      void deleteDriver() { this->driver_ = nullptr;};
      inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
      inline EcsSpecs& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline int32_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
      inline EcsSpecs& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUType Field Functions 
      bool hasGPUType() const { return this->GPUType_ != nullptr;};
      void deleteGPUType() { this->GPUType_ = nullptr;};
      inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
      inline EcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline EcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline EcsSpecs& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // podCount Field Functions 
      bool hasPodCount() const { return this->podCount_ != nullptr;};
      void deletePodCount() { this->podCount_ = nullptr;};
      inline int32_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0) };
      inline EcsSpecs& setPodCount(int32_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


      // sharedMemory Field Functions 
      bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
      void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
      inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
      inline EcsSpecs& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EcsSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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

    virtual bool empty() const override { return this->ecsSpecs_ == nullptr
        && this->embeddingConfig_ == nullptr && this->maxRunningTimeInSeconds_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->userVpc_ == nullptr; };
    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<AutoUpdateConfig::EcsSpecs> & getEcsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<AutoUpdateConfig::EcsSpecs>) };
    inline vector<AutoUpdateConfig::EcsSpecs> getEcsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<AutoUpdateConfig::EcsSpecs>) };
    inline AutoUpdateConfig& setEcsSpecs(const vector<AutoUpdateConfig::EcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline AutoUpdateConfig& setEcsSpecs(vector<AutoUpdateConfig::EcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const AutoUpdateConfig::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, AutoUpdateConfig::EmbeddingConfig) };
    inline AutoUpdateConfig::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, AutoUpdateConfig::EmbeddingConfig) };
    inline AutoUpdateConfig& setEmbeddingConfig(const AutoUpdateConfig::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline AutoUpdateConfig& setEmbeddingConfig(AutoUpdateConfig::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t getMaxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline AutoUpdateConfig& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AutoUpdateConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AutoUpdateConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline AutoUpdateConfig& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline AutoUpdateConfig& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    // 运行资源配置
    shared_ptr<vector<AutoUpdateConfig::EcsSpecs>> ecsSpecs_ {};
    // Embedding配置
    shared_ptr<AutoUpdateConfig::EmbeddingConfig> embeddingConfig_ {};
    // 任务最大运行时间
    shared_ptr<int32_t> maxRunningTimeInSeconds_ {};
    // 资源组ID
    shared_ptr<string> resourceId_ {};
    // 知识库自动更新状态
    shared_ptr<string> status_ {};
    // 用户VPC配置
    shared_ptr<UserVpc> userVpc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
