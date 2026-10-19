// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTODORESPONSEBODY_HPP_
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
  class GetTodoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(todo, todo_);
      DARABONBA_PTR_TO_JSON(todos, todos_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(todo, todo_);
      DARABONBA_PTR_FROM_JSON(todos, todos_);
    };
    GetTodoResponseBody() = default ;
    GetTodoResponseBody(const GetTodoResponseBody &) = default ;
    GetTodoResponseBody(GetTodoResponseBody &&) = default ;
    GetTodoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoResponseBody() = default ;
    GetTodoResponseBody& operator=(const GetTodoResponseBody &) = default ;
    GetTodoResponseBody& operator=(GetTodoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Todos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Todos& obj) { 
        DARABONBA_PTR_TO_JSON(assignees, assignees_);
        DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
        DARABONBA_PTR_TO_JSON(completedByUserId, completedByUserId_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(priority, priority_);
        DARABONBA_ANY_TO_JSON(questions, questions_);
        DARABONBA_ANY_TO_JSON(resultPayload, resultPayload_);
        DARABONBA_ANY_TO_JSON(sourceContext, sourceContext_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(todoId, todoId_);
      };
      friend void from_json(const Darabonba::Json& j, Todos& obj) { 
        DARABONBA_PTR_FROM_JSON(assignees, assignees_);
        DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
        DARABONBA_PTR_FROM_JSON(completedByUserId, completedByUserId_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(priority, priority_);
        DARABONBA_ANY_FROM_JSON(questions, questions_);
        DARABONBA_ANY_FROM_JSON(resultPayload, resultPayload_);
        DARABONBA_ANY_FROM_JSON(sourceContext, sourceContext_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(todoId, todoId_);
      };
      Todos() = default ;
      Todos(const Todos &) = default ;
      Todos(Todos &&) = default ;
      Todos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Todos() = default ;
      Todos& operator=(const Todos &) = default ;
      Todos& operator=(Todos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Assignees : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Assignees& obj) { 
          DARABONBA_PTR_TO_JSON(actedAt, actedAt_);
          DARABONBA_PTR_TO_JSON(assigneeSource, assigneeSource_);
          DARABONBA_PTR_TO_JSON(assigneeUserId, assigneeUserId_);
          DARABONBA_PTR_TO_JSON(readAt, readAt_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(transferredFromUserId, transferredFromUserId_);
        };
        friend void from_json(const Darabonba::Json& j, Assignees& obj) { 
          DARABONBA_PTR_FROM_JSON(actedAt, actedAt_);
          DARABONBA_PTR_FROM_JSON(assigneeSource, assigneeSource_);
          DARABONBA_PTR_FROM_JSON(assigneeUserId, assigneeUserId_);
          DARABONBA_PTR_FROM_JSON(readAt, readAt_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(transferredFromUserId, transferredFromUserId_);
        };
        Assignees() = default ;
        Assignees(const Assignees &) = default ;
        Assignees(Assignees &&) = default ;
        Assignees(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Assignees() = default ;
        Assignees& operator=(const Assignees &) = default ;
        Assignees& operator=(Assignees &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actedAt_ == nullptr
        && this->assigneeSource_ == nullptr && this->assigneeUserId_ == nullptr && this->readAt_ == nullptr && this->status_ == nullptr && this->transferredFromUserId_ == nullptr; };
        // actedAt Field Functions 
        bool hasActedAt() const { return this->actedAt_ != nullptr;};
        void deleteActedAt() { this->actedAt_ = nullptr;};
        inline string getActedAt() const { DARABONBA_PTR_GET_DEFAULT(actedAt_, "") };
        inline Assignees& setActedAt(string actedAt) { DARABONBA_PTR_SET_VALUE(actedAt_, actedAt) };


        // assigneeSource Field Functions 
        bool hasAssigneeSource() const { return this->assigneeSource_ != nullptr;};
        void deleteAssigneeSource() { this->assigneeSource_ = nullptr;};
        inline string getAssigneeSource() const { DARABONBA_PTR_GET_DEFAULT(assigneeSource_, "") };
        inline Assignees& setAssigneeSource(string assigneeSource) { DARABONBA_PTR_SET_VALUE(assigneeSource_, assigneeSource) };


        // assigneeUserId Field Functions 
        bool hasAssigneeUserId() const { return this->assigneeUserId_ != nullptr;};
        void deleteAssigneeUserId() { this->assigneeUserId_ = nullptr;};
        inline string getAssigneeUserId() const { DARABONBA_PTR_GET_DEFAULT(assigneeUserId_, "") };
        inline Assignees& setAssigneeUserId(string assigneeUserId) { DARABONBA_PTR_SET_VALUE(assigneeUserId_, assigneeUserId) };


        // readAt Field Functions 
        bool hasReadAt() const { return this->readAt_ != nullptr;};
        void deleteReadAt() { this->readAt_ = nullptr;};
        inline string getReadAt() const { DARABONBA_PTR_GET_DEFAULT(readAt_, "") };
        inline Assignees& setReadAt(string readAt) { DARABONBA_PTR_SET_VALUE(readAt_, readAt) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Assignees& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // transferredFromUserId Field Functions 
        bool hasTransferredFromUserId() const { return this->transferredFromUserId_ != nullptr;};
        void deleteTransferredFromUserId() { this->transferredFromUserId_ = nullptr;};
        inline string getTransferredFromUserId() const { DARABONBA_PTR_GET_DEFAULT(transferredFromUserId_, "") };
        inline Assignees& setTransferredFromUserId(string transferredFromUserId) { DARABONBA_PTR_SET_VALUE(transferredFromUserId_, transferredFromUserId) };


      protected:
        // 处理时间（北京时间）；未处理为空
        shared_ptr<string> actedAt_ {};
        // 处理人来源：ORIGINAL/TRANSFERRED
        shared_ptr<string> assigneeSource_ {};
        // 处理人用户ID
        shared_ptr<string> assigneeUserId_ {};
        // 已读时间（北京时间）；未读为空
        shared_ptr<string> readAt_ {};
        // 处理人行状态
        shared_ptr<string> status_ {};
        // 转出人用户ID；仅转办产生
        shared_ptr<string> transferredFromUserId_ {};
      };

      virtual bool empty() const override { return this->assignees_ == nullptr
        && this->completedAt_ == nullptr && this->completedByUserId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->messageId_ == nullptr
        && this->priority_ == nullptr && this->questions_ == nullptr && this->resultPayload_ == nullptr && this->sourceContext_ == nullptr && this->status_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr && this->todoId_ == nullptr; };
      // assignees Field Functions 
      bool hasAssignees() const { return this->assignees_ != nullptr;};
      void deleteAssignees() { this->assignees_ = nullptr;};
      inline const vector<Todos::Assignees> & getAssignees() const { DARABONBA_PTR_GET_CONST(assignees_, vector<Todos::Assignees>) };
      inline vector<Todos::Assignees> getAssignees() { DARABONBA_PTR_GET(assignees_, vector<Todos::Assignees>) };
      inline Todos& setAssignees(const vector<Todos::Assignees> & assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };
      inline Todos& setAssignees(vector<Todos::Assignees> && assignees) { DARABONBA_PTR_SET_RVALUE(assignees_, assignees) };


      // completedAt Field Functions 
      bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
      void deleteCompletedAt() { this->completedAt_ = nullptr;};
      inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
      inline Todos& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


      // completedByUserId Field Functions 
      bool hasCompletedByUserId() const { return this->completedByUserId_ != nullptr;};
      void deleteCompletedByUserId() { this->completedByUserId_ = nullptr;};
      inline string getCompletedByUserId() const { DARABONBA_PTR_GET_DEFAULT(completedByUserId_, "") };
      inline Todos& setCompletedByUserId(string completedByUserId) { DARABONBA_PTR_SET_VALUE(completedByUserId_, completedByUserId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Todos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Todos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Todos& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Todos& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // questions Field Functions 
      bool hasQuestions() const { return this->questions_ != nullptr;};
      void deleteQuestions() { this->questions_ = nullptr;};
      inline       const Darabonba::Json & getQuestions() const { DARABONBA_GET(questions_) };
      Darabonba::Json & getQuestions() { DARABONBA_GET(questions_) };
      inline Todos& setQuestions(const Darabonba::Json & questions) { DARABONBA_SET_VALUE(questions_, questions) };
      inline Todos& setQuestions(Darabonba::Json && questions) { DARABONBA_SET_RVALUE(questions_, questions) };


      // resultPayload Field Functions 
      bool hasResultPayload() const { return this->resultPayload_ != nullptr;};
      void deleteResultPayload() { this->resultPayload_ = nullptr;};
      inline       const Darabonba::Json & getResultPayload() const { DARABONBA_GET(resultPayload_) };
      Darabonba::Json & getResultPayload() { DARABONBA_GET(resultPayload_) };
      inline Todos& setResultPayload(const Darabonba::Json & resultPayload) { DARABONBA_SET_VALUE(resultPayload_, resultPayload) };
      inline Todos& setResultPayload(Darabonba::Json && resultPayload) { DARABONBA_SET_RVALUE(resultPayload_, resultPayload) };


      // sourceContext Field Functions 
      bool hasSourceContext() const { return this->sourceContext_ != nullptr;};
      void deleteSourceContext() { this->sourceContext_ = nullptr;};
      inline       const Darabonba::Json & getSourceContext() const { DARABONBA_GET(sourceContext_) };
      Darabonba::Json & getSourceContext() { DARABONBA_GET(sourceContext_) };
      inline Todos& setSourceContext(const Darabonba::Json & sourceContext) { DARABONBA_SET_VALUE(sourceContext_, sourceContext) };
      inline Todos& setSourceContext(Darabonba::Json && sourceContext) { DARABONBA_SET_RVALUE(sourceContext_, sourceContext) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Todos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Todos& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Todos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // todoId Field Functions 
      bool hasTodoId() const { return this->todoId_ != nullptr;};
      void deleteTodoId() { this->todoId_ = nullptr;};
      inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
      inline Todos& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


    protected:
      // 全部处理人
      shared_ptr<vector<Todos::Assignees>> assignees_ {};
      // 完成时间（北京时间）
      shared_ptr<string> completedAt_ {};
      // 完成人用户ID
      shared_ptr<string> completedByUserId_ {};
      // 创建时间（北京时间）
      shared_ptr<string> gmtCreate_ {};
      // 最后修改时间（北京时间）
      shared_ptr<string> gmtModified_ {};
      // assistant 消息ID；无会话来源为空
      shared_ptr<string> messageId_ {};
      // 优先级
      shared_ptr<string> priority_ {};
      // 问题清单（JSONB 原样）
      Darabonba::Json questions_ {};
      // 作答内容（JSONB 原样）
      Darabonba::Json resultPayload_ {};
      // 来源上下文（原样透传）
      Darabonba::Json sourceContext_ {};
      // 待办主状态
      shared_ptr<string> status_ {};
      // 待办摘要
      shared_ptr<string> summary_ {};
      // 待办标题
      shared_ptr<string> title_ {};
      // 待办ID
      shared_ptr<string> todoId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->todo_ == nullptr && this->todos_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTodoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTodoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTodoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // todo Field Functions 
    bool hasTodo() const { return this->todo_ != nullptr;};
    void deleteTodo() { this->todo_ = nullptr;};
    inline     const Darabonba::Json & getTodo() const { DARABONBA_GET(todo_) };
    Darabonba::Json & getTodo() { DARABONBA_GET(todo_) };
    inline GetTodoResponseBody& setTodo(const Darabonba::Json & todo) { DARABONBA_SET_VALUE(todo_, todo) };
    inline GetTodoResponseBody& setTodo(Darabonba::Json && todo) { DARABONBA_SET_RVALUE(todo_, todo) };


    // todos Field Functions 
    bool hasTodos() const { return this->todos_ != nullptr;};
    void deleteTodos() { this->todos_ = nullptr;};
    inline const vector<GetTodoResponseBody::Todos> & getTodos() const { DARABONBA_PTR_GET_CONST(todos_, vector<GetTodoResponseBody::Todos>) };
    inline vector<GetTodoResponseBody::Todos> getTodos() { DARABONBA_PTR_GET(todos_, vector<GetTodoResponseBody::Todos>) };
    inline GetTodoResponseBody& setTodos(const vector<GetTodoResponseBody::Todos> & todos) { DARABONBA_PTR_SET_VALUE(todos_, todos) };
    inline GetTodoResponseBody& setTodos(vector<GetTodoResponseBody::Todos> && todos) { DARABONBA_PTR_SET_RVALUE(todos_, todos) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // todoId 查询时的单条结果（其余查询为空）；字段集同 getTodoDetail 平铺结构
    Darabonba::Json todo_ {};
    // workItemId/messageId 查询时的多条结果（todoId 查询为空）
    shared_ptr<vector<GetTodoResponseBody::Todos>> todos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
