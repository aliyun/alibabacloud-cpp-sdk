// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBHOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBHOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateWebhookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebhookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebhookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWebhookResponseBody() = default ;
    CreateWebhookResponseBody(const CreateWebhookResponseBody &) = default ;
    CreateWebhookResponseBody(CreateWebhookResponseBody &&) = default ;
    CreateWebhookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebhookResponseBody() = default ;
    CreateWebhookResponseBody& operator=(const CreateWebhookResponseBody &) = default ;
    CreateWebhookResponseBody& operator=(CreateWebhookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->requestId_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CreateWebhookResponseBody& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWebhookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the contact for webhook alerts.
    std::shared_ptr<string> contactId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
