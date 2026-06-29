// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLETASK_HPP_
#define ALIBABACLOUD_MODELS_SIMPLETASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SimpleUser.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SimpleTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleTask& obj) { 
      DARABONBA_PTR_TO_JSON(Archived, archived_);
      DARABONBA_PTR_TO_JSON(ArchivedInfos, archivedInfos_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LabelStyle, labelStyle_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(RefTaskId, refTaskId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
      DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Archived, archived_);
      DARABONBA_PTR_FROM_JSON(ArchivedInfos, archivedInfos_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LabelStyle, labelStyle_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(RefTaskId, refTaskId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
      DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
    };
    SimpleTask() = default ;
    SimpleTask(const SimpleTask &) = default ;
    SimpleTask(SimpleTask &&) = default ;
    SimpleTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleTask() = default ;
    SimpleTask& operator=(const SimpleTask &) = default ;
    SimpleTask& operator=(SimpleTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archived_ == nullptr
        && this->archivedInfos_ == nullptr && this->creator_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->labelStyle_ == nullptr
        && this->modifier_ == nullptr && this->refTaskId_ == nullptr && this->remark_ == nullptr && this->stage_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->templateId_ == nullptr
        && this->tenantId_ == nullptr && this->UUID_ == nullptr && this->workflowNodes_ == nullptr; };
    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool getArchived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline SimpleTask& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // archivedInfos Field Functions 
    bool hasArchivedInfos() const { return this->archivedInfos_ != nullptr;};
    void deleteArchivedInfos() { this->archivedInfos_ = nullptr;};
    inline string getArchivedInfos() const { DARABONBA_PTR_GET_DEFAULT(archivedInfos_, "") };
    inline SimpleTask& setArchivedInfos(string archivedInfos) { DARABONBA_PTR_SET_VALUE(archivedInfos_, archivedInfos) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const SimpleUser & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, SimpleUser) };
    inline SimpleUser getCreator() { DARABONBA_PTR_GET(creator_, SimpleUser) };
    inline SimpleTask& setCreator(const SimpleUser & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline SimpleTask& setCreator(SimpleUser && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline SimpleTask& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline SimpleTask& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labelStyle Field Functions 
    bool hasLabelStyle() const { return this->labelStyle_ != nullptr;};
    void deleteLabelStyle() { this->labelStyle_ = nullptr;};
    inline string getLabelStyle() const { DARABONBA_PTR_GET_DEFAULT(labelStyle_, "") };
    inline SimpleTask& setLabelStyle(string labelStyle) { DARABONBA_PTR_SET_VALUE(labelStyle_, labelStyle) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const SimpleUser & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, SimpleUser) };
    inline SimpleUser getModifier() { DARABONBA_PTR_GET(modifier_, SimpleUser) };
    inline SimpleTask& setModifier(const SimpleUser & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline SimpleTask& setModifier(SimpleUser && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // refTaskId Field Functions 
    bool hasRefTaskId() const { return this->refTaskId_ != nullptr;};
    void deleteRefTaskId() { this->refTaskId_ = nullptr;};
    inline string getRefTaskId() const { DARABONBA_PTR_GET_DEFAULT(refTaskId_, "") };
    inline SimpleTask& setRefTaskId(string refTaskId) { DARABONBA_PTR_SET_VALUE(refTaskId_, refTaskId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SimpleTask& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline SimpleTask& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SimpleTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline SimpleTask& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SimpleTask& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SimpleTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline SimpleTask& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SimpleTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SimpleTask& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SimpleTask& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline SimpleTask& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


    // workflowNodes Field Functions 
    bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
    void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
    inline const vector<string> & getWorkflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, vector<string>) };
    inline vector<string> getWorkflowNodes() { DARABONBA_PTR_GET(workflowNodes_, vector<string>) };
    inline SimpleTask& setWorkflowNodes(const vector<string> & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
    inline SimpleTask& setWorkflowNodes(vector<string> && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


  protected:
    // Indicates whether the job is archived. Possible values:  
    // - false: Not archived.  
    // - true: Archived.
    shared_ptr<bool> archived_ {};
    // Data archiving information.
    shared_ptr<string> archivedInfos_ {};
    // Creator information.
    shared_ptr<SimpleUser> creator_ {};
    // UTC creation time.
    shared_ptr<string> gmtCreateTime_ {};
    // UTC time of the last update.
    shared_ptr<string> gmtModifiedTime_ {};
    // Label style.
    shared_ptr<string> labelStyle_ {};
    // Updated By information.
    shared_ptr<SimpleUser> modifier_ {};
    // Auto triggered task ID.
    shared_ptr<string> refTaskId_ {};
    // Remarks.
    shared_ptr<string> remark_ {};
    // Current streaming node. Possible values:  
    // - MARK: Annotating.  
    // - CHECK: Checking.  
    // - FINISHED: Completed.
    shared_ptr<string> stage_ {};
    // Task Status. Possible values:  
    // - CREATED  
    // - SUCCESS
    shared_ptr<string> status_ {};
    // List of job labels.
    shared_ptr<vector<string>> tags_ {};
    // Job ID.
    shared_ptr<string> taskId_ {};
    // Job name.
    shared_ptr<string> taskName_ {};
    // Task Type.
    shared_ptr<string> taskType_ {};
    // Template ID.
    shared_ptr<string> templateId_ {};
    // Tenant ID.
    shared_ptr<string> tenantId_ {};
    // UUID.
    shared_ptr<string> UUID_ {};
    // Pipeline nodes.
    shared_ptr<vector<string>> workflowNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
