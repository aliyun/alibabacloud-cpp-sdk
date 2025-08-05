// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConnectionRequestAuthParametersOAuthParametersClientParameters.hpp>
#include <alibabacloud/models/CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateConnectionRequestAuthParametersOAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequestAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequestAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    CreateConnectionRequestAuthParametersOAuthParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParameters(const CreateConnectionRequestAuthParametersOAuthParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParameters(CreateConnectionRequestAuthParametersOAuthParameters &&) = default ;
    CreateConnectionRequestAuthParametersOAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequestAuthParametersOAuthParameters() = default ;
    CreateConnectionRequestAuthParametersOAuthParameters& operator=(const CreateConnectionRequestAuthParametersOAuthParameters &) = default ;
    CreateConnectionRequestAuthParametersOAuthParameters& operator=(CreateConnectionRequestAuthParametersOAuthParameters &&) = default ;
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
    inline CreateConnectionRequestAuthParametersOAuthParameters& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientParameters Field Functions 
    bool hasClientParameters() const { return this->clientParameters_ != nullptr;};
    void deleteClientParameters() { this->clientParameters_ = nullptr;};
    inline const Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters & clientParameters() const { DARABONBA_PTR_GET_CONST(clientParameters_, Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters) };
    inline Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters clientParameters() { DARABONBA_PTR_GET(clientParameters_, Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParameters& setClientParameters(const Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters & clientParameters) { DARABONBA_PTR_SET_VALUE(clientParameters_, clientParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParameters& setClientParameters(Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters && clientParameters) { DARABONBA_PTR_SET_RVALUE(clientParameters_, clientParameters) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline CreateConnectionRequestAuthParametersOAuthParameters& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // OAuthHttpParameters Field Functions 
    bool hasOAuthHttpParameters() const { return this->OAuthHttpParameters_ != nullptr;};
    void deleteOAuthHttpParameters() { this->OAuthHttpParameters_ = nullptr;};
    inline const Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters() const { DARABONBA_PTR_GET_CONST(OAuthHttpParameters_, Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters) };
    inline Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters OAuthHttpParameters() { DARABONBA_PTR_GET(OAuthHttpParameters_, Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParameters& setOAuthHttpParameters(const Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters) { DARABONBA_PTR_SET_VALUE(OAuthHttpParameters_, OAuthHttpParameters) };
    inline CreateConnectionRequestAuthParametersOAuthParameters& setOAuthHttpParameters(Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters && OAuthHttpParameters) { DARABONBA_PTR_SET_RVALUE(OAuthHttpParameters_, OAuthHttpParameters) };


  protected:
    // The endpoint of the authorized client. The endpoint can be up to 127 characters in length.
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // The parameters that are configured for the client.
    std::shared_ptr<Models::CreateConnectionRequestAuthParametersOAuthParametersClientParameters> clientParameters_ = nullptr;
    // The HTTP request method. Valid values:
    // 
    // *   GET
    // *   POST
    // *   HEAD
    // *   DELETE
    // *   PUT
    // *   PATCH
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The request parameters of OAuth authentication.
    std::shared_ptr<Models::CreateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
