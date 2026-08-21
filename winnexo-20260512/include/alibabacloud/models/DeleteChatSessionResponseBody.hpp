// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHATSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECHATSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DeleteChatSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChatSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(deleted, deleted_);
      DARABONBA_PTR_TO_JSON(hardDelete, hardDelete_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChatSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(hardDelete, hardDelete_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    DeleteChatSessionResponseBody() = default ;
    DeleteChatSessionResponseBody(const DeleteChatSessionResponseBody &) = default ;
    DeleteChatSessionResponseBody(DeleteChatSessionResponseBody &&) = default ;
    DeleteChatSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChatSessionResponseBody() = default ;
    DeleteChatSessionResponseBody& operator=(const DeleteChatSessionResponseBody &) = default ;
    DeleteChatSessionResponseBody& operator=(DeleteChatSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->deleted_ == nullptr && this->hardDelete_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteChatSessionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline DeleteChatSessionResponseBody& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // hardDelete Field Functions 
    bool hasHardDelete() const { return this->hardDelete_ != nullptr;};
    void deleteHardDelete() { this->hardDelete_ = nullptr;};
    inline bool getHardDelete() const { DARABONBA_PTR_GET_DEFAULT(hardDelete_, false) };
    inline DeleteChatSessionResponseBody& setHardDelete(bool hardDelete) { DARABONBA_PTR_SET_VALUE(hardDelete_, hardDelete) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteChatSessionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteChatSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DeleteChatSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // Indicates whether the session is deleted.
    shared_ptr<bool> deleted_ {};
    // Indicates whether the session is hard-deleted.
    shared_ptr<bool> hardDelete_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The unique identifier of the function session.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
