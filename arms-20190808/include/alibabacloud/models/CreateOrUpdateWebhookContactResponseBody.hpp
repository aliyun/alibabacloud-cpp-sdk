// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateWebhookContactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateWebhookContactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebhookContact, webhookContact_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateWebhookContactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebhookContact, webhookContact_);
    };
    CreateOrUpdateWebhookContactResponseBody() = default ;
    CreateOrUpdateWebhookContactResponseBody(const CreateOrUpdateWebhookContactResponseBody &) = default ;
    CreateOrUpdateWebhookContactResponseBody(CreateOrUpdateWebhookContactResponseBody &&) = default ;
    CreateOrUpdateWebhookContactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateWebhookContactResponseBody() = default ;
    CreateOrUpdateWebhookContactResponseBody& operator=(const CreateOrUpdateWebhookContactResponseBody &) = default ;
    CreateOrUpdateWebhookContactResponseBody& operator=(CreateOrUpdateWebhookContactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebhookContact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebhookContact& obj) { 
        DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
      };
      friend void from_json(const Darabonba::Json& j, WebhookContact& obj) { 
        DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
        DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
        DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
      };
      WebhookContact() = default ;
      WebhookContact(const WebhookContact &) = default ;
      WebhookContact(WebhookContact &&) = default ;
      WebhookContact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebhookContact() = default ;
      WebhookContact& operator=(const WebhookContact &) = default ;
      WebhookContact& operator=(WebhookContact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Webhook : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Webhook& obj) { 
          DARABONBA_PTR_TO_JSON(BizHeaders, bizHeaders_);
          DARABONBA_PTR_TO_JSON(BizParams, bizParams_);
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Webhook& obj) { 
          DARABONBA_PTR_FROM_JSON(BizHeaders, bizHeaders_);
          DARABONBA_PTR_FROM_JSON(BizParams, bizParams_);
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
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
        virtual bool empty() const override { return this->bizHeaders_ == nullptr
        && this->bizParams_ == nullptr && this->body_ == nullptr && this->method_ == nullptr && this->recoverBody_ == nullptr && this->url_ == nullptr; };
        // bizHeaders Field Functions 
        bool hasBizHeaders() const { return this->bizHeaders_ != nullptr;};
        void deleteBizHeaders() { this->bizHeaders_ = nullptr;};
        inline string getBizHeaders() const { DARABONBA_PTR_GET_DEFAULT(bizHeaders_, "") };
        inline Webhook& setBizHeaders(string bizHeaders) { DARABONBA_PTR_SET_VALUE(bizHeaders_, bizHeaders) };


        // bizParams Field Functions 
        bool hasBizParams() const { return this->bizParams_ != nullptr;};
        void deleteBizParams() { this->bizParams_ = nullptr;};
        inline string getBizParams() const { DARABONBA_PTR_GET_DEFAULT(bizParams_, "") };
        inline Webhook& setBizParams(string bizParams) { DARABONBA_PTR_SET_VALUE(bizParams_, bizParams) };


        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline Webhook& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Webhook& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // recoverBody Field Functions 
        bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
        void deleteRecoverBody() { this->recoverBody_ = nullptr;};
        inline string getRecoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
        inline Webhook& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Webhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The HTTP request headers.
        shared_ptr<string> bizHeaders_ {};
        // The parameters in the HTTP request.
        shared_ptr<string> bizParams_ {};
        // The alert notification template.
        shared_ptr<string> body_ {};
        // The HTTP request method.
        // 
        // *   Post
        // *   Get
        shared_ptr<string> method_ {};
        // The notification template for clearing alerts.
        shared_ptr<string> recoverBody_ {};
        // The URL of the request method.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->webhook_ == nullptr
        && this->webhookId_ == nullptr && this->webhookName_ == nullptr; };
      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline const WebhookContact::Webhook & getWebhook() const { DARABONBA_PTR_GET_CONST(webhook_, WebhookContact::Webhook) };
      inline WebhookContact::Webhook getWebhook() { DARABONBA_PTR_GET(webhook_, WebhookContact::Webhook) };
      inline WebhookContact& setWebhook(const WebhookContact::Webhook & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
      inline WebhookContact& setWebhook(WebhookContact::Webhook && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


      // webhookId Field Functions 
      bool hasWebhookId() const { return this->webhookId_ != nullptr;};
      void deleteWebhookId() { this->webhookId_ = nullptr;};
      inline float getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0.0) };
      inline WebhookContact& setWebhookId(float webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


      // webhookName Field Functions 
      bool hasWebhookName() const { return this->webhookName_ != nullptr;};
      void deleteWebhookName() { this->webhookName_ = nullptr;};
      inline string getWebhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
      inline WebhookContact& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


    protected:
      // The information about the webhook alert contact.
      shared_ptr<WebhookContact::Webhook> webhook_ {};
      // The ID of the webhook alert contact.
      shared_ptr<float> webhookId_ {};
      // The name of the webhook alert contact.
      shared_ptr<string> webhookName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webhookContact_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateWebhookContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webhookContact Field Functions 
    bool hasWebhookContact() const { return this->webhookContact_ != nullptr;};
    void deleteWebhookContact() { this->webhookContact_ = nullptr;};
    inline const CreateOrUpdateWebhookContactResponseBody::WebhookContact & getWebhookContact() const { DARABONBA_PTR_GET_CONST(webhookContact_, CreateOrUpdateWebhookContactResponseBody::WebhookContact) };
    inline CreateOrUpdateWebhookContactResponseBody::WebhookContact getWebhookContact() { DARABONBA_PTR_GET(webhookContact_, CreateOrUpdateWebhookContactResponseBody::WebhookContact) };
    inline CreateOrUpdateWebhookContactResponseBody& setWebhookContact(const CreateOrUpdateWebhookContactResponseBody::WebhookContact & webhookContact) { DARABONBA_PTR_SET_VALUE(webhookContact_, webhookContact) };
    inline CreateOrUpdateWebhookContactResponseBody& setWebhookContact(CreateOrUpdateWebhookContactResponseBody::WebhookContact && webhookContact) { DARABONBA_PTR_SET_RVALUE(webhookContact_, webhookContact) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned webhook alert contact.
    shared_ptr<CreateOrUpdateWebhookContactResponseBody::WebhookContact> webhookContact_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
