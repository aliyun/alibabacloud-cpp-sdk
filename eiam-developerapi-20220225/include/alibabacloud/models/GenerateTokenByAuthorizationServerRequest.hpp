// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETOKENBYAUTHORIZATIONSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATETOKENBYAUTHORIZATIONSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateTokenByAuthorizationServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTokenByAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(application_federated_credential_name, applicationFederatedCredentialName_);
      DARABONBA_PTR_TO_JSON(client_assertion, clientAssertion_);
      DARABONBA_PTR_TO_JSON(client_assertion_type, clientAssertionType_);
      DARABONBA_PTR_TO_JSON(client_id, clientId_);
      DARABONBA_PTR_TO_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_TO_JSON(client_x509, clientX509_);
      DARABONBA_PTR_TO_JSON(client_x509_chain, clientX509Chain_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(code_verifier, codeVerifier_);
      DARABONBA_PTR_TO_JSON(device_code, deviceCode_);
      DARABONBA_PTR_TO_JSON(grant_type, grantType_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(redirect_uri, redirectUri_);
      DARABONBA_PTR_TO_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTokenByAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(application_federated_credential_name, applicationFederatedCredentialName_);
      DARABONBA_PTR_FROM_JSON(client_assertion, clientAssertion_);
      DARABONBA_PTR_FROM_JSON(client_assertion_type, clientAssertionType_);
      DARABONBA_PTR_FROM_JSON(client_id, clientId_);
      DARABONBA_PTR_FROM_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(client_x509, clientX509_);
      DARABONBA_PTR_FROM_JSON(client_x509_chain, clientX509Chain_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(code_verifier, codeVerifier_);
      DARABONBA_PTR_FROM_JSON(device_code, deviceCode_);
      DARABONBA_PTR_FROM_JSON(grant_type, grantType_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(redirect_uri, redirectUri_);
      DARABONBA_PTR_FROM_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GenerateTokenByAuthorizationServerRequest() = default ;
    GenerateTokenByAuthorizationServerRequest(const GenerateTokenByAuthorizationServerRequest &) = default ;
    GenerateTokenByAuthorizationServerRequest(GenerateTokenByAuthorizationServerRequest &&) = default ;
    GenerateTokenByAuthorizationServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTokenByAuthorizationServerRequest() = default ;
    GenerateTokenByAuthorizationServerRequest& operator=(const GenerateTokenByAuthorizationServerRequest &) = default ;
    GenerateTokenByAuthorizationServerRequest& operator=(GenerateTokenByAuthorizationServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredentialName_ == nullptr
        && this->clientAssertion_ == nullptr && this->clientAssertionType_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->clientX509_ == nullptr
        && this->clientX509Chain_ == nullptr && this->code_ == nullptr && this->codeVerifier_ == nullptr && this->deviceCode_ == nullptr && this->grantType_ == nullptr
        && this->password_ == nullptr && this->redirectUri_ == nullptr && this->refreshToken_ == nullptr && this->scope_ == nullptr && this->username_ == nullptr; };
    // applicationFederatedCredentialName Field Functions 
    bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
    void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
    inline string getApplicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


    // clientAssertion Field Functions 
    bool hasClientAssertion() const { return this->clientAssertion_ != nullptr;};
    void deleteClientAssertion() { this->clientAssertion_ = nullptr;};
    inline string getClientAssertion() const { DARABONBA_PTR_GET_DEFAULT(clientAssertion_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientAssertion(string clientAssertion) { DARABONBA_PTR_SET_VALUE(clientAssertion_, clientAssertion) };


    // clientAssertionType Field Functions 
    bool hasClientAssertionType() const { return this->clientAssertionType_ != nullptr;};
    void deleteClientAssertionType() { this->clientAssertionType_ = nullptr;};
    inline string getClientAssertionType() const { DARABONBA_PTR_GET_DEFAULT(clientAssertionType_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientAssertionType(string clientAssertionType) { DARABONBA_PTR_SET_VALUE(clientAssertionType_, clientAssertionType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // clientX509 Field Functions 
    bool hasClientX509() const { return this->clientX509_ != nullptr;};
    void deleteClientX509() { this->clientX509_ = nullptr;};
    inline string getClientX509() const { DARABONBA_PTR_GET_DEFAULT(clientX509_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientX509(string clientX509) { DARABONBA_PTR_SET_VALUE(clientX509_, clientX509) };


    // clientX509Chain Field Functions 
    bool hasClientX509Chain() const { return this->clientX509Chain_ != nullptr;};
    void deleteClientX509Chain() { this->clientX509Chain_ = nullptr;};
    inline string getClientX509Chain() const { DARABONBA_PTR_GET_DEFAULT(clientX509Chain_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setClientX509Chain(string clientX509Chain) { DARABONBA_PTR_SET_VALUE(clientX509Chain_, clientX509Chain) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeVerifier Field Functions 
    bool hasCodeVerifier() const { return this->codeVerifier_ != nullptr;};
    void deleteCodeVerifier() { this->codeVerifier_ = nullptr;};
    inline string getCodeVerifier() const { DARABONBA_PTR_GET_DEFAULT(codeVerifier_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setCodeVerifier(string codeVerifier) { DARABONBA_PTR_SET_VALUE(codeVerifier_, codeVerifier) };


    // deviceCode Field Functions 
    bool hasDeviceCode() const { return this->deviceCode_ != nullptr;};
    void deleteDeviceCode() { this->deviceCode_ = nullptr;};
    inline string getDeviceCode() const { DARABONBA_PTR_GET_DEFAULT(deviceCode_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setDeviceCode(string deviceCode) { DARABONBA_PTR_SET_VALUE(deviceCode_, deviceCode) };


    // grantType Field Functions 
    bool hasGrantType() const { return this->grantType_ != nullptr;};
    void deleteGrantType() { this->grantType_ = nullptr;};
    inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string getRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GenerateTokenByAuthorizationServerRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    shared_ptr<string> applicationFederatedCredentialName_ {};
    shared_ptr<string> clientAssertion_ {};
    shared_ptr<string> clientAssertionType_ {};
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientSecret_ {};
    shared_ptr<string> clientX509_ {};
    shared_ptr<string> clientX509Chain_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> codeVerifier_ {};
    shared_ptr<string> deviceCode_ {};
    // This parameter is required.
    shared_ptr<string> grantType_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> redirectUri_ {};
    shared_ptr<string> refreshToken_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
