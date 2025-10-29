// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesDataSource.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesInputs.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesOutputs.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesScript.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesStrategy.hpp>
#include <vector>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesTags.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodes() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodes(const ListNodeDependenciesResponseBodyPagingInfoNodes &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodes(ListNodeDependenciesResponseBodyPagingInfoNodes &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodes() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodes& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodes &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodes& operator=(ListNodeDependenciesResponseBodyPagingInfoNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSource_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->inputs_ == nullptr && return this->modifyTime_ == nullptr
        && return this->name_ == nullptr && return this->outputs_ == nullptr && return this->owner_ == nullptr && return this->projectId_ == nullptr && return this->recurrence_ == nullptr
        && return this->runtimeResource_ == nullptr && return this->script_ == nullptr && return this->strategy_ == nullptr && return this->tags_ == nullptr && return this->taskId_ == nullptr
        && return this->trigger_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setDataSource(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setDataSource(Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs inputs() { DARABONBA_PTR_GET(inputs_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setInputs(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setInputs(Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs outputs() { DARABONBA_PTR_GET(outputs_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setOutputs(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setOutputs(Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setRuntimeResource(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setRuntimeResource(Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript script() { DARABONBA_PTR_GET(script_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setScript(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setScript(Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setStrategy(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setStrategy(Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags>) };
    inline vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags>) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setTags(const vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setTags(vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setTrigger(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodes& setTrigger(Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The timestamp when the node was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The data source.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesDataSource> dataSource_ = nullptr;
    // The description of the node.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The input of the node.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesInputs> inputs_ = nullptr;
    // The timestamp when the node was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The output of the node.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesOutputs> outputs_ = nullptr;
    // The owner of the node.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The scheduling type.
    // 
    // Valid values:
    // 
    // *   Normal: Nodes are scheduled as expected.
    // *   Pause: Nodes are paused, and the running of their descendant nodes is blocked.
    // *   Skip: Nodes are dry run. The system does not actually run the nodes but directly prompts that the nodes are successfully run. The running duration of the nodes is 0 seconds. In addition, the nodes do not occupy resources or block the running of their descendant nodes.
    std::shared_ptr<string> recurrence_ = nullptr;
    // The information about the resource group.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource_ = nullptr;
    // The script information.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesScript> script_ = nullptr;
    // The scheduling policy.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesStrategy> strategy_ = nullptr;
    // The tags. This parameter is not in use.
    std::shared_ptr<vector<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTags>> tags_ = nullptr;
    // The scheduling task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The trigger.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
