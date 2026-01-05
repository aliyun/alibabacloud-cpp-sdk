// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERUNWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RerunWorkflowInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerunWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(EndTriggerTime, endTriggerTime_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartTriggerTime, startTriggerTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, RerunWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(EndTriggerTime, endTriggerTime_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartTriggerTime, startTriggerTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    RerunWorkflowInstancesShrinkRequest() = default ;
    RerunWorkflowInstancesShrinkRequest(const RerunWorkflowInstancesShrinkRequest &) = default ;
    RerunWorkflowInstancesShrinkRequest(RerunWorkflowInstancesShrinkRequest &&) = default ;
    RerunWorkflowInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerunWorkflowInstancesShrinkRequest() = default ;
    RerunWorkflowInstancesShrinkRequest& operator=(const RerunWorkflowInstancesShrinkRequest &) = default ;
    RerunWorkflowInstancesShrinkRequest& operator=(RerunWorkflowInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->endTriggerTime_ == nullptr && this->envType_ == nullptr && this->filterShrink_ == nullptr && this->idsShrink_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->startTriggerTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->workflowId_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline RerunWorkflowInstancesShrinkRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // endTriggerTime Field Functions 
    bool hasEndTriggerTime() const { return this->endTriggerTime_ != nullptr;};
    void deleteEndTriggerTime() { this->endTriggerTime_ = nullptr;};
    inline int64_t getEndTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(endTriggerTime_, 0L) };
    inline RerunWorkflowInstancesShrinkRequest& setEndTriggerTime(int64_t endTriggerTime) { DARABONBA_PTR_SET_VALUE(endTriggerTime_, endTriggerTime) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RerunWorkflowInstancesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTriggerTime Field Functions 
    bool hasStartTriggerTime() const { return this->startTriggerTime_ != nullptr;};
    void deleteStartTriggerTime() { this->startTriggerTime_ = nullptr;};
    inline int64_t getStartTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(startTriggerTime_, 0L) };
    inline RerunWorkflowInstancesShrinkRequest& setStartTriggerTime(int64_t startTriggerTime) { DARABONBA_PTR_SET_VALUE(startTriggerTime_, startTriggerTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RerunWorkflowInstancesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline RerunWorkflowInstancesShrinkRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


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
    shared_ptr<string> filterShrink_ {};
    // The instance IDs used for matching manual workflow instances.
    shared_ptr<string> idsShrink_ {};
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
