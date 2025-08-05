// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters.hpp>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters &&) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& operator=(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& operator=(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters &&) = default ;
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
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientParameters Field Functions 
    bool hasClientParameters() const { return this->clientParameters_ != nullptr;};
    void deleteClientParameters() { this->clientParameters_ = nullptr;};
    inline const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters & clientParameters() const { DARABONBA_PTR_GET_CONST(clientParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters) };
    inline Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters clientParameters() { DARABONBA_PTR_GET(clientParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setClientParameters(const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters & clientParameters) { DARABONBA_PTR_SET_VALUE(clientParameters_, clientParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setClientParameters(Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters && clientParameters) { DARABONBA_PTR_SET_RVALUE(clientParameters_, clientParameters) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // OAuthHttpParameters Field Functions 
    bool hasOAuthHttpParameters() const { return this->OAuthHttpParameters_ != nullptr;};
    void deleteOAuthHttpParameters() { this->OAuthHttpParameters_ = nullptr;};
    inline const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters() const { DARABONBA_PTR_GET_CONST(OAuthHttpParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters) };
    inline Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters OAuthHttpParameters() { DARABONBA_PTR_GET(OAuthHttpParameters_, Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setOAuthHttpParameters(const Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters) { DARABONBA_PTR_SET_VALUE(OAuthHttpParameters_, OAuthHttpParameters) };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParameters& setOAuthHttpParameters(Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters && OAuthHttpParameters) { DARABONBA_PTR_SET_RVALUE(OAuthHttpParameters_, OAuthHttpParameters) };


  protected:
    // The endpoint that is used to obtain the OAuth token.
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // The information about the client.
    std::shared_ptr<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters> clientParameters_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   GET
    // *   POST
    // *   HEAD
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request parameters of OAuth authentication.
    std::shared_ptr<Models::GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
