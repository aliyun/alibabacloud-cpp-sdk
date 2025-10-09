// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODES_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesDataSource.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesInputs.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesOutputs.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesRuntimeResource.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesScript.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesStrategy.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesTags.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodes& obj) { 
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
    ListNodesResponseBodyPagingInfoNodes() = default ;
    ListNodesResponseBodyPagingInfoNodes(const ListNodesResponseBodyPagingInfoNodes &) = default ;
    ListNodesResponseBodyPagingInfoNodes(ListNodesResponseBodyPagingInfoNodes &&) = default ;
    ListNodesResponseBodyPagingInfoNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodes() = default ;
    ListNodesResponseBodyPagingInfoNodes& operator=(const ListNodesResponseBodyPagingInfoNodes &) = default ;
    ListNodesResponseBodyPagingInfoNodes& operator=(ListNodesResponseBodyPagingInfoNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dataSource_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->inputs_ != nullptr && this->modifyTime_ != nullptr
        && this->name_ != nullptr && this->outputs_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->recurrence_ != nullptr
        && this->runtimeResource_ != nullptr && this->script_ != nullptr && this->strategy_ != nullptr && this->tags_ != nullptr && this->taskId_ != nullptr
        && this->trigger_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListNodesResponseBodyPagingInfoNodesDataSource) };
    inline Models::ListNodesResponseBodyPagingInfoNodesDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListNodesResponseBodyPagingInfoNodesDataSource) };
    inline ListNodesResponseBodyPagingInfoNodes& setDataSource(const Models::ListNodesResponseBodyPagingInfoNodesDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListNodesResponseBodyPagingInfoNodes& setDataSource(Models::ListNodesResponseBodyPagingInfoNodesDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNodesResponseBodyPagingInfoNodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, Models::ListNodesResponseBodyPagingInfoNodesInputs) };
    inline Models::ListNodesResponseBodyPagingInfoNodesInputs inputs() { DARABONBA_PTR_GET(inputs_, Models::ListNodesResponseBodyPagingInfoNodesInputs) };
    inline ListNodesResponseBodyPagingInfoNodes& setInputs(const Models::ListNodesResponseBodyPagingInfoNodesInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ListNodesResponseBodyPagingInfoNodes& setInputs(Models::ListNodesResponseBodyPagingInfoNodesInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodes& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNodesResponseBodyPagingInfoNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, Models::ListNodesResponseBodyPagingInfoNodesOutputs) };
    inline Models::ListNodesResponseBodyPagingInfoNodesOutputs outputs() { DARABONBA_PTR_GET(outputs_, Models::ListNodesResponseBodyPagingInfoNodesOutputs) };
    inline ListNodesResponseBodyPagingInfoNodes& setOutputs(const Models::ListNodesResponseBodyPagingInfoNodesOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ListNodesResponseBodyPagingInfoNodes& setOutputs(Models::ListNodesResponseBodyPagingInfoNodesOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListNodesResponseBodyPagingInfoNodes& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline ListNodesResponseBodyPagingInfoNodes& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource) };
    inline Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource) };
    inline ListNodesResponseBodyPagingInfoNodes& setRuntimeResource(const Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListNodesResponseBodyPagingInfoNodes& setRuntimeResource(Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListNodesResponseBodyPagingInfoNodesScript) };
    inline Models::ListNodesResponseBodyPagingInfoNodesScript script() { DARABONBA_PTR_GET(script_, Models::ListNodesResponseBodyPagingInfoNodesScript) };
    inline ListNodesResponseBodyPagingInfoNodes& setScript(const Models::ListNodesResponseBodyPagingInfoNodesScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListNodesResponseBodyPagingInfoNodes& setScript(Models::ListNodesResponseBodyPagingInfoNodesScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::ListNodesResponseBodyPagingInfoNodesStrategy) };
    inline Models::ListNodesResponseBodyPagingInfoNodesStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::ListNodesResponseBodyPagingInfoNodesStrategy) };
    inline ListNodesResponseBodyPagingInfoNodes& setStrategy(const Models::ListNodesResponseBodyPagingInfoNodesStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline ListNodesResponseBodyPagingInfoNodes& setStrategy(Models::ListNodesResponseBodyPagingInfoNodesStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListNodesResponseBodyPagingInfoNodesTags>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListNodesResponseBodyPagingInfoNodesTags>) };
    inline ListNodesResponseBodyPagingInfoNodes& setTags(const vector<Models::ListNodesResponseBodyPagingInfoNodesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListNodesResponseBodyPagingInfoNodes& setTags(vector<Models::ListNodesResponseBodyPagingInfoNodesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodes& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListNodesResponseBodyPagingInfoNodesTrigger) };
    inline Models::ListNodesResponseBodyPagingInfoNodesTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListNodesResponseBodyPagingInfoNodesTrigger) };
    inline ListNodesResponseBodyPagingInfoNodes& setTrigger(const Models::ListNodesResponseBodyPagingInfoNodesTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListNodesResponseBodyPagingInfoNodes& setTrigger(Models::ListNodesResponseBodyPagingInfoNodesTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The timestamp when the node in DataStudio was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The data source.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesDataSource> dataSource_ = nullptr;
    // The description of the node.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The node input.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesInputs> inputs_ = nullptr;
    // The timestamp when the node in DataStudio was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The node output.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesOutputs> outputs_ = nullptr;
    // The owner of nodes in DataStudio.
    std::shared_ptr<string> owner_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The scheduling type.
    // 
    // Valid values:
    // 
    // *   Normal: The node is scheduled as expected.
    // *   Pause: The node is paused, and the running of its descendant nodes is blocked.
    // *   Skip: The node is dry run. The system does not actually run the node but directly prompts that the node is successfully run. The running duration of the node is 0 seconds. In addition, the node does not occupy resources or block the running of its descendant nodes.
    std::shared_ptr<string> recurrence_ = nullptr;
    // The information about the resource group.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource_ = nullptr;
    // The script information.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesScript> script_ = nullptr;
    // The scheduling policy.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesStrategy> strategy_ = nullptr;
    // The tag information (not in use).
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodesTags>> tags_ = nullptr;
    // The scheduling task ID.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The trigger.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
