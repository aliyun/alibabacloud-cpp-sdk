// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class PreviewStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stack, stack_);
    };
    PreviewStackResponseBody() = default ;
    PreviewStackResponseBody(const PreviewStackResponseBody &) = default ;
    PreviewStackResponseBody(PreviewStackResponseBody &&) = default ;
    PreviewStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewStackResponseBody() = default ;
    PreviewStackResponseBody& operator=(const PreviewStackResponseBody &) = default ;
    PreviewStackResponseBody& operator=(PreviewStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Stack : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stack& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisableRollback, disableRollback_);
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(StackName, stackName_);
        DARABONBA_ANY_TO_JSON(StackPolicyBody, stackPolicyBody_);
        DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
      };
      friend void from_json(const Darabonba::Json& j, Stack& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisableRollback, disableRollback_);
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(StackName, stackName_);
        DARABONBA_ANY_FROM_JSON(StackPolicyBody, stackPolicyBody_);
        DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
        DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
      };
      Stack() = default ;
      Stack(const Stack &) = default ;
      Stack(Stack &&) = default ;
      Stack(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stack() = default ;
      Stack& operator=(const Stack &) = default ;
      Stack& operator=(Stack &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(AcsResourceType, acsResourceType_);
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
          DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
          DARABONBA_ANY_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(Replacement, replacement_);
          DARABONBA_PTR_TO_JSON(RequiredBy, requiredBy_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_ANY_TO_JSON(Stack, stack_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(AcsResourceType, acsResourceType_);
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
          DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
          DARABONBA_ANY_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(Replacement, replacement_);
          DARABONBA_PTR_FROM_JSON(RequiredBy, requiredBy_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_ANY_FROM_JSON(Stack, stack_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acsResourceType_ == nullptr
        && this->action_ == nullptr && this->description_ == nullptr && this->logicalResourceId_ == nullptr && this->physicalResourceId_ == nullptr && this->properties_ == nullptr
        && this->replacement_ == nullptr && this->requiredBy_ == nullptr && this->resourceType_ == nullptr && this->stack_ == nullptr; };
        // acsResourceType Field Functions 
        bool hasAcsResourceType() const { return this->acsResourceType_ != nullptr;};
        void deleteAcsResourceType() { this->acsResourceType_ = nullptr;};
        inline string getAcsResourceType() const { DARABONBA_PTR_GET_DEFAULT(acsResourceType_, "") };
        inline Resources& setAcsResourceType(string acsResourceType) { DARABONBA_PTR_SET_VALUE(acsResourceType_, acsResourceType) };


        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Resources& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Resources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // logicalResourceId Field Functions 
        bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
        void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
        inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
        inline Resources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


        // physicalResourceId Field Functions 
        bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
        void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
        inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
        inline Resources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline         const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
        Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
        inline Resources& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
        inline Resources& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


        // replacement Field Functions 
        bool hasReplacement() const { return this->replacement_ != nullptr;};
        void deleteReplacement() { this->replacement_ = nullptr;};
        inline string getReplacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
        inline Resources& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


        // requiredBy Field Functions 
        bool hasRequiredBy() const { return this->requiredBy_ != nullptr;};
        void deleteRequiredBy() { this->requiredBy_ = nullptr;};
        inline const vector<string> & getRequiredBy() const { DARABONBA_PTR_GET_CONST(requiredBy_, vector<string>) };
        inline vector<string> getRequiredBy() { DARABONBA_PTR_GET(requiredBy_, vector<string>) };
        inline Resources& setRequiredBy(const vector<string> & requiredBy) { DARABONBA_PTR_SET_VALUE(requiredBy_, requiredBy) };
        inline Resources& setRequiredBy(vector<string> && requiredBy) { DARABONBA_PTR_SET_RVALUE(requiredBy_, requiredBy) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // stack Field Functions 
        bool hasStack() const { return this->stack_ != nullptr;};
        void deleteStack() { this->stack_ = nullptr;};
        inline         const Darabonba::Json & getStack() const { DARABONBA_GET(stack_) };
        Darabonba::Json & getStack() { DARABONBA_GET(stack_) };
        inline Resources& setStack(const Darabonba::Json & stack) { DARABONBA_SET_VALUE(stack_, stack) };
        inline Resources& setStack(Darabonba::Json && stack) { DARABONBA_SET_RVALUE(stack_, stack) };


      protected:
        // The resource type of an Alibaba Cloud service.
        shared_ptr<string> acsResourceType_ {};
        // The action that is performed on the resource. Valid values:
        // 
        // *   Add
        // *   Modify
        // *   Remove
        // *   None
        shared_ptr<string> action_ {};
        // The description of the resource.
        shared_ptr<string> description_ {};
        // The logical ID of the resource.
        shared_ptr<string> logicalResourceId_ {};
        // The physical ID of the resource.
        // 
        // This parameter is returned only if Action is set to Modify or Remove.
        shared_ptr<string> physicalResourceId_ {};
        // The resource properties.
        Darabonba::Json properties_ {};
        // Indicates whether a replacement update is performed on the template. Valid values:
        // 
        // *   True: A replacement update is performed on the template.
        // *   False: A change is made on the template.
        // *   Conditional: A replacement update may be performed on the template. You can check whether a replacement update is performed when the template is in use.
        // 
        // > This parameter is returned only if Action is set to Modify.
        shared_ptr<string> replacement_ {};
        // The resources on which the stack depends.
        shared_ptr<vector<string>> requiredBy_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The information about the nested stack. The data structure of the value is the same as the data structure of the entire response.
        Darabonba::Json stack_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterKey Field Functions 
        bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
        void deleteParameterKey() { this->parameterKey_ = nullptr;};
        inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
        inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The name of the parameter.
        shared_ptr<string> parameterKey_ {};
        // The value of the parameter.
        shared_ptr<string> parameterValue_ {};
      };

      class Log : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Log& obj) { 
          DARABONBA_PTR_TO_JSON(TerraformLogs, terraformLogs_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(TerraformLogs, terraformLogs_);
        };
        Log() = default ;
        Log(const Log &) = default ;
        Log(Log &&) = default ;
        Log(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Log() = default ;
        Log& operator=(const Log &) = default ;
        Log& operator=(Log &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TerraformLogs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TerraformLogs& obj) { 
            DARABONBA_PTR_TO_JSON(Command, command_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Stream, stream_);
          };
          friend void from_json(const Darabonba::Json& j, TerraformLogs& obj) { 
            DARABONBA_PTR_FROM_JSON(Command, command_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Stream, stream_);
          };
          TerraformLogs() = default ;
          TerraformLogs(const TerraformLogs &) = default ;
          TerraformLogs(TerraformLogs &&) = default ;
          TerraformLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TerraformLogs() = default ;
          TerraformLogs& operator=(const TerraformLogs &) = default ;
          TerraformLogs& operator=(TerraformLogs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->command_ == nullptr
        && this->content_ == nullptr && this->stream_ == nullptr; };
          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
          inline TerraformLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline TerraformLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // stream Field Functions 
          bool hasStream() const { return this->stream_ != nullptr;};
          void deleteStream() { this->stream_ = nullptr;};
          inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
          inline TerraformLogs& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        protected:
          // The name of the Terraform command that is run. Valid values:
          // 
          // *   apply
          // *   plan
          // *   destroy
          // *   version
          // 
          // For more information about Terraform commands, see [Basic CLI Features](https://www.terraform.io/cli/commands).
          shared_ptr<string> command_ {};
          // The content of the output stream that is returned after the command is run.
          shared_ptr<string> content_ {};
          // The output stream. Valid values:
          // 
          // *   stdout: standard output stream
          // *   stderr: standard error stream
          shared_ptr<string> stream_ {};
        };

        virtual bool empty() const override { return this->terraformLogs_ == nullptr; };
        // terraformLogs Field Functions 
        bool hasTerraformLogs() const { return this->terraformLogs_ != nullptr;};
        void deleteTerraformLogs() { this->terraformLogs_ = nullptr;};
        inline const vector<Log::TerraformLogs> & getTerraformLogs() const { DARABONBA_PTR_GET_CONST(terraformLogs_, vector<Log::TerraformLogs>) };
        inline vector<Log::TerraformLogs> getTerraformLogs() { DARABONBA_PTR_GET(terraformLogs_, vector<Log::TerraformLogs>) };
        inline Log& setTerraformLogs(const vector<Log::TerraformLogs> & terraformLogs) { DARABONBA_PTR_SET_VALUE(terraformLogs_, terraformLogs) };
        inline Log& setTerraformLogs(vector<Log::TerraformLogs> && terraformLogs) { DARABONBA_PTR_SET_RVALUE(terraformLogs_, terraformLogs) };


      protected:
        // The Terraform logs. This parameter is returned only if the stack is a Terraform stack.
        // 
        // > This parameter contains the logs of previewing the stack.
        shared_ptr<vector<Log::TerraformLogs>> terraformLogs_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->disableRollback_ == nullptr && this->log_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->resources_ == nullptr
        && this->stackName_ == nullptr && this->stackPolicyBody_ == nullptr && this->templateDescription_ == nullptr && this->timeoutInMinutes_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Stack& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disableRollback Field Functions 
      bool hasDisableRollback() const { return this->disableRollback_ != nullptr;};
      void deleteDisableRollback() { this->disableRollback_ = nullptr;};
      inline bool getDisableRollback() const { DARABONBA_PTR_GET_DEFAULT(disableRollback_, false) };
      inline Stack& setDisableRollback(bool disableRollback) { DARABONBA_PTR_SET_VALUE(disableRollback_, disableRollback) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const Stack::Log & getLog() const { DARABONBA_PTR_GET_CONST(log_, Stack::Log) };
      inline Stack::Log getLog() { DARABONBA_PTR_GET(log_, Stack::Log) };
      inline Stack& setLog(const Stack::Log & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline Stack& setLog(Stack::Log && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<Stack::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Stack::Parameters>) };
      inline vector<Stack::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Stack::Parameters>) };
      inline Stack& setParameters(const vector<Stack::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Stack& setParameters(vector<Stack::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Stack& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<Stack::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Stack::Resources>) };
      inline vector<Stack::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<Stack::Resources>) };
      inline Stack& setResources(const vector<Stack::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline Stack& setResources(vector<Stack::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline Stack& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // stackPolicyBody Field Functions 
      bool hasStackPolicyBody() const { return this->stackPolicyBody_ != nullptr;};
      void deleteStackPolicyBody() { this->stackPolicyBody_ = nullptr;};
      inline       const Darabonba::Json & getStackPolicyBody() const { DARABONBA_GET(stackPolicyBody_) };
      Darabonba::Json & getStackPolicyBody() { DARABONBA_GET(stackPolicyBody_) };
      inline Stack& setStackPolicyBody(const Darabonba::Json & stackPolicyBody) { DARABONBA_SET_VALUE(stackPolicyBody_, stackPolicyBody) };
      inline Stack& setStackPolicyBody(Darabonba::Json && stackPolicyBody) { DARABONBA_SET_RVALUE(stackPolicyBody_, stackPolicyBody) };


      // templateDescription Field Functions 
      bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
      void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
      inline string getTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
      inline Stack& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


      // timeoutInMinutes Field Functions 
      bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
      void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
      inline int32_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
      inline Stack& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


    protected:
      // The description of the stack.
      shared_ptr<string> description_ {};
      // Indicates whether rollback is disabled for the resources when the stack fails to be created.
      shared_ptr<bool> disableRollback_ {};
      // The log that is generated when the stack is run.
      shared_ptr<Stack::Log> log_ {};
      // The parameters of the stack.
      shared_ptr<vector<Stack::Parameters>> parameters_ {};
      // The region where the stack resides.
      shared_ptr<string> regionId_ {};
      // The resources in the stack.
      shared_ptr<vector<Stack::Resources>> resources_ {};
      // The stack name.
      shared_ptr<string> stackName_ {};
      // The structure that contains the stack policy body.
      Darabonba::Json stackPolicyBody_ {};
      // The description of the template.
      shared_ptr<string> templateDescription_ {};
      // The timeout period for creating the stack.
      // 
      // Unit: minutes.
      shared_ptr<int32_t> timeoutInMinutes_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stack_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline const PreviewStackResponseBody::Stack & getStack() const { DARABONBA_PTR_GET_CONST(stack_, PreviewStackResponseBody::Stack) };
    inline PreviewStackResponseBody::Stack getStack() { DARABONBA_PTR_GET(stack_, PreviewStackResponseBody::Stack) };
    inline PreviewStackResponseBody& setStack(const PreviewStackResponseBody::Stack & stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };
    inline PreviewStackResponseBody& setStack(PreviewStackResponseBody::Stack && stack) { DARABONBA_PTR_SET_RVALUE(stack_, stack) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the stack that is previewed.
    shared_ptr<PreviewStackResponseBody::Stack> stack_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
