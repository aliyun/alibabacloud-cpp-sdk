// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODYUDPULLCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODYUDPULLCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig.hpp>
#include <alibabacloud/models/GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule.hpp>
#include <alibabacloud/models/GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LdapUdPullConfig, ldapUdPullConfig_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_TO_JSON(PullProtectedRule, pullProtectedRule_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupSyncStatus, groupSyncStatus_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LdapUdPullConfig, ldapUdPullConfig_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_FROM_JSON(PullProtectedRule, pullProtectedRule_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
    };
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration() = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration(const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration(GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration &&) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration() = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& operator=(const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& operator=(GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupSyncStatus_ != nullptr
        && this->identityProviderId_ != nullptr && this->incrementalCallbackStatus_ != nullptr && this->instanceId_ != nullptr && this->ldapUdPullConfig_ != nullptr && this->periodicSyncConfig_ != nullptr
        && this->periodicSyncStatus_ != nullptr && this->pullProtectedRule_ != nullptr && this->udSyncScopeConfig_ != nullptr; };
    // groupSyncStatus Field Functions 
    bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
    void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
    inline string groupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ldapUdPullConfig Field Functions 
    bool hasLdapUdPullConfig() const { return this->ldapUdPullConfig_ != nullptr;};
    void deleteLdapUdPullConfig() { this->ldapUdPullConfig_ = nullptr;};
    inline const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig & ldapUdPullConfig() const { DARABONBA_PTR_GET_CONST(ldapUdPullConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig) };
    inline Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig ldapUdPullConfig() { DARABONBA_PTR_GET(ldapUdPullConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setLdapUdPullConfig(const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig & ldapUdPullConfig) { DARABONBA_PTR_SET_VALUE(ldapUdPullConfig_, ldapUdPullConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setLdapUdPullConfig(Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig && ldapUdPullConfig) { DARABONBA_PTR_SET_RVALUE(ldapUdPullConfig_, ldapUdPullConfig) };


    // periodicSyncConfig Field Functions 
    bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
    void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
    inline const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig & periodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig) };
    inline Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig periodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setPeriodicSyncConfig(const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setPeriodicSyncConfig(Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string periodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // pullProtectedRule Field Functions 
    bool hasPullProtectedRule() const { return this->pullProtectedRule_ != nullptr;};
    void deletePullProtectedRule() { this->pullProtectedRule_ = nullptr;};
    inline const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule & pullProtectedRule() const { DARABONBA_PTR_GET_CONST(pullProtectedRule_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule) };
    inline Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule pullProtectedRule() { DARABONBA_PTR_GET(pullProtectedRule_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setPullProtectedRule(const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule & pullProtectedRule) { DARABONBA_PTR_SET_VALUE(pullProtectedRule_, pullProtectedRule) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setPullProtectedRule(Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule && pullProtectedRule) { DARABONBA_PTR_SET_RVALUE(pullProtectedRule_, pullProtectedRule) };


    // udSyncScopeConfig Field Functions 
    bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
    void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
    inline const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig & udSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig) };
    inline Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig udSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setUdSyncScopeConfig(const Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration& setUdSyncScopeConfig(Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


  protected:
    // Group Synchronization Status
    // Possible values:
    // 
    // Disabled: disabled
    // 
    // Enabled: enabled
    std::shared_ptr<string> groupSyncStatus_ = nullptr;
    // Identity provider ID
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // Incremental Callback Status: Whether to process incremental callback data from the IdP
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // LDAP Synchronization Side Related Configuration Information
    std::shared_ptr<Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationLdapUdPullConfig> ldapUdPullConfig_ = nullptr;
    // Scheduled sync configuration
    std::shared_ptr<Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPeriodicSyncConfig> periodicSyncConfig_ = nullptr;
    // Scheduled Validation Status: Whether to periodically validate data discrepancies between IDaaS and the Identity Provider. Possible values:
    // 
    // Disabled: disabled
    // 
    // Enabled: enabled
    std::shared_ptr<string> periodicSyncStatus_ = nullptr;
    // Inbound Synchronization Protection Rule Configuration
    std::shared_ptr<Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationPullProtectedRule> pullProtectedRule_ = nullptr;
    // Synchronization Scope Configuration Information
    std::shared_ptr<Models::GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfigurationUdSyncScopeConfig> udSyncScopeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
