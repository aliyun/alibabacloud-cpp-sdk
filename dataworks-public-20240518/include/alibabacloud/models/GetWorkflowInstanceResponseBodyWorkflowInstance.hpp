// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYWORKFLOWINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYWORKFLOWINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyWorkflowInstanceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowInstanceResponseBodyWorkflowInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBodyWorkflowInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
      DARABONBA_PTR_TO_JSON(WorkflowTaskInstanceId, workflowTaskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBodyWorkflowInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
      DARABONBA_PTR_FROM_JSON(WorkflowTaskInstanceId, workflowTaskInstanceId_);
    };
    GetWorkflowInstanceResponseBodyWorkflowInstance() = default ;
    GetWorkflowInstanceResponseBodyWorkflowInstance(const GetWorkflowInstanceResponseBodyWorkflowInstance &) = default ;
    GetWorkflowInstanceResponseBodyWorkflowInstance(GetWorkflowInstanceResponseBodyWorkflowInstance &&) = default ;
    GetWorkflowInstanceResponseBodyWorkflowInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBodyWorkflowInstance() = default ;
    GetWorkflowInstanceResponseBodyWorkflowInstance& operator=(const GetWorkflowInstanceResponseBodyWorkflowInstance &) = default ;
    GetWorkflowInstanceResponseBodyWorkflowInstance& operator=(GetWorkflowInstanceResponseBodyWorkflowInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizDate_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->envType_ == nullptr && return this->finishedTime_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->projectId_ == nullptr
        && return this->startedTime_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->type_ == nullptr && return this->unifiedWorkflowInstanceId_ == nullptr
        && return this->workflowId_ == nullptr && return this->workflowParameters_ == nullptr && return this->workflowTaskInstanceId_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline int64_t finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags>) };
    inline vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags>) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setTags(const vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setTags(vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unifiedWorkflowInstanceId Field Functions 
    bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
    void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
    inline int64_t unifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline string workflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


    // workflowTaskInstanceId Field Functions 
    bool hasWorkflowTaskInstanceId() const { return this->workflowTaskInstanceId_ != nullptr;};
    void deleteWorkflowTaskInstanceId() { this->workflowTaskInstanceId_ = nullptr;};
    inline int64_t workflowTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowTaskInstanceId_, 0L) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance& setWorkflowTaskInstanceId(int64_t workflowTaskInstanceId) { DARABONBA_PTR_SET_VALUE(workflowTaskInstanceId_, workflowTaskInstanceId) };


  protected:
    // The data timestamp.
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The account ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The time when the instance finished running.
    std::shared_ptr<int64_t> finishedTime_ = nullptr;
    // The ID of the workflow instance.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The account ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name of the workflow instance.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The time when the instance started to run.
    std::shared_ptr<int64_t> startedTime_ = nullptr;
    // The status of the workflow instance. Valid values:
    // 
    // *   NotRun: The instance is not run.
    // *   Running: The instance is running.
    // *   WaitTime: The instance is waiting for the scheduling time to arrive.
    // *   CheckingCondition: Branch conditions are being checked for the instance.
    // *   WaitResource: The instance is waiting for resources.
    // *   Failure: The instance fails to be run.
    // *   Success: The instance is successfully run.
    // *   Checking: Data quality is being checked for the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The task tag.
    std::shared_ptr<vector<Models::GetWorkflowInstanceResponseBodyWorkflowInstanceTags>> tags_ = nullptr;
    // The type of the workflow instance. Valid values:
    // 
    // *   Normal: Scheduled execution
    // *   Manual: Manually triggered node
    // *   SmokeTest: Testing
    // *   SupplementData: Data backfill
    // *   ManualWorkflow: Manually triggered workflow
    // *   TriggerWorkflow: Triggered Workflow
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> unifiedWorkflowInstanceId_ = nullptr;
    // The ID of the workflow to which the instance belongs.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    // The workflow parameters.
    std::shared_ptr<string> workflowParameters_ = nullptr;
    std::shared_ptr<int64_t> workflowTaskInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
