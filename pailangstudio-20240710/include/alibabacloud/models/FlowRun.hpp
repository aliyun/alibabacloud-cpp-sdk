// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUN_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUN_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRun& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ChildRuns, childRuns_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(EvaluationConfigs, evaluationConfigs_);
      DARABONBA_PTR_TO_JSON(EvaluationWorkerCount, evaluationWorkerCount_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeRunInfos, nodeRunInfos_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(RunName, runName_);
      DARABONBA_PTR_TO_JSON(RunResult, runResult_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_TO_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Variant, variant_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRun& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ChildRuns, childRuns_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataColumnMapping, dataColumnMapping_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(EvaluationConfigs, evaluationConfigs_);
      DARABONBA_PTR_FROM_JSON(EvaluationWorkerCount, evaluationWorkerCount_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeRunInfos, nodeRunInfos_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(RunName, runName_);
      DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_FROM_JSON(RunTimeout, runTimeout_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Variant, variant_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FlowRun() = default ;
    FlowRun(const FlowRun &) = default ;
    FlowRun(FlowRun &&) = default ;
    FlowRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRun() = default ;
    FlowRun& operator=(const FlowRun &) = default ;
    FlowRun& operator=(FlowRun &&) = default ;
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

    class NodeRunInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeRunInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Stdout, stdout_);
      };
      friend void from_json(const Darabonba::Json& j, NodeRunInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Stdout, stdout_);
      };
      NodeRunInfos() = default ;
      NodeRunInfos(const NodeRunInfos &) = default ;
      NodeRunInfos(NodeRunInfos &&) = default ;
      NodeRunInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeRunInfos() = default ;
      NodeRunInfos& operator=(const NodeRunInfos &) = default ;
      NodeRunInfos& operator=(NodeRunInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->errorMessage_ == nullptr && this->inputs_ == nullptr && this->nodeName_ == nullptr && this->output_ == nullptr && this->status_ == nullptr
        && this->stdout_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline NodeRunInfos& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline NodeRunInfos& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline string getInputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
      inline NodeRunInfos& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline NodeRunInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline NodeRunInfos& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NodeRunInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stdout Field Functions 
      bool hasStdout() const { return this->stdout_ != nullptr;};
      void deleteStdout() { this->stdout_ = nullptr;};
      inline string getStdout() const { DARABONBA_PTR_GET_DEFAULT(stdout_, "") };
      inline NodeRunInfos& setStdout(string stdout) { DARABONBA_PTR_SET_VALUE(stdout_, stdout) };


    protected:
      // 耗时
      shared_ptr<string> duration_ {};
      // 错误信息
      shared_ptr<string> errorMessage_ {};
      // 输入
      shared_ptr<string> inputs_ {};
      // 节点名称
      shared_ptr<string> nodeName_ {};
      // 输出
      shared_ptr<string> output_ {};
      // 节点状态
      shared_ptr<string> status_ {};
      // 日志信息
      shared_ptr<string> stdout_ {};
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

    class EvaluationConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DataColumnMapping, dataColumnMapping_);
        DARABONBA_PTR_TO_JSON(FlowSource, flowSource_);
        DARABONBA_PTR_TO_JSON(InputsOverrideConfig, inputsOverrideConfig_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DataColumnMapping, dataColumnMapping_);
        DARABONBA_PTR_FROM_JSON(FlowSource, flowSource_);
        DARABONBA_PTR_FROM_JSON(InputsOverrideConfig, inputsOverrideConfig_);
      };
      EvaluationConfigs() = default ;
      EvaluationConfigs(const EvaluationConfigs &) = default ;
      EvaluationConfigs(EvaluationConfigs &&) = default ;
      EvaluationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationConfigs() = default ;
      EvaluationConfigs& operator=(const EvaluationConfigs &) = default ;
      EvaluationConfigs& operator=(EvaluationConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FlowSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowSource& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, FlowSource& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        FlowSource() = default ;
        FlowSource(const FlowSource &) = default ;
        FlowSource(FlowSource &&) = default ;
        FlowSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowSource() = default ;
        FlowSource& operator=(const FlowSource &) = default ;
        FlowSource& operator=(FlowSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FlowSource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FlowSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline FlowSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // ID
        shared_ptr<string> id_ {};
        // 名称
        shared_ptr<string> name_ {};
        // 类型
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataColumnMapping_ == nullptr
        && this->flowSource_ == nullptr && this->inputsOverrideConfig_ == nullptr; };
      // dataColumnMapping Field Functions 
      bool hasDataColumnMapping() const { return this->dataColumnMapping_ != nullptr;};
      void deleteDataColumnMapping() { this->dataColumnMapping_ = nullptr;};
      inline const map<string, string> & getDataColumnMapping() const { DARABONBA_PTR_GET_CONST(dataColumnMapping_, map<string, string>) };
      inline map<string, string> getDataColumnMapping() { DARABONBA_PTR_GET(dataColumnMapping_, map<string, string>) };
      inline EvaluationConfigs& setDataColumnMapping(const map<string, string> & dataColumnMapping) { DARABONBA_PTR_SET_VALUE(dataColumnMapping_, dataColumnMapping) };
      inline EvaluationConfigs& setDataColumnMapping(map<string, string> && dataColumnMapping) { DARABONBA_PTR_SET_RVALUE(dataColumnMapping_, dataColumnMapping) };


      // flowSource Field Functions 
      bool hasFlowSource() const { return this->flowSource_ != nullptr;};
      void deleteFlowSource() { this->flowSource_ = nullptr;};
      inline const EvaluationConfigs::FlowSource & getFlowSource() const { DARABONBA_PTR_GET_CONST(flowSource_, EvaluationConfigs::FlowSource) };
      inline EvaluationConfigs::FlowSource getFlowSource() { DARABONBA_PTR_GET(flowSource_, EvaluationConfigs::FlowSource) };
      inline EvaluationConfigs& setFlowSource(const EvaluationConfigs::FlowSource & flowSource) { DARABONBA_PTR_SET_VALUE(flowSource_, flowSource) };
      inline EvaluationConfigs& setFlowSource(EvaluationConfigs::FlowSource && flowSource) { DARABONBA_PTR_SET_RVALUE(flowSource_, flowSource) };


      // inputsOverrideConfig Field Functions 
      bool hasInputsOverrideConfig() const { return this->inputsOverrideConfig_ != nullptr;};
      void deleteInputsOverrideConfig() { this->inputsOverrideConfig_ = nullptr;};
      inline string getInputsOverrideConfig() const { DARABONBA_PTR_GET_DEFAULT(inputsOverrideConfig_, "") };
      inline EvaluationConfigs& setInputsOverrideConfig(string inputsOverrideConfig) { DARABONBA_PTR_SET_VALUE(inputsOverrideConfig_, inputsOverrideConfig) };


    protected:
      // 映射配置
      shared_ptr<map<string, string>> dataColumnMapping_ {};
      // 应用流来源
      shared_ptr<EvaluationConfigs::FlowSource> flowSource_ {};
      // 输入配置
      shared_ptr<string> inputsOverrideConfig_ {};
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

    class ChildRuns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildRuns& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FlowRunId, flowRunId_);
        DARABONBA_PTR_TO_JSON(FlowSource, flowSource_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(RunName, runName_);
        DARABONBA_PTR_TO_JSON(RunResult, runResult_);
        DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ChildRuns& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FlowRunId, flowRunId_);
        DARABONBA_PTR_FROM_JSON(FlowSource, flowSource_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(RunName, runName_);
        DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
        DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      };
      ChildRuns() = default ;
      ChildRuns(const ChildRuns &) = default ;
      ChildRuns(ChildRuns &&) = default ;
      ChildRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildRuns() = default ;
      ChildRuns& operator=(const ChildRuns &) = default ;
      ChildRuns& operator=(ChildRuns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobInfo& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, JobInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        };
        JobInfo() = default ;
        JobInfo(const JobInfo &) = default ;
        JobInfo(JobInfo &&) = default ;
        JobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobInfo() = default ;
        JobInfo& operator=(const JobInfo &) = default ;
        JobInfo& operator=(JobInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline JobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        // 任务ID
        shared_ptr<string> jobId_ {};
      };

      class FlowSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowSource& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, FlowSource& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        FlowSource() = default ;
        FlowSource(const FlowSource &) = default ;
        FlowSource(FlowSource &&) = default ;
        FlowSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowSource() = default ;
        FlowSource& operator=(const FlowSource &) = default ;
        FlowSource& operator=(FlowSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline FlowSource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FlowSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline FlowSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // ID
        shared_ptr<string> id_ {};
        // 名称
        shared_ptr<string> name_ {};
        // 类型
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->duration_ == nullptr
        && this->flowRunId_ == nullptr && this->flowSource_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtFinishTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->gmtStartTime_ == nullptr && this->jobInfo_ == nullptr && this->runMode_ == nullptr && this->runName_ == nullptr && this->runResult_ == nullptr
        && this->runStatus_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline ChildRuns& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // flowRunId Field Functions 
      bool hasFlowRunId() const { return this->flowRunId_ != nullptr;};
      void deleteFlowRunId() { this->flowRunId_ = nullptr;};
      inline string getFlowRunId() const { DARABONBA_PTR_GET_DEFAULT(flowRunId_, "") };
      inline ChildRuns& setFlowRunId(string flowRunId) { DARABONBA_PTR_SET_VALUE(flowRunId_, flowRunId) };


      // flowSource Field Functions 
      bool hasFlowSource() const { return this->flowSource_ != nullptr;};
      void deleteFlowSource() { this->flowSource_ = nullptr;};
      inline const ChildRuns::FlowSource & getFlowSource() const { DARABONBA_PTR_GET_CONST(flowSource_, ChildRuns::FlowSource) };
      inline ChildRuns::FlowSource getFlowSource() { DARABONBA_PTR_GET(flowSource_, ChildRuns::FlowSource) };
      inline ChildRuns& setFlowSource(const ChildRuns::FlowSource & flowSource) { DARABONBA_PTR_SET_VALUE(flowSource_, flowSource) };
      inline ChildRuns& setFlowSource(ChildRuns::FlowSource && flowSource) { DARABONBA_PTR_SET_RVALUE(flowSource_, flowSource) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline ChildRuns& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtFinishTime Field Functions 
      bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
      void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
      inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
      inline ChildRuns& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline ChildRuns& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline ChildRuns& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // jobInfo Field Functions 
      bool hasJobInfo() const { return this->jobInfo_ != nullptr;};
      void deleteJobInfo() { this->jobInfo_ = nullptr;};
      inline const ChildRuns::JobInfo & getJobInfo() const { DARABONBA_PTR_GET_CONST(jobInfo_, ChildRuns::JobInfo) };
      inline ChildRuns::JobInfo getJobInfo() { DARABONBA_PTR_GET(jobInfo_, ChildRuns::JobInfo) };
      inline ChildRuns& setJobInfo(const ChildRuns::JobInfo & jobInfo) { DARABONBA_PTR_SET_VALUE(jobInfo_, jobInfo) };
      inline ChildRuns& setJobInfo(ChildRuns::JobInfo && jobInfo) { DARABONBA_PTR_SET_RVALUE(jobInfo_, jobInfo) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
      inline ChildRuns& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // runName Field Functions 
      bool hasRunName() const { return this->runName_ != nullptr;};
      void deleteRunName() { this->runName_ = nullptr;};
      inline string getRunName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
      inline ChildRuns& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


      // runResult Field Functions 
      bool hasRunResult() const { return this->runResult_ != nullptr;};
      void deleteRunResult() { this->runResult_ = nullptr;};
      inline string getRunResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
      inline ChildRuns& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


      // runStatus Field Functions 
      bool hasRunStatus() const { return this->runStatus_ != nullptr;};
      void deleteRunStatus() { this->runStatus_ = nullptr;};
      inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
      inline ChildRuns& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    protected:
      // 运行时长
      shared_ptr<int32_t> duration_ {};
      // 应用流运行ID
      shared_ptr<string> flowRunId_ {};
      // 应用流来源
      shared_ptr<ChildRuns::FlowSource> flowSource_ {};
      // 创建时间
      shared_ptr<string> gmtCreateTime_ {};
      // 结束时间
      shared_ptr<string> gmtFinishTime_ {};
      // 修改时间
      shared_ptr<string> gmtModifiedTime_ {};
      // 开始时间
      shared_ptr<string> gmtStartTime_ {};
      // 任务信息
      shared_ptr<ChildRuns::JobInfo> jobInfo_ {};
      // 运行模式
      shared_ptr<string> runMode_ {};
      // 运行名称
      shared_ptr<string> runName_ {};
      // 运行结果
      shared_ptr<string> runResult_ {};
      // 运行状态
      shared_ptr<string> runStatus_ {};
    };

    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->childRuns_ == nullptr && this->creator_ == nullptr && this->credentialConfig_ == nullptr && this->dataColumnMapping_ == nullptr && this->dataSources_ == nullptr
        && this->duration_ == nullptr && this->ecsSpec_ == nullptr && this->envs_ == nullptr && this->evaluationConfigs_ == nullptr && this->evaluationWorkerCount_ == nullptr
        && this->exception_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowRunId_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtFinishTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->gmtStartTime_ == nullptr && this->labels_ == nullptr && this->nodeName_ == nullptr
        && this->nodeRunInfos_ == nullptr && this->resourceId_ == nullptr && this->runMode_ == nullptr && this->runName_ == nullptr && this->runResult_ == nullptr
        && this->runStatus_ == nullptr && this->runTimeout_ == nullptr && this->userVpc_ == nullptr && this->variant_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline FlowRun& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // childRuns Field Functions 
    bool hasChildRuns() const { return this->childRuns_ != nullptr;};
    void deleteChildRuns() { this->childRuns_ = nullptr;};
    inline const vector<FlowRun::ChildRuns> & getChildRuns() const { DARABONBA_PTR_GET_CONST(childRuns_, vector<FlowRun::ChildRuns>) };
    inline vector<FlowRun::ChildRuns> getChildRuns() { DARABONBA_PTR_GET(childRuns_, vector<FlowRun::ChildRuns>) };
    inline FlowRun& setChildRuns(const vector<FlowRun::ChildRuns> & childRuns) { DARABONBA_PTR_SET_VALUE(childRuns_, childRuns) };
    inline FlowRun& setChildRuns(vector<FlowRun::ChildRuns> && childRuns) { DARABONBA_PTR_SET_RVALUE(childRuns_, childRuns) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline FlowRun& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const FlowRun::CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, FlowRun::CredentialConfig) };
    inline FlowRun::CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, FlowRun::CredentialConfig) };
    inline FlowRun& setCredentialConfig(const FlowRun::CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline FlowRun& setCredentialConfig(FlowRun::CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataColumnMapping Field Functions 
    bool hasDataColumnMapping() const { return this->dataColumnMapping_ != nullptr;};
    void deleteDataColumnMapping() { this->dataColumnMapping_ = nullptr;};
    inline const map<string, string> & getDataColumnMapping() const { DARABONBA_PTR_GET_CONST(dataColumnMapping_, map<string, string>) };
    inline map<string, string> getDataColumnMapping() { DARABONBA_PTR_GET(dataColumnMapping_, map<string, string>) };
    inline FlowRun& setDataColumnMapping(const map<string, string> & dataColumnMapping) { DARABONBA_PTR_SET_VALUE(dataColumnMapping_, dataColumnMapping) };
    inline FlowRun& setDataColumnMapping(map<string, string> && dataColumnMapping) { DARABONBA_PTR_SET_RVALUE(dataColumnMapping_, dataColumnMapping) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<FlowRun::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<FlowRun::DataSources>) };
    inline vector<FlowRun::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<FlowRun::DataSources>) };
    inline FlowRun& setDataSources(const vector<FlowRun::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline FlowRun& setDataSources(vector<FlowRun::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlowRun& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const FlowRun::EcsSpec & getEcsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, FlowRun::EcsSpec) };
    inline FlowRun::EcsSpec getEcsSpec() { DARABONBA_PTR_GET(ecsSpec_, FlowRun::EcsSpec) };
    inline FlowRun& setEcsSpec(const FlowRun::EcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline FlowRun& setEcsSpec(FlowRun::EcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<FlowRun::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<FlowRun::Envs>) };
    inline vector<FlowRun::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<FlowRun::Envs>) };
    inline FlowRun& setEnvs(const vector<FlowRun::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline FlowRun& setEnvs(vector<FlowRun::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // evaluationConfigs Field Functions 
    bool hasEvaluationConfigs() const { return this->evaluationConfigs_ != nullptr;};
    void deleteEvaluationConfigs() { this->evaluationConfigs_ = nullptr;};
    inline const vector<FlowRun::EvaluationConfigs> & getEvaluationConfigs() const { DARABONBA_PTR_GET_CONST(evaluationConfigs_, vector<FlowRun::EvaluationConfigs>) };
    inline vector<FlowRun::EvaluationConfigs> getEvaluationConfigs() { DARABONBA_PTR_GET(evaluationConfigs_, vector<FlowRun::EvaluationConfigs>) };
    inline FlowRun& setEvaluationConfigs(const vector<FlowRun::EvaluationConfigs> & evaluationConfigs) { DARABONBA_PTR_SET_VALUE(evaluationConfigs_, evaluationConfigs) };
    inline FlowRun& setEvaluationConfigs(vector<FlowRun::EvaluationConfigs> && evaluationConfigs) { DARABONBA_PTR_SET_RVALUE(evaluationConfigs_, evaluationConfigs) };


    // evaluationWorkerCount Field Functions 
    bool hasEvaluationWorkerCount() const { return this->evaluationWorkerCount_ != nullptr;};
    void deleteEvaluationWorkerCount() { this->evaluationWorkerCount_ = nullptr;};
    inline int32_t getEvaluationWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(evaluationWorkerCount_, 0) };
    inline FlowRun& setEvaluationWorkerCount(int32_t evaluationWorkerCount) { DARABONBA_PTR_SET_VALUE(evaluationWorkerCount_, evaluationWorkerCount) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string getException() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline FlowRun& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline FlowRun& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline FlowRun& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowRunId Field Functions 
    bool hasFlowRunId() const { return this->flowRunId_ != nullptr;};
    void deleteFlowRunId() { this->flowRunId_ = nullptr;};
    inline string getFlowRunId() const { DARABONBA_PTR_GET_DEFAULT(flowRunId_, "") };
    inline FlowRun& setFlowRunId(string flowRunId) { DARABONBA_PTR_SET_VALUE(flowRunId_, flowRunId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline FlowRun& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string getGmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline FlowRun& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline FlowRun& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline FlowRun& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<FlowRun::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<FlowRun::Labels>) };
    inline vector<FlowRun::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<FlowRun::Labels>) };
    inline FlowRun& setLabels(const vector<FlowRun::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline FlowRun& setLabels(vector<FlowRun::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline FlowRun& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeRunInfos Field Functions 
    bool hasNodeRunInfos() const { return this->nodeRunInfos_ != nullptr;};
    void deleteNodeRunInfos() { this->nodeRunInfos_ = nullptr;};
    inline const vector<FlowRun::NodeRunInfos> & getNodeRunInfos() const { DARABONBA_PTR_GET_CONST(nodeRunInfos_, vector<FlowRun::NodeRunInfos>) };
    inline vector<FlowRun::NodeRunInfos> getNodeRunInfos() { DARABONBA_PTR_GET(nodeRunInfos_, vector<FlowRun::NodeRunInfos>) };
    inline FlowRun& setNodeRunInfos(const vector<FlowRun::NodeRunInfos> & nodeRunInfos) { DARABONBA_PTR_SET_VALUE(nodeRunInfos_, nodeRunInfos) };
    inline FlowRun& setNodeRunInfos(vector<FlowRun::NodeRunInfos> && nodeRunInfos) { DARABONBA_PTR_SET_RVALUE(nodeRunInfos_, nodeRunInfos) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline FlowRun& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline FlowRun& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // runName Field Functions 
    bool hasRunName() const { return this->runName_ != nullptr;};
    void deleteRunName() { this->runName_ = nullptr;};
    inline string getRunName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
    inline FlowRun& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


    // runResult Field Functions 
    bool hasRunResult() const { return this->runResult_ != nullptr;};
    void deleteRunResult() { this->runResult_ = nullptr;};
    inline string getRunResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
    inline FlowRun& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline FlowRun& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    // runTimeout Field Functions 
    bool hasRunTimeout() const { return this->runTimeout_ != nullptr;};
    void deleteRunTimeout() { this->runTimeout_ = nullptr;};
    inline int32_t getRunTimeout() const { DARABONBA_PTR_GET_DEFAULT(runTimeout_, 0) };
    inline FlowRun& setRunTimeout(int32_t runTimeout) { DARABONBA_PTR_SET_VALUE(runTimeout_, runTimeout) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const FlowRun::UserVpc & getUserVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, FlowRun::UserVpc) };
    inline FlowRun::UserVpc getUserVpc() { DARABONBA_PTR_GET(userVpc_, FlowRun::UserVpc) };
    inline FlowRun& setUserVpc(const FlowRun::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline FlowRun& setUserVpc(FlowRun::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // variant Field Functions 
    bool hasVariant() const { return this->variant_ != nullptr;};
    void deleteVariant() { this->variant_ = nullptr;};
    inline string getVariant() const { DARABONBA_PTR_GET_DEFAULT(variant_, "") };
    inline FlowRun& setVariant(string variant) { DARABONBA_PTR_SET_VALUE(variant_, variant) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline FlowRun& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<vector<FlowRun::ChildRuns>> childRuns_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<FlowRun::CredentialConfig> credentialConfig_ {};
    shared_ptr<map<string, string>> dataColumnMapping_ {};
    shared_ptr<vector<FlowRun::DataSources>> dataSources_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<FlowRun::EcsSpec> ecsSpec_ {};
    shared_ptr<vector<FlowRun::Envs>> envs_ {};
    shared_ptr<vector<FlowRun::EvaluationConfigs>> evaluationConfigs_ {};
    shared_ptr<int32_t> evaluationWorkerCount_ {};
    shared_ptr<string> exception_ {};
    shared_ptr<string> flowId_ {};
    shared_ptr<string> flowName_ {};
    shared_ptr<string> flowRunId_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtFinishTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> gmtStartTime_ {};
    shared_ptr<vector<FlowRun::Labels>> labels_ {};
    shared_ptr<string> nodeName_ {};
    shared_ptr<vector<FlowRun::NodeRunInfos>> nodeRunInfos_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> runMode_ {};
    shared_ptr<string> runName_ {};
    shared_ptr<string> runResult_ {};
    shared_ptr<string> runStatus_ {};
    shared_ptr<int32_t> runTimeout_ {};
    shared_ptr<FlowRun::UserVpc> userVpc_ {};
    shared_ptr<string> variant_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
