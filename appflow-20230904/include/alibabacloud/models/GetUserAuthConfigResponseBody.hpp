// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERAUTHCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERAUTHCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GetUserAuthConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAuthConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserAuthConfig, userAuthConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAuthConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserAuthConfig, userAuthConfig_);
    };
    GetUserAuthConfigResponseBody() = default ;
    GetUserAuthConfigResponseBody(const GetUserAuthConfigResponseBody &) = default ;
    GetUserAuthConfigResponseBody(GetUserAuthConfigResponseBody &&) = default ;
    GetUserAuthConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAuthConfigResponseBody() = default ;
    GetUserAuthConfigResponseBody& operator=(const GetUserAuthConfigResponseBody &) = default ;
    GetUserAuthConfigResponseBody& operator=(GetUserAuthConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserAuthConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserAuthConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
        DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_TO_JSON(AuthConfigName, authConfigName_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
      };
      friend void from_json(const Darabonba::Json& j, UserAuthConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
        DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_FROM_JSON(AuthConfigName, authConfigName_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
      };
      UserAuthConfig() = default ;
      UserAuthConfig(const UserAuthConfig &) = default ;
      UserAuthConfig(UserAuthConfig &&) = default ;
      UserAuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserAuthConfig() = default ;
      UserAuthConfig& operator=(const UserAuthConfig &) = default ;
      UserAuthConfig& operator=(UserAuthConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->authConfigId_ == nullptr && this->authConfigName_ == nullptr && this->authType_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr; };
      // authConfig Field Functions 
      bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
      void deleteAuthConfig() { this->authConfig_ = nullptr;};
      inline string getAuthConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
      inline UserAuthConfig& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


      // authConfigId Field Functions 
      bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
      void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
      inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
      inline UserAuthConfig& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


      // authConfigName Field Functions 
      bool hasAuthConfigName() const { return this->authConfigName_ != nullptr;};
      void deleteAuthConfigName() { this->authConfigName_ = nullptr;};
      inline string getAuthConfigName() const { DARABONBA_PTR_GET_DEFAULT(authConfigName_, "") };
      inline UserAuthConfig& setAuthConfigName(string authConfigName) { DARABONBA_PTR_SET_VALUE(authConfigName_, authConfigName) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline UserAuthConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline UserAuthConfig& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // connectorVersion Field Functions 
      bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
      void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
      inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
      inline UserAuthConfig& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


    protected:
      // The auth config, specified as a JSON string.
      shared_ptr<string> authConfig_ {};
      // The credential ID.
      shared_ptr<string> authConfigId_ {};
      // The credential name.
      shared_ptr<string> authConfigName_ {};
      // The authentication type.
      shared_ptr<string> authType_ {};
      // The connector ID.
      shared_ptr<string> connectorId_ {};
      // The connector version.
      shared_ptr<string> connectorVersion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userAuthConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserAuthConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userAuthConfig Field Functions 
    bool hasUserAuthConfig() const { return this->userAuthConfig_ != nullptr;};
    void deleteUserAuthConfig() { this->userAuthConfig_ = nullptr;};
    inline const GetUserAuthConfigResponseBody::UserAuthConfig & getUserAuthConfig() const { DARABONBA_PTR_GET_CONST(userAuthConfig_, GetUserAuthConfigResponseBody::UserAuthConfig) };
    inline GetUserAuthConfigResponseBody::UserAuthConfig getUserAuthConfig() { DARABONBA_PTR_GET(userAuthConfig_, GetUserAuthConfigResponseBody::UserAuthConfig) };
    inline GetUserAuthConfigResponseBody& setUserAuthConfig(const GetUserAuthConfigResponseBody::UserAuthConfig & userAuthConfig) { DARABONBA_PTR_SET_VALUE(userAuthConfig_, userAuthConfig) };
    inline GetUserAuthConfigResponseBody& setUserAuthConfig(GetUserAuthConfigResponseBody::UserAuthConfig && userAuthConfig) { DARABONBA_PTR_SET_RVALUE(userAuthConfig_, userAuthConfig) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Contains the credential details.
    shared_ptr<GetUserAuthConfigResponseBody::UserAuthConfig> userAuthConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
