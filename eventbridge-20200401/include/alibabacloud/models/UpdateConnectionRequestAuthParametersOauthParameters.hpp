// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUESTAUTHPARAMETERSOAUTHPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParametersClientParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateConnectionRequestAuthParametersOAuthParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequestAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_TO_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequestAuthParametersOAuthParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ClientParameters, clientParameters_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(OAuthHttpParameters, OAuthHttpParameters_);
    };
    UpdateConnectionRequestAuthParametersOAuthParameters() = default ;
    UpdateConnectionRequestAuthParametersOAuthParameters(const UpdateConnectionRequestAuthParametersOAuthParameters &) = default ;
    UpdateConnectionRequestAuthParametersOAuthParameters(UpdateConnectionRequestAuthParametersOAuthParameters &&) = default ;
    UpdateConnectionRequestAuthParametersOAuthParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequestAuthParametersOAuthParameters() = default ;
    UpdateConnectionRequestAuthParametersOAuthParameters& operator=(const UpdateConnectionRequestAuthParametersOAuthParameters &) = default ;
    UpdateConnectionRequestAuthParametersOAuthParameters& operator=(UpdateConnectionRequestAuthParametersOAuthParameters &&) = default ;
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
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


    // clientParameters Field Functions 
    bool hasClientParameters() const { return this->clientParameters_ != nullptr;};
    void deleteClientParameters() { this->clientParameters_ = nullptr;};
    inline const Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters & clientParameters() const { DARABONBA_PTR_GET_CONST(clientParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters) };
    inline Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters clientParameters() { DARABONBA_PTR_GET(clientParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setClientParameters(const Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters & clientParameters) { DARABONBA_PTR_SET_VALUE(clientParameters_, clientParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setClientParameters(Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters && clientParameters) { DARABONBA_PTR_SET_RVALUE(clientParameters_, clientParameters) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // OAuthHttpParameters Field Functions 
    bool hasOAuthHttpParameters() const { return this->OAuthHttpParameters_ != nullptr;};
    void deleteOAuthHttpParameters() { this->OAuthHttpParameters_ = nullptr;};
    inline const Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters() const { DARABONBA_PTR_GET_CONST(OAuthHttpParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters) };
    inline Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters OAuthHttpParameters() { DARABONBA_PTR_GET(OAuthHttpParameters_, Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setOAuthHttpParameters(const Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters & OAuthHttpParameters) { DARABONBA_PTR_SET_VALUE(OAuthHttpParameters_, OAuthHttpParameters) };
    inline UpdateConnectionRequestAuthParametersOAuthParameters& setOAuthHttpParameters(Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters && OAuthHttpParameters) { DARABONBA_PTR_SET_RVALUE(OAuthHttpParameters_, OAuthHttpParameters) };


  protected:
    // The endpoint that is used to obtain the OAuth token. The endpoint can be up to 127 characters in length.
    std::shared_ptr<string> authorizationEndpoint_ = nullptr;
    // The parameters that are configured for the client.
    std::shared_ptr<Models::UpdateConnectionRequestAuthParametersOAuthParametersClientParameters> clientParameters_ = nullptr;
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
    std::shared_ptr<Models::UpdateConnectionRequestAuthParametersOAuthParametersOAuthHttpParameters> OAuthHttpParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
