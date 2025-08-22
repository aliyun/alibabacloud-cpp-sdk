// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEANWEBHOOKCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBHOOKCONTACTSRESPONSEBODYPAGEBEANWEBHOOKCONTACTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeWebhookContactsResponseBodyPageBeanWebhookContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& obj) { 
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
      DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_TO_JSON(WebhookName, webhookName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
      DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
      DARABONBA_PTR_FROM_JSON(WebhookName, webhookName_);
    };
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts() = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts(const DescribeWebhookContactsResponseBodyPageBeanWebhookContacts &) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts(DescribeWebhookContactsResponseBodyPageBeanWebhookContacts &&) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebhookContactsResponseBodyPageBeanWebhookContacts() = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& operator=(const DescribeWebhookContactsResponseBodyPageBeanWebhookContacts &) = default ;
    DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& operator=(DescribeWebhookContactsResponseBodyPageBeanWebhookContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->webhook_ != nullptr
        && this->webhookId_ != nullptr && this->webhookName_ != nullptr; };
    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline const Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook & webhook() const { DARABONBA_PTR_GET_CONST(webhook_, Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook) };
    inline Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook webhook() { DARABONBA_PTR_GET(webhook_, Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& setWebhook(const Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook & webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& setWebhook(Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook && webhook) { DARABONBA_PTR_SET_RVALUE(webhook_, webhook) };


    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline float webhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0.0) };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& setWebhookId(float webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


    // webhookName Field Functions 
    bool hasWebhookName() const { return this->webhookName_ != nullptr;};
    void deleteWebhookName() { this->webhookName_ = nullptr;};
    inline string webhookName() const { DARABONBA_PTR_GET_DEFAULT(webhookName_, "") };
    inline DescribeWebhookContactsResponseBodyPageBeanWebhookContacts& setWebhookName(string webhookName) { DARABONBA_PTR_SET_VALUE(webhookName_, webhookName) };


  protected:
    // The details of the webhook alert contact.
    std::shared_ptr<Models::DescribeWebhookContactsResponseBodyPageBeanWebhookContactsWebhook> webhook_ = nullptr;
    // The ID of the webhook alert contact.
    std::shared_ptr<float> webhookId_ = nullptr;
    // The name of the webhook alert contact.
    std::shared_ptr<string> webhookName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
