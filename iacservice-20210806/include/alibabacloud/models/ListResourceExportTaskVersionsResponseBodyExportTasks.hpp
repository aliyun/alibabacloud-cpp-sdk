// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSRESPONSEBODYEXPORTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules.hpp>
#include <alibabacloud/models/ListResourceExportTaskVersionsResponseBodyExportTasksModules.hpp>
#include <alibabacloud/models/ListResourceExportTaskVersionsResponseBodyExportTasksVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTaskVersionsResponseBodyExportTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTaskVersionsResponseBodyExportTasks& obj) { 
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
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTaskVersionsResponseBodyExportTasks& obj) { 
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
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ListResourceExportTaskVersionsResponseBodyExportTasks() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasks(const ListResourceExportTaskVersionsResponseBodyExportTasks &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasks(ListResourceExportTaskVersionsResponseBodyExportTasks &&) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTaskVersionsResponseBodyExportTasks() = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasks& operator=(const ListResourceExportTaskVersionsResponseBodyExportTasks &) = default ;
    ListResourceExportTaskVersionsResponseBodyExportTasks& operator=(ListResourceExportTaskVersionsResponseBodyExportTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->elapsedTime_ != nullptr && this->exportTaskId_ != nullptr && this->exportToModule_ != nullptr && this->exportVersion_ != nullptr
        && this->failedReason_ != nullptr && this->includeRules_ != nullptr && this->modules_ != nullptr && this->name_ != nullptr && this->status_ != nullptr
        && this->variables_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string exportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule & exportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule) };
    inline Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule exportToModule() { DARABONBA_PTR_GET(exportToModule_, Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setExportToModule(const Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setExportToModule(Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // failedReason Field Functions 
    bool hasFailedReason() const { return this->failedReason_ != nullptr;};
    void deleteFailedReason() { this->failedReason_ = nullptr;};
    inline string failedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules> & includeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules>) };
    inline vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules> includeRules() { DARABONBA_PTR_GET(includeRules_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules>) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setIncludeRules(const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setIncludeRules(vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules> & modules() const { DARABONBA_PTR_GET_CONST(modules_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules>) };
    inline vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules> modules() { DARABONBA_PTR_GET(modules_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules>) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setModules(const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setModules(vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables>) };
    inline vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables>) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setVariables(const vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListResourceExportTaskVersionsResponseBodyExportTasks& setVariables(vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    std::shared_ptr<string> exportTaskId_ = nullptr;
    std::shared_ptr<Models::ListResourceExportTaskVersionsResponseBodyExportTasksExportToModule> exportToModule_ = nullptr;
    std::shared_ptr<string> exportVersion_ = nullptr;
    std::shared_ptr<string> failedReason_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksIncludeRules>> includeRules_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksModules>> modules_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTaskVersionsResponseBodyExportTasksVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
