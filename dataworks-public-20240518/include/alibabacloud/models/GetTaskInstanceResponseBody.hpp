// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInstance, taskInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInstance, taskInstance_);
    };
    GetTaskInstanceResponseBody() = default ;
    GetTaskInstanceResponseBody(const GetTaskInstanceResponseBody &) = default ;
    GetTaskInstanceResponseBody(GetTaskInstanceResponseBody &&) = default ;
    GetTaskInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceResponseBody() = default ;
    GetTaskInstanceResponseBody& operator=(const GetTaskInstanceResponseBody &) = default ;
    GetTaskInstanceResponseBody& operator=(GetTaskInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInstance& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(PeriodNumber, periodNumber_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_TO_JSON(RunNumber, runNumber_);
        DARABONBA_PTR_TO_JSON(Runtime, runtime_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
        DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
        DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
        DARABONBA_PTR_TO_JSON(WaitingResourceTime, waitingResourceTime_);
        DARABONBA_PTR_TO_JSON(WaitingTriggerTime, waitingTriggerTime_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
        DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
        DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(PeriodNumber, periodNumber_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
        DARABONBA_PTR_FROM_JSON(RunNumber, runNumber_);
        DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
        DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
        DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
        DARABONBA_PTR_FROM_JSON(WaitingResourceTime, waitingResourceTime_);
        DARABONBA_PTR_FROM_JSON(WaitingTriggerTime, waitingTriggerTime_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
        DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
      };
      TaskInstance() = default ;
      TaskInstance(const TaskInstance &) = default ;
      TaskInstance(TaskInstance &&) = default ;
      TaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInstance() = default ;
      TaskInstance& operator=(const TaskInstance &) = default ;
      TaskInstance& operator=(TaskInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Script : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Script& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        };
        friend void from_json(const Darabonba::Json& j, Script& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        };
        Script() = default ;
        Script(const Script &) = default ;
        Script(Script &&) = default ;
        Script(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Script() = default ;
        Script& operator=(const Script &) = default ;
        Script& operator=(Script &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->parameters_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Script& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Script& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      protected:
        // The script content.
        shared_ptr<string> content_ {};
        // The script parameters.
        shared_ptr<string> parameters_ {};
      };

      class RuntimeResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        RuntimeResource() = default ;
        RuntimeResource(const RuntimeResource &) = default ;
        RuntimeResource(RuntimeResource &&) = default ;
        RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuntimeResource() = default ;
        RuntimeResource& operator=(const RuntimeResource &) = default ;
        RuntimeResource& operator=(RuntimeResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cu_ == nullptr
        && this->image_ == nullptr && this->resourceGroupId_ == nullptr; };
        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline string getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, "") };
        inline RuntimeResource& setCu(string cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // image Field Functions 
        bool hasImage() const { return this->image_ != nullptr;};
        void deleteImage() { this->image_ = nullptr;};
        inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
        inline RuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        // The default number of CUs configured for task running.
        shared_ptr<string> cu_ {};
        // The ID of the image configured for task running.
        shared_ptr<string> image_ {};
        // The ID of the resource group for scheduling configured for task running.
        shared_ptr<string> resourceGroupId_ {};
      };

      class Runtime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
          DARABONBA_PTR_TO_JSON(Gateway, gateway_);
          DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        };
        friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
          DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
          DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
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
        virtual bool empty() const override { return this->gateway_ == nullptr
        && this->processId_ == nullptr; };
        // gateway Field Functions 
        bool hasGateway() const { return this->gateway_ != nullptr;};
        void deleteGateway() { this->gateway_ = nullptr;};
        inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
        inline Runtime& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


        // processId Field Functions 
        bool hasProcessId() const { return this->processId_ != nullptr;};
        void deleteProcessId() { this->processId_ = nullptr;};
        inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
        inline Runtime& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      protected:
        // The host for running.
        shared_ptr<string> gateway_ {};
        // The instance run ID.
        shared_ptr<string> processId_ {};
      };

      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Variables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variables& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Variables() = default ;
          Variables(const Variables &) = default ;
          Variables(Variables &&) = default ;
          Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Variables() = default ;
          Variables& operator=(const Variables &) = default ;
          Variables& operator=(Variables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Variables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the variable.
          shared_ptr<string> name_ {};
          // The type. Valid values:
          // 
          // *   Constant: constant
          // *   PassThrough: node output
          // *   System: variable
          // *   NodeOutput: script output
          shared_ptr<string> type_ {};
          // The value of the variable.
          shared_ptr<string> value_ {};
        };

        class TaskOutputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskOutputs& obj) { 
            DARABONBA_PTR_TO_JSON(Output, output_);
          };
          friend void from_json(const Darabonba::Json& j, TaskOutputs& obj) { 
            DARABONBA_PTR_FROM_JSON(Output, output_);
          };
          TaskOutputs() = default ;
          TaskOutputs(const TaskOutputs &) = default ;
          TaskOutputs(TaskOutputs &&) = default ;
          TaskOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskOutputs() = default ;
          TaskOutputs& operator=(const TaskOutputs &) = default ;
          TaskOutputs& operator=(TaskOutputs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->output_ == nullptr; };
          // output Field Functions 
          bool hasOutput() const { return this->output_ != nullptr;};
          void deleteOutput() { this->output_ = nullptr;};
          inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
          inline TaskOutputs& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        protected:
          // The output identifier.
          shared_ptr<string> output_ {};
        };

        virtual bool empty() const override { return this->taskOutputs_ == nullptr
        && this->variables_ == nullptr; };
        // taskOutputs Field Functions 
        bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
        void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
        inline const vector<Outputs::TaskOutputs> & getTaskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline vector<Outputs::TaskOutputs> getTaskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Outputs::TaskOutputs>) };
        inline Outputs& setTaskOutputs(const vector<Outputs::TaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
        inline Outputs& setTaskOutputs(vector<Outputs::TaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Outputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Outputs::Variables>) };
        inline vector<Outputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Outputs::Variables>) };
        inline Outputs& setVariables(const vector<Outputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Outputs& setVariables(vector<Outputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The task outputs.
        shared_ptr<vector<Outputs::TaskOutputs>> taskOutputs_ {};
        // The variables.
        shared_ptr<vector<Outputs::Variables>> variables_ {};
      };

      class Inputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
          DARABONBA_PTR_TO_JSON(Variables, variables_);
        };
        friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
          DARABONBA_PTR_FROM_JSON(Variables, variables_);
        };
        Inputs() = default ;
        Inputs(const Inputs &) = default ;
        Inputs(Inputs &&) = default ;
        Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Inputs() = default ;
        Inputs& operator=(const Inputs &) = default ;
        Inputs& operator=(Inputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Variables : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Variables& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Variables() = default ;
          Variables(const Variables &) = default ;
          Variables(Variables &&) = default ;
          Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Variables() = default ;
          Variables& operator=(const Variables &) = default ;
          Variables& operator=(Variables &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Variables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the variable.
          shared_ptr<string> name_ {};
          // The type. Valid values:
          // 
          // *   Constant: constant
          // *   PassThrough: node output
          // *   System: variable
          // *   NodeOutput: script output
          shared_ptr<string> type_ {};
          // The value of the variable.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->variables_ == nullptr; };
        // variables Field Functions 
        bool hasVariables() const { return this->variables_ != nullptr;};
        void deleteVariables() { this->variables_ = nullptr;};
        inline const vector<Inputs::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Inputs::Variables>) };
        inline vector<Inputs::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Inputs::Variables>) };
        inline Inputs& setVariables(const vector<Inputs::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
        inline Inputs& setVariables(vector<Inputs::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


      protected:
        // The variables.
        shared_ptr<vector<Inputs::Variables>> variables_ {};
      };

      class DataSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DataSource() = default ;
        DataSource(const DataSource &) = default ;
        DataSource(DataSource &&) = default ;
        DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSource() = default ;
        DataSource& operator=(const DataSource &) = default ;
        DataSource& operator=(DataSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name of the data source.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->bizdate_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr
        && this->finishedTime_ == nullptr && this->id_ == nullptr && this->inputs_ == nullptr && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr
        && this->outputs_ == nullptr && this->owner_ == nullptr && this->periodNumber_ == nullptr && this->priority_ == nullptr && this->projectEnv_ == nullptr
        && this->projectId_ == nullptr && this->rerunMode_ == nullptr && this->runNumber_ == nullptr && this->runtime_ == nullptr && this->runtimeResource_ == nullptr
        && this->script_ == nullptr && this->startedTime_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->taskType_ == nullptr && this->timeout_ == nullptr && this->triggerRecurrence_ == nullptr && this->triggerTime_ == nullptr
        && this->triggerType_ == nullptr && this->unifiedWorkflowInstanceId_ == nullptr && this->waitingResourceTime_ == nullptr && this->waitingTriggerTime_ == nullptr && this->workflowId_ == nullptr
        && this->workflowInstanceId_ == nullptr && this->workflowInstanceType_ == nullptr && this->workflowName_ == nullptr; };
      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
      inline TaskInstance& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // bizdate Field Functions 
      bool hasBizdate() const { return this->bizdate_ != nullptr;};
      void deleteBizdate() { this->bizdate_ = nullptr;};
      inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
      inline TaskInstance& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TaskInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline TaskInstance& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline const TaskInstance::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, TaskInstance::DataSource) };
      inline TaskInstance::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, TaskInstance::DataSource) };
      inline TaskInstance& setDataSource(const TaskInstance::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
      inline TaskInstance& setDataSource(TaskInstance::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TaskInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
      inline TaskInstance& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline TaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline const TaskInstance::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, TaskInstance::Inputs) };
      inline TaskInstance::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, TaskInstance::Inputs) };
      inline TaskInstance& setInputs(const TaskInstance::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
      inline TaskInstance& setInputs(TaskInstance::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline TaskInstance& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline TaskInstance& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const TaskInstance::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, TaskInstance::Outputs) };
      inline TaskInstance::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, TaskInstance::Outputs) };
      inline TaskInstance& setOutputs(const TaskInstance::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline TaskInstance& setOutputs(TaskInstance::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TaskInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // periodNumber Field Functions 
      bool hasPeriodNumber() const { return this->periodNumber_ != nullptr;};
      void deletePeriodNumber() { this->periodNumber_ = nullptr;};
      inline int32_t getPeriodNumber() const { DARABONBA_PTR_GET_DEFAULT(periodNumber_, 0) };
      inline TaskInstance& setPeriodNumber(int32_t periodNumber) { DARABONBA_PTR_SET_VALUE(periodNumber_, periodNumber) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TaskInstance& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectEnv Field Functions 
      bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
      void deleteProjectEnv() { this->projectEnv_ = nullptr;};
      inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
      inline TaskInstance& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline TaskInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // rerunMode Field Functions 
      bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
      void deleteRerunMode() { this->rerunMode_ = nullptr;};
      inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
      inline TaskInstance& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


      // runNumber Field Functions 
      bool hasRunNumber() const { return this->runNumber_ != nullptr;};
      void deleteRunNumber() { this->runNumber_ = nullptr;};
      inline int32_t getRunNumber() const { DARABONBA_PTR_GET_DEFAULT(runNumber_, 0) };
      inline TaskInstance& setRunNumber(int32_t runNumber) { DARABONBA_PTR_SET_VALUE(runNumber_, runNumber) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline const TaskInstance::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, TaskInstance::Runtime) };
      inline TaskInstance::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, TaskInstance::Runtime) };
      inline TaskInstance& setRuntime(const TaskInstance::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
      inline TaskInstance& setRuntime(TaskInstance::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline const TaskInstance::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, TaskInstance::RuntimeResource) };
      inline TaskInstance::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, TaskInstance::RuntimeResource) };
      inline TaskInstance& setRuntimeResource(const TaskInstance::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
      inline TaskInstance& setRuntimeResource(TaskInstance::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline const TaskInstance::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, TaskInstance::Script) };
      inline TaskInstance::Script getScript() { DARABONBA_PTR_GET(script_, TaskInstance::Script) };
      inline TaskInstance& setScript(const TaskInstance::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
      inline TaskInstance& setScript(TaskInstance::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


      // startedTime Field Functions 
      bool hasStartedTime() const { return this->startedTime_ != nullptr;};
      void deleteStartedTime() { this->startedTime_ = nullptr;};
      inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
      inline TaskInstance& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TaskInstance::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TaskInstance::Tags>) };
      inline vector<TaskInstance::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TaskInstance::Tags>) };
      inline TaskInstance& setTags(const vector<TaskInstance::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TaskInstance& setTags(vector<TaskInstance::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline TaskInstance& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskInstance& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskInstance& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline TaskInstance& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // triggerRecurrence Field Functions 
      bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
      void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
      inline string getTriggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
      inline TaskInstance& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


      // triggerTime Field Functions 
      bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
      void deleteTriggerTime() { this->triggerTime_ = nullptr;};
      inline int64_t getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
      inline TaskInstance& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline TaskInstance& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // unifiedWorkflowInstanceId Field Functions 
      bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
      void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
      inline int64_t getUnifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
      inline TaskInstance& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


      // waitingResourceTime Field Functions 
      bool hasWaitingResourceTime() const { return this->waitingResourceTime_ != nullptr;};
      void deleteWaitingResourceTime() { this->waitingResourceTime_ = nullptr;};
      inline int64_t getWaitingResourceTime() const { DARABONBA_PTR_GET_DEFAULT(waitingResourceTime_, 0L) };
      inline TaskInstance& setWaitingResourceTime(int64_t waitingResourceTime) { DARABONBA_PTR_SET_VALUE(waitingResourceTime_, waitingResourceTime) };


      // waitingTriggerTime Field Functions 
      bool hasWaitingTriggerTime() const { return this->waitingTriggerTime_ != nullptr;};
      void deleteWaitingTriggerTime() { this->waitingTriggerTime_ = nullptr;};
      inline int64_t getWaitingTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(waitingTriggerTime_, 0L) };
      inline TaskInstance& setWaitingTriggerTime(int64_t waitingTriggerTime) { DARABONBA_PTR_SET_VALUE(waitingTriggerTime_, waitingTriggerTime) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
      inline TaskInstance& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      // workflowInstanceId Field Functions 
      bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
      void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
      inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
      inline TaskInstance& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


      // workflowInstanceType Field Functions 
      bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
      void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
      inline string getWorkflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
      inline TaskInstance& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


      // workflowName Field Functions 
      bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
      void deleteWorkflowName() { this->workflowName_ = nullptr;};
      inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
      inline TaskInstance& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


    protected:
      // The baseline ID.
      shared_ptr<int64_t> baselineId_ {};
      // The data timestamp.
      shared_ptr<int64_t> bizdate_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The account ID of the creator.
      shared_ptr<string> createUser_ {};
      // The information about the associated data source.
      shared_ptr<TaskInstance::DataSource> dataSource_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The time when the instance finished running.
      shared_ptr<int64_t> finishedTime_ {};
      // The instance ID.
      shared_ptr<int64_t> id_ {};
      // The input information.
      shared_ptr<TaskInstance::Inputs> inputs_ {};
      // The modification time.
      shared_ptr<int64_t> modifyTime_ {};
      // The account ID of the modifier.
      shared_ptr<string> modifyUser_ {};
      // The output information.
      shared_ptr<TaskInstance::Outputs> outputs_ {};
      // The account ID of the task owner.
      shared_ptr<string> owner_ {};
      // The sequence number of the cycle. This parameter indicates the cycle of the task instance on the current day.
      shared_ptr<int32_t> periodNumber_ {};
      // The task priority. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
      shared_ptr<int32_t> priority_ {};
      // The environment of the workspace. Valid values:
      // 
      // *   Prod: production environment
      // *   Dev: development environment
      shared_ptr<string> projectEnv_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The rerun mode. Valid values:
      // 
      // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
      // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
      // *   FailureAllowed: The task can be rerun only after it fails to run.
      shared_ptr<string> rerunMode_ {};
      // The number of times the instance is run. By default, the value starts from 1.
      shared_ptr<int32_t> runNumber_ {};
      // The runtime information about the instance.
      shared_ptr<TaskInstance::Runtime> runtime_ {};
      // The information about the resource group with which the instance is associated.
      shared_ptr<TaskInstance::RuntimeResource> runtimeResource_ {};
      // The script information.
      shared_ptr<TaskInstance::Script> script_ {};
      // The time when the instance started to run.
      shared_ptr<int64_t> startedTime_ {};
      // The status of the instance. Valid values:
      // 
      // *   NotRun: The instance is not run.
      // *   Running: The instance is running.
      // *   WaitTime: The instance is waiting for the scheduling time to arrive.
      // *   CheckingCondition: Branch conditions are being checked for the instance.
      // *   WaitResource: The instance is waiting for resources.
      // *   Failure: The instance fails to be run.
      // *   Success: The instance is successfully run.
      // *   Checking: Data quality is being checked for the instance.
      shared_ptr<string> status_ {};
      // The tags of the task.
      shared_ptr<vector<TaskInstance::Tags>> tags_ {};
      // The ID of the task for which the instance is generated.
      shared_ptr<int64_t> taskId_ {};
      // The name of the task for which the instance is generated.
      shared_ptr<string> taskName_ {};
      // The type of the task for which the instance is generated.
      shared_ptr<string> taskType_ {};
      // The timeout period of task running. Unit: seconds.
      // 
      // Note: The value of this parameter is rounded up by hour.
      shared_ptr<int32_t> timeout_ {};
      // The running mode of the instance after it is triggered. This parameter takes effect only if the TriggerType parameter is set to Scheduler. Valid values:
      // 
      // *   Pause
      // *   Skip
      // *   Normal
      shared_ptr<string> triggerRecurrence_ {};
      // The scheduling time.
      shared_ptr<int64_t> triggerTime_ {};
      // The method to trigger instance scheduling. The value of the Trigger.Type parameter in the response of the GetTask operation is used. Valid values:
      // 
      // *   Scheduler
      // *   Manual
      shared_ptr<string> triggerType_ {};
      shared_ptr<int64_t> unifiedWorkflowInstanceId_ {};
      // The timestamp for when it started waiting for resources.
      shared_ptr<int64_t> waitingResourceTime_ {};
      // The timestamp for when it started waiting for the scheduled time.
      shared_ptr<int64_t> waitingTriggerTime_ {};
      // The ID of the workflow to which the instance belongs.
      shared_ptr<int64_t> workflowId_ {};
      // The workflow instance ID.
      shared_ptr<int64_t> workflowInstanceId_ {};
      // The type of the workflow instance. Valid values:
      // 
      // *   SmokeTest
      // *   SupplementData
      // *   Manual
      // *   ManualWorkflow
      // *   Normal
      // *   ManualFlow
      shared_ptr<string> workflowInstanceType_ {};
      // The name of the workflow to which the instance belongs.
      shared_ptr<string> workflowName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskInstance_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInstance Field Functions 
    bool hasTaskInstance() const { return this->taskInstance_ != nullptr;};
    void deleteTaskInstance() { this->taskInstance_ = nullptr;};
    inline const GetTaskInstanceResponseBody::TaskInstance & getTaskInstance() const { DARABONBA_PTR_GET_CONST(taskInstance_, GetTaskInstanceResponseBody::TaskInstance) };
    inline GetTaskInstanceResponseBody::TaskInstance getTaskInstance() { DARABONBA_PTR_GET(taskInstance_, GetTaskInstanceResponseBody::TaskInstance) };
    inline GetTaskInstanceResponseBody& setTaskInstance(const GetTaskInstanceResponseBody::TaskInstance & taskInstance) { DARABONBA_PTR_SET_VALUE(taskInstance_, taskInstance) };
    inline GetTaskInstanceResponseBody& setTaskInstance(GetTaskInstanceResponseBody::TaskInstance && taskInstance) { DARABONBA_PTR_SET_RVALUE(taskInstance_, taskInstance) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the task instance.
    shared_ptr<GetTaskInstanceResponseBody::TaskInstance> taskInstance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
