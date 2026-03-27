// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTWEBHOOKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTWEBHOOKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertWebhooksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertWebhooksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(webhookIds, webhookIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertWebhooksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(webhookIds, webhookIdsShrink_);
    };
    DeleteAlertWebhooksShrinkRequest() = default ;
    DeleteAlertWebhooksShrinkRequest(const DeleteAlertWebhooksShrinkRequest &) = default ;
    DeleteAlertWebhooksShrinkRequest(DeleteAlertWebhooksShrinkRequest &&) = default ;
    DeleteAlertWebhooksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertWebhooksShrinkRequest() = default ;
    DeleteAlertWebhooksShrinkRequest& operator=(const DeleteAlertWebhooksShrinkRequest &) = default ;
    DeleteAlertWebhooksShrinkRequest& operator=(DeleteAlertWebhooksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webhookIdsShrink_ == nullptr; };
    // webhookIdsShrink Field Functions 
    bool hasWebhookIdsShrink() const { return this->webhookIdsShrink_ != nullptr;};
    void deleteWebhookIdsShrink() { this->webhookIdsShrink_ = nullptr;};
    inline string getWebhookIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(webhookIdsShrink_, "") };
    inline DeleteAlertWebhooksShrinkRequest& setWebhookIdsShrink(string webhookIdsShrink) { DARABONBA_PTR_SET_VALUE(webhookIdsShrink_, webhookIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> webhookIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
