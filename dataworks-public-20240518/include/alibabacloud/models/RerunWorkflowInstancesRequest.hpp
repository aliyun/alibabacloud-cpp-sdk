// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RerunWorkflowInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(EndTriggerTime, endTriggerTime_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartTriggerTime, startTriggerTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, RerunWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(EndTriggerTime, endTriggerTime_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartTriggerTime, startTriggerTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    RerunWorkflowInstancesRequest() = default ;
    RerunWorkflowInstancesRequest(const RerunWorkflowInstancesRequest &) = default ;
    RerunWorkflowInstancesRequest(RerunWorkflowInstancesRequest &&) = default ;
    RerunWorkflowInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunWorkflowInstancesRequest() = default ;
    RerunWorkflowInstancesRequest& operator=(const RerunWorkflowInstancesRequest &) = default ;
    RerunWorkflowInstancesRequest& operator=(RerunWorkflowInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(RerunDownstreamEnabled, rerunDownstreamEnabled_);
        DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_TO_JSON(TaskInstanceStatuses, taskInstanceStatuses_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(RerunDownstreamEnabled, rerunDownstreamEnabled_);
        DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_FROM_JSON(TaskInstanceStatuses, taskInstanceStatuses_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rerunDownstreamEnabled_ == nullptr
        && this->taskIds_ == nullptr && this->taskInstanceStatuses_ == nullptr && this->taskName_ == nullptr && this->taskTypes_ == nullptr; };
      // rerunDownstreamEnabled Field Functions 
      bool hasRerunDownstreamEnabled() const { return this->rerunDownstreamEnabled_ != nullptr;};
      void deleteRerunDownstreamEnabled() { this->rerunDownstreamEnabled_ = nullptr;};
      inline bool getRerunDownstreamEnabled() const { DARABONBA_PTR_GET_DEFAULT(rerunDownstreamEnabled_, false) };
      inline Filter& setRerunDownstreamEnabled(bool rerunDownstreamEnabled) { DARABONBA_PTR_SET_VALUE(rerunDownstreamEnabled_, rerunDownstreamEnabled) };


      // taskIds Field Functions 
      bool hasTaskIds() const { return this->taskIds_ != nullptr;};
      void deleteTaskIds() { this->taskIds_ = nullptr;};
      inline const vector<int64_t> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
      inline vector<int64_t> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
      inline Filter& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
      inline Filter& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


      // taskInstanceStatuses Field Functions 
      bool hasTaskInstanceStatuses() const { return this->taskInstanceStatuses_ != nullptr;};
      void deleteTaskInstanceStatuses() { this->taskInstanceStatuses_ = nullptr;};
      inline const vector<string> & getTaskInstanceStatuses() const { DARABONBA_PTR_GET_CONST(taskInstanceStatuses_, vector<string>) };
      inline vector<string> getTaskInstanceStatuses() { DARABONBA_PTR_GET(taskInstanceStatuses_, vector<string>) };
      inline Filter& setTaskInstanceStatuses(const vector<string> & taskInstanceStatuses) { DARABONBA_PTR_SET_VALUE(taskInstanceStatuses_, taskInstanceStatuses) };
      inline Filter& setTaskInstanceStatuses(vector<string> && taskInstanceStatuses) { DARABONBA_PTR_SET_RVALUE(taskInstanceStatuses_, taskInstanceStatuses) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Filter& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskTypes Field Functions 
      bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
      void deleteTaskTypes() { this->taskTypes_ = nullptr;};
      inline const vector<string> & getTaskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<string>) };
      inline vector<string> getTaskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<string>) };
      inline Filter& setTaskTypes(const vector<string> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
      inline Filter& setTaskTypes(vector<string> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


    protected:
      // Specifies whether to rerun the matched instances and all downstream instances.
      shared_ptr<bool> rerunDownstreamEnabled_ {};
      // The internal task IDs used for matching manual workflow instances.
      shared_ptr<vector<int64_t>> taskIds_ {};
      // The statuses of internal tasks used for matching manual workflow instances.
      shared_ptr<vector<string>> taskInstanceStatuses_ {};
      // The internal task name used for matching the manual workflow instance.
      shared_ptr<string> taskName_ {};
      // Match internal tasks within the manual workflow by type.
      shared_ptr<vector<string>> taskTypes_ {};
    };

    virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->endTriggerTime_ == nullptr && this->envType_ == nullptr && this->filter_ == nullptr && this->ids_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->startTriggerTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->workflowId_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline RerunWorkflowInstancesRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // endTriggerTime Field Functions 
    bool hasEndTriggerTime() const { return this->endTriggerTime_ != nullptr;};
    void deleteEndTriggerTime() { this->endTriggerTime_ = nullptr;};
    inline int64_t getEndTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(endTriggerTime_, 0L) };
    inline RerunWorkflowInstancesRequest& setEndTriggerTime(int64_t endTriggerTime) { DARABONBA_PTR_SET_VALUE(endTriggerTime_, endTriggerTime) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline RerunWorkflowInstancesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const RerunWorkflowInstancesRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, RerunWorkflowInstancesRequest::Filter) };
    inline RerunWorkflowInstancesRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, RerunWorkflowInstancesRequest::Filter) };
    inline RerunWorkflowInstancesRequest& setFilter(const RerunWorkflowInstancesRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline RerunWorkflowInstancesRequest& setFilter(RerunWorkflowInstancesRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline RerunWorkflowInstancesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline RerunWorkflowInstancesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RerunWorkflowInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RerunWorkflowInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTriggerTime Field Functions 
    bool hasStartTriggerTime() const { return this->startTriggerTime_ != nullptr;};
    void deleteStartTriggerTime() { this->startTriggerTime_ = nullptr;};
    inline int64_t getStartTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(startTriggerTime_, 0L) };
    inline RerunWorkflowInstancesRequest& setStartTriggerTime(int64_t startTriggerTime) { DARABONBA_PTR_SET_VALUE(startTriggerTime_, startTriggerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RerunWorkflowInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RerunWorkflowInstancesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline RerunWorkflowInstancesRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The business date used for matching manual workflow instances.
    shared_ptr<int64_t> bizdate_ {};
    // The end trigger time of the manual workflow instance used for matching. This parameter must be used together with the StartTriggerTime.
    shared_ptr<int64_t> endTriggerTime_ {};
    // The environment of the workspace. Valid values:
    // 
    // Prod Dev
    shared_ptr<string> envType_ {};
    // The match conditions for internal instances of manual workflow instances.
    shared_ptr<RerunWorkflowInstancesRequest::Filter> filter_ {};
    // The instance IDs used for matching manual workflow instances.
    shared_ptr<vector<int64_t>> ids_ {};
    // The manual workflow name, used for fuzzy matching.
    shared_ptr<string> name_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The start trigger time (creation time) of the manual workflow instance used for matching. This parameter must be used together with EndTriggerTime.
    shared_ptr<int64_t> startTriggerTime_ {};
    // The status used for matching manual workflow instances.
    // 
    // Valid values:
    // 
    // *   Success
    // *   Failure
    shared_ptr<string> status_ {};
    // The type of the workflow instance. Valid values:
    // 
    // ManualWorkflow.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The workflow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
