// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyDataConnectionsAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyDataConnectionsAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_TO_JSON(OAuthParameters, OAuthParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyDataConnectionsAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_FROM_JSON(OAuthParameters, OAuthParameters_);
    };
    GetConnectionResponseBodyDataConnectionsAuthParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParameters(const GetConnectionResponseBodyDataConnectionsAuthParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParameters(GetConnectionResponseBodyDataConnectionsAuthParameters &&) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyDataConnectionsAuthParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParameters& operator=(const GetConnectionResponseBodyDataConnectionsAuthParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParameters& operator=(GetConnectionResponseBodyDataConnectionsAuthParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKeyAuthParameters_ != nullptr
        && this->authorizationType_ != nullptr && this->basicAuthParameters_ != nullptr && this->OAuthParameters_ != nullptr; };
    // apiKeyAuthParameters Field Functions 
    bool hasApiKeyAuthParameters() const { return this->apiKeyAuthParameters_ != nullptr;};
    void deleteApiKeyAuthParameters() { this->apiKeyAuthParameters_ = nullptr;};
    inline const Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters & apiKeyAuthParameters() const { DARABONBA_PTR_GET_CONST(apiKeyAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters) };
    inline Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters apiKeyAuthParameters() { DARABONBA_PTR_GET(apiKeyAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setApiKeyAuthParameters(const Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters & apiKeyAuthParameters) { DARABONBA_PTR_SET_VALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setApiKeyAuthParameters(Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters && apiKeyAuthParameters) { DARABONBA_PTR_SET_RVALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string authorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // basicAuthParameters Field Functions 
    bool hasBasicAuthParameters() const { return this->basicAuthParameters_ != nullptr;};
    void deleteBasicAuthParameters() { this->basicAuthParameters_ = nullptr;};
    inline const Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters & basicAuthParameters() const { DARABONBA_PTR_GET_CONST(basicAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters) };
    inline Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters basicAuthParameters() { DARABONBA_PTR_GET(basicAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setBasicAuthParameters(const Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters & basicAuthParameters) { DARABONBA_PTR_SET_VALUE(basicAuthParameters_, basicAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setBasicAuthParameters(Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters && basicAuthParameters) { DARABONBA_PTR_SET_RVALUE(basicAuthParameters_, basicAuthParameters) };


    // OAuthParameters Field Functions 
    bool hasOAuthParameters() const { return this->OAuthParameters_ != nullptr;};
    void deleteOAuthParameters() { this->OAuthParameters_ = nullptr;};
    inline const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters & OAuthParameters() const { DARABONBA_PTR_GET_CONST(OAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters) };
    inline Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters OAuthParameters() { DARABONBA_PTR_GET(OAuthParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setOAuthParameters(const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters & OAuthParameters) { DARABONBA_PTR_SET_VALUE(OAuthParameters_, OAuthParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParameters& setOAuthParameters(Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters && OAuthParameters) { DARABONBA_PTR_SET_RVALUE(OAuthParameters_, OAuthParameters) };


  protected:
    // The information about API key authentication.
    std::shared_ptr<Models::GetConnectionResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters> apiKeyAuthParameters_ = nullptr;
    // The authentication method. Valid values:
    // 
    // *   BASIC_AUTH: basic authentication.
    // *   API_KEY_AUTH: API key authentication.
    // *   OAUTH_AUTH: OAuth authentication.
    std::shared_ptr<string> authorizationType_ = nullptr;
    // The information about basic authentication.
    std::shared_ptr<Models::GetConnectionResponseBodyDataConnectionsAuthParametersBasicAuthParameters> basicAuthParameters_ = nullptr;
    // The information about OAuth authentication.
    std::shared_ptr<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters> OAuthParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
