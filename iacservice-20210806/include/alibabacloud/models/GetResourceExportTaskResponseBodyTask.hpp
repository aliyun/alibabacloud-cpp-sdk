// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceExportTaskResponseBodyTaskExportToModule.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceExportTaskResponseBodyTaskIncludeRules.hpp>
#include <alibabacloud/models/GetResourceExportTaskResponseBodyTaskModules.hpp>
#include <alibabacloud/models/GetResourceExportTaskResponseBodyTaskVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceExportTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceExportTaskResponseBodyTask& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetResourceExportTaskResponseBodyTask& obj) { 
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
    GetResourceExportTaskResponseBodyTask() = default ;
    GetResourceExportTaskResponseBodyTask(const GetResourceExportTaskResponseBodyTask &) = default ;
    GetResourceExportTaskResponseBodyTask(GetResourceExportTaskResponseBodyTask &&) = default ;
    GetResourceExportTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceExportTaskResponseBodyTask() = default ;
    GetResourceExportTaskResponseBodyTask& operator=(const GetResourceExportTaskResponseBodyTask &) = default ;
    GetResourceExportTaskResponseBodyTask& operator=(GetResourceExportTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->elapsedTime_ != nullptr && this->exportTaskId_ != nullptr && this->exportToModule_ != nullptr && this->exportVersion_ != nullptr
        && this->failedReason_ != nullptr && this->includeRules_ != nullptr && this->modules_ != nullptr && this->name_ != nullptr && this->ramRole_ != nullptr
        && this->status_ != nullptr && this->taskOutputPath_ != nullptr && this->terraformContext_ != nullptr && this->terraformProviderVersion_ != nullptr && this->terraformVersion_ != nullptr
        && this->triggerStrategy_ != nullptr && this->variables_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetResourceExportTaskResponseBodyTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetResourceExportTaskResponseBodyTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline GetResourceExportTaskResponseBodyTask& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string exportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline GetResourceExportTaskResponseBodyTask& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const Models::GetResourceExportTaskResponseBodyTaskExportToModule & exportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, Models::GetResourceExportTaskResponseBodyTaskExportToModule) };
    inline Models::GetResourceExportTaskResponseBodyTaskExportToModule exportToModule() { DARABONBA_PTR_GET(exportToModule_, Models::GetResourceExportTaskResponseBodyTaskExportToModule) };
    inline GetResourceExportTaskResponseBodyTask& setExportToModule(const Models::GetResourceExportTaskResponseBodyTaskExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline GetResourceExportTaskResponseBodyTask& setExportToModule(Models::GetResourceExportTaskResponseBodyTaskExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline GetResourceExportTaskResponseBodyTask& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline GetResourceExportTaskResponseBodyTask& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules> & includeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules>) };
    inline vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules> includeRules() { DARABONBA_PTR_GET(includeRules_, vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules>) };
    inline GetResourceExportTaskResponseBodyTask& setIncludeRules(const vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline GetResourceExportTaskResponseBodyTask& setIncludeRules(vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const vector<Models::GetResourceExportTaskResponseBodyTaskModules> & modules() const { DARABONBA_PTR_GET_CONST(modules_, vector<Models::GetResourceExportTaskResponseBodyTaskModules>) };
    inline vector<Models::GetResourceExportTaskResponseBodyTaskModules> modules() { DARABONBA_PTR_GET(modules_, vector<Models::GetResourceExportTaskResponseBodyTaskModules>) };
    inline GetResourceExportTaskResponseBodyTask& setModules(const vector<Models::GetResourceExportTaskResponseBodyTaskModules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline GetResourceExportTaskResponseBodyTask& setModules(vector<Models::GetResourceExportTaskResponseBodyTaskModules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResourceExportTaskResponseBodyTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string ramRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline GetResourceExportTaskResponseBodyTask& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceExportTaskResponseBodyTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskOutputPath Field Functions 
    bool hasTaskOutputPath() const { return this->taskOutputPath_ != nullptr;};
    void deleteTaskOutputPath() { this->taskOutputPath_ = nullptr;};
    inline string taskOutputPath() const { DARABONBA_PTR_GET_DEFAULT(taskOutputPath_, "") };
    inline GetResourceExportTaskResponseBodyTask& setTaskOutputPath(string taskOutputPath) { DARABONBA_PTR_SET_VALUE(taskOutputPath_, taskOutputPath) };


    // terraformContext Field Functions 
    bool hasTerraformContext() const { return this->terraformContext_ != nullptr;};
    void deleteTerraformContext() { this->terraformContext_ = nullptr;};
    inline     const Darabonba::Json & terraformContext() const { DARABONBA_GET(terraformContext_) };
    Darabonba::Json & terraformContext() { DARABONBA_GET(terraformContext_) };
    inline GetResourceExportTaskResponseBodyTask& setTerraformContext(const Darabonba::Json & terraformContext) { DARABONBA_SET_VALUE(terraformContext_, terraformContext) };
    inline GetResourceExportTaskResponseBodyTask& setTerraformContext(Darabonba::Json & terraformContext) { DARABONBA_SET_RVALUE(terraformContext_, terraformContext) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GetResourceExportTaskResponseBodyTask& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


    // terraformVersion Field Functions 
    bool hasTerraformVersion() const { return this->terraformVersion_ != nullptr;};
    void deleteTerraformVersion() { this->terraformVersion_ = nullptr;};
    inline string terraformVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformVersion_, "") };
    inline GetResourceExportTaskResponseBodyTask& setTerraformVersion(string terraformVersion) { DARABONBA_PTR_SET_VALUE(terraformVersion_, terraformVersion) };


    // triggerStrategy Field Functions 
    bool hasTriggerStrategy() const { return this->triggerStrategy_ != nullptr;};
    void deleteTriggerStrategy() { this->triggerStrategy_ = nullptr;};
    inline string triggerStrategy() const { DARABONBA_PTR_GET_DEFAULT(triggerStrategy_, "") };
    inline GetResourceExportTaskResponseBodyTask& setTriggerStrategy(string triggerStrategy) { DARABONBA_PTR_SET_VALUE(triggerStrategy_, triggerStrategy) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::GetResourceExportTaskResponseBodyTaskVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::GetResourceExportTaskResponseBodyTaskVariables>) };
    inline vector<Models::GetResourceExportTaskResponseBodyTaskVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::GetResourceExportTaskResponseBodyTaskVariables>) };
    inline GetResourceExportTaskResponseBodyTask& setVariables(const vector<Models::GetResourceExportTaskResponseBodyTaskVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetResourceExportTaskResponseBodyTask& setVariables(vector<Models::GetResourceExportTaskResponseBodyTaskVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    std::shared_ptr<string> exportTaskId_ = nullptr;
    std::shared_ptr<Models::GetResourceExportTaskResponseBodyTaskExportToModule> exportToModule_ = nullptr;
    std::shared_ptr<string> exportVersion_ = nullptr;
    std::shared_ptr<string> failedReason_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceExportTaskResponseBodyTaskIncludeRules>> includeRules_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceExportTaskResponseBodyTaskModules>> modules_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ramRole_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskOutputPath_ = nullptr;
    Darabonba::Json terraformContext_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
    std::shared_ptr<string> terraformVersion_ = nullptr;
    std::shared_ptr<string> triggerStrategy_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceExportTaskResponseBodyTaskVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
