// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEASYNCTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEASYNCTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetInstanceAsyncTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAsyncTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetInstanceAsyncTaskResponseBody() = default ;
    GetInstanceAsyncTaskResponseBody(const GetInstanceAsyncTaskResponseBody &) = default ;
    GetInstanceAsyncTaskResponseBody(GetInstanceAsyncTaskResponseBody &&) = default ;
    GetInstanceAsyncTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAsyncTaskResponseBody() = default ;
    GetInstanceAsyncTaskResponseBody& operator=(const GetInstanceAsyncTaskResponseBody &) = default ;
    GetInstanceAsyncTaskResponseBody& operator=(GetInstanceAsyncTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
        DARABONBA_PTR_TO_JSON(RecoveryMessage, recoveryMessage_);
        DARABONBA_PTR_TO_JSON(TaskCode, taskCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(WaitingForUserAction, waitingForUserAction_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
        DARABONBA_PTR_FROM_JSON(RecoveryMessage, recoveryMessage_);
        DARABONBA_PTR_FROM_JSON(TaskCode, taskCode_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(WaitingForUserAction, waitingForUserAction_);
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
      class RecoveryMessage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecoveryMessage& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(OccurredAt, occurredAt_);
          DARABONBA_PTR_TO_JSON(RecoverySuggestion, recoverySuggestion_);
          DARABONBA_PTR_TO_JSON(Retryable, retryable_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RecoveryMessage& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(OccurredAt, occurredAt_);
          DARABONBA_PTR_FROM_JSON(RecoverySuggestion, recoverySuggestion_);
          DARABONBA_PTR_FROM_JSON(Retryable, retryable_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RecoveryMessage() = default ;
        RecoveryMessage(const RecoveryMessage &) = default ;
        RecoveryMessage(RecoveryMessage &&) = default ;
        RecoveryMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecoveryMessage() = default ;
        RecoveryMessage& operator=(const RecoveryMessage &) = default ;
        RecoveryMessage& operator=(RecoveryMessage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->occurredAt_ == nullptr && this->recoverySuggestion_ == nullptr && this->retryable_ == nullptr && this->source_ == nullptr
        && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline RecoveryMessage& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline RecoveryMessage& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // occurredAt Field Functions 
        bool hasOccurredAt() const { return this->occurredAt_ != nullptr;};
        void deleteOccurredAt() { this->occurredAt_ = nullptr;};
        inline string getOccurredAt() const { DARABONBA_PTR_GET_DEFAULT(occurredAt_, "") };
        inline RecoveryMessage& setOccurredAt(string occurredAt) { DARABONBA_PTR_SET_VALUE(occurredAt_, occurredAt) };


        // recoverySuggestion Field Functions 
        bool hasRecoverySuggestion() const { return this->recoverySuggestion_ != nullptr;};
        void deleteRecoverySuggestion() { this->recoverySuggestion_ = nullptr;};
        inline string getRecoverySuggestion() const { DARABONBA_PTR_GET_DEFAULT(recoverySuggestion_, "") };
        inline RecoveryMessage& setRecoverySuggestion(string recoverySuggestion) { DARABONBA_PTR_SET_VALUE(recoverySuggestion_, recoverySuggestion) };


        // retryable Field Functions 
        bool hasRetryable() const { return this->retryable_ != nullptr;};
        void deleteRetryable() { this->retryable_ = nullptr;};
        inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
        inline RecoveryMessage& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline RecoveryMessage& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RecoveryMessage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The error code. Valid values:
        // - CMS_WORKSPACE_QUOTA_EXCEEDED: CMS workspace quota exceeded.
        shared_ptr<string> code_ {};
        // The specific error message.
        shared_ptr<string> message_ {};
        // The time when the error occurred.
        shared_ptr<string> occurredAt_ {};
        // The suggested recovery action.
        shared_ptr<string> recoverySuggestion_ {};
        // Indicates whether the task can be retried.
        shared_ptr<bool> retryable_ {};
        // The error source. Valid values:
        // - CMS: content management system.
        shared_ptr<string> source_ {};
        // The recovery type. Valid values:
        // - ERROR_RECOVERY: error recovery.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->currentStep_ == nullptr
        && this->recoveryMessage_ == nullptr && this->taskCode_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr && this->waitingForUserAction_ == nullptr; };
      // currentStep Field Functions 
      bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
      void deleteCurrentStep() { this->currentStep_ = nullptr;};
      inline string getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
      inline Items& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


      // recoveryMessage Field Functions 
      bool hasRecoveryMessage() const { return this->recoveryMessage_ != nullptr;};
      void deleteRecoveryMessage() { this->recoveryMessage_ = nullptr;};
      inline const Items::RecoveryMessage & getRecoveryMessage() const { DARABONBA_PTR_GET_CONST(recoveryMessage_, Items::RecoveryMessage) };
      inline Items::RecoveryMessage getRecoveryMessage() { DARABONBA_PTR_GET(recoveryMessage_, Items::RecoveryMessage) };
      inline Items& setRecoveryMessage(const Items::RecoveryMessage & recoveryMessage) { DARABONBA_PTR_SET_VALUE(recoveryMessage_, recoveryMessage) };
      inline Items& setRecoveryMessage(Items::RecoveryMessage && recoveryMessage) { DARABONBA_PTR_SET_RVALUE(recoveryMessage_, recoveryMessage) };


      // taskCode Field Functions 
      bool hasTaskCode() const { return this->taskCode_ != nullptr;};
      void deleteTaskCode() { this->taskCode_ = nullptr;};
      inline string getTaskCode() const { DARABONBA_PTR_GET_DEFAULT(taskCode_, "") };
      inline Items& setTaskCode(string taskCode) { DARABONBA_PTR_SET_VALUE(taskCode_, taskCode) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Items& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // waitingForUserAction Field Functions 
      bool hasWaitingForUserAction() const { return this->waitingForUserAction_ != nullptr;};
      void deleteWaitingForUserAction() { this->waitingForUserAction_ = nullptr;};
      inline bool getWaitingForUserAction() const { DARABONBA_PTR_GET_DEFAULT(waitingForUserAction_, false) };
      inline Items& setWaitingForUserAction(bool waitingForUserAction) { DARABONBA_PTR_SET_VALUE(waitingForUserAction_, waitingForUserAction) };


    protected:
      // The current step.
      shared_ptr<string> currentStep_ {};
      // The recovery message returned to the user when the task status is paused.
      shared_ptr<Items::RecoveryMessage> recoveryMessage_ {};
      // The task code. Valid values:
      // - LIFECYCLE_MAGIC_PAY_ORDER_CALLBACK_CREATE: instance creation task.
      // - MAGIC_BIND_IDENTITY_PROVIDER: upstream identity provider binding task.
      shared_ptr<string> taskCode_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task status. Valid values:
      // - PAUSED: paused.
      // - RUNNING: running.
      // - SUCCEEDED: succeeded.
      // - FAILED: failed.
      shared_ptr<string> taskStatus_ {};
      // Indicates whether the task is waiting for user action. When `taskStatus = PAUSED`, this value is true and `recoveryMessage` is returned to display recovery instructions to the user. When the task is not paused, this value is false and `recoveryMessage` is empty.
      shared_ptr<bool> waitingForUserAction_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceAsyncTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceAsyncTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetInstanceAsyncTaskResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetInstanceAsyncTaskResponseBody::Items>) };
    inline vector<GetInstanceAsyncTaskResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetInstanceAsyncTaskResponseBody::Items>) };
    inline GetInstanceAsyncTaskResponseBody& setItems(const vector<GetInstanceAsyncTaskResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetInstanceAsyncTaskResponseBody& setItems(vector<GetInstanceAsyncTaskResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetInstanceAsyncTaskResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceAsyncTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetInstanceAsyncTaskResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceAsyncTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceAsyncTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetInstanceAsyncTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // SUCCESS
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned list. The `items` array may contain multiple tasks with the same `taskCode`.
    shared_ptr<vector<GetInstanceAsyncTaskResponseBody::Items>> items_ {};
    // The page size. Default value: 100. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // success
    shared_ptr<string> message_ {};
    // The token for the next page. This parameter is not returned for the first request.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
