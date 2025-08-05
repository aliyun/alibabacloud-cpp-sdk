// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConnectionRequestAuthParameters.hpp>
#include <alibabacloud/models/UpdateConnectionRequestNetworkParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkParameters, networkParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthParameters, authParameters_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParameters_);
    };
    UpdateConnectionRequest() = default ;
    UpdateConnectionRequest(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest(UpdateConnectionRequest &&) = default ;
    UpdateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequest() = default ;
    UpdateConnectionRequest& operator=(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest& operator=(UpdateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authParameters_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->networkParameters_ != nullptr; };
    // authParameters Field Functions 
    bool hasAuthParameters() const { return this->authParameters_ != nullptr;};
    void deleteAuthParameters() { this->authParameters_ = nullptr;};
    inline const UpdateConnectionRequestAuthParameters & authParameters() const { DARABONBA_PTR_GET_CONST(authParameters_, UpdateConnectionRequestAuthParameters) };
    inline UpdateConnectionRequestAuthParameters authParameters() { DARABONBA_PTR_GET(authParameters_, UpdateConnectionRequestAuthParameters) };
    inline UpdateConnectionRequest& setAuthParameters(const UpdateConnectionRequestAuthParameters & authParameters) { DARABONBA_PTR_SET_VALUE(authParameters_, authParameters) };
    inline UpdateConnectionRequest& setAuthParameters(UpdateConnectionRequestAuthParameters && authParameters) { DARABONBA_PTR_SET_RVALUE(authParameters_, authParameters) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline UpdateConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkParameters Field Functions 
    bool hasNetworkParameters() const { return this->networkParameters_ != nullptr;};
    void deleteNetworkParameters() { this->networkParameters_ = nullptr;};
    inline const UpdateConnectionRequestNetworkParameters & networkParameters() const { DARABONBA_PTR_GET_CONST(networkParameters_, UpdateConnectionRequestNetworkParameters) };
    inline UpdateConnectionRequestNetworkParameters networkParameters() { DARABONBA_PTR_GET(networkParameters_, UpdateConnectionRequestNetworkParameters) };
    inline UpdateConnectionRequest& setNetworkParameters(const UpdateConnectionRequestNetworkParameters & networkParameters) { DARABONBA_PTR_SET_VALUE(networkParameters_, networkParameters) };
    inline UpdateConnectionRequest& setNetworkParameters(UpdateConnectionRequestNetworkParameters && networkParameters) { DARABONBA_PTR_SET_RVALUE(networkParameters_, networkParameters) };


  protected:
    // The parameters that are configured for authentication.
    std::shared_ptr<UpdateConnectionRequestAuthParameters> authParameters_ = nullptr;
    // The name of the connection that you want to update. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The description of the connection. The description can be up to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters that are configured for the network.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateConnectionRequestNetworkParameters> networkParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
