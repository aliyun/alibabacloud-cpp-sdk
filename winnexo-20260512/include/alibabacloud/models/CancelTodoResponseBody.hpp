// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELTODORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELTODORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CancelTodoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelTodoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(todoId, todoId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelTodoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cancelledCount, cancelledCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(todoId, todoId_);
    };
    CancelTodoResponseBody() = default ;
    CancelTodoResponseBody(const CancelTodoResponseBody &) = default ;
    CancelTodoResponseBody(CancelTodoResponseBody &&) = default ;
    CancelTodoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelTodoResponseBody() = default ;
    CancelTodoResponseBody& operator=(const CancelTodoResponseBody &) = default ;
    CancelTodoResponseBody& operator=(CancelTodoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelledCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->todoId_ == nullptr; };
    // cancelledCount Field Functions 
    bool hasCancelledCount() const { return this->cancelledCount_ != nullptr;};
    void deleteCancelledCount() { this->cancelledCount_ = nullptr;};
    inline int64_t getCancelledCount() const { DARABONBA_PTR_GET_DEFAULT(cancelledCount_, 0L) };
    inline CancelTodoResponseBody& setCancelledCount(int64_t cancelledCount) { DARABONBA_PTR_SET_VALUE(cancelledCount_, cancelledCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CancelTodoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CancelTodoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelTodoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CancelTodoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todoId Field Functions 
    bool hasTodoId() const { return this->todoId_ != nullptr;};
    void deleteTodoId() { this->todoId_ = nullptr;};
    inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
    inline CancelTodoResponseBody& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


  protected:
    // The number of canceled to-do items.
    shared_ptr<int64_t> cancelledCount_ {};
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status after cancellation.
    shared_ptr<string> status_ {};
    // The ID of the canceled to-do item. This parameter is empty if the to-do item is located by workItemId.
    shared_ptr<string> todoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
