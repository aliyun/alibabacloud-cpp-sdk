// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPUSHCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPUSHCONFIGURATIONREQUEST_HPP_
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
  class SetIdentityProviderUdPushConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentityProviderUdPushConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LdapUdPushConfig, ldapUdPushConfig_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_TO_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentityProviderUdPushConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LdapUdPushConfig, ldapUdPushConfig_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncConfig, periodicSyncConfig_);
      DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
      DARABONBA_PTR_FROM_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
    };
    SetIdentityProviderUdPushConfigurationRequest() = default ;
    SetIdentityProviderUdPushConfigurationRequest(const SetIdentityProviderUdPushConfigurationRequest &) = default ;
    SetIdentityProviderUdPushConfigurationRequest(SetIdentityProviderUdPushConfigurationRequest &&) = default ;
    SetIdentityProviderUdPushConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentityProviderUdPushConfigurationRequest() = default ;
    SetIdentityProviderUdPushConfigurationRequest& operator=(const SetIdentityProviderUdPushConfigurationRequest &) = default ;
    SetIdentityProviderUdPushConfigurationRequest& operator=(SetIdentityProviderUdPushConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UdSyncScopeConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdSyncScopeConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(SourceScopes, sourceScopes_);
        DARABONBA_PTR_TO_JSON(TargetScope, targetScope_);
      };
      friend void from_json(const Darabonba::Json& j, UdSyncScopeConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceScopes, sourceScopes_);
        DARABONBA_PTR_FROM_JSON(TargetScope, targetScope_);
      };
      UdSyncScopeConfigs() = default ;
      UdSyncScopeConfigs(const UdSyncScopeConfigs &) = default ;
      UdSyncScopeConfigs(UdSyncScopeConfigs &&) = default ;
      UdSyncScopeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdSyncScopeConfigs() = default ;
      UdSyncScopeConfigs& operator=(const UdSyncScopeConfigs &) = default ;
      UdSyncScopeConfigs& operator=(UdSyncScopeConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceScopes_ == nullptr
        && this->targetScope_ == nullptr; };
      // sourceScopes Field Functions 
      bool hasSourceScopes() const { return this->sourceScopes_ != nullptr;};
      void deleteSourceScopes() { this->sourceScopes_ = nullptr;};
      inline const vector<string> & getSourceScopes() const { DARABONBA_PTR_GET_CONST(sourceScopes_, vector<string>) };
      inline vector<string> getSourceScopes() { DARABONBA_PTR_GET(sourceScopes_, vector<string>) };
      inline UdSyncScopeConfigs& setSourceScopes(const vector<string> & sourceScopes) { DARABONBA_PTR_SET_VALUE(sourceScopes_, sourceScopes) };
      inline UdSyncScopeConfigs& setSourceScopes(vector<string> && sourceScopes) { DARABONBA_PTR_SET_RVALUE(sourceScopes_, sourceScopes) };


      // targetScope Field Functions 
      bool hasTargetScope() const { return this->targetScope_ != nullptr;};
      void deleteTargetScope() { this->targetScope_ = nullptr;};
      inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
      inline UdSyncScopeConfigs& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


    protected:
      // 同步来源节点
      shared_ptr<vector<string>> sourceScopes_ {};
      // 同步目标节点
      shared_ptr<string> targetScope_ {};
    };

    class PeriodicSyncConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PeriodicSyncConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PeriodicSyncCron, periodicSyncCron_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncTimes, periodicSyncTimes_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncType, periodicSyncType_);
      };
      friend void from_json(const Darabonba::Json& j, PeriodicSyncConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PeriodicSyncCron, periodicSyncCron_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncTimes, periodicSyncTimes_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncType, periodicSyncType_);
      };
      PeriodicSyncConfig() = default ;
      PeriodicSyncConfig(const PeriodicSyncConfig &) = default ;
      PeriodicSyncConfig(PeriodicSyncConfig &&) = default ;
      PeriodicSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PeriodicSyncConfig() = default ;
      PeriodicSyncConfig& operator=(const PeriodicSyncConfig &) = default ;
      PeriodicSyncConfig& operator=(PeriodicSyncConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->periodicSyncCron_ == nullptr
        && this->periodicSyncTimes_ == nullptr && this->periodicSyncType_ == nullptr; };
      // periodicSyncCron Field Functions 
      bool hasPeriodicSyncCron() const { return this->periodicSyncCron_ != nullptr;};
      void deletePeriodicSyncCron() { this->periodicSyncCron_ = nullptr;};
      inline string getPeriodicSyncCron() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncCron_, "") };
      inline PeriodicSyncConfig& setPeriodicSyncCron(string periodicSyncCron) { DARABONBA_PTR_SET_VALUE(periodicSyncCron_, periodicSyncCron) };


      // periodicSyncTimes Field Functions 
      bool hasPeriodicSyncTimes() const { return this->periodicSyncTimes_ != nullptr;};
      void deletePeriodicSyncTimes() { this->periodicSyncTimes_ = nullptr;};
      inline const vector<int32_t> & getPeriodicSyncTimes() const { DARABONBA_PTR_GET_CONST(periodicSyncTimes_, vector<int32_t>) };
      inline vector<int32_t> getPeriodicSyncTimes() { DARABONBA_PTR_GET(periodicSyncTimes_, vector<int32_t>) };
      inline PeriodicSyncConfig& setPeriodicSyncTimes(const vector<int32_t> & periodicSyncTimes) { DARABONBA_PTR_SET_VALUE(periodicSyncTimes_, periodicSyncTimes) };
      inline PeriodicSyncConfig& setPeriodicSyncTimes(vector<int32_t> && periodicSyncTimes) { DARABONBA_PTR_SET_RVALUE(periodicSyncTimes_, periodicSyncTimes) };


      // periodicSyncType Field Functions 
      bool hasPeriodicSyncType() const { return this->periodicSyncType_ != nullptr;};
      void deletePeriodicSyncType() { this->periodicSyncType_ = nullptr;};
      inline string getPeriodicSyncType() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncType_, "") };
      inline PeriodicSyncConfig& setPeriodicSyncType(string periodicSyncType) { DARABONBA_PTR_SET_VALUE(periodicSyncType_, periodicSyncType) };


    protected:
      shared_ptr<string> periodicSyncCron_ {};
      shared_ptr<vector<int32_t>> periodicSyncTimes_ {};
      shared_ptr<string> periodicSyncType_ {};
    };

    class LdapUdPushConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LdapUdPushConfig& obj) { 
        DARABONBA_PTR_TO_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitRdn, organizationalUnitRdn_);
        DARABONBA_PTR_TO_JSON(PasswordSyncStatus, passwordSyncStatus_);
        DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_TO_JSON(UserRdn, userRdn_);
      };
      friend void from_json(const Darabonba::Json& j, LdapUdPushConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitRdn, organizationalUnitRdn_);
        DARABONBA_PTR_FROM_JSON(PasswordSyncStatus, passwordSyncStatus_);
        DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_FROM_JSON(UserRdn, userRdn_);
      };
      LdapUdPushConfig() = default ;
      LdapUdPushConfig(const LdapUdPushConfig &) = default ;
      LdapUdPushConfig(LdapUdPushConfig &&) = default ;
      LdapUdPushConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LdapUdPushConfig() = default ;
      LdapUdPushConfig& operator=(const LdapUdPushConfig &) = default ;
      LdapUdPushConfig& operator=(LdapUdPushConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->organizationUnitObjectClass_ == nullptr
        && this->organizationalUnitRdn_ == nullptr && this->passwordSyncStatus_ == nullptr && this->userObjectClass_ == nullptr && this->userRdn_ == nullptr; };
      // organizationUnitObjectClass Field Functions 
      bool hasOrganizationUnitObjectClass() const { return this->organizationUnitObjectClass_ != nullptr;};
      void deleteOrganizationUnitObjectClass() { this->organizationUnitObjectClass_ = nullptr;};
      inline string getOrganizationUnitObjectClass() const { DARABONBA_PTR_GET_DEFAULT(organizationUnitObjectClass_, "") };
      inline LdapUdPushConfig& setOrganizationUnitObjectClass(string organizationUnitObjectClass) { DARABONBA_PTR_SET_VALUE(organizationUnitObjectClass_, organizationUnitObjectClass) };


      // organizationalUnitRdn Field Functions 
      bool hasOrganizationalUnitRdn() const { return this->organizationalUnitRdn_ != nullptr;};
      void deleteOrganizationalUnitRdn() { this->organizationalUnitRdn_ = nullptr;};
      inline string getOrganizationalUnitRdn() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitRdn_, "") };
      inline LdapUdPushConfig& setOrganizationalUnitRdn(string organizationalUnitRdn) { DARABONBA_PTR_SET_VALUE(organizationalUnitRdn_, organizationalUnitRdn) };


      // passwordSyncStatus Field Functions 
      bool hasPasswordSyncStatus() const { return this->passwordSyncStatus_ != nullptr;};
      void deletePasswordSyncStatus() { this->passwordSyncStatus_ = nullptr;};
      inline string getPasswordSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordSyncStatus_, "") };
      inline LdapUdPushConfig& setPasswordSyncStatus(string passwordSyncStatus) { DARABONBA_PTR_SET_VALUE(passwordSyncStatus_, passwordSyncStatus) };


      // userObjectClass Field Functions 
      bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
      void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
      inline string getUserObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
      inline LdapUdPushConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


      // userRdn Field Functions 
      bool hasUserRdn() const { return this->userRdn_ != nullptr;};
      void deleteUserRdn() { this->userRdn_ = nullptr;};
      inline string getUserRdn() const { DARABONBA_PTR_GET_DEFAULT(userRdn_, "") };
      inline LdapUdPushConfig& setUserRdn(string userRdn) { DARABONBA_PTR_SET_VALUE(userRdn_, userRdn) };


    protected:
      shared_ptr<string> organizationUnitObjectClass_ {};
      shared_ptr<string> organizationalUnitRdn_ {};
      shared_ptr<string> passwordSyncStatus_ {};
      shared_ptr<string> userObjectClass_ {};
      shared_ptr<string> userRdn_ {};
    };

    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && this->incrementalCallbackStatus_ == nullptr && this->instanceId_ == nullptr && this->ldapUdPushConfig_ == nullptr && this->periodicSyncConfig_ == nullptr && this->periodicSyncStatus_ == nullptr
        && this->udSyncScopeConfigs_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline SetIdentityProviderUdPushConfigurationRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline SetIdentityProviderUdPushConfigurationRequest& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetIdentityProviderUdPushConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ldapUdPushConfig Field Functions 
    bool hasLdapUdPushConfig() const { return this->ldapUdPushConfig_ != nullptr;};
    void deleteLdapUdPushConfig() { this->ldapUdPushConfig_ = nullptr;};
    inline const SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig & getLdapUdPushConfig() const { DARABONBA_PTR_GET_CONST(ldapUdPushConfig_, SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig getLdapUdPushConfig() { DARABONBA_PTR_GET(ldapUdPushConfig_, SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest& setLdapUdPushConfig(const SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig & ldapUdPushConfig) { DARABONBA_PTR_SET_VALUE(ldapUdPushConfig_, ldapUdPushConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest& setLdapUdPushConfig(SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig && ldapUdPushConfig) { DARABONBA_PTR_SET_RVALUE(ldapUdPushConfig_, ldapUdPushConfig) };


    // periodicSyncConfig Field Functions 
    bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
    void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
    inline const SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig & getPeriodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig getPeriodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest& setPeriodicSyncConfig(const SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
    inline SetIdentityProviderUdPushConfigurationRequest& setPeriodicSyncConfig(SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline SetIdentityProviderUdPushConfigurationRequest& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // udSyncScopeConfigs Field Functions 
    bool hasUdSyncScopeConfigs() const { return this->udSyncScopeConfigs_ != nullptr;};
    void deleteUdSyncScopeConfigs() { this->udSyncScopeConfigs_ = nullptr;};
    inline const vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs> & getUdSyncScopeConfigs() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfigs_, vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs>) };
    inline vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs> getUdSyncScopeConfigs() { DARABONBA_PTR_GET(udSyncScopeConfigs_, vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs>) };
    inline SetIdentityProviderUdPushConfigurationRequest& setUdSyncScopeConfigs(const vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs> & udSyncScopeConfigs) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };
    inline SetIdentityProviderUdPushConfigurationRequest& setUdSyncScopeConfigs(vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs> && udSyncScopeConfigs) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };


  protected:
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // 增量回调状态，是否处理来自IdP的增量回调数据
    // 
    // This parameter is required.
    shared_ptr<string> incrementalCallbackStatus_ {};
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<SetIdentityProviderUdPushConfigurationRequest::LdapUdPushConfig> ldapUdPushConfig_ {};
    shared_ptr<SetIdentityProviderUdPushConfigurationRequest::PeriodicSyncConfig> periodicSyncConfig_ {};
    shared_ptr<string> periodicSyncStatus_ {};
    // 同步出配置信息
    shared_ptr<vector<SetIdentityProviderUdPushConfigurationRequest::UdSyncScopeConfigs>> udSyncScopeConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
