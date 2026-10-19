// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETODORESPONSEBODY_HPP_
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
  class CreateTodoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(assignees, assignees_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(assignees, assignees_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    CreateTodoResponseBody() = default ;
    CreateTodoResponseBody(const CreateTodoResponseBody &) = default ;
    CreateTodoResponseBody(CreateTodoResponseBody &&) = default ;
    CreateTodoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoResponseBody() = default ;
    CreateTodoResponseBody& operator=(const CreateTodoResponseBody &) = default ;
    CreateTodoResponseBody& operator=(CreateTodoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Assignees : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assignees& obj) { 
        DARABONBA_PTR_TO_JSON(assigneeUserId, assigneeUserId_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Assignees& obj) { 
        DARABONBA_PTR_FROM_JSON(assigneeUserId, assigneeUserId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->assigneeUserId_ == nullptr
        && this->status_ == nullptr; };
      // assigneeUserId Field Functions 
      bool hasAssigneeUserId() const { return this->assigneeUserId_ != nullptr;};
      void deleteAssigneeUserId() { this->assigneeUserId_ = nullptr;};
      inline string getAssigneeUserId() const { DARABONBA_PTR_GET_DEFAULT(assigneeUserId_, "") };
      inline Assignees& setAssigneeUserId(string assigneeUserId) { DARABONBA_PTR_SET_VALUE(assigneeUserId_, assigneeUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Assignees& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 处理人用户ID
      shared_ptr<string> assigneeUserId_ {};
      // 处理人行状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->assignees_ == nullptr
        && this->code_ == nullptr && this->gmtCreate_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->todoId_ == nullptr; };
    // assignees Field Functions 
    bool hasAssignees() const { return this->assignees_ != nullptr;};
    void deleteAssignees() { this->assignees_ = nullptr;};
    inline const vector<CreateTodoResponseBody::Assignees> & getAssignees() const { DARABONBA_PTR_GET_CONST(assignees_, vector<CreateTodoResponseBody::Assignees>) };
    inline vector<CreateTodoResponseBody::Assignees> getAssignees() { DARABONBA_PTR_GET(assignees_, vector<CreateTodoResponseBody::Assignees>) };
    inline CreateTodoResponseBody& setAssignees(const vector<CreateTodoResponseBody::Assignees> & assignees) { DARABONBA_PTR_SET_VALUE(assignees_, assignees) };
    inline CreateTodoResponseBody& setAssignees(vector<CreateTodoResponseBody::Assignees> && assignees) { DARABONBA_PTR_SET_RVALUE(assignees_, assignees) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTodoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateTodoResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTodoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTodoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTodoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline CreateTodoResponseBody& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // 处理人列表
    shared_ptr<vector<CreateTodoResponseBody::Assignees>> assignees_ {};
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 创建时间（ISO8601 带时区；与列表/详情的北京时间格式串不同）
    shared_ptr<string> gmtCreate_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 待办状态
    shared_ptr<string> status_ {};
    // 新建待办ID
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
