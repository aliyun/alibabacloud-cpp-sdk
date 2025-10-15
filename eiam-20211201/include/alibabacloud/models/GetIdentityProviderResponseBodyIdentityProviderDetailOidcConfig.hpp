// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILOIDCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILOIDCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(PkceChallengeMethod, pkceChallengeMethod_);
      DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(PkceChallengeMethod, pkceChallengeMethod_);
      DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig(GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnParam_ == nullptr
        && return this->endpointConfig_ == nullptr && return this->grantScopes_ == nullptr && return this->grantType_ == nullptr && return this->pkceChallengeMethod_ == nullptr && return this->pkceRequired_ == nullptr; };
    // authnParam Field Functions 
    bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
    void deleteAuthnParam() { this->authnParam_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam & authnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam authnParam() { DARABONBA_PTR_GET(authnParam_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setAuthnParam(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setAuthnParam(Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig & endpointConfig() const { DARABONBA_PTR_GET_CONST(endpointConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig) };
    inline Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig endpointConfig() { DARABONBA_PTR_GET(endpointConfig_, Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setEndpointConfig(const Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig & endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setEndpointConfig(Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig && endpointConfig) { DARABONBA_PTR_SET_RVALUE(endpointConfig_, endpointConfig) };


    // grantScopes Field Functions 
    bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
    void deleteGrantScopes() { this->grantScopes_ = nullptr;};
    inline const vector<string> & grantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
    inline vector<string> grantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // pkceChallengeMethod Field Functions 
    bool hasPkceChallengeMethod() const { return this->pkceChallengeMethod_ != nullptr;};
    void deletePkceChallengeMethod() { this->pkceChallengeMethod_ = nullptr;};
    inline string pkceChallengeMethod() const { DARABONBA_PTR_GET_DEFAULT(pkceChallengeMethod_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setPkceChallengeMethod(string pkceChallengeMethod) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethod_, pkceChallengeMethod) };


    // pkceRequired Field Functions 
    bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
    void deletePkceRequired() { this->pkceRequired_ = nullptr;};
    inline bool pkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


  protected:
    // OIDC client authentication configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigAuthnParam> authnParam_ = nullptr;
    // OIDC endpoint configuration.
    std::shared_ptr<Models::GetIdentityProviderResponseBodyIdentityProviderDetailOidcConfigEndpointConfig> endpointConfig_ = nullptr;
    // OIDC authorization scope list.
    std::shared_ptr<vector<string>> grantScopes_ = nullptr;
    // OIDC authorization grant type.
    std::shared_ptr<string> grantType_ = nullptr;
    // Supported PKCE code challenge methods.
    std::shared_ptr<string> pkceChallengeMethod_ = nullptr;
    // Whether to use PKCE in authorization code grant flow.
    std::shared_ptr<bool> pkceRequired_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
