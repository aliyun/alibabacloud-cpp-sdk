// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConnectionRequestAuthParameters.hpp>
#include <alibabacloud/models/CreateConnectionRequestNetworkParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkParameters, networkParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParameters_);
    };
    CreateConnectionRequest() = default ;
    CreateConnectionRequest(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest(CreateConnectionRequest &&) = default ;
    CreateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionRequest() = default ;
    CreateConnectionRequest& operator=(const CreateConnectionRequest &) = default ;
    CreateConnectionRequest& operator=(CreateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authParameters_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->networkParameters_ != nullptr; };
    // authParameters Field Functions 
    bool hasAuthParameters() const { return this->authParameters_ != nullptr;};
    void deleteAuthParameters() { this->authParameters_ = nullptr;};
    inline const CreateConnectionRequestAuthParameters & authParameters() const { DARABONBA_PTR_GET_CONST(authParameters_, CreateConnectionRequestAuthParameters) };
    inline CreateConnectionRequestAuthParameters authParameters() { DARABONBA_PTR_GET(authParameters_, CreateConnectionRequestAuthParameters) };
    inline CreateConnectionRequest& setAuthParameters(const CreateConnectionRequestAuthParameters & authParameters) { DARABONBA_PTR_SET_VALUE(authParameters_, authParameters) };
    inline CreateConnectionRequest& setAuthParameters(CreateConnectionRequestAuthParameters && authParameters) { DARABONBA_PTR_SET_RVALUE(authParameters_, authParameters) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkParameters Field Functions 
    bool hasNetworkParameters() const { return this->networkParameters_ != nullptr;};
    void deleteNetworkParameters() { this->networkParameters_ = nullptr;};
    inline const CreateConnectionRequestNetworkParameters & networkParameters() const { DARABONBA_PTR_GET_CONST(networkParameters_, CreateConnectionRequestNetworkParameters) };
    inline CreateConnectionRequestNetworkParameters networkParameters() { DARABONBA_PTR_GET(networkParameters_, CreateConnectionRequestNetworkParameters) };
    inline CreateConnectionRequest& setNetworkParameters(const CreateConnectionRequestNetworkParameters & networkParameters) { DARABONBA_PTR_SET_VALUE(networkParameters_, networkParameters) };
    inline CreateConnectionRequest& setNetworkParameters(CreateConnectionRequestNetworkParameters && networkParameters) { DARABONBA_PTR_SET_RVALUE(networkParameters_, networkParameters) };


  protected:
    // The parameters that are configured for authentication.
    std::shared_ptr<CreateConnectionRequestAuthParameters> authParameters_ = nullptr;
    // The name of the connection. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The description of the connection. The description can be up to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters that are configured for the network.
    // 
    // This parameter is required.
    std::shared_ptr<CreateConnectionRequestNetworkParameters> networkParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
