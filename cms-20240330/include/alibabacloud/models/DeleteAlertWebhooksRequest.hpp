// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTWEBHOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTWEBHOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertWebhooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertWebhooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(webhookIds, webhookIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertWebhooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(webhookIds, webhookIds_);
    };
    DeleteAlertWebhooksRequest() = default ;
    DeleteAlertWebhooksRequest(const DeleteAlertWebhooksRequest &) = default ;
    DeleteAlertWebhooksRequest(DeleteAlertWebhooksRequest &&) = default ;
    DeleteAlertWebhooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertWebhooksRequest() = default ;
    DeleteAlertWebhooksRequest& operator=(const DeleteAlertWebhooksRequest &) = default ;
    DeleteAlertWebhooksRequest& operator=(DeleteAlertWebhooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webhookIds_ == nullptr; };
    // webhookIds Field Functions 
    bool hasWebhookIds() const { return this->webhookIds_ != nullptr;};
    void deleteWebhookIds() { this->webhookIds_ = nullptr;};
    inline const vector<string> & getWebhookIds() const { DARABONBA_PTR_GET_CONST(webhookIds_, vector<string>) };
    inline vector<string> getWebhookIds() { DARABONBA_PTR_GET(webhookIds_, vector<string>) };
    inline DeleteAlertWebhooksRequest& setWebhookIds(const vector<string> & webhookIds) { DARABONBA_PTR_SET_VALUE(webhookIds_, webhookIds) };
    inline DeleteAlertWebhooksRequest& setWebhookIds(vector<string> && webhookIds) { DARABONBA_PTR_SET_RVALUE(webhookIds_, webhookIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> webhookIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
