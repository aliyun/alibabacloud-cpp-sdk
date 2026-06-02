// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GetUserAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
    };
    GetUserAuthConfigRequest() = default ;
    GetUserAuthConfigRequest(const GetUserAuthConfigRequest &) = default ;
    GetUserAuthConfigRequest(GetUserAuthConfigRequest &&) = default ;
    GetUserAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAuthConfigRequest() = default ;
    GetUserAuthConfigRequest& operator=(const GetUserAuthConfigRequest &) = default ;
    GetUserAuthConfigRequest& operator=(GetUserAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfigId_ == nullptr
        && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr; };
    // authConfigId Field Functions 
    bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
    void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
    inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
    inline GetUserAuthConfigRequest& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline GetUserAuthConfigRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // connectorVersion Field Functions 
    bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
    void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
    inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
    inline GetUserAuthConfigRequest& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> authConfigId_ {};
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    shared_ptr<string> connectorVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
