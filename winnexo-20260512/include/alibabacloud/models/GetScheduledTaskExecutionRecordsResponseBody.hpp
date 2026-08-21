// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSRESPONSEBODY_HPP_
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
  class GetScheduledTaskExecutionRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskExecutionRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskExecutionRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetScheduledTaskExecutionRecordsResponseBody() = default ;
    GetScheduledTaskExecutionRecordsResponseBody(const GetScheduledTaskExecutionRecordsResponseBody &) = default ;
    GetScheduledTaskExecutionRecordsResponseBody(GetScheduledTaskExecutionRecordsResponseBody &&) = default ;
    GetScheduledTaskExecutionRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskExecutionRecordsResponseBody() = default ;
    GetScheduledTaskExecutionRecordsResponseBody& operator=(const GetScheduledTaskExecutionRecordsResponseBody &) = default ;
    GetScheduledTaskExecutionRecordsResponseBody& operator=(GetScheduledTaskExecutionRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(timeline, timeline_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
        DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(timeline, timeline_);
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
      class Timeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeline& obj) { 
          DARABONBA_PTR_TO_JSON(actualTime, actualTime_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(executionId, executionId_);
          DARABONBA_PTR_TO_JSON(isExpired, isExpired_);
          DARABONBA_PTR_TO_JSON(outputContent, outputContent_);
          DARABONBA_PTR_TO_JSON(scheduledTime, scheduledTime_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Timeline& obj) { 
          DARABONBA_PTR_FROM_JSON(actualTime, actualTime_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(executionId, executionId_);
          DARABONBA_PTR_FROM_JSON(isExpired, isExpired_);
          DARABONBA_PTR_FROM_JSON(outputContent, outputContent_);
          DARABONBA_PTR_FROM_JSON(scheduledTime, scheduledTime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Timeline() = default ;
        Timeline(const Timeline &) = default ;
        Timeline(Timeline &&) = default ;
        Timeline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timeline() = default ;
        Timeline& operator=(const Timeline &) = default ;
        Timeline& operator=(Timeline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->displayName_ == nullptr && this->errorMessage_ == nullptr && this->executionId_ == nullptr && this->isExpired_ == nullptr && this->outputContent_ == nullptr
        && this->scheduledTime_ == nullptr && this->status_ == nullptr; };
        // actualTime Field Functions 
        bool hasActualTime() const { return this->actualTime_ != nullptr;};
        void deleteActualTime() { this->actualTime_ = nullptr;};
        inline string getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, "") };
        inline Timeline& setActualTime(string actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Timeline& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Timeline& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executionId Field Functions 
        bool hasExecutionId() const { return this->executionId_ != nullptr;};
        void deleteExecutionId() { this->executionId_ = nullptr;};
        inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
        inline Timeline& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


        // isExpired Field Functions 
        bool hasIsExpired() const { return this->isExpired_ != nullptr;};
        void deleteIsExpired() { this->isExpired_ = nullptr;};
        inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
        inline Timeline& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


        // outputContent Field Functions 
        bool hasOutputContent() const { return this->outputContent_ != nullptr;};
        void deleteOutputContent() { this->outputContent_ = nullptr;};
        inline string getOutputContent() const { DARABONBA_PTR_GET_DEFAULT(outputContent_, "") };
        inline Timeline& setOutputContent(string outputContent) { DARABONBA_PTR_SET_VALUE(outputContent_, outputContent) };


        // scheduledTime Field Functions 
        bool hasScheduledTime() const { return this->scheduledTime_ != nullptr;};
        void deleteScheduledTime() { this->scheduledTime_ = nullptr;};
        inline string getScheduledTime() const { DARABONBA_PTR_GET_DEFAULT(scheduledTime_, "") };
        inline Timeline& setScheduledTime(string scheduledTime) { DARABONBA_PTR_SET_VALUE(scheduledTime_, scheduledTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Timeline& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The actual working hours, in hours.
        shared_ptr<string> actualTime_ {};
        // The name of the schedule location.
        shared_ptr<string> displayName_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The execution record ID.
        shared_ptr<string> executionId_ {};
        // Indicates whether the execution record has been archived due to expiration.
        shared_ptr<bool> isExpired_ {};
        // The execution output content (historical records only).
        shared_ptr<string> outputContent_ {};
        // The timed scheduling time.
        shared_ptr<string> scheduledTime_ {};
        // The final status of the message.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->cronExpression_ == nullptr && this->description_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->taskId_ == nullptr && this->timeline_ == nullptr && this->timezone_ == nullptr && this->triggerType_ == nullptr; };
      // collaborationGroupId Field Functions 
      bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
      void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
      inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
      inline Tasks& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


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


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline const vector<Tasks::Timeline> & getTimeline() const { DARABONBA_PTR_GET_CONST(timeline_, vector<Tasks::Timeline>) };
      inline vector<Tasks::Timeline> getTimeline() { DARABONBA_PTR_GET(timeline_, vector<Tasks::Timeline>) };
      inline Tasks& setTimeline(const vector<Tasks::Timeline> & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
      inline Tasks& setTimeline(vector<Tasks::Timeline> && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


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
      // The ID of the collaboration group to which the task belongs. If empty, the task is a personal task.
      shared_ptr<string> collaborationGroupId_ {};
      // The cron expression.
      shared_ptr<string> cronExpression_ {};
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // Indicates whether public access is enabled.
      shared_ptr<bool> isOpen_ {};
      // The execution model tier. Valid values:
      // - flagship: flagship.
      // - standard: standard.
      // - quick: lightweight.
      shared_ptr<string> model_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The timeline.
      shared_ptr<vector<Tasks::Timeline>> timeline_ {};
      // The time zone.
      // 
      // > Default value: UTC+8.
      shared_ptr<string> timezone_ {};
      // The trigger type. Valid values:
      // - Manual: manually executed.
      // - Cron: triggered by a schedule.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->tasks_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskExecutionRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>) };
    inline vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setTasks(const vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setTasks(vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetScheduledTaskExecutionRecordsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // Indicates whether more data is available.
    shared_ptr<bool> hasMore_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The number of tasks per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task list.
    shared_ptr<vector<GetScheduledTaskExecutionRecordsResponseBody::Tasks>> tasks_ {};
    // The total number of tasks.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
