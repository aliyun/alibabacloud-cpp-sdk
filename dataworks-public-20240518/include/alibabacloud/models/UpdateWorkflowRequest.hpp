// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUEST_HPP_
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
  class UpdateWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateWorkflowRequest() = default ;
    UpdateWorkflowRequest(const UpdateWorkflowRequest &) = default ;
    UpdateWorkflowRequest(UpdateWorkflowRequest &&) = default ;
    UpdateWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequest() = default ;
    UpdateWorkflowRequest& operator=(const UpdateWorkflowRequest &) = default ;
    UpdateWorkflowRequest& operator=(UpdateWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trigger : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
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
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Trigger& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Trigger& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


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
      // The CRON expression. This parameter takes effect only if the Type parameter is set to Scheduler.
      shared_ptr<string> cron_ {};
      // The end time of the time range during which the workflow is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler. The value of this parameter is in the `yyyy-mm-dd hh:mm:ss` format.
      shared_ptr<string> endTime_ {};
      // The start time of the time range during which the workflow is periodically scheduled. This parameter takes effect only if the Type parameter is set to Scheduler. The value of this parameter is in the `yyyy-mm-dd hh:mm:ss` format.
      shared_ptr<string> startTime_ {};
      // The trigger type. Valid values:
      // 
      // *   Scheduler: scheduling cycle-based trigger
      // *   Manual: manual trigger
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(BaseLineId, baseLineId_);
        DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Inputs, inputs_);
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
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseLineId, baseLineId_);
        DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
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
      class Trigger : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
          DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
          DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
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
        virtual bool empty() const override { return this->recurrence_ == nullptr
        && this->type_ == nullptr; };
        // recurrence Field Functions 
        bool hasRecurrence() const { return this->recurrence_ != nullptr;};
        void deleteRecurrence() { this->recurrence_ = nullptr;};
        inline string getRecurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
        inline Trigger& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The running mode of the task after it is triggered. This parameter takes effect only if the Type parameter is set to Scheduler. Valid values:
        // 
        // *   Pause
        // *   Skip
        // *   Normal
        // 
        // This parameter is required.
        shared_ptr<string> recurrence_ {};
        // The trigger type. Valid values:
        // 
        // *   Scheduler: scheduling cycle-based trigger
        // *   Manual: manual trigger
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
          // *   Constant: constant
          // *   PassThrough: node output
          // *   System: variable
          // *   NodeOutput: script output
          // 
          // This parameter is required.
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
          // 
          // This parameter is required.
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
        // 
        // *   CrossCycleDependsOnChildren: cross-cycle dependency on level-1 descendant nodes
        // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
        // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
        // *   Normal: same-cycle scheduling dependency
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
        shared_ptr<string> upstreamOutput_ {};
        // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
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
        // The name of the data source.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->baseLineId_ == nullptr
        && this->clientUniqueCode_ == nullptr && this->dataSource_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr
        && this->id_ == nullptr && this->inputs_ == nullptr && this->name_ == nullptr && this->outputs_ == nullptr && this->owner_ == nullptr
        && this->rerunInterval_ == nullptr && this->rerunMode_ == nullptr && this->rerunTimes_ == nullptr && this->runtimeResource_ == nullptr && this->script_ == nullptr
        && this->tags_ == nullptr && this->timeout_ == nullptr && this->trigger_ == nullptr && this->type_ == nullptr; };
      // baseLineId Field Functions 
      bool hasBaseLineId() const { return this->baseLineId_ != nullptr;};
      void deleteBaseLineId() { this->baseLineId_ = nullptr;};
      inline int64_t getBaseLineId() const { DARABONBA_PTR_GET_DEFAULT(baseLineId_, 0L) };
      inline Tasks& setBaseLineId(int64_t baseLineId) { DARABONBA_PTR_SET_VALUE(baseLineId_, baseLineId) };


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


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Tasks& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Tasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // rerunInterval Field Functions 
      bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
      void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
      inline int32_t getRerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
      inline Tasks& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


      // rerunMode Field Functions 
      bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
      void deleteRerunMode() { this->rerunMode_ = nullptr;};
      inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
      inline Tasks& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


      // rerunTimes Field Functions 
      bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
      void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
      inline int32_t getRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
      inline Tasks& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


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


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tasks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tasks::Tags>) };
      inline vector<Tasks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Tasks::Tags>) };
      inline Tasks& setTags(const vector<Tasks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Tasks& setTags(vector<Tasks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline Tasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const Tasks::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Tasks::Trigger) };
      inline Tasks::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Tasks::Trigger) };
      inline Tasks& setTrigger(const Tasks::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline Tasks& setTrigger(Tasks::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Tasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The baseline ID.
      shared_ptr<int64_t> baseLineId_ {};
      // The unique code of the client. This parameter is used to create a task asynchronously and implement the idempotence of the task. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
      shared_ptr<string> clientUniqueCode_ {};
      // The information about the associated data source.
      shared_ptr<Tasks::DataSource> dataSource_ {};
      // The dependency information.
      shared_ptr<vector<Tasks::Dependencies>> dependencies_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The environment of the workspace. Valid values:
      // 
      // *   Prod
      // *   Dev
      shared_ptr<string> envType_ {};
      // The task ID. If you configure this parameter, full update is performed on the task. If you do not configure this parameter, another task is created.
      shared_ptr<int64_t> id_ {};
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
      // The rerun interval. Unit: seconds.
      shared_ptr<int32_t> rerunInterval_ {};
      // The rerun mode. Valid values:
      // 
      // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
      // *   FailureAllowed: The task can be rerun only after it fails to run.
      // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
      // 
      // This parameter is required.
      shared_ptr<string> rerunMode_ {};
      // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
      shared_ptr<int32_t> rerunTimes_ {};
      // The configurations of the runtime environment, such as the resource group information.
      // 
      // This parameter is required.
      shared_ptr<Tasks::RuntimeResource> runtimeResource_ {};
      // The script information.
      shared_ptr<Tasks::Script> script_ {};
      // The tags.
      shared_ptr<vector<Tasks::Tags>> tags_ {};
      // The timeout period of task running. Unit: seconds.
      shared_ptr<int32_t> timeout_ {};
      // The trigger method.
      // 
      // This parameter is required.
      shared_ptr<Tasks::Trigger> trigger_ {};
      // The type of the task.
      // 
      // This parameter is required.
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

    class Outputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
        DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      };
      friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
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

      virtual bool empty() const override { return this->taskOutputs_ == nullptr; };
      // taskOutputs Field Functions 
      bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
      void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
      inline const vector<Outputs::TaskOutputs> & getTaskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Outputs::TaskOutputs>) };
      inline vector<Outputs::TaskOutputs> getTaskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Outputs::TaskOutputs>) };
      inline Outputs& setTaskOutputs(const vector<Outputs::TaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
      inline Outputs& setTaskOutputs(vector<Outputs::TaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    protected:
      // The task outputs.
      shared_ptr<vector<Outputs::TaskOutputs>> taskOutputs_ {};
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
      // 
      // *   CrossCycleDependsOnChildren: cross-cycle dependency on level-1 descendant nodes
      // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
      // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
      // *   Normal: same-cycle scheduling dependency
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
      shared_ptr<string> upstreamOutput_ {};
      // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
      shared_ptr<int64_t> upstreamTaskId_ {};
    };

    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->dependencies_ == nullptr && this->description_ == nullptr && this->envType_ == nullptr && this->id_ == nullptr && this->instanceMode_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr && this->owner_ == nullptr && this->parameters_ == nullptr && this->tags_ == nullptr
        && this->tasks_ == nullptr && this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateWorkflowRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<UpdateWorkflowRequest::Dependencies> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<UpdateWorkflowRequest::Dependencies>) };
    inline vector<UpdateWorkflowRequest::Dependencies> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<UpdateWorkflowRequest::Dependencies>) };
    inline UpdateWorkflowRequest& setDependencies(const vector<UpdateWorkflowRequest::Dependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline UpdateWorkflowRequest& setDependencies(vector<UpdateWorkflowRequest::Dependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateWorkflowRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateWorkflowRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string getInstanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline UpdateWorkflowRequest& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const UpdateWorkflowRequest::Outputs & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, UpdateWorkflowRequest::Outputs) };
    inline UpdateWorkflowRequest::Outputs getOutputs() { DARABONBA_PTR_GET(outputs_, UpdateWorkflowRequest::Outputs) };
    inline UpdateWorkflowRequest& setOutputs(const UpdateWorkflowRequest::Outputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateWorkflowRequest& setOutputs(UpdateWorkflowRequest::Outputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateWorkflowRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateWorkflowRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateWorkflowRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateWorkflowRequest::Tags>) };
    inline vector<UpdateWorkflowRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateWorkflowRequest::Tags>) };
    inline UpdateWorkflowRequest& setTags(const vector<UpdateWorkflowRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateWorkflowRequest& setTags(vector<UpdateWorkflowRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<UpdateWorkflowRequest::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<UpdateWorkflowRequest::Tasks>) };
    inline vector<UpdateWorkflowRequest::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<UpdateWorkflowRequest::Tasks>) };
    inline UpdateWorkflowRequest& setTasks(const vector<UpdateWorkflowRequest::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline UpdateWorkflowRequest& setTasks(vector<UpdateWorkflowRequest::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateWorkflowRequest::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateWorkflowRequest::Trigger) };
    inline UpdateWorkflowRequest::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, UpdateWorkflowRequest::Trigger) };
    inline UpdateWorkflowRequest& setTrigger(const UpdateWorkflowRequest::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateWorkflowRequest& setTrigger(UpdateWorkflowRequest::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The unique code of the client. This parameter is used to create a workflow asynchronously and implement the idempotence of the workflow. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
    shared_ptr<string> clientUniqueCode_ {};
    // The dependency information.
    shared_ptr<vector<UpdateWorkflowRequest::Dependencies>> dependencies_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    shared_ptr<string> envType_ {};
    // The workflow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> instanceMode_ {};
    // The name of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The output information.
    shared_ptr<UpdateWorkflowRequest::Outputs> outputs_ {};
    // The account ID of the owner.
    // 
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // The parameters.
    shared_ptr<string> parameters_ {};
    // The tags.
    shared_ptr<vector<UpdateWorkflowRequest::Tags>> tags_ {};
    // The tasks.
    shared_ptr<vector<UpdateWorkflowRequest::Tasks>> tasks_ {};
    // The trigger method.
    // 
    // This parameter is required.
    shared_ptr<UpdateWorkflowRequest::Trigger> trigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
