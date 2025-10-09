// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchUpdateTasksRequestTasksDataSource.hpp>
#include <alibabacloud/models/BatchUpdateTasksRequestTasksRuntimeResource.hpp>
#include <vector>
#include <alibabacloud/models/BatchUpdateTasksRequestTasksTags.hpp>
#include <alibabacloud/models/BatchUpdateTasksRequestTasksTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchUpdateTasksRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    BatchUpdateTasksRequestTasks() = default ;
    BatchUpdateTasksRequestTasks(const BatchUpdateTasksRequestTasks &) = default ;
    BatchUpdateTasksRequestTasks(BatchUpdateTasksRequestTasks &&) = default ;
    BatchUpdateTasksRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksRequestTasks() = default ;
    BatchUpdateTasksRequestTasks& operator=(const BatchUpdateTasksRequestTasks &) = default ;
    BatchUpdateTasksRequestTasks& operator=(BatchUpdateTasksRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSource_ != nullptr
        && this->description_ != nullptr && this->envType_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->rerunInterval_ != nullptr && this->rerunMode_ != nullptr && this->rerunTimes_ != nullptr && this->runtimeResource_ != nullptr && this->tags_ != nullptr
        && this->timeout_ != nullptr && this->trigger_ != nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::BatchUpdateTasksRequestTasksDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::BatchUpdateTasksRequestTasksDataSource) };
    inline Models::BatchUpdateTasksRequestTasksDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::BatchUpdateTasksRequestTasksDataSource) };
    inline BatchUpdateTasksRequestTasks& setDataSource(const Models::BatchUpdateTasksRequestTasksDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline BatchUpdateTasksRequestTasks& setDataSource(Models::BatchUpdateTasksRequestTasksDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchUpdateTasksRequestTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline BatchUpdateTasksRequestTasks& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BatchUpdateTasksRequestTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BatchUpdateTasksRequestTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline BatchUpdateTasksRequestTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t rerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline BatchUpdateTasksRequestTasks& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline BatchUpdateTasksRequestTasks& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t rerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline BatchUpdateTasksRequestTasks& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::BatchUpdateTasksRequestTasksRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::BatchUpdateTasksRequestTasksRuntimeResource) };
    inline Models::BatchUpdateTasksRequestTasksRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::BatchUpdateTasksRequestTasksRuntimeResource) };
    inline BatchUpdateTasksRequestTasks& setRuntimeResource(const Models::BatchUpdateTasksRequestTasksRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline BatchUpdateTasksRequestTasks& setRuntimeResource(Models::BatchUpdateTasksRequestTasksRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::BatchUpdateTasksRequestTasksTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::BatchUpdateTasksRequestTasksTags>) };
    inline vector<Models::BatchUpdateTasksRequestTasksTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::BatchUpdateTasksRequestTasksTags>) };
    inline BatchUpdateTasksRequestTasks& setTags(const vector<Models::BatchUpdateTasksRequestTasksTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline BatchUpdateTasksRequestTasks& setTags(vector<Models::BatchUpdateTasksRequestTasksTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline BatchUpdateTasksRequestTasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::BatchUpdateTasksRequestTasksTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::BatchUpdateTasksRequestTasksTrigger) };
    inline Models::BatchUpdateTasksRequestTasksTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::BatchUpdateTasksRequestTasksTrigger) };
    inline BatchUpdateTasksRequestTasks& setTrigger(const Models::BatchUpdateTasksRequestTasksTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline BatchUpdateTasksRequestTasks& setTrigger(Models::BatchUpdateTasksRequestTasksTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The information about the associated data source.
    std::shared_ptr<Models::BatchUpdateTasksRequestTasksDataSource> dataSource_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The rerun interval. Unit: seconds.
    std::shared_ptr<int32_t> rerunInterval_ = nullptr;
    // The rerun mode. Valid values:
    // 
    // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
    // *   FailureAllowed: The task can be rerun only after it fails to run.
    // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
    std::shared_ptr<int32_t> rerunTimes_ = nullptr;
    // The configurations of the runtime environment, such as the resource group information.
    std::shared_ptr<Models::BatchUpdateTasksRequestTasksRuntimeResource> runtimeResource_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::BatchUpdateTasksRequestTasksTags>> tags_ = nullptr;
    // The timeout period of task running. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The trigger method.
    std::shared_ptr<Models::BatchUpdateTasksRequestTasksTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
