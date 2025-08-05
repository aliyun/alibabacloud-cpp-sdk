// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyDataConnectionsAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyDataConnectionsAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_TO_JSON(OAuthParameters, OAuthParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyDataConnectionsAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyAuthParameters, apiKeyAuthParameters_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(BasicAuthParameters, basicAuthParameters_);
      DARABONBA_PTR_FROM_JSON(OAuthParameters, OAuthParameters_);
    };
    ListConnectionsResponseBodyDataConnectionsAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParameters(const ListConnectionsResponseBodyDataConnectionsAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParameters(ListConnectionsResponseBodyDataConnectionsAuthParameters &&) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyDataConnectionsAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParameters& operator=(const ListConnectionsResponseBodyDataConnectionsAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParameters& operator=(ListConnectionsResponseBodyDataConnectionsAuthParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKeyAuthParameters_ != nullptr
        && this->authorizationType_ != nullptr && this->basicAuthParameters_ != nullptr && this->OAuthParameters_ != nullptr; };
    // apiKeyAuthParameters Field Functions 
    bool hasApiKeyAuthParameters() const { return this->apiKeyAuthParameters_ != nullptr;};
    void deleteApiKeyAuthParameters() { this->apiKeyAuthParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters & apiKeyAuthParameters() const { DARABONBA_PTR_GET_CONST(apiKeyAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters apiKeyAuthParameters() { DARABONBA_PTR_GET(apiKeyAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setApiKeyAuthParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters & apiKeyAuthParameters) { DARABONBA_PTR_SET_VALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setApiKeyAuthParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters && apiKeyAuthParameters) { DARABONBA_PTR_SET_RVALUE(apiKeyAuthParameters_, apiKeyAuthParameters) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string authorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // basicAuthParameters Field Functions 
    bool hasBasicAuthParameters() const { return this->basicAuthParameters_ != nullptr;};
    void deleteBasicAuthParameters() { this->basicAuthParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters & basicAuthParameters() const { DARABONBA_PTR_GET_CONST(basicAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters basicAuthParameters() { DARABONBA_PTR_GET(basicAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setBasicAuthParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters & basicAuthParameters) { DARABONBA_PTR_SET_VALUE(basicAuthParameters_, basicAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setBasicAuthParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters && basicAuthParameters) { DARABONBA_PTR_SET_RVALUE(basicAuthParameters_, basicAuthParameters) };


    // OAuthParameters Field Functions 
    bool hasOAuthParameters() const { return this->OAuthParameters_ != nullptr;};
    void deleteOAuthParameters() { this->OAuthParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters & OAuthParameters() const { DARABONBA_PTR_GET_CONST(OAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters OAuthParameters() { DARABONBA_PTR_GET(OAuthParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setOAuthParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters & OAuthParameters) { DARABONBA_PTR_SET_VALUE(OAuthParameters_, OAuthParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParameters& setOAuthParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters && OAuthParameters) { DARABONBA_PTR_SET_RVALUE(OAuthParameters_, OAuthParameters) };


  protected:
    // The parameters that are returned for API key authentication.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersApiKeyAuthParameters> apiKeyAuthParameters_ = nullptr;
    // The authentication method. Valid values:
    // 
    // *   BASIC_AUTH: basic authentication.
    // *   API_KEY_AUTH: API key authentication.
    // *   OAUTH_AUTH: OAuth authentication.
    std::shared_ptr<string> authorizationType_ = nullptr;
    // The parameters that are returned for basic authentication.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersBasicAuthParameters> basicAuthParameters_ = nullptr;
    // The parameters that are returned for OAuth authentication.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters> OAuthParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
