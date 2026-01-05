// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUEST_HPP_
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
  class ExecuteAdhocWorkflowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ExecuteAdhocWorkflowInstanceRequest() = default ;
    ExecuteAdhocWorkflowInstanceRequest(const ExecuteAdhocWorkflowInstanceRequest &) = default ;
    ExecuteAdhocWorkflowInstanceRequest(ExecuteAdhocWorkflowInstanceRequest &&) = default ;
    ExecuteAdhocWorkflowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequest() = default ;
    ExecuteAdhocWorkflowInstanceRequest& operator=(const ExecuteAdhocWorkflowInstanceRequest &) = default ;
    ExecuteAdhocWorkflowInstanceRequest& operator=(ExecuteAdhocWorkflowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The default number of compute units (CUs) configured for task running.
        shared_ptr<string> cu_ {};
        // The ID of the image configured for task running.
        shared_ptr<string> image_ {};
        // The ID of the resource group for scheduling configured for task running.
        // 
        // This parameter is required.
        shared_ptr<string> resourceGroupId_ {};
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
          // *   System
          // *   Constant
          // *   NodeOutput
          // *   PassThrough
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
          // The identifier of the output.
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
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Variables& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Variables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Variables& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the variable.
          shared_ptr<string> name_ {};
          // The value of the variable. You must configure this parameter in the `The ancestor output: The output variable name of the ancestor task` format.
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

      class Dependencies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dependencies& obj) { 
          DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
        };
        friend void from_json(const Darabonba::Json& j, Dependencies& obj) { 
          DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
        };
        Dependencies() = default ;
        Dependencies(const Dependencies &) = default ;
        Dependencies(Dependencies &&) = default ;
        Dependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dependencies() = default ;
        Dependencies& operator=(const Dependencies &) = default ;
        Dependencies& operator=(Dependencies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->upstreamOutput_ == nullptr; };
        // upstreamOutput Field Functions 
        bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
        void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
        inline string getUpstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
        inline Dependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


      protected:
        // The identifier of the output of the ancestor task.
        shared_ptr<string> upstreamOutput_ {};
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

      virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->dataSource_ == nullptr && this->dependencies_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr
        && this->owner_ == nullptr && this->runtimeResource_ == nullptr && this->script_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr; };
      // clientUniqueCode Field Functions 
      bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
      void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
      inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
      inline Tasks& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline const Tasks::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Tasks::DataSource) };
      inline Tasks::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Tasks::DataSource) };
      inline Tasks& setDataSource(const Tasks::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
      inline Tasks& setDataSource(Tasks::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


      // dependencies Field Functions 
      bool hasDependencies() const { return this->dependencies_ != nullptr;};
      void deleteDependencies() { this->dependencies_ = nullptr;};
      inline const vector<Tasks::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Tasks::Dependencies>) };
      inline vector<Tasks::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<Tasks::Dependencies>) };
      inline Tasks& setDependencies(const vector<Tasks::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
      inline Tasks& setDependencies(vector<Tasks::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


      // inputs Field Functions 
      bool hasInputs() const { return this->inputs_ != nullptr;};
      void deleteInputs() { this->inputs_ = nullptr;};
      inline const Tasks::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, Tasks::Inputs) };
      inline Tasks::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, Tasks::Inputs) };
      inline Tasks& setInputs(const Tasks::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
      inline Tasks& setInputs(Tasks::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const Tasks::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, Tasks::Outputs) };
      inline Tasks::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, Tasks::Outputs) };
      inline Tasks& setOutputs(const Tasks::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline Tasks& setOutputs(Tasks::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Tasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline const Tasks::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Tasks::RuntimeResource) };
      inline Tasks::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Tasks::RuntimeResource) };
      inline Tasks& setRuntimeResource(const Tasks::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
      inline Tasks& setRuntimeResource(Tasks::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline const Tasks::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Tasks::Script) };
      inline Tasks::Script getScript() { DARABONBA_PTR_GET(script_, Tasks::Script) };
      inline Tasks& setScript(const Tasks::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
      inline Tasks& setScript(Tasks::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline Tasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Tasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The unique code of the client. This code uniquely identifies a task.
      // 
      // This parameter is required.
      shared_ptr<string> clientUniqueCode_ {};
      // The information about the associated data source.
      shared_ptr<Tasks::DataSource> dataSource_ {};
      // The dependency information.
      shared_ptr<vector<Tasks::Dependencies>> dependencies_ {};
      // The input information.
      shared_ptr<Tasks::Inputs> inputs_ {};
      // The name of the task.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The output information.
      shared_ptr<Tasks::Outputs> outputs_ {};
      // The account ID of the owner.
      // 
      // This parameter is required.
      shared_ptr<string> owner_ {};
      // The configurations of the runtime environment, such as the resource group information.
      // 
      // This parameter is required.
      shared_ptr<Tasks::RuntimeResource> runtimeResource_ {};
      // The script information.
      shared_ptr<Tasks::Script> script_ {};
      // The timeout period of task running. Unit: seconds.
      shared_ptr<int32_t> timeout_ {};
      // The type of the task.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->envType_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->tasks_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline ExecuteAdhocWorkflowInstanceRequest& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecuteAdhocWorkflowInstanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ExecuteAdhocWorkflowInstanceRequest::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ExecuteAdhocWorkflowInstanceRequest::Tasks>) };
    inline vector<ExecuteAdhocWorkflowInstanceRequest::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ExecuteAdhocWorkflowInstanceRequest::Tasks>) };
    inline ExecuteAdhocWorkflowInstanceRequest& setTasks(const vector<ExecuteAdhocWorkflowInstanceRequest::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ExecuteAdhocWorkflowInstanceRequest& setTasks(vector<ExecuteAdhocWorkflowInstanceRequest::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The data timestamp.
    shared_ptr<int64_t> bizDate_ {};
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    shared_ptr<string> envType_ {};
    // The name of the workflow instance.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The account ID of the owner.
    // 
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The tasks.
    // 
    // This parameter is required.
    shared_ptr<vector<ExecuteAdhocWorkflowInstanceRequest::Tasks>> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
