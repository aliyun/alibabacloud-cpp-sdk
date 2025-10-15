// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig.hpp>
#include <alibabacloud/models/SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig.hpp>
#include <alibabacloud/models/SetIdentityProviderUdPullConfigurationRequestPullProtectedRule.hpp>
#include <alibabacloud/models/SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetIdentityProviderUdPullConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentityProviderUdPullConfigurationRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SetIdentityProviderUdPullConfigurationRequest& obj) { 
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
    SetIdentityProviderUdPullConfigurationRequest() = default ;
    SetIdentityProviderUdPullConfigurationRequest(const SetIdentityProviderUdPullConfigurationRequest &) = default ;
    SetIdentityProviderUdPullConfigurationRequest(SetIdentityProviderUdPullConfigurationRequest &&) = default ;
    SetIdentityProviderUdPullConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentityProviderUdPullConfigurationRequest() = default ;
    SetIdentityProviderUdPullConfigurationRequest& operator=(const SetIdentityProviderUdPullConfigurationRequest &) = default ;
    SetIdentityProviderUdPullConfigurationRequest& operator=(SetIdentityProviderUdPullConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && return this->identityProviderId_ == nullptr && return this->incrementalCallbackStatus_ == nullptr && return this->instanceId_ == nullptr && return this->ldapUdPullConfig_ == nullptr && return this->periodicSyncConfig_ == nullptr
        && return this->periodicSyncStatus_ == nullptr && return this->pullProtectedRule_ == nullptr && return this->udSyncScopeConfig_ == nullptr; };
    // groupSyncStatus Field Functions 
    bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
    void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
    inline string groupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string incrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ldapUdPullConfig Field Functions 
    bool hasLdapUdPullConfig() const { return this->ldapUdPullConfig_ != nullptr;};
    void deleteLdapUdPullConfig() { this->ldapUdPullConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig & ldapUdPullConfig() const { DARABONBA_PTR_GET_CONST(ldapUdPullConfig_, SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig ldapUdPullConfig() { DARABONBA_PTR_GET(ldapUdPullConfig_, SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setLdapUdPullConfig(const SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig & ldapUdPullConfig) { DARABONBA_PTR_SET_VALUE(ldapUdPullConfig_, ldapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setLdapUdPullConfig(SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig && ldapUdPullConfig) { DARABONBA_PTR_SET_RVALUE(ldapUdPullConfig_, ldapUdPullConfig) };


    // periodicSyncConfig Field Functions 
    bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
    void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig & periodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig periodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncConfig(const SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncConfig(SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string periodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // pullProtectedRule Field Functions 
    bool hasPullProtectedRule() const { return this->pullProtectedRule_ != nullptr;};
    void deletePullProtectedRule() { this->pullProtectedRule_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequestPullProtectedRule & pullProtectedRule() const { DARABONBA_PTR_GET_CONST(pullProtectedRule_, SetIdentityProviderUdPullConfigurationRequestPullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequestPullProtectedRule pullProtectedRule() { DARABONBA_PTR_GET(pullProtectedRule_, SetIdentityProviderUdPullConfigurationRequestPullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPullProtectedRule(const SetIdentityProviderUdPullConfigurationRequestPullProtectedRule & pullProtectedRule) { DARABONBA_PTR_SET_VALUE(pullProtectedRule_, pullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPullProtectedRule(SetIdentityProviderUdPullConfigurationRequestPullProtectedRule && pullProtectedRule) { DARABONBA_PTR_SET_RVALUE(pullProtectedRule_, pullProtectedRule) };


    // udSyncScopeConfig Field Functions 
    bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
    void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig & udSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig udSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setUdSyncScopeConfig(const SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setUdSyncScopeConfig(SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


  protected:
    // Group synchronization status.
    std::shared_ptr<string> groupSyncStatus_ = nullptr;
    // Identity provider ID
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // Incremental callback status, whether to process incremental callback data from IdP.
    // 
    // This parameter is required.
    std::shared_ptr<string> incrementalCallbackStatus_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Ldap ud pull config
    std::shared_ptr<SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig> ldapUdPullConfig_ = nullptr;
    // Periodic synchronize config
    std::shared_ptr<SetIdentityProviderUdPullConfigurationRequestPeriodicSyncConfig> periodicSyncConfig_ = nullptr;
    // Periodic synchronize status
    std::shared_ptr<string> periodicSyncStatus_ = nullptr;
    // Synchronize protected rule
    std::shared_ptr<SetIdentityProviderUdPullConfigurationRequestPullProtectedRule> pullProtectedRule_ = nullptr;
    // Synchronize configuration information.
    std::shared_ptr<SetIdentityProviderUdPullConfigurationRequestUdSyncScopeConfig> udSyncScopeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
