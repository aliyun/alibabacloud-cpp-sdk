// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersApiKeyAuthParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersBasicAuthParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateConnectionRequestAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequestAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_TO_JSON(OAuthParameters, OAuthParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequestAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_FROM_JSON(OAuthParameters, OAuthParameters_);
    };
    UpdateConnectionRequestAuthParameters() = default ;
    UpdateConnectionRequestAuthParameters(const UpdateConnectionRequestAuthParameters &) = default ;
    UpdateConnectionRequestAuthParameters(UpdateConnectionRequestAuthParameters &&) = default ;
    UpdateConnectionRequestAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequestAuthParameters() = default ;
    UpdateConnectionRequestAuthParameters& operator=(const UpdateConnectionRequestAuthParameters &) = default ;
    UpdateConnectionRequestAuthParameters& operator=(UpdateConnectionRequestAuthParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKeyAuthParameters_ != nullptr
        && this->authorizationType_ != nullptr && this->basicAuthParameters_ != nullptr && this->OAuthParameters_ != nullptr; };
    // apiKeyAuthParameters Field Functions 
    bool hasApiKeyAuthParameters() const { return this->apiKeyAuthParameters_ != nullptr;};
    void deleteApiKeyAuthParameters() { this->apiKeyAuthParameters_ = nullptr;};
    inline const Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters & apiKeyAuthParameters() const { DARABONBA_PTR_GET_CONST(apiKeyAuthParameters_, Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters) };
    inline Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters apiKeyAuthParameters() { DARABONBA_PTR_GET(apiKeyAuthParameters_, Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setApiKeyAuthParameters(const Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters & apiKeyAuthParameters) { DARABONBA_PTR_SET_VALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setApiKeyAuthParameters(Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters && apiKeyAuthParameters) { DARABONBA_PTR_SET_RVALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string authorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline UpdateConnectionRequestAuthParameters& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // basicAuthParameters Field Functions 
    bool hasBasicAuthParameters() const { return this->basicAuthParameters_ != nullptr;};
    void deleteBasicAuthParameters() { this->basicAuthParameters_ = nullptr;};
    inline const Models::UpdateConnectionRequestAuthParametersBasicAuthParameters & basicAuthParameters() const { DARABONBA_PTR_GET_CONST(basicAuthParameters_, Models::UpdateConnectionRequestAuthParametersBasicAuthParameters) };
    inline Models::UpdateConnectionRequestAuthParametersBasicAuthParameters basicAuthParameters() { DARABONBA_PTR_GET(basicAuthParameters_, Models::UpdateConnectionRequestAuthParametersBasicAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setBasicAuthParameters(const Models::UpdateConnectionRequestAuthParametersBasicAuthParameters & basicAuthParameters) { DARABONBA_PTR_SET_VALUE(basicAuthParameters_, basicAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setBasicAuthParameters(Models::UpdateConnectionRequestAuthParametersBasicAuthParameters && basicAuthParameters) { DARABONBA_PTR_SET_RVALUE(basicAuthParameters_, basicAuthParameters) };


    // OAuthParameters Field Functions 
    bool hasOAuthParameters() const { return this->OAuthParameters_ != nullptr;};
    void deleteOAuthParameters() { this->OAuthParameters_ = nullptr;};
    inline const Models::UpdateConnectionRequestAuthParametersOAuthParameters & OAuthParameters() const { DARABONBA_PTR_GET_CONST(OAuthParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParameters) };
    inline Models::UpdateConnectionRequestAuthParametersOAuthParameters OAuthParameters() { DARABONBA_PTR_GET(OAuthParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setOAuthParameters(const Models::UpdateConnectionRequestAuthParametersOAuthParameters & OAuthParameters) { DARABONBA_PTR_SET_VALUE(OAuthParameters_, OAuthParameters) };
    inline UpdateConnectionRequestAuthParameters& setOAuthParameters(Models::UpdateConnectionRequestAuthParametersOAuthParameters && OAuthParameters) { DARABONBA_PTR_SET_RVALUE(OAuthParameters_, OAuthParameters) };


  protected:
    // The parameters configured for API key authentication.
    std::shared_ptr<Models::UpdateConnectionRequestAuthParametersApiKeyAuthParameters> apiKeyAuthParameters_ = nullptr;
    // The authentication type. Valid values:
    // 
    // *   BASIC: basic authentication. Basic authentication is a simple authentication scheme built into the HTTP protocol. When you use the HTTP protocol for communications, the authentication method that the HTTP server uses to authenticate user identities on the client is defined in the protocol. The request header is in the Authorization: Basic Base64-encoded string (`Username:Password`) format. If you use this authentication method, you must configure Username and Password.
    // *   API_KEY_AUTH: API key authentication. The request header is in the Token: Token value format. If you use this authentication method, you must configure ApiKeyName and ApiKeyValue.
    // *   OAUTH_AUTH: OAuth authentication. OAuth2.0 is an authentication mechanism. In normal cases, a system that does not use OAuth2.0 can access the resources of the server from the client. To ensure access security, access tokens are used to authenticate users in OAuth 2.0. The client must use an access token to access protected resources. This way, OAuth 2.0 protects resources from being accessed from malicious clients and improves system security. If you use this authentication method, you must configure AuthorizationEndpoint, OAuthHttpParameters, and HttpMethod.
    std::shared_ptr<string> authorizationType_ = nullptr;
    // The parameters that are configured for basic authentication.
    std::shared_ptr<Models::UpdateConnectionRequestAuthParametersBasicAuthParameters> basicAuthParameters_ = nullptr;
    // The parameters that are configured for OAuth authentication.
    std::shared_ptr<Models::UpdateConnectionRequestAuthParametersOAuthParameters> OAuthParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
