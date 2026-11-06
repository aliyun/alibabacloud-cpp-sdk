// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMAUDITRESPONSEBODY_HPP_
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
  class GetWorkItemAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetWorkItemAuditResponseBody() = default ;
    GetWorkItemAuditResponseBody(const GetWorkItemAuditResponseBody &) = default ;
    GetWorkItemAuditResponseBody(GetWorkItemAuditResponseBody &&) = default ;
    GetWorkItemAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemAuditResponseBody() = default ;
    GetWorkItemAuditResponseBody& operator=(const GetWorkItemAuditResponseBody &) = default ;
    GetWorkItemAuditResponseBody& operator=(GetWorkItemAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_ANY_TO_JSON(changes, changes_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(eventId, eventId_);
        DARABONBA_PTR_TO_JSON(eventType, eventType_);
        DARABONBA_PTR_TO_JSON(occurredAt, occurredAt_);
        DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(operatorUserId, operatorUserId_);
        DARABONBA_PTR_TO_JSON(questions, questions_);
        DARABONBA_ANY_TO_JSON(resultPayload, resultPayload_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(todoId, todoId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_ANY_FROM_JSON(changes, changes_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(eventId, eventId_);
        DARABONBA_PTR_FROM_JSON(eventType, eventType_);
        DARABONBA_PTR_FROM_JSON(occurredAt, occurredAt_);
        DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(operatorUserId, operatorUserId_);
        DARABONBA_PTR_FROM_JSON(questions, questions_);
        DARABONBA_ANY_FROM_JSON(resultPayload, resultPayload_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(todoId, todoId_);
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
      virtual bool empty() const override { return this->changes_ == nullptr
        && this->description_ == nullptr && this->eventId_ == nullptr && this->eventType_ == nullptr && this->occurredAt_ == nullptr && this->operatorName_ == nullptr
        && this->operatorUserId_ == nullptr && this->questions_ == nullptr && this->resultPayload_ == nullptr && this->status_ == nullptr && this->title_ == nullptr
        && this->todoId_ == nullptr; };
      // changes Field Functions 
      bool hasChanges() const { return this->changes_ != nullptr;};
      void deleteChanges() { this->changes_ = nullptr;};
      inline       const Darabonba::Json & getChanges() const { DARABONBA_GET(changes_) };
      Darabonba::Json & getChanges() { DARABONBA_GET(changes_) };
      inline Items& setChanges(const Darabonba::Json & changes) { DARABONBA_SET_VALUE(changes_, changes) };
      inline Items& setChanges(Darabonba::Json && changes) { DARABONBA_SET_RVALUE(changes_, changes) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Items& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Items& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // occurredAt Field Functions 
      bool hasOccurredAt() const { return this->occurredAt_ != nullptr;};
      void deleteOccurredAt() { this->occurredAt_ = nullptr;};
      inline string getOccurredAt() const { DARABONBA_PTR_GET_DEFAULT(occurredAt_, "") };
      inline Items& setOccurredAt(string occurredAt) { DARABONBA_PTR_SET_VALUE(occurredAt_, occurredAt) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Items& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorUserId Field Functions 
      bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
      void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
      inline string getOperatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
      inline Items& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


      // questions Field Functions 
      bool hasQuestions() const { return this->questions_ != nullptr;};
      void deleteQuestions() { this->questions_ = nullptr;};
      inline const vector<Darabonba::Json> & getQuestions() const { DARABONBA_PTR_GET_CONST(questions_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getQuestions() { DARABONBA_PTR_GET(questions_, vector<Darabonba::Json>) };
      inline Items& setQuestions(const vector<Darabonba::Json> & questions) { DARABONBA_PTR_SET_VALUE(questions_, questions) };
      inline Items& setQuestions(vector<Darabonba::Json> && questions) { DARABONBA_PTR_SET_RVALUE(questions_, questions) };


      // resultPayload Field Functions 
      bool hasResultPayload() const { return this->resultPayload_ != nullptr;};
      void deleteResultPayload() { this->resultPayload_ = nullptr;};
      inline       const Darabonba::Json & getResultPayload() const { DARABONBA_GET(resultPayload_) };
      Darabonba::Json & getResultPayload() { DARABONBA_GET(resultPayload_) };
      inline Items& setResultPayload(const Darabonba::Json & resultPayload) { DARABONBA_SET_VALUE(resultPayload_, resultPayload) };
      inline Items& setResultPayload(Darabonba::Json && resultPayload) { DARABONBA_SET_RVALUE(resultPayload_, resultPayload) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // todoId Field Functions 
      bool hasTodoId() const { return this->todoId_ != nullptr;};
      void deleteTodoId() { this->todoId_ = nullptr;};
      inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
      inline Items& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


    protected:
      // 字段变更明细列表，每项包含变更字段与前后值
      Darabonba::Json changes_ {};
      // 事件描述
      shared_ptr<string> description_ {};
      // 审计事件唯一标识
      shared_ptr<string> eventId_ {};
      // 审计事件类型，如 WORK_ITEM_UPDATED、TODO_COMPLETED
      shared_ptr<string> eventType_ {};
      // 事件发生时间，ISO8601 格式
      shared_ptr<string> occurredAt_ {};
      // 操作人显示名
      shared_ptr<string> operatorName_ {};
      // 操作人用户 ID
      shared_ptr<string> operatorUserId_ {};
      // 事件涉及的待确认问题列表
      shared_ptr<vector<Darabonba::Json>> questions_ {};
      // 事件结果负载，JSON 对象；无结果时为空
      Darabonba::Json resultPayload_ {};
      // 事件状态
      shared_ptr<string> status_ {};
      // 事件标题
      shared_ptr<string> title_ {};
      // 关联待办 ID；无关联时为空字符串
      shared_ptr<string> todoId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkItemAuditResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetWorkItemAuditResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetWorkItemAuditResponseBody::Items>) };
    inline vector<GetWorkItemAuditResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetWorkItemAuditResponseBody::Items>) };
    inline GetWorkItemAuditResponseBody& setItems(const vector<GetWorkItemAuditResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetWorkItemAuditResponseBody& setItems(vector<GetWorkItemAuditResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkItemAuditResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkItemAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 公共业务状态码
    shared_ptr<string> code_ {};
    // 按事件时间倒序排列的完整工作项审计记录
    shared_ptr<vector<GetWorkItemAuditResponseBody::Items>> items_ {};
    // 公共错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
