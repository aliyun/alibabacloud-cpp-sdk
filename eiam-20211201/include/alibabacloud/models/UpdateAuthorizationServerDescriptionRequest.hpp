// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONSERVERDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONSERVERDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateAuthorizationServerDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationServerDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationServerDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateAuthorizationServerDescriptionRequest() = default ;
    UpdateAuthorizationServerDescriptionRequest(const UpdateAuthorizationServerDescriptionRequest &) = default ;
    UpdateAuthorizationServerDescriptionRequest(UpdateAuthorizationServerDescriptionRequest &&) = default ;
    UpdateAuthorizationServerDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationServerDescriptionRequest() = default ;
    UpdateAuthorizationServerDescriptionRequest& operator=(const UpdateAuthorizationServerDescriptionRequest &) = default ;
    UpdateAuthorizationServerDescriptionRequest& operator=(UpdateAuthorizationServerDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationServerId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationServerId Field Functions 
    bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
    void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
    inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
    inline UpdateAuthorizationServerDescriptionRequest& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAuthorizationServerDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAuthorizationServerDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAuthorizationServerDescriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The authorization server ID.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationServerId_ {};
    // The client token that is used to ensure the idempotence of the request. Generate a parameter value from your client to ensure that the value is unique among different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, refer to References: [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The description of the authorization server.
    shared_ptr<string> description_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
