// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTODORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTODORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SubmitTodoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTodoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(completedByUserId, completedByUserId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTodoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(completedByUserId, completedByUserId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    SubmitTodoResponseBody() = default ;
    SubmitTodoResponseBody(const SubmitTodoResponseBody &) = default ;
    SubmitTodoResponseBody(SubmitTodoResponseBody &&) = default ;
    SubmitTodoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTodoResponseBody() = default ;
    SubmitTodoResponseBody& operator=(const SubmitTodoResponseBody &) = default ;
    SubmitTodoResponseBody& operator=(SubmitTodoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->completedAt_ == nullptr && this->completedByUserId_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->todoId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitTodoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline SubmitTodoResponseBody& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // completedByUserId Field Functions 
    bool hasCompletedByUserId() const { return this->completedByUserId_ != nullptr;};
    void deleteCompletedByUserId() { this->completedByUserId_ = nullptr;};
    inline string getCompletedByUserId() const { DARABONBA_PTR_GET_DEFAULT(completedByUserId_, "") };
    inline SubmitTodoResponseBody& setCompletedByUserId(string completedByUserId) { DARABONBA_PTR_SET_VALUE(completedByUserId_, completedByUserId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SubmitTodoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTodoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubmitTodoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline SubmitTodoResponseBody& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The completion time in ISO 8601 UTC format. Note that this format differs from other time fields formatted in UTC+8.
    shared_ptr<string> completedAt_ {};
    // The user ID of the user who completed the item.
    shared_ptr<string> completedByUserId_ {};
    // The error description.
    shared_ptr<string> message_ {};
    // The request tracking ID.
    shared_ptr<string> requestId_ {};
    // The status after submission. This value is always COMPLETED.
    shared_ptr<string> status_ {};
    // The ID of the to-do item.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
