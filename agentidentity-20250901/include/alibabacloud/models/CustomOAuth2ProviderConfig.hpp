// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMOAUTH2PROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMOAUTH2PROVIDERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OAuth2Discovery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CustomOAuth2ProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomOAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(OAuth2Discovery, OAuth2Discovery_);
    };
    friend void from_json(const Darabonba::Json& j, CustomOAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(OAuth2Discovery, OAuth2Discovery_);
    };
    CustomOAuth2ProviderConfig() = default ;
    CustomOAuth2ProviderConfig(const CustomOAuth2ProviderConfig &) = default ;
    CustomOAuth2ProviderConfig(CustomOAuth2ProviderConfig &&) = default ;
    CustomOAuth2ProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomOAuth2ProviderConfig() = default ;
    CustomOAuth2ProviderConfig& operator=(const CustomOAuth2ProviderConfig &) = default ;
    CustomOAuth2ProviderConfig& operator=(CustomOAuth2ProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->clientSecret_ == nullptr && return this->OAuth2Discovery_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CustomOAuth2ProviderConfig& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CustomOAuth2ProviderConfig& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // OAuth2Discovery Field Functions 
    bool hasOAuth2Discovery() const { return this->OAuth2Discovery_ != nullptr;};
    void deleteOAuth2Discovery() { this->OAuth2Discovery_ = nullptr;};
    inline const OAuth2Discovery & OAuth2Discovery() const { DARABONBA_PTR_GET_CONST(OAuth2Discovery_, OAuth2Discovery) };
    inline OAuth2Discovery OAuth2Discovery() { DARABONBA_PTR_GET(OAuth2Discovery_, OAuth2Discovery) };
    inline CustomOAuth2ProviderConfig& setOAuth2Discovery(const OAuth2Discovery & OAuth2Discovery) { DARABONBA_PTR_SET_VALUE(OAuth2Discovery_, OAuth2Discovery) };
    inline CustomOAuth2ProviderConfig& setOAuth2Discovery(OAuth2Discovery && OAuth2Discovery) { DARABONBA_PTR_SET_RVALUE(OAuth2Discovery_, OAuth2Discovery) };


  protected:
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    std::shared_ptr<OAuth2Discovery> OAuth2Discovery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
