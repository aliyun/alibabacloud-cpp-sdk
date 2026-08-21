// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALALIDINGCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreatePersonalAliDingChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalAliDingChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalAliDingChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    CreatePersonalAliDingChatResponseBody() = default ;
    CreatePersonalAliDingChatResponseBody(const CreatePersonalAliDingChatResponseBody &) = default ;
    CreatePersonalAliDingChatResponseBody(CreatePersonalAliDingChatResponseBody &&) = default ;
    CreatePersonalAliDingChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalAliDingChatResponseBody() = default ;
    CreatePersonalAliDingChatResponseBody& operator=(const CreatePersonalAliDingChatResponseBody &) = default ;
    CreatePersonalAliDingChatResponseBody& operator=(CreatePersonalAliDingChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatId_ == nullptr
        && this->code_ == nullptr && this->directoryId_ == nullptr && this->gmtCreate_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->requestId_ == nullptr && this->scope_ == nullptr && this->sourceId_ == nullptr && this->status_ == nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreatePersonalAliDingChatResponseBody& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreatePersonalAliDingChatResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreatePersonalAliDingChatResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreatePersonalAliDingChatResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePersonalAliDingChatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePersonalAliDingChatResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePersonalAliDingChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreatePersonalAliDingChatResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreatePersonalAliDingChatResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePersonalAliDingChatResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The DingTalk group chat session ID.
    shared_ptr<string> chatId_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The folder ID.
    shared_ptr<string> directoryId_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The skill name.
    shared_ptr<string> name_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The permission scope.
    shared_ptr<string> scope_ {};
    // The original project ID.
    shared_ptr<string> sourceId_ {};
    // The call status. Valid values:
    // - **PENDING**: Waiting for acknowledgment.
    // - **SUCCESS**: Succeeded.
    // - **FAILED**: Failed.
    // - **TIMEOUT**: Timed out.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
