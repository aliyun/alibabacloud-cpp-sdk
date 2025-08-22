// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateWebhookContactResponseBodyWebhookContact.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->webhookContact_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateWebhookContactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webhookContact Field Functions 
    bool hasWebhookContact() const { return this->webhookContact_ != nullptr;};
    void deleteWebhookContact() { this->webhookContact_ = nullptr;};
    inline const CreateOrUpdateWebhookContactResponseBodyWebhookContact & webhookContact() const { DARABONBA_PTR_GET_CONST(webhookContact_, CreateOrUpdateWebhookContactResponseBodyWebhookContact) };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContact webhookContact() { DARABONBA_PTR_GET(webhookContact_, CreateOrUpdateWebhookContactResponseBodyWebhookContact) };
    inline CreateOrUpdateWebhookContactResponseBody& setWebhookContact(const CreateOrUpdateWebhookContactResponseBodyWebhookContact & webhookContact) { DARABONBA_PTR_SET_VALUE(webhookContact_, webhookContact) };
    inline CreateOrUpdateWebhookContactResponseBody& setWebhookContact(CreateOrUpdateWebhookContactResponseBodyWebhookContact && webhookContact) { DARABONBA_PTR_SET_RVALUE(webhookContact_, webhookContact) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned webhook alert contact.
    std::shared_ptr<CreateOrUpdateWebhookContactResponseBodyWebhookContact> webhookContact_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
