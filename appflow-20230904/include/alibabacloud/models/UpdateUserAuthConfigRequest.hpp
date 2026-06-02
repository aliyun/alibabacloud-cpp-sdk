// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class UpdateUserAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_TO_JSON(AuthConfigName, authConfigName_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_FROM_JSON(AuthConfigName, authConfigName_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
    };
    UpdateUserAuthConfigRequest() = default ;
    UpdateUserAuthConfigRequest(const UpdateUserAuthConfigRequest &) = default ;
    UpdateUserAuthConfigRequest(UpdateUserAuthConfigRequest &&) = default ;
    UpdateUserAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserAuthConfigRequest() = default ;
    UpdateUserAuthConfigRequest& operator=(const UpdateUserAuthConfigRequest &) = default ;
    UpdateUserAuthConfigRequest& operator=(UpdateUserAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->authConfigId_ == nullptr && this->authConfigName_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline UpdateUserAuthConfigRequest& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // authConfigId Field Functions 
    bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
    void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
    inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
    inline UpdateUserAuthConfigRequest& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


    // authConfigName Field Functions 
    bool hasAuthConfigName() const { return this->authConfigName_ != nullptr;};
    void deleteAuthConfigName() { this->authConfigName_ = nullptr;};
    inline string getAuthConfigName() const { DARABONBA_PTR_GET_DEFAULT(authConfigName_, "") };
    inline UpdateUserAuthConfigRequest& setAuthConfigName(string authConfigName) { DARABONBA_PTR_SET_VALUE(authConfigName_, authConfigName) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline UpdateUserAuthConfigRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorVersion Field Functions 
    bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
    void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
    inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
    inline UpdateUserAuthConfigRequest& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


  protected:
    shared_ptr<string> authConfig_ {};
    // This parameter is required.
    shared_ptr<string> authConfigId_ {};
    shared_ptr<string> authConfigName_ {};
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> connectorVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
