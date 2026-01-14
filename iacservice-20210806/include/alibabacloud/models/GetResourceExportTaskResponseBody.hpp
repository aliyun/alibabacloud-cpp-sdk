// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    GetResourceExportTaskResponseBody() = default ;
    GetResourceExportTaskResponseBody(const GetResourceExportTaskResponseBody &) = default ;
    GetResourceExportTaskResponseBody(GetResourceExportTaskResponseBody &&) = default ;
    GetResourceExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceExportTaskResponseBody() = default ;
    GetResourceExportTaskResponseBody& operator=(const GetResourceExportTaskResponseBody &) = default ;
    GetResourceExportTaskResponseBody& operator=(GetResourceExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
        DARABONBA_PTR_TO_JSON(exportToModule, exportToModule_);
        DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
        DARABONBA_PTR_TO_JSON(failedReason, failedReason_);
        DARABONBA_PTR_TO_JSON(includeRules, includeRules_);
        DARABONBA_PTR_TO_JSON(modules, modules_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskOutputPath, taskOutputPath_);
        DARABONBA_ANY_TO_JSON(terraformContext, terraformContext_);
        DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_TO_JSON(terraformVersion, terraformVersion_);
        DARABONBA_PTR_TO_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_TO_JSON(variables, variables_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
        DARABONBA_PTR_FROM_JSON(exportToModule, exportToModule_);
        DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
        DARABONBA_PTR_FROM_JSON(failedReason, failedReason_);
        DARABONBA_PTR_FROM_JSON(includeRules, includeRules_);
        DARABONBA_PTR_FROM_JSON(modules, modules_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskOutputPath, taskOutputPath_);
        DARABONBA_ANY_FROM_JSON(terraformContext, terraformContext_);
        DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
        DARABONBA_PTR_FROM_JSON(terraformVersion, terraformVersion_);
        DARABONBA_PTR_FROM_JSON(triggerStrategy, triggerStrategy_);
        DARABONBA_PTR_FROM_JSON(variables, variables_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variables& obj) { 
          DARABONBA_PTR_TO_JSON(properties, properties_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Variables& obj) { 
          DARABONBA_PTR_FROM_JSON(properties, properties_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
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
        virtual bool empty() const override { return this->properties_ == nullptr
        && this->resourceType_ == nullptr; };
        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<string>) };
        inline vector<string> getProperties() { DARABONBA_PTR_GET(properties_, vector<string>) };
        inline Variables& setProperties(const vector<string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Variables& setProperties(vector<string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Variables& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        shared_ptr<vector<string>> properties_ {};
        shared_ptr<string> resourceType_ {};
      };

      class Modules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Modules& obj) { 
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Modules& obj) { 
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        Modules() = default ;
        Modules(const Modules &) = default ;
        Modules(Modules &&) = default ;
        Modules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Modules() = default ;
        Modules& operator=(const Modules &) = default ;
        Modules& operator=(Modules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->version_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Modules& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline Modules& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Modules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> source_ {};
        shared_ptr<string> sourcePath_ {};
        shared_ptr<string> version_ {};
      };

      class IncludeRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IncludeRules& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, IncludeRules& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(values, values_);
        };
        IncludeRules() = default ;
        IncludeRules(const IncludeRules &) = default ;
        IncludeRules(IncludeRules &&) = default ;
        IncludeRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IncludeRules() = default ;
        IncludeRules& operator=(const IncludeRules &) = default ;
        IncludeRules& operator=(IncludeRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline IncludeRules& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline IncludeRules& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline IncludeRules& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<vector<string>> values_ {};
      };

      class ExportToModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExportToModule& obj) { 
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_TO_JSON(statePath, statePath_);
        };
        friend void from_json(const Darabonba::Json& j, ExportToModule& obj) { 
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
          DARABONBA_PTR_FROM_JSON(statePath, statePath_);
        };
        ExportToModule() = default ;
        ExportToModule(const ExportToModule &) = default ;
        ExportToModule(ExportToModule &&) = default ;
        ExportToModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExportToModule() = default ;
        ExportToModule& operator=(const ExportToModule &) = default ;
        ExportToModule& operator=(ExportToModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->statePath_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ExportToModule& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline ExportToModule& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


        // statePath Field Functions 
        bool hasStatePath() const { return this->statePath_ != nullptr;};
        void deleteStatePath() { this->statePath_ = nullptr;};
        inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
        inline ExportToModule& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


      protected:
        shared_ptr<string> source_ {};
        shared_ptr<string> sourcePath_ {};
        shared_ptr<string> statePath_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->elapsedTime_ == nullptr && this->exportTaskId_ == nullptr && this->exportToModule_ == nullptr && this->exportVersion_ == nullptr
        && this->failedReason_ == nullptr && this->includeRules_ == nullptr && this->modules_ == nullptr && this->name_ == nullptr && this->ramRole_ == nullptr
        && this->status_ == nullptr && this->taskOutputPath_ == nullptr && this->terraformContext_ == nullptr && this->terraformProviderVersion_ == nullptr && this->terraformVersion_ == nullptr
        && this->triggerStrategy_ == nullptr && this->variables_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Task& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Task& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline Task& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // exportTaskId Field Functions 
      bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
      void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
      inline string getExportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
      inline Task& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


      // exportToModule Field Functions 
      bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
      void deleteExportToModule() { this->exportToModule_ = nullptr;};
      inline const Task::ExportToModule & getExportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, Task::ExportToModule) };
      inline Task::ExportToModule getExportToModule() { DARABONBA_PTR_GET(exportToModule_, Task::ExportToModule) };
      inline Task& setExportToModule(const Task::ExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
      inline Task& setExportToModule(Task::ExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


      // exportVersion Field Functions 
      bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
      void deleteExportVersion() { this->exportVersion_ = nullptr;};
      inline string getExportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
      inline Task& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


      // failedReason Field Functions 
      bool hasFailedReason() const { return this->failedReason_ != nullptr;};
      void deleteFailedReason() { this->failedReason_ = nullptr;};
      inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
      inline Task& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


      // includeRules Field Functions 
      bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
      void deleteIncludeRules() { this->includeRules_ = nullptr;};
      inline const vector<Task::IncludeRules> & getIncludeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<Task::IncludeRules>) };
      inline vector<Task::IncludeRules> getIncludeRules() { DARABONBA_PTR_GET(includeRules_, vector<Task::IncludeRules>) };
      inline Task& setIncludeRules(const vector<Task::IncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
      inline Task& setIncludeRules(vector<Task::IncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline const vector<Task::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<Task::Modules>) };
      inline vector<Task::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<Task::Modules>) };
      inline Task& setModules(const vector<Task::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
      inline Task& setModules(vector<Task::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ramRole Field Functions 
      bool hasRamRole() const { return this->ramRole_ != nullptr;};
      void deleteRamRole() { this->ramRole_ = nullptr;};
      inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
      inline Task& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskOutputPath Field Functions 
      bool hasTaskOutputPath() const { return this->taskOutputPath_ != nullptr;};
      void deleteTaskOutputPath() { this->taskOutputPath_ = nullptr;};
      inline string getTaskOutputPath() const { DARABONBA_PTR_GET_DEFAULT(taskOutputPath_, "") };
      inline Task& setTaskOutputPath(string taskOutputPath) { DARABONBA_PTR_SET_VALUE(taskOutputPath_, taskOutputPath) };


      // terraformContext Field Functions 
      bool hasTerraformContext() const { return this->terraformContext_ != nullptr;};
      void deleteTerraformContext() { this->terraformContext_ = nullptr;};
      inline       const Darabonba::Json & getTerraformContext() const { DARABONBA_GET(terraformContext_) };
      Darabonba::Json & getTerraformContext() { DARABONBA_GET(terraformContext_) };
      inline Task& setTerraformContext(const Darabonba::Json & terraformContext) { DARABONBA_SET_VALUE(terraformContext_, terraformContext) };
      inline Task& setTerraformContext(Darabonba::Json && terraformContext) { DARABONBA_SET_RVALUE(terraformContext_, terraformContext) };


      // terraformProviderVersion Field Functions 
      bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
      void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
      inline string getTerraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
      inline Task& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


      // terraformVersion Field Functions 
      bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
      void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
      inline string getTerraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
      inline Task& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


      // triggerStrategy Field Functions 
      bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
      void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
      inline string getTriggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
      inline Task& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


      // variables Field Functions 
      bool hasVariables() const { return this->variables_ != nullptr;};
      void deleteVariables() { this->variables_ = nullptr;};
      inline const vector<Task::Variables> & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Task::Variables>) };
      inline vector<Task::Variables> getVariables() { DARABONBA_PTR_GET(variables_, vector<Task::Variables>) };
      inline Task& setVariables(const vector<Task::Variables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
      inline Task& setVariables(vector<Task::Variables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> elapsedTime_ {};
      shared_ptr<string> exportTaskId_ {};
      shared_ptr<Task::ExportToModule> exportToModule_ {};
      shared_ptr<string> exportVersion_ {};
      shared_ptr<string> failedReason_ {};
      shared_ptr<vector<Task::IncludeRules>> includeRules_ {};
      shared_ptr<vector<Task::Modules>> modules_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ramRole_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskOutputPath_ {};
      Darabonba::Json terraformContext_ {};
      shared_ptr<string> terraformProviderVersion_ {};
      shared_ptr<string> terraformVersion_ {};
      shared_ptr<string> triggerStrategy_ {};
      shared_ptr<vector<Task::Variables>> variables_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetResourceExportTaskResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, GetResourceExportTaskResponseBody::Task) };
    inline GetResourceExportTaskResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, GetResourceExportTaskResponseBody::Task) };
    inline GetResourceExportTaskResponseBody& setTask(const GetResourceExportTaskResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetResourceExportTaskResponseBody& setTask(GetResourceExportTaskResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetResourceExportTaskResponseBody::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
