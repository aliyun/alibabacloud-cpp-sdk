// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOAUTH2CREDENTIALPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOAUTH2CREDENTIALPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateOAuth2CredentialProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOAuth2CredentialProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_TO_JSON(OAuth2ProviderConfig, OAuth2ProviderConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOAuth2CredentialProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(OAuth2ProviderConfig, OAuth2ProviderConfigShrink_);
    };
    CreateOAuth2CredentialProviderShrinkRequest() = default ;
    CreateOAuth2CredentialProviderShrinkRequest(const CreateOAuth2CredentialProviderShrinkRequest &) = default ;
    CreateOAuth2CredentialProviderShrinkRequest(CreateOAuth2CredentialProviderShrinkRequest &&) = default ;
    CreateOAuth2CredentialProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOAuth2CredentialProviderShrinkRequest() = default ;
    CreateOAuth2CredentialProviderShrinkRequest& operator=(const CreateOAuth2CredentialProviderShrinkRequest &) = default ;
    CreateOAuth2CredentialProviderShrinkRequest& operator=(CreateOAuth2CredentialProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackURL_ == nullptr
        && return this->credentialProviderVendor_ == nullptr && return this->description_ == nullptr && return this->OAuth2CredentialProviderName_ == nullptr && return this->OAuth2ProviderConfigShrink_ == nullptr; };
    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline CreateOAuth2CredentialProviderShrinkRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // credentialProviderVendor Field Functions 
    bool hasCredentialProviderVendor() const { return this->credentialProviderVendor_ != nullptr;};
    void deleteCredentialProviderVendor() { this->credentialProviderVendor_ = nullptr;};
    inline string credentialProviderVendor() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderVendor_, "") };
    inline CreateOAuth2CredentialProviderShrinkRequest& setCredentialProviderVendor(string credentialProviderVendor) { DARABONBA_PTR_SET_VALUE(credentialProviderVendor_, credentialProviderVendor) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOAuth2CredentialProviderShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OAuth2CredentialProviderName Field Functions 
    bool hasOAuth2CredentialProviderName() const { return this->OAuth2CredentialProviderName_ != nullptr;};
    void deleteOAuth2CredentialProviderName() { this->OAuth2CredentialProviderName_ = nullptr;};
    inline string OAuth2CredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(OAuth2CredentialProviderName_, "") };
    inline CreateOAuth2CredentialProviderShrinkRequest& setOAuth2CredentialProviderName(string OAuth2CredentialProviderName) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviderName_, OAuth2CredentialProviderName) };


    // OAuth2ProviderConfigShrink Field Functions 
    bool hasOAuth2ProviderConfigShrink() const { return this->OAuth2ProviderConfigShrink_ != nullptr;};
    void deleteOAuth2ProviderConfigShrink() { this->OAuth2ProviderConfigShrink_ = nullptr;};
    inline string OAuth2ProviderConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(OAuth2ProviderConfigShrink_, "") };
    inline CreateOAuth2CredentialProviderShrinkRequest& setOAuth2ProviderConfigShrink(string OAuth2ProviderConfigShrink) { DARABONBA_PTR_SET_VALUE(OAuth2ProviderConfigShrink_, OAuth2ProviderConfigShrink) };


  protected:
    std::shared_ptr<string> callbackURL_ = nullptr;
    std::shared_ptr<string> credentialProviderVendor_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> OAuth2CredentialProviderName_ = nullptr;
    std::shared_ptr<string> OAuth2ProviderConfigShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
