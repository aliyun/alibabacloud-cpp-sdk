// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORCREATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORCREATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConnectorAuthenticationInput.hpp>
#include <vector>
#include <alibabacloud/models/ConnectorRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ConnectorCreateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorCreateInput& obj) { 
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_ANY_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(connectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_ANY_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_ANY_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorCreateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_ANY_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(connectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_ANY_FROM_JSON(target, target_);
    };
    ConnectorCreateInput() = default ;
    ConnectorCreateInput(const ConnectorCreateInput &) = default ;
    ConnectorCreateInput(ConnectorCreateInput &&) = default ;
    ConnectorCreateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorCreateInput() = default ;
    ConnectorCreateInput& operator=(const ConnectorCreateInput &) = default ;
    ConnectorCreateInput& operator=(ConnectorCreateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authentication_ == nullptr
        && this->capabilityGrants_ == nullptr && this->clientToken_ == nullptr && this->configuration_ == nullptr && this->connectorName_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->enabled_ == nullptr && this->policy_ == nullptr && this->provider_ == nullptr && this->runtime_ == nullptr
        && this->target_ == nullptr; };
    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const ConnectorAuthenticationInput & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, ConnectorAuthenticationInput) };
    inline ConnectorAuthenticationInput getAuthentication() { DARABONBA_PTR_GET(authentication_, ConnectorAuthenticationInput) };
    inline ConnectorCreateInput& setAuthentication(const ConnectorAuthenticationInput & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline ConnectorCreateInput& setAuthentication(ConnectorAuthenticationInput && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // capabilityGrants Field Functions 
    bool hasCapabilityGrants() const { return this->capabilityGrants_ != nullptr;};
    void deleteCapabilityGrants() { this->capabilityGrants_ = nullptr;};
    inline const vector<Darabonba::Json> & getCapabilityGrants() const { DARABONBA_PTR_GET_CONST(capabilityGrants_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getCapabilityGrants() { DARABONBA_PTR_GET(capabilityGrants_, vector<Darabonba::Json>) };
    inline ConnectorCreateInput& setCapabilityGrants(const vector<Darabonba::Json> & capabilityGrants) { DARABONBA_PTR_SET_VALUE(capabilityGrants_, capabilityGrants) };
    inline ConnectorCreateInput& setCapabilityGrants(vector<Darabonba::Json> && capabilityGrants) { DARABONBA_PTR_SET_RVALUE(capabilityGrants_, capabilityGrants) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConnectorCreateInput& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & getConfiguration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & getConfiguration() { DARABONBA_GET(configuration_) };
    inline ConnectorCreateInput& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline ConnectorCreateInput& setConfiguration(Darabonba::Json && configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline ConnectorCreateInput& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConnectorCreateInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ConnectorCreateInput& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ConnectorCreateInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
    inline ConnectorCreateInput& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline ConnectorCreateInput& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ConnectorCreateInput& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const ConnectorRuntime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, ConnectorRuntime) };
    inline ConnectorRuntime getRuntime() { DARABONBA_PTR_GET(runtime_, ConnectorRuntime) };
    inline ConnectorCreateInput& setRuntime(const ConnectorRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ConnectorCreateInput& setRuntime(ConnectorRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline     const Darabonba::Json & getTarget() const { DARABONBA_GET(target_) };
    Darabonba::Json & getTarget() { DARABONBA_GET(target_) };
    inline ConnectorCreateInput& setTarget(const Darabonba::Json & target) { DARABONBA_SET_VALUE(target_, target) };
    inline ConnectorCreateInput& setTarget(Darabonba::Json && target) { DARABONBA_SET_RVALUE(target_, target) };


  protected:
    // The authentication configuration used to access the target service.
    // 
    // This parameter is required.
    shared_ptr<ConnectorAuthenticationInput> authentication_ {};
    // The list of capabilities granted to the connector.
    // 
    // This parameter is required.
    shared_ptr<vector<Darabonba::Json>> capabilityGrants_ {};
    // Idempotency token
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // Provider configuration
    // 
    // This parameter is required.
    Darabonba::Json configuration_ {};
    // Connector name
    // 
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    // Description
    shared_ptr<string> description_ {};
    // Display name
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // Specifies whether the connector is enabled after creation.
    shared_ptr<bool> enabled_ {};
    // The execution policy of the connector.
    // 
    // This parameter is required.
    Darabonba::Json policy_ {};
    // Provider
    // 
    // This parameter is required.
    shared_ptr<string> provider_ {};
    // The runtime configuration of the connector.
    // 
    // This parameter is required.
    shared_ptr<ConnectorRuntime> runtime_ {};
    // Provider target
    // 
    // This parameter is required.
    Darabonba::Json target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
