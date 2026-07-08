// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class CreateUserAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(AuthConfigName, authConfigName_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(AuthConfigName, authConfigName_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
    };
    CreateUserAuthConfigRequest() = default ;
    CreateUserAuthConfigRequest(const CreateUserAuthConfigRequest &) = default ;
    CreateUserAuthConfigRequest(CreateUserAuthConfigRequest &&) = default ;
    CreateUserAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserAuthConfigRequest() = default ;
    CreateUserAuthConfigRequest& operator=(const CreateUserAuthConfigRequest &) = default ;
    CreateUserAuthConfigRequest& operator=(CreateUserAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->authConfigName_ == nullptr && this->authType_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline CreateUserAuthConfigRequest& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // authConfigName Field Functions 
    bool hasAuthConfigName() const { return this->authConfigName_ != nullptr;};
    void deleteAuthConfigName() { this->authConfigName_ = nullptr;};
    inline string getAuthConfigName() const { DARABONBA_PTR_GET_DEFAULT(authConfigName_, "") };
    inline CreateUserAuthConfigRequest& setAuthConfigName(string authConfigName) { DARABONBA_PTR_SET_VALUE(authConfigName_, authConfigName) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CreateUserAuthConfigRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline CreateUserAuthConfigRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorVersion Field Functions 
    bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
    void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
    inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
    inline CreateUserAuthConfigRequest& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


  protected:
    // The authentication information.
    // 
    // This parameter is required.
    shared_ptr<string> authConfig_ {};
    // The name of the credential.
    // 
    // This parameter is required.
    shared_ptr<string> authConfigName_ {};
    // The type of the credential.
    shared_ptr<string> authType_ {};
    // The ID of the connector.
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The version of the connector.
    shared_ptr<string> connectorVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
