// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters.hpp>
#include <alibabacloud/models/ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters(const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters(ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters &&) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters() = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& operator=(const ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters &) = default ;
    ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& operator=(ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationEndpoint_ != nullptr
        && this->clientParameters_ != nullptr && this->httpMethod_ != nullptr && this->OAuthHttpParameters_ != nullptr; };
    // authorizationEndpoint Field Functions 
    bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
    void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
    inline string authorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientParameters Field Functions 
    bool hasClientParameters() const { return this->clientParameters_ != nullptr;};
    void deleteClientParameters() { this->clientParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters & clientParameters() const { DARABONBA_PTR_GET_CONST(clientParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters clientParameters() { DARABONBA_PTR_GET(clientParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setClientParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters & clientParameters) { DARABONBA_PTR_SET_VALUE(clientParameters_, clientParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setClientParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters && clientParameters) { DARABONBA_PTR_SET_RVALUE(clientParameters_, clientParameters) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // OAuthHttpParameters Field Functions 
    bool hasOAuthHttpParameters() const { return this->OAuthHttpParameters_ != nullptr;};
    void deleteOAuthHttpParameters() { this->OAuthHttpParameters_ = nullptr;};
    inline const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters() const { DARABONBA_PTR_GET_CONST(OAuthHttpParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters) };
    inline Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters OAuthHttpParameters() { DARABONBA_PTR_GET(OAuthHttpParameters_, Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setOAuthHttpParameters(const Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters) { DARABONBA_PTR_SET_VALUE(OAuthHttpParameters_, OAuthHttpParameters) };
    inline ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParameters& setOAuthHttpParameters(Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters && OAuthHttpParameters) { DARABONBA_PTR_SET_RVALUE(OAuthHttpParameters_, OAuthHttpParameters) };


  protected:
    // The endpoint that is used to obtain the OAuth token.
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // The parameters that are returned for the client.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters> clientParameters_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   GET
    // *   POST
    // *   HEAD
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request parameters of OAuth authentication.
    std::shared_ptr<Models::ListConnectionsResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
