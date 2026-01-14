// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIME_HPP_
#define ALIBABACLOUD_MODELS_RUNTIME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Runtime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(MCPConfig, MCPConfig_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_TO_JSON(RuntimeLog, runtimeLog_);
      DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_TO_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_TO_JSON(SupportSSEStream, supportSSEStream_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(MCPConfig, MCPConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
      DARABONBA_PTR_FROM_JSON(RuntimeLog, runtimeLog_);
      DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
      DARABONBA_PTR_FROM_JSON(RuntimeStatus, runtimeStatus_);
      DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
      DARABONBA_PTR_FROM_JSON(SupportSSEStream, supportSSEStream_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Runtime() = default ;
    Runtime(const Runtime &) = default ;
    Runtime(Runtime &&) = default ;
    Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Runtime() = default ;
    Runtime& operator=(const Runtime &) = default ;
    Runtime& operator=(Runtime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
        DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      UserVpc() = default ;
      UserVpc(const UserVpc &) = default ;
      UserVpc(UserVpc &&) = default ;
      UserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserVpc() = default ;
      UserVpc& operator=(const UserVpc &) = default ;
      UserVpc& operator=(UserVpc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultRoute_ == nullptr
        && this->extendedCIDRs_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
      // defaultRoute Field Functions 
      bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
      void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
      inline string getDefaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
      inline UserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


      // extendedCIDRs Field Functions 
      bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
      void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
      inline const vector<string> & getExtendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
      inline vector<string> getExtendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
      inline UserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
      inline UserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline UserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline UserVpc& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline UserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // 默认路由
      shared_ptr<string> defaultRoute_ {};
      // 扩展网段
      shared_ptr<vector<string>> extendedCIDRs_ {};
      // 安全组ID
      shared_ptr<string> securityGroupId_ {};
      // 交换机ID
      shared_ptr<string> vSwitchId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // 标签键
      shared_ptr<string> key_ {};
      // 标签值
      shared_ptr<string> value_ {};
    };

    class Flows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Flows& obj) { 
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      };
      friend void from_json(const Darabonba::Json& j, Flows& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      };
      Flows() = default ;
      Flows(const Flows &) = default ;
      Flows(Flows &&) = default ;
      Flows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Flows() = default ;
      Flows& operator=(const Flows &) = default ;
      Flows& operator=(Flows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowId_ == nullptr
        && this->flowName_ == nullptr; };
      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Flows& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Flows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    protected:
      // 应用流ID
      shared_ptr<string> flowId_ {};
      // 应用流名称
      shared_ptr<string> flowName_ {};
    };

    class Envs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Envs& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Envs& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Envs() = default ;
      Envs(const Envs &) = default ;
      Envs(Envs &&) = default ;
      Envs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Envs() = default ;
      Envs& operator=(const Envs &) = default ;
      Envs& operator=(Envs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Envs& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Envs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // 环境键
      shared_ptr<string> key_ {};
      // 环境值
      shared_ptr<string> value_ {};
    };

    class EcsSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsSpec& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
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
        DARABONBA_PTR_TO_JSON(SharedMemory, sharedMemory_);
      };
      friend void from_json(const Darabonba::Json& j, EcsSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
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
        DARABONBA_PTR_FROM_JSON(SharedMemory, sharedMemory_);
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
        && this->extraEphemeralStorage_ == nullptr && this->GPU_ == nullptr && this->GPUCorePercentage_ == nullptr && this->GPUMemory_ == nullptr && this->GPUType_ == nullptr
        && this->instanceType_ == nullptr && this->memory_ == nullptr && this->podCount_ == nullptr && this->quotaId_ == nullptr && this->quotaType_ == nullptr
        && this->sharedMemory_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
      inline EcsSpec& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // extraEphemeralStorage Field Functions 
      bool hasExtraEphemeralStorage() const { return this->extraEphemeralStorage_ != nullptr;};
      void deleteExtraEphemeralStorage() { this->extraEphemeralStorage_ = nullptr;};
      inline int32_t getExtraEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(extraEphemeralStorage_, 0) };
      inline EcsSpec& setExtraEphemeralStorage(int32_t extraEphemeralStorage) { DARABONBA_PTR_SET_VALUE(extraEphemeralStorage_, extraEphemeralStorage) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline int32_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0) };
      inline EcsSpec& setGPU(int32_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUCorePercentage Field Functions 
      bool hasGPUCorePercentage() const { return this->GPUCorePercentage_ != nullptr;};
      void deleteGPUCorePercentage() { this->GPUCorePercentage_ = nullptr;};
      inline int32_t getGPUCorePercentage() const { DARABONBA_PTR_GET_DEFAULT(GPUCorePercentage_, 0) };
      inline EcsSpec& setGPUCorePercentage(int32_t GPUCorePercentage) { DARABONBA_PTR_SET_VALUE(GPUCorePercentage_, GPUCorePercentage) };


      // GPUMemory Field Functions 
      bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
      void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
      inline int32_t getGPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0) };
      inline EcsSpec& setGPUMemory(int32_t GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


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


      // quotaId Field Functions 
      bool hasQuotaId() const { return this->quotaId_ != nullptr;};
      void deleteQuotaId() { this->quotaId_ = nullptr;};
      inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
      inline EcsSpec& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


      // quotaType Field Functions 
      bool hasQuotaType() const { return this->quotaType_ != nullptr;};
      void deleteQuotaType() { this->quotaType_ = nullptr;};
      inline string getQuotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
      inline EcsSpec& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


      // sharedMemory Field Functions 
      bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
      void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
      inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
      inline EcsSpec& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


    protected:
      // CPU信息
      shared_ptr<int32_t> CPU_ {};
      // 额外系统盘
      shared_ptr<int32_t> extraEphemeralStorage_ {};
      // GPU信息
      shared_ptr<int32_t> GPU_ {};
      // GPU算力占比
      shared_ptr<int32_t> GPUCorePercentage_ {};
      // GPU显存
      shared_ptr<int32_t> GPUMemory_ {};
      // GPU类型
      shared_ptr<string> GPUType_ {};
      // 实例类型
      shared_ptr<string> instanceType_ {};
      // 内存信息
      shared_ptr<int32_t> memory_ {};
      // Pod数量
      shared_ptr<int32_t> podCount_ {};
      // 资源配额ID
      shared_ptr<string> quotaId_ {};
      // 资源配额类型
      shared_ptr<string> quotaType_ {};
      // 共享内存
      shared_ptr<int32_t> sharedMemory_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->mountPath_ == nullptr && this->uri_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DataSources& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline DataSources& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline DataSources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // 数据集ID
      shared_ptr<string> datasetId_ {};
      // 挂载路径
      shared_ptr<string> mountPath_ {};
      // 统一资源识别码
      shared_ptr<string> uri_ {};
    };

    class CredentialConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
        DARABONBA_PTR_TO_JSON(CredentialConfigItems, credentialConfigItems_);
        DARABONBA_PTR_TO_JSON(EnableCredentialInject, enableCredentialInject_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
        DARABONBA_PTR_FROM_JSON(CredentialConfigItems, credentialConfigItems_);
        DARABONBA_PTR_FROM_JSON(EnableCredentialInject, enableCredentialInject_);
      };
      CredentialConfig() = default ;
      CredentialConfig(const CredentialConfig &) = default ;
      CredentialConfig(CredentialConfig &&) = default ;
      CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CredentialConfig() = default ;
      CredentialConfig& operator=(const CredentialConfig &) = default ;
      CredentialConfig& operator=(CredentialConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CredentialConfigItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CredentialConfigItems& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Roles, roles_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CredentialConfigItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Roles, roles_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        CredentialConfigItems() = default ;
        CredentialConfigItems(const CredentialConfigItems &) = default ;
        CredentialConfigItems(CredentialConfigItems &&) = default ;
        CredentialConfigItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CredentialConfigItems() = default ;
        CredentialConfigItems& operator=(const CredentialConfigItems &) = default ;
        CredentialConfigItems& operator=(CredentialConfigItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Roles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Roles& obj) { 
            DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
            DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
            DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          };
          friend void from_json(const Darabonba::Json& j, Roles& obj) { 
            DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
            DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
            DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          };
          Roles() = default ;
          Roles(const Roles &) = default ;
          Roles(Roles &&) = default ;
          Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Roles() = default ;
          Roles& operator=(const Roles &) = default ;
          Roles& operator=(Roles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleArn_ == nullptr && this->roleType_ == nullptr; };
          // assumeRoleFor Field Functions 
          bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
          void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
          inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
          inline Roles& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


          // roleArn Field Functions 
          bool hasRoleArn() const { return this->roleArn_ != nullptr;};
          void deleteRoleArn() { this->roleArn_ = nullptr;};
          inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
          inline Roles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


          // roleType Field Functions 
          bool hasRoleType() const { return this->roleType_ != nullptr;};
          void deleteRoleType() { this->roleType_ = nullptr;};
          inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
          inline Roles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        protected:
          // AssumeRoleFor
          shared_ptr<string> assumeRoleFor_ {};
          // 角色名称
          shared_ptr<string> roleArn_ {};
          // 角色类型
          shared_ptr<string> roleType_ {};
        };

        virtual bool empty() const override { return this->key_ == nullptr
        && this->roles_ == nullptr && this->type_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline CredentialConfigItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // roles Field Functions 
        bool hasRoles() const { return this->roles_ != nullptr;};
        void deleteRoles() { this->roles_ = nullptr;};
        inline const vector<CredentialConfigItems::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<CredentialConfigItems::Roles>) };
        inline vector<CredentialConfigItems::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<CredentialConfigItems::Roles>) };
        inline CredentialConfigItems& setRoles(const vector<CredentialConfigItems::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
        inline CredentialConfigItems& setRoles(vector<CredentialConfigItems::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CredentialConfigItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Key
        shared_ptr<string> key_ {};
        // 角色列表
        shared_ptr<vector<CredentialConfigItems::Roles>> roles_ {};
        // Type
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->aliyunEnvRoleKey_ == nullptr
        && this->credentialConfigItems_ == nullptr && this->enableCredentialInject_ == nullptr; };
      // aliyunEnvRoleKey Field Functions 
      bool hasAliyunEnvRoleKey() const { return this->aliyunEnvRoleKey_ != nullptr;};
      void deleteAliyunEnvRoleKey() { this->aliyunEnvRoleKey_ = nullptr;};
      inline string getAliyunEnvRoleKey() const { DARABONBA_PTR_GET_DEFAULT(aliyunEnvRoleKey_, "") };
      inline CredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


      // credentialConfigItems Field Functions 
      bool hasCredentialConfigItems() const { return this->credentialConfigItems_ != nullptr;};
      void deleteCredentialConfigItems() { this->credentialConfigItems_ = nullptr;};
      inline const vector<CredentialConfig::CredentialConfigItems> & getCredentialConfigItems() const { DARABONBA_PTR_GET_CONST(credentialConfigItems_, vector<CredentialConfig::CredentialConfigItems>) };
      inline vector<CredentialConfig::CredentialConfigItems> getCredentialConfigItems() { DARABONBA_PTR_GET(credentialConfigItems_, vector<CredentialConfig::CredentialConfigItems>) };
      inline CredentialConfig& setCredentialConfigItems(const vector<CredentialConfig::CredentialConfigItems> & credentialConfigItems) { DARABONBA_PTR_SET_VALUE(credentialConfigItems_, credentialConfigItems) };
      inline CredentialConfig& setCredentialConfigItems(vector<CredentialConfig::CredentialConfigItems> && credentialConfigItems) { DARABONBA_PTR_SET_RVALUE(credentialConfigItems_, credentialConfigItems) };


      // enableCredentialInject Field Functions 
      bool hasEnableCredentialInject() const { return this->enableCredentialInject_ != nullptr;};
      void deleteEnableCredentialInject() { this->enableCredentialInject_ = nullptr;};
      inline bool getEnableCredentialInject() const { DARABONBA_PTR_GET_DEFAULT(enableCredentialInject_, false) };
      inline CredentialConfig& setEnableCredentialInject(bool enableCredentialInject) { DARABONBA_PTR_SET_VALUE(enableCredentialInject_, enableCredentialInject) };


    protected:
      // AliyunEnvRoleKey
      shared_ptr<string> aliyunEnvRoleKey_ {};
      // Credential配置项列表
      shared_ptr<vector<CredentialConfig::CredentialConfigItems>> credentialConfigItems_ {};
      // 是否启用Credential注入
      shared_ptr<bool> enableCredentialInject_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creator_ == nullptr && this->credentialConfig_ == nullptr && this->dataSources_ == nullptr && this->ecsSpec_ == nullptr && this->envs_ == nullptr
        && this->flowId_ == nullptr && this->flows_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->idleTimeout_ == nullptr
        && this->labels_ == nullptr && this->latestVersion_ == nullptr && this->MCPConfig_ == nullptr && this->resourceId_ == nullptr && this->runTimeout_ == nullptr
        && this->runtimeId_ == nullptr && this->runtimeLog_ == nullptr && this->runtimeName_ == nullptr && this->runtimeStatus_ == nullptr && this->runtimeType_ == nullptr
        && this->supportSSEStream_ == nullptr && this->userVpc_ == nullptr && this->version_ == nullptr && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Runtime& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Runtime& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const Runtime::CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, Runtime::CredentialConfig) };
    inline Runtime::CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, Runtime::CredentialConfig) };
    inline Runtime& setCredentialConfig(const Runtime::CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline Runtime& setCredentialConfig(Runtime::CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<Runtime::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Runtime::DataSources>) };
    inline vector<Runtime::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<Runtime::DataSources>) };
    inline Runtime& setDataSources(const vector<Runtime::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline Runtime& setDataSources(vector<Runtime::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const Runtime::EcsSpec & getEcsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, Runtime::EcsSpec) };
    inline Runtime::EcsSpec getEcsSpec() { DARABONBA_PTR_GET(ecsSpec_, Runtime::EcsSpec) };
    inline Runtime& setEcsSpec(const Runtime::EcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline Runtime& setEcsSpec(Runtime::EcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<Runtime::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<Runtime::Envs>) };
    inline vector<Runtime::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<Runtime::Envs>) };
    inline Runtime& setEnvs(const vector<Runtime::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline Runtime& setEnvs(vector<Runtime::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline Runtime& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<Runtime::Flows> & getFlows() const { DARABONBA_PTR_GET_CONST(flows_, vector<Runtime::Flows>) };
    inline vector<Runtime::Flows> getFlows() { DARABONBA_PTR_GET(flows_, vector<Runtime::Flows>) };
    inline Runtime& setFlows(const vector<Runtime::Flows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline Runtime& setFlows(vector<Runtime::Flows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Runtime& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Runtime& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline Runtime& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Runtime::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Runtime::Labels>) };
    inline vector<Runtime::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Runtime::Labels>) };
    inline Runtime& setLabels(const vector<Runtime::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Runtime& setLabels(vector<Runtime::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline Runtime& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // MCPConfig Field Functions 
    bool hasMCPConfig() const { return this->MCPConfig_ != nullptr;};
    void deleteMCPConfig() { this->MCPConfig_ = nullptr;};
    inline string getMCPConfig() const { DARABONBA_PTR_GET_DEFAULT(MCPConfig_, "") };
    inline Runtime& setMCPConfig(string MCPConfig) { DARABONBA_PTR_SET_VALUE(MCPConfig_, MCPConfig) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline Runtime& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // runTimeout Field Functions 
    bool hasRunTimeout() const { return this->runTimeout_ != nullptr;};
    void deleteRunTimeout() { this->runTimeout_ = nullptr;};
    inline int32_t getRunTimeout() const { DARABONBA_PTR_GET_DEFAULT(runTimeout_, 0) };
    inline Runtime& setRunTimeout(int32_t runTimeout) { DARABONBA_PTR_SET_VALUE(runTimeout_, runTimeout) };


    // runtimeId Field Functions 
    bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
    void deleteRuntimeId() { this->runtimeId_ = nullptr;};
    inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
    inline Runtime& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


    // runtimeLog Field Functions 
    bool hasRuntimeLog() const { return this->runtimeLog_ != nullptr;};
    void deleteRuntimeLog() { this->runtimeLog_ = nullptr;};
    inline string getRuntimeLog() const { DARABONBA_PTR_GET_DEFAULT(runtimeLog_, "") };
    inline Runtime& setRuntimeLog(string runtimeLog) { DARABONBA_PTR_SET_VALUE(runtimeLog_, runtimeLog) };


    // runtimeName Field Functions 
    bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
    void deleteRuntimeName() { this->runtimeName_ = nullptr;};
    inline string getRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
    inline Runtime& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


    // runtimeStatus Field Functions 
    bool hasRuntimeStatus() const { return this->runtimeStatus_ != nullptr;};
    void deleteRuntimeStatus() { this->runtimeStatus_ = nullptr;};
    inline string getRuntimeStatus() const { DARABONBA_PTR_GET_DEFAULT(runtimeStatus_, "") };
    inline Runtime& setRuntimeStatus(string runtimeStatus) { DARABONBA_PTR_SET_VALUE(runtimeStatus_, runtimeStatus) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline Runtime& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    // supportSSEStream Field Functions 
    bool hasSupportSSEStream() const { return this->supportSSEStream_ != nullptr;};
    void deleteSupportSSEStream() { this->supportSSEStream_ = nullptr;};
    inline bool getSupportSSEStream() const { DARABONBA_PTR_GET_DEFAULT(supportSSEStream_, false) };
    inline Runtime& setSupportSSEStream(bool supportSSEStream) { DARABONBA_PTR_SET_VALUE(supportSSEStream_, supportSSEStream) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const Runtime::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, Runtime::UserVpc) };
    inline Runtime::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, Runtime::UserVpc) };
    inline Runtime& setUserVpc(const Runtime::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline Runtime& setUserVpc(Runtime::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Runtime& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Runtime& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Runtime& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<Runtime::CredentialConfig> credentialConfig_ {};
    shared_ptr<vector<Runtime::DataSources>> dataSources_ {};
    shared_ptr<Runtime::EcsSpec> ecsSpec_ {};
    shared_ptr<vector<Runtime::Envs>> envs_ {};
    shared_ptr<string> flowId_ {};
    shared_ptr<vector<Runtime::Flows>> flows_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<int32_t> idleTimeout_ {};
    shared_ptr<vector<Runtime::Labels>> labels_ {};
    shared_ptr<string> latestVersion_ {};
    shared_ptr<string> MCPConfig_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<int32_t> runTimeout_ {};
    shared_ptr<string> runtimeId_ {};
    shared_ptr<string> runtimeLog_ {};
    shared_ptr<string> runtimeName_ {};
    shared_ptr<string> runtimeStatus_ {};
    shared_ptr<string> runtimeType_ {};
    shared_ptr<bool> supportSSEStream_ {};
    shared_ptr<Runtime::UserVpc> userVpc_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> workDir_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
