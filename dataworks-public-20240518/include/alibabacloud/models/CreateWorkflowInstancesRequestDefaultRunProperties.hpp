// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTDEFAULTRUNPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkflowInstancesRequestDefaultRunPropertiesAlert.hpp>
#include <alibabacloud/models/CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestDefaultRunProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestDefaultRunProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Alert, alert_);
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(ExcludeProjectIds, excludeProjectIds_);
      DARABONBA_PTR_TO_JSON(ExcludeTaskIds, excludeTaskIds_);
      DARABONBA_PTR_TO_JSON(IncludeProjectIds, includeProjectIds_);
      DARABONBA_PTR_TO_JSON(IncludeTaskIds, includeTaskIds_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PriorityWeightStrategy, priorityWeightStrategy_);
      DARABONBA_PTR_TO_JSON(RootTaskIds, rootTaskIds_);
      DARABONBA_PTR_TO_JSON(RunPolicy, runPolicy_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestDefaultRunProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Alert, alert_);
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(ExcludeProjectIds, excludeProjectIds_);
      DARABONBA_PTR_FROM_JSON(ExcludeTaskIds, excludeTaskIds_);
      DARABONBA_PTR_FROM_JSON(IncludeProjectIds, includeProjectIds_);
      DARABONBA_PTR_FROM_JSON(IncludeTaskIds, includeTaskIds_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PriorityWeightStrategy, priorityWeightStrategy_);
      DARABONBA_PTR_FROM_JSON(RootTaskIds, rootTaskIds_);
      DARABONBA_PTR_FROM_JSON(RunPolicy, runPolicy_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
    };
    CreateWorkflowInstancesRequestDefaultRunProperties() = default ;
    CreateWorkflowInstancesRequestDefaultRunProperties(const CreateWorkflowInstancesRequestDefaultRunProperties &) = default ;
    CreateWorkflowInstancesRequestDefaultRunProperties(CreateWorkflowInstancesRequestDefaultRunProperties &&) = default ;
    CreateWorkflowInstancesRequestDefaultRunProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestDefaultRunProperties() = default ;
    CreateWorkflowInstancesRequestDefaultRunProperties& operator=(const CreateWorkflowInstancesRequestDefaultRunProperties &) = default ;
    CreateWorkflowInstancesRequestDefaultRunProperties& operator=(CreateWorkflowInstancesRequestDefaultRunProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alert_ != nullptr
        && this->analysis_ != nullptr && this->excludeProjectIds_ != nullptr && this->excludeTaskIds_ != nullptr && this->includeProjectIds_ != nullptr && this->includeTaskIds_ != nullptr
        && this->mode_ != nullptr && this->order_ != nullptr && this->parallelism_ != nullptr && this->priority_ != nullptr && this->priorityWeightStrategy_ != nullptr
        && this->rootTaskIds_ != nullptr && this->runPolicy_ != nullptr && this->runtimeResource_ != nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert & alert() const { DARABONBA_PTR_GET_CONST(alert_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert) };
    inline Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert alert() { DARABONBA_PTR_GET(alert_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setAlert(const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setAlert(Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis) };
    inline Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setAnalysis(const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setAnalysis(Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // excludeProjectIds Field Functions 
    bool hasExcludeProjectIds() const { return this->excludeProjectIds_ != nullptr;};
    void deleteExcludeProjectIds() { this->excludeProjectIds_ = nullptr;};
    inline const vector<int64_t> & excludeProjectIds() const { DARABONBA_PTR_GET_CONST(excludeProjectIds_, vector<int64_t>) };
    inline vector<int64_t> excludeProjectIds() { DARABONBA_PTR_GET(excludeProjectIds_, vector<int64_t>) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setExcludeProjectIds(const vector<int64_t> & excludeProjectIds) { DARABONBA_PTR_SET_VALUE(excludeProjectIds_, excludeProjectIds) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setExcludeProjectIds(vector<int64_t> && excludeProjectIds) { DARABONBA_PTR_SET_RVALUE(excludeProjectIds_, excludeProjectIds) };


    // excludeTaskIds Field Functions 
    bool hasExcludeTaskIds() const { return this->excludeTaskIds_ != nullptr;};
    void deleteExcludeTaskIds() { this->excludeTaskIds_ = nullptr;};
    inline const vector<int64_t> & excludeTaskIds() const { DARABONBA_PTR_GET_CONST(excludeTaskIds_, vector<int64_t>) };
    inline vector<int64_t> excludeTaskIds() { DARABONBA_PTR_GET(excludeTaskIds_, vector<int64_t>) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setExcludeTaskIds(const vector<int64_t> & excludeTaskIds) { DARABONBA_PTR_SET_VALUE(excludeTaskIds_, excludeTaskIds) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setExcludeTaskIds(vector<int64_t> && excludeTaskIds) { DARABONBA_PTR_SET_RVALUE(excludeTaskIds_, excludeTaskIds) };


    // includeProjectIds Field Functions 
    bool hasIncludeProjectIds() const { return this->includeProjectIds_ != nullptr;};
    void deleteIncludeProjectIds() { this->includeProjectIds_ = nullptr;};
    inline const vector<int64_t> & includeProjectIds() const { DARABONBA_PTR_GET_CONST(includeProjectIds_, vector<int64_t>) };
    inline vector<int64_t> includeProjectIds() { DARABONBA_PTR_GET(includeProjectIds_, vector<int64_t>) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setIncludeProjectIds(const vector<int64_t> & includeProjectIds) { DARABONBA_PTR_SET_VALUE(includeProjectIds_, includeProjectIds) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setIncludeProjectIds(vector<int64_t> && includeProjectIds) { DARABONBA_PTR_SET_RVALUE(includeProjectIds_, includeProjectIds) };


    // includeTaskIds Field Functions 
    bool hasIncludeTaskIds() const { return this->includeTaskIds_ != nullptr;};
    void deleteIncludeTaskIds() { this->includeTaskIds_ = nullptr;};
    inline const vector<int64_t> & includeTaskIds() const { DARABONBA_PTR_GET_CONST(includeTaskIds_, vector<int64_t>) };
    inline vector<int64_t> includeTaskIds() { DARABONBA_PTR_GET(includeTaskIds_, vector<int64_t>) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setIncludeTaskIds(const vector<int64_t> & includeTaskIds) { DARABONBA_PTR_SET_VALUE(includeTaskIds_, includeTaskIds) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setIncludeTaskIds(vector<int64_t> && includeTaskIds) { DARABONBA_PTR_SET_RVALUE(includeTaskIds_, includeTaskIds) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int32_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // priorityWeightStrategy Field Functions 
    bool hasPriorityWeightStrategy() const { return this->priorityWeightStrategy_ != nullptr;};
    void deletePriorityWeightStrategy() { this->priorityWeightStrategy_ = nullptr;};
    inline string priorityWeightStrategy() const { DARABONBA_PTR_GET_DEFAULT(priorityWeightStrategy_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setPriorityWeightStrategy(string priorityWeightStrategy) { DARABONBA_PTR_SET_VALUE(priorityWeightStrategy_, priorityWeightStrategy) };


    // rootTaskIds Field Functions 
    bool hasRootTaskIds() const { return this->rootTaskIds_ != nullptr;};
    void deleteRootTaskIds() { this->rootTaskIds_ = nullptr;};
    inline const vector<int64_t> & rootTaskIds() const { DARABONBA_PTR_GET_CONST(rootTaskIds_, vector<int64_t>) };
    inline vector<int64_t> rootTaskIds() { DARABONBA_PTR_GET(rootTaskIds_, vector<int64_t>) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setRootTaskIds(const vector<int64_t> & rootTaskIds) { DARABONBA_PTR_SET_VALUE(rootTaskIds_, rootTaskIds) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setRootTaskIds(vector<int64_t> && rootTaskIds) { DARABONBA_PTR_SET_RVALUE(rootTaskIds_, rootTaskIds) };


    // runPolicy Field Functions 
    bool hasRunPolicy() const { return this->runPolicy_ != nullptr;};
    void deleteRunPolicy() { this->runPolicy_ = nullptr;};
    inline const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy & runPolicy() const { DARABONBA_PTR_GET_CONST(runPolicy_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy) };
    inline Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy runPolicy() { DARABONBA_PTR_GET(runPolicy_, Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setRunPolicy(const Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy & runPolicy) { DARABONBA_PTR_SET_VALUE(runPolicy_, runPolicy) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setRunPolicy(Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy && runPolicy) { DARABONBA_PTR_SET_RVALUE(runPolicy_, runPolicy) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline string runtimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
    inline CreateWorkflowInstancesRequestDefaultRunProperties& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


  protected:
    // The alert settings.
    std::shared_ptr<Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAlert> alert_ = nullptr;
    // The analysis configuration. Required when Type is set to SupplementData.
    std::shared_ptr<Models::CreateWorkflowInstancesRequestDefaultRunPropertiesAnalysis> analysis_ = nullptr;
    // The IDs of the projects not to run.
    std::shared_ptr<vector<int64_t>> excludeProjectIds_ = nullptr;
    // The IDs of the tasks not to run.
    std::shared_ptr<vector<int64_t>> excludeTaskIds_ = nullptr;
    // The IDs of the projects to run.
    std::shared_ptr<vector<int64_t>> includeProjectIds_ = nullptr;
    // The IDs of the tasks to run.
    std::shared_ptr<vector<int64_t>> includeTaskIds_ = nullptr;
    // The data backfill mode. Default value: ManualSelection. Required when Type is set to SupplementData.
    // 
    // *   General: You can specify only one value for `RootTaskIds`. The `IncludeTaskIds` parameter is optional. If it\\"s not specified, it defaults to including `RootTaskIds`.
    // *   ManualSelection: You can specify multiple values for `RootTaskIds`. The `IncludeTaskIds` parameter is optional. If it is not specified, it defaults to including `RootTaskIds`.
    // *   Chain: If you set the Mode parameter to Chain, leave the `RootTaskIds` parameter empty and set the `IncludeTaskIds` parameter to the start task ID and the end task ID.
    // *   AllDownstream: Only one `RootTaskId` can be specified.
    std::shared_ptr<string> mode_ = nullptr;
    // The execution order. Default value: Asc.
    // 
    // *   Asc: ascending by business date.
    // *   Desc: descending by business date.
    std::shared_ptr<string> order_ = nullptr;
    // The task concurrency. Values from 2 to 10 indicate concurrency. A value of 1 indicates sequential execution. Required when Type = SupplementData.
    std::shared_ptr<int32_t> parallelism_ = nullptr;
    // The execution priority, range: 1–11. A higher value indicates higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The priority weighting policy.
    // 
    // *   `Disable` (default): Do not enable.
    // *   `Upstream`: The priority is based on the total weight of upstream nodes. The deeper the hierarchy, the higher the weight.
    std::shared_ptr<string> priorityWeightStrategy_ = nullptr;
    // The list of root task IDs.
    // 
    // *   When Type is set to SupplementData, RootTaskIds is required unless Mode is set to Chain.
    // *   When Type is set to ManualWorkflow, RootTaskIds is optional. If it is not specified, the default root nodes of the manual workflow are used.
    // *   When Type is set to Manual, RootTaskIds is required and specifies the list of manual tasks to run.
    // *   When Type is set to SmokeTest, RootTaskIds is required and specifies the list of test tasks to run.
    std::shared_ptr<vector<int64_t>> rootTaskIds_ = nullptr;
    // The run policy. If the parameter is left empty, the task configuration is used.
    std::shared_ptr<Models::CreateWorkflowInstancesRequestDefaultRunPropertiesRunPolicy> runPolicy_ = nullptr;
    // Custom scheduling resource group ID. If left empty, the task configuration is used.
    std::shared_ptr<string> runtimeResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
