// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stack, stack_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stack, stack_);
    };
    GetStackResponseBody() = default ;
    GetStackResponseBody(const GetStackResponseBody &) = default ;
    GetStackResponseBody(GetStackResponseBody &&) = default ;
    GetStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBody() = default ;
    GetStackResponseBody& operator=(const GetStackResponseBody &) = default ;
    GetStackResponseBody& operator=(GetStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Stack : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stack& obj) { 
        DARABONBA_PTR_TO_JSON(config, config_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(currentConfigVersion, currentConfigVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_TO_JSON(stackId, stackId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_TO_JSON(workingDirectory, workingDirectory_);
      };
      friend void from_json(const Darabonba::Json& j, Stack& obj) { 
        DARABONBA_PTR_FROM_JSON(config, config_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(currentConfigVersion, currentConfigVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
        DARABONBA_PTR_FROM_JSON(stackId, stackId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_FROM_JSON(workingDirectory, workingDirectory_);
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
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(componentContent, componentContent_);
          DARABONBA_PTR_TO_JSON(deploymentContent, deploymentContent_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(componentContent, componentContent_);
          DARABONBA_PTR_FROM_JSON(deploymentContent, deploymentContent_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentContent_ == nullptr
        && this->deploymentContent_ == nullptr; };
        // componentContent Field Functions 
        bool hasComponentContent() const { return this->componentContent_ != nullptr;};
        void deleteComponentContent() { this->componentContent_ = nullptr;};
        inline string getComponentContent() const { DARABONBA_PTR_GET_DEFAULT(componentContent_, "") };
        inline Config& setComponentContent(string componentContent) { DARABONBA_PTR_SET_VALUE(componentContent_, componentContent) };


        // deploymentContent Field Functions 
        bool hasDeploymentContent() const { return this->deploymentContent_ != nullptr;};
        void deleteDeploymentContent() { this->deploymentContent_ = nullptr;};
        inline string getDeploymentContent() const { DARABONBA_PTR_GET_DEFAULT(deploymentContent_, "") };
        inline Config& setDeploymentContent(string deploymentContent) { DARABONBA_PTR_SET_VALUE(deploymentContent_, deploymentContent) };


      protected:
        shared_ptr<string> componentContent_ {};
        shared_ptr<string> deploymentContent_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->currentConfigVersion_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->ramRole_ == nullptr
        && this->source_ == nullptr && this->sourcePath_ == nullptr && this->stackId_ == nullptr && this->status_ == nullptr && this->triggerStrategy_ == nullptr
        && this->workingDirectory_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Stack::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Stack::Config) };
      inline Stack::Config getConfig() { DARABONBA_PTR_GET(config_, Stack::Config) };
      inline Stack& setConfig(const Stack::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Stack& setConfig(Stack::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Stack& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentConfigVersion Field Functions 
      bool hasCurrentConfigVersion() const { return this->currentConfigVersion_ != nullptr;};
      void deleteCurrentConfigVersion() { this->currentConfigVersion_ = nullptr;};
      inline string getCurrentConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(currentConfigVersion_, "") };
      inline Stack& setCurrentConfigVersion(string currentConfigVersion) { DARABONBA_PTR_SET_VALUE(currentConfigVersion_, currentConfigVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Stack& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Stack& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Stack& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Stack& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourcePath Field Functions 
      bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
      void deleteSourcePath() { this->sourcePath_ = nullptr;};
      inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
      inline Stack& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline Stack& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Stack& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerStrategy Field Functions 
      bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
      void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
      inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
      inline Stack& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


      // workingDirectory Field Functions 
      bool hasWorkingDirectory() const { return this->workingDirectory_ != nullptr;};
      void deleteWorkingDirectory() { this->workingDirectory_ = nullptr;};
      inline string getWorkingDirectory() const { DARABONBA_PTR_GET_DEFAULT(workingDirectory_, "") };
      inline Stack& setWorkingDirectory(string workingDirectory) { DARABONBA_PTR_SET_VALUE(workingDirectory_, workingDirectory) };


    protected:
      shared_ptr<Stack::Config> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> currentConfigVersion_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> sourcePath_ {};
      shared_ptr<string> stackId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> triggerStrategy_ {};
      shared_ptr<string> workingDirectory_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stack_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline const GetStackResponseBody::Stack & getStack() const { DARABONBA_PTR_GET_CONST(stack_, GetStackResponseBody::Stack) };
    inline GetStackResponseBody::Stack getStack() { DARABONBA_PTR_GET(stack_, GetStackResponseBody::Stack) };
    inline GetStackResponseBody& setStack(const GetStackResponseBody::Stack & stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };
    inline GetStackResponseBody& setStack(GetStackResponseBody::Stack && stack) { DARABONBA_PTR_SET_RVALUE(stack_, stack) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetStackResponseBody::Stack> stack_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
