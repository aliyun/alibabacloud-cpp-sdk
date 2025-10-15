// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERREQUESTOIDCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestOidcConfigAuthnParam.hpp>
#include <alibabacloud/models/UpdateIdentityProviderRequestOidcConfigEndpointConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateIdentityProviderRequestOidcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderRequestOidcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_TO_JSON(GrantType, grantType_);
      DARABONBA_PTR_TO_JSON(PkceChallengeMethod, pkceChallengeMethod_);
      DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderRequestOidcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
      DARABONBA_PTR_FROM_JSON(PkceChallengeMethod, pkceChallengeMethod_);
      DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
    };
    UpdateIdentityProviderRequestOidcConfig() = default ;
    UpdateIdentityProviderRequestOidcConfig(const UpdateIdentityProviderRequestOidcConfig &) = default ;
    UpdateIdentityProviderRequestOidcConfig(UpdateIdentityProviderRequestOidcConfig &&) = default ;
    UpdateIdentityProviderRequestOidcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderRequestOidcConfig() = default ;
    UpdateIdentityProviderRequestOidcConfig& operator=(const UpdateIdentityProviderRequestOidcConfig &) = default ;
    UpdateIdentityProviderRequestOidcConfig& operator=(UpdateIdentityProviderRequestOidcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnParam_ == nullptr
        && return this->endpointConfig_ == nullptr && return this->grantScopes_ == nullptr && return this->grantType_ == nullptr && return this->pkceChallengeMethod_ == nullptr && return this->pkceRequired_ == nullptr; };
    // authnParam Field Functions 
    bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
    void deleteAuthnParam() { this->authnParam_ = nullptr;};
    inline const Models::UpdateIdentityProviderRequestOidcConfigAuthnParam & authnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, Models::UpdateIdentityProviderRequestOidcConfigAuthnParam) };
    inline Models::UpdateIdentityProviderRequestOidcConfigAuthnParam authnParam() { DARABONBA_PTR_GET(authnParam_, Models::UpdateIdentityProviderRequestOidcConfigAuthnParam) };
    inline UpdateIdentityProviderRequestOidcConfig& setAuthnParam(const Models::UpdateIdentityProviderRequestOidcConfigAuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
    inline UpdateIdentityProviderRequestOidcConfig& setAuthnParam(Models::UpdateIdentityProviderRequestOidcConfigAuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline const Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig & endpointConfig() const { DARABONBA_PTR_GET_CONST(endpointConfig_, Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig) };
    inline Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig endpointConfig() { DARABONBA_PTR_GET(endpointConfig_, Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig) };
    inline UpdateIdentityProviderRequestOidcConfig& setEndpointConfig(const Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig & endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };
    inline UpdateIdentityProviderRequestOidcConfig& setEndpointConfig(Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig && endpointConfig) { DARABONBA_PTR_SET_RVALUE(endpointConfig_, endpointConfig) };


    // grantScopes Field Functions 
    bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
    void deleteGrantScopes() { this->grantScopes_ = nullptr;};
    inline const vector<string> & grantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
    inline vector<string> grantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
    inline UpdateIdentityProviderRequestOidcConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
    inline UpdateIdentityProviderRequestOidcConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline UpdateIdentityProviderRequestOidcConfig& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // pkceChallengeMethod Field Functions 
    bool hasPkceChallengeMethod() const { return this->pkceChallengeMethod_ != nullptr;};
    void deletePkceChallengeMethod() { this->pkceChallengeMethod_ = nullptr;};
    inline string pkceChallengeMethod() const { DARABONBA_PTR_GET_DEFAULT(pkceChallengeMethod_, "") };
    inline UpdateIdentityProviderRequestOidcConfig& setPkceChallengeMethod(string pkceChallengeMethod) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethod_, pkceChallengeMethod) };


    // pkceRequired Field Functions 
    bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
    void deletePkceRequired() { this->pkceRequired_ = nullptr;};
    inline bool pkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
    inline UpdateIdentityProviderRequestOidcConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


  protected:
    // OIDC客户端认证配置。
    std::shared_ptr<Models::UpdateIdentityProviderRequestOidcConfigAuthnParam> authnParam_ = nullptr;
    // OIDC 端点配置。
    std::shared_ptr<Models::UpdateIdentityProviderRequestOidcConfigEndpointConfig> endpointConfig_ = nullptr;
    // OIDC标准参数，如profile、email等
    std::shared_ptr<vector<string>> grantScopes_ = nullptr;
    // OIDC授权类型。
    std::shared_ptr<string> grantType_ = nullptr;
    // 支持的PKCE算法类型。
    std::shared_ptr<string> pkceChallengeMethod_ = nullptr;
    // AuthorizationCode授权模式下是否使用PKCE。
    std::shared_ptr<bool> pkceRequired_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
