// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
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
  class UpdateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateTaskRequest() = default ;
    UpdateTaskRequest(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest(UpdateTaskRequest &&) = default ;
    UpdateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequest() = default ;
    UpdateTaskRequest& operator=(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest& operator=(UpdateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trigger : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Trigger() = default ;
      Trigger(const Trigger &) = default ;
      Trigger(Trigger &&) = default ;
      Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Trigger() = default ;
      Trigger& operator=(const Trigger &) = default ;
      Trigger& operator=(Trigger &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->cycleType_ == nullptr && this->endTime_ == nullptr && this->recurrence_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Trigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // cycleType Field Functions 
      bool hasCycleType() const { return this->cycleType_ != nullptr;};
      void deleteCycleType() { this->cycleType_ = nullptr;};
      inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
      inline Trigger& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Trigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // recurrence Field Functions 
      bool hasRecurrence() const { return this->recurrence_ != nullptr;};
      void deleteRecurrence() { this->recurrence_ = nullptr;};
      inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
      inline Trigger& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Trigger& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The cron expression. This parameter takes effect when Type is set to Scheduler.
      shared_ptr<string> cron_ {};
      // The epoch type. This parameter takes effect when Type is set to Scheduler and the cron expression specifies timed scheduling at a specific hour. Default value: Daily. Valid values:
      // - Daily: daily scheduling.
      // - NotDaily: hourly scheduling.
      shared_ptr<string> cycleType_ {};
      // The expiration time of the periodic trigger. This parameter takes effect when Type is set to Scheduler. Format: `yyyy-mm-dd hh:mm:ss`.
      shared_ptr<string> endTime_ {};
      // The run mode when triggered. This parameter takes effect when Type is set to Scheduler. Valid values:
      // - Pause: paused.
      // - Skip: dry run.
      // - Normal: normal run.
      shared_ptr<string> recurrence_ {};
      // The effective period of the epoch trigger. This parameter takes effect when Type is set to Scheduler. Format: `yyyy-mm-dd hh:mm:ss`.
      shared_ptr<string> startTime_ {};
      // The trigger type. Valid values:
      // - Scheduler: periodic scheduling trigger.
      // - Manual: manual trigger.
      shared_ptr<string> type_ {};
    };

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
      // 
      // This parameter is required.
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
      // The list of script parameters.
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
      // The CU consumption configured for the node.
      shared_ptr<string> cu_ {};
      // The image ID configured for the node.
      shared_ptr<string> image_ {};
      // The identifier of the schedule resource group configured for the node.
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
        // The variable name.
        shared_ptr<string> name_ {};
        // The type. Valid values:
        // - Constant: constant.
        // - PassThrough: parameter node output.
        // - System: variable.
        // - NodeOutput: script output.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The variable value.
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
      // The list of node output definitions.
      shared_ptr<vector<Outputs::TaskOutputs>> taskOutputs_ {};
      // The list of variable definitions.
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
        // The variable name.
        shared_ptr<string> name_ {};
        // The type. Valid values:
        // - Constant: constant.
        // - PassThrough: parameter node output.
        // - System: variable.
        // - NodeOutput: script output.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The variable value.
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
      // The list of variable definitions.
      shared_ptr<vector<Inputs::Variables>> variables_ {};
    };

    class Dependencies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dependencies& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
        DARABONBA_PTR_TO_JSON(UpstreamTaskId, upstreamTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Dependencies& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
        DARABONBA_PTR_FROM_JSON(UpstreamTaskId, upstreamTaskId_);
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
      virtual bool empty() const override { return this->type_ == nullptr
        && this->upstreamOutput_ == nullptr && this->upstreamTaskId_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Dependencies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // upstreamOutput Field Functions 
      bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
      void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
      inline string getUpstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
      inline Dependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


      // upstreamTaskId Field Functions 
      bool hasUpstreamTaskId() const { return this->upstreamTaskId_ != nullptr;};
      void deleteUpstreamTaskId() { this->upstreamTaskId_ = nullptr;};
      inline int64_t getUpstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, 0L) };
      inline Dependencies& setUpstreamTaskId(int64_t upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


    protected:
      // The dependency type. Valid values:
      // - CrossCycleDependsOnChildren: cross-cycle dependency on first-level child nodes.
      // - CrossCycleDependsOnSelf: cross-cycle dependency on self.
      // - CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes.
      // - Normal: same-cycle dependency.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The output identifier of the upstream node. This field is returned when the dependency type is same-cycle dependency and input content is configured.
      shared_ptr<string> upstreamOutput_ {};
      // The ID of the upstream node. This field is returned when the dependency type is cross-cycle dependency on other nodes, or same-cycle dependency without input content configured. It is not returned in other cases.
      shared_ptr<int64_t> upstreamTaskId_ {};
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
      // The data source name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->dataSource_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr
        && this->inputs_ == nullptr && this->instanceMode_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr && this->owner_ == nullptr
        && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->script_ == nullptr
        && this->tags_ == nullptr && this->timeout_ == nullptr && this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateTaskRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const UpdateTaskRequest::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, UpdateTaskRequest::DataSource) };
    inline UpdateTaskRequest::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, UpdateTaskRequest::DataSource) };
    inline UpdateTaskRequest& setDataSource(const UpdateTaskRequest::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline UpdateTaskRequest& setDataSource(UpdateTaskRequest::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<UpdateTaskRequest::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<UpdateTaskRequest::Dependencies>) };
    inline vector<UpdateTaskRequest::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<UpdateTaskRequest::Dependencies>) };
    inline UpdateTaskRequest& setDependencies(const vector<UpdateTaskRequest::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline UpdateTaskRequest& setDependencies(vector<UpdateTaskRequest::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateTaskRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateTaskRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const UpdateTaskRequest::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, UpdateTaskRequest::Inputs) };
    inline UpdateTaskRequest::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, UpdateTaskRequest::Inputs) };
    inline UpdateTaskRequest& setInputs(const UpdateTaskRequest::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline UpdateTaskRequest& setInputs(UpdateTaskRequest::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline UpdateTaskRequest& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const UpdateTaskRequest::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, UpdateTaskRequest::Outputs) };
    inline UpdateTaskRequest::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, UpdateTaskRequest::Outputs) };
    inline UpdateTaskRequest& setOutputs(const UpdateTaskRequest::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateTaskRequest& setOutputs(UpdateTaskRequest::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateTaskRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline UpdateTaskRequest& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline UpdateTaskRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline UpdateTaskRequest& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const UpdateTaskRequest::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, UpdateTaskRequest::RuntimeResource) };
    inline UpdateTaskRequest::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, UpdateTaskRequest::RuntimeResource) };
    inline UpdateTaskRequest& setRuntimeResource(const UpdateTaskRequest::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline UpdateTaskRequest& setRuntimeResource(UpdateTaskRequest::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const UpdateTaskRequest::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, UpdateTaskRequest::Script) };
    inline UpdateTaskRequest::Script getScript() { DARABONBA_PTR_GET(script_, UpdateTaskRequest::Script) };
    inline UpdateTaskRequest& setScript(const UpdateTaskRequest::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline UpdateTaskRequest& setScript(UpdateTaskRequest::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateTaskRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateTaskRequest::Tags>) };
    inline vector<UpdateTaskRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateTaskRequest::Tags>) };
    inline UpdateTaskRequest& setTags(const vector<UpdateTaskRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateTaskRequest& setTags(vector<UpdateTaskRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateTaskRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateTaskRequest::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateTaskRequest::Trigger) };
    inline UpdateTaskRequest::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, UpdateTaskRequest::Trigger) };
    inline UpdateTaskRequest& setTrigger(const UpdateTaskRequest::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateTaskRequest& setTrigger(UpdateTaskRequest::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The client unique code of the node, used to uniquely identify a node. This code is used to implement asynchronous operations and idempotence. If not specified during creation, the system automatically generates one, and the code is uniquely bound to the resource ID. When updating or deleting a resource, if this parameter is specified, it must be consistent with the client unique code used during creation.
    shared_ptr<string> clientUniqueCode_ {};
    // The associated data source information.
    shared_ptr<UpdateTaskRequest::DataSource> dataSource_ {};
    // The dependency information.
    shared_ptr<vector<UpdateTaskRequest::Dependencies>> dependencies_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The project environment. Valid values:
    // - Prod: production.
    // - Dev: development.
    shared_ptr<string> envType_ {};
    // The node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The input information.
    shared_ptr<UpdateTaskRequest::Inputs> inputs_ {};
    // The instance generation mode. Valid values:
    // - T+1: The instance is generated the next day.
    // - Immediately: The instance is generated immediately. Note: Only periodic instances whose scheduled time is at least ten minutes after the node publish time are generated normally. During the full instance generation period (22:00 to 24:00), real-time instance generation is not available. You can submit and publish nodes, but new nodes do not automatically generate instances.
    shared_ptr<string> instanceMode_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The output information.
    shared_ptr<UpdateTaskRequest::Outputs> outputs_ {};
    // The account ID of the node owner.
    shared_ptr<string> owner_ {};
    // The retry time interval, in milliseconds. The value cannot exceed 1800000.
    shared_ptr<int32_t> rerunInterval_ {};
    // Specifies whether the node can be rerun. Valid values:
    // - AllDenied: The node cannot be rerun regardless of whether it succeeds or fails.
    // - FailureAllowed: The node can be rerun only when it fails.
    // - AllAllowed: The node can be rerun regardless of whether it succeeds or fails.
    shared_ptr<string> rerunMode_ {};
    // The number of retries. This parameter takes effect when the node is configured to allow reruns.
    shared_ptr<int32_t> rerunTimes_ {};
    // The environment configuration, such as resource group information.
    shared_ptr<UpdateTaskRequest::RuntimeResource> runtimeResource_ {};
    // The script information.
    shared_ptr<UpdateTaskRequest::Script> script_ {};
    // The list of node tags.
    shared_ptr<vector<UpdateTaskRequest::Tags>> tags_ {};
    // The node execution timeout period, in seconds. The value must be greater than 3600.
    shared_ptr<int32_t> timeout_ {};
    // The node trigger method.
    shared_ptr<UpdateTaskRequest::Trigger> trigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
