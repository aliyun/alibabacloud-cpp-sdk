// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateUserPoolClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPoolClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(EnforcePKCE, enforcePKCE_);
      DARABONBA_PTR_TO_JSON(RedirectURIs, redirectURIs_);
      DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPoolClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(EnforcePKCE, enforcePKCE_);
      DARABONBA_PTR_FROM_JSON(RedirectURIs, redirectURIs_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    CreateUserPoolClientRequest() = default ;
    CreateUserPoolClientRequest(const CreateUserPoolClientRequest &) = default ;
    CreateUserPoolClientRequest(CreateUserPoolClientRequest &&) = default ;
    CreateUserPoolClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPoolClientRequest() = default ;
    CreateUserPoolClientRequest& operator=(const CreateUserPoolClientRequest &) = default ;
    CreateUserPoolClientRequest& operator=(CreateUserPoolClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTokenValidity_ == nullptr
        && this->clientName_ == nullptr && this->enforcePKCE_ == nullptr && this->redirectURIs_ == nullptr && this->refreshTokenValidity_ == nullptr && this->scopes_ == nullptr
        && this->secretRequired_ == nullptr && this->userPoolName_ == nullptr; };
    // accessTokenValidity Field Functions 
    bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
    void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
    inline string getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, "") };
    inline CreateUserPoolClientRequest& setAccessTokenValidity(string accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline CreateUserPoolClientRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // enforcePKCE Field Functions 
    bool hasEnforcePKCE() const { return this->enforcePKCE_ != nullptr;};
    void deleteEnforcePKCE() { this->enforcePKCE_ = nullptr;};
    inline bool getEnforcePKCE() const { DARABONBA_PTR_GET_DEFAULT(enforcePKCE_, false) };
    inline CreateUserPoolClientRequest& setEnforcePKCE(bool enforcePKCE) { DARABONBA_PTR_SET_VALUE(enforcePKCE_, enforcePKCE) };


    // redirectURIs Field Functions 
    bool hasRedirectURIs() const { return this->redirectURIs_ != nullptr;};
    void deleteRedirectURIs() { this->redirectURIs_ = nullptr;};
    inline const vector<string> & getRedirectURIs() const { DARABONBA_PTR_GET_CONST(redirectURIs_, vector<string>) };
    inline vector<string> getRedirectURIs() { DARABONBA_PTR_GET(redirectURIs_, vector<string>) };
    inline CreateUserPoolClientRequest& setRedirectURIs(const vector<string> & redirectURIs) { DARABONBA_PTR_SET_VALUE(redirectURIs_, redirectURIs) };
    inline CreateUserPoolClientRequest& setRedirectURIs(vector<string> && redirectURIs) { DARABONBA_PTR_SET_RVALUE(redirectURIs_, redirectURIs) };


    // refreshTokenValidity Field Functions 
    bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
    void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
    inline string getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, "") };
    inline CreateUserPoolClientRequest& setRefreshTokenValidity(string refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
    inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
    inline CreateUserPoolClientRequest& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline CreateUserPoolClientRequest& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // secretRequired Field Functions 
    bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
    void deleteSecretRequired() { this->secretRequired_ = nullptr;};
    inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
    inline CreateUserPoolClientRequest& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline CreateUserPoolClientRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    // The validity period of the access token, in seconds. Valid values: 900 to 10800. Default value: 3600.
    shared_ptr<string> accessTokenValidity_ {};
    // The name of the client. The name must be unique within the same user pool and must be 1 to 64 characters in length.
    shared_ptr<string> clientName_ {};
    // Specifies whether to enforce Proof Key for Code Exchange (PKCE). Valid values:
    // - true: Enforced. The code_challenge parameter is required in the authorization code flow.
    // - false: Not enforced.
    shared_ptr<bool> enforcePKCE_ {};
    // The list of OAuth redirect URIs. After authorization is complete, the user\\"s browser is redirected to one of the URIs in the list.
    shared_ptr<vector<string>> redirectURIs_ {};
    // The validity period of the refresh token, in seconds. Valid values: 7200 to 31536000 (90 days). Default value: 2592000 (30 days).
    shared_ptr<string> refreshTokenValidity_ {};
    // The scopes granted to the application. You can specify multiple scopes.
    shared_ptr<vector<string>> scopes_ {};
    // Specifies whether an application secret is required. Valid values:
    // - true: Required. This value applies to confidential clients such as server-side applications. You must call CreateClientSecret to create a secret.
    // - false: Not required. This value applies to public clients such as single-page applications (SPAs) and mobile applications.
    shared_ptr<bool> secretRequired_ {};
    // The name of the user pool.
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
