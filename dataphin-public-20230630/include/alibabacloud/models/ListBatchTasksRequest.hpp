// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBatchTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchTaskQuery, batchTaskQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchTaskQuery, batchTaskQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListBatchTasksRequest() = default ;
    ListBatchTasksRequest(const ListBatchTasksRequest &) = default ;
    ListBatchTasksRequest(ListBatchTasksRequest &&) = default ;
    ListBatchTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchTasksRequest() = default ;
    ListBatchTasksRequest& operator=(const ListBatchTasksRequest &) = default ;
    ListBatchTasksRequest& operator=(ListBatchTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BatchTaskQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BatchTaskQuery& obj) { 
        DARABONBA_PTR_TO_JSON(ConditionScheduleEnable, conditionScheduleEnable_);
        DARABONBA_PTR_TO_JSON(CreateBeginTime, createBeginTime_);
        DARABONBA_PTR_TO_JSON(CreateEndTime, createEndTime_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerList, developOwnerList_);
        DARABONBA_PTR_TO_JSON(DirectoryList, directoryList_);
        DARABONBA_PTR_TO_JSON(IncludeSubDirectory, includeSubDirectory_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(LastSubmitStatusList, lastSubmitStatusList_);
        DARABONBA_PTR_TO_JSON(LockUserList, lockUserList_);
        DARABONBA_PTR_TO_JSON(ModifiedBeginTime, modifiedBeginTime_);
        DARABONBA_PTR_TO_JSON(ModifiedEndTime, modifiedEndTime_);
        DARABONBA_PTR_TO_JSON(NodeStatusList, nodeStatusList_);
        DARABONBA_PTR_TO_JSON(OpsOwnerList, opsOwnerList_);
        DARABONBA_PTR_TO_JSON(OutputTableNameList, outputTableNameList_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Published, published_);
        DARABONBA_PTR_TO_JSON(RefCodeTemplateId, refCodeTemplateId_);
        DARABONBA_PTR_TO_JSON(ScheduleIntervalTypeList, scheduleIntervalTypeList_);
        DARABONBA_PTR_TO_JSON(TaskStatusList, taskStatusList_);
        DARABONBA_PTR_TO_JSON(TaskTagList, taskTagList_);
        DARABONBA_PTR_TO_JSON(TaskTypeList, taskTypeList_);
      };
      friend void from_json(const Darabonba::Json& j, BatchTaskQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(ConditionScheduleEnable, conditionScheduleEnable_);
        DARABONBA_PTR_FROM_JSON(CreateBeginTime, createBeginTime_);
        DARABONBA_PTR_FROM_JSON(CreateEndTime, createEndTime_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerList, developOwnerList_);
        DARABONBA_PTR_FROM_JSON(DirectoryList, directoryList_);
        DARABONBA_PTR_FROM_JSON(IncludeSubDirectory, includeSubDirectory_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(LastSubmitStatusList, lastSubmitStatusList_);
        DARABONBA_PTR_FROM_JSON(LockUserList, lockUserList_);
        DARABONBA_PTR_FROM_JSON(ModifiedBeginTime, modifiedBeginTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedEndTime, modifiedEndTime_);
        DARABONBA_PTR_FROM_JSON(NodeStatusList, nodeStatusList_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerList, opsOwnerList_);
        DARABONBA_PTR_FROM_JSON(OutputTableNameList, outputTableNameList_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Published, published_);
        DARABONBA_PTR_FROM_JSON(RefCodeTemplateId, refCodeTemplateId_);
        DARABONBA_PTR_FROM_JSON(ScheduleIntervalTypeList, scheduleIntervalTypeList_);
        DARABONBA_PTR_FROM_JSON(TaskStatusList, taskStatusList_);
        DARABONBA_PTR_FROM_JSON(TaskTagList, taskTagList_);
        DARABONBA_PTR_FROM_JSON(TaskTypeList, taskTypeList_);
      };
      BatchTaskQuery() = default ;
      BatchTaskQuery(const BatchTaskQuery &) = default ;
      BatchTaskQuery(BatchTaskQuery &&) = default ;
      BatchTaskQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BatchTaskQuery() = default ;
      BatchTaskQuery& operator=(const BatchTaskQuery &) = default ;
      BatchTaskQuery& operator=(BatchTaskQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conditionScheduleEnable_ == nullptr
        && this->createBeginTime_ == nullptr && this->createEndTime_ == nullptr && this->developOwnerList_ == nullptr && this->directoryList_ == nullptr && this->includeSubDirectory_ == nullptr
        && this->keyword_ == nullptr && this->lastSubmitStatusList_ == nullptr && this->lockUserList_ == nullptr && this->modifiedBeginTime_ == nullptr && this->modifiedEndTime_ == nullptr
        && this->nodeStatusList_ == nullptr && this->opsOwnerList_ == nullptr && this->outputTableNameList_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->projectId_ == nullptr && this->published_ == nullptr && this->refCodeTemplateId_ == nullptr && this->scheduleIntervalTypeList_ == nullptr && this->taskStatusList_ == nullptr
        && this->taskTagList_ == nullptr && this->taskTypeList_ == nullptr; };
      // conditionScheduleEnable Field Functions 
      bool hasConditionScheduleEnable() const { return this->conditionScheduleEnable_ != nullptr;};
      void deleteConditionScheduleEnable() { this->conditionScheduleEnable_ = nullptr;};
      inline bool getConditionScheduleEnable() const { DARABONBA_PTR_GET_DEFAULT(conditionScheduleEnable_, false) };
      inline BatchTaskQuery& setConditionScheduleEnable(bool conditionScheduleEnable) { DARABONBA_PTR_SET_VALUE(conditionScheduleEnable_, conditionScheduleEnable) };


      // createBeginTime Field Functions 
      bool hasCreateBeginTime() const { return this->createBeginTime_ != nullptr;};
      void deleteCreateBeginTime() { this->createBeginTime_ = nullptr;};
      inline int64_t getCreateBeginTime() const { DARABONBA_PTR_GET_DEFAULT(createBeginTime_, 0L) };
      inline BatchTaskQuery& setCreateBeginTime(int64_t createBeginTime) { DARABONBA_PTR_SET_VALUE(createBeginTime_, createBeginTime) };


      // createEndTime Field Functions 
      bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
      void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
      inline int64_t getCreateEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
      inline BatchTaskQuery& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


      // developOwnerList Field Functions 
      bool hasDevelopOwnerList() const { return this->developOwnerList_ != nullptr;};
      void deleteDevelopOwnerList() { this->developOwnerList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerList() const { DARABONBA_PTR_GET_CONST(developOwnerList_, vector<string>) };
      inline vector<string> getDevelopOwnerList() { DARABONBA_PTR_GET(developOwnerList_, vector<string>) };
      inline BatchTaskQuery& setDevelopOwnerList(const vector<string> & developOwnerList) { DARABONBA_PTR_SET_VALUE(developOwnerList_, developOwnerList) };
      inline BatchTaskQuery& setDevelopOwnerList(vector<string> && developOwnerList) { DARABONBA_PTR_SET_RVALUE(developOwnerList_, developOwnerList) };


      // directoryList Field Functions 
      bool hasDirectoryList() const { return this->directoryList_ != nullptr;};
      void deleteDirectoryList() { this->directoryList_ = nullptr;};
      inline const vector<string> & getDirectoryList() const { DARABONBA_PTR_GET_CONST(directoryList_, vector<string>) };
      inline vector<string> getDirectoryList() { DARABONBA_PTR_GET(directoryList_, vector<string>) };
      inline BatchTaskQuery& setDirectoryList(const vector<string> & directoryList) { DARABONBA_PTR_SET_VALUE(directoryList_, directoryList) };
      inline BatchTaskQuery& setDirectoryList(vector<string> && directoryList) { DARABONBA_PTR_SET_RVALUE(directoryList_, directoryList) };


      // includeSubDirectory Field Functions 
      bool hasIncludeSubDirectory() const { return this->includeSubDirectory_ != nullptr;};
      void deleteIncludeSubDirectory() { this->includeSubDirectory_ = nullptr;};
      inline bool getIncludeSubDirectory() const { DARABONBA_PTR_GET_DEFAULT(includeSubDirectory_, false) };
      inline BatchTaskQuery& setIncludeSubDirectory(bool includeSubDirectory) { DARABONBA_PTR_SET_VALUE(includeSubDirectory_, includeSubDirectory) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline BatchTaskQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // lastSubmitStatusList Field Functions 
      bool hasLastSubmitStatusList() const { return this->lastSubmitStatusList_ != nullptr;};
      void deleteLastSubmitStatusList() { this->lastSubmitStatusList_ = nullptr;};
      inline const vector<string> & getLastSubmitStatusList() const { DARABONBA_PTR_GET_CONST(lastSubmitStatusList_, vector<string>) };
      inline vector<string> getLastSubmitStatusList() { DARABONBA_PTR_GET(lastSubmitStatusList_, vector<string>) };
      inline BatchTaskQuery& setLastSubmitStatusList(const vector<string> & lastSubmitStatusList) { DARABONBA_PTR_SET_VALUE(lastSubmitStatusList_, lastSubmitStatusList) };
      inline BatchTaskQuery& setLastSubmitStatusList(vector<string> && lastSubmitStatusList) { DARABONBA_PTR_SET_RVALUE(lastSubmitStatusList_, lastSubmitStatusList) };


      // lockUserList Field Functions 
      bool hasLockUserList() const { return this->lockUserList_ != nullptr;};
      void deleteLockUserList() { this->lockUserList_ = nullptr;};
      inline const vector<string> & getLockUserList() const { DARABONBA_PTR_GET_CONST(lockUserList_, vector<string>) };
      inline vector<string> getLockUserList() { DARABONBA_PTR_GET(lockUserList_, vector<string>) };
      inline BatchTaskQuery& setLockUserList(const vector<string> & lockUserList) { DARABONBA_PTR_SET_VALUE(lockUserList_, lockUserList) };
      inline BatchTaskQuery& setLockUserList(vector<string> && lockUserList) { DARABONBA_PTR_SET_RVALUE(lockUserList_, lockUserList) };


      // modifiedBeginTime Field Functions 
      bool hasModifiedBeginTime() const { return this->modifiedBeginTime_ != nullptr;};
      void deleteModifiedBeginTime() { this->modifiedBeginTime_ = nullptr;};
      inline int64_t getModifiedBeginTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedBeginTime_, 0L) };
      inline BatchTaskQuery& setModifiedBeginTime(int64_t modifiedBeginTime) { DARABONBA_PTR_SET_VALUE(modifiedBeginTime_, modifiedBeginTime) };


      // modifiedEndTime Field Functions 
      bool hasModifiedEndTime() const { return this->modifiedEndTime_ != nullptr;};
      void deleteModifiedEndTime() { this->modifiedEndTime_ = nullptr;};
      inline int64_t getModifiedEndTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedEndTime_, 0L) };
      inline BatchTaskQuery& setModifiedEndTime(int64_t modifiedEndTime) { DARABONBA_PTR_SET_VALUE(modifiedEndTime_, modifiedEndTime) };


      // nodeStatusList Field Functions 
      bool hasNodeStatusList() const { return this->nodeStatusList_ != nullptr;};
      void deleteNodeStatusList() { this->nodeStatusList_ = nullptr;};
      inline const vector<int32_t> & getNodeStatusList() const { DARABONBA_PTR_GET_CONST(nodeStatusList_, vector<int32_t>) };
      inline vector<int32_t> getNodeStatusList() { DARABONBA_PTR_GET(nodeStatusList_, vector<int32_t>) };
      inline BatchTaskQuery& setNodeStatusList(const vector<int32_t> & nodeStatusList) { DARABONBA_PTR_SET_VALUE(nodeStatusList_, nodeStatusList) };
      inline BatchTaskQuery& setNodeStatusList(vector<int32_t> && nodeStatusList) { DARABONBA_PTR_SET_RVALUE(nodeStatusList_, nodeStatusList) };


      // opsOwnerList Field Functions 
      bool hasOpsOwnerList() const { return this->opsOwnerList_ != nullptr;};
      void deleteOpsOwnerList() { this->opsOwnerList_ = nullptr;};
      inline const vector<string> & getOpsOwnerList() const { DARABONBA_PTR_GET_CONST(opsOwnerList_, vector<string>) };
      inline vector<string> getOpsOwnerList() { DARABONBA_PTR_GET(opsOwnerList_, vector<string>) };
      inline BatchTaskQuery& setOpsOwnerList(const vector<string> & opsOwnerList) { DARABONBA_PTR_SET_VALUE(opsOwnerList_, opsOwnerList) };
      inline BatchTaskQuery& setOpsOwnerList(vector<string> && opsOwnerList) { DARABONBA_PTR_SET_RVALUE(opsOwnerList_, opsOwnerList) };


      // outputTableNameList Field Functions 
      bool hasOutputTableNameList() const { return this->outputTableNameList_ != nullptr;};
      void deleteOutputTableNameList() { this->outputTableNameList_ = nullptr;};
      inline const vector<string> & getOutputTableNameList() const { DARABONBA_PTR_GET_CONST(outputTableNameList_, vector<string>) };
      inline vector<string> getOutputTableNameList() { DARABONBA_PTR_GET(outputTableNameList_, vector<string>) };
      inline BatchTaskQuery& setOutputTableNameList(const vector<string> & outputTableNameList) { DARABONBA_PTR_SET_VALUE(outputTableNameList_, outputTableNameList) };
      inline BatchTaskQuery& setOutputTableNameList(vector<string> && outputTableNameList) { DARABONBA_PTR_SET_RVALUE(outputTableNameList_, outputTableNameList) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline BatchTaskQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline BatchTaskQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline BatchTaskQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // published Field Functions 
      bool hasPublished() const { return this->published_ != nullptr;};
      void deletePublished() { this->published_ = nullptr;};
      inline bool getPublished() const { DARABONBA_PTR_GET_DEFAULT(published_, false) };
      inline BatchTaskQuery& setPublished(bool published) { DARABONBA_PTR_SET_VALUE(published_, published) };


      // refCodeTemplateId Field Functions 
      bool hasRefCodeTemplateId() const { return this->refCodeTemplateId_ != nullptr;};
      void deleteRefCodeTemplateId() { this->refCodeTemplateId_ = nullptr;};
      inline string getRefCodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(refCodeTemplateId_, "") };
      inline BatchTaskQuery& setRefCodeTemplateId(string refCodeTemplateId) { DARABONBA_PTR_SET_VALUE(refCodeTemplateId_, refCodeTemplateId) };


      // scheduleIntervalTypeList Field Functions 
      bool hasScheduleIntervalTypeList() const { return this->scheduleIntervalTypeList_ != nullptr;};
      void deleteScheduleIntervalTypeList() { this->scheduleIntervalTypeList_ = nullptr;};
      inline const vector<string> & getScheduleIntervalTypeList() const { DARABONBA_PTR_GET_CONST(scheduleIntervalTypeList_, vector<string>) };
      inline vector<string> getScheduleIntervalTypeList() { DARABONBA_PTR_GET(scheduleIntervalTypeList_, vector<string>) };
      inline BatchTaskQuery& setScheduleIntervalTypeList(const vector<string> & scheduleIntervalTypeList) { DARABONBA_PTR_SET_VALUE(scheduleIntervalTypeList_, scheduleIntervalTypeList) };
      inline BatchTaskQuery& setScheduleIntervalTypeList(vector<string> && scheduleIntervalTypeList) { DARABONBA_PTR_SET_RVALUE(scheduleIntervalTypeList_, scheduleIntervalTypeList) };


      // taskStatusList Field Functions 
      bool hasTaskStatusList() const { return this->taskStatusList_ != nullptr;};
      void deleteTaskStatusList() { this->taskStatusList_ = nullptr;};
      inline const vector<int32_t> & getTaskStatusList() const { DARABONBA_PTR_GET_CONST(taskStatusList_, vector<int32_t>) };
      inline vector<int32_t> getTaskStatusList() { DARABONBA_PTR_GET(taskStatusList_, vector<int32_t>) };
      inline BatchTaskQuery& setTaskStatusList(const vector<int32_t> & taskStatusList) { DARABONBA_PTR_SET_VALUE(taskStatusList_, taskStatusList) };
      inline BatchTaskQuery& setTaskStatusList(vector<int32_t> && taskStatusList) { DARABONBA_PTR_SET_RVALUE(taskStatusList_, taskStatusList) };


      // taskTagList Field Functions 
      bool hasTaskTagList() const { return this->taskTagList_ != nullptr;};
      void deleteTaskTagList() { this->taskTagList_ = nullptr;};
      inline const vector<string> & getTaskTagList() const { DARABONBA_PTR_GET_CONST(taskTagList_, vector<string>) };
      inline vector<string> getTaskTagList() { DARABONBA_PTR_GET(taskTagList_, vector<string>) };
      inline BatchTaskQuery& setTaskTagList(const vector<string> & taskTagList) { DARABONBA_PTR_SET_VALUE(taskTagList_, taskTagList) };
      inline BatchTaskQuery& setTaskTagList(vector<string> && taskTagList) { DARABONBA_PTR_SET_RVALUE(taskTagList_, taskTagList) };


      // taskTypeList Field Functions 
      bool hasTaskTypeList() const { return this->taskTypeList_ != nullptr;};
      void deleteTaskTypeList() { this->taskTypeList_ = nullptr;};
      inline const vector<int32_t> & getTaskTypeList() const { DARABONBA_PTR_GET_CONST(taskTypeList_, vector<int32_t>) };
      inline vector<int32_t> getTaskTypeList() { DARABONBA_PTR_GET(taskTypeList_, vector<int32_t>) };
      inline BatchTaskQuery& setTaskTypeList(const vector<int32_t> & taskTypeList) { DARABONBA_PTR_SET_VALUE(taskTypeList_, taskTypeList) };
      inline BatchTaskQuery& setTaskTypeList(vector<int32_t> && taskTypeList) { DARABONBA_PTR_SET_RVALUE(taskTypeList_, taskTypeList) };


    protected:
      shared_ptr<bool> conditionScheduleEnable_ {};
      shared_ptr<int64_t> createBeginTime_ {};
      shared_ptr<int64_t> createEndTime_ {};
      shared_ptr<vector<string>> developOwnerList_ {};
      shared_ptr<vector<string>> directoryList_ {};
      shared_ptr<bool> includeSubDirectory_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<vector<string>> lastSubmitStatusList_ {};
      shared_ptr<vector<string>> lockUserList_ {};
      shared_ptr<int64_t> modifiedBeginTime_ {};
      shared_ptr<int64_t> modifiedEndTime_ {};
      shared_ptr<vector<int32_t>> nodeStatusList_ {};
      shared_ptr<vector<string>> opsOwnerList_ {};
      shared_ptr<vector<string>> outputTableNameList_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<bool> published_ {};
      shared_ptr<string> refCodeTemplateId_ {};
      shared_ptr<vector<string>> scheduleIntervalTypeList_ {};
      shared_ptr<vector<int32_t>> taskStatusList_ {};
      shared_ptr<vector<string>> taskTagList_ {};
      shared_ptr<vector<int32_t>> taskTypeList_ {};
    };

    virtual bool empty() const override { return this->batchTaskQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // batchTaskQuery Field Functions 
    bool hasBatchTaskQuery() const { return this->batchTaskQuery_ != nullptr;};
    void deleteBatchTaskQuery() { this->batchTaskQuery_ = nullptr;};
    inline const ListBatchTasksRequest::BatchTaskQuery & getBatchTaskQuery() const { DARABONBA_PTR_GET_CONST(batchTaskQuery_, ListBatchTasksRequest::BatchTaskQuery) };
    inline ListBatchTasksRequest::BatchTaskQuery getBatchTaskQuery() { DARABONBA_PTR_GET(batchTaskQuery_, ListBatchTasksRequest::BatchTaskQuery) };
    inline ListBatchTasksRequest& setBatchTaskQuery(const ListBatchTasksRequest::BatchTaskQuery & batchTaskQuery) { DARABONBA_PTR_SET_VALUE(batchTaskQuery_, batchTaskQuery) };
    inline ListBatchTasksRequest& setBatchTaskQuery(ListBatchTasksRequest::BatchTaskQuery && batchTaskQuery) { DARABONBA_PTR_SET_RVALUE(batchTaskQuery_, batchTaskQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListBatchTasksRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListBatchTasksRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<ListBatchTasksRequest::BatchTaskQuery> batchTaskQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
