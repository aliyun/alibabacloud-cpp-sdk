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
        && this->clientSecret_ == nullptr && this->code_ == nullptr && this->codeVerifier_ == nullptr && this->deviceCode_ == nullptr && this->exclusiveTag_ == nullptr
        && this->grantType_ == nullptr && this->password_ == nullptr && this->redirectUri_ == nullptr && this->refreshToken_ == nullptr && this->scope_ == nullptr
        && this->username_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GenerateTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GenerateTokenRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateTokenRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeVerifier Field Functions 
    bool hasCodeVerifier() const { return this->codeVerifier_ != nullptr;};
    void deleteCodeVerifier() { this->codeVerifier_ = nullptr;};
    inline string getCodeVerifier() const { DARABONBA_PTR_GET_DEFAULT(codeVerifier_, "") };
    inline GenerateTokenRequest& setCodeVerifier(string codeVerifier) { DARABONBA_PTR_SET_VALUE(codeVerifier_, codeVerifier) };


    // deviceCode Field Functions 
    bool hasDeviceCode() const { return this->deviceCode_ != nullptr;};
    void deleteDeviceCode() { this->deviceCode_ = nullptr;};
    inline string getDeviceCode() const { DARABONBA_PTR_GET_DEFAULT(deviceCode_, "") };
    inline GenerateTokenRequest& setDeviceCode(string deviceCode) { DARABONBA_PTR_SET_VALUE(deviceCode_, deviceCode) };


    // exclusiveTag Field Functions 
    bool hasExclusiveTag() const { return this->exclusiveTag_ != nullptr;};
    void deleteExclusiveTag() { this->exclusiveTag_ = nullptr;};
    inline string getExclusiveTag() const { DARABONBA_PTR_GET_DEFAULT(exclusiveTag_, "") };
    inline GenerateTokenRequest& setExclusiveTag(string exclusiveTag) { DARABONBA_PTR_SET_VALUE(exclusiveTag_, exclusiveTag) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GenerateTokenRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateTokenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline GenerateTokenRequest& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string getRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateTokenRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GenerateTokenRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GenerateTokenRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The client ID.
    shared_ptr<string> clientId_ {};
    // The client secret. This parameter is required if grant_type is set to client_credentials.
    shared_ptr<string> clientSecret_ {};
    // The authorization code. This parameter is required if grant_type is set to authorization_code.
    shared_ptr<string> code_ {};
    // The verification code.
    shared_ptr<string> codeVerifier_ {};
    // The device code. This parameter is required if grant_type is set to authorization_code.urn:ietf:params:oauth:grant-type:device_code.
    shared_ptr<string> deviceCode_ {};
    // The excluded tags.
    shared_ptr<string> exclusiveTag_ {};
    // The supported authorization types are as follows:
    // - client_credentials:Client credentials flow, requires client_id and client_secret.
    // - refresh_token:Refresh token flow.
    // - authorization_code:Authorization code flow.
    // - urn:ietf:params:oauth:grant-type:device_code:Device authorization flow.
    // - password:Password (Resource Owner Password Credentials) flow.
    // 
    // This parameter is required.
    shared_ptr<string> grantType_ {};
    // The username. This parameter is required if grant_type is set to password. The password authentication type is not supported.
    shared_ptr<string> password_ {};
    // The redirect URI. This parameter is required if grant_type is set to authorization_code. The value of this parameter must be the same as the redirect URI in the request to obtain the authorization code.
    shared_ptr<string> redirectUri_ {};
    // The refreshed token. This parameter is required if grant_type is set to refresh_token.
    shared_ptr<string> refreshToken_ {};
    // The authorization scope. Valid values:
    // 
    // *   openid
    // *   email
    // *   phone
    // *   profile
    shared_ptr<string> scope_ {};
    // The username. This parameter is required if grant_type is set to password. The password authentication type is not supported.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
