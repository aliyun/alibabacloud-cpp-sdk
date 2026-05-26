// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class RegisterWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackSecret, callbackSecret_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackSecret, callbackSecret_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
    };
    RegisterWebhookRequest() = default ;
    RegisterWebhookRequest(const RegisterWebhookRequest &) = default ;
    RegisterWebhookRequest(RegisterWebhookRequest &&) = default ;
    RegisterWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterWebhookRequest() = default ;
    RegisterWebhookRequest& operator=(const RegisterWebhookRequest &) = default ;
    RegisterWebhookRequest& operator=(RegisterWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackSecret_ == nullptr
        && this->callbackUrl_ == nullptr; };
    // callbackSecret Field Functions 
    bool hasCallbackSecret() const { return this->callbackSecret_ != nullptr;};
    void deleteCallbackSecret() { this->callbackSecret_ = nullptr;};
    inline string getCallbackSecret() const { DARABONBA_PTR_GET_DEFAULT(callbackSecret_, "") };
    inline RegisterWebhookRequest& setCallbackSecret(string callbackSecret) { DARABONBA_PTR_SET_VALUE(callbackSecret_, callbackSecret) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline RegisterWebhookRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


  protected:
    shared_ptr<string> callbackSecret_ {};
    shared_ptr<string> callbackUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
