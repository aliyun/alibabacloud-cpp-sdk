// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RerunWorkflowInstancesRequestFilter.hpp>
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
    virtual bool empty() const override { return this->bizdate_ == nullptr
        && return this->endTriggerTime_ == nullptr && return this->envType_ == nullptr && return this->filter_ == nullptr && return this->ids_ == nullptr && return this->name_ == nullptr
        && return this->projectId_ == nullptr && return this->startTriggerTime_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->workflowId_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline RerunWorkflowInstancesRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // endTriggerTime Field Functions 
    bool hasEndTriggerTime() const { return this->endTriggerTime_ != nullptr;};
    void deleteEndTriggerTime() { this->endTriggerTime_ = nullptr;};
    inline int64_t endTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(endTriggerTime_, 0L) };
    inline RerunWorkflowInstancesRequest& setEndTriggerTime(int64_t endTriggerTime) { DARABONBA_PTR_SET_VALUE(endTriggerTime_, endTriggerTime) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline RerunWorkflowInstancesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const RerunWorkflowInstancesRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, RerunWorkflowInstancesRequestFilter) };
    inline RerunWorkflowInstancesRequestFilter filter() { DARABONBA_PTR_GET(filter_, RerunWorkflowInstancesRequestFilter) };
    inline RerunWorkflowInstancesRequest& setFilter(const RerunWorkflowInstancesRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline RerunWorkflowInstancesRequest& setFilter(RerunWorkflowInstancesRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline RerunWorkflowInstancesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline RerunWorkflowInstancesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RerunWorkflowInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RerunWorkflowInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTriggerTime Field Functions 
    bool hasStartTriggerTime() const { return this->startTriggerTime_ != nullptr;};
    void deleteStartTriggerTime() { this->startTriggerTime_ = nullptr;};
    inline int64_t startTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(startTriggerTime_, 0L) };
    inline RerunWorkflowInstancesRequest& setStartTriggerTime(int64_t startTriggerTime) { DARABONBA_PTR_SET_VALUE(startTriggerTime_, startTriggerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RerunWorkflowInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RerunWorkflowInstancesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline RerunWorkflowInstancesRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The business date used for matching manual workflow instances.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The end trigger time of the manual workflow instance used for matching. This parameter must be used together with the StartTriggerTime.
    std::shared_ptr<int64_t> endTriggerTime_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // Prod Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The match conditions for internal instances of manual workflow instances.
    std::shared_ptr<RerunWorkflowInstancesRequestFilter> filter_ = nullptr;
    // The instance IDs used for matching manual workflow instances.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The manual workflow name, used for fuzzy matching.
    std::shared_ptr<string> name_ = nullptr;
    // The project ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The start trigger time (creation time) of the manual workflow instance used for matching. This parameter must be used together with EndTriggerTime.
    std::shared_ptr<int64_t> startTriggerTime_ = nullptr;
    // The status used for matching manual workflow instances.
    // 
    // Valid values:
    // 
    // *   Success
    // *   Failure
    std::shared_ptr<string> status_ = nullptr;
    // The type of the workflow instance. Valid values:
    // 
    // ManualWorkflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The workflow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
