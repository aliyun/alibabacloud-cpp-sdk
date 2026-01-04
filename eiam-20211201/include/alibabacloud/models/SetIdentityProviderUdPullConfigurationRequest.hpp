// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
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
    class UdSyncScopeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdSyncScopeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SourceScopes, sourceScopes_);
        DARABONBA_PTR_TO_JSON(TargetScope, targetScope_);
      };
      friend void from_json(const Darabonba::Json& j, UdSyncScopeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceScopes, sourceScopes_);
        DARABONBA_PTR_FROM_JSON(TargetScope, targetScope_);
      };
      UdSyncScopeConfig() = default ;
      UdSyncScopeConfig(const UdSyncScopeConfig &) = default ;
      UdSyncScopeConfig(UdSyncScopeConfig &&) = default ;
      UdSyncScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdSyncScopeConfig() = default ;
      UdSyncScopeConfig& operator=(const UdSyncScopeConfig &) = default ;
      UdSyncScopeConfig& operator=(UdSyncScopeConfig &&) = default ;
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
      inline UdSyncScopeConfig& setSourceScopes(const vector<string> & sourceScopes) { DARABONBA_PTR_SET_VALUE(sourceScopes_, sourceScopes) };
      inline UdSyncScopeConfig& setSourceScopes(vector<string> && sourceScopes) { DARABONBA_PTR_SET_RVALUE(sourceScopes_, sourceScopes) };


      // targetScope Field Functions 
      bool hasTargetScope() const { return this->targetScope_ != nullptr;};
      void deleteTargetScope() { this->targetScope_ = nullptr;};
      inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
      inline UdSyncScopeConfig& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


    protected:
      // Synchronize source scopes
      shared_ptr<vector<string>> sourceScopes_ {};
      // Synchronize target scope
      shared_ptr<string> targetScope_ {};
    };

    class PullProtectedRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PullProtectedRule& obj) { 
        DARABONBA_PTR_TO_JSON(GroupDeletedThreshold, groupDeletedThreshold_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitDeletedThreshold, organizationalUnitDeletedThreshold_);
        DARABONBA_PTR_TO_JSON(UserDeletedThreshold, userDeletedThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, PullProtectedRule& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupDeletedThreshold, groupDeletedThreshold_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitDeletedThreshold, organizationalUnitDeletedThreshold_);
        DARABONBA_PTR_FROM_JSON(UserDeletedThreshold, userDeletedThreshold_);
      };
      PullProtectedRule() = default ;
      PullProtectedRule(const PullProtectedRule &) = default ;
      PullProtectedRule(PullProtectedRule &&) = default ;
      PullProtectedRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PullProtectedRule() = default ;
      PullProtectedRule& operator=(const PullProtectedRule &) = default ;
      PullProtectedRule& operator=(PullProtectedRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupDeletedThreshold_ == nullptr
        && this->organizationalUnitDeletedThreshold_ == nullptr && this->userDeletedThreshold_ == nullptr; };
      // groupDeletedThreshold Field Functions 
      bool hasGroupDeletedThreshold() const { return this->groupDeletedThreshold_ != nullptr;};
      void deleteGroupDeletedThreshold() { this->groupDeletedThreshold_ = nullptr;};
      inline int32_t getGroupDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(groupDeletedThreshold_, 0) };
      inline PullProtectedRule& setGroupDeletedThreshold(int32_t groupDeletedThreshold) { DARABONBA_PTR_SET_VALUE(groupDeletedThreshold_, groupDeletedThreshold) };


      // organizationalUnitDeletedThreshold Field Functions 
      bool hasOrganizationalUnitDeletedThreshold() const { return this->organizationalUnitDeletedThreshold_ != nullptr;};
      void deleteOrganizationalUnitDeletedThreshold() { this->organizationalUnitDeletedThreshold_ = nullptr;};
      inline int32_t getOrganizationalUnitDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitDeletedThreshold_, 0) };
      inline PullProtectedRule& setOrganizationalUnitDeletedThreshold(int32_t organizationalUnitDeletedThreshold) { DARABONBA_PTR_SET_VALUE(organizationalUnitDeletedThreshold_, organizationalUnitDeletedThreshold) };


      // userDeletedThreshold Field Functions 
      bool hasUserDeletedThreshold() const { return this->userDeletedThreshold_ != nullptr;};
      void deleteUserDeletedThreshold() { this->userDeletedThreshold_ = nullptr;};
      inline int32_t getUserDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(userDeletedThreshold_, 0) };
      inline PullProtectedRule& setUserDeletedThreshold(int32_t userDeletedThreshold) { DARABONBA_PTR_SET_VALUE(userDeletedThreshold_, userDeletedThreshold) };


    protected:
      // Group deleted threshold
      shared_ptr<int32_t> groupDeletedThreshold_ {};
      // OrganizationalUnit deleted threshold
      shared_ptr<int32_t> organizationalUnitDeletedThreshold_ {};
      // User deleted threshold
      shared_ptr<int32_t> userDeletedThreshold_ {};
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
      // Periodic synchronize cron
      shared_ptr<string> periodicSyncCron_ {};
      // Periodic synchronize times
      shared_ptr<vector<int32_t>> periodicSyncTimes_ {};
      // Periodic synchronize type
      shared_ptr<string> periodicSyncType_ {};
    };

    class LdapUdPullConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LdapUdPullConfig& obj) { 
        DARABONBA_PTR_TO_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
        DARABONBA_PTR_TO_JSON(GroupObjectClass, groupObjectClass_);
        DARABONBA_PTR_TO_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
        DARABONBA_PTR_TO_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_TO_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
      };
      friend void from_json(const Darabonba::Json& j, LdapUdPullConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
        DARABONBA_PTR_FROM_JSON(GroupObjectClass, groupObjectClass_);
        DARABONBA_PTR_FROM_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
        DARABONBA_PTR_FROM_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_FROM_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
      };
      LdapUdPullConfig() = default ;
      LdapUdPullConfig(const LdapUdPullConfig &) = default ;
      LdapUdPullConfig(LdapUdPullConfig &&) = default ;
      LdapUdPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LdapUdPullConfig() = default ;
      LdapUdPullConfig& operator=(const LdapUdPullConfig &) = default ;
      LdapUdPullConfig& operator=(LdapUdPullConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupMemberAttributeName_ == nullptr
        && this->groupObjectClass_ == nullptr && this->groupObjectClassCustomFilter_ == nullptr && this->organizationUnitObjectClass_ == nullptr && this->userObjectClass_ == nullptr && this->userObjectClassCustomFilter_ == nullptr; };
      // groupMemberAttributeName Field Functions 
      bool hasGroupMemberAttributeName() const { return this->groupMemberAttributeName_ != nullptr;};
      void deleteGroupMemberAttributeName() { this->groupMemberAttributeName_ = nullptr;};
      inline string getGroupMemberAttributeName() const { DARABONBA_PTR_GET_DEFAULT(groupMemberAttributeName_, "") };
      inline LdapUdPullConfig& setGroupMemberAttributeName(string groupMemberAttributeName) { DARABONBA_PTR_SET_VALUE(groupMemberAttributeName_, groupMemberAttributeName) };


      // groupObjectClass Field Functions 
      bool hasGroupObjectClass() const { return this->groupObjectClass_ != nullptr;};
      void deleteGroupObjectClass() { this->groupObjectClass_ = nullptr;};
      inline string getGroupObjectClass() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClass_, "") };
      inline LdapUdPullConfig& setGroupObjectClass(string groupObjectClass) { DARABONBA_PTR_SET_VALUE(groupObjectClass_, groupObjectClass) };


      // groupObjectClassCustomFilter Field Functions 
      bool hasGroupObjectClassCustomFilter() const { return this->groupObjectClassCustomFilter_ != nullptr;};
      void deleteGroupObjectClassCustomFilter() { this->groupObjectClassCustomFilter_ = nullptr;};
      inline string getGroupObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClassCustomFilter_, "") };
      inline LdapUdPullConfig& setGroupObjectClassCustomFilter(string groupObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(groupObjectClassCustomFilter_, groupObjectClassCustomFilter) };


      // organizationUnitObjectClass Field Functions 
      bool hasOrganizationUnitObjectClass() const { return this->organizationUnitObjectClass_ != nullptr;};
      void deleteOrganizationUnitObjectClass() { this->organizationUnitObjectClass_ = nullptr;};
      inline string getOrganizationUnitObjectClass() const { DARABONBA_PTR_GET_DEFAULT(organizationUnitObjectClass_, "") };
      inline LdapUdPullConfig& setOrganizationUnitObjectClass(string organizationUnitObjectClass) { DARABONBA_PTR_SET_VALUE(organizationUnitObjectClass_, organizationUnitObjectClass) };


      // userObjectClass Field Functions 
      bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
      void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
      inline string getUserObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
      inline LdapUdPullConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


      // userObjectClassCustomFilter Field Functions 
      bool hasUserObjectClassCustomFilter() const { return this->userObjectClassCustomFilter_ != nullptr;};
      void deleteUserObjectClassCustomFilter() { this->userObjectClassCustomFilter_ = nullptr;};
      inline string getUserObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(userObjectClassCustomFilter_, "") };
      inline LdapUdPullConfig& setUserObjectClassCustomFilter(string userObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(userObjectClassCustomFilter_, userObjectClassCustomFilter) };


    protected:
      // Group member attribute name
      shared_ptr<string> groupMemberAttributeName_ {};
      // GroupObjectClass
      shared_ptr<string> groupObjectClass_ {};
      // GroupObjectClass custom filter
      shared_ptr<string> groupObjectClassCustomFilter_ {};
      // OrganizationUnitObjectClass
      shared_ptr<string> organizationUnitObjectClass_ {};
      // UserObjectClass
      shared_ptr<string> userObjectClass_ {};
      // UserObjectClass custom filter
      shared_ptr<string> userObjectClassCustomFilter_ {};
    };

    virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && this->identityProviderId_ == nullptr && this->incrementalCallbackStatus_ == nullptr && this->instanceId_ == nullptr && this->ldapUdPullConfig_ == nullptr && this->periodicSyncConfig_ == nullptr
        && this->periodicSyncStatus_ == nullptr && this->pullProtectedRule_ == nullptr && this->udSyncScopeConfig_ == nullptr; };
    // groupSyncStatus Field Functions 
    bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
    void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
    inline string getGroupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // incrementalCallbackStatus Field Functions 
    bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
    void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
    inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ldapUdPullConfig Field Functions 
    bool hasLdapUdPullConfig() const { return this->ldapUdPullConfig_ != nullptr;};
    void deleteLdapUdPullConfig() { this->ldapUdPullConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig & getLdapUdPullConfig() const { DARABONBA_PTR_GET_CONST(ldapUdPullConfig_, SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig getLdapUdPullConfig() { DARABONBA_PTR_GET(ldapUdPullConfig_, SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setLdapUdPullConfig(const SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig & ldapUdPullConfig) { DARABONBA_PTR_SET_VALUE(ldapUdPullConfig_, ldapUdPullConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setLdapUdPullConfig(SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig && ldapUdPullConfig) { DARABONBA_PTR_SET_RVALUE(ldapUdPullConfig_, ldapUdPullConfig) };


    // periodicSyncConfig Field Functions 
    bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
    void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig & getPeriodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig getPeriodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncConfig(const SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncConfig(SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


    // periodicSyncStatus Field Functions 
    bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
    void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
    inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
    inline SetIdentityProviderUdPullConfigurationRequest& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


    // pullProtectedRule Field Functions 
    bool hasPullProtectedRule() const { return this->pullProtectedRule_ != nullptr;};
    void deletePullProtectedRule() { this->pullProtectedRule_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule & getPullProtectedRule() const { DARABONBA_PTR_GET_CONST(pullProtectedRule_, SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule getPullProtectedRule() { DARABONBA_PTR_GET(pullProtectedRule_, SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPullProtectedRule(const SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule & pullProtectedRule) { DARABONBA_PTR_SET_VALUE(pullProtectedRule_, pullProtectedRule) };
    inline SetIdentityProviderUdPullConfigurationRequest& setPullProtectedRule(SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule && pullProtectedRule) { DARABONBA_PTR_SET_RVALUE(pullProtectedRule_, pullProtectedRule) };


    // udSyncScopeConfig Field Functions 
    bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
    void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
    inline const SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig & getUdSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig getUdSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setUdSyncScopeConfig(const SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
    inline SetIdentityProviderUdPullConfigurationRequest& setUdSyncScopeConfig(SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


  protected:
    // Group synchronization status.
    shared_ptr<string> groupSyncStatus_ {};
    // Identity provider ID
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // Incremental callback status, whether to process incremental callback data from IdP.
    // 
    // This parameter is required.
    shared_ptr<string> incrementalCallbackStatus_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Ldap ud pull config
    shared_ptr<SetIdentityProviderUdPullConfigurationRequest::LdapUdPullConfig> ldapUdPullConfig_ {};
    // Periodic synchronize config
    shared_ptr<SetIdentityProviderUdPullConfigurationRequest::PeriodicSyncConfig> periodicSyncConfig_ {};
    // Periodic synchronize status
    shared_ptr<string> periodicSyncStatus_ {};
    // Synchronize protected rule
    shared_ptr<SetIdentityProviderUdPullConfigurationRequest::PullProtectedRule> pullProtectedRule_ {};
    // Synchronize configuration information.
    shared_ptr<SetIdentityProviderUdPullConfigurationRequest::UdSyncScopeConfig> udSyncScopeConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
