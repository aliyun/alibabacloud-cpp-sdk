// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateAuthorizationServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_TO_JSON(AuthorizationServerName, authorizationServerName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IssuerDomain, issuerDomain_);
      DARABONBA_PTR_TO_JSON(IssuerMode, issuerMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationServerName, authorizationServerName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IssuerDomain, issuerDomain_);
      DARABONBA_PTR_FROM_JSON(IssuerMode, issuerMode_);
    };
    UpdateAuthorizationServerRequest() = default ;
    UpdateAuthorizationServerRequest(const UpdateAuthorizationServerRequest &) = default ;
    UpdateAuthorizationServerRequest(UpdateAuthorizationServerRequest &&) = default ;
    UpdateAuthorizationServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationServerRequest() = default ;
    UpdateAuthorizationServerRequest& operator=(const UpdateAuthorizationServerRequest &) = default ;
    UpdateAuthorizationServerRequest& operator=(UpdateAuthorizationServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationServerId_ == nullptr
        && this->authorizationServerName_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->issuerDomain_ == nullptr && this->issuerMode_ == nullptr; };
    // authorizationServerId Field Functions 
    bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
    void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
    inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
    inline UpdateAuthorizationServerRequest& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


    // authorizationServerName Field Functions 
    bool hasAuthorizationServerName() const { return this->authorizationServerName_ != nullptr;};
    void deleteAuthorizationServerName() { this->authorizationServerName_ = nullptr;};
    inline string getAuthorizationServerName() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerName_, "") };
    inline UpdateAuthorizationServerRequest& setAuthorizationServerName(string authorizationServerName) { DARABONBA_PTR_SET_VALUE(authorizationServerName_, authorizationServerName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAuthorizationServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAuthorizationServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issuerDomain Field Functions 
    bool hasIssuerDomain() const { return this->issuerDomain_ != nullptr;};
    void deleteIssuerDomain() { this->issuerDomain_ = nullptr;};
    inline string getIssuerDomain() const { DARABONBA_PTR_GET_DEFAULT(issuerDomain_, "") };
    inline UpdateAuthorizationServerRequest& setIssuerDomain(string issuerDomain) { DARABONBA_PTR_SET_VALUE(issuerDomain_, issuerDomain) };


    // issuerMode Field Functions 
    bool hasIssuerMode() const { return this->issuerMode_ != nullptr;};
    void deleteIssuerMode() { this->issuerMode_ = nullptr;};
    inline string getIssuerMode() const { DARABONBA_PTR_GET_DEFAULT(issuerMode_, "") };
    inline UpdateAuthorizationServerRequest& setIssuerMode(string issuerMode) { DARABONBA_PTR_SET_VALUE(issuerMode_, issuerMode) };


  protected:
    // The authorization server ID.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationServerId_ {};
    // The name of the authorization server.
    shared_ptr<string> authorizationServerName_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate a parameter value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see References: [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The domain name used by the issuer.
    shared_ptr<string> issuerDomain_ {};
    // The issuer mode.
    shared_ptr<string> issuerMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
