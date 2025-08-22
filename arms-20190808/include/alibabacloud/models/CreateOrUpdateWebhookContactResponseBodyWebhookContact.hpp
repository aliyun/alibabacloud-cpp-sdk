// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODYWEBHOOKCONTACT_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODYWEBHOOKCONTACT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateWebhookContactResponseBodyWebhookContact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateWebhookContactResponseBodyWebhookContact& obj) { 
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
      DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateWebhookContactResponseBodyWebhookContact& obj) { 
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
      DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
    };
    CreateOrUpdateWebhookContactResponseBodyWebhookContact() = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContact(const CreateOrUpdateWebhookContactResponseBodyWebhookContact &) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContact(CreateOrUpdateWebhookContactResponseBodyWebhookContact &&) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateWebhookContactResponseBodyWebhookContact() = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContact& operator=(const CreateOrUpdateWebhookContactResponseBodyWebhookContact &) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContact& operator=(CreateOrUpdateWebhookContactResponseBodyWebhookContact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->webhook_ != nullptr
        && this->webhookId_ != nullptr && this->webhookName_ != nullptr; };
    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook & webhook() const { DARABONBA_PTR_GET_CONST(webhook_, Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook) };
    inline Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook webhook() { DARABONBA_PTR_GET(webhook_, Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook) };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContact& setWebhook(const Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContact& setWebhook(Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline float webhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0.0) };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContact& setWebhookId(float webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


    // webhookName Field Functions 
    bool hasWebhookName() const { return this->webhookName_ != nullptr;};
    void deleteWebhookName() { this->webhookName_ = nullptr;};
    inline string webhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContact& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


  protected:
    // The information about the webhook alert contact.
    std::shared_ptr<Models::CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook> webhook_ = nullptr;
    // The ID of the webhook alert contact.
    std::shared_ptr<float> webhookId_ = nullptr;
    // The name of the webhook alert contact.
    std::shared_ptr<string> webhookName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
