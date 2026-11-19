// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListMemoryTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMemoryTasksResponseBody() = default ;
    ListMemoryTasksResponseBody(const ListMemoryTasksResponseBody &) = default ;
    ListMemoryTasksResponseBody(ListMemoryTasksResponseBody &&) = default ;
    ListMemoryTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryTasksResponseBody() = default ;
    ListMemoryTasksResponseBody& operator=(const ListMemoryTasksResponseBody &) = default ;
    ListMemoryTasksResponseBody& operator=(ListMemoryTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(changes, changes_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(inputMessageCount, inputMessageCount_);
        DARABONBA_PTR_TO_JSON(inputTokenCount, inputTokenCount_);
        DARABONBA_PTR_TO_JSON(memories, memories_);
        DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(strategyConfig, strategyConfig_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(changes, changes_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(inputMessageCount, inputMessageCount_);
        DARABONBA_PTR_FROM_JSON(inputTokenCount, inputTokenCount_);
        DARABONBA_PTR_FROM_JSON(memories, memories_);
        DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(strategyConfig, strategyConfig_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
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
      class StrategyConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StrategyConfig& obj) { 
          DARABONBA_PTR_TO_JSON(instruction, instruction_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StrategyConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        StrategyConfig() = default ;
        StrategyConfig(const StrategyConfig &) = default ;
        StrategyConfig(StrategyConfig &&) = default ;
        StrategyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StrategyConfig() = default ;
        StrategyConfig& operator=(const StrategyConfig &) = default ;
        StrategyConfig& operator=(StrategyConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruction_ == nullptr
        && this->type_ == nullptr; };
        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline StrategyConfig& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StrategyConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The strategy-level instruction. It takes effect together with the store-level instruction. If a conflict occurs, this field takes precedence.
        shared_ptr<string> instruction_ {};
        // type
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class Memories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memories& obj) { 
          DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
        };
        friend void from_json(const Darabonba::Json& j, Memories& obj) { 
          DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
        };
        Memories() = default ;
        Memories(const Memories &) = default ;
        Memories(Memories &&) = default ;
        Memories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memories() = default ;
        Memories& operator=(const Memories &) = default ;
        Memories& operator=(Memories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memoryId_ == nullptr; };
        // memoryId Field Functions 
        bool hasMemoryId() const { return this->memoryId_ != nullptr;};
        void deleteMemoryId() { this->memoryId_ = nullptr;};
        inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
        inline Memories& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


      protected:
        // memoryId
        // 
        // This parameter is required.
        shared_ptr<string> memoryId_ {};
      };

      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // code
        // 
        // This parameter is required.
        shared_ptr<string> code_ {};
        // message
        // 
        // This parameter is required.
        shared_ptr<string> message_ {};
      };

      class Changes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Changes& obj) { 
          DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
          DARABONBA_PTR_TO_JSON(operation, operation_);
        };
        friend void from_json(const Darabonba::Json& j, Changes& obj) { 
          DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
          DARABONBA_PTR_FROM_JSON(operation, operation_);
        };
        Changes() = default ;
        Changes(const Changes &) = default ;
        Changes(Changes &&) = default ;
        Changes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Changes() = default ;
        Changes& operator=(const Changes &) = default ;
        Changes& operator=(Changes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memoryId_ == nullptr
        && this->operation_ == nullptr; };
        // memoryId Field Functions 
        bool hasMemoryId() const { return this->memoryId_ != nullptr;};
        void deleteMemoryId() { this->memoryId_ = nullptr;};
        inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
        inline Changes& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline Changes& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      protected:
        // memoryId
        // 
        // This parameter is required.
        shared_ptr<string> memoryId_ {};
        // operation
        // 
        // This parameter is required.
        shared_ptr<string> operation_ {};
      };

      virtual bool empty() const override { return this->changes_ == nullptr
        && this->createdAt_ == nullptr && this->error_ == nullptr && this->finishedAt_ == nullptr && this->inputMessageCount_ == nullptr && this->inputTokenCount_ == nullptr
        && this->memories_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr && this->strategyConfig_ == nullptr && this->taskId_ == nullptr
        && this->triggerType_ == nullptr; };
      // changes Field Functions 
      bool hasChanges() const { return this->changes_ != nullptr;};
      void deleteChanges() { this->changes_ = nullptr;};
      inline const vector<Items::Changes> & getChanges() const { DARABONBA_PTR_GET_CONST(changes_, vector<Items::Changes>) };
      inline vector<Items::Changes> getChanges() { DARABONBA_PTR_GET(changes_, vector<Items::Changes>) };
      inline Items& setChanges(const vector<Items::Changes> & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
      inline Items& setChanges(vector<Items::Changes> && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Items::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Items::Error) };
      inline Items::Error getError() { DARABONBA_PTR_GET(error_, Items::Error) };
      inline Items& setError(const Items::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Items& setError(Items::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Items& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // inputMessageCount Field Functions 
      bool hasInputMessageCount() const { return this->inputMessageCount_ != nullptr;};
      void deleteInputMessageCount() { this->inputMessageCount_ = nullptr;};
      inline int64_t getInputMessageCount() const { DARABONBA_PTR_GET_DEFAULT(inputMessageCount_, 0L) };
      inline Items& setInputMessageCount(int64_t inputMessageCount) { DARABONBA_PTR_SET_VALUE(inputMessageCount_, inputMessageCount) };


      // inputTokenCount Field Functions 
      bool hasInputTokenCount() const { return this->inputTokenCount_ != nullptr;};
      void deleteInputTokenCount() { this->inputTokenCount_ = nullptr;};
      inline int64_t getInputTokenCount() const { DARABONBA_PTR_GET_DEFAULT(inputTokenCount_, 0L) };
      inline Items& setInputTokenCount(int64_t inputTokenCount) { DARABONBA_PTR_SET_VALUE(inputTokenCount_, inputTokenCount) };


      // memories Field Functions 
      bool hasMemories() const { return this->memories_ != nullptr;};
      void deleteMemories() { this->memories_ = nullptr;};
      inline const vector<Items::Memories> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<Items::Memories>) };
      inline vector<Items::Memories> getMemories() { DARABONBA_PTR_GET(memories_, vector<Items::Memories>) };
      inline Items& setMemories(const vector<Items::Memories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
      inline Items& setMemories(vector<Items::Memories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline Items& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyConfig Field Functions 
      bool hasStrategyConfig() const { return this->strategyConfig_ != nullptr;};
      void deleteStrategyConfig() { this->strategyConfig_ = nullptr;};
      inline const Items::StrategyConfig & getStrategyConfig() const { DARABONBA_PTR_GET_CONST(strategyConfig_, Items::StrategyConfig) };
      inline Items::StrategyConfig getStrategyConfig() { DARABONBA_PTR_GET(strategyConfig_, Items::StrategyConfig) };
      inline Items& setStrategyConfig(const Items::StrategyConfig & strategyConfig) { DARABONBA_PTR_SET_VALUE(strategyConfig_, strategyConfig) };
      inline Items& setStrategyConfig(Items::StrategyConfig && strategyConfig) { DARABONBA_PTR_SET_RVALUE(strategyConfig_, strategyConfig) };


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


    protected:
      // changes
      shared_ptr<vector<Items::Changes>> changes_ {};
      // createdAt
      // 
      // This parameter is required.
      shared_ptr<string> createdAt_ {};
      // error
      shared_ptr<Items::Error> error_ {};
      // finishedAt
      shared_ptr<string> finishedAt_ {};
      // inputMessageCount
      // 
      // This parameter is required.
      shared_ptr<int64_t> inputMessageCount_ {};
      // inputTokenCount
      // 
      // This parameter is required.
      shared_ptr<int64_t> inputTokenCount_ {};
      // memories
      // 
      // This parameter is required.
      shared_ptr<vector<Items::Memories>> memories_ {};
      // startedAt
      shared_ptr<string> startedAt_ {};
      // status
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // strategyConfig
      // 
      // This parameter is required.
      shared_ptr<Items::StrategyConfig> strategyConfig_ {};
      // taskId
      // 
      // This parameter is required.
      shared_ptr<string> taskId_ {};
      // triggerType
      // 
      // This parameter is required.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMemoryTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMemoryTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListMemoryTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListMemoryTasksResponseBody::Items>) };
    inline vector<ListMemoryTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListMemoryTasksResponseBody::Items>) };
    inline ListMemoryTasksResponseBody& setItems(const vector<ListMemoryTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListMemoryTasksResponseBody& setItems(vector<ListMemoryTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoryTasksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMemoryTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoryTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoryTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMemoryTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListMemoryTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // code
    shared_ptr<string> code_ {};
    // httpStatusCode
    shared_ptr<int32_t> httpStatusCode_ {};
    // items
    shared_ptr<vector<ListMemoryTasksResponseBody::Items>> items_ {};
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    // message
    shared_ptr<string> message_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    // success
    shared_ptr<bool> success_ {};
    // totalCount
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
