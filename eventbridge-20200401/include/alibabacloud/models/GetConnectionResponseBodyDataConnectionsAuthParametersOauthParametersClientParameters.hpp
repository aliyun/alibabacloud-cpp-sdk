// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSCLIENTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATACONNECTIONSAUTHPARAMETERSOAUTHPARAMETERSCLIENTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ClientID, clientID_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientID, clientID_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
    };
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters &&) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters() = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& operator=(const GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters &) = default ;
    GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& operator=(GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientID_ != nullptr
        && this->clientSecret_ != nullptr; };
    // clientID Field Functions 
    bool hasClientID() const { return this->clientID_ != nullptr;};
    void deleteClientID() { this->clientID_ = nullptr;};
    inline string clientID() const { DARABONBA_PTR_GET_DEFAULT(clientID_, "") };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& setClientID(string clientID) { DARABONBA_PTR_SET_VALUE(clientID_, clientID) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline GetConnectionResponseBodyDataConnectionsAuthParametersOAuthParametersClientParameters& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


  protected:
    // The client ID.
    std::shared_ptr<string> clientID_ = nullptr;
    // The AccessKey secret of the client.
    std::shared_ptr<string> clientSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
