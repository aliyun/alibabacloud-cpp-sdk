// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSWEBHOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSWEBHOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsWebhookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsWebhookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsWebhookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    ListApsWebhookResponseBody() = default ;
    ListApsWebhookResponseBody(const ListApsWebhookResponseBody &) = default ;
    ListApsWebhookResponseBody(ListApsWebhookResponseBody &&) = default ;
    ListApsWebhookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsWebhookResponseBody() = default ;
    ListApsWebhookResponseBody& operator=(const ListApsWebhookResponseBody &) = default ;
    ListApsWebhookResponseBody& operator=(ListApsWebhookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Webhook : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Webhook& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
      };
      friend void from_json(const Darabonba::Json& j, Webhook& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
      };
      Webhook() = default ;
      Webhook(const Webhook &) = default ;
      Webhook(Webhook &&) = default ;
      Webhook(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Webhook() = default ;
      Webhook& operator=(const Webhook &) = default ;
      Webhook& operator=(Webhook &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->name_ == nullptr && this->url_ == nullptr && this->webhookId_ == nullptr && this->webhookType_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Webhook& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Webhook& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Webhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // webhookId Field Functions 
      bool hasWebhookId() const { return this->webhookId_ != nullptr;};
      void deleteWebhookId() { this->webhookId_ = nullptr;};
      inline string getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, "") };
      inline Webhook& setWebhookId(string webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


      // webhookType Field Functions 
      bool hasWebhookType() const { return this->webhookType_ != nullptr;};
      void deleteWebhookType() { this->webhookType_ = nullptr;};
      inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
      inline Webhook& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


    protected:
      // Signing key
      shared_ptr<string> key_ {};
      // The name of the webhook.
      shared_ptr<string> name_ {};
      // The request URL.
      shared_ptr<string> url_ {};
      // The ID of the webhook that you want to delete.
      shared_ptr<string> webhookId_ {};
      // Webhook type.
      shared_ptr<string> webhookType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->webhook_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApsWebhookResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApsWebhookResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApsWebhookResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApsWebhookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApsWebhookResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const vector<ListApsWebhookResponseBody::Webhook> & getWebhook() const { DARABONBA_PTR_GET_CONST(webhook_, vector<ListApsWebhookResponseBody::Webhook>) };
    inline vector<ListApsWebhookResponseBody::Webhook> getWebhook() { DARABONBA_PTR_GET(webhook_, vector<ListApsWebhookResponseBody::Webhook>) };
    inline ListApsWebhookResponseBody& setWebhook(const vector<ListApsWebhookResponseBody::Webhook> & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline ListApsWebhookResponseBody& setWebhook(vector<ListApsWebhookResponseBody::Webhook> && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


  protected:
    // API status or POP error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The array of webhooks.
    shared_ptr<vector<ListApsWebhookResponseBody::Webhook>> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
