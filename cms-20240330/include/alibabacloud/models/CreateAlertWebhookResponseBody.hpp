// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTWEBHOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTWEBHOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertWebhookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertWebhookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertWebhookId, alertWebhookId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertWebhookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertWebhookId, alertWebhookId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAlertWebhookResponseBody() = default ;
    CreateAlertWebhookResponseBody(const CreateAlertWebhookResponseBody &) = default ;
    CreateAlertWebhookResponseBody(CreateAlertWebhookResponseBody &&) = default ;
    CreateAlertWebhookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertWebhookResponseBody() = default ;
    CreateAlertWebhookResponseBody& operator=(const CreateAlertWebhookResponseBody &) = default ;
    CreateAlertWebhookResponseBody& operator=(CreateAlertWebhookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertWebhookId_ == nullptr
        && this->requestId_ == nullptr; };
    // alertWebhookId Field Functions 
    bool hasAlertWebhookId() const { return this->alertWebhookId_ != nullptr;};
    void deleteAlertWebhookId() { this->alertWebhookId_ = nullptr;};
    inline string getAlertWebhookId() const { DARABONBA_PTR_GET_DEFAULT(alertWebhookId_, "") };
    inline CreateAlertWebhookResponseBody& setAlertWebhookId(string alertWebhookId) { DARABONBA_PTR_SET_VALUE(alertWebhookId_, alertWebhookId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertWebhookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> alertWebhookId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
