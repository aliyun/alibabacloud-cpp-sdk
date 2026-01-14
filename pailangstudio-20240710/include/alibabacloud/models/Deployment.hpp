// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
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
  class Deployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_TO_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_TO_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(AutoApproval, autoApproval_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_FROM_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Deployment() = default ;
    Deployment(const Deployment &) = default ;
    Deployment(Deployment &&) = default ;
    Deployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Deployment() = default ;
    Deployment& operator=(const Deployment &) = default ;
    Deployment& operator=(Deployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserVpc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserVpc& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, UserVpc& obj) { 
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
      virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
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
      friend void from_json(const Darabonba::Json& j, EcsSpec& obj) { 
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
      class ComputingInstanceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComputingInstanceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ComputingInstances, computingInstances_);
          DARABONBA_PTR_TO_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
        };
        friend void from_json(const Darabonba::Json& j, ComputingInstanceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ComputingInstances, computingInstances_);
          DARABONBA_PTR_FROM_JSON(DisableSpotProtectionPeriod, disableSpotProtectionPeriod_);
        };
        ComputingInstanceConfig() = default ;
        ComputingInstanceConfig(const ComputingInstanceConfig &) = default ;
        ComputingInstanceConfig(ComputingInstanceConfig &&) = default ;
        ComputingInstanceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComputingInstanceConfig() = default ;
        ComputingInstanceConfig& operator=(const ComputingInstanceConfig &) = default ;
        ComputingInstanceConfig& operator=(ComputingInstanceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ComputingInstances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ComputingInstances& obj) { 
            DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ComputingInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ComputingInstances() = default ;
          ComputingInstances(const ComputingInstances &) = default ;
          ComputingInstances(ComputingInstances &&) = default ;
          ComputingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ComputingInstances() = default ;
          ComputingInstances& operator=(const ComputingInstances &) = default ;
          ComputingInstances& operator=(ComputingInstances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->spotPriceLimit_ == nullptr
        && this->type_ == nullptr; };
          // spotPriceLimit Field Functions 
          bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
          void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
          inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
          inline ComputingInstances& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ComputingInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // 竞价出价
          shared_ptr<float> spotPriceLimit_ {};
          // 机型
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->computingInstances_ == nullptr
        && this->disableSpotProtectionPeriod_ == nullptr; };
        // computingInstances Field Functions 
        bool hasComputingInstances() const { return this->computingInstances_ != nullptr;};
        void deleteComputingInstances() { this->computingInstances_ = nullptr;};
        inline const vector<ComputingInstanceConfig::ComputingInstances> & getComputingInstances() const { DARABONBA_PTR_GET_CONST(computingInstances_, vector<ComputingInstanceConfig::ComputingInstances>) };
        inline vector<ComputingInstanceConfig::ComputingInstances> getComputingInstances() { DARABONBA_PTR_GET(computingInstances_, vector<ComputingInstanceConfig::ComputingInstances>) };
        inline ComputingInstanceConfig& setComputingInstances(const vector<ComputingInstanceConfig::ComputingInstances> & computingInstances) { DARABONBA_PTR_SET_VALUE(computingInstances_, computingInstances) };
        inline ComputingInstanceConfig& setComputingInstances(vector<ComputingInstanceConfig::ComputingInstances> && computingInstances) { DARABONBA_PTR_SET_RVALUE(computingInstances_, computingInstances) };


        // disableSpotProtectionPeriod Field Functions 
        bool hasDisableSpotProtectionPeriod() const { return this->disableSpotProtectionPeriod_ != nullptr;};
        void deleteDisableSpotProtectionPeriod() { this->disableSpotProtectionPeriod_ = nullptr;};
        inline bool getDisableSpotProtectionPeriod() const { DARABONBA_PTR_GET_DEFAULT(disableSpotProtectionPeriod_, false) };
        inline ComputingInstanceConfig& setDisableSpotProtectionPeriod(bool disableSpotProtectionPeriod) { DARABONBA_PTR_SET_VALUE(disableSpotProtectionPeriod_, disableSpotProtectionPeriod) };


      protected:
        // 机器资源配置
        shared_ptr<vector<ComputingInstanceConfig::ComputingInstances>> computingInstances_ {};
        // 是否启用竞价保留时长
        shared_ptr<bool> disableSpotProtectionPeriod_ {};
      };

      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->computingInstanceConfig_ == nullptr && this->extraEphemeralStorage_ == nullptr && this->GPU_ == nullptr && this->GPUCorePercentage_ == nullptr && this->GPUMemory_ == nullptr
        && this->GPUType_ == nullptr && this->instanceType_ == nullptr && this->memory_ == nullptr && this->podCount_ == nullptr && this->quotaId_ == nullptr
        && this->quotaType_ == nullptr && this->resourceBurstable_ == nullptr && this->resourceId_ == nullptr && this->sharedMemory_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
      inline EcsSpec& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // computingInstanceConfig Field Functions 
      bool hasComputingInstanceConfig() const { return this->computingInstanceConfig_ != nullptr;};
      void deleteComputingInstanceConfig() { this->computingInstanceConfig_ = nullptr;};
      inline const EcsSpec::ComputingInstanceConfig & getComputingInstanceConfig() const { DARABONBA_PTR_GET_CONST(computingInstanceConfig_, EcsSpec::ComputingInstanceConfig) };
      inline EcsSpec::ComputingInstanceConfig getComputingInstanceConfig() { DARABONBA_PTR_GET(computingInstanceConfig_, EcsSpec::ComputingInstanceConfig) };
      inline EcsSpec& setComputingInstanceConfig(const EcsSpec::ComputingInstanceConfig & computingInstanceConfig) { DARABONBA_PTR_SET_VALUE(computingInstanceConfig_, computingInstanceConfig) };
      inline EcsSpec& setComputingInstanceConfig(EcsSpec::ComputingInstanceConfig && computingInstanceConfig) { DARABONBA_PTR_SET_RVALUE(computingInstanceConfig_, computingInstanceConfig) };


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


      // resourceBurstable Field Functions 
      bool hasResourceBurstable() const { return this->resourceBurstable_ != nullptr;};
      void deleteResourceBurstable() { this->resourceBurstable_ = nullptr;};
      inline bool getResourceBurstable() const { DARABONBA_PTR_GET_DEFAULT(resourceBurstable_, false) };
      inline EcsSpec& setResourceBurstable(bool resourceBurstable) { DARABONBA_PTR_SET_VALUE(resourceBurstable_, resourceBurstable) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline EcsSpec& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // sharedMemory Field Functions 
      bool hasSharedMemory() const { return this->sharedMemory_ != nullptr;};
      void deleteSharedMemory() { this->sharedMemory_ = nullptr;};
      inline int32_t getSharedMemory() const { DARABONBA_PTR_GET_DEFAULT(sharedMemory_, 0) };
      inline EcsSpec& setSharedMemory(int32_t sharedMemory) { DARABONBA_PTR_SET_VALUE(sharedMemory_, sharedMemory) };


    protected:
      // CPU信息
      shared_ptr<int32_t> CPU_ {};
      // 竞价资源配置
      shared_ptr<EcsSpec::ComputingInstanceConfig> computingInstanceConfig_ {};
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
      // 是否启用弹性资源池
      shared_ptr<bool> resourceBurstable_ {};
      // 资源组ID
      shared_ptr<string> resourceId_ {};
      // 共享内存
      shared_ptr<int32_t> sharedMemory_ {};
    };

    class DeploymentStages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentStages& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
        DARABONBA_PTR_TO_JSON(StageInfo, stageInfo_);
        DARABONBA_PTR_TO_JSON(StageName, stageName_);
        DARABONBA_PTR_TO_JSON(StageStatus, stageStatus_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentStages& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
        DARABONBA_PTR_FROM_JSON(StageInfo, stageInfo_);
        DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        DARABONBA_PTR_FROM_JSON(StageStatus, stageStatus_);
      };
      DeploymentStages() = default ;
      DeploymentStages(const DeploymentStages &) = default ;
      DeploymentStages(DeploymentStages &&) = default ;
      DeploymentStages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentStages() = default ;
      DeploymentStages& operator=(const DeploymentStages &) = default ;
      DeploymentStages& operator=(DeploymentStages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->errorMessage_ == nullptr && this->gmtEndTime_ == nullptr && this->gmtStartTime_ == nullptr && this->stage_ == nullptr && this->stageInfo_ == nullptr
        && this->stageName_ == nullptr && this->stageStatus_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DeploymentStages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DeploymentStages& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // gmtEndTime Field Functions 
      bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
      void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
      inline string getGmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
      inline DeploymentStages& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline DeploymentStages& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline int32_t getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, 0) };
      inline DeploymentStages& setStage(int32_t stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


      // stageInfo Field Functions 
      bool hasStageInfo() const { return this->stageInfo_ != nullptr;};
      void deleteStageInfo() { this->stageInfo_ = nullptr;};
      inline string getStageInfo() const { DARABONBA_PTR_GET_DEFAULT(stageInfo_, "") };
      inline DeploymentStages& setStageInfo(string stageInfo) { DARABONBA_PTR_SET_VALUE(stageInfo_, stageInfo) };


      // stageName Field Functions 
      bool hasStageName() const { return this->stageName_ != nullptr;};
      void deleteStageName() { this->stageName_ = nullptr;};
      inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
      inline DeploymentStages& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      // stageStatus Field Functions 
      bool hasStageStatus() const { return this->stageStatus_ != nullptr;};
      void deleteStageStatus() { this->stageStatus_ = nullptr;};
      inline string getStageStatus() const { DARABONBA_PTR_GET_DEFAULT(stageStatus_, "") };
      inline DeploymentStages& setStageStatus(string stageStatus) { DARABONBA_PTR_SET_VALUE(stageStatus_, stageStatus) };


    protected:
      // 描述
      shared_ptr<string> description_ {};
      // 错误信息
      shared_ptr<string> errorMessage_ {};
      // 结束时间
      shared_ptr<string> gmtEndTime_ {};
      // 开始时间
      shared_ptr<string> gmtStartTime_ {};
      // 阶段
      shared_ptr<int32_t> stage_ {};
      // 阶段信息
      shared_ptr<string> stageInfo_ {};
      // 阶段名称
      shared_ptr<string> stageName_ {};
      // 阶段状态
      shared_ptr<string> stageStatus_ {};
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

    class ContentModerationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContentModerationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableInputModeration, enableInputModeration_);
        DARABONBA_PTR_TO_JSON(EnableOutputModeration, enableOutputModeration_);
        DARABONBA_PTR_TO_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, ContentModerationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableInputModeration, enableInputModeration_);
        DARABONBA_PTR_FROM_JSON(EnableOutputModeration, enableOutputModeration_);
        DARABONBA_PTR_FROM_JSON(StreamingModerationThreshold, streamingModerationThreshold_);
      };
      ContentModerationConfig() = default ;
      ContentModerationConfig(const ContentModerationConfig &) = default ;
      ContentModerationConfig(ContentModerationConfig &&) = default ;
      ContentModerationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContentModerationConfig() = default ;
      ContentModerationConfig& operator=(const ContentModerationConfig &) = default ;
      ContentModerationConfig& operator=(ContentModerationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableInputModeration_ == nullptr
        && this->enableOutputModeration_ == nullptr && this->streamingModerationThreshold_ == nullptr; };
      // enableInputModeration Field Functions 
      bool hasEnableInputModeration() const { return this->enableInputModeration_ != nullptr;};
      void deleteEnableInputModeration() { this->enableInputModeration_ = nullptr;};
      inline bool getEnableInputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableInputModeration_, false) };
      inline ContentModerationConfig& setEnableInputModeration(bool enableInputModeration) { DARABONBA_PTR_SET_VALUE(enableInputModeration_, enableInputModeration) };


      // enableOutputModeration Field Functions 
      bool hasEnableOutputModeration() const { return this->enableOutputModeration_ != nullptr;};
      void deleteEnableOutputModeration() { this->enableOutputModeration_ = nullptr;};
      inline bool getEnableOutputModeration() const { DARABONBA_PTR_GET_DEFAULT(enableOutputModeration_, false) };
      inline ContentModerationConfig& setEnableOutputModeration(bool enableOutputModeration) { DARABONBA_PTR_SET_VALUE(enableOutputModeration_, enableOutputModeration) };


      // streamingModerationThreshold Field Functions 
      bool hasStreamingModerationThreshold() const { return this->streamingModerationThreshold_ != nullptr;};
      void deleteStreamingModerationThreshold() { this->streamingModerationThreshold_ = nullptr;};
      inline int32_t getStreamingModerationThreshold() const { DARABONBA_PTR_GET_DEFAULT(streamingModerationThreshold_, 0) };
      inline ContentModerationConfig& setStreamingModerationThreshold(int32_t streamingModerationThreshold) { DARABONBA_PTR_SET_VALUE(streamingModerationThreshold_, streamingModerationThreshold) };


    protected:
      // 启用输入内容审查
      shared_ptr<bool> enableInputModeration_ {};
      // 启用输出内容审查
      shared_ptr<bool> enableOutputModeration_ {};
      // 流式输出内容送审缓存大小
      shared_ptr<int32_t> streamingModerationThreshold_ {};
    };

    class ChatHistoryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatHistoryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, ChatHistoryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      ChatHistoryConfig() = default ;
      ChatHistoryConfig(const ChatHistoryConfig &) = default ;
      ChatHistoryConfig(ChatHistoryConfig &&) = default ;
      ChatHistoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatHistoryConfig() = default ;
      ChatHistoryConfig& operator=(const ChatHistoryConfig &) = default ;
      ChatHistoryConfig& operator=(ChatHistoryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionName_ == nullptr
        && this->storageType_ == nullptr; };
      // connectionName Field Functions 
      bool hasConnectionName() const { return this->connectionName_ != nullptr;};
      void deleteConnectionName() { this->connectionName_ = nullptr;};
      inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
      inline ChatHistoryConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline ChatHistoryConfig& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // 连接名称
      shared_ptr<string> connectionName_ {};
      // 存储类型
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->autoApproval_ == nullptr && this->chatHistoryConfig_ == nullptr && this->contentModerationConfig_ == nullptr && this->creator_ == nullptr && this->credentialConfig_ == nullptr
        && this->dataSources_ == nullptr && this->deploymentConfig_ == nullptr && this->deploymentId_ == nullptr && this->deploymentStages_ == nullptr && this->deploymentStatus_ == nullptr
        && this->description_ == nullptr && this->ecsSpec_ == nullptr && this->enableTrace_ == nullptr && this->envs_ == nullptr && this->errorMessage_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->labels_ == nullptr && this->operationType_ == nullptr && this->resourceId_ == nullptr
        && this->resourceSnapshotId_ == nullptr && this->resourceType_ == nullptr && this->serviceGroup_ == nullptr && this->serviceName_ == nullptr && this->userVpc_ == nullptr
        && this->workDir_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Deployment& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // autoApproval Field Functions 
    bool hasAutoApproval() const { return this->autoApproval_ != nullptr;};
    void deleteAutoApproval() { this->autoApproval_ = nullptr;};
    inline bool getAutoApproval() const { DARABONBA_PTR_GET_DEFAULT(autoApproval_, false) };
    inline Deployment& setAutoApproval(bool autoApproval) { DARABONBA_PTR_SET_VALUE(autoApproval_, autoApproval) };


    // chatHistoryConfig Field Functions 
    bool hasChatHistoryConfig() const { return this->chatHistoryConfig_ != nullptr;};
    void deleteChatHistoryConfig() { this->chatHistoryConfig_ = nullptr;};
    inline const Deployment::ChatHistoryConfig & getChatHistoryConfig() const { DARABONBA_PTR_GET_CONST(chatHistoryConfig_, Deployment::ChatHistoryConfig) };
    inline Deployment::ChatHistoryConfig getChatHistoryConfig() { DARABONBA_PTR_GET(chatHistoryConfig_, Deployment::ChatHistoryConfig) };
    inline Deployment& setChatHistoryConfig(const Deployment::ChatHistoryConfig & chatHistoryConfig) { DARABONBA_PTR_SET_VALUE(chatHistoryConfig_, chatHistoryConfig) };
    inline Deployment& setChatHistoryConfig(Deployment::ChatHistoryConfig && chatHistoryConfig) { DARABONBA_PTR_SET_RVALUE(chatHistoryConfig_, chatHistoryConfig) };


    // contentModerationConfig Field Functions 
    bool hasContentModerationConfig() const { return this->contentModerationConfig_ != nullptr;};
    void deleteContentModerationConfig() { this->contentModerationConfig_ = nullptr;};
    inline const Deployment::ContentModerationConfig & getContentModerationConfig() const { DARABONBA_PTR_GET_CONST(contentModerationConfig_, Deployment::ContentModerationConfig) };
    inline Deployment::ContentModerationConfig getContentModerationConfig() { DARABONBA_PTR_GET(contentModerationConfig_, Deployment::ContentModerationConfig) };
    inline Deployment& setContentModerationConfig(const Deployment::ContentModerationConfig & contentModerationConfig) { DARABONBA_PTR_SET_VALUE(contentModerationConfig_, contentModerationConfig) };
    inline Deployment& setContentModerationConfig(Deployment::ContentModerationConfig && contentModerationConfig) { DARABONBA_PTR_SET_RVALUE(contentModerationConfig_, contentModerationConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Deployment& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const Deployment::CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, Deployment::CredentialConfig) };
    inline Deployment::CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, Deployment::CredentialConfig) };
    inline Deployment& setCredentialConfig(const Deployment::CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline Deployment& setCredentialConfig(Deployment::CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<Deployment::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Deployment::DataSources>) };
    inline vector<Deployment::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<Deployment::DataSources>) };
    inline Deployment& setDataSources(const vector<Deployment::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline Deployment& setDataSources(vector<Deployment::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // deploymentConfig Field Functions 
    bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
    void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
    inline string getDeploymentConfig() const { DARABONBA_PTR_GET_DEFAULT(deploymentConfig_, "") };
    inline Deployment& setDeploymentConfig(string deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Deployment& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentStages Field Functions 
    bool hasDeploymentStages() const { return this->deploymentStages_ != nullptr;};
    void deleteDeploymentStages() { this->deploymentStages_ = nullptr;};
    inline const vector<Deployment::DeploymentStages> & getDeploymentStages() const { DARABONBA_PTR_GET_CONST(deploymentStages_, vector<Deployment::DeploymentStages>) };
    inline vector<Deployment::DeploymentStages> getDeploymentStages() { DARABONBA_PTR_GET(deploymentStages_, vector<Deployment::DeploymentStages>) };
    inline Deployment& setDeploymentStages(const vector<Deployment::DeploymentStages> & deploymentStages) { DARABONBA_PTR_SET_VALUE(deploymentStages_, deploymentStages) };
    inline Deployment& setDeploymentStages(vector<Deployment::DeploymentStages> && deploymentStages) { DARABONBA_PTR_SET_RVALUE(deploymentStages_, deploymentStages) };


    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline string getDeploymentStatus() const { DARABONBA_PTR_GET_DEFAULT(deploymentStatus_, "") };
    inline Deployment& setDeploymentStatus(string deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Deployment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const Deployment::EcsSpec & getEcsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, Deployment::EcsSpec) };
    inline Deployment::EcsSpec getEcsSpec() { DARABONBA_PTR_GET(ecsSpec_, Deployment::EcsSpec) };
    inline Deployment& setEcsSpec(const Deployment::EcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline Deployment& setEcsSpec(Deployment::EcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // enableTrace Field Functions 
    bool hasEnableTrace() const { return this->enableTrace_ != nullptr;};
    void deleteEnableTrace() { this->enableTrace_ = nullptr;};
    inline bool getEnableTrace() const { DARABONBA_PTR_GET_DEFAULT(enableTrace_, false) };
    inline Deployment& setEnableTrace(bool enableTrace) { DARABONBA_PTR_SET_VALUE(enableTrace_, enableTrace) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<Deployment::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<Deployment::Envs>) };
    inline vector<Deployment::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<Deployment::Envs>) };
    inline Deployment& setEnvs(const vector<Deployment::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline Deployment& setEnvs(vector<Deployment::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline Deployment& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Deployment& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Deployment& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Deployment::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Deployment::Labels>) };
    inline vector<Deployment::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Deployment::Labels>) };
    inline Deployment& setLabels(const vector<Deployment::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Deployment& setLabels(vector<Deployment::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline Deployment& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline Deployment& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSnapshotId Field Functions 
    bool hasResourceSnapshotId() const { return this->resourceSnapshotId_ != nullptr;};
    void deleteResourceSnapshotId() { this->resourceSnapshotId_ = nullptr;};
    inline string getResourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(resourceSnapshotId_, "") };
    inline Deployment& setResourceSnapshotId(string resourceSnapshotId) { DARABONBA_PTR_SET_VALUE(resourceSnapshotId_, resourceSnapshotId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Deployment& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string getServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline Deployment& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline Deployment& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const Deployment::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, Deployment::UserVpc) };
    inline Deployment::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, Deployment::UserVpc) };
    inline Deployment& setUserVpc(const Deployment::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline Deployment& setUserVpc(Deployment::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string getWorkDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Deployment& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Deployment& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<bool> autoApproval_ {};
    shared_ptr<Deployment::ChatHistoryConfig> chatHistoryConfig_ {};
    shared_ptr<Deployment::ContentModerationConfig> contentModerationConfig_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<Deployment::CredentialConfig> credentialConfig_ {};
    shared_ptr<vector<Deployment::DataSources>> dataSources_ {};
    shared_ptr<string> deploymentConfig_ {};
    shared_ptr<string> deploymentId_ {};
    shared_ptr<vector<Deployment::DeploymentStages>> deploymentStages_ {};
    shared_ptr<string> deploymentStatus_ {};
    shared_ptr<string> description_ {};
    shared_ptr<Deployment::EcsSpec> ecsSpec_ {};
    shared_ptr<bool> enableTrace_ {};
    shared_ptr<vector<Deployment::Envs>> envs_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<vector<Deployment::Labels>> labels_ {};
    shared_ptr<string> operationType_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceSnapshotId_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> serviceGroup_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<Deployment::UserVpc> userVpc_ {};
    shared_ptr<string> workDir_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
