// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_TO_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_TO_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CallbackProvisioningConfig, callbackProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(ProvisionPassword, provisionPassword_);
      DARABONBA_PTR_FROM_JSON(ProvisionProtocolType, provisionProtocolType_);
      DARABONBA_PTR_FROM_JSON(ScimProvisioningConfig, scimProvisioningConfig_);
    };
    SetApplicationProvisioningConfigRequest() = default ;
    SetApplicationProvisioningConfigRequest(const SetApplicationProvisioningConfigRequest &) = default ;
    SetApplicationProvisioningConfigRequest(SetApplicationProvisioningConfigRequest &&) = default ;
    SetApplicationProvisioningConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningConfigRequest() = default ;
    SetApplicationProvisioningConfigRequest& operator=(const SetApplicationProvisioningConfigRequest &) = default ;
    SetApplicationProvisioningConfigRequest& operator=(SetApplicationProvisioningConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScimProvisioningConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScimProvisioningConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnConfiguration, authnConfiguration_);
        DARABONBA_PTR_TO_JSON(FullPushScopes, fullPushScopes_);
        DARABONBA_PTR_TO_JSON(ProvisioningActions, provisioningActions_);
        DARABONBA_PTR_TO_JSON(ScimBaseUrl, scimBaseUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ScimProvisioningConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnConfiguration, authnConfiguration_);
        DARABONBA_PTR_FROM_JSON(FullPushScopes, fullPushScopes_);
        DARABONBA_PTR_FROM_JSON(ProvisioningActions, provisioningActions_);
        DARABONBA_PTR_FROM_JSON(ScimBaseUrl, scimBaseUrl_);
      };
      ScimProvisioningConfig() = default ;
      ScimProvisioningConfig(const ScimProvisioningConfig &) = default ;
      ScimProvisioningConfig(ScimProvisioningConfig &&) = default ;
      ScimProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScimProvisioningConfig() = default ;
      ScimProvisioningConfig& operator=(const ScimProvisioningConfig &) = default ;
      ScimProvisioningConfig& operator=(ScimProvisioningConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthnConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthnConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(AuthnMode, authnMode_);
          DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
          DARABONBA_PTR_TO_JSON(GrantType, grantType_);
        };
        friend void from_json(const Darabonba::Json& j, AuthnConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthnMode, authnMode_);
          DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
          DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
        };
        AuthnConfiguration() = default ;
        AuthnConfiguration(const AuthnConfiguration &) = default ;
        AuthnConfiguration(AuthnConfiguration &&) = default ;
        AuthnConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthnConfiguration() = default ;
        AuthnConfiguration& operator=(const AuthnConfiguration &) = default ;
        AuthnConfiguration& operator=(AuthnConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthnParam : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthnParam& obj) { 
            DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
            DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
            DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          };
          friend void from_json(const Darabonba::Json& j, AuthnParam& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
            DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
            DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
            DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          };
          AuthnParam() = default ;
          AuthnParam(const AuthnParam &) = default ;
          AuthnParam(AuthnParam &&) = default ;
          AuthnParam(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthnParam() = default ;
          AuthnParam& operator=(const AuthnParam &) = default ;
          AuthnParam& operator=(AuthnParam &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->authnMethod_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->tokenEndpoint_ == nullptr; };
          // accessToken Field Functions 
          bool hasAccessToken() const { return this->accessToken_ != nullptr;};
          void deleteAccessToken() { this->accessToken_ = nullptr;};
          inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
          inline AuthnParam& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


          // authnMethod Field Functions 
          bool hasAuthnMethod() const { return this->authnMethod_ != nullptr;};
          void deleteAuthnMethod() { this->authnMethod_ = nullptr;};
          inline string getAuthnMethod() const { DARABONBA_PTR_GET_DEFAULT(authnMethod_, "") };
          inline AuthnParam& setAuthnMethod(string authnMethod) { DARABONBA_PTR_SET_VALUE(authnMethod_, authnMethod) };


          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline AuthnParam& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // clientSecret Field Functions 
          bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
          void deleteClientSecret() { this->clientSecret_ = nullptr;};
          inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
          inline AuthnParam& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


          // tokenEndpoint Field Functions 
          bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
          void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
          inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
          inline AuthnParam& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        protected:
          // The access token. If the GrantType parameter is set to bearer_token, you can set this parameter.
          shared_ptr<string> accessToken_ {};
          // The authentication mode of the SCIM protocol. Valid values:
          // 
          // *   client_secret_basic: The client secret is passed in the request header.
          // *   client_secret_post: The client secret is passed in the request body.
          shared_ptr<string> authnMethod_ {};
          // The client ID of the application.
          shared_ptr<string> clientId_ {};
          // The client secret of the application.
          shared_ptr<string> clientSecret_ {};
          // The token endpoint.
          shared_ptr<string> tokenEndpoint_ {};
        };

        virtual bool empty() const override { return this->authnMode_ == nullptr
        && this->authnParam_ == nullptr && this->grantType_ == nullptr; };
        // authnMode Field Functions 
        bool hasAuthnMode() const { return this->authnMode_ != nullptr;};
        void deleteAuthnMode() { this->authnMode_ = nullptr;};
        inline string getAuthnMode() const { DARABONBA_PTR_GET_DEFAULT(authnMode_, "") };
        inline AuthnConfiguration& setAuthnMode(string authnMode) { DARABONBA_PTR_SET_VALUE(authnMode_, authnMode) };


        // authnParam Field Functions 
        bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
        void deleteAuthnParam() { this->authnParam_ = nullptr;};
        inline const AuthnConfiguration::AuthnParam & getAuthnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, AuthnConfiguration::AuthnParam) };
        inline AuthnConfiguration::AuthnParam getAuthnParam() { DARABONBA_PTR_GET(authnParam_, AuthnConfiguration::AuthnParam) };
        inline AuthnConfiguration& setAuthnParam(const AuthnConfiguration::AuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
        inline AuthnConfiguration& setAuthnParam(AuthnConfiguration::AuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


        // grantType Field Functions 
        bool hasGrantType() const { return this->grantType_ != nullptr;};
        void deleteGrantType() { this->grantType_ = nullptr;};
        inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
        inline AuthnConfiguration& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


      protected:
        // The authentication mode of the SCIM protocol. Valid value:
        // 
        // *   oauth2: OAuth2.0 mode.
        shared_ptr<string> authnMode_ {};
        // The configuration parameters related to authorization.
        // 
        // *   If the GrantType parameter is set to client_credentials, you can set the configuration parameters ClientId, ClientSecret, and AuthnMethod.
        // *   If the GrantType parameter is set to bearer_token, you can set the configuration parameter AccessToken.
        shared_ptr<AuthnConfiguration::AuthnParam> authnParam_ {};
        // The grant type of the SCIM protocol. Valid values:
        // 
        // *   client_credentials: client mode.
        // *   bearer_token: key mode.
        shared_ptr<string> grantType_ {};
      };

      virtual bool empty() const override { return this->authnConfiguration_ == nullptr
        && this->fullPushScopes_ == nullptr && this->provisioningActions_ == nullptr && this->scimBaseUrl_ == nullptr; };
      // authnConfiguration Field Functions 
      bool hasAuthnConfiguration() const { return this->authnConfiguration_ != nullptr;};
      void deleteAuthnConfiguration() { this->authnConfiguration_ = nullptr;};
      inline const ScimProvisioningConfig::AuthnConfiguration & getAuthnConfiguration() const { DARABONBA_PTR_GET_CONST(authnConfiguration_, ScimProvisioningConfig::AuthnConfiguration) };
      inline ScimProvisioningConfig::AuthnConfiguration getAuthnConfiguration() { DARABONBA_PTR_GET(authnConfiguration_, ScimProvisioningConfig::AuthnConfiguration) };
      inline ScimProvisioningConfig& setAuthnConfiguration(const ScimProvisioningConfig::AuthnConfiguration & authnConfiguration) { DARABONBA_PTR_SET_VALUE(authnConfiguration_, authnConfiguration) };
      inline ScimProvisioningConfig& setAuthnConfiguration(ScimProvisioningConfig::AuthnConfiguration && authnConfiguration) { DARABONBA_PTR_SET_RVALUE(authnConfiguration_, authnConfiguration) };


      // fullPushScopes Field Functions 
      bool hasFullPushScopes() const { return this->fullPushScopes_ != nullptr;};
      void deleteFullPushScopes() { this->fullPushScopes_ = nullptr;};
      inline const vector<string> & getFullPushScopes() const { DARABONBA_PTR_GET_CONST(fullPushScopes_, vector<string>) };
      inline vector<string> getFullPushScopes() { DARABONBA_PTR_GET(fullPushScopes_, vector<string>) };
      inline ScimProvisioningConfig& setFullPushScopes(const vector<string> & fullPushScopes) { DARABONBA_PTR_SET_VALUE(fullPushScopes_, fullPushScopes) };
      inline ScimProvisioningConfig& setFullPushScopes(vector<string> && fullPushScopes) { DARABONBA_PTR_SET_RVALUE(fullPushScopes_, fullPushScopes) };


      // provisioningActions Field Functions 
      bool hasProvisioningActions() const { return this->provisioningActions_ != nullptr;};
      void deleteProvisioningActions() { this->provisioningActions_ = nullptr;};
      inline const vector<string> & getProvisioningActions() const { DARABONBA_PTR_GET_CONST(provisioningActions_, vector<string>) };
      inline vector<string> getProvisioningActions() { DARABONBA_PTR_GET(provisioningActions_, vector<string>) };
      inline ScimProvisioningConfig& setProvisioningActions(const vector<string> & provisioningActions) { DARABONBA_PTR_SET_VALUE(provisioningActions_, provisioningActions) };
      inline ScimProvisioningConfig& setProvisioningActions(vector<string> && provisioningActions) { DARABONBA_PTR_SET_RVALUE(provisioningActions_, provisioningActions) };


      // scimBaseUrl Field Functions 
      bool hasScimBaseUrl() const { return this->scimBaseUrl_ != nullptr;};
      void deleteScimBaseUrl() { this->scimBaseUrl_ = nullptr;};
      inline string getScimBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(scimBaseUrl_, "") };
      inline ScimProvisioningConfig& setScimBaseUrl(string scimBaseUrl) { DARABONBA_PTR_SET_VALUE(scimBaseUrl_, scimBaseUrl) };


    protected:
      // The configuration parameters related to SCIM-based synchronization.
      shared_ptr<ScimProvisioningConfig::AuthnConfiguration> authnConfiguration_ {};
      // The full synchronization scope of the SCIM protocol. Valid value:
      // 
      // *   urn:alibaba:idaas:app:scim:User:PUSH: full account data synchronization.
      shared_ptr<vector<string>> fullPushScopes_ {};
      // The resource operations of the SCIM protocol. Valid values:
      // 
      // *   urn:alibaba:idaas:app:scim:User:CREATE: account creation.
      // *   urn:alibaba:idaas:app:scim:User:UPDATE: account update.
      // *   urn:alibaba:idaas:app:scim:User:DELETE: account deletion.
      shared_ptr<vector<string>> provisioningActions_ {};
      // The base URL that the application uses to receive the SCIM protocol for IDaaS synchronization.
      shared_ptr<string> scimBaseUrl_ {};
    };

    class CallbackProvisioningConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallbackProvisioningConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(EncryptRequired, encryptRequired_);
        DARABONBA_PTR_TO_JSON(ListenEventScopes, listenEventScopes_);
      };
      friend void from_json(const Darabonba::Json& j, CallbackProvisioningConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(EncryptRequired, encryptRequired_);
        DARABONBA_PTR_FROM_JSON(ListenEventScopes, listenEventScopes_);
      };
      CallbackProvisioningConfig() = default ;
      CallbackProvisioningConfig(const CallbackProvisioningConfig &) = default ;
      CallbackProvisioningConfig(CallbackProvisioningConfig &&) = default ;
      CallbackProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallbackProvisioningConfig() = default ;
      CallbackProvisioningConfig& operator=(const CallbackProvisioningConfig &) = default ;
      CallbackProvisioningConfig& operator=(CallbackProvisioningConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->encryptKey_ == nullptr && this->encryptRequired_ == nullptr && this->listenEventScopes_ == nullptr; };
      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline CallbackProvisioningConfig& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline CallbackProvisioningConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // encryptRequired Field Functions 
      bool hasEncryptRequired() const { return this->encryptRequired_ != nullptr;};
      void deleteEncryptRequired() { this->encryptRequired_ = nullptr;};
      inline bool getEncryptRequired() const { DARABONBA_PTR_GET_DEFAULT(encryptRequired_, false) };
      inline CallbackProvisioningConfig& setEncryptRequired(bool encryptRequired) { DARABONBA_PTR_SET_VALUE(encryptRequired_, encryptRequired) };


      // listenEventScopes Field Functions 
      bool hasListenEventScopes() const { return this->listenEventScopes_ != nullptr;};
      void deleteListenEventScopes() { this->listenEventScopes_ = nullptr;};
      inline const vector<string> & getListenEventScopes() const { DARABONBA_PTR_GET_CONST(listenEventScopes_, vector<string>) };
      inline vector<string> getListenEventScopes() { DARABONBA_PTR_GET(listenEventScopes_, vector<string>) };
      inline CallbackProvisioningConfig& setListenEventScopes(const vector<string> & listenEventScopes) { DARABONBA_PTR_SET_VALUE(listenEventScopes_, listenEventScopes) };
      inline CallbackProvisioningConfig& setListenEventScopes(vector<string> && listenEventScopes) { DARABONBA_PTR_SET_RVALUE(listenEventScopes_, listenEventScopes) };


    protected:
      // The URL that the application uses to receive IDaaS event callbacks.
      shared_ptr<string> callbackUrl_ {};
      // The symmetric key for IDaaS event callbacks. The key is an AES-256 encryption key in the HEX format.
      shared_ptr<string> encryptKey_ {};
      // Specifies whether to encrypt IDaaS event callback messages. Valid values:
      // 
      // *   true: encrypt the messages.
      // *   false: transmit the messages in plaintext.
      shared_ptr<bool> encryptRequired_ {};
      // The list of types of IDaaS event callback messages that are supported by the listener.
      shared_ptr<vector<string>> listenEventScopes_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->callbackProvisioningConfig_ == nullptr && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->provisionPassword_ == nullptr && this->provisionProtocolType_ == nullptr
        && this->scimProvisioningConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationProvisioningConfigRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // callbackProvisioningConfig Field Functions 
    bool hasCallbackProvisioningConfig() const { return this->callbackProvisioningConfig_ != nullptr;};
    void deleteCallbackProvisioningConfig() { this->callbackProvisioningConfig_ = nullptr;};
    inline const SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig & getCallbackProvisioningConfig() const { DARABONBA_PTR_GET_CONST(callbackProvisioningConfig_, SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig getCallbackProvisioningConfig() { DARABONBA_PTR_GET(callbackProvisioningConfig_, SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setCallbackProvisioningConfig(const SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig & callbackProvisioningConfig) { DARABONBA_PTR_SET_VALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setCallbackProvisioningConfig(SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig && callbackProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(callbackProvisioningConfig_, callbackProvisioningConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationProvisioningConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline SetApplicationProvisioningConfigRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // provisionPassword Field Functions 
    bool hasProvisionPassword() const { return this->provisionPassword_ != nullptr;};
    void deleteProvisionPassword() { this->provisionPassword_ = nullptr;};
    inline bool getProvisionPassword() const { DARABONBA_PTR_GET_DEFAULT(provisionPassword_, false) };
    inline SetApplicationProvisioningConfigRequest& setProvisionPassword(bool provisionPassword) { DARABONBA_PTR_SET_VALUE(provisionPassword_, provisionPassword) };


    // provisionProtocolType Field Functions 
    bool hasProvisionProtocolType() const { return this->provisionProtocolType_ != nullptr;};
    void deleteProvisionProtocolType() { this->provisionProtocolType_ = nullptr;};
    inline string getProvisionProtocolType() const { DARABONBA_PTR_GET_DEFAULT(provisionProtocolType_, "") };
    inline SetApplicationProvisioningConfigRequest& setProvisionProtocolType(string provisionProtocolType) { DARABONBA_PTR_SET_VALUE(provisionProtocolType_, provisionProtocolType) };


    // scimProvisioningConfig Field Functions 
    bool hasScimProvisioningConfig() const { return this->scimProvisioningConfig_ != nullptr;};
    void deleteScimProvisioningConfig() { this->scimProvisioningConfig_ = nullptr;};
    inline const SetApplicationProvisioningConfigRequest::ScimProvisioningConfig & getScimProvisioningConfig() const { DARABONBA_PTR_GET_CONST(scimProvisioningConfig_, SetApplicationProvisioningConfigRequest::ScimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest::ScimProvisioningConfig getScimProvisioningConfig() { DARABONBA_PTR_GET(scimProvisioningConfig_, SetApplicationProvisioningConfigRequest::ScimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setScimProvisioningConfig(const SetApplicationProvisioningConfigRequest::ScimProvisioningConfig & scimProvisioningConfig) { DARABONBA_PTR_SET_VALUE(scimProvisioningConfig_, scimProvisioningConfig) };
    inline SetApplicationProvisioningConfigRequest& setScimProvisioningConfig(SetApplicationProvisioningConfigRequest::ScimProvisioningConfig && scimProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(scimProvisioningConfig_, scimProvisioningConfig) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The configuration of event callback synchronization. This parameter is required when the ProvisionProtocolType parameter is set to idaas_callback.
    shared_ptr<SetApplicationProvisioningConfigRequest::CallbackProvisioningConfig> callbackProvisioningConfig_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> networkAccessEndpointId_ {};
    // Specifies whether to synchronize the password in IDaaS user event callbacks. Valid values:
    // 
    // *   true: synchronize the password.
    // *   false: do not synchronize the password.
    shared_ptr<bool> provisionPassword_ {};
    // The synchronization protocol type of the application. Valid values:
    // 
    // *   idaas_callback: custom event callback protocol of IDaaS.
    // *   scim2: System for Cross-domain Identity Management (SCIM) protocol.
    // 
    // This parameter is required.
    shared_ptr<string> provisionProtocolType_ {};
    // The configuration of SCIM-based IDaaS synchronization. This parameter is required when the ProvisionProtocolType parameter is set to scim2.
    shared_ptr<SetApplicationProvisioningConfigRequest::ScimProvisioningConfig> scimProvisioningConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
