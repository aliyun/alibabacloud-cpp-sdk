// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKCONVERSATIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKCONVERSATIONRECORDSRESPONSEBODY_HPP_
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
  class GetScheduledTaskConversationRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskConversationRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskConversationRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetScheduledTaskConversationRecordsResponseBody() = default ;
    GetScheduledTaskConversationRecordsResponseBody(const GetScheduledTaskConversationRecordsResponseBody &) = default ;
    GetScheduledTaskConversationRecordsResponseBody(GetScheduledTaskConversationRecordsResponseBody &&) = default ;
    GetScheduledTaskConversationRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskConversationRecordsResponseBody() = default ;
    GetScheduledTaskConversationRecordsResponseBody& operator=(const GetScheduledTaskConversationRecordsResponseBody &) = default ;
    GetScheduledTaskConversationRecordsResponseBody& operator=(GetScheduledTaskConversationRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_TO_JSON(conversations, conversations_);
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_FROM_JSON(conversations, conversations_);
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conversations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conversations& obj) { 
          DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(hasUnread, hasUnread_);
          DARABONBA_PTR_TO_JSON(latestExecutionId, latestExecutionId_);
          DARABONBA_PTR_TO_JSON(latestStatus, latestStatus_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Conversations& obj) { 
          DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(hasUnread, hasUnread_);
          DARABONBA_PTR_FROM_JSON(latestExecutionId, latestExecutionId_);
          DARABONBA_PTR_FROM_JSON(latestStatus, latestStatus_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        };
        Conversations() = default ;
        Conversations(const Conversations &) = default ;
        Conversations(Conversations &&) = default ;
        Conversations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conversations() = default ;
        Conversations& operator=(const Conversations &) = default ;
        Conversations& operator=(Conversations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->displayName_ == nullptr && this->hasUnread_ == nullptr && this->latestExecutionId_ == nullptr && this->latestStatus_ == nullptr && this->updatedAt_ == nullptr; };
        // conversationId Field Functions 
        bool hasConversationId() const { return this->conversationId_ != nullptr;};
        void deleteConversationId() { this->conversationId_ = nullptr;};
        inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
        inline Conversations& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Conversations& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // hasUnread Field Functions 
        bool hasHasUnread() const { return this->hasUnread_ != nullptr;};
        void deleteHasUnread() { this->hasUnread_ = nullptr;};
        inline bool getHasUnread() const { DARABONBA_PTR_GET_DEFAULT(hasUnread_, false) };
        inline Conversations& setHasUnread(bool hasUnread) { DARABONBA_PTR_SET_VALUE(hasUnread_, hasUnread) };


        // latestExecutionId Field Functions 
        bool hasLatestExecutionId() const { return this->latestExecutionId_ != nullptr;};
        void deleteLatestExecutionId() { this->latestExecutionId_ = nullptr;};
        inline string getLatestExecutionId() const { DARABONBA_PTR_GET_DEFAULT(latestExecutionId_, "") };
        inline Conversations& setLatestExecutionId(string latestExecutionId) { DARABONBA_PTR_SET_VALUE(latestExecutionId_, latestExecutionId) };


        // latestStatus Field Functions 
        bool hasLatestStatus() const { return this->latestStatus_ != nullptr;};
        void deleteLatestStatus() { this->latestStatus_ = nullptr;};
        inline string getLatestStatus() const { DARABONBA_PTR_GET_DEFAULT(latestStatus_, "") };
        inline Conversations& setLatestStatus(string latestStatus) { DARABONBA_PTR_SET_VALUE(latestStatus_, latestStatus) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Conversations& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The actual group topic ID, which can be associated in queryWorkItemFeed. This ID cannot be used as a Workflow workItemId.
        shared_ptr<string> conversationId_ {};
        // The name of the schedule location.
        shared_ptr<string> displayName_ {};
        // Indicates whether unread messages exist.
        shared_ptr<bool> hasUnread_ {};
        // The ID of the latest execution record.
        shared_ptr<string> latestExecutionId_ {};
        // The latest execution status.
        shared_ptr<string> latestStatus_ {};
        // The update time.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->conversations_ == nullptr && this->cronExpression_ == nullptr && this->description_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->taskId_ == nullptr && this->timezone_ == nullptr && this->triggerType_ == nullptr; };
      // collaborationGroupId Field Functions 
      bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
      void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
      inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
      inline Tasks& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


      // conversations Field Functions 
      bool hasConversations() const { return this->conversations_ != nullptr;};
      void deleteConversations() { this->conversations_ = nullptr;};
      inline const vector<Tasks::Conversations> & getConversations() const { DARABONBA_PTR_GET_CONST(conversations_, vector<Tasks::Conversations>) };
      inline vector<Tasks::Conversations> getConversations() { DARABONBA_PTR_GET(conversations_, vector<Tasks::Conversations>) };
      inline Tasks& setConversations(const vector<Tasks::Conversations> & conversations) { DARABONBA_PTR_SET_VALUE(conversations_, conversations) };
      inline Tasks& setConversations(vector<Tasks::Conversations> && conversations) { DARABONBA_PTR_SET_RVALUE(conversations_, conversations) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline Tasks& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isOpen Field Functions 
      bool hasIsOpen() const { return this->isOpen_ != nullptr;};
      void deleteIsOpen() { this->isOpen_ = nullptr;};
      inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
      inline Tasks& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Tasks& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Tasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Tasks& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Tasks& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // Pre-filters by a single task. If you do not specify this parameter, the execution records of all visible tasks are returned.
      shared_ptr<string> collaborationGroupId_ {};
      // The list of sessions.
      shared_ptr<vector<Tasks::Conversations>> conversations_ {};
      // The cron expression.
      shared_ptr<string> cronExpression_ {};
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // Indicates whether public access is enabled.
      shared_ptr<bool> isOpen_ {};
      // The execution model tier. Valid values: flagship (Flagship), standard (Standard), and quick (Lightweight).
      shared_ptr<string> model_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The time zone.
      // 
      // > Default value: UTC+8.
      shared_ptr<string> timezone_ {};
      // The trigger type. Valid values:
      // - Manual: Manual execution.
      // - Cron: Scheduled trigger.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->tasks_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskConversationRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetScheduledTaskConversationRecordsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskConversationRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetScheduledTaskConversationRecordsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetScheduledTaskConversationRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskConversationRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<GetScheduledTaskConversationRecordsResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<GetScheduledTaskConversationRecordsResponseBody::Tasks>) };
    inline vector<GetScheduledTaskConversationRecordsResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<GetScheduledTaskConversationRecordsResponseBody::Tasks>) };
    inline GetScheduledTaskConversationRecordsResponseBody& setTasks(const vector<GetScheduledTaskConversationRecordsResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetScheduledTaskConversationRecordsResponseBody& setTasks(vector<GetScheduledTaskConversationRecordsResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetScheduledTaskConversationRecordsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // Indicates whether a next page exists.
    shared_ptr<bool> hasMore_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The page number. Default value: 1. Minimum value: 1. Maximum value: 200.
    shared_ptr<int32_t> page_ {};
    // The collaboration group ID, such as cg_101. If you specify this parameter, the data is returned by group dimension, and the caller must be a valid group member. If you do not specify this parameter, the data is returned by personal dimension, excluding group tasks.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of tasks.
    shared_ptr<vector<GetScheduledTaskConversationRecordsResponseBody::Tasks>> tasks_ {};
    // The total number of Logtail pipeline configurations in the current project.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
