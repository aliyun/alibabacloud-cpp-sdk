// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKTODOSREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MARKTODOSREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class MarkTodosReadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkTodosReadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(unreadCount, unreadCount_);
      DARABONBA_PTR_TO_JSON(updatedCount, updatedCount_);
    };
    friend void from_json(const Darabonba::Json& j, MarkTodosReadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(unreadCount, unreadCount_);
      DARABONBA_PTR_FROM_JSON(updatedCount, updatedCount_);
    };
    MarkTodosReadResponseBody() = default ;
    MarkTodosReadResponseBody(const MarkTodosReadResponseBody &) = default ;
    MarkTodosReadResponseBody(MarkTodosReadResponseBody &&) = default ;
    MarkTodosReadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkTodosReadResponseBody() = default ;
    MarkTodosReadResponseBody& operator=(const MarkTodosReadResponseBody &) = default ;
    MarkTodosReadResponseBody& operator=(MarkTodosReadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->unreadCount_ == nullptr && this->updatedCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MarkTodosReadResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MarkTodosReadResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MarkTodosReadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unreadCount Field Functions 
    bool hasUnreadCount() const { return this->unreadCount_ != nullptr;};
    void deleteUnreadCount() { this->unreadCount_ = nullptr;};
    inline int64_t getUnreadCount() const { DARABONBA_PTR_GET_DEFAULT(unreadCount_, 0L) };
    inline MarkTodosReadResponseBody& setUnreadCount(int64_t unreadCount) { DARABONBA_PTR_SET_VALUE(unreadCount_, unreadCount) };


    // updatedCount Field Functions 
    bool hasUpdatedCount() const { return this->updatedCount_ != nullptr;};
    void deleteUpdatedCount() { this->updatedCount_ = nullptr;};
    inline int64_t getUpdatedCount() const { DARABONBA_PTR_GET_DEFAULT(updatedCount_, 0L) };
    inline MarkTodosReadResponseBody& setUpdatedCount(int64_t updatedCount) { DARABONBA_PTR_SET_VALUE(updatedCount_, updatedCount) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of unread to-do items remaining after the operation.
    shared_ptr<int64_t> unreadCount_ {};
    // The number of to-do items marked as read in this request.
    shared_ptr<int64_t> updatedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
