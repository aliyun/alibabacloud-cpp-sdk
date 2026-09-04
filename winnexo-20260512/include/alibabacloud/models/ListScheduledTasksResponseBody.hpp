// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEDTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListScheduledTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduledTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListScheduledTasksResponseBody() = default ;
    ListScheduledTasksResponseBody(const ListScheduledTasksResponseBody &) = default ;
    ListScheduledTasksResponseBody(ListScheduledTasksResponseBody &&) = default ;
    ListScheduledTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduledTasksResponseBody() = default ;
    ListScheduledTasksResponseBody& operator=(const ListScheduledTasksResponseBody &) = default ;
    ListScheduledTasksResponseBody& operator=(ListScheduledTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(abnormalReason, abnormalReason_);
        DARABONBA_PTR_TO_JSON(canDelete, canDelete_);
        DARABONBA_PTR_TO_JSON(canEdit, canEdit_);
        DARABONBA_PTR_TO_JSON(canExecute, canExecute_);
        DARABONBA_PTR_TO_JSON(canToggle, canToggle_);
        DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_TO_JSON(executionCount, executionCount_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
        DARABONBA_PTR_TO_JSON(visibility, visibility_);
        DARABONBA_PTR_TO_JSON(visibleMemberUserIds, visibleMemberUserIds_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(abnormalReason, abnormalReason_);
        DARABONBA_PTR_FROM_JSON(canDelete, canDelete_);
        DARABONBA_PTR_FROM_JSON(canEdit, canEdit_);
        DARABONBA_PTR_FROM_JSON(canExecute, canExecute_);
        DARABONBA_PTR_FROM_JSON(canToggle, canToggle_);
        DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
        DARABONBA_PTR_FROM_JSON(executionCount, executionCount_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
        DARABONBA_PTR_FROM_JSON(visibility, visibility_);
        DARABONBA_PTR_FROM_JSON(visibleMemberUserIds, visibleMemberUserIds_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abnormalReason_ == nullptr
        && this->canDelete_ == nullptr && this->canEdit_ == nullptr && this->canExecute_ == nullptr && this->canToggle_ == nullptr && this->collaborationGroupId_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->cronExpression_ == nullptr && this->description_ == nullptr && this->digitalEmployeeName_ == nullptr
        && this->executionCount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->triggerType_ == nullptr && this->visibility_ == nullptr
        && this->visibleMemberUserIds_ == nullptr; };
      // abnormalReason Field Functions 
      bool hasAbnormalReason() const { return this->abnormalReason_ != nullptr;};
      void deleteAbnormalReason() { this->abnormalReason_ = nullptr;};
      inline string getAbnormalReason() const { DARABONBA_PTR_GET_DEFAULT(abnormalReason_, "") };
      inline Items& setAbnormalReason(string abnormalReason) { DARABONBA_PTR_SET_VALUE(abnormalReason_, abnormalReason) };


      // canDelete Field Functions 
      bool hasCanDelete() const { return this->canDelete_ != nullptr;};
      void deleteCanDelete() { this->canDelete_ = nullptr;};
      inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
      inline Items& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


      // canEdit Field Functions 
      bool hasCanEdit() const { return this->canEdit_ != nullptr;};
      void deleteCanEdit() { this->canEdit_ = nullptr;};
      inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
      inline Items& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


      // canExecute Field Functions 
      bool hasCanExecute() const { return this->canExecute_ != nullptr;};
      void deleteCanExecute() { this->canExecute_ = nullptr;};
      inline bool getCanExecute() const { DARABONBA_PTR_GET_DEFAULT(canExecute_, false) };
      inline Items& setCanExecute(bool canExecute) { DARABONBA_PTR_SET_VALUE(canExecute_, canExecute) };


      // canToggle Field Functions 
      bool hasCanToggle() const { return this->canToggle_ != nullptr;};
      void deleteCanToggle() { this->canToggle_ = nullptr;};
      inline bool getCanToggle() const { DARABONBA_PTR_GET_DEFAULT(canToggle_, false) };
      inline Items& setCanToggle(bool canToggle) { DARABONBA_PTR_SET_VALUE(canToggle_, canToggle) };


      // collaborationGroupId Field Functions 
      bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
      void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
      inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
      inline Items& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Items& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Items& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Items& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // digitalEmployeeName Field Functions 
      bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
      void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
      inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
      inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
      inline Items& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
      inline Items& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


      // executionCount Field Functions 
      bool hasExecutionCount() const { return this->executionCount_ != nullptr;};
      void deleteExecutionCount() { this->executionCount_ = nullptr;};
      inline int64_t getExecutionCount() const { DARABONBA_PTR_GET_DEFAULT(executionCount_, 0L) };
      inline Items& setExecutionCount(int64_t executionCount) { DARABONBA_PTR_SET_VALUE(executionCount_, executionCount) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isOpen Field Functions 
      bool hasIsOpen() const { return this->isOpen_ != nullptr;};
      void deleteIsOpen() { this->isOpen_ = nullptr;};
      inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
      inline Items& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Items& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Items& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      // visibility Field Functions 
      bool hasVisibility() const { return this->visibility_ != nullptr;};
      void deleteVisibility() { this->visibility_ = nullptr;};
      inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
      inline Items& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      // visibleMemberUserIds Field Functions 
      bool hasVisibleMemberUserIds() const { return this->visibleMemberUserIds_ != nullptr;};
      void deleteVisibleMemberUserIds() { this->visibleMemberUserIds_ = nullptr;};
      inline const vector<string> & getVisibleMemberUserIds() const { DARABONBA_PTR_GET_CONST(visibleMemberUserIds_, vector<string>) };
      inline vector<string> getVisibleMemberUserIds() { DARABONBA_PTR_GET(visibleMemberUserIds_, vector<string>) };
      inline Items& setVisibleMemberUserIds(const vector<string> & visibleMemberUserIds) { DARABONBA_PTR_SET_VALUE(visibleMemberUserIds_, visibleMemberUserIds) };
      inline Items& setVisibleMemberUserIds(vector<string> && visibleMemberUserIds) { DARABONBA_PTR_SET_RVALUE(visibleMemberUserIds_, visibleMemberUserIds) };


    protected:
      // The reason for the exception. This field has a value only when status is abnormal.
      shared_ptr<string> abnormalReason_ {};
      // Indicates whether the current caller can delete the task (only the task creator and group owner can do so). Always returns true for personal tasks.
      shared_ptr<bool> canDelete_ {};
      // Indicates whether the task can be edited or deleted.
      shared_ptr<bool> canEdit_ {};
      // Indicates whether the current caller can immediately execute the task (anyone with visibility can operate. Returns false for abnormal tasks). Always returns true for personal tasks.
      shared_ptr<bool> canExecute_ {};
      // Indicates whether the current caller can start or stop the task (only the task creator and group owner can do so. Returns false for abnormal tasks). Always returns true for personal tasks.
      shared_ptr<bool> canToggle_ {};
      // The ID of the collaboration group (such as cg_101). If specified, a group task is created (the caller must be a valid group member). If left empty, a personal task is created.
      shared_ptr<string> collaborationGroupId_ {};
      // The creator.
      shared_ptr<string> creator_ {};
      // The creator.
      shared_ptr<string> creatorName_ {};
      // The cron expression.
      shared_ptr<string> cronExpression_ {};
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // The list of digital employee names.
      shared_ptr<vector<string>> digitalEmployeeName_ {};
      // The total number of executions.
      shared_ptr<int64_t> executionCount_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time.
      shared_ptr<string> gmtModified_ {};
      // Indicates whether public access is enabled.
      shared_ptr<bool> isOpen_ {};
      // The execution model tier. If not specified, the value is not updated.
      shared_ptr<string> model_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The task status. Running is returned upon submission.
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The trigger type.
      shared_ptr<string> triggerType_ {};
      // The visibility scope of the group task. Valid values:
      // - PRIVATE: visible only to the creator and group owner.
      // - COLLABORATIVE: visible to specified collaborators.
      // - PUBLIC: visible to all group members.
      // 
      // For group tasks, the default value is PRIVATE if not specified. This field is ignored for personal tasks.
      shared_ptr<string> visibility_ {};
      // The list of collaborators (excluding the task creator and group creator, who are covered by the authentication layer). This field is returned only for group tasks. An empty list is returned for PRIVATE or PUBLIC visibility.
      shared_ptr<vector<string>> visibleMemberUserIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScheduledTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListScheduledTasksResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListScheduledTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListScheduledTasksResponseBody::Items>) };
    inline vector<ListScheduledTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListScheduledTasksResponseBody::Items>) };
    inline ListScheduledTasksResponseBody& setItems(const vector<ListScheduledTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListScheduledTasksResponseBody& setItems(vector<ListScheduledTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListScheduledTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScheduledTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListScheduledTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListScheduledTasksResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListScheduledTasksResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduledTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListScheduledTasksResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // Indicates whether more data is available. Valid values:
    // - true: More data is available.
    // - false: No more data is available.
    shared_ptr<bool> hasMore_ {};
    // The list of skill cards.
    shared_ptr<vector<ListScheduledTasksResponseBody::Items>> items_ {};
    // The maximum number of entries to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of tasks.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
