// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
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
  class CreateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnConfig, authnConfig_);
      DARABONBA_PTR_TO_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_TO_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_TO_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_TO_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnConfig, authnConfig_);
      DARABONBA_PTR_FROM_JSON(AutoCreateUserConfig, autoCreateUserConfig_);
      DARABONBA_PTR_FROM_JSON(AutoUpdateUserConfig, autoUpdateUserConfig_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
      DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
      DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
      DARABONBA_PTR_FROM_JSON(UdPullConfig, udPullConfig_);
      DARABONBA_PTR_FROM_JSON(UdPushConfig, udPushConfig_);
      DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
    };
    CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest(CreateIdentityProviderRequest &&) = default ;
    CreateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest& operator=(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest& operator=(CreateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WeComConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WeComConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(CorpSecret, corpSecret_);
        DARABONBA_PTR_TO_JSON(TrustableDomain, trustableDomain_);
      };
      friend void from_json(const Darabonba::Json& j, WeComConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AuthorizeCallbackDomain, authorizeCallbackDomain_);
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(CorpSecret, corpSecret_);
        DARABONBA_PTR_FROM_JSON(TrustableDomain, trustableDomain_);
      };
      WeComConfig() = default ;
      WeComConfig(const WeComConfig &) = default ;
      WeComConfig(WeComConfig &&) = default ;
      WeComConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WeComConfig() = default ;
      WeComConfig& operator=(const WeComConfig &) = default ;
      WeComConfig& operator=(WeComConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->authorizeCallbackDomain_ == nullptr && this->corpId_ == nullptr && this->corpSecret_ == nullptr && this->trustableDomain_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline WeComConfig& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // authorizeCallbackDomain Field Functions 
      bool hasAuthorizeCallbackDomain() const { return this->authorizeCallbackDomain_ != nullptr;};
      void deleteAuthorizeCallbackDomain() { this->authorizeCallbackDomain_ = nullptr;};
      inline string getAuthorizeCallbackDomain() const { DARABONBA_PTR_GET_DEFAULT(authorizeCallbackDomain_, "") };
      inline WeComConfig& setAuthorizeCallbackDomain(string authorizeCallbackDomain) { DARABONBA_PTR_SET_VALUE(authorizeCallbackDomain_, authorizeCallbackDomain) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline WeComConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpSecret Field Functions 
      bool hasCorpSecret() const { return this->corpSecret_ != nullptr;};
      void deleteCorpSecret() { this->corpSecret_ = nullptr;};
      inline string getCorpSecret() const { DARABONBA_PTR_GET_DEFAULT(corpSecret_, "") };
      inline WeComConfig& setCorpSecret(string corpSecret) { DARABONBA_PTR_SET_VALUE(corpSecret_, corpSecret) };


      // trustableDomain Field Functions 
      bool hasTrustableDomain() const { return this->trustableDomain_ != nullptr;};
      void deleteTrustableDomain() { this->trustableDomain_ = nullptr;};
      inline string getTrustableDomain() const { DARABONBA_PTR_GET_DEFAULT(trustableDomain_, "") };
      inline WeComConfig& setTrustableDomain(string trustableDomain) { DARABONBA_PTR_SET_VALUE(trustableDomain_, trustableDomain) };


    protected:
      // Agent ID of the self-built WeCom application.
      shared_ptr<string> agentId_ {};
      // Authorization callback domain.
      shared_ptr<string> authorizeCallbackDomain_ {};
      // Corp ID of the self-built WeCom application.
      shared_ptr<string> corpId_ {};
      // Corp Secret of the self-built WeCom application.
      shared_ptr<string> corpSecret_ {};
      // Trusted domain.
      shared_ptr<string> trustableDomain_ {};
    };

    class UdPushConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdPushConfig& obj) { 
        DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncConfig, periodicSyncConfig_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
        DARABONBA_PTR_TO_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, UdPushConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncConfig, periodicSyncConfig_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
        DARABONBA_PTR_FROM_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
      };
      UdPushConfig() = default ;
      UdPushConfig(const UdPushConfig &) = default ;
      UdPushConfig(UdPushConfig &&) = default ;
      UdPushConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdPushConfig() = default ;
      UdPushConfig& operator=(const UdPushConfig &) = default ;
      UdPushConfig& operator=(UdPushConfig &&) = default ;
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
        // List of source nodes for synchronization.
        shared_ptr<vector<string>> sourceScopes_ {};
        // Target node for synchronization.
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

      virtual bool empty() const override { return this->incrementalCallbackStatus_ == nullptr
        && this->periodicSyncConfig_ == nullptr && this->periodicSyncStatus_ == nullptr && this->udSyncScopeConfigs_ == nullptr; };
      // incrementalCallbackStatus Field Functions 
      bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
      void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
      inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
      inline UdPushConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


      // periodicSyncConfig Field Functions 
      bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
      void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
      inline const UdPushConfig::PeriodicSyncConfig & getPeriodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, UdPushConfig::PeriodicSyncConfig) };
      inline UdPushConfig::PeriodicSyncConfig getPeriodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, UdPushConfig::PeriodicSyncConfig) };
      inline UdPushConfig& setPeriodicSyncConfig(const UdPushConfig::PeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
      inline UdPushConfig& setPeriodicSyncConfig(UdPushConfig::PeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


      // periodicSyncStatus Field Functions 
      bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
      void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
      inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
      inline UdPushConfig& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


      // udSyncScopeConfigs Field Functions 
      bool hasUdSyncScopeConfigs() const { return this->udSyncScopeConfigs_ != nullptr;};
      void deleteUdSyncScopeConfigs() { this->udSyncScopeConfigs_ = nullptr;};
      inline const vector<UdPushConfig::UdSyncScopeConfigs> & getUdSyncScopeConfigs() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfigs_, vector<UdPushConfig::UdSyncScopeConfigs>) };
      inline vector<UdPushConfig::UdSyncScopeConfigs> getUdSyncScopeConfigs() { DARABONBA_PTR_GET(udSyncScopeConfigs_, vector<UdPushConfig::UdSyncScopeConfigs>) };
      inline UdPushConfig& setUdSyncScopeConfigs(const vector<UdPushConfig::UdSyncScopeConfigs> & udSyncScopeConfigs) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };
      inline UdPushConfig& setUdSyncScopeConfigs(vector<UdPushConfig::UdSyncScopeConfigs> && udSyncScopeConfigs) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };


    protected:
      // Incremental callback status. This field is reserved and currently not in use; please ignore it.
      shared_ptr<string> incrementalCallbackStatus_ {};
      shared_ptr<UdPushConfig::PeriodicSyncConfig> periodicSyncConfig_ {};
      // Periodic check status. This field is currently not in use, please ignore it.
      shared_ptr<string> periodicSyncStatus_ {};
      // Outbound synchronization configuration information.
      shared_ptr<vector<UdPushConfig::UdSyncScopeConfigs>> udSyncScopeConfigs_ {};
    };

    class UdPullConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UdPullConfig& obj) { 
        DARABONBA_PTR_TO_JSON(GroupSyncStatus, groupSyncStatus_);
        DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncConfig, periodicSyncConfig_);
        DARABONBA_PTR_TO_JSON(PeriodicSyncStatus, periodicSyncStatus_);
        DARABONBA_PTR_TO_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
      };
      friend void from_json(const Darabonba::Json& j, UdPullConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupSyncStatus, groupSyncStatus_);
        DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncConfig, periodicSyncConfig_);
        DARABONBA_PTR_FROM_JSON(PeriodicSyncStatus, periodicSyncStatus_);
        DARABONBA_PTR_FROM_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
      };
      UdPullConfig() = default ;
      UdPullConfig(const UdPullConfig &) = default ;
      UdPullConfig(UdPullConfig &&) = default ;
      UdPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UdPullConfig() = default ;
      UdPullConfig& operator=(const UdPullConfig &) = default ;
      UdPullConfig& operator=(UdPullConfig &&) = default ;
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
        // List of source nodes for synchronization.
        shared_ptr<vector<string>> sourceScopes_ {};
        // Synchronize target node, and fill in the IDaaS organization ID.
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
        // cron expression.
        shared_ptr<string> periodicSyncCron_ {};
        // Collection of time points.
        shared_ptr<vector<int32_t>> periodicSyncTimes_ {};
        // type.
        shared_ptr<string> periodicSyncType_ {};
      };

      virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && this->incrementalCallbackStatus_ == nullptr && this->periodicSyncConfig_ == nullptr && this->periodicSyncStatus_ == nullptr && this->udSyncScopeConfig_ == nullptr; };
      // groupSyncStatus Field Functions 
      bool hasGroupSyncStatus() const { return this->groupSyncStatus_ != nullptr;};
      void deleteGroupSyncStatus() { this->groupSyncStatus_ = nullptr;};
      inline string getGroupSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(groupSyncStatus_, "") };
      inline UdPullConfig& setGroupSyncStatus(string groupSyncStatus) { DARABONBA_PTR_SET_VALUE(groupSyncStatus_, groupSyncStatus) };


      // incrementalCallbackStatus Field Functions 
      bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
      void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
      inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
      inline UdPullConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


      // periodicSyncConfig Field Functions 
      bool hasPeriodicSyncConfig() const { return this->periodicSyncConfig_ != nullptr;};
      void deletePeriodicSyncConfig() { this->periodicSyncConfig_ = nullptr;};
      inline const UdPullConfig::PeriodicSyncConfig & getPeriodicSyncConfig() const { DARABONBA_PTR_GET_CONST(periodicSyncConfig_, UdPullConfig::PeriodicSyncConfig) };
      inline UdPullConfig::PeriodicSyncConfig getPeriodicSyncConfig() { DARABONBA_PTR_GET(periodicSyncConfig_, UdPullConfig::PeriodicSyncConfig) };
      inline UdPullConfig& setPeriodicSyncConfig(const UdPullConfig::PeriodicSyncConfig & periodicSyncConfig) { DARABONBA_PTR_SET_VALUE(periodicSyncConfig_, periodicSyncConfig) };
      inline UdPullConfig& setPeriodicSyncConfig(UdPullConfig::PeriodicSyncConfig && periodicSyncConfig) { DARABONBA_PTR_SET_RVALUE(periodicSyncConfig_, periodicSyncConfig) };


      // periodicSyncStatus Field Functions 
      bool hasPeriodicSyncStatus() const { return this->periodicSyncStatus_ != nullptr;};
      void deletePeriodicSyncStatus() { this->periodicSyncStatus_ = nullptr;};
      inline string getPeriodicSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(periodicSyncStatus_, "") };
      inline UdPullConfig& setPeriodicSyncStatus(string periodicSyncStatus) { DARABONBA_PTR_SET_VALUE(periodicSyncStatus_, periodicSyncStatus) };


      // udSyncScopeConfig Field Functions 
      bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
      void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
      inline const UdPullConfig::UdSyncScopeConfig & getUdSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, UdPullConfig::UdSyncScopeConfig) };
      inline UdPullConfig::UdSyncScopeConfig getUdSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, UdPullConfig::UdSyncScopeConfig) };
      inline UdPullConfig& setUdSyncScopeConfig(const UdPullConfig::UdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
      inline UdPullConfig& setUdSyncScopeConfig(UdPullConfig::UdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


    protected:
      // Whether group synchronization is supported. The default value is disabled. Possible values:
      // 
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> groupSyncStatus_ {};
      // Incremental callback status, indicating whether to process incremental callback data from the IdP. Possible values:
      // 
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> incrementalCallbackStatus_ {};
      // Scheduled configuration verification.
      shared_ptr<UdPullConfig::PeriodicSyncConfig> periodicSyncConfig_ {};
      // Periodic check status, indicating whether to periodically check the data differences between EIAM and the identity provider. Possible values:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> periodicSyncStatus_ {};
      // Synchronization scope configuration information.
      shared_ptr<UdPullConfig::UdSyncScopeConfig> udSyncScopeConfig_ {};
    };

    class OidcConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnParam, authnParam_);
        DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_TO_JSON(GrantType, grantType_);
        DARABONBA_PTR_TO_JSON(PkceChallengeMethod, pkceChallengeMethod_);
        DARABONBA_PTR_TO_JSON(PkceRequired, pkceRequired_);
      };
      friend void from_json(const Darabonba::Json& j, OidcConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnParam, authnParam_);
        DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
        DARABONBA_PTR_FROM_JSON(GrantType, grantType_);
        DARABONBA_PTR_FROM_JSON(PkceChallengeMethod, pkceChallengeMethod_);
        DARABONBA_PTR_FROM_JSON(PkceRequired, pkceRequired_);
      };
      OidcConfig() = default ;
      OidcConfig(const OidcConfig &) = default ;
      OidcConfig(OidcConfig &&) = default ;
      OidcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OidcConfig() = default ;
      OidcConfig& operator=(const OidcConfig &) = default ;
      OidcConfig& operator=(OidcConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndpointConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_TO_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_TO_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationEndpoint, authorizationEndpoint_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_FROM_JSON(TokenEndpoint, tokenEndpoint_);
          DARABONBA_PTR_FROM_JSON(UserinfoEndpoint, userinfoEndpoint_);
        };
        EndpointConfig() = default ;
        EndpointConfig(const EndpointConfig &) = default ;
        EndpointConfig(EndpointConfig &&) = default ;
        EndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointConfig() = default ;
        EndpointConfig& operator=(const EndpointConfig &) = default ;
        EndpointConfig& operator=(EndpointConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authorizationEndpoint_ == nullptr
        && this->issuer_ == nullptr && this->jwksUri_ == nullptr && this->tokenEndpoint_ == nullptr && this->userinfoEndpoint_ == nullptr; };
        // authorizationEndpoint Field Functions 
        bool hasAuthorizationEndpoint() const { return this->authorizationEndpoint_ != nullptr;};
        void deleteAuthorizationEndpoint() { this->authorizationEndpoint_ = nullptr;};
        inline string getAuthorizationEndpoint() const { DARABONBA_PTR_GET_DEFAULT(authorizationEndpoint_, "") };
        inline EndpointConfig& setAuthorizationEndpoint(string authorizationEndpoint) { DARABONBA_PTR_SET_VALUE(authorizationEndpoint_, authorizationEndpoint) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline EndpointConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksUri Field Functions 
        bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
        void deleteJwksUri() { this->jwksUri_ = nullptr;};
        inline string getJwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
        inline EndpointConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


        // tokenEndpoint Field Functions 
        bool hasTokenEndpoint() const { return this->tokenEndpoint_ != nullptr;};
        void deleteTokenEndpoint() { this->tokenEndpoint_ = nullptr;};
        inline string getTokenEndpoint() const { DARABONBA_PTR_GET_DEFAULT(tokenEndpoint_, "") };
        inline EndpointConfig& setTokenEndpoint(string tokenEndpoint) { DARABONBA_PTR_SET_VALUE(tokenEndpoint_, tokenEndpoint) };


        // userinfoEndpoint Field Functions 
        bool hasUserinfoEndpoint() const { return this->userinfoEndpoint_ != nullptr;};
        void deleteUserinfoEndpoint() { this->userinfoEndpoint_ = nullptr;};
        inline string getUserinfoEndpoint() const { DARABONBA_PTR_GET_DEFAULT(userinfoEndpoint_, "") };
        inline EndpointConfig& setUserinfoEndpoint(string userinfoEndpoint) { DARABONBA_PTR_SET_VALUE(userinfoEndpoint_, userinfoEndpoint) };


      protected:
        // OIDC authorization endpoint.
        shared_ptr<string> authorizationEndpoint_ {};
        // OIDC issuer information.
        shared_ptr<string> issuer_ {};
        // OIDC jwks uri.
        shared_ptr<string> jwksUri_ {};
        // OIDC token endpoint.
        shared_ptr<string> tokenEndpoint_ {};
        // OIDC user info endpoint.
        shared_ptr<string> userinfoEndpoint_ {};
      };

      class AuthnParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthnParam& obj) { 
          DARABONBA_PTR_TO_JSON(AuthnMethod, authnMethod_);
          DARABONBA_PTR_TO_JSON(ClientId, clientId_);
          DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        };
        friend void from_json(const Darabonba::Json& j, AuthnParam& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthnMethod, authnMethod_);
          DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
          DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
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
        virtual bool empty() const override { return this->authnMethod_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr; };
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


      protected:
        // OIDC authentication method. Value range:
        // 
        // - client_secret_basic
        // 
        // - client_secret_post
        shared_ptr<string> authnMethod_ {};
        // The ID of the client.
        shared_ptr<string> clientId_ {};
        // The  secret of the client.
        shared_ptr<string> clientSecret_ {};
      };

      virtual bool empty() const override { return this->authnParam_ == nullptr
        && this->endpointConfig_ == nullptr && this->grantScopes_ == nullptr && this->grantType_ == nullptr && this->pkceChallengeMethod_ == nullptr && this->pkceRequired_ == nullptr; };
      // authnParam Field Functions 
      bool hasAuthnParam() const { return this->authnParam_ != nullptr;};
      void deleteAuthnParam() { this->authnParam_ = nullptr;};
      inline const OidcConfig::AuthnParam & getAuthnParam() const { DARABONBA_PTR_GET_CONST(authnParam_, OidcConfig::AuthnParam) };
      inline OidcConfig::AuthnParam getAuthnParam() { DARABONBA_PTR_GET(authnParam_, OidcConfig::AuthnParam) };
      inline OidcConfig& setAuthnParam(const OidcConfig::AuthnParam & authnParam) { DARABONBA_PTR_SET_VALUE(authnParam_, authnParam) };
      inline OidcConfig& setAuthnParam(OidcConfig::AuthnParam && authnParam) { DARABONBA_PTR_SET_RVALUE(authnParam_, authnParam) };


      // endpointConfig Field Functions 
      bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
      void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
      inline const OidcConfig::EndpointConfig & getEndpointConfig() const { DARABONBA_PTR_GET_CONST(endpointConfig_, OidcConfig::EndpointConfig) };
      inline OidcConfig::EndpointConfig getEndpointConfig() { DARABONBA_PTR_GET(endpointConfig_, OidcConfig::EndpointConfig) };
      inline OidcConfig& setEndpointConfig(const OidcConfig::EndpointConfig & endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };
      inline OidcConfig& setEndpointConfig(OidcConfig::EndpointConfig && endpointConfig) { DARABONBA_PTR_SET_RVALUE(endpointConfig_, endpointConfig) };


      // grantScopes Field Functions 
      bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
      void deleteGrantScopes() { this->grantScopes_ = nullptr;};
      inline const vector<string> & getGrantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
      inline vector<string> getGrantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
      inline OidcConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
      inline OidcConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


      // grantType Field Functions 
      bool hasGrantType() const { return this->grantType_ != nullptr;};
      void deleteGrantType() { this->grantType_ = nullptr;};
      inline string getGrantType() const { DARABONBA_PTR_GET_DEFAULT(grantType_, "") };
      inline OidcConfig& setGrantType(string grantType) { DARABONBA_PTR_SET_VALUE(grantType_, grantType) };


      // pkceChallengeMethod Field Functions 
      bool hasPkceChallengeMethod() const { return this->pkceChallengeMethod_ != nullptr;};
      void deletePkceChallengeMethod() { this->pkceChallengeMethod_ = nullptr;};
      inline string getPkceChallengeMethod() const { DARABONBA_PTR_GET_DEFAULT(pkceChallengeMethod_, "") };
      inline OidcConfig& setPkceChallengeMethod(string pkceChallengeMethod) { DARABONBA_PTR_SET_VALUE(pkceChallengeMethod_, pkceChallengeMethod) };


      // pkceRequired Field Functions 
      bool hasPkceRequired() const { return this->pkceRequired_ != nullptr;};
      void deletePkceRequired() { this->pkceRequired_ = nullptr;};
      inline bool getPkceRequired() const { DARABONBA_PTR_GET_DEFAULT(pkceRequired_, false) };
      inline OidcConfig& setPkceRequired(bool pkceRequired) { DARABONBA_PTR_SET_VALUE(pkceRequired_, pkceRequired) };


    protected:
      // OIDC client authentication configuration.
      shared_ptr<OidcConfig::AuthnParam> authnParam_ {};
      // OIDC endpoint configuration.
      shared_ptr<OidcConfig::EndpointConfig> endpointConfig_ {};
      // OIDC grant scopes collection.
      shared_ptr<vector<string>> grantScopes_ {};
      // OIDC grant type.
      shared_ptr<string> grantType_ {};
      // PKCE algorithm. Possible values:
      // 
      // - SHA256: S256
      // 
      // - Plain text: plain
      shared_ptr<string> pkceChallengeMethod_ {};
      // Whether to use PKCE in the AuthorizationCode grant mode.
      shared_ptr<bool> pkceRequired_ {};
    };

    class LdapConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LdapConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AdministratorPassword, administratorPassword_);
        DARABONBA_PTR_TO_JSON(AdministratorUsername, administratorUsername_);
        DARABONBA_PTR_TO_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
        DARABONBA_PTR_TO_JSON(CertificateFingerprints, certificateFingerprints_);
        DARABONBA_PTR_TO_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
        DARABONBA_PTR_TO_JSON(GroupObjectClass, groupObjectClass_);
        DARABONBA_PTR_TO_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
        DARABONBA_PTR_TO_JSON(LdapProtocol, ldapProtocol_);
        DARABONBA_PTR_TO_JSON(LdapServerHost, ldapServerHost_);
        DARABONBA_PTR_TO_JSON(LdapServerPort, ldapServerPort_);
        DARABONBA_PTR_TO_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_TO_JSON(OrganizationalUnitRdn, organizationalUnitRdn_);
        DARABONBA_PTR_TO_JSON(PasswordSyncStatus, passwordSyncStatus_);
        DARABONBA_PTR_TO_JSON(StartTlsStatus, startTlsStatus_);
        DARABONBA_PTR_TO_JSON(UserLoginIdentifier, userLoginIdentifier_);
        DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_TO_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
        DARABONBA_PTR_TO_JSON(UserRdn, userRdn_);
      };
      friend void from_json(const Darabonba::Json& j, LdapConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AdministratorPassword, administratorPassword_);
        DARABONBA_PTR_FROM_JSON(AdministratorUsername, administratorUsername_);
        DARABONBA_PTR_FROM_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
        DARABONBA_PTR_FROM_JSON(CertificateFingerprints, certificateFingerprints_);
        DARABONBA_PTR_FROM_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
        DARABONBA_PTR_FROM_JSON(GroupObjectClass, groupObjectClass_);
        DARABONBA_PTR_FROM_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
        DARABONBA_PTR_FROM_JSON(LdapProtocol, ldapProtocol_);
        DARABONBA_PTR_FROM_JSON(LdapServerHost, ldapServerHost_);
        DARABONBA_PTR_FROM_JSON(LdapServerPort, ldapServerPort_);
        DARABONBA_PTR_FROM_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitRdn, organizationalUnitRdn_);
        DARABONBA_PTR_FROM_JSON(PasswordSyncStatus, passwordSyncStatus_);
        DARABONBA_PTR_FROM_JSON(StartTlsStatus, startTlsStatus_);
        DARABONBA_PTR_FROM_JSON(UserLoginIdentifier, userLoginIdentifier_);
        DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
        DARABONBA_PTR_FROM_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
        DARABONBA_PTR_FROM_JSON(UserRdn, userRdn_);
      };
      LdapConfig() = default ;
      LdapConfig(const LdapConfig &) = default ;
      LdapConfig(LdapConfig &&) = default ;
      LdapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LdapConfig() = default ;
      LdapConfig& operator=(const LdapConfig &) = default ;
      LdapConfig& operator=(LdapConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->administratorPassword_ == nullptr
        && this->administratorUsername_ == nullptr && this->certificateFingerprintStatus_ == nullptr && this->certificateFingerprints_ == nullptr && this->groupMemberAttributeName_ == nullptr && this->groupObjectClass_ == nullptr
        && this->groupObjectClassCustomFilter_ == nullptr && this->ldapProtocol_ == nullptr && this->ldapServerHost_ == nullptr && this->ldapServerPort_ == nullptr && this->organizationUnitObjectClass_ == nullptr
        && this->organizationalUnitRdn_ == nullptr && this->passwordSyncStatus_ == nullptr && this->startTlsStatus_ == nullptr && this->userLoginIdentifier_ == nullptr && this->userObjectClass_ == nullptr
        && this->userObjectClassCustomFilter_ == nullptr && this->userRdn_ == nullptr; };
      // administratorPassword Field Functions 
      bool hasAdministratorPassword() const { return this->administratorPassword_ != nullptr;};
      void deleteAdministratorPassword() { this->administratorPassword_ = nullptr;};
      inline string getAdministratorPassword() const { DARABONBA_PTR_GET_DEFAULT(administratorPassword_, "") };
      inline LdapConfig& setAdministratorPassword(string administratorPassword) { DARABONBA_PTR_SET_VALUE(administratorPassword_, administratorPassword) };


      // administratorUsername Field Functions 
      bool hasAdministratorUsername() const { return this->administratorUsername_ != nullptr;};
      void deleteAdministratorUsername() { this->administratorUsername_ = nullptr;};
      inline string getAdministratorUsername() const { DARABONBA_PTR_GET_DEFAULT(administratorUsername_, "") };
      inline LdapConfig& setAdministratorUsername(string administratorUsername) { DARABONBA_PTR_SET_VALUE(administratorUsername_, administratorUsername) };


      // certificateFingerprintStatus Field Functions 
      bool hasCertificateFingerprintStatus() const { return this->certificateFingerprintStatus_ != nullptr;};
      void deleteCertificateFingerprintStatus() { this->certificateFingerprintStatus_ = nullptr;};
      inline string getCertificateFingerprintStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateFingerprintStatus_, "") };
      inline LdapConfig& setCertificateFingerprintStatus(string certificateFingerprintStatus) { DARABONBA_PTR_SET_VALUE(certificateFingerprintStatus_, certificateFingerprintStatus) };


      // certificateFingerprints Field Functions 
      bool hasCertificateFingerprints() const { return this->certificateFingerprints_ != nullptr;};
      void deleteCertificateFingerprints() { this->certificateFingerprints_ = nullptr;};
      inline const vector<string> & getCertificateFingerprints() const { DARABONBA_PTR_GET_CONST(certificateFingerprints_, vector<string>) };
      inline vector<string> getCertificateFingerprints() { DARABONBA_PTR_GET(certificateFingerprints_, vector<string>) };
      inline LdapConfig& setCertificateFingerprints(const vector<string> & certificateFingerprints) { DARABONBA_PTR_SET_VALUE(certificateFingerprints_, certificateFingerprints) };
      inline LdapConfig& setCertificateFingerprints(vector<string> && certificateFingerprints) { DARABONBA_PTR_SET_RVALUE(certificateFingerprints_, certificateFingerprints) };


      // groupMemberAttributeName Field Functions 
      bool hasGroupMemberAttributeName() const { return this->groupMemberAttributeName_ != nullptr;};
      void deleteGroupMemberAttributeName() { this->groupMemberAttributeName_ = nullptr;};
      inline string getGroupMemberAttributeName() const { DARABONBA_PTR_GET_DEFAULT(groupMemberAttributeName_, "") };
      inline LdapConfig& setGroupMemberAttributeName(string groupMemberAttributeName) { DARABONBA_PTR_SET_VALUE(groupMemberAttributeName_, groupMemberAttributeName) };


      // groupObjectClass Field Functions 
      bool hasGroupObjectClass() const { return this->groupObjectClass_ != nullptr;};
      void deleteGroupObjectClass() { this->groupObjectClass_ = nullptr;};
      inline string getGroupObjectClass() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClass_, "") };
      inline LdapConfig& setGroupObjectClass(string groupObjectClass) { DARABONBA_PTR_SET_VALUE(groupObjectClass_, groupObjectClass) };


      // groupObjectClassCustomFilter Field Functions 
      bool hasGroupObjectClassCustomFilter() const { return this->groupObjectClassCustomFilter_ != nullptr;};
      void deleteGroupObjectClassCustomFilter() { this->groupObjectClassCustomFilter_ = nullptr;};
      inline string getGroupObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClassCustomFilter_, "") };
      inline LdapConfig& setGroupObjectClassCustomFilter(string groupObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(groupObjectClassCustomFilter_, groupObjectClassCustomFilter) };


      // ldapProtocol Field Functions 
      bool hasLdapProtocol() const { return this->ldapProtocol_ != nullptr;};
      void deleteLdapProtocol() { this->ldapProtocol_ = nullptr;};
      inline string getLdapProtocol() const { DARABONBA_PTR_GET_DEFAULT(ldapProtocol_, "") };
      inline LdapConfig& setLdapProtocol(string ldapProtocol) { DARABONBA_PTR_SET_VALUE(ldapProtocol_, ldapProtocol) };


      // ldapServerHost Field Functions 
      bool hasLdapServerHost() const { return this->ldapServerHost_ != nullptr;};
      void deleteLdapServerHost() { this->ldapServerHost_ = nullptr;};
      inline string getLdapServerHost() const { DARABONBA_PTR_GET_DEFAULT(ldapServerHost_, "") };
      inline LdapConfig& setLdapServerHost(string ldapServerHost) { DARABONBA_PTR_SET_VALUE(ldapServerHost_, ldapServerHost) };


      // ldapServerPort Field Functions 
      bool hasLdapServerPort() const { return this->ldapServerPort_ != nullptr;};
      void deleteLdapServerPort() { this->ldapServerPort_ = nullptr;};
      inline int32_t getLdapServerPort() const { DARABONBA_PTR_GET_DEFAULT(ldapServerPort_, 0) };
      inline LdapConfig& setLdapServerPort(int32_t ldapServerPort) { DARABONBA_PTR_SET_VALUE(ldapServerPort_, ldapServerPort) };


      // organizationUnitObjectClass Field Functions 
      bool hasOrganizationUnitObjectClass() const { return this->organizationUnitObjectClass_ != nullptr;};
      void deleteOrganizationUnitObjectClass() { this->organizationUnitObjectClass_ = nullptr;};
      inline string getOrganizationUnitObjectClass() const { DARABONBA_PTR_GET_DEFAULT(organizationUnitObjectClass_, "") };
      inline LdapConfig& setOrganizationUnitObjectClass(string organizationUnitObjectClass) { DARABONBA_PTR_SET_VALUE(organizationUnitObjectClass_, organizationUnitObjectClass) };


      // organizationalUnitRdn Field Functions 
      bool hasOrganizationalUnitRdn() const { return this->organizationalUnitRdn_ != nullptr;};
      void deleteOrganizationalUnitRdn() { this->organizationalUnitRdn_ = nullptr;};
      inline string getOrganizationalUnitRdn() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitRdn_, "") };
      inline LdapConfig& setOrganizationalUnitRdn(string organizationalUnitRdn) { DARABONBA_PTR_SET_VALUE(organizationalUnitRdn_, organizationalUnitRdn) };


      // passwordSyncStatus Field Functions 
      bool hasPasswordSyncStatus() const { return this->passwordSyncStatus_ != nullptr;};
      void deletePasswordSyncStatus() { this->passwordSyncStatus_ = nullptr;};
      inline string getPasswordSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordSyncStatus_, "") };
      inline LdapConfig& setPasswordSyncStatus(string passwordSyncStatus) { DARABONBA_PTR_SET_VALUE(passwordSyncStatus_, passwordSyncStatus) };


      // startTlsStatus Field Functions 
      bool hasStartTlsStatus() const { return this->startTlsStatus_ != nullptr;};
      void deleteStartTlsStatus() { this->startTlsStatus_ = nullptr;};
      inline string getStartTlsStatus() const { DARABONBA_PTR_GET_DEFAULT(startTlsStatus_, "") };
      inline LdapConfig& setStartTlsStatus(string startTlsStatus) { DARABONBA_PTR_SET_VALUE(startTlsStatus_, startTlsStatus) };


      // userLoginIdentifier Field Functions 
      bool hasUserLoginIdentifier() const { return this->userLoginIdentifier_ != nullptr;};
      void deleteUserLoginIdentifier() { this->userLoginIdentifier_ = nullptr;};
      inline string getUserLoginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(userLoginIdentifier_, "") };
      inline LdapConfig& setUserLoginIdentifier(string userLoginIdentifier) { DARABONBA_PTR_SET_VALUE(userLoginIdentifier_, userLoginIdentifier) };


      // userObjectClass Field Functions 
      bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
      void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
      inline string getUserObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
      inline LdapConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


      // userObjectClassCustomFilter Field Functions 
      bool hasUserObjectClassCustomFilter() const { return this->userObjectClassCustomFilter_ != nullptr;};
      void deleteUserObjectClassCustomFilter() { this->userObjectClassCustomFilter_ = nullptr;};
      inline string getUserObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(userObjectClassCustomFilter_, "") };
      inline LdapConfig& setUserObjectClassCustomFilter(string userObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(userObjectClassCustomFilter_, userObjectClassCustomFilter) };


      // userRdn Field Functions 
      bool hasUserRdn() const { return this->userRdn_ != nullptr;};
      void deleteUserRdn() { this->userRdn_ = nullptr;};
      inline string getUserRdn() const { DARABONBA_PTR_GET_DEFAULT(userRdn_, "") };
      inline LdapConfig& setUserRdn(string userRdn) { DARABONBA_PTR_SET_VALUE(userRdn_, userRdn) };


    protected:
      // Administrator password.
      shared_ptr<string> administratorPassword_ {};
      // Administrator username.
      shared_ptr<string> administratorUsername_ {};
      // Whether to verify the certificate fingerprint. Value range:
      // 
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> certificateFingerprintStatus_ {};
      // List of certificate fingerprints.
      shared_ptr<vector<string>> certificateFingerprints_ {};
      // Group member attribute name.
      shared_ptr<string> groupMemberAttributeName_ {};
      // Group ObjectClass.
      shared_ptr<string> groupObjectClass_ {};
      // Custom filter for Group ObjectClass.
      shared_ptr<string> groupObjectClassCustomFilter_ {};
      // Communication protocol.
      shared_ptr<string> ldapProtocol_ {};
      // AD/LDAP server address.
      shared_ptr<string> ldapServerHost_ {};
      // AD/LDAP port number.
      shared_ptr<int32_t> ldapServerPort_ {};
      // Organization Unit ObjectClass.
      shared_ptr<string> organizationUnitObjectClass_ {};
      shared_ptr<string> organizationalUnitRdn_ {};
      shared_ptr<string> passwordSyncStatus_ {};
      // Whether startTLS is enabled. Value range:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> startTlsStatus_ {};
      // User login identifier.
      shared_ptr<string> userLoginIdentifier_ {};
      // User ObjectClass.
      shared_ptr<string> userObjectClass_ {};
      // Custom filter for User ObjectClass.
      shared_ptr<string> userObjectClassCustomFilter_ {};
      shared_ptr<string> userRdn_ {};
    };

    class LarkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LarkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(EnterpriseNumber, enterpriseNumber_);
        DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
      };
      friend void from_json(const Darabonba::Json& j, LarkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(EnterpriseNumber, enterpriseNumber_);
        DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
      };
      LarkConfig() = default ;
      LarkConfig(const LarkConfig &) = default ;
      LarkConfig(LarkConfig &&) = default ;
      LarkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LarkConfig() = default ;
      LarkConfig& operator=(const LarkConfig &) = default ;
      LarkConfig& operator=(LarkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appSecret_ == nullptr && this->encryptKey_ == nullptr && this->enterpriseNumber_ == nullptr && this->verificationToken_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline LarkConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
      inline LarkConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline LarkConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // enterpriseNumber Field Functions 
      bool hasEnterpriseNumber() const { return this->enterpriseNumber_ != nullptr;};
      void deleteEnterpriseNumber() { this->enterpriseNumber_ = nullptr;};
      inline string getEnterpriseNumber() const { DARABONBA_PTR_GET_DEFAULT(enterpriseNumber_, "") };
      inline LarkConfig& setEnterpriseNumber(string enterpriseNumber) { DARABONBA_PTR_SET_VALUE(enterpriseNumber_, enterpriseNumber) };


      // verificationToken Field Functions 
      bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
      void deleteVerificationToken() { this->verificationToken_ = nullptr;};
      inline string getVerificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
      inline LarkConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


    protected:
      // Lark (Feishu) app appId.
      shared_ptr<string> appId_ {};
      // Lark (Feishu) app secret.
      shared_ptr<string> appSecret_ {};
      // Lark (Feishu) encrypt key.
      shared_ptr<string> encryptKey_ {};
      // Lark (Feishu) enterprise number.
      shared_ptr<string> enterpriseNumber_ {};
      // Lark (Feishu)  verification token.
      shared_ptr<string> verificationToken_ {};
    };

    class DingtalkAppConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DingtalkAppConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(DingtalkVersion, dingtalkVersion_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
      };
      friend void from_json(const Darabonba::Json& j, DingtalkAppConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(DingtalkVersion, dingtalkVersion_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(VerificationToken, verificationToken_);
      };
      DingtalkAppConfig() = default ;
      DingtalkAppConfig(const DingtalkAppConfig &) = default ;
      DingtalkAppConfig(DingtalkAppConfig &&) = default ;
      DingtalkAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DingtalkAppConfig() = default ;
      DingtalkAppConfig& operator=(const DingtalkAppConfig &) = default ;
      DingtalkAppConfig& operator=(DingtalkAppConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appSecret_ == nullptr && this->corpId_ == nullptr && this->dingtalkVersion_ == nullptr && this->encryptKey_ == nullptr && this->verificationToken_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline DingtalkAppConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
      inline DingtalkAppConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline DingtalkAppConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // dingtalkVersion Field Functions 
      bool hasDingtalkVersion() const { return this->dingtalkVersion_ != nullptr;};
      void deleteDingtalkVersion() { this->dingtalkVersion_ = nullptr;};
      inline string getDingtalkVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkVersion_, "") };
      inline DingtalkAppConfig& setDingtalkVersion(string dingtalkVersion) { DARABONBA_PTR_SET_VALUE(dingtalkVersion_, dingtalkVersion) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline DingtalkAppConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // verificationToken Field Functions 
      bool hasVerificationToken() const { return this->verificationToken_ != nullptr;};
      void deleteVerificationToken() { this->verificationToken_ = nullptr;};
      inline string getVerificationToken() const { DARABONBA_PTR_GET_DEFAULT(verificationToken_, "") };
      inline DingtalkAppConfig& setVerificationToken(string verificationToken) { DARABONBA_PTR_SET_VALUE(verificationToken_, verificationToken) };


    protected:
      // AppKey of the DingTalk application.
      shared_ptr<string> appKey_ {};
      // AppSecret of the DingTalk application.
      shared_ptr<string> appSecret_ {};
      // CorpId of the DingTalk application.
      shared_ptr<string> corpId_ {};
      // DingTalk edition. Valid values:
      // 
      // public_dingtalk – Standard DingTalk.
      // 
      // private_dingtalk – Dedicated DingTalk.
      shared_ptr<string> dingtalkVersion_ {};
      // DingTalk encrypt key.
      shared_ptr<string> encryptKey_ {};
      // DingTalk verification token.
      shared_ptr<string> verificationToken_ {};
    };

    class BindingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
        DARABONBA_PTR_TO_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
        DARABONBA_PTR_TO_JSON(MappingBindingStatus, mappingBindingStatus_);
      };
      friend void from_json(const Darabonba::Json& j, BindingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoMatchUserProfileExpressions, autoMatchUserProfileExpressions_);
        DARABONBA_PTR_FROM_JSON(AutoMatchUserStatus, autoMatchUserStatus_);
        DARABONBA_PTR_FROM_JSON(MappingBindingStatus, mappingBindingStatus_);
      };
      BindingConfig() = default ;
      BindingConfig(const BindingConfig &) = default ;
      BindingConfig(BindingConfig &&) = default ;
      BindingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindingConfig() = default ;
      BindingConfig& operator=(const BindingConfig &) = default ;
      BindingConfig& operator=(BindingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoMatchUserProfileExpressions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoMatchUserProfileExpressions& obj) { 
          DARABONBA_PTR_TO_JSON(ExpressionMappingType, expressionMappingType_);
          DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
          DARABONBA_PTR_TO_JSON(TargetField, targetField_);
          DARABONBA_PTR_TO_JSON(TargetFieldDescription, targetFieldDescription_);
        };
        friend void from_json(const Darabonba::Json& j, AutoMatchUserProfileExpressions& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpressionMappingType, expressionMappingType_);
          DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
          DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
          DARABONBA_PTR_FROM_JSON(TargetFieldDescription, targetFieldDescription_);
        };
        AutoMatchUserProfileExpressions() = default ;
        AutoMatchUserProfileExpressions(const AutoMatchUserProfileExpressions &) = default ;
        AutoMatchUserProfileExpressions(AutoMatchUserProfileExpressions &&) = default ;
        AutoMatchUserProfileExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoMatchUserProfileExpressions() = default ;
        AutoMatchUserProfileExpressions& operator=(const AutoMatchUserProfileExpressions &) = default ;
        AutoMatchUserProfileExpressions& operator=(AutoMatchUserProfileExpressions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expressionMappingType_ == nullptr
        && this->sourceValueExpression_ == nullptr && this->targetField_ == nullptr && this->targetFieldDescription_ == nullptr; };
        // expressionMappingType Field Functions 
        bool hasExpressionMappingType() const { return this->expressionMappingType_ != nullptr;};
        void deleteExpressionMappingType() { this->expressionMappingType_ = nullptr;};
        inline string getExpressionMappingType() const { DARABONBA_PTR_GET_DEFAULT(expressionMappingType_, "") };
        inline AutoMatchUserProfileExpressions& setExpressionMappingType(string expressionMappingType) { DARABONBA_PTR_SET_VALUE(expressionMappingType_, expressionMappingType) };


        // sourceValueExpression Field Functions 
        bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
        void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
        inline string getSourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
        inline AutoMatchUserProfileExpressions& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


        // targetField Field Functions 
        bool hasTargetField() const { return this->targetField_ != nullptr;};
        void deleteTargetField() { this->targetField_ = nullptr;};
        inline string getTargetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
        inline AutoMatchUserProfileExpressions& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


        // targetFieldDescription Field Functions 
        bool hasTargetFieldDescription() const { return this->targetFieldDescription_ != nullptr;};
        void deleteTargetFieldDescription() { this->targetFieldDescription_ = nullptr;};
        inline string getTargetFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(targetFieldDescription_, "") };
        inline AutoMatchUserProfileExpressions& setTargetFieldDescription(string targetFieldDescription) { DARABONBA_PTR_SET_VALUE(targetFieldDescription_, targetFieldDescription) };


      protected:
        // Type of the expression. Value range:
        // 
        // - Field: filed
        // 
        // - Expression: expression
        shared_ptr<string> expressionMappingType_ {};
        // Expression for the mapped attribute value.
        shared_ptr<string> sourceValueExpression_ {};
        // Name of the target attribute.
        shared_ptr<string> targetField_ {};
        // Description of the target attribute.
        shared_ptr<string> targetFieldDescription_ {};
      };

      virtual bool empty() const override { return this->autoMatchUserProfileExpressions_ == nullptr
        && this->autoMatchUserStatus_ == nullptr && this->mappingBindingStatus_ == nullptr; };
      // autoMatchUserProfileExpressions Field Functions 
      bool hasAutoMatchUserProfileExpressions() const { return this->autoMatchUserProfileExpressions_ != nullptr;};
      void deleteAutoMatchUserProfileExpressions() { this->autoMatchUserProfileExpressions_ = nullptr;};
      inline const vector<BindingConfig::AutoMatchUserProfileExpressions> & getAutoMatchUserProfileExpressions() const { DARABONBA_PTR_GET_CONST(autoMatchUserProfileExpressions_, vector<BindingConfig::AutoMatchUserProfileExpressions>) };
      inline vector<BindingConfig::AutoMatchUserProfileExpressions> getAutoMatchUserProfileExpressions() { DARABONBA_PTR_GET(autoMatchUserProfileExpressions_, vector<BindingConfig::AutoMatchUserProfileExpressions>) };
      inline BindingConfig& setAutoMatchUserProfileExpressions(const vector<BindingConfig::AutoMatchUserProfileExpressions> & autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_VALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };
      inline BindingConfig& setAutoMatchUserProfileExpressions(vector<BindingConfig::AutoMatchUserProfileExpressions> && autoMatchUserProfileExpressions) { DARABONBA_PTR_SET_RVALUE(autoMatchUserProfileExpressions_, autoMatchUserProfileExpressions) };


      // autoMatchUserStatus Field Functions 
      bool hasAutoMatchUserStatus() const { return this->autoMatchUserStatus_ != nullptr;};
      void deleteAutoMatchUserStatus() { this->autoMatchUserStatus_ = nullptr;};
      inline string getAutoMatchUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoMatchUserStatus_, "") };
      inline BindingConfig& setAutoMatchUserStatus(string autoMatchUserStatus) { DARABONBA_PTR_SET_VALUE(autoMatchUserStatus_, autoMatchUserStatus) };


      // mappingBindingStatus Field Functions 
      bool hasMappingBindingStatus() const { return this->mappingBindingStatus_ != nullptr;};
      void deleteMappingBindingStatus() { this->mappingBindingStatus_ = nullptr;};
      inline string getMappingBindingStatus() const { DARABONBA_PTR_GET_DEFAULT(mappingBindingStatus_, "") };
      inline BindingConfig& setMappingBindingStatus(string mappingBindingStatus) { DARABONBA_PTR_SET_VALUE(mappingBindingStatus_, mappingBindingStatus) };


    protected:
      // List of rules for automatically matching accounts.
      shared_ptr<vector<BindingConfig::AutoMatchUserProfileExpressions>> autoMatchUserProfileExpressions_ {};
      // Whether automatic account matching is enabled. Value range:
      // 
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> autoMatchUserStatus_ {};
      // Whether the user manual account binding function is enabled. Value range:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> mappingBindingStatus_ {};
    };

    class AutoUpdateUserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoUpdateUserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AutoUpdateUserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoUpdateUserStatus, autoUpdateUserStatus_);
      };
      AutoUpdateUserConfig() = default ;
      AutoUpdateUserConfig(const AutoUpdateUserConfig &) = default ;
      AutoUpdateUserConfig(AutoUpdateUserConfig &&) = default ;
      AutoUpdateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoUpdateUserConfig() = default ;
      AutoUpdateUserConfig& operator=(const AutoUpdateUserConfig &) = default ;
      AutoUpdateUserConfig& operator=(AutoUpdateUserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoUpdateUserStatus_ == nullptr; };
      // autoUpdateUserStatus Field Functions 
      bool hasAutoUpdateUserStatus() const { return this->autoUpdateUserStatus_ != nullptr;};
      void deleteAutoUpdateUserStatus() { this->autoUpdateUserStatus_ = nullptr;};
      inline string getAutoUpdateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdateUserStatus_, "") };
      inline AutoUpdateUserConfig& setAutoUpdateUserStatus(string autoUpdateUserStatus) { DARABONBA_PTR_SET_VALUE(autoUpdateUserStatus_, autoUpdateUserStatus) };


    protected:
      // Whether auto-updating of accounts is enabled. Possible values:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> autoUpdateUserStatus_ {};
    };

    class AutoCreateUserConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoCreateUserConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
        DARABONBA_PTR_TO_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
      };
      friend void from_json(const Darabonba::Json& j, AutoCreateUserConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoCreateUserStatus, autoCreateUserStatus_);
        DARABONBA_PTR_FROM_JSON(TargetOrganizationalUnitIds, targetOrganizationalUnitIds_);
      };
      AutoCreateUserConfig() = default ;
      AutoCreateUserConfig(const AutoCreateUserConfig &) = default ;
      AutoCreateUserConfig(AutoCreateUserConfig &&) = default ;
      AutoCreateUserConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoCreateUserConfig() = default ;
      AutoCreateUserConfig& operator=(const AutoCreateUserConfig &) = default ;
      AutoCreateUserConfig& operator=(AutoCreateUserConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoCreateUserStatus_ == nullptr
        && this->targetOrganizationalUnitIds_ == nullptr; };
      // autoCreateUserStatus Field Functions 
      bool hasAutoCreateUserStatus() const { return this->autoCreateUserStatus_ != nullptr;};
      void deleteAutoCreateUserStatus() { this->autoCreateUserStatus_ = nullptr;};
      inline string getAutoCreateUserStatus() const { DARABONBA_PTR_GET_DEFAULT(autoCreateUserStatus_, "") };
      inline AutoCreateUserConfig& setAutoCreateUserStatus(string autoCreateUserStatus) { DARABONBA_PTR_SET_VALUE(autoCreateUserStatus_, autoCreateUserStatus) };


      // targetOrganizationalUnitIds Field Functions 
      bool hasTargetOrganizationalUnitIds() const { return this->targetOrganizationalUnitIds_ != nullptr;};
      void deleteTargetOrganizationalUnitIds() { this->targetOrganizationalUnitIds_ = nullptr;};
      inline const vector<string> & getTargetOrganizationalUnitIds() const { DARABONBA_PTR_GET_CONST(targetOrganizationalUnitIds_, vector<string>) };
      inline vector<string> getTargetOrganizationalUnitIds() { DARABONBA_PTR_GET(targetOrganizationalUnitIds_, vector<string>) };
      inline AutoCreateUserConfig& setTargetOrganizationalUnitIds(const vector<string> & targetOrganizationalUnitIds) { DARABONBA_PTR_SET_VALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };
      inline AutoCreateUserConfig& setTargetOrganizationalUnitIds(vector<string> && targetOrganizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(targetOrganizationalUnitIds_, targetOrganizationalUnitIds) };


    protected:
      // Whether auto-creation of accounts is enabled. Possible values:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> autoCreateUserStatus_ {};
      // Target organizational unit IDs collection.
      shared_ptr<vector<string>> targetOrganizationalUnitIds_ {};
    };

    class AuthnConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthnConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnStatus, authnStatus_);
        DARABONBA_PTR_TO_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AuthnConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnStatus, authnStatus_);
        DARABONBA_PTR_FROM_JSON(AutoUpdatePasswordStatus, autoUpdatePasswordStatus_);
      };
      AuthnConfig() = default ;
      AuthnConfig(const AuthnConfig &) = default ;
      AuthnConfig(AuthnConfig &&) = default ;
      AuthnConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthnConfig() = default ;
      AuthnConfig& operator=(const AuthnConfig &) = default ;
      AuthnConfig& operator=(AuthnConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authnStatus_ == nullptr
        && this->autoUpdatePasswordStatus_ == nullptr; };
      // authnStatus Field Functions 
      bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
      void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
      inline string getAuthnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
      inline AuthnConfig& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


      // autoUpdatePasswordStatus Field Functions 
      bool hasAutoUpdatePasswordStatus() const { return this->autoUpdatePasswordStatus_ != nullptr;};
      void deleteAutoUpdatePasswordStatus() { this->autoUpdatePasswordStatus_ = nullptr;};
      inline string getAutoUpdatePasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(autoUpdatePasswordStatus_, "") };
      inline AuthnConfig& setAutoUpdatePasswordStatus(string autoUpdatePasswordStatus) { DARABONBA_PTR_SET_VALUE(autoUpdatePasswordStatus_, autoUpdatePasswordStatus) };


    protected:
      // Whether the corresponding IdP supports authentication. Value range:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> authnStatus_ {};
      // Whether automatic password update is supported. Value range:
      // - Disabled: disabled
      // 
      // - Enabled: enabled
      shared_ptr<string> autoUpdatePasswordStatus_ {};
    };

    virtual bool empty() const override { return this->authnConfig_ == nullptr
        && this->autoCreateUserConfig_ == nullptr && this->autoUpdateUserConfig_ == nullptr && this->bindingConfig_ == nullptr && this->clientToken_ == nullptr && this->dingtalkAppConfig_ == nullptr
        && this->identityProviderName_ == nullptr && this->identityProviderType_ == nullptr && this->instanceId_ == nullptr && this->larkConfig_ == nullptr && this->ldapConfig_ == nullptr
        && this->logoUrl_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->oidcConfig_ == nullptr && this->udPullConfig_ == nullptr && this->udPushConfig_ == nullptr
        && this->weComConfig_ == nullptr; };
    // authnConfig Field Functions 
    bool hasAuthnConfig() const { return this->authnConfig_ != nullptr;};
    void deleteAuthnConfig() { this->authnConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::AuthnConfig & getAuthnConfig() const { DARABONBA_PTR_GET_CONST(authnConfig_, CreateIdentityProviderRequest::AuthnConfig) };
    inline CreateIdentityProviderRequest::AuthnConfig getAuthnConfig() { DARABONBA_PTR_GET(authnConfig_, CreateIdentityProviderRequest::AuthnConfig) };
    inline CreateIdentityProviderRequest& setAuthnConfig(const CreateIdentityProviderRequest::AuthnConfig & authnConfig) { DARABONBA_PTR_SET_VALUE(authnConfig_, authnConfig) };
    inline CreateIdentityProviderRequest& setAuthnConfig(CreateIdentityProviderRequest::AuthnConfig && authnConfig) { DARABONBA_PTR_SET_RVALUE(authnConfig_, authnConfig) };


    // autoCreateUserConfig Field Functions 
    bool hasAutoCreateUserConfig() const { return this->autoCreateUserConfig_ != nullptr;};
    void deleteAutoCreateUserConfig() { this->autoCreateUserConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::AutoCreateUserConfig & getAutoCreateUserConfig() const { DARABONBA_PTR_GET_CONST(autoCreateUserConfig_, CreateIdentityProviderRequest::AutoCreateUserConfig) };
    inline CreateIdentityProviderRequest::AutoCreateUserConfig getAutoCreateUserConfig() { DARABONBA_PTR_GET(autoCreateUserConfig_, CreateIdentityProviderRequest::AutoCreateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoCreateUserConfig(const CreateIdentityProviderRequest::AutoCreateUserConfig & autoCreateUserConfig) { DARABONBA_PTR_SET_VALUE(autoCreateUserConfig_, autoCreateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoCreateUserConfig(CreateIdentityProviderRequest::AutoCreateUserConfig && autoCreateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoCreateUserConfig_, autoCreateUserConfig) };


    // autoUpdateUserConfig Field Functions 
    bool hasAutoUpdateUserConfig() const { return this->autoUpdateUserConfig_ != nullptr;};
    void deleteAutoUpdateUserConfig() { this->autoUpdateUserConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::AutoUpdateUserConfig & getAutoUpdateUserConfig() const { DARABONBA_PTR_GET_CONST(autoUpdateUserConfig_, CreateIdentityProviderRequest::AutoUpdateUserConfig) };
    inline CreateIdentityProviderRequest::AutoUpdateUserConfig getAutoUpdateUserConfig() { DARABONBA_PTR_GET(autoUpdateUserConfig_, CreateIdentityProviderRequest::AutoUpdateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoUpdateUserConfig(const CreateIdentityProviderRequest::AutoUpdateUserConfig & autoUpdateUserConfig) { DARABONBA_PTR_SET_VALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };
    inline CreateIdentityProviderRequest& setAutoUpdateUserConfig(CreateIdentityProviderRequest::AutoUpdateUserConfig && autoUpdateUserConfig) { DARABONBA_PTR_SET_RVALUE(autoUpdateUserConfig_, autoUpdateUserConfig) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::BindingConfig & getBindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, CreateIdentityProviderRequest::BindingConfig) };
    inline CreateIdentityProviderRequest::BindingConfig getBindingConfig() { DARABONBA_PTR_GET(bindingConfig_, CreateIdentityProviderRequest::BindingConfig) };
    inline CreateIdentityProviderRequest& setBindingConfig(const CreateIdentityProviderRequest::BindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline CreateIdentityProviderRequest& setBindingConfig(CreateIdentityProviderRequest::BindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIdentityProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dingtalkAppConfig Field Functions 
    bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
    void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::DingtalkAppConfig & getDingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, CreateIdentityProviderRequest::DingtalkAppConfig) };
    inline CreateIdentityProviderRequest::DingtalkAppConfig getDingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, CreateIdentityProviderRequest::DingtalkAppConfig) };
    inline CreateIdentityProviderRequest& setDingtalkAppConfig(const CreateIdentityProviderRequest::DingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
    inline CreateIdentityProviderRequest& setDingtalkAppConfig(CreateIdentityProviderRequest::DingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline CreateIdentityProviderRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIdentityProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // larkConfig Field Functions 
    bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
    void deleteLarkConfig() { this->larkConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::LarkConfig & getLarkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, CreateIdentityProviderRequest::LarkConfig) };
    inline CreateIdentityProviderRequest::LarkConfig getLarkConfig() { DARABONBA_PTR_GET(larkConfig_, CreateIdentityProviderRequest::LarkConfig) };
    inline CreateIdentityProviderRequest& setLarkConfig(const CreateIdentityProviderRequest::LarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
    inline CreateIdentityProviderRequest& setLarkConfig(CreateIdentityProviderRequest::LarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


    // ldapConfig Field Functions 
    bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
    void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::LdapConfig & getLdapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, CreateIdentityProviderRequest::LdapConfig) };
    inline CreateIdentityProviderRequest::LdapConfig getLdapConfig() { DARABONBA_PTR_GET(ldapConfig_, CreateIdentityProviderRequest::LdapConfig) };
    inline CreateIdentityProviderRequest& setLdapConfig(const CreateIdentityProviderRequest::LdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
    inline CreateIdentityProviderRequest& setLdapConfig(CreateIdentityProviderRequest::LdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


    // logoUrl Field Functions 
    bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
    void deleteLogoUrl() { this->logoUrl_ = nullptr;};
    inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
    inline CreateIdentityProviderRequest& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline CreateIdentityProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcConfig Field Functions 
    bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
    void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::OidcConfig & getOidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, CreateIdentityProviderRequest::OidcConfig) };
    inline CreateIdentityProviderRequest::OidcConfig getOidcConfig() { DARABONBA_PTR_GET(oidcConfig_, CreateIdentityProviderRequest::OidcConfig) };
    inline CreateIdentityProviderRequest& setOidcConfig(const CreateIdentityProviderRequest::OidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
    inline CreateIdentityProviderRequest& setOidcConfig(CreateIdentityProviderRequest::OidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


    // udPullConfig Field Functions 
    bool hasUdPullConfig() const { return this->udPullConfig_ != nullptr;};
    void deleteUdPullConfig() { this->udPullConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::UdPullConfig & getUdPullConfig() const { DARABONBA_PTR_GET_CONST(udPullConfig_, CreateIdentityProviderRequest::UdPullConfig) };
    inline CreateIdentityProviderRequest::UdPullConfig getUdPullConfig() { DARABONBA_PTR_GET(udPullConfig_, CreateIdentityProviderRequest::UdPullConfig) };
    inline CreateIdentityProviderRequest& setUdPullConfig(const CreateIdentityProviderRequest::UdPullConfig & udPullConfig) { DARABONBA_PTR_SET_VALUE(udPullConfig_, udPullConfig) };
    inline CreateIdentityProviderRequest& setUdPullConfig(CreateIdentityProviderRequest::UdPullConfig && udPullConfig) { DARABONBA_PTR_SET_RVALUE(udPullConfig_, udPullConfig) };


    // udPushConfig Field Functions 
    bool hasUdPushConfig() const { return this->udPushConfig_ != nullptr;};
    void deleteUdPushConfig() { this->udPushConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::UdPushConfig & getUdPushConfig() const { DARABONBA_PTR_GET_CONST(udPushConfig_, CreateIdentityProviderRequest::UdPushConfig) };
    inline CreateIdentityProviderRequest::UdPushConfig getUdPushConfig() { DARABONBA_PTR_GET(udPushConfig_, CreateIdentityProviderRequest::UdPushConfig) };
    inline CreateIdentityProviderRequest& setUdPushConfig(const CreateIdentityProviderRequest::UdPushConfig & udPushConfig) { DARABONBA_PTR_SET_VALUE(udPushConfig_, udPushConfig) };
    inline CreateIdentityProviderRequest& setUdPushConfig(CreateIdentityProviderRequest::UdPushConfig && udPushConfig) { DARABONBA_PTR_SET_RVALUE(udPushConfig_, udPushConfig) };


    // weComConfig Field Functions 
    bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
    void deleteWeComConfig() { this->weComConfig_ = nullptr;};
    inline const CreateIdentityProviderRequest::WeComConfig & getWeComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, CreateIdentityProviderRequest::WeComConfig) };
    inline CreateIdentityProviderRequest::WeComConfig getWeComConfig() { DARABONBA_PTR_GET(weComConfig_, CreateIdentityProviderRequest::WeComConfig) };
    inline CreateIdentityProviderRequest& setWeComConfig(const CreateIdentityProviderRequest::WeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
    inline CreateIdentityProviderRequest& setWeComConfig(CreateIdentityProviderRequest::WeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


  protected:
    // Authentication configuration information.
    shared_ptr<CreateIdentityProviderRequest::AuthnConfig> authnConfig_ {};
    // Auto-create account rule configuration.
    shared_ptr<CreateIdentityProviderRequest::AutoCreateUserConfig> autoCreateUserConfig_ {};
    // Auto-update account rule configuration.
    shared_ptr<CreateIdentityProviderRequest::AutoUpdateUserConfig> autoUpdateUserConfig_ {};
    // OIDC identity provider account binding rule configuration.
    shared_ptr<CreateIdentityProviderRequest::BindingConfig> bindingConfig_ {};
    // Idp client token.
    shared_ptr<string> clientToken_ {};
    // DingTalk configuration information.
    shared_ptr<CreateIdentityProviderRequest::DingtalkAppConfig> dingtalkAppConfig_ {};
    // Identity provider name.
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderName_ {};
    // Identity provider synchronization type.
    // 
    // - Inbound to DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk:pull
    // 
    // - Outbound to DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk:push
    // 
    // - Inbound to WeCom: urn:alibaba:idaas:idp:tencent:wecom:pull
    // 
    // - Inbound to Lark: urn:alibaba:idaas:idp:bytedance:lark:pull
    // 
    // - Inbound to AD: urn:alibaba:idaas:idp:microsoft:ad:pull
    // 
    // - Inbound to LDAP: urn:alibaba:idaas:idp:unknown:ldap:pull
    // 
    // - Standard OIDC: urn:alibaba:idaas:idp:standard:oidc
    // 
    // - SASE Custom OIDC: urn:alibaba:idaas:idp:alibaba:sase
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderType_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Lark (Feishu) configuration information.
    shared_ptr<CreateIdentityProviderRequest::LarkConfig> larkConfig_ {};
    // AD/LDAP configuration information.
    shared_ptr<CreateIdentityProviderRequest::LdapConfig> ldapConfig_ {};
    // IdP logo url.
    shared_ptr<string> logoUrl_ {};
    // The unique identifier of the network access endpoint.
    shared_ptr<string> networkAccessEndpointId_ {};
    // OIDC IdP configuration.
    shared_ptr<CreateIdentityProviderRequest::OidcConfig> oidcConfig_ {};
    // Inbound synchronization configuration information.
    shared_ptr<CreateIdentityProviderRequest::UdPullConfig> udPullConfig_ {};
    // Outbound synchronization configuration information.
    shared_ptr<CreateIdentityProviderRequest::UdPushConfig> udPushConfig_ {};
    // WeCom configuration information.
    shared_ptr<CreateIdentityProviderRequest::WeComConfig> weComConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
