// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(client_id, clientId_);
      DARABONBA_PTR_TO_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(code_verifier, codeVerifier_);
      DARABONBA_PTR_TO_JSON(device_code, deviceCode_);
      DARABONBA_PTR_TO_JSON(exclusive_tag, exclusiveTag_);
      DARABONBA_PTR_TO_JSON(grant_type, grantType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(redirect_uri, redirectUri_);
      DARABONBA_PTR_TO_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(client_id, clientId_);
      DARABONBA_PTR_FROM_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(code_verifier, codeVerifier_);
      DARABONBA_PTR_FROM_JSON(device_code, deviceCode_);
      DARABONBA_PTR_FROM_JSON(exclusive_tag, exclusiveTag_);
      DARABONBA_PTR_FROM_JSON(grant_type, grantType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(redirect_uri, redirectUri_);
      DARABONBA_PTR_FROM_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GenerateTokenRequest() = default ;
    GenerateTokenRequest(const GenerateTokenRequest &) = default ;
    GenerateTokenRequest(GenerateTokenRequest &&) = default ;
    GenerateTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTokenRequest() = default ;
    GenerateTokenRequest& operator=(const GenerateTokenRequest &) = default ;
    GenerateTokenRequest& operator=(GenerateTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->clientSecret_ == nullptr && return this->code_ == nullptr && return this->codeVerifier_ == nullptr && return this->deviceCode_ == nullptr && return this->exclusiveTag_ == nullptr
        && return this->grantType_ == nullptr && return this->password_ == nullptr && return this->redirectUri_ == nullptr && return this->refreshToken_ == nullptr && return this->scope_ == nullptr
        && return this->username_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GenerateTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GenerateTokenRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateTokenRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeVerifier Field Functions 
    bool hasCodeVerifier() const { return this->codeVerifier_ != nullptr;};
    void deleteCodeVerifier() { this->codeVerifier_ = nullptr;};
    inline string codeVerifier() const { DARABONBA_PTR_GET_DEFAULT(codeVerifier_, "") };
    inline GenerateTokenRequest& setCodeVerifier(string codeVerifier) { DARABONBA_PTR_SET_VALUE(codeVerifier_, codeVerifier) };


    // deviceCode Field Functions 
    bool hasDeviceCode() const { return this->deviceCode_ != nullptr;};
    void deleteDeviceCode() { this->deviceCode_ = nullptr;};
    inline string deviceCode() const { DARABONBA_PTR_GET_DEFAULT(deviceCode_, "") };
    inline GenerateTokenRequest& setDeviceCode(string deviceCode) { DARABONBA_PTR_SET_VALUE(deviceCode_, deviceCode) };


    // exclusiveTag Field Functions 
    bool hasExclusiveTag() const { return this->exclusiveTag_ != nullptr;};
    void deleteExclusiveTag() { this->exclusiveTag_ = nullptr;};
    inline string exclusiveTag() const { DARABONBA_PTR_GET_DEFAULT(exclusiveTag_, "") };
    inline GenerateTokenRequest& setExclusiveTag(string exclusiveTag) { DARABONBA_PTR_SET_VALUE(exclusiveTag_, exclusiveTag) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string grantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GenerateTokenRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateTokenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string redirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline GenerateTokenRequest& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateTokenRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GenerateTokenRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GenerateTokenRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The client ID.
    std::shared_ptr<string> clientId_ = nullptr;
    // The client secret. This parameter is required if grant_type is set to client_credentials.
    std::shared_ptr<string> clientSecret_ = nullptr;
    // The authorization code. This parameter is required if grant_type is set to authorization_code.
    std::shared_ptr<string> code_ = nullptr;
    // The verification code.
    std::shared_ptr<string> codeVerifier_ = nullptr;
    // The device code. This parameter is required if grant_type is set to authorization_code.urn:ietf:params:oauth:grant-type:device_code.
    std::shared_ptr<string> deviceCode_ = nullptr;
    // The excluded tags.
    std::shared_ptr<string> exclusiveTag_ = nullptr;
    // The supported authorization types are as follows:
    // - client_credentials:Client credentials flow, requires client_id and client_secret.
    // - refresh_token:Refresh token flow.
    // - authorization_code:Authorization code flow.
    // - urn:ietf:params:oauth:grant-type:device_code:Device authorization flow.
    // - password:Password (Resource Owner Password Credentials) flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> grantType_ = nullptr;
    // The username. This parameter is required if grant_type is set to password. The password authentication type is not supported.
    std::shared_ptr<string> password_ = nullptr;
    // The redirect URI. This parameter is required if grant_type is set to authorization_code. The value of this parameter must be the same as the redirect URI in the request to obtain the authorization code.
    std::shared_ptr<string> redirectUri_ = nullptr;
    // The refreshed token. This parameter is required if grant_type is set to refresh_token.
    std::shared_ptr<string> refreshToken_ = nullptr;
    // The authorization scope. Valid values:
    // 
    // *   openid
    // *   email
    // *   phone
    // *   profile
    std::shared_ptr<string> scope_ = nullptr;
    // The username. This parameter is required if grant_type is set to password. The password authentication type is not supported.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
