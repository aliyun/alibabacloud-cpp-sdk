// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetIdentityProviderUdPullConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderUdPullConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UdPullConfiguration, udPullConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderUdPullConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UdPullConfiguration, udPullConfiguration_);
    };
    GetIdentityProviderUdPullConfigurationResponseBody() = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(const GetIdentityProviderUdPullConfigurationResponseBody &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(GetIdentityProviderUdPullConfigurationResponseBody &&) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderUdPullConfigurationResponseBody() = default ;
    GetIdentityProviderUdPullConfigurationResponseBody& operator=(const GetIdentityProviderUdPullConfigurationResponseBody &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody& operator=(GetIdentityProviderUdPullConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UdPullConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdPullConfiguration& obj) { 
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
      friend void from_json(const Darabonba::Json& j, UdPullConfiguration& obj) { 
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
      UdPullConfiguration() = default ;
      UdPullConfiguration(const UdPullConfiguration &) = default ;
      UdPullConfiguration(UdPullConfiguration &&) = default ;
      UdPullConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdPullConfiguration() = default ;
      UdPullConfiguration& operator=(const UdPullConfiguration &) = default ;
      UdPullConfiguration& operator=(UdPullConfiguration &&) = default ;
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
        // Synchronization Source Node
        shared_ptr<vector<string>> sourceScopes_ {};
        // Synchronization Target Node
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
        // Group Deletion Threshold: If the number of deleted groups exceeds this value, the synchronization task will be terminated.
        shared_ptr<int32_t> groupDeletedThreshold_ {};
        // Organization Deletion Threshold: If the number of deleted organizations exceeds this value, the synchronization task will be terminated.
        shared_ptr<int32_t> organizationalUnitDeletedThreshold_ {};
        // Account Deletion Threshold: If the number of deleted users exceeds this value, the synchronization task will be terminated.
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
        inline int32_t getPeriodicSyncTimes() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncTimes_, 0) };
        inline PeriodicSyncConfig& setPeriodicSyncTimes(int32_t periodicSyncTimes) { DARABONBA_PTR_SET_VALUE(periodicSyncTimes_, periodicSyncTimes) };


        // periodicSyncType Field Functions 
        bool hasPeriodicSyncType() const { return this->periodicSyncType_ != nullptr;};
        void deletePeriodicSyncType() { this->periodicSyncType_ = nullptr;};
        inline string getPeriodicSyncType() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncType_, "") };
        inline PeriodicSyncConfig& setPeriodicSyncType(string periodicSyncType) { DARABONBA_PTR_SET_VALUE(periodicSyncType_, periodicSyncType) };


      protected:
        // Cron expression
        shared_ptr<string> periodicSyncCron_ {};
        // Execution time slots, for example 3,5, meaning the task runs once between 03:00–04:00 and once between 05:00–06:00.
        shared_ptr<int32_t> periodicSyncTimes_ {};
        // type
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
        // Group Member Identifier
        shared_ptr<string> groupMemberAttributeName_ {};
        // Group ObjectClass
        shared_ptr<string> groupObjectClass_ {};
        // Group Custom Filter
        shared_ptr<string> groupObjectClassCustomFilter_ {};
        // Organization ObjectClass
        shared_ptr<string> organizationUnitObjectClass_ {};
        // User ObjectClass
        shared_ptr<string> userObjectClass_ {};
        // User ObjectClass Custom Filter
        shared_ptr<string> userObjectClassCustomFilter_ {};
      };

      virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && this->identityProviderId_ == nullptr && this->incrementalCallbackStatus_ == nullptr && this->instanceId_ == nullptr && this->ldapUdPullConfig_ == nullptr && this->periodicSyncConfig_ == nullptr
        && this->periodicSyncStatus_ == nullptr && this->pullProtectedRule_ == nullptr && this->udSyncScopeConfig_ == nullptr; };
      // groupSyncStatus Field Functions 
      bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
      void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
      inline string getGroupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
      inline UdPullConfiguration& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline UdPullConfiguration& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // incrementalCallbackStatus Field Functions 
      bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
      void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
      inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
      inline UdPullConfiguration& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UdPullConfiguration& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ldapUdPullConfig Field Functions 
      bool hasLdapUdPullConfig() const { return this->ldapUdPullConfig_ != nullptr;};
      void deleteLdapUdPullConfig() { this->ldapUdPullConfig_ = nullptr;};
      inline const UdPullConfiguration::LdapUdPullConfig & getLdapUdPullConfig() const { DARABONBA_PTR_GET_CONST(ldapUdPullConfig_, UdPullConfiguration::LdapUdPullConfig) };
      inline UdPullConfiguration::LdapUdPullConfig getLdapUdPullConfig() { DARABONBA_PTR_GET(ldapUdPullConfig_, UdPullConfiguration::LdapUdPullConfig) };
      inline UdPullConfiguration& setLdapUdPullConfig(const UdPullConfiguration::LdapUdPullConfig & ldapUdPullConfig) { DARABONBA_PTR_SET_VALUE(ldapUdPullConfig_, ldapUdPullConfig) };
      inline UdPullConfiguration& setLdapUdPullConfig(UdPullConfiguration::LdapUdPullConfig && ldapUdPullConfig) { DARABONBA_PTR_SET_RVALUE(ldapUdPullConfig_, ldapUdPullConfig) };


      // periodicSyncConfig Field Functions 
      bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
      void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
      inline const UdPullConfiguration::PeriodicSyncConfig & getPeriodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, UdPullConfiguration::PeriodicSyncConfig) };
      inline UdPullConfiguration::PeriodicSyncConfig getPeriodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, UdPullConfiguration::PeriodicSyncConfig) };
      inline UdPullConfiguration& setPeriodicSyncConfig(const UdPullConfiguration::PeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
      inline UdPullConfiguration& setPeriodicSyncConfig(UdPullConfiguration::PeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


      // periodicSyncStatus Field Functions 
      bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
      void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
      inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
      inline UdPullConfiguration& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


      // pullProtectedRule Field Functions 
      bool hasPullProtectedRule() const { return this->pullProtectedRule_ != nullptr;};
      void deletePullProtectedRule() { this->pullProtectedRule_ = nullptr;};
      inline const UdPullConfiguration::PullProtectedRule & getPullProtectedRule() const { DARABONBA_PTR_GET_CONST(pullProtectedRule_, UdPullConfiguration::PullProtectedRule) };
      inline UdPullConfiguration::PullProtectedRule getPullProtectedRule() { DARABONBA_PTR_GET(pullProtectedRule_, UdPullConfiguration::PullProtectedRule) };
      inline UdPullConfiguration& setPullProtectedRule(const UdPullConfiguration::PullProtectedRule & pullProtectedRule) { DARABONBA_PTR_SET_VALUE(pullProtectedRule_, pullProtectedRule) };
      inline UdPullConfiguration& setPullProtectedRule(UdPullConfiguration::PullProtectedRule && pullProtectedRule) { DARABONBA_PTR_SET_RVALUE(pullProtectedRule_, pullProtectedRule) };


      // udSyncScopeConfig Field Functions 
      bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
      void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
      inline const UdPullConfiguration::UdSyncScopeConfig & getUdSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, UdPullConfiguration::UdSyncScopeConfig) };
      inline UdPullConfiguration::UdSyncScopeConfig getUdSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, UdPullConfiguration::UdSyncScopeConfig) };
      inline UdPullConfiguration& setUdSyncScopeConfig(const UdPullConfiguration::UdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
      inline UdPullConfiguration& setUdSyncScopeConfig(UdPullConfiguration::UdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


    protected:
      // Group Synchronization Status
      // Possible values:
      // 
      // Disabled: disabled
      // 
      // Enabled: enabled
      shared_ptr<string> groupSyncStatus_ {};
      // Identity provider ID
      shared_ptr<string> identityProviderId_ {};
      // Incremental Callback Status: Whether to process incremental callback data from the IdP
      shared_ptr<string> incrementalCallbackStatus_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // LDAP Synchronization Side Related Configuration Information
      shared_ptr<UdPullConfiguration::LdapUdPullConfig> ldapUdPullConfig_ {};
      // Scheduled sync configuration
      shared_ptr<UdPullConfiguration::PeriodicSyncConfig> periodicSyncConfig_ {};
      // Scheduled Validation Status: Whether to periodically validate data discrepancies between IDaaS and the Identity Provider. Possible values:
      // 
      // Disabled: disabled
      // 
      // Enabled: enabled
      shared_ptr<string> periodicSyncStatus_ {};
      // Inbound Synchronization Protection Rule Configuration
      shared_ptr<UdPullConfiguration::PullProtectedRule> pullProtectedRule_ {};
      // Synchronization Scope Configuration Information
      shared_ptr<UdPullConfiguration::UdSyncScopeConfig> udSyncScopeConfig_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->udPullConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // udPullConfiguration Field Functions 
    bool hasUdPullConfiguration() const { return this->udPullConfiguration_ != nullptr;};
    void deleteUdPullConfiguration() { this->udPullConfiguration_ = nullptr;};
    inline const GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration & getUdPullConfiguration() const { DARABONBA_PTR_GET_CONST(udPullConfiguration_, GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration getUdPullConfiguration() { DARABONBA_PTR_GET(udPullConfiguration_, GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setUdPullConfiguration(const GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration & udPullConfiguration) { DARABONBA_PTR_SET_VALUE(udPullConfiguration_, udPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setUdPullConfiguration(GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration && udPullConfiguration) { DARABONBA_PTR_SET_RVALUE(udPullConfiguration_, udPullConfiguration) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Inbound Synchronization Configuration Information
    shared_ptr<GetIdentityProviderUdPullConfigurationResponseBody::UdPullConfiguration> udPullConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
