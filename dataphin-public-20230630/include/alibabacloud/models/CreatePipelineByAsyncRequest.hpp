// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreatePipelineByAsyncRequest() = default ;
    CreatePipelineByAsyncRequest(const CreatePipelineByAsyncRequest &) = default ;
    CreatePipelineByAsyncRequest(CreatePipelineByAsyncRequest &&) = default ;
    CreatePipelineByAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequest() = default ;
    CreatePipelineByAsyncRequest& operator=(const CreatePipelineByAsyncRequest &) = default ;
    CreatePipelineByAsyncRequest& operator=(CreatePipelineByAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_TO_JSON(PipelineConfig, pipelineConfig_);
        DARABONBA_PTR_TO_JSON(PipelineJson, pipelineJson_);
        DARABONBA_PTR_TO_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_TO_JSON(Settings, settings_);
        DARABONBA_PTR_TO_JSON(Submit, submit_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
        DARABONBA_PTR_FROM_JSON(PipelineConfig, pipelineConfig_);
        DARABONBA_PTR_FROM_JSON(PipelineJson, pipelineJson_);
        DARABONBA_PTR_FROM_JSON(PipelineType, pipelineType_);
        DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
        DARABONBA_PTR_FROM_JSON(Settings, settings_);
        DARABONBA_PTR_FROM_JSON(Submit, submit_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PipelineConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PipelineConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Hops, hops_);
          DARABONBA_PTR_TO_JSON(Steps, steps_);
        };
        friend void from_json(const Darabonba::Json& j, PipelineConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Hops, hops_);
          DARABONBA_PTR_FROM_JSON(Steps, steps_);
        };
        PipelineConfig() = default ;
        PipelineConfig(const PipelineConfig &) = default ;
        PipelineConfig(PipelineConfig &&) = default ;
        PipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PipelineConfig() = default ;
        PipelineConfig& operator=(const PipelineConfig &) = default ;
        PipelineConfig& operator=(PipelineConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Steps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Steps& obj) { 
            DARABONBA_PTR_TO_JSON(IsDistribute, isDistribute_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(PluginConfig, pluginConfig_);
            DARABONBA_PTR_TO_JSON(StepName, stepName_);
            DARABONBA_PTR_TO_JSON(StepType, stepType_);
          };
          friend void from_json(const Darabonba::Json& j, Steps& obj) { 
            DARABONBA_PTR_FROM_JSON(IsDistribute, isDistribute_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(PluginConfig, pluginConfig_);
            DARABONBA_PTR_FROM_JSON(StepName, stepName_);
            DARABONBA_PTR_FROM_JSON(StepType, stepType_);
          };
          Steps() = default ;
          Steps(const Steps &) = default ;
          Steps(Steps &&) = default ;
          Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Steps() = default ;
          Steps& operator=(const Steps &) = default ;
          Steps& operator=(Steps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->isDistribute_ == nullptr
        && this->key_ == nullptr && this->pluginConfig_ == nullptr && this->stepName_ == nullptr && this->stepType_ == nullptr; };
          // isDistribute Field Functions 
          bool hasIsDistribute() const { return this->isDistribute_ != nullptr;};
          void deleteIsDistribute() { this->isDistribute_ = nullptr;};
          inline bool getIsDistribute() const { DARABONBA_PTR_GET_DEFAULT(isDistribute_, false) };
          inline Steps& setIsDistribute(bool isDistribute) { DARABONBA_PTR_SET_VALUE(isDistribute_, isDistribute) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Steps& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // pluginConfig Field Functions 
          bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
          void deletePluginConfig() { this->pluginConfig_ = nullptr;};
          inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
          inline Steps& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


          // stepName Field Functions 
          bool hasStepName() const { return this->stepName_ != nullptr;};
          void deleteStepName() { this->stepName_ = nullptr;};
          inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
          inline Steps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


          // stepType Field Functions 
          bool hasStepType() const { return this->stepType_ != nullptr;};
          void deleteStepType() { this->stepType_ = nullptr;};
          inline string getStepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
          inline Steps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


        protected:
          // The data distribution method when the current component has multiple downstream components. Valid values: true: distributes data from the current component to all downstream components in turn. For example, if the current component has 100 data records and two downstream components, each downstream component receives 50 data records. Default value: true. false: sends all data from the current component to all downstream components. For example, if the current component has 100 data records and two downstream components, both downstream components receive all 100 data records. Ignore this parameter for workflow tasks.
          shared_ptr<bool> isDistribute_ {};
          // The plugin ID. Each plugin or operator has a unique identifier. Refer to the stepKey field in the com.alibaba.dataphin.pipeline.common.facade.openapi.model.plugin.OABasePluginConfig utility class. Developers must inherit this component or operator configuration class to implement the corresponding configuration. The structure of each component or operator configuration must be identical to the configuration structure created on the Dataphin page.
          // 
          // This parameter is required.
          shared_ptr<string> key_ {};
          // The specific component configuration in JSON string format. Refer to the toJsonString method of the relevant subclasses of com.alibaba.dataphin.pipeline.common.facade.openapi.model.plugin.OABasePluginConfig (for workflow operators, use com.alibaba.dataphin.pipeline.common.facade.openapi.model.plugin.unstructured.BaseOAUnstructuredNeuronConfig). Developers must inherit this component or operator configuration class to implement the corresponding configuration. The structure of each component or operator configuration must be identical to the task configuration structure created on the Dataphin page.
          // 
          // This parameter is required.
          shared_ptr<string> pluginConfig_ {};
          // The step name. Step names must be unique within the same pipeline task.
          // 
          // This parameter is required.
          shared_ptr<string> stepName_ {};
          // The component type. Valid values: input: input component. output: output component. transfrom: transform component. process: flow control component. For workflow tasks, this indicates the operator type, such as image for images and text for text. Refer to the stepType field in the com.alibaba.dataphin.pipeline.common.facade.openapi.model.plugin.OABasePluginConfig utility class. Developers must inherit this component or operator configuration class to implement the corresponding configuration. The structure of each component or operator configuration must be identical to the configuration structure created on the Dataphin page.
          // 
          // This parameter is required.
          shared_ptr<string> stepType_ {};
        };

        class Hops : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hops& obj) { 
            DARABONBA_PTR_TO_JSON(SendTo, sendTo_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Target, target_);
          };
          friend void from_json(const Darabonba::Json& j, Hops& obj) { 
            DARABONBA_PTR_FROM_JSON(SendTo, sendTo_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
          };
          Hops() = default ;
          Hops(const Hops &) = default ;
          Hops(Hops &&) = default ;
          Hops(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hops() = default ;
          Hops& operator=(const Hops &) = default ;
          Hops& operator=(Hops &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->sendTo_ == nullptr
        && this->source_ == nullptr && this->target_ == nullptr; };
          // sendTo Field Functions 
          bool hasSendTo() const { return this->sendTo_ != nullptr;};
          void deleteSendTo() { this->sendTo_ = nullptr;};
          inline bool getSendTo() const { DARABONBA_PTR_GET_DEFAULT(sendTo_, false) };
          inline Hops& setSendTo(bool sendTo) { DARABONBA_PTR_SET_VALUE(sendTo_, sendTo) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Hops& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
          inline Hops& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        protected:
          // For conditional distribution components, set this parameter to true if the downstream connection condition is true. Otherwise, set it to false. Ignore this parameter for workflow tasks.
          shared_ptr<bool> sendTo_ {};
          // The name of the input step, which corresponds to Steps[*].StepName.
          // 
          // This parameter is required.
          shared_ptr<string> source_ {};
          // The name of the output step, which corresponds to Steps[*].StepName.
          // 
          // This parameter is required.
          shared_ptr<string> target_ {};
        };

        virtual bool empty() const override { return this->hops_ == nullptr
        && this->steps_ == nullptr; };
        // hops Field Functions 
        bool hasHops() const { return this->hops_ != nullptr;};
        void deleteHops() { this->hops_ = nullptr;};
        inline const vector<PipelineConfig::Hops> & getHops() const { DARABONBA_PTR_GET_CONST(hops_, vector<PipelineConfig::Hops>) };
        inline vector<PipelineConfig::Hops> getHops() { DARABONBA_PTR_GET(hops_, vector<PipelineConfig::Hops>) };
        inline PipelineConfig& setHops(const vector<PipelineConfig::Hops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
        inline PipelineConfig& setHops(vector<PipelineConfig::Hops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


        // steps Field Functions 
        bool hasSteps() const { return this->steps_ != nullptr;};
        void deleteSteps() { this->steps_ = nullptr;};
        inline const vector<PipelineConfig::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<PipelineConfig::Steps>) };
        inline vector<PipelineConfig::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<PipelineConfig::Steps>) };
        inline PipelineConfig& setSteps(const vector<PipelineConfig::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
        inline PipelineConfig& setSteps(vector<PipelineConfig::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      protected:
        // The directed acyclic graph (DAG) link configuration that describes the connection relationships among all components.
        // 
        // This parameter is required.
        shared_ptr<vector<PipelineConfig::Hops>> hops_ {};
        // The component or operator configurations, including the detailed configurations of all used components or operators.
        // 
        // This parameter is required.
        shared_ptr<vector<PipelineConfig::Steps>> steps_ {};
      };

      class NodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        };
        friend void from_json(const Darabonba::Json& j, NodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        };
        NodeInfo() = default ;
        NodeInfo(const NodeInfo &) = default ;
        NodeInfo(NodeInfo &&) = default ;
        NodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeInfo() = default ;
        NodeInfo& operator=(const NodeInfo &) = default ;
        NodeInfo& operator=(NodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directory_ == nullptr
        && this->fileId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->pipelineId_ == nullptr; };
        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline NodeInfo& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline NodeInfo& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline NodeInfo& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
        inline NodeInfo& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      protected:
        // The node directory of the integration pipeline task. Default value: root directory. The directory must exist. If it does not exist, call the relevant API operation to create a directory of the offlinePipeline type.
        shared_ptr<string> directory_ {};
        // The ID of the pipeline file. Leave this parameter empty when creating a task for the first time. When updating a pipeline task, you must configure at least one of the following parameters: pipelineId, fileId, and nodeId.
        shared_ptr<int64_t> fileId_ {};
        // The ID of the schedule node for the pipeline task. Leave this parameter empty when creating a task for the first time. When updating a pipeline task, you must configure at least one of the following parameters: pipelineId, fileId, and nodeId.
        shared_ptr<string> nodeId_ {};
        // The name of the integration pipeline task.
        // 
        // This parameter is required.
        shared_ptr<string> nodeName_ {};
        // The ID of the pipeline task. Leave this parameter empty when creating a task for the first time. When updating a pipeline task, you must configure at least one of the following parameters: pipelineId, fileId, and nodeId.
        shared_ptr<int64_t> pipelineId_ {};
      };

      virtual bool empty() const override { return this->comment_ == nullptr
        && this->mode_ == nullptr && this->nodeInfo_ == nullptr && this->pipelineConfig_ == nullptr && this->pipelineJson_ == nullptr && this->pipelineType_ == nullptr
        && this->scheduleConfig_ == nullptr && this->settings_ == nullptr && this->submit_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline CreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline CreateCommand& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // nodeInfo Field Functions 
      bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
      void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
      inline const CreateCommand::NodeInfo & getNodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, CreateCommand::NodeInfo) };
      inline CreateCommand::NodeInfo getNodeInfo() { DARABONBA_PTR_GET(nodeInfo_, CreateCommand::NodeInfo) };
      inline CreateCommand& setNodeInfo(const CreateCommand::NodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
      inline CreateCommand& setNodeInfo(CreateCommand::NodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


      // pipelineConfig Field Functions 
      bool hasPipelineConfig() const { return this->pipelineConfig_ != nullptr;};
      void deletePipelineConfig() { this->pipelineConfig_ = nullptr;};
      inline const CreateCommand::PipelineConfig & getPipelineConfig() const { DARABONBA_PTR_GET_CONST(pipelineConfig_, CreateCommand::PipelineConfig) };
      inline CreateCommand::PipelineConfig getPipelineConfig() { DARABONBA_PTR_GET(pipelineConfig_, CreateCommand::PipelineConfig) };
      inline CreateCommand& setPipelineConfig(const CreateCommand::PipelineConfig & pipelineConfig) { DARABONBA_PTR_SET_VALUE(pipelineConfig_, pipelineConfig) };
      inline CreateCommand& setPipelineConfig(CreateCommand::PipelineConfig && pipelineConfig) { DARABONBA_PTR_SET_RVALUE(pipelineConfig_, pipelineConfig) };


      // pipelineJson Field Functions 
      bool hasPipelineJson() const { return this->pipelineJson_ != nullptr;};
      void deletePipelineJson() { this->pipelineJson_ = nullptr;};
      inline string getPipelineJson() const { DARABONBA_PTR_GET_DEFAULT(pipelineJson_, "") };
      inline CreateCommand& setPipelineJson(string pipelineJson) { DARABONBA_PTR_SET_VALUE(pipelineJson_, pipelineJson) };


      // pipelineType Field Functions 
      bool hasPipelineType() const { return this->pipelineType_ != nullptr;};
      void deletePipelineType() { this->pipelineType_ = nullptr;};
      inline int32_t getPipelineType() const { DARABONBA_PTR_GET_DEFAULT(pipelineType_, 0) };
      inline CreateCommand& setPipelineType(int32_t pipelineType) { DARABONBA_PTR_SET_VALUE(pipelineType_, pipelineType) };


      // scheduleConfig Field Functions 
      bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
      void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
      inline string getScheduleConfig() const { DARABONBA_PTR_GET_DEFAULT(scheduleConfig_, "") };
      inline CreateCommand& setScheduleConfig(string scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };


      // settings Field Functions 
      bool hasSettings() const { return this->settings_ != nullptr;};
      void deleteSettings() { this->settings_ = nullptr;};
      inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
      inline CreateCommand& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


      // submit Field Functions 
      bool hasSubmit() const { return this->submit_ != nullptr;};
      void deleteSubmit() { this->submit_ = nullptr;};
      inline bool getSubmit() const { DARABONBA_PTR_GET_DEFAULT(submit_, false) };
      inline CreateCommand& setSubmit(bool submit) { DARABONBA_PTR_SET_VALUE(submit_, submit) };


    protected:
      // The comment.
      shared_ptr<string> comment_ {};
      // The integration pipeline configuration mode. Valid values: PIPELINE: pipeline mode (default). JSON: script mode. Ignore this parameter for workflows.
      shared_ptr<string> mode_ {};
      // The basic information of the integration pipeline task.
      // 
      // This parameter is required.
      shared_ptr<CreateCommand::NodeInfo> nodeInfo_ {};
      // The integration pipeline component or workflow operator configuration.
      // 
      // This parameter is required.
      shared_ptr<CreateCommand::PipelineConfig> pipelineConfig_ {};
      // The integration pipeline configuration in JSON string format for script mode. Workflow tasks do not support script mode.
      shared_ptr<string> pipelineJson_ {};
      // The task type. Valid values: 0: offline integration (default). 1: real-time integration. 14: offline workflow task. 15: real-time workflow.
      shared_ptr<int32_t> pipelineType_ {};
      // The schedule configuration in JSON string format. Refer to the toJsonString method in the com.alibaba.dataphin.pipeline.common.facade.openapi.model.OAScheduleConfig utility class.
      // 
      // This parameter is required.
      shared_ptr<string> scheduleConfig_ {};
      // The channel configuration in JSON string format. Refer to the toJsonString method in the com.alibaba.dataphin.pipeline.common.facade.openapi.model.OAPipelineSetting utility class.
      shared_ptr<string> settings_ {};
      // Specifies whether to submit the task. By default, the task is submitted.
      shared_ptr<bool> submit_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->projectId_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Context& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Context& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The current operation environment. Valid values: DEV: development environment. PROD: production environment. For workflows, only PROD is currently supported.
      // 
      // This parameter is required.
      shared_ptr<string> env_ {};
      // The ID of the project to which the integration pipeline or workflow task belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->createCommand_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const CreatePipelineByAsyncRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, CreatePipelineByAsyncRequest::Context) };
    inline CreatePipelineByAsyncRequest::Context getContext() { DARABONBA_PTR_GET(context_, CreatePipelineByAsyncRequest::Context) };
    inline CreatePipelineByAsyncRequest& setContext(const CreatePipelineByAsyncRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline CreatePipelineByAsyncRequest& setContext(CreatePipelineByAsyncRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreatePipelineByAsyncRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreatePipelineByAsyncRequest::CreateCommand) };
    inline CreatePipelineByAsyncRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreatePipelineByAsyncRequest::CreateCommand) };
    inline CreatePipelineByAsyncRequest& setCreateCommand(const CreatePipelineByAsyncRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreatePipelineByAsyncRequest& setCreateCommand(CreatePipelineByAsyncRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreatePipelineByAsyncRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreatePipelineByAsyncRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<CreatePipelineByAsyncRequest::Context> context_ {};
    // The configuration for creating a pipeline or workflow task.
    // 
    // This parameter is required.
    shared_ptr<CreatePipelineByAsyncRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the user who performs the operation.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
