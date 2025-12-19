// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCLUDEDOAUTH2PROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INCLUDEDOAUTH2PROVIDERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class IncludedOAuth2ProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncludedOAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, IncludedOAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
    };
    IncludedOAuth2ProviderConfig() = default ;
    IncludedOAuth2ProviderConfig(const IncludedOAuth2ProviderConfig &) = default ;
    IncludedOAuth2ProviderConfig(IncludedOAuth2ProviderConfig &&) = default ;
    IncludedOAuth2ProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncludedOAuth2ProviderConfig() = default ;
    IncludedOAuth2ProviderConfig& operator=(const IncludedOAuth2ProviderConfig &) = default ;
    IncludedOAuth2ProviderConfig& operator=(IncludedOAuth2ProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && return this->clientId_ == nullptr && return this->clientSecret_ == nullptr && return this->tokenEndpoint_ == nullptr; };
    // authorizationEndpoint Field Functions 
    bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
    void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
    inline string authorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
    inline IncludedOAuth2ProviderConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline IncludedOAuth2ProviderConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline IncludedOAuth2ProviderConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // tokenEndpoint Field Functions 
    bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
    void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
    inline string tokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
    inline IncludedOAuth2ProviderConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


  protected:
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<string> tokenEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
