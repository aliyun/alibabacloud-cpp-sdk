// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTOIDCSSOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONSSOCONFIGREQUESTOIDCSSOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationSsoConfigRequestOidcSsoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationSsoConfigRequestOidcSsoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
      DARABONBA_PTR_TO_JSON(CodeEffectiveTime, codeEffectiveTime_);
      DARABONBA_PTR_TO_JSON(CustomClaims, customClaims_);
      DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_TO_JSON(GrantTypes, grantTypes_);
      DARABONBA_PTR_TO_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
      DARABONBA_PTR_TO_JSON(PasswordAuthenticationSourceId, passwordAuthenticationSourceId_);
      DARABONBA_PTR_TO_JSON(PasswordTotpMfaRequired, passwordTotpMfaRequired_);
      DARABONBA_PTR_TO_JSON(PkceChallengeMethods, pkceChallengeMethods_);
      DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
      DARABONBA_PTR_TO_JSON(PostLogoutRedirectUris, postLogoutRedirectUris_);
      DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_TO_JSON(RefreshTokenEffective, refreshTokenEffective_);
      DARABONBA_PTR_TO_JSON(ResponseTypes, responseTypes_);
      DARABONBA_PTR_TO_JSON(SubjectIdExpression, subjectIdExpression_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationSsoConfigRequestOidcSsoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(CodeEffectiveTime, codeEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(CustomClaims, customClaims_);
      DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_FROM_JSON(GrantTypes, grantTypes_);
      DARABONBA_PTR_FROM_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(PasswordAuthenticationSourceId, passwordAuthenticationSourceId_);
      DARABONBA_PTR_FROM_JSON(PasswordTotpMfaRequired, passwordTotpMfaRequired_);
      DARABONBA_PTR_FROM_JSON(PkceChallengeMethods, pkceChallengeMethods_);
      DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
      DARABONBA_PTR_FROM_JSON(PostLogoutRedirectUris, postLogoutRedirectUris_);
      DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenEffective, refreshTokenEffective_);
      DARABONBA_PTR_FROM_JSON(ResponseTypes, responseTypes_);
      DARABONBA_PTR_FROM_JSON(SubjectIdExpression, subjectIdExpression_);
    };
    SetApplicationSsoConfigRequestOidcSsoConfig() = default ;
    SetApplicationSsoConfigRequestOidcSsoConfig(const SetApplicationSsoConfigRequestOidcSsoConfig &) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfig(SetApplicationSsoConfigRequestOidcSsoConfig &&) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationSsoConfigRequestOidcSsoConfig() = default ;
    SetApplicationSsoConfigRequestOidcSsoConfig& operator=(const SetApplicationSsoConfigRequestOidcSsoConfig &) = default ;
    SetApplicationSsoConfigRequestOidcSsoConfig& operator=(SetApplicationSsoConfigRequestOidcSsoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenEffectiveTime_ != nullptr
        && this->codeEffectiveTime_ != nullptr && this->customClaims_ != nullptr && this->grantScopes_ != nullptr && this->grantTypes_ != nullptr && this->idTokenEffectiveTime_ != nullptr
        && this->passwordAuthenticationSourceId_ != nullptr && this->passwordTotpMfaRequired_ != nullptr && this->pkceChallengeMethods_ != nullptr && this->pkceRequired_ != nullptr && this->postLogoutRedirectUris_ != nullptr
        && this->redirectUris_ != nullptr && this->refreshTokenEffective_ != nullptr && this->responseTypes_ != nullptr && this->subjectIdExpression_ != nullptr; };
    // accessTokenEffectiveTime Field Functions 
    bool hasAccessTokenEffectiveTime() const { return this->accessTokenEffectiveTime_ != nullptr;};
    void deleteAccessTokenEffectiveTime() { this->accessTokenEffectiveTime_ = nullptr;};
    inline int64_t accessTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenEffectiveTime_, 0L) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setAccessTokenEffectiveTime(int64_t accessTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(accessTokenEffectiveTime_, accessTokenEffectiveTime) };


    // codeEffectiveTime Field Functions 
    bool hasCodeEffectiveTime() const { return this->codeEffectiveTime_ != nullptr;};
    void deleteCodeEffectiveTime() { this->codeEffectiveTime_ = nullptr;};
    inline int64_t codeEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(codeEffectiveTime_, 0L) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setCodeEffectiveTime(int64_t codeEffectiveTime) { DARABONBA_PTR_SET_VALUE(codeEffectiveTime_, codeEffectiveTime) };


    // customClaims Field Functions 
    bool hasCustomClaims() const { return this->customClaims_ != nullptr;};
    void deleteCustomClaims() { this->customClaims_ = nullptr;};
    inline const vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims> & customClaims() const { DARABONBA_PTR_GET_CONST(customClaims_, vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims>) };
    inline vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims> customClaims() { DARABONBA_PTR_GET(customClaims_, vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setCustomClaims(const vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims> & customClaims) { DARABONBA_PTR_SET_VALUE(customClaims_, customClaims) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setCustomClaims(vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims> && customClaims) { DARABONBA_PTR_SET_RVALUE(customClaims_, customClaims) };


    // grantScopes Field Functions 
    bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
    void deleteGrantScopes() { this->grantScopes_ = nullptr;};
    inline const vector<string> & grantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
    inline vector<string> grantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


    // grantTypes Field Functions 
    bool hasGrantTypes() const { return this->grantTypes_ != nullptr;};
    void deleteGrantTypes() { this->grantTypes_ = nullptr;};
    inline const vector<string> & grantTypes() const { DARABONBA_PTR_GET_CONST(grantTypes_, vector<string>) };
    inline vector<string> grantTypes() { DARABONBA_PTR_GET(grantTypes_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setGrantTypes(const vector<string> & grantTypes) { DARABONBA_PTR_SET_VALUE(grantTypes_, grantTypes) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setGrantTypes(vector<string> && grantTypes) { DARABONBA_PTR_SET_RVALUE(grantTypes_, grantTypes) };


    // idTokenEffectiveTime Field Functions 
    bool hasIdTokenEffectiveTime() const { return this->idTokenEffectiveTime_ != nullptr;};
    void deleteIdTokenEffectiveTime() { this->idTokenEffectiveTime_ = nullptr;};
    inline int64_t idTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(idTokenEffectiveTime_, 0L) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setIdTokenEffectiveTime(int64_t idTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(idTokenEffectiveTime_, idTokenEffectiveTime) };


    // passwordAuthenticationSourceId Field Functions 
    bool hasPasswordAuthenticationSourceId() const { return this->passwordAuthenticationSourceId_ != nullptr;};
    void deletePasswordAuthenticationSourceId() { this->passwordAuthenticationSourceId_ = nullptr;};
    inline string passwordAuthenticationSourceId() const { DARABONBA_PTR_GET_DEFAULT(passwordAuthenticationSourceId_, "") };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPasswordAuthenticationSourceId(string passwordAuthenticationSourceId) { DARABONBA_PTR_SET_VALUE(passwordAuthenticationSourceId_, passwordAuthenticationSourceId) };


    // passwordTotpMfaRequired Field Functions 
    bool hasPasswordTotpMfaRequired() const { return this->passwordTotpMfaRequired_ != nullptr;};
    void deletePasswordTotpMfaRequired() { this->passwordTotpMfaRequired_ = nullptr;};
    inline bool passwordTotpMfaRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordTotpMfaRequired_, false) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPasswordTotpMfaRequired(bool passwordTotpMfaRequired) { DARABONBA_PTR_SET_VALUE(passwordTotpMfaRequired_, passwordTotpMfaRequired) };


    // pkceChallengeMethods Field Functions 
    bool hasPkceChallengeMethods() const { return this->pkceChallengeMethods_ != nullptr;};
    void deletePkceChallengeMethods() { this->pkceChallengeMethods_ = nullptr;};
    inline const vector<string> & pkceChallengeMethods() const { DARABONBA_PTR_GET_CONST(pkceChallengeMethods_, vector<string>) };
    inline vector<string> pkceChallengeMethods() { DARABONBA_PTR_GET(pkceChallengeMethods_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPkceChallengeMethods(const vector<string> & pkceChallengeMethods) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethods_, pkceChallengeMethods) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPkceChallengeMethods(vector<string> && pkceChallengeMethods) { DARABONBA_PTR_SET_RVALUE(pkceChallengeMethods_, pkceChallengeMethods) };


    // pkceRequired Field Functions 
    bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
    void deletePkceRequired() { this->pkceRequired_ = nullptr;};
    inline bool pkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


    // postLogoutRedirectUris Field Functions 
    bool hasPostLogoutRedirectUris() const { return this->postLogoutRedirectUris_ != nullptr;};
    void deletePostLogoutRedirectUris() { this->postLogoutRedirectUris_ = nullptr;};
    inline const vector<string> & postLogoutRedirectUris() const { DARABONBA_PTR_GET_CONST(postLogoutRedirectUris_, vector<string>) };
    inline vector<string> postLogoutRedirectUris() { DARABONBA_PTR_GET(postLogoutRedirectUris_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPostLogoutRedirectUris(const vector<string> & postLogoutRedirectUris) { DARABONBA_PTR_SET_VALUE(postLogoutRedirectUris_, postLogoutRedirectUris) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setPostLogoutRedirectUris(vector<string> && postLogoutRedirectUris) { DARABONBA_PTR_SET_RVALUE(postLogoutRedirectUris_, postLogoutRedirectUris) };


    // redirectUris Field Functions 
    bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
    void deleteRedirectUris() { this->redirectUris_ = nullptr;};
    inline const vector<string> & redirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, vector<string>) };
    inline vector<string> redirectUris() { DARABONBA_PTR_GET(redirectUris_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setRedirectUris(const vector<string> & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setRedirectUris(vector<string> && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


    // refreshTokenEffective Field Functions 
    bool hasRefreshTokenEffective() const { return this->refreshTokenEffective_ != nullptr;};
    void deleteRefreshTokenEffective() { this->refreshTokenEffective_ = nullptr;};
    inline int64_t refreshTokenEffective() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenEffective_, 0L) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setRefreshTokenEffective(int64_t refreshTokenEffective) { DARABONBA_PTR_SET_VALUE(refreshTokenEffective_, refreshTokenEffective) };


    // responseTypes Field Functions 
    bool hasResponseTypes() const { return this->responseTypes_ != nullptr;};
    void deleteResponseTypes() { this->responseTypes_ = nullptr;};
    inline const vector<string> & responseTypes() const { DARABONBA_PTR_GET_CONST(responseTypes_, vector<string>) };
    inline vector<string> responseTypes() { DARABONBA_PTR_GET(responseTypes_, vector<string>) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setResponseTypes(const vector<string> & responseTypes) { DARABONBA_PTR_SET_VALUE(responseTypes_, responseTypes) };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setResponseTypes(vector<string> && responseTypes) { DARABONBA_PTR_SET_RVALUE(responseTypes_, responseTypes) };


    // subjectIdExpression Field Functions 
    bool hasSubjectIdExpression() const { return this->subjectIdExpression_ != nullptr;};
    void deleteSubjectIdExpression() { this->subjectIdExpression_ = nullptr;};
    inline string subjectIdExpression() const { DARABONBA_PTR_GET_DEFAULT(subjectIdExpression_, "") };
    inline SetApplicationSsoConfigRequestOidcSsoConfig& setSubjectIdExpression(string subjectIdExpression) { DARABONBA_PTR_SET_VALUE(subjectIdExpression_, subjectIdExpression) };


  protected:
    // The validity period of the issued access token. Unit: seconds. Default value: 1200.
    std::shared_ptr<int64_t> accessTokenEffectiveTime_ = nullptr;
    // The validity period of the issued code. Unit: seconds. Default value: 60.
    std::shared_ptr<int64_t> codeEffectiveTime_ = nullptr;
    // The custom claims that are returned for the ID token.
    std::shared_ptr<vector<Models::SetApplicationSsoConfigRequestOidcSsoConfigCustomClaims>> customClaims_ = nullptr;
    // The scopes of user attributes that can be returned for the UserInfo endpoint or ID token.
    std::shared_ptr<vector<string>> grantScopes_ = nullptr;
    // The authorization types that are supported for OIDC protocols.
    std::shared_ptr<vector<string>> grantTypes_ = nullptr;
    // The validity period of the issued ID token. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> idTokenEffectiveTime_ = nullptr;
    // The ID of the identity authentication source in password mode. Configure this parameter only when the value of the GrantTypes parameter includes the password mode.
    std::shared_ptr<string> passwordAuthenticationSourceId_ = nullptr;
    // Specifies whether time-based one-time password (TOTP) authentication is required in password mode. Configure this parameter only when the value of the GrantTypes parameter includes the password mode.
    std::shared_ptr<bool> passwordTotpMfaRequired_ = nullptr;
    // The algorithms that are used to calculate the code challenge for PKCE.
    std::shared_ptr<vector<string>> pkceChallengeMethods_ = nullptr;
    // Specifies whether the SSO of the application requires Proof Key for Code Exchange (PKCE) (RFC 7636).
    std::shared_ptr<bool> pkceRequired_ = nullptr;
    // The logout redirect URIs that are supported by the application.
    std::shared_ptr<vector<string>> postLogoutRedirectUris_ = nullptr;
    // The redirect URIs that are supported by the application.
    std::shared_ptr<vector<string>> redirectUris_ = nullptr;
    // The validity period of the issued refresh token. Unit: seconds. Default value: 86400.
    std::shared_ptr<int64_t> refreshTokenEffective_ = nullptr;
    // The response types that are supported by the application. Configure this parameter when the value of the GrantTypes parameter includes the implicit mode.
    std::shared_ptr<vector<string>> responseTypes_ = nullptr;
    // The custom expression that is used to calculate the subject ID returned for the ID token.
    std::shared_ptr<string> subjectIdExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
