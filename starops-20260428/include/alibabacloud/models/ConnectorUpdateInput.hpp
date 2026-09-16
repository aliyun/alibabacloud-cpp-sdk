// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTORUPDATEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CONNECTORUPDATEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConnectorAuthenticationUpdateInput.hpp>
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
  class ConnectorUpdateInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectorUpdateInput& obj) { 
      DARABONBA_PTR_TO_JSON(authentication, authentication_);
      DARABONBA_PTR_TO_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_ANY_TO_JSON(configuration, configuration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_ANY_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_ANY_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectorUpdateInput& obj) { 
      DARABONBA_PTR_FROM_JSON(authentication, authentication_);
      DARABONBA_PTR_FROM_JSON(capabilityGrants, capabilityGrants_);
      DARABONBA_ANY_FROM_JSON(configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_ANY_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_ANY_FROM_JSON(target, target_);
    };
    ConnectorUpdateInput() = default ;
    ConnectorUpdateInput(const ConnectorUpdateInput &) = default ;
    ConnectorUpdateInput(ConnectorUpdateInput &&) = default ;
    ConnectorUpdateInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectorUpdateInput() = default ;
    ConnectorUpdateInput& operator=(const ConnectorUpdateInput &) = default ;
    ConnectorUpdateInput& operator=(ConnectorUpdateInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authentication_ == nullptr
        && this->capabilityGrants_ == nullptr && this->configuration_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->enabled_ == nullptr
        && this->policy_ == nullptr && this->runtime_ == nullptr && this->target_ == nullptr; };
    // authentication Field Functions 
    bool hasAuthentication() const { return this->authentication_ != nullptr;};
    void deleteAuthentication() { this->authentication_ = nullptr;};
    inline const ConnectorAuthenticationUpdateInput & getAuthentication() const { DARABONBA_PTR_GET_CONST(authentication_, ConnectorAuthenticationUpdateInput) };
    inline ConnectorAuthenticationUpdateInput getAuthentication() { DARABONBA_PTR_GET(authentication_, ConnectorAuthenticationUpdateInput) };
    inline ConnectorUpdateInput& setAuthentication(const ConnectorAuthenticationUpdateInput & authentication) { DARABONBA_PTR_SET_VALUE(authentication_, authentication) };
    inline ConnectorUpdateInput& setAuthentication(ConnectorAuthenticationUpdateInput && authentication) { DARABONBA_PTR_SET_RVALUE(authentication_, authentication) };


    // capabilityGrants Field Functions 
    bool hasCapabilityGrants() const { return this->capabilityGrants_ != nullptr;};
    void deleteCapabilityGrants() { this->capabilityGrants_ = nullptr;};
    inline const vector<Darabonba::Json> & getCapabilityGrants() const { DARABONBA_PTR_GET_CONST(capabilityGrants_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getCapabilityGrants() { DARABONBA_PTR_GET(capabilityGrants_, vector<Darabonba::Json>) };
    inline ConnectorUpdateInput& setCapabilityGrants(const vector<Darabonba::Json> & capabilityGrants) { DARABONBA_PTR_SET_VALUE(capabilityGrants_, capabilityGrants) };
    inline ConnectorUpdateInput& setCapabilityGrants(vector<Darabonba::Json> && capabilityGrants) { DARABONBA_PTR_SET_RVALUE(capabilityGrants_, capabilityGrants) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & getConfiguration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & getConfiguration() { DARABONBA_GET(configuration_) };
    inline ConnectorUpdateInput& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline ConnectorUpdateInput& setConfiguration(Darabonba::Json && configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConnectorUpdateInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ConnectorUpdateInput& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ConnectorUpdateInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
    inline ConnectorUpdateInput& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline ConnectorUpdateInput& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const ConnectorRuntime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, ConnectorRuntime) };
    inline ConnectorRuntime getRuntime() { DARABONBA_PTR_GET(runtime_, ConnectorRuntime) };
    inline ConnectorUpdateInput& setRuntime(const ConnectorRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ConnectorUpdateInput& setRuntime(ConnectorRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline     const Darabonba::Json & getTarget() const { DARABONBA_GET(target_) };
    Darabonba::Json & getTarget() { DARABONBA_GET(target_) };
    inline ConnectorUpdateInput& setTarget(const Darabonba::Json & target) { DARABONBA_SET_VALUE(target_, target) };
    inline ConnectorUpdateInput& setTarget(Darabonba::Json && target) { DARABONBA_SET_RVALUE(target_, target) };


  protected:
    // The authentication configuration used to replace the existing credentials.
    shared_ptr<ConnectorAuthenticationUpdateInput> authentication_ {};
    // The list of capabilities used to replace the existing grants.
    shared_ptr<vector<Darabonba::Json>> capabilityGrants_ {};
    // The provider configuration used to update the Connector. Only AlibabaCloudResources allows null. Other providers must provide an object.
    Darabonba::Json configuration_ {};
    // The description of the Connector.
    shared_ptr<string> description_ {};
    // The display name of the Connector.
    shared_ptr<string> displayName_ {};
    // Specifies whether to enable the Connector.
    shared_ptr<bool> enabled_ {};
    // The execution policy used to replace the existing policy.
    Darabonba::Json policy_ {};
    // The runtime configuration used to update the Connector.
    shared_ptr<ConnectorRuntime> runtime_ {};
    // The provider target used to update the Connector.
    Darabonba::Json target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
