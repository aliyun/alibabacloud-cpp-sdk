// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTTODOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COUNTTODOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CountTodosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountTodosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(pendingCount, pendingCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(unreadCount, unreadCount_);
    };
    friend void from_json(const Darabonba::Json& j, CountTodosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(pendingCount, pendingCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(unreadCount, unreadCount_);
    };
    CountTodosResponseBody() = default ;
    CountTodosResponseBody(const CountTodosResponseBody &) = default ;
    CountTodosResponseBody(CountTodosResponseBody &&) = default ;
    CountTodosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountTodosResponseBody() = default ;
    CountTodosResponseBody& operator=(const CountTodosResponseBody &) = default ;
    CountTodosResponseBody& operator=(CountTodosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pendingCount_ == nullptr && this->requestId_ == nullptr && this->unreadCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CountTodosResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CountTodosResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pendingCount Field Functions 
    bool hasPendingCount() const { return this->pendingCount_ != nullptr;};
    void deletePendingCount() { this->pendingCount_ = nullptr;};
    inline int64_t getPendingCount() const { DARABONBA_PTR_GET_DEFAULT(pendingCount_, 0L) };
    inline CountTodosResponseBody& setPendingCount(int64_t pendingCount) { DARABONBA_PTR_SET_VALUE(pendingCount_, pendingCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CountTodosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unreadCount Field Functions 
    bool hasUnreadCount() const { return this->unreadCount_ != nullptr;};
    void deleteUnreadCount() { this->unreadCount_ = nullptr;};
    inline int64_t getUnreadCount() const { DARABONBA_PTR_GET_DEFAULT(unreadCount_, 0L) };
    inline CountTodosResponseBody& setUnreadCount(int64_t unreadCount) { DARABONBA_PTR_SET_VALUE(unreadCount_, unreadCount) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 待处理数量（PENDING 主状态）
    shared_ptr<int64_t> pendingCount_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 未读数量（处理人 readAt 为空）
    shared_ptr<int64_t> unreadCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
