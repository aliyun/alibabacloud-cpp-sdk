// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOAUTH2CREDENTIALPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOAUTH2CREDENTIALPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateOAuth2CredentialProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOAuth2CredentialProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_TO_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_TO_JSON(OAuth2ProviderConfig, OAuth2ProviderConfigShrink_);
      DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOAuth2CredentialProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
      DARABONBA_PTR_FROM_JSON(CredentialProviderVendor, credentialProviderVendor_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(OAuth2ProviderConfig, OAuth2ProviderConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
    };
    UpdateOAuth2CredentialProviderShrinkRequest() = default ;
    UpdateOAuth2CredentialProviderShrinkRequest(const UpdateOAuth2CredentialProviderShrinkRequest &) = default ;
    UpdateOAuth2CredentialProviderShrinkRequest(UpdateOAuth2CredentialProviderShrinkRequest &&) = default ;
    UpdateOAuth2CredentialProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOAuth2CredentialProviderShrinkRequest() = default ;
    UpdateOAuth2CredentialProviderShrinkRequest& operator=(const UpdateOAuth2CredentialProviderShrinkRequest &) = default ;
    UpdateOAuth2CredentialProviderShrinkRequest& operator=(UpdateOAuth2CredentialProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackURL_ == nullptr
        && this->credentialProviderVendor_ == nullptr && this->description_ == nullptr && this->OAuth2CredentialProviderName_ == nullptr && this->OAuth2ProviderConfigShrink_ == nullptr && this->tokenVaultName_ == nullptr; };
    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string getCallbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // credentialProviderVendor Field Functions 
    bool hasCredentialProviderVendor() const { return this->credentialProviderVendor_ != nullptr;};
    void deleteCredentialProviderVendor() { this->credentialProviderVendor_ = nullptr;};
    inline string getCredentialProviderVendor() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderVendor_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setCredentialProviderVendor(string credentialProviderVendor) { DARABONBA_PTR_SET_VALUE(credentialProviderVendor_, credentialProviderVendor) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // OAuth2CredentialProviderName Field Functions 
    bool hasOAuth2CredentialProviderName() const { return this->OAuth2CredentialProviderName_ != nullptr;};
    void deleteOAuth2CredentialProviderName() { this->OAuth2CredentialProviderName_ = nullptr;};
    inline string getOAuth2CredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(OAuth2CredentialProviderName_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setOAuth2CredentialProviderName(string OAuth2CredentialProviderName) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviderName_, OAuth2CredentialProviderName) };


    // OAuth2ProviderConfigShrink Field Functions 
    bool hasOAuth2ProviderConfigShrink() const { return this->OAuth2ProviderConfigShrink_ != nullptr;};
    void deleteOAuth2ProviderConfigShrink() { this->OAuth2ProviderConfigShrink_ = nullptr;};
    inline string getOAuth2ProviderConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(OAuth2ProviderConfigShrink_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setOAuth2ProviderConfigShrink(string OAuth2ProviderConfigShrink) { DARABONBA_PTR_SET_VALUE(OAuth2ProviderConfigShrink_, OAuth2ProviderConfigShrink) };


    // tokenVaultName Field Functions 
    bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
    void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
    inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
    inline UpdateOAuth2CredentialProviderShrinkRequest& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


  protected:
    // The unique callback URL assigned to the provider. You must add this URL to the list of allowed callback URLs of the identity provider.
    // Format: https://agentidentitydata.{{region}}.aliyuncs.com/oauth2/callback/{{UUID}}
    // If you specify this parameter, the specified value is used.
    // If you do not specify this parameter, the server automatically generates a value.
    shared_ptr<string> callbackURL_ {};
    // AliyunOAuth2
    shared_ptr<string> credentialProviderVendor_ {};
    // The description of the OAuth 2.0 credential provider.
    shared_ptr<string> description_ {};
    // The name of the credential provider.
    shared_ptr<string> OAuth2CredentialProviderName_ {};
    // The object that contains provider-specific configurations, such as clientId and clientSecret.
    shared_ptr<string> OAuth2ProviderConfigShrink_ {};
    // The name of the TokenVault.
    shared_ptr<string> tokenVaultName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
