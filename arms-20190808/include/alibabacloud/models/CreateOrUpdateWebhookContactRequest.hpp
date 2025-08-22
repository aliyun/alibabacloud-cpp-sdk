// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateWebhookContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateWebhookContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizHeaders, bizHeaders_);
      DARABONBA_PTR_TO_JSON(BizParams, bizParams_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateWebhookContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizHeaders, bizHeaders_);
      DARABONBA_PTR_FROM_JSON(BizParams, bizParams_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
    };
    CreateOrUpdateWebhookContactRequest() = default ;
    CreateOrUpdateWebhookContactRequest(const CreateOrUpdateWebhookContactRequest &) = default ;
    CreateOrUpdateWebhookContactRequest(CreateOrUpdateWebhookContactRequest &&) = default ;
    CreateOrUpdateWebhookContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateWebhookContactRequest() = default ;
    CreateOrUpdateWebhookContactRequest& operator=(const CreateOrUpdateWebhookContactRequest &) = default ;
    CreateOrUpdateWebhookContactRequest& operator=(CreateOrUpdateWebhookContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizHeaders_ != nullptr
        && this->bizParams_ != nullptr && this->body_ != nullptr && this->method_ != nullptr && this->recoverBody_ != nullptr && this->url_ != nullptr
        && this->webhookId_ != nullptr && this->webhookName_ != nullptr; };
    // bizHeaders Field Functions 
    bool hasBizHeaders() const { return this->bizHeaders_ != nullptr;};
    void deleteBizHeaders() { this->bizHeaders_ = nullptr;};
    inline string bizHeaders() const { DARABONBA_PTR_GET_DEFAULT(bizHeaders_, "") };
    inline CreateOrUpdateWebhookContactRequest& setBizHeaders(string bizHeaders) { DARABONBA_PTR_SET_VALUE(bizHeaders_, bizHeaders) };


    // bizParams Field Functions 
    bool hasBizParams() const { return this->bizParams_ != nullptr;};
    void deleteBizParams() { this->bizParams_ = nullptr;};
    inline string bizParams() const { DARABONBA_PTR_GET_DEFAULT(bizParams_, "") };
    inline CreateOrUpdateWebhookContactRequest& setBizParams(string bizParams) { DARABONBA_PTR_SET_VALUE(bizParams_, bizParams) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateOrUpdateWebhookContactRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateOrUpdateWebhookContactRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // recoverBody Field Functions 
    bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
    void deleteRecoverBody() { this->recoverBody_ = nullptr;};
    inline string recoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
    inline CreateOrUpdateWebhookContactRequest& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateOrUpdateWebhookContactRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline int64_t webhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0L) };
    inline CreateOrUpdateWebhookContactRequest& setWebhookId(int64_t webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


    // webhookName Field Functions 
    bool hasWebhookName() const { return this->webhookName_ != nullptr;};
    void deleteWebhookName() { this->webhookName_ = nullptr;};
    inline string webhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
    inline CreateOrUpdateWebhookContactRequest& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


  protected:
    // The HTTP request headers.
    std::shared_ptr<string> bizHeaders_ = nullptr;
    // The parameters in the HTTP request.
    std::shared_ptr<string> bizParams_ = nullptr;
    // The notification template that is sent when an alert is triggered. This parameter is required if the **Method** parameter is set to **Post**. You can use the `$content` placeholder to specify the notification content. The content cannot exceed 500 characters in length. For more information, see [Variable description of a notification template](https://help.aliyun.com/document_detail/251834.html).\\\\
    std::shared_ptr<string> body_ = nullptr;
    // The HTTP request method.
    // 
    // *   Post
    // *   Get
    // 
    // This parameter is required.
    std::shared_ptr<string> method_ = nullptr;
    // The notification template that is sent when an alert is resolved. This parameter is required if the **Method** parameter is set to **Post**. You can use the `$content` placeholder to specify the notification content. The content cannot exceed 500 characters in length. For more information, see [Variable description of a notification template](https://help.aliyun.com/document_detail/251834.html).
    std::shared_ptr<string> recoverBody_ = nullptr;
    // The URL of the HTTP request **method**.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // The ID of the webhook alert contact.
    // 
    // *   If you do not specify this parameter, a new webhook alert contact is created.
    // * If you specify this parameter, the specified webhook alert contact is modified.
    std::shared_ptr<int64_t> webhookId_ = nullptr;
    // The name of the webhook alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> webhookName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
