// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODYEXPORTTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKSRESPONSEBODYEXPORTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceExportTasksResponseBodyExportTasksExportToModule.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceExportTasksResponseBodyExportTasksIncludeRules.hpp>
#include <alibabacloud/models/ListResourceExportTasksResponseBodyExportTasksModules.hpp>
#include <alibabacloud/models/ListResourceExportTasksResponseBodyExportTasksVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTasksResponseBodyExportTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTasksResponseBodyExportTasks& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(exportStatus, exportStatus_);
      DARABONBA_PTR_TO_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_TO_JSON(exportToModule, exportToModule_);
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_TO_JSON(includeRules, includeRules_);
      DARABONBA_PTR_TO_JSON(modules, modules_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTasksResponseBodyExportTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(exportStatus, exportStatus_);
      DARABONBA_PTR_FROM_JSON(exportTaskId, exportTaskId_);
      DARABONBA_PTR_FROM_JSON(exportToModule, exportToModule_);
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_FROM_JSON(includeRules, includeRules_);
      DARABONBA_PTR_FROM_JSON(modules, modules_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ListResourceExportTasksResponseBodyExportTasks() = default ;
    ListResourceExportTasksResponseBodyExportTasks(const ListResourceExportTasksResponseBodyExportTasks &) = default ;
    ListResourceExportTasksResponseBodyExportTasks(ListResourceExportTasksResponseBodyExportTasks &&) = default ;
    ListResourceExportTasksResponseBodyExportTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTasksResponseBodyExportTasks() = default ;
    ListResourceExportTasksResponseBodyExportTasks& operator=(const ListResourceExportTasksResponseBodyExportTasks &) = default ;
    ListResourceExportTasksResponseBodyExportTasks& operator=(ListResourceExportTasksResponseBodyExportTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->elapsedTime_ != nullptr && this->exportStatus_ != nullptr && this->exportTaskId_ != nullptr && this->exportToModule_ != nullptr
        && this->exportVersion_ != nullptr && this->includeRules_ != nullptr && this->modules_ != nullptr && this->name_ != nullptr && this->status_ != nullptr
        && this->variables_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline ListResourceExportTasksResponseBodyExportTasks& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string exportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // exportTaskId Field Functions 
    bool hasExportTaskId() const { return this->exportTaskId_ != nullptr;};
    void deleteExportTaskId() { this->exportTaskId_ = nullptr;};
    inline string exportTaskId() const { DARABONBA_PTR_GET_DEFAULT(exportTaskId_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setExportTaskId(string exportTaskId) { DARABONBA_PTR_SET_VALUE(exportTaskId_, exportTaskId) };


    // exportToModule Field Functions 
    bool hasExportToModule() const { return this->exportToModule_ != nullptr;};
    void deleteExportToModule() { this->exportToModule_ = nullptr;};
    inline const Models::ListResourceExportTasksResponseBodyExportTasksExportToModule & exportToModule() const { DARABONBA_PTR_GET_CONST(exportToModule_, Models::ListResourceExportTasksResponseBodyExportTasksExportToModule) };
    inline Models::ListResourceExportTasksResponseBodyExportTasksExportToModule exportToModule() { DARABONBA_PTR_GET(exportToModule_, Models::ListResourceExportTasksResponseBodyExportTasksExportToModule) };
    inline ListResourceExportTasksResponseBodyExportTasks& setExportToModule(const Models::ListResourceExportTasksResponseBodyExportTasksExportToModule & exportToModule) { DARABONBA_PTR_SET_VALUE(exportToModule_, exportToModule) };
    inline ListResourceExportTasksResponseBodyExportTasks& setExportToModule(Models::ListResourceExportTasksResponseBodyExportTasksExportToModule && exportToModule) { DARABONBA_PTR_SET_RVALUE(exportToModule_, exportToModule) };


    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // includeRules Field Functions 
    bool hasIncludeRules() const { return this->includeRules_ != nullptr;};
    void deleteIncludeRules() { this->includeRules_ = nullptr;};
    inline const vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules> & includeRules() const { DARABONBA_PTR_GET_CONST(includeRules_, vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules>) };
    inline vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules> includeRules() { DARABONBA_PTR_GET(includeRules_, vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules>) };
    inline ListResourceExportTasksResponseBodyExportTasks& setIncludeRules(const vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules> & includeRules) { DARABONBA_PTR_SET_VALUE(includeRules_, includeRules) };
    inline ListResourceExportTasksResponseBodyExportTasks& setIncludeRules(vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules> && includeRules) { DARABONBA_PTR_SET_RVALUE(includeRules_, includeRules) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const vector<Models::ListResourceExportTasksResponseBodyExportTasksModules> & modules() const { DARABONBA_PTR_GET_CONST(modules_, vector<Models::ListResourceExportTasksResponseBodyExportTasksModules>) };
    inline vector<Models::ListResourceExportTasksResponseBodyExportTasksModules> modules() { DARABONBA_PTR_GET(modules_, vector<Models::ListResourceExportTasksResponseBodyExportTasksModules>) };
    inline ListResourceExportTasksResponseBodyExportTasks& setModules(const vector<Models::ListResourceExportTasksResponseBodyExportTasksModules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline ListResourceExportTasksResponseBodyExportTasks& setModules(vector<Models::ListResourceExportTasksResponseBodyExportTasksModules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceExportTasksResponseBodyExportTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables>) };
    inline vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables>) };
    inline ListResourceExportTasksResponseBodyExportTasks& setVariables(const vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListResourceExportTasksResponseBodyExportTasks& setVariables(vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    std::shared_ptr<string> exportStatus_ = nullptr;
    std::shared_ptr<string> exportTaskId_ = nullptr;
    std::shared_ptr<Models::ListResourceExportTasksResponseBodyExportTasksExportToModule> exportToModule_ = nullptr;
    std::shared_ptr<string> exportVersion_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTasksResponseBodyExportTasksIncludeRules>> includeRules_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTasksResponseBodyExportTasksModules>> modules_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceExportTasksResponseBodyExportTasksVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
