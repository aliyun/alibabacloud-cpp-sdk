// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READWEBHOOKCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READWEBHOOKCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadWebhookContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadWebhookContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadWebhookContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadWebhookContactResponseBody() = default ;
    ReadWebhookContactResponseBody(const ReadWebhookContactResponseBody &) = default ;
    ReadWebhookContactResponseBody(ReadWebhookContactResponseBody &&) = default ;
    ReadWebhookContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadWebhookContactResponseBody() = default ;
    ReadWebhookContactResponseBody& operator=(const ReadWebhookContactResponseBody &) = default ;
    ReadWebhookContactResponseBody& operator=(ReadWebhookContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BotSecurityToken, botSecurityToken_);
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_TO_JSON(ServerUrl, serverUrl_);
        DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BotSecurityToken, botSecurityToken_);
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
        DARABONBA_PTR_FROM_JSON(ServerUrl, serverUrl_);
        DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->botSecurityToken_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->securityToken_ == nullptr && this->serverUrl_ == nullptr && this->webhookType_ == nullptr; };
      // botSecurityToken Field Functions 
      bool hasBotSecurityToken() const { return this->botSecurityToken_ != nullptr;};
      void deleteBotSecurityToken() { this->botSecurityToken_ = nullptr;};
      inline string getBotSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(botSecurityToken_, "") };
      inline Data& setBotSecurityToken(string botSecurityToken) { DARABONBA_PTR_SET_VALUE(botSecurityToken_, botSecurityToken) };


      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
      inline Data& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Data& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


      // serverUrl Field Functions 
      bool hasServerUrl() const { return this->serverUrl_ != nullptr;};
      void deleteServerUrl() { this->serverUrl_ = nullptr;};
      inline string getServerUrl() const { DARABONBA_PTR_GET_DEFAULT(serverUrl_, "") };
      inline Data& setServerUrl(string serverUrl) { DARABONBA_PTR_SET_VALUE(serverUrl_, serverUrl) };


      // webhookType Field Functions 
      bool hasWebhookType() const { return this->webhookType_ != nullptr;};
      void deleteWebhookType() { this->webhookType_ = nullptr;};
      inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
      inline Data& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


    protected:
      // The security token.
      shared_ptr<string> botSecurityToken_ {};
      // webhook id
      shared_ptr<int64_t> contactId_ {};
      // The name of the webhook contact.
      shared_ptr<string> contactName_ {};
      // The security token (deprecated).
      shared_ptr<string> securityToken_ {};
      // The bot server URL.
      shared_ptr<string> serverUrl_ {};
      // The webhook type.
      shared_ptr<string> webhookType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadWebhookContactResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadWebhookContactResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadWebhookContactResponseBody::Data) };
    inline ReadWebhookContactResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadWebhookContactResponseBody::Data) };
    inline ReadWebhookContactResponseBody& setData(const ReadWebhookContactResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadWebhookContactResponseBody& setData(ReadWebhookContactResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadWebhookContactResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadWebhookContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadWebhookContactResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<ReadWebhookContactResponseBody::Data> data_ {};
    // The business message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
