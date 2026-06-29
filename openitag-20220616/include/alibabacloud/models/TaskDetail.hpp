// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_TASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Admins, admins_);
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(AllowAppendData, allowAppendData_);
      DARABONBA_PTR_TO_JSON(Archived, archived_);
      DARABONBA_PTR_TO_JSON(ArchivedInfos, archivedInfos_);
      DARABONBA_ANY_TO_JSON(AssignConfig, assignConfig_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DatasetProxyRelations, datasetProxyRelations_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LabelStyle, labelStyle_);
      DARABONBA_ANY_TO_JSON(MineConfigs, mineConfigs_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_ANY_TO_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_ANY_TO_JSON(PeriodConfig, periodConfig_);
      DARABONBA_PTR_TO_JSON(RefTaskId, refTaskId_);
      DARABONBA_ANY_TO_JSON(RelateTaskConfig, relateTaskConfig_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_ANY_TO_JSON(ResultCallbackConfig, resultCallbackConfig_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskTemplateConfig, taskTemplateConfig_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskWorkflow, taskWorkflow_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
      DARABONBA_ANY_TO_JSON(VoteConfigs, voteConfigs_);
      DARABONBA_PTR_TO_JSON(WorkflowNodes, workflowNodes_);
      DARABONBA_PTR_TO_JSON(runMsg, runMsg_);
    };
    friend void from_json(const Darabonba::Json& j, TaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Admins, admins_);
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(AllowAppendData, allowAppendData_);
      DARABONBA_PTR_FROM_JSON(Archived, archived_);
      DARABONBA_PTR_FROM_JSON(ArchivedInfos, archivedInfos_);
      DARABONBA_ANY_FROM_JSON(AssignConfig, assignConfig_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DatasetProxyRelations, datasetProxyRelations_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LabelStyle, labelStyle_);
      DARABONBA_ANY_FROM_JSON(MineConfigs, mineConfigs_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_ANY_FROM_JSON(NoticeConfig, noticeConfig_);
      DARABONBA_ANY_FROM_JSON(PeriodConfig, periodConfig_);
      DARABONBA_PTR_FROM_JSON(RefTaskId, refTaskId_);
      DARABONBA_ANY_FROM_JSON(RelateTaskConfig, relateTaskConfig_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_ANY_FROM_JSON(ResultCallbackConfig, resultCallbackConfig_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskTemplateConfig, taskTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskWorkflow, taskWorkflow_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
      DARABONBA_ANY_FROM_JSON(VoteConfigs, voteConfigs_);
      DARABONBA_PTR_FROM_JSON(WorkflowNodes, workflowNodes_);
      DARABONBA_PTR_FROM_JSON(runMsg, runMsg_);
    };
    TaskDetail() = default ;
    TaskDetail(const TaskDetail &) = default ;
    TaskDetail(TaskDetail &&) = default ;
    TaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskDetail() = default ;
    TaskDetail& operator=(const TaskDetail &) = default ;
    TaskDetail& operator=(TaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskWorkflow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskWorkflow& obj) { 
        DARABONBA_ANY_TO_JSON(Exif, exif_);
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, TaskWorkflow& obj) { 
        DARABONBA_ANY_FROM_JSON(Exif, exif_);
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      TaskWorkflow() = default ;
      TaskWorkflow(const TaskWorkflow &) = default ;
      TaskWorkflow(TaskWorkflow &&) = default ;
      TaskWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskWorkflow() = default ;
      TaskWorkflow& operator=(const TaskWorkflow &) = default ;
      TaskWorkflow& operator=(TaskWorkflow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exif_ == nullptr
        && this->groups_ == nullptr && this->nodeName_ == nullptr && this->users_ == nullptr; };
      // exif Field Functions 
      bool hasExif() const { return this->exif_ != nullptr;};
      void deleteExif() { this->exif_ = nullptr;};
      inline       const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
      Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
      inline TaskWorkflow& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
      inline TaskWorkflow& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<string> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<string>) };
      inline vector<string> getGroups() { DARABONBA_PTR_GET(groups_, vector<string>) };
      inline TaskWorkflow& setGroups(const vector<string> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline TaskWorkflow& setGroups(vector<string> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline TaskWorkflow& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<SimpleUser> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<SimpleUser>) };
      inline vector<SimpleUser> getUsers() { DARABONBA_PTR_GET(users_, vector<SimpleUser>) };
      inline TaskWorkflow& setUsers(const vector<SimpleUser> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline TaskWorkflow& setUsers(vector<SimpleUser> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // Extra information.
      Darabonba::Json exif_ {};
      // Group list.
      shared_ptr<vector<string>> groups_ {};
      // Edge zone name. Possible values:  
      // - MARK  
      // - CHECK  
      // - SAMPLING
      shared_ptr<string> nodeName_ {};
      // User List.
      shared_ptr<vector<SimpleUser>> users_ {};
    };

    class TaskTemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskTemplateConfig& obj) { 
        DARABONBA_ANY_TO_JSON(Exif, exif_);
        DARABONBA_PTR_TO_JSON(ResourceKey, resourceKey_);
        DARABONBA_ANY_TO_JSON(RobotConfig, robotConfig_);
        DARABONBA_PTR_TO_JSON(SelectQuestions, selectQuestions_);
        DARABONBA_ANY_TO_JSON(TemplateOptionMap, templateOptionMap_);
        DARABONBA_PTR_TO_JSON(TemplateRelationId, templateRelationId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskTemplateConfig& obj) { 
        DARABONBA_ANY_FROM_JSON(Exif, exif_);
        DARABONBA_PTR_FROM_JSON(ResourceKey, resourceKey_);
        DARABONBA_ANY_FROM_JSON(RobotConfig, robotConfig_);
        DARABONBA_PTR_FROM_JSON(SelectQuestions, selectQuestions_);
        DARABONBA_ANY_FROM_JSON(TemplateOptionMap, templateOptionMap_);
        DARABONBA_PTR_FROM_JSON(TemplateRelationId, templateRelationId_);
      };
      TaskTemplateConfig() = default ;
      TaskTemplateConfig(const TaskTemplateConfig &) = default ;
      TaskTemplateConfig(TaskTemplateConfig &&) = default ;
      TaskTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskTemplateConfig() = default ;
      TaskTemplateConfig& operator=(const TaskTemplateConfig &) = default ;
      TaskTemplateConfig& operator=(TaskTemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exif_ == nullptr
        && this->resourceKey_ == nullptr && this->robotConfig_ == nullptr && this->selectQuestions_ == nullptr && this->templateOptionMap_ == nullptr && this->templateRelationId_ == nullptr; };
      // exif Field Functions 
      bool hasExif() const { return this->exif_ != nullptr;};
      void deleteExif() { this->exif_ = nullptr;};
      inline       const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
      Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
      inline TaskTemplateConfig& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
      inline TaskTemplateConfig& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


      // resourceKey Field Functions 
      bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
      void deleteResourceKey() { this->resourceKey_ = nullptr;};
      inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
      inline TaskTemplateConfig& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


      // robotConfig Field Functions 
      bool hasRobotConfig() const { return this->robotConfig_ != nullptr;};
      void deleteRobotConfig() { this->robotConfig_ = nullptr;};
      inline       const Darabonba::Json & getRobotConfig() const { DARABONBA_GET(robotConfig_) };
      Darabonba::Json & getRobotConfig() { DARABONBA_GET(robotConfig_) };
      inline TaskTemplateConfig& setRobotConfig(const Darabonba::Json & robotConfig) { DARABONBA_SET_VALUE(robotConfig_, robotConfig) };
      inline TaskTemplateConfig& setRobotConfig(Darabonba::Json && robotConfig) { DARABONBA_SET_RVALUE(robotConfig_, robotConfig) };


      // selectQuestions Field Functions 
      bool hasSelectQuestions() const { return this->selectQuestions_ != nullptr;};
      void deleteSelectQuestions() { this->selectQuestions_ = nullptr;};
      inline const vector<string> & getSelectQuestions() const { DARABONBA_PTR_GET_CONST(selectQuestions_, vector<string>) };
      inline vector<string> getSelectQuestions() { DARABONBA_PTR_GET(selectQuestions_, vector<string>) };
      inline TaskTemplateConfig& setSelectQuestions(const vector<string> & selectQuestions) { DARABONBA_PTR_SET_VALUE(selectQuestions_, selectQuestions) };
      inline TaskTemplateConfig& setSelectQuestions(vector<string> && selectQuestions) { DARABONBA_PTR_SET_RVALUE(selectQuestions_, selectQuestions) };


      // templateOptionMap Field Functions 
      bool hasTemplateOptionMap() const { return this->templateOptionMap_ != nullptr;};
      void deleteTemplateOptionMap() { this->templateOptionMap_ = nullptr;};
      inline       const Darabonba::Json & getTemplateOptionMap() const { DARABONBA_GET(templateOptionMap_) };
      Darabonba::Json & getTemplateOptionMap() { DARABONBA_GET(templateOptionMap_) };
      inline TaskTemplateConfig& setTemplateOptionMap(const Darabonba::Json & templateOptionMap) { DARABONBA_SET_VALUE(templateOptionMap_, templateOptionMap) };
      inline TaskTemplateConfig& setTemplateOptionMap(Darabonba::Json && templateOptionMap) { DARABONBA_SET_RVALUE(templateOptionMap_, templateOptionMap) };


      // templateRelationId Field Functions 
      bool hasTemplateRelationId() const { return this->templateRelationId_ != nullptr;};
      void deleteTemplateRelationId() { this->templateRelationId_ = nullptr;};
      inline string getTemplateRelationId() const { DARABONBA_PTR_GET_DEFAULT(templateRelationId_, "") };
      inline TaskTemplateConfig& setTemplateRelationId(string templateRelationId) { DARABONBA_PTR_SET_VALUE(templateRelationId_, templateRelationId) };


    protected:
      // Additional information for template configuration.
      Darabonba::Json exif_ {};
      // Resource key.
      shared_ptr<string> resourceKey_ {};
      // Robot configuration.
      Darabonba::Json robotConfig_ {};
      // If the number of questions in the Job is less than that in the template, you can select the required questions from the List.
      shared_ptr<vector<string>> selectQuestions_ {};
      // Options configuration.
      Darabonba::Json templateOptionMap_ {};
      // Template relation ID.
      shared_ptr<string> templateRelationId_ {};
    };

    class DatasetProxyRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatasetProxyRelations& obj) { 
        DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
        DARABONBA_ANY_TO_JSON(Exif, exif_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceBizId, sourceBizId_);
        DARABONBA_PTR_TO_JSON(SourceDatasetId, sourceDatasetId_);
      };
      friend void from_json(const Darabonba::Json& j, DatasetProxyRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
        DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
        DARABONBA_ANY_FROM_JSON(Exif, exif_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceBizId, sourceBizId_);
        DARABONBA_PTR_FROM_JSON(SourceDatasetId, sourceDatasetId_);
      };
      DatasetProxyRelations() = default ;
      DatasetProxyRelations(const DatasetProxyRelations &) = default ;
      DatasetProxyRelations(DatasetProxyRelations &&) = default ;
      DatasetProxyRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatasetProxyRelations() = default ;
      DatasetProxyRelations& operator=(const DatasetProxyRelations &) = default ;
      DatasetProxyRelations& operator=(DatasetProxyRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetType_ == nullptr && this->exif_ == nullptr && this->source_ == nullptr && this->sourceBizId_ == nullptr && this->sourceDatasetId_ == nullptr; };
      // datasetId Field Functions 
      bool hasDatasetId() const { return this->datasetId_ != nullptr;};
      void deleteDatasetId() { this->datasetId_ = nullptr;};
      inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
      inline DatasetProxyRelations& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


      // datasetType Field Functions 
      bool hasDatasetType() const { return this->datasetType_ != nullptr;};
      void deleteDatasetType() { this->datasetType_ = nullptr;};
      inline string getDatasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
      inline DatasetProxyRelations& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


      // exif Field Functions 
      bool hasExif() const { return this->exif_ != nullptr;};
      void deleteExif() { this->exif_ = nullptr;};
      inline       const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
      Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
      inline DatasetProxyRelations& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
      inline DatasetProxyRelations& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline DatasetProxyRelations& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceBizId Field Functions 
      bool hasSourceBizId() const { return this->sourceBizId_ != nullptr;};
      void deleteSourceBizId() { this->sourceBizId_ = nullptr;};
      inline string getSourceBizId() const { DARABONBA_PTR_GET_DEFAULT(sourceBizId_, "") };
      inline DatasetProxyRelations& setSourceBizId(string sourceBizId) { DARABONBA_PTR_SET_VALUE(sourceBizId_, sourceBizId) };


      // sourceDatasetId Field Functions 
      bool hasSourceDatasetId() const { return this->sourceDatasetId_ != nullptr;};
      void deleteSourceDatasetId() { this->sourceDatasetId_ = nullptr;};
      inline string getSourceDatasetId() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasetId_, "") };
      inline DatasetProxyRelations& setSourceDatasetId(string sourceDatasetId) { DARABONBA_PTR_SET_VALUE(sourceDatasetId_, sourceDatasetId) };


    protected:
      // Dataset ID.
      shared_ptr<string> datasetId_ {};
      // Dataset type.
      shared_ptr<string> datasetType_ {};
      // Additional information.
      Darabonba::Json exif_ {};
      // Dataset source.
      shared_ptr<string> source_ {};
      // Source business ID.
      shared_ptr<string> sourceBizId_ {};
      // Source dataset ID.
      shared_ptr<string> sourceDatasetId_ {};
    };

    virtual bool empty() const override { return this->admins_ == nullptr
        && this->alertTime_ == nullptr && this->allowAppendData_ == nullptr && this->archived_ == nullptr && this->archivedInfos_ == nullptr && this->assignConfig_ == nullptr
        && this->creator_ == nullptr && this->datasetProxyRelations_ == nullptr && this->exif_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->labelStyle_ == nullptr && this->mineConfigs_ == nullptr && this->modifier_ == nullptr && this->noticeConfig_ == nullptr && this->periodConfig_ == nullptr
        && this->refTaskId_ == nullptr && this->relateTaskConfig_ == nullptr && this->remark_ == nullptr && this->resultCallbackConfig_ == nullptr && this->stage_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskTemplateConfig_ == nullptr
        && this->taskType_ == nullptr && this->taskWorkflow_ == nullptr && this->templateId_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr
        && this->UUID_ == nullptr && this->voteConfigs_ == nullptr && this->workflowNodes_ == nullptr && this->runMsg_ == nullptr; };
    // admins Field Functions 
    bool hasAdmins() const { return this->admins_ != nullptr;};
    void deleteAdmins() { this->admins_ = nullptr;};
    inline const vector<SimpleUser> & getAdmins() const { DARABONBA_PTR_GET_CONST(admins_, vector<SimpleUser>) };
    inline vector<SimpleUser> getAdmins() { DARABONBA_PTR_GET(admins_, vector<SimpleUser>) };
    inline TaskDetail& setAdmins(const vector<SimpleUser> & admins) { DARABONBA_PTR_SET_VALUE(admins_, admins) };
    inline TaskDetail& setAdmins(vector<SimpleUser> && admins) { DARABONBA_PTR_SET_RVALUE(admins_, admins) };


    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline TaskDetail& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // allowAppendData Field Functions 
    bool hasAllowAppendData() const { return this->allowAppendData_ != nullptr;};
    void deleteAllowAppendData() { this->allowAppendData_ = nullptr;};
    inline bool getAllowAppendData() const { DARABONBA_PTR_GET_DEFAULT(allowAppendData_, false) };
    inline TaskDetail& setAllowAppendData(bool allowAppendData) { DARABONBA_PTR_SET_VALUE(allowAppendData_, allowAppendData) };


    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool getArchived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline TaskDetail& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // archivedInfos Field Functions 
    bool hasArchivedInfos() const { return this->archivedInfos_ != nullptr;};
    void deleteArchivedInfos() { this->archivedInfos_ = nullptr;};
    inline string getArchivedInfos() const { DARABONBA_PTR_GET_DEFAULT(archivedInfos_, "") };
    inline TaskDetail& setArchivedInfos(string archivedInfos) { DARABONBA_PTR_SET_VALUE(archivedInfos_, archivedInfos) };


    // assignConfig Field Functions 
    bool hasAssignConfig() const { return this->assignConfig_ != nullptr;};
    void deleteAssignConfig() { this->assignConfig_ = nullptr;};
    inline     const Darabonba::Json & getAssignConfig() const { DARABONBA_GET(assignConfig_) };
    Darabonba::Json & getAssignConfig() { DARABONBA_GET(assignConfig_) };
    inline TaskDetail& setAssignConfig(const Darabonba::Json & assignConfig) { DARABONBA_SET_VALUE(assignConfig_, assignConfig) };
    inline TaskDetail& setAssignConfig(Darabonba::Json && assignConfig) { DARABONBA_SET_RVALUE(assignConfig_, assignConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const SimpleUser & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, SimpleUser) };
    inline SimpleUser getCreator() { DARABONBA_PTR_GET(creator_, SimpleUser) };
    inline TaskDetail& setCreator(const SimpleUser & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline TaskDetail& setCreator(SimpleUser && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // datasetProxyRelations Field Functions 
    bool hasDatasetProxyRelations() const { return this->datasetProxyRelations_ != nullptr;};
    void deleteDatasetProxyRelations() { this->datasetProxyRelations_ = nullptr;};
    inline const vector<TaskDetail::DatasetProxyRelations> & getDatasetProxyRelations() const { DARABONBA_PTR_GET_CONST(datasetProxyRelations_, vector<TaskDetail::DatasetProxyRelations>) };
    inline vector<TaskDetail::DatasetProxyRelations> getDatasetProxyRelations() { DARABONBA_PTR_GET(datasetProxyRelations_, vector<TaskDetail::DatasetProxyRelations>) };
    inline TaskDetail& setDatasetProxyRelations(const vector<TaskDetail::DatasetProxyRelations> & datasetProxyRelations) { DARABONBA_PTR_SET_VALUE(datasetProxyRelations_, datasetProxyRelations) };
    inline TaskDetail& setDatasetProxyRelations(vector<TaskDetail::DatasetProxyRelations> && datasetProxyRelations) { DARABONBA_PTR_SET_RVALUE(datasetProxyRelations_, datasetProxyRelations) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline TaskDetail& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline TaskDetail& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline TaskDetail& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline TaskDetail& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labelStyle Field Functions 
    bool hasLabelStyle() const { return this->labelStyle_ != nullptr;};
    void deleteLabelStyle() { this->labelStyle_ = nullptr;};
    inline string getLabelStyle() const { DARABONBA_PTR_GET_DEFAULT(labelStyle_, "") };
    inline TaskDetail& setLabelStyle(string labelStyle) { DARABONBA_PTR_SET_VALUE(labelStyle_, labelStyle) };


    // mineConfigs Field Functions 
    bool hasMineConfigs() const { return this->mineConfigs_ != nullptr;};
    void deleteMineConfigs() { this->mineConfigs_ = nullptr;};
    inline     const Darabonba::Json & getMineConfigs() const { DARABONBA_GET(mineConfigs_) };
    Darabonba::Json & getMineConfigs() { DARABONBA_GET(mineConfigs_) };
    inline TaskDetail& setMineConfigs(const Darabonba::Json & mineConfigs) { DARABONBA_SET_VALUE(mineConfigs_, mineConfigs) };
    inline TaskDetail& setMineConfigs(Darabonba::Json && mineConfigs) { DARABONBA_SET_RVALUE(mineConfigs_, mineConfigs) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const SimpleUser & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, SimpleUser) };
    inline SimpleUser getModifier() { DARABONBA_PTR_GET(modifier_, SimpleUser) };
    inline TaskDetail& setModifier(const SimpleUser & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline TaskDetail& setModifier(SimpleUser && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // noticeConfig Field Functions 
    bool hasNoticeConfig() const { return this->noticeConfig_ != nullptr;};
    void deleteNoticeConfig() { this->noticeConfig_ = nullptr;};
    inline     const Darabonba::Json & getNoticeConfig() const { DARABONBA_GET(noticeConfig_) };
    Darabonba::Json & getNoticeConfig() { DARABONBA_GET(noticeConfig_) };
    inline TaskDetail& setNoticeConfig(const Darabonba::Json & noticeConfig) { DARABONBA_SET_VALUE(noticeConfig_, noticeConfig) };
    inline TaskDetail& setNoticeConfig(Darabonba::Json && noticeConfig) { DARABONBA_SET_RVALUE(noticeConfig_, noticeConfig) };


    // periodConfig Field Functions 
    bool hasPeriodConfig() const { return this->periodConfig_ != nullptr;};
    void deletePeriodConfig() { this->periodConfig_ = nullptr;};
    inline     const Darabonba::Json & getPeriodConfig() const { DARABONBA_GET(periodConfig_) };
    Darabonba::Json & getPeriodConfig() { DARABONBA_GET(periodConfig_) };
    inline TaskDetail& setPeriodConfig(const Darabonba::Json & periodConfig) { DARABONBA_SET_VALUE(periodConfig_, periodConfig) };
    inline TaskDetail& setPeriodConfig(Darabonba::Json && periodConfig) { DARABONBA_SET_RVALUE(periodConfig_, periodConfig) };


    // refTaskId Field Functions 
    bool hasRefTaskId() const { return this->refTaskId_ != nullptr;};
    void deleteRefTaskId() { this->refTaskId_ = nullptr;};
    inline string getRefTaskId() const { DARABONBA_PTR_GET_DEFAULT(refTaskId_, "") };
    inline TaskDetail& setRefTaskId(string refTaskId) { DARABONBA_PTR_SET_VALUE(refTaskId_, refTaskId) };


    // relateTaskConfig Field Functions 
    bool hasRelateTaskConfig() const { return this->relateTaskConfig_ != nullptr;};
    void deleteRelateTaskConfig() { this->relateTaskConfig_ = nullptr;};
    inline     const Darabonba::Json & getRelateTaskConfig() const { DARABONBA_GET(relateTaskConfig_) };
    Darabonba::Json & getRelateTaskConfig() { DARABONBA_GET(relateTaskConfig_) };
    inline TaskDetail& setRelateTaskConfig(const Darabonba::Json & relateTaskConfig) { DARABONBA_SET_VALUE(relateTaskConfig_, relateTaskConfig) };
    inline TaskDetail& setRelateTaskConfig(Darabonba::Json && relateTaskConfig) { DARABONBA_SET_RVALUE(relateTaskConfig_, relateTaskConfig) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline TaskDetail& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resultCallbackConfig Field Functions 
    bool hasResultCallbackConfig() const { return this->resultCallbackConfig_ != nullptr;};
    void deleteResultCallbackConfig() { this->resultCallbackConfig_ = nullptr;};
    inline     const Darabonba::Json & getResultCallbackConfig() const { DARABONBA_GET(resultCallbackConfig_) };
    Darabonba::Json & getResultCallbackConfig() { DARABONBA_GET(resultCallbackConfig_) };
    inline TaskDetail& setResultCallbackConfig(const Darabonba::Json & resultCallbackConfig) { DARABONBA_SET_VALUE(resultCallbackConfig_, resultCallbackConfig) };
    inline TaskDetail& setResultCallbackConfig(Darabonba::Json && resultCallbackConfig) { DARABONBA_SET_RVALUE(resultCallbackConfig_, resultCallbackConfig) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline TaskDetail& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TaskDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline TaskDetail& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline TaskDetail& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline TaskDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline TaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskTemplateConfig Field Functions 
    bool hasTaskTemplateConfig() const { return this->taskTemplateConfig_ != nullptr;};
    void deleteTaskTemplateConfig() { this->taskTemplateConfig_ = nullptr;};
    inline const TaskDetail::TaskTemplateConfig & getTaskTemplateConfig() const { DARABONBA_PTR_GET_CONST(taskTemplateConfig_, TaskDetail::TaskTemplateConfig) };
    inline TaskDetail::TaskTemplateConfig getTaskTemplateConfig() { DARABONBA_PTR_GET(taskTemplateConfig_, TaskDetail::TaskTemplateConfig) };
    inline TaskDetail& setTaskTemplateConfig(const TaskDetail::TaskTemplateConfig & taskTemplateConfig) { DARABONBA_PTR_SET_VALUE(taskTemplateConfig_, taskTemplateConfig) };
    inline TaskDetail& setTaskTemplateConfig(TaskDetail::TaskTemplateConfig && taskTemplateConfig) { DARABONBA_PTR_SET_RVALUE(taskTemplateConfig_, taskTemplateConfig) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline TaskDetail& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskWorkflow Field Functions 
    bool hasTaskWorkflow() const { return this->taskWorkflow_ != nullptr;};
    void deleteTaskWorkflow() { this->taskWorkflow_ = nullptr;};
    inline const vector<TaskDetail::TaskWorkflow> & getTaskWorkflow() const { DARABONBA_PTR_GET_CONST(taskWorkflow_, vector<TaskDetail::TaskWorkflow>) };
    inline vector<TaskDetail::TaskWorkflow> getTaskWorkflow() { DARABONBA_PTR_GET(taskWorkflow_, vector<TaskDetail::TaskWorkflow>) };
    inline TaskDetail& setTaskWorkflow(const vector<TaskDetail::TaskWorkflow> & taskWorkflow) { DARABONBA_PTR_SET_VALUE(taskWorkflow_, taskWorkflow) };
    inline TaskDetail& setTaskWorkflow(vector<TaskDetail::TaskWorkflow> && taskWorkflow) { DARABONBA_PTR_SET_RVALUE(taskWorkflow_, taskWorkflow) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline TaskDetail& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline TaskDetail& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline TaskDetail& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline TaskDetail& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


    // voteConfigs Field Functions 
    bool hasVoteConfigs() const { return this->voteConfigs_ != nullptr;};
    void deleteVoteConfigs() { this->voteConfigs_ = nullptr;};
    inline     const Darabonba::Json & getVoteConfigs() const { DARABONBA_GET(voteConfigs_) };
    Darabonba::Json & getVoteConfigs() { DARABONBA_GET(voteConfigs_) };
    inline TaskDetail& setVoteConfigs(const Darabonba::Json & voteConfigs) { DARABONBA_SET_VALUE(voteConfigs_, voteConfigs) };
    inline TaskDetail& setVoteConfigs(Darabonba::Json && voteConfigs) { DARABONBA_SET_RVALUE(voteConfigs_, voteConfigs) };


    // workflowNodes Field Functions 
    bool hasWorkflowNodes() const { return this->workflowNodes_ != nullptr;};
    void deleteWorkflowNodes() { this->workflowNodes_ = nullptr;};
    inline const vector<string> & getWorkflowNodes() const { DARABONBA_PTR_GET_CONST(workflowNodes_, vector<string>) };
    inline vector<string> getWorkflowNodes() { DARABONBA_PTR_GET(workflowNodes_, vector<string>) };
    inline TaskDetail& setWorkflowNodes(const vector<string> & workflowNodes) { DARABONBA_PTR_SET_VALUE(workflowNodes_, workflowNodes) };
    inline TaskDetail& setWorkflowNodes(vector<string> && workflowNodes) { DARABONBA_PTR_SET_RVALUE(workflowNodes_, workflowNodes) };


    // runMsg Field Functions 
    bool hasRunMsg() const { return this->runMsg_ != nullptr;};
    void deleteRunMsg() { this->runMsg_ = nullptr;};
    inline string getRunMsg() const { DARABONBA_PTR_GET_DEFAULT(runMsg_, "") };
    inline TaskDetail& setRunMsg(string runMsg) { DARABONBA_PTR_SET_VALUE(runMsg_, runMsg) };


  protected:
    // List of job administrators.
    shared_ptr<vector<SimpleUser>> admins_ {};
    // Alert time.
    shared_ptr<int64_t> alertTime_ {};
    // Indicates whether data appending is allowed.
    shared_ptr<bool> allowAppendData_ {};
    // Indicates whether the job has been archived.
    shared_ptr<bool> archived_ {};
    // Data archiving information.
    shared_ptr<string> archivedInfos_ {};
    // Job assignment configuration.
    Darabonba::Json assignConfig_ {};
    // Creator information.
    shared_ptr<SimpleUser> creator_ {};
    // List of Data proxy relationships.
    shared_ptr<vector<TaskDetail::DatasetProxyRelations>> datasetProxyRelations_ {};
    // Additional configuration.
    Darabonba::Json exif_ {};
    // Creation UTC time.
    shared_ptr<string> gmtCreateTime_ {};
    // UTC time of the last modification.
    shared_ptr<string> gmtModifiedTime_ {};
    // Annotation style.
    shared_ptr<string> labelStyle_ {};
    // My configuration.
    Darabonba::Json mineConfigs_ {};
    // Updated By information.
    shared_ptr<SimpleUser> modifier_ {};
    // Notice configuration.
    Darabonba::Json noticeConfig_ {};
    // Time configuration.
    Darabonba::Json periodConfig_ {};
    // Auto triggered task ID.
    shared_ptr<string> refTaskId_ {};
    // Related job configuration.
    Darabonba::Json relateTaskConfig_ {};
    // Remark information.
    shared_ptr<string> remark_ {};
    // Result callback configuration.
    Darabonba::Json resultCallbackConfig_ {};
    // Current edge zone. Possible values:
    // - MARK: Annotating.
    // - CHECK: Checking.
    // - SAMPLING: Validating.
    shared_ptr<string> stage_ {};
    // Task Status. Possible values:
    // - CREATED
    // - SUCCESS
    shared_ptr<string> status_ {};
    // List of job tags.
    shared_ptr<vector<string>> tags_ {};
    // Job ID.
    shared_ptr<string> taskId_ {};
    // Task Name.
    shared_ptr<string> taskName_ {};
    // Supplementary configuration for the Job template.
    shared_ptr<TaskDetail::TaskTemplateConfig> taskTemplateConfig_ {};
    // Task Type.
    shared_ptr<string> taskType_ {};
    // List of job stream configurations.
    shared_ptr<vector<TaskDetail::TaskWorkflow>> taskWorkflow_ {};
    // Template ID.
    shared_ptr<string> templateId_ {};
    // Tenant ID.
    shared_ptr<string> tenantId_ {};
    // Tenant name.
    shared_ptr<string> tenantName_ {};
    // UUID.
    shared_ptr<string> UUID_ {};
    // Voting configuration.
    Darabonba::Json voteConfigs_ {};
    // List of pipeline nodes.
    shared_ptr<vector<string>> workflowNodes_ {};
    // Run message.
    shared_ptr<string> runMsg_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
