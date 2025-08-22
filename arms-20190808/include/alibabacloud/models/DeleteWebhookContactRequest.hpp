// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBHOOKCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBHOOKCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteWebhookContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebhookContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WebhookId, webhookId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebhookContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WebhookId, webhookId_);
    };
    DeleteWebhookContactRequest() = default ;
    DeleteWebhookContactRequest(const DeleteWebhookContactRequest &) = default ;
    DeleteWebhookContactRequest(DeleteWebhookContactRequest &&) = default ;
    DeleteWebhookContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebhookContactRequest() = default ;
    DeleteWebhookContactRequest& operator=(const DeleteWebhookContactRequest &) = default ;
    DeleteWebhookContactRequest& operator=(DeleteWebhookContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->webhookId_ != nullptr; };
    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline int64_t webhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, 0L) };
    inline DeleteWebhookContactRequest& setWebhookId(int64_t webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


  protected:
    // The ID of the webhook alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> webhookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
