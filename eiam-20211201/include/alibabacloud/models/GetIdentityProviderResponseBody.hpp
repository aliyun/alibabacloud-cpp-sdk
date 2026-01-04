// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
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
  class GetIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderDetail, identityProviderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderDetail, identityProviderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody(GetIdentityProviderResponseBody &&) = default ;
    GetIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody& operator=(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody& operator=(GetIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProviderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProviderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedStatus, advancedStatus_);
        DARABONBA_PTR_TO_JSON(AuthnSourceSupplier, authnSourceSupplier_);
        DARABONBA_PTR_TO_JSON(AuthnSourceType, authnSourceType_);
        DARABONBA_PTR_TO_JSON(AuthnStatus, authnStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DingtalkAppConfig, dingtalkAppConfig_);
        DARABONBA_PTR_TO_JSON(DingtalkProvisioningConfig, dingtalkProvisioningConfig_);
        DARABONBA_PTR_TO_JSON(IdentityProviderExternalId, identityProviderExternalId_);
        DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LarkConfig, larkConfig_);
        DARABONBA_PTR_TO_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
        DARABONBA_PTR_TO_JSON(LdapConfig, ldapConfig_);
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        DARABONBA_PTR_TO_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_TO_JSON(OidcConfig, oidcConfig_);
        DARABONBA_PTR_TO_JSON(UdPullConfig, udPullConfig_);
        DARABONBA_PTR_TO_JSON(UdPullStatus, udPullStatus_);
        DARABONBA_PTR_TO_JSON(UdPushConfig, udPushConfig_);
        DARABONBA_PTR_TO_JSON(UdPushStatus, udPushStatus_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WeComConfig, weComConfig_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProviderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedStatus, advancedStatus_);
        DARABONBA_PTR_FROM_JSON(AuthnSourceSupplier, authnSourceSupplier_);
        DARABONBA_PTR_FROM_JSON(AuthnSourceType, authnSourceType_);
        DARABONBA_PTR_FROM_JSON(AuthnStatus, authnStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DingtalkAppConfig, dingtalkAppConfig_);
        DARABONBA_PTR_FROM_JSON(DingtalkProvisioningConfig, dingtalkProvisioningConfig_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderExternalId, identityProviderExternalId_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LarkConfig, larkConfig_);
        DARABONBA_PTR_FROM_JSON(LastStatusCheckJobResult, lastStatusCheckJobResult_);
        DARABONBA_PTR_FROM_JSON(LdapConfig, ldapConfig_);
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        DARABONBA_PTR_FROM_JSON(LogoUrl, logoUrl_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_FROM_JSON(OidcConfig, oidcConfig_);
        DARABONBA_PTR_FROM_JSON(UdPullConfig, udPullConfig_);
        DARABONBA_PTR_FROM_JSON(UdPullStatus, udPullStatus_);
        DARABONBA_PTR_FROM_JSON(UdPushConfig, udPushConfig_);
        DARABONBA_PTR_FROM_JSON(UdPushStatus, udPushStatus_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WeComConfig, weComConfig_);
      };
      IdentityProviderDetail() = default ;
      IdentityProviderDetail(const IdentityProviderDetail &) = default ;
      IdentityProviderDetail(IdentityProviderDetail &&) = default ;
      IdentityProviderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProviderDetail() = default ;
      IdentityProviderDetail& operator=(const IdentityProviderDetail &) = default ;
      IdentityProviderDetail& operator=(IdentityProviderDetail &&) = default ;
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
        // The ID of the load generator. This parameter is disabled.
        shared_ptr<string> agentId_ {};
        // Authorization callback domain.
        shared_ptr<string> authorizeCallbackDomain_ {};
        // CorpId.
        shared_ptr<string> corpId_ {};
        // Corp secret.
        shared_ptr<string> corpSecret_ {};
        // Trusted domain.
        shared_ptr<string> trustableDomain_ {};
      };

      class UdPushConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UdPushConfig& obj) { 
          DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
          DARABONBA_PTR_TO_JSON(UdSyncScopeConfigs, udSyncScopeConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, UdPushConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
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
          // Synchronization source node.
          shared_ptr<vector<string>> sourceScopes_ {};
          // Synchronization target node.
          shared_ptr<string> targetScope_ {};
        };

        virtual bool empty() const override { return this->incrementalCallbackStatus_ == nullptr
        && this->udSyncScopeConfigs_ == nullptr; };
        // incrementalCallbackStatus Field Functions 
        bool hasIncrementalCallbackStatus() const { return this->incrementalCallbackStatus_ != nullptr;};
        void deleteIncrementalCallbackStatus() { this->incrementalCallbackStatus_ = nullptr;};
        inline string getIncrementalCallbackStatus() const { DARABONBA_PTR_GET_DEFAULT(incrementalCallbackStatus_, "") };
        inline UdPushConfig& setIncrementalCallbackStatus(string incrementalCallbackStatus) { DARABONBA_PTR_SET_VALUE(incrementalCallbackStatus_, incrementalCallbackStatus) };


        // udSyncScopeConfigs Field Functions 
        bool hasUdSyncScopeConfigs() const { return this->udSyncScopeConfigs_ != nullptr;};
        void deleteUdSyncScopeConfigs() { this->udSyncScopeConfigs_ = nullptr;};
        inline const vector<UdPushConfig::UdSyncScopeConfigs> & getUdSyncScopeConfigs() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfigs_, vector<UdPushConfig::UdSyncScopeConfigs>) };
        inline vector<UdPushConfig::UdSyncScopeConfigs> getUdSyncScopeConfigs() { DARABONBA_PTR_GET(udSyncScopeConfigs_, vector<UdPushConfig::UdSyncScopeConfigs>) };
        inline UdPushConfig& setUdSyncScopeConfigs(const vector<UdPushConfig::UdSyncScopeConfigs> & udSyncScopeConfigs) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };
        inline UdPushConfig& setUdSyncScopeConfigs(vector<UdPushConfig::UdSyncScopeConfigs> && udSyncScopeConfigs) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfigs_, udSyncScopeConfigs) };


      protected:
        // Incremental callback status: Whether to process incremental callback data from the IdP.
        shared_ptr<string> incrementalCallbackStatus_ {};
        // Outbound synchronization configuration Information.
        shared_ptr<vector<UdPushConfig::UdSyncScopeConfigs>> udSyncScopeConfigs_ {};
      };

      class UdPullConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UdPullConfig& obj) { 
          DARABONBA_PTR_TO_JSON(GroupSyncStatus, groupSyncStatus_);
          DARABONBA_PTR_TO_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
          DARABONBA_PTR_TO_JSON(UdSyncScopeConfig, udSyncScopeConfig_);
        };
        friend void from_json(const Darabonba::Json& j, UdPullConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupSyncStatus, groupSyncStatus_);
          DARABONBA_PTR_FROM_JSON(IncrementalCallbackStatus, incrementalCallbackStatus_);
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
          // Synchronization source node.
          shared_ptr<vector<string>> sourceScopes_ {};
          // Synchronization target node.
          shared_ptr<string> targetScope_ {};
        };

        virtual bool empty() const override { return this->groupSyncStatus_ == nullptr
        && this->incrementalCallbackStatus_ == nullptr && this->udSyncScopeConfig_ == nullptr; };
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


        // udSyncScopeConfig Field Functions 
        bool hasUdSyncScopeConfig() const { return this->udSyncScopeConfig_ != nullptr;};
        void deleteUdSyncScopeConfig() { this->udSyncScopeConfig_ = nullptr;};
        inline const UdPullConfig::UdSyncScopeConfig & getUdSyncScopeConfig() const { DARABONBA_PTR_GET_CONST(udSyncScopeConfig_, UdPullConfig::UdSyncScopeConfig) };
        inline UdPullConfig::UdSyncScopeConfig getUdSyncScopeConfig() { DARABONBA_PTR_GET(udSyncScopeConfig_, UdPullConfig::UdSyncScopeConfig) };
        inline UdPullConfig& setUdSyncScopeConfig(const UdPullConfig::UdSyncScopeConfig & udSyncScopeConfig) { DARABONBA_PTR_SET_VALUE(udSyncScopeConfig_, udSyncScopeConfig) };
        inline UdPullConfig& setUdSyncScopeConfig(UdPullConfig::UdSyncScopeConfig && udSyncScopeConfig) { DARABONBA_PTR_SET_RVALUE(udSyncScopeConfig_, udSyncScopeConfig) };


      protected:
        // Whether to enable group synchronization. Possible values:
        // 
        // Disabled: disabled
        // 
        // Enabled: enabled
        shared_ptr<string> groupSyncStatus_ {};
        // Incremental callback status: Whether to process incremental callback data from the IdP.
        shared_ptr<string> incrementalCallbackStatus_ {};
        // Inbound synchronization configuration Information.
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
          // OAuth2 authorization endpoint.
          shared_ptr<string> authorizationEndpoint_ {};
          // The CA that issued the certificate.
          shared_ptr<string> issuer_ {};
          // Jwks uri.
          shared_ptr<string> jwksUri_ {};
          // Token endpoint.
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
          // OIDC/OAuth2 authentication method.
          shared_ptr<string> authnMethod_ {};
          // The client ID of the device whose access credential you want to query.
          shared_ptr<string> clientId_ {};
          // The application secret registered with the OIDC authentication service.
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
        // OIDC authorization scope list.
        shared_ptr<vector<string>> grantScopes_ {};
        // OIDC authorization grant type.
        shared_ptr<string> grantType_ {};
        // Supported PKCE code challenge methods.
        shared_ptr<string> pkceChallengeMethod_ {};
        // Whether to use PKCE in authorization code grant flow.
        shared_ptr<bool> pkceRequired_ {};
      };

      class LdapConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LdapConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AdministratorPassword, administratorPassword_);
          DARABONBA_PTR_TO_JSON(AdministratorUsername, administratorUsername_);
          DARABONBA_PTR_TO_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
          DARABONBA_PTR_TO_JSON(CertificateFingerprints, certificateFingerprints_);
          DARABONBA_PTR_TO_JSON(LdapProtocol, ldapProtocol_);
          DARABONBA_PTR_TO_JSON(LdapServerHost, ldapServerHost_);
          DARABONBA_PTR_TO_JSON(LdapServerPort, ldapServerPort_);
          DARABONBA_PTR_TO_JSON(StartTlsStatus, startTlsStatus_);
        };
        friend void from_json(const Darabonba::Json& j, LdapConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AdministratorPassword, administratorPassword_);
          DARABONBA_PTR_FROM_JSON(AdministratorUsername, administratorUsername_);
          DARABONBA_PTR_FROM_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
          DARABONBA_PTR_FROM_JSON(CertificateFingerprints, certificateFingerprints_);
          DARABONBA_PTR_FROM_JSON(LdapProtocol, ldapProtocol_);
          DARABONBA_PTR_FROM_JSON(LdapServerHost, ldapServerHost_);
          DARABONBA_PTR_FROM_JSON(LdapServerPort, ldapServerPort_);
          DARABONBA_PTR_FROM_JSON(StartTlsStatus, startTlsStatus_);
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
        && this->administratorUsername_ == nullptr && this->certificateFingerprintStatus_ == nullptr && this->certificateFingerprints_ == nullptr && this->ldapProtocol_ == nullptr && this->ldapServerHost_ == nullptr
        && this->ldapServerPort_ == nullptr && this->startTlsStatus_ == nullptr; };
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


        // startTlsStatus Field Functions 
        bool hasStartTlsStatus() const { return this->startTlsStatus_ != nullptr;};
        void deleteStartTlsStatus() { this->startTlsStatus_ = nullptr;};
        inline string getStartTlsStatus() const { DARABONBA_PTR_GET_DEFAULT(startTlsStatus_, "") };
        inline LdapConfig& setStartTlsStatus(string startTlsStatus) { DARABONBA_PTR_SET_VALUE(startTlsStatus_, startTlsStatus) };


      protected:
        // Administrator password.
        shared_ptr<string> administratorPassword_ {};
        // Administrator username.
        shared_ptr<string> administratorUsername_ {};
        // Whether to verify the fingerprint certificate.
        shared_ptr<string> certificateFingerprintStatus_ {};
        // Certificate fingerprint list.
        shared_ptr<vector<string>> certificateFingerprints_ {};
        // Ldap protocol.
        shared_ptr<string> ldapProtocol_ {};
        // ldap server host.
        shared_ptr<string> ldapServerHost_ {};
        // ldap server port.
        shared_ptr<int32_t> ldapServerPort_ {};
        // StartTls status.
        shared_ptr<string> startTlsStatus_ {};
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
        // The application ID.
        shared_ptr<string> appId_ {};
        // The creation time.
        shared_ptr<string> appSecret_ {};
        // Feishu encryptKey.
        shared_ptr<string> encryptKey_ {};
        // Feishu enterprise code.
        shared_ptr<string> enterpriseNumber_ {};
        // Feishu verificationToken.
        shared_ptr<string> verificationToken_ {};
      };

      class DingtalkProvisioningConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DingtalkProvisioningConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AuthedDepartmentIds, authedDepartmentIds_);
          DARABONBA_PTR_TO_JSON(AuthedUsers, authedUsers_);
          DARABONBA_PTR_TO_JSON(CorpId, corpId_);
          DARABONBA_PTR_TO_JSON(CorpName, corpName_);
        };
        friend void from_json(const Darabonba::Json& j, DingtalkProvisioningConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthedDepartmentIds, authedDepartmentIds_);
          DARABONBA_PTR_FROM_JSON(AuthedUsers, authedUsers_);
          DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
          DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
        };
        DingtalkProvisioningConfig() = default ;
        DingtalkProvisioningConfig(const DingtalkProvisioningConfig &) = default ;
        DingtalkProvisioningConfig(DingtalkProvisioningConfig &&) = default ;
        DingtalkProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DingtalkProvisioningConfig() = default ;
        DingtalkProvisioningConfig& operator=(const DingtalkProvisioningConfig &) = default ;
        DingtalkProvisioningConfig& operator=(DingtalkProvisioningConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthedUsers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthedUsers& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, AuthedUsers& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          AuthedUsers() = default ;
          AuthedUsers(const AuthedUsers &) = default ;
          AuthedUsers(AuthedUsers &&) = default ;
          AuthedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthedUsers() = default ;
          AuthedUsers& operator=(const AuthedUsers &) = default ;
          AuthedUsers& operator=(AuthedUsers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->userId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AuthedUsers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline AuthedUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          // DingTalk user name.
          shared_ptr<string> name_ {};
          // DingTalk user id.
          shared_ptr<string> userId_ {};
        };

        class AuthedDepartmentIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthedDepartmentIds& obj) { 
            DARABONBA_PTR_TO_JSON(DeptId, deptId_);
            DARABONBA_PTR_TO_JSON(DeptName, deptName_);
          };
          friend void from_json(const Darabonba::Json& j, AuthedDepartmentIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DeptId, deptId_);
            DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
          };
          AuthedDepartmentIds() = default ;
          AuthedDepartmentIds(const AuthedDepartmentIds &) = default ;
          AuthedDepartmentIds(AuthedDepartmentIds &&) = default ;
          AuthedDepartmentIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthedDepartmentIds() = default ;
          AuthedDepartmentIds& operator=(const AuthedDepartmentIds &) = default ;
          AuthedDepartmentIds& operator=(AuthedDepartmentIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->deptId_ == nullptr
        && this->deptName_ == nullptr; };
          // deptId Field Functions 
          bool hasDeptId() const { return this->deptId_ != nullptr;};
          void deleteDeptId() { this->deptId_ = nullptr;};
          inline string getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
          inline AuthedDepartmentIds& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


          // deptName Field Functions 
          bool hasDeptName() const { return this->deptName_ != nullptr;};
          void deleteDeptName() { this->deptName_ = nullptr;};
          inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
          inline AuthedDepartmentIds& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


        protected:
          // Department ID.
          shared_ptr<string> deptId_ {};
          // Department name.
          shared_ptr<string> deptName_ {};
        };

        virtual bool empty() const override { return this->authedDepartmentIds_ == nullptr
        && this->authedUsers_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr; };
        // authedDepartmentIds Field Functions 
        bool hasAuthedDepartmentIds() const { return this->authedDepartmentIds_ != nullptr;};
        void deleteAuthedDepartmentIds() { this->authedDepartmentIds_ = nullptr;};
        inline const vector<DingtalkProvisioningConfig::AuthedDepartmentIds> & getAuthedDepartmentIds() const { DARABONBA_PTR_GET_CONST(authedDepartmentIds_, vector<DingtalkProvisioningConfig::AuthedDepartmentIds>) };
        inline vector<DingtalkProvisioningConfig::AuthedDepartmentIds> getAuthedDepartmentIds() { DARABONBA_PTR_GET(authedDepartmentIds_, vector<DingtalkProvisioningConfig::AuthedDepartmentIds>) };
        inline DingtalkProvisioningConfig& setAuthedDepartmentIds(const vector<DingtalkProvisioningConfig::AuthedDepartmentIds> & authedDepartmentIds) { DARABONBA_PTR_SET_VALUE(authedDepartmentIds_, authedDepartmentIds) };
        inline DingtalkProvisioningConfig& setAuthedDepartmentIds(vector<DingtalkProvisioningConfig::AuthedDepartmentIds> && authedDepartmentIds) { DARABONBA_PTR_SET_RVALUE(authedDepartmentIds_, authedDepartmentIds) };


        // authedUsers Field Functions 
        bool hasAuthedUsers() const { return this->authedUsers_ != nullptr;};
        void deleteAuthedUsers() { this->authedUsers_ = nullptr;};
        inline const vector<DingtalkProvisioningConfig::AuthedUsers> & getAuthedUsers() const { DARABONBA_PTR_GET_CONST(authedUsers_, vector<DingtalkProvisioningConfig::AuthedUsers>) };
        inline vector<DingtalkProvisioningConfig::AuthedUsers> getAuthedUsers() { DARABONBA_PTR_GET(authedUsers_, vector<DingtalkProvisioningConfig::AuthedUsers>) };
        inline DingtalkProvisioningConfig& setAuthedUsers(const vector<DingtalkProvisioningConfig::AuthedUsers> & authedUsers) { DARABONBA_PTR_SET_VALUE(authedUsers_, authedUsers) };
        inline DingtalkProvisioningConfig& setAuthedUsers(vector<DingtalkProvisioningConfig::AuthedUsers> && authedUsers) { DARABONBA_PTR_SET_RVALUE(authedUsers_, authedUsers) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline DingtalkProvisioningConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline DingtalkProvisioningConfig& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      protected:
        // List of authorized DingTalk departments.
        shared_ptr<vector<DingtalkProvisioningConfig::AuthedDepartmentIds>> authedDepartmentIds_ {};
        // Authorized DingTalk account list.
        shared_ptr<vector<DingtalkProvisioningConfig::AuthedUsers>> authedUsers_ {};
        // DingTalk enterprise corpId.
        shared_ptr<string> corpId_ {};
        // The name of the company.
        shared_ptr<string> corpName_ {};
      };

      class DingtalkAppConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DingtalkAppConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(CorpId, corpId_);
          DARABONBA_PTR_TO_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
          DARABONBA_PTR_TO_JSON(DingtalkVersion, dingtalkVersion_);
          DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
          DARABONBA_PTR_TO_JSON(VerificationToken, verificationToken_);
        };
        friend void from_json(const Darabonba::Json& j, DingtalkAppConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
          DARABONBA_PTR_FROM_JSON(DingtalkLoginVersion, dingtalkLoginVersion_);
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
        && this->appSecret_ == nullptr && this->corpId_ == nullptr && this->dingtalkLoginVersion_ == nullptr && this->dingtalkVersion_ == nullptr && this->encryptKey_ == nullptr
        && this->verificationToken_ == nullptr; };
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


        // dingtalkLoginVersion Field Functions 
        bool hasDingtalkLoginVersion() const { return this->dingtalkLoginVersion_ != nullptr;};
        void deleteDingtalkLoginVersion() { this->dingtalkLoginVersion_ = nullptr;};
        inline string getDingtalkLoginVersion() const { DARABONBA_PTR_GET_DEFAULT(dingtalkLoginVersion_, "") };
        inline DingtalkAppConfig& setDingtalkLoginVersion(string dingtalkLoginVersion) { DARABONBA_PTR_SET_VALUE(dingtalkLoginVersion_, dingtalkLoginVersion) };


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
        // The AppKey for the application.
        shared_ptr<string> appKey_ {};
        // The details of the application secret.
        shared_ptr<string> appSecret_ {};
        // DingTalk corpId.
        shared_ptr<string> corpId_ {};
        // IDaaS EIAM 钉钉扫码登录版本
        shared_ptr<string> dingtalkLoginVersion_ {};
        // DingTalk Version.
        shared_ptr<string> dingtalkVersion_ {};
        // DingTalk  encrypt key.
        shared_ptr<string> encryptKey_ {};
        // DingTalk  verification token.
        shared_ptr<string> verificationToken_ {};
      };

      virtual bool empty() const override { return this->advancedStatus_ == nullptr
        && this->authnSourceSupplier_ == nullptr && this->authnSourceType_ == nullptr && this->authnStatus_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->dingtalkAppConfig_ == nullptr && this->dingtalkProvisioningConfig_ == nullptr && this->identityProviderExternalId_ == nullptr && this->identityProviderId_ == nullptr && this->identityProviderName_ == nullptr
        && this->identityProviderType_ == nullptr && this->instanceId_ == nullptr && this->larkConfig_ == nullptr && this->lastStatusCheckJobResult_ == nullptr && this->ldapConfig_ == nullptr
        && this->lockReason_ == nullptr && this->logoUrl_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->oidcConfig_ == nullptr && this->udPullConfig_ == nullptr
        && this->udPullStatus_ == nullptr && this->udPushConfig_ == nullptr && this->udPushStatus_ == nullptr && this->updateTime_ == nullptr && this->weComConfig_ == nullptr; };
      // advancedStatus Field Functions 
      bool hasAdvancedStatus() const { return this->advancedStatus_ != nullptr;};
      void deleteAdvancedStatus() { this->advancedStatus_ = nullptr;};
      inline string getAdvancedStatus() const { DARABONBA_PTR_GET_DEFAULT(advancedStatus_, "") };
      inline IdentityProviderDetail& setAdvancedStatus(string advancedStatus) { DARABONBA_PTR_SET_VALUE(advancedStatus_, advancedStatus) };


      // authnSourceSupplier Field Functions 
      bool hasAuthnSourceSupplier() const { return this->authnSourceSupplier_ != nullptr;};
      void deleteAuthnSourceSupplier() { this->authnSourceSupplier_ = nullptr;};
      inline string getAuthnSourceSupplier() const { DARABONBA_PTR_GET_DEFAULT(authnSourceSupplier_, "") };
      inline IdentityProviderDetail& setAuthnSourceSupplier(string authnSourceSupplier) { DARABONBA_PTR_SET_VALUE(authnSourceSupplier_, authnSourceSupplier) };


      // authnSourceType Field Functions 
      bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
      void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
      inline string getAuthnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
      inline IdentityProviderDetail& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


      // authnStatus Field Functions 
      bool hasAuthnStatus() const { return this->authnStatus_ != nullptr;};
      void deleteAuthnStatus() { this->authnStatus_ = nullptr;};
      inline string getAuthnStatus() const { DARABONBA_PTR_GET_DEFAULT(authnStatus_, "") };
      inline IdentityProviderDetail& setAuthnStatus(string authnStatus) { DARABONBA_PTR_SET_VALUE(authnStatus_, authnStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline IdentityProviderDetail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IdentityProviderDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dingtalkAppConfig Field Functions 
      bool hasDingtalkAppConfig() const { return this->dingtalkAppConfig_ != nullptr;};
      void deleteDingtalkAppConfig() { this->dingtalkAppConfig_ = nullptr;};
      inline const IdentityProviderDetail::DingtalkAppConfig & getDingtalkAppConfig() const { DARABONBA_PTR_GET_CONST(dingtalkAppConfig_, IdentityProviderDetail::DingtalkAppConfig) };
      inline IdentityProviderDetail::DingtalkAppConfig getDingtalkAppConfig() { DARABONBA_PTR_GET(dingtalkAppConfig_, IdentityProviderDetail::DingtalkAppConfig) };
      inline IdentityProviderDetail& setDingtalkAppConfig(const IdentityProviderDetail::DingtalkAppConfig & dingtalkAppConfig) { DARABONBA_PTR_SET_VALUE(dingtalkAppConfig_, dingtalkAppConfig) };
      inline IdentityProviderDetail& setDingtalkAppConfig(IdentityProviderDetail::DingtalkAppConfig && dingtalkAppConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkAppConfig_, dingtalkAppConfig) };


      // dingtalkProvisioningConfig Field Functions 
      bool hasDingtalkProvisioningConfig() const { return this->dingtalkProvisioningConfig_ != nullptr;};
      void deleteDingtalkProvisioningConfig() { this->dingtalkProvisioningConfig_ = nullptr;};
      inline const IdentityProviderDetail::DingtalkProvisioningConfig & getDingtalkProvisioningConfig() const { DARABONBA_PTR_GET_CONST(dingtalkProvisioningConfig_, IdentityProviderDetail::DingtalkProvisioningConfig) };
      inline IdentityProviderDetail::DingtalkProvisioningConfig getDingtalkProvisioningConfig() { DARABONBA_PTR_GET(dingtalkProvisioningConfig_, IdentityProviderDetail::DingtalkProvisioningConfig) };
      inline IdentityProviderDetail& setDingtalkProvisioningConfig(const IdentityProviderDetail::DingtalkProvisioningConfig & dingtalkProvisioningConfig) { DARABONBA_PTR_SET_VALUE(dingtalkProvisioningConfig_, dingtalkProvisioningConfig) };
      inline IdentityProviderDetail& setDingtalkProvisioningConfig(IdentityProviderDetail::DingtalkProvisioningConfig && dingtalkProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(dingtalkProvisioningConfig_, dingtalkProvisioningConfig) };


      // identityProviderExternalId Field Functions 
      bool hasIdentityProviderExternalId() const { return this->identityProviderExternalId_ != nullptr;};
      void deleteIdentityProviderExternalId() { this->identityProviderExternalId_ = nullptr;};
      inline string getIdentityProviderExternalId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderExternalId_, "") };
      inline IdentityProviderDetail& setIdentityProviderExternalId(string identityProviderExternalId) { DARABONBA_PTR_SET_VALUE(identityProviderExternalId_, identityProviderExternalId) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline IdentityProviderDetail& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline IdentityProviderDetail& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline IdentityProviderDetail& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IdentityProviderDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // larkConfig Field Functions 
      bool hasLarkConfig() const { return this->larkConfig_ != nullptr;};
      void deleteLarkConfig() { this->larkConfig_ = nullptr;};
      inline const IdentityProviderDetail::LarkConfig & getLarkConfig() const { DARABONBA_PTR_GET_CONST(larkConfig_, IdentityProviderDetail::LarkConfig) };
      inline IdentityProviderDetail::LarkConfig getLarkConfig() { DARABONBA_PTR_GET(larkConfig_, IdentityProviderDetail::LarkConfig) };
      inline IdentityProviderDetail& setLarkConfig(const IdentityProviderDetail::LarkConfig & larkConfig) { DARABONBA_PTR_SET_VALUE(larkConfig_, larkConfig) };
      inline IdentityProviderDetail& setLarkConfig(IdentityProviderDetail::LarkConfig && larkConfig) { DARABONBA_PTR_SET_RVALUE(larkConfig_, larkConfig) };


      // lastStatusCheckJobResult Field Functions 
      bool hasLastStatusCheckJobResult() const { return this->lastStatusCheckJobResult_ != nullptr;};
      void deleteLastStatusCheckJobResult() { this->lastStatusCheckJobResult_ = nullptr;};
      inline string getLastStatusCheckJobResult() const { DARABONBA_PTR_GET_DEFAULT(lastStatusCheckJobResult_, "") };
      inline IdentityProviderDetail& setLastStatusCheckJobResult(string lastStatusCheckJobResult) { DARABONBA_PTR_SET_VALUE(lastStatusCheckJobResult_, lastStatusCheckJobResult) };


      // ldapConfig Field Functions 
      bool hasLdapConfig() const { return this->ldapConfig_ != nullptr;};
      void deleteLdapConfig() { this->ldapConfig_ = nullptr;};
      inline const IdentityProviderDetail::LdapConfig & getLdapConfig() const { DARABONBA_PTR_GET_CONST(ldapConfig_, IdentityProviderDetail::LdapConfig) };
      inline IdentityProviderDetail::LdapConfig getLdapConfig() { DARABONBA_PTR_GET(ldapConfig_, IdentityProviderDetail::LdapConfig) };
      inline IdentityProviderDetail& setLdapConfig(const IdentityProviderDetail::LdapConfig & ldapConfig) { DARABONBA_PTR_SET_VALUE(ldapConfig_, ldapConfig) };
      inline IdentityProviderDetail& setLdapConfig(IdentityProviderDetail::LdapConfig && ldapConfig) { DARABONBA_PTR_SET_RVALUE(ldapConfig_, ldapConfig) };


      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline IdentityProviderDetail& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // logoUrl Field Functions 
      bool hasLogoUrl() const { return this->logoUrl_ != nullptr;};
      void deleteLogoUrl() { this->logoUrl_ = nullptr;};
      inline string getLogoUrl() const { DARABONBA_PTR_GET_DEFAULT(logoUrl_, "") };
      inline IdentityProviderDetail& setLogoUrl(string logoUrl) { DARABONBA_PTR_SET_VALUE(logoUrl_, logoUrl) };


      // networkAccessEndpointId Field Functions 
      bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
      void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
      inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
      inline IdentityProviderDetail& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


      // oidcConfig Field Functions 
      bool hasOidcConfig() const { return this->oidcConfig_ != nullptr;};
      void deleteOidcConfig() { this->oidcConfig_ = nullptr;};
      inline const IdentityProviderDetail::OidcConfig & getOidcConfig() const { DARABONBA_PTR_GET_CONST(oidcConfig_, IdentityProviderDetail::OidcConfig) };
      inline IdentityProviderDetail::OidcConfig getOidcConfig() { DARABONBA_PTR_GET(oidcConfig_, IdentityProviderDetail::OidcConfig) };
      inline IdentityProviderDetail& setOidcConfig(const IdentityProviderDetail::OidcConfig & oidcConfig) { DARABONBA_PTR_SET_VALUE(oidcConfig_, oidcConfig) };
      inline IdentityProviderDetail& setOidcConfig(IdentityProviderDetail::OidcConfig && oidcConfig) { DARABONBA_PTR_SET_RVALUE(oidcConfig_, oidcConfig) };


      // udPullConfig Field Functions 
      bool hasUdPullConfig() const { return this->udPullConfig_ != nullptr;};
      void deleteUdPullConfig() { this->udPullConfig_ = nullptr;};
      inline const IdentityProviderDetail::UdPullConfig & getUdPullConfig() const { DARABONBA_PTR_GET_CONST(udPullConfig_, IdentityProviderDetail::UdPullConfig) };
      inline IdentityProviderDetail::UdPullConfig getUdPullConfig() { DARABONBA_PTR_GET(udPullConfig_, IdentityProviderDetail::UdPullConfig) };
      inline IdentityProviderDetail& setUdPullConfig(const IdentityProviderDetail::UdPullConfig & udPullConfig) { DARABONBA_PTR_SET_VALUE(udPullConfig_, udPullConfig) };
      inline IdentityProviderDetail& setUdPullConfig(IdentityProviderDetail::UdPullConfig && udPullConfig) { DARABONBA_PTR_SET_RVALUE(udPullConfig_, udPullConfig) };


      // udPullStatus Field Functions 
      bool hasUdPullStatus() const { return this->udPullStatus_ != nullptr;};
      void deleteUdPullStatus() { this->udPullStatus_ = nullptr;};
      inline string getUdPullStatus() const { DARABONBA_PTR_GET_DEFAULT(udPullStatus_, "") };
      inline IdentityProviderDetail& setUdPullStatus(string udPullStatus) { DARABONBA_PTR_SET_VALUE(udPullStatus_, udPullStatus) };


      // udPushConfig Field Functions 
      bool hasUdPushConfig() const { return this->udPushConfig_ != nullptr;};
      void deleteUdPushConfig() { this->udPushConfig_ = nullptr;};
      inline const IdentityProviderDetail::UdPushConfig & getUdPushConfig() const { DARABONBA_PTR_GET_CONST(udPushConfig_, IdentityProviderDetail::UdPushConfig) };
      inline IdentityProviderDetail::UdPushConfig getUdPushConfig() { DARABONBA_PTR_GET(udPushConfig_, IdentityProviderDetail::UdPushConfig) };
      inline IdentityProviderDetail& setUdPushConfig(const IdentityProviderDetail::UdPushConfig & udPushConfig) { DARABONBA_PTR_SET_VALUE(udPushConfig_, udPushConfig) };
      inline IdentityProviderDetail& setUdPushConfig(IdentityProviderDetail::UdPushConfig && udPushConfig) { DARABONBA_PTR_SET_RVALUE(udPushConfig_, udPushConfig) };


      // udPushStatus Field Functions 
      bool hasUdPushStatus() const { return this->udPushStatus_ != nullptr;};
      void deleteUdPushStatus() { this->udPushStatus_ = nullptr;};
      inline string getUdPushStatus() const { DARABONBA_PTR_GET_DEFAULT(udPushStatus_, "") };
      inline IdentityProviderDetail& setUdPushStatus(string udPushStatus) { DARABONBA_PTR_SET_VALUE(udPushStatus_, udPushStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline IdentityProviderDetail& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // weComConfig Field Functions 
      bool hasWeComConfig() const { return this->weComConfig_ != nullptr;};
      void deleteWeComConfig() { this->weComConfig_ = nullptr;};
      inline const IdentityProviderDetail::WeComConfig & getWeComConfig() const { DARABONBA_PTR_GET_CONST(weComConfig_, IdentityProviderDetail::WeComConfig) };
      inline IdentityProviderDetail::WeComConfig getWeComConfig() { DARABONBA_PTR_GET(weComConfig_, IdentityProviderDetail::WeComConfig) };
      inline IdentityProviderDetail& setWeComConfig(const IdentityProviderDetail::WeComConfig & weComConfig) { DARABONBA_PTR_SET_VALUE(weComConfig_, weComConfig) };
      inline IdentityProviderDetail& setWeComConfig(IdentityProviderDetail::WeComConfig && weComConfig) { DARABONBA_PTR_SET_RVALUE(weComConfig_, weComConfig) };


    protected:
      // Advanced configuration capability. 
      // Value range:  
      // Disabled: disabled  
      // Enable: enabled
      shared_ptr<string> advancedStatus_ {};
      // The corresponding identity provider product, e.g., Okta, Google, or Azure AD. Possible values:
      // 
      // DingTalk: urn:alibaba:idaas:idp:alibaba:dingtalk
      // 
      // LDAP: urn:alibaba:idaas:idp:unknown:ldap
      // 
      // Alibaba Cloud IDaaS: urn:alibaba:idaas:idp:alibaba:idaas
      // 
      // WeCom (Enterprise WeChat): urn:alibaba:idaas:idp:tencent:wecom
      // 
      // Lark (Feishu): urn:alibaba:idaas:idp:bytedance:lark
      // 
      // Active Directory: urn:alibaba:idaas:idp:microsoft:ad
      // 
      // Azure Active Directory: urn:alibaba:idaas:idp:microsoft:aad
      // 
      // Alibaba Cloud SASE: urn:alibaba:idaas:idp:alibaba:sase
      shared_ptr<string> authnSourceSupplier_ {};
      // Authentication type — OIDC or SAML. Possible values:
      // 
      // OIDC: urn:alibaba:idaas:authntype:oidc
      // 
      // SAML: urn:alibaba:idaas:authntype:saml2
      shared_ptr<string> authnSourceType_ {};
      // Whether the corresponding IdP supports authentication. Value range: 
      // Disabled: disabled  
      // Enabled: enabled
      shared_ptr<string> authnStatus_ {};
      // The time when the version was created.
      shared_ptr<int64_t> createTime_ {};
      // Identity provider description.
      shared_ptr<string> description_ {};
      // DingTalk Basic Configuration
      shared_ptr<IdentityProviderDetail::DingtalkAppConfig> dingtalkAppConfig_ {};
      // DingTalk synchronous configuration.
      shared_ptr<IdentityProviderDetail::DingtalkProvisioningConfig> dingtalkProvisioningConfig_ {};
      // Identity provider external ID.
      shared_ptr<string> identityProviderExternalId_ {};
      // Identity provider ID.
      shared_ptr<string> identityProviderId_ {};
      // Identity provider name.
      shared_ptr<string> identityProviderName_ {};
      // Identity provider type.
      shared_ptr<string> identityProviderType_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Lark configuration.
      shared_ptr<IdentityProviderDetail::LarkConfig> larkConfig_ {};
      // Last status check result.
      shared_ptr<string> lastStatusCheckJobResult_ {};
      // AD/LDAP Identity provider information.
      shared_ptr<IdentityProviderDetail::LdapConfig> ldapConfig_ {};
      // The reason why write operations on the instance are locked.
      shared_ptr<string> lockReason_ {};
      // The URL of the application logo.
      shared_ptr<string> logoUrl_ {};
      // The unique identifier of the network access endpoint.
      shared_ptr<string> networkAccessEndpointId_ {};
      // OIDC IdP configuration.
      shared_ptr<IdentityProviderDetail::OidcConfig> oidcConfig_ {};
      // Sync in configuration.
      shared_ptr<IdentityProviderDetail::UdPullConfig> udPullConfig_ {};
      // Indicates whether the IDaaS EIAM system supports UD (User Directory) synchronization.
      shared_ptr<string> udPullStatus_ {};
      // Outbound synchronization configuration.
      shared_ptr<IdentityProviderDetail::UdPushConfig> udPushConfig_ {};
      // Outbound synchronization capability.
      shared_ptr<string> udPushStatus_ {};
      // The time when the serviceInstance  was last updated.
      shared_ptr<int64_t> updateTime_ {};
      // WeCom configuration.
      shared_ptr<IdentityProviderDetail::WeComConfig> weComConfig_ {};
    };

    virtual bool empty() const override { return this->identityProviderDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // identityProviderDetail Field Functions 
    bool hasIdentityProviderDetail() const { return this->identityProviderDetail_ != nullptr;};
    void deleteIdentityProviderDetail() { this->identityProviderDetail_ = nullptr;};
    inline const GetIdentityProviderResponseBody::IdentityProviderDetail & getIdentityProviderDetail() const { DARABONBA_PTR_GET_CONST(identityProviderDetail_, GetIdentityProviderResponseBody::IdentityProviderDetail) };
    inline GetIdentityProviderResponseBody::IdentityProviderDetail getIdentityProviderDetail() { DARABONBA_PTR_GET(identityProviderDetail_, GetIdentityProviderResponseBody::IdentityProviderDetail) };
    inline GetIdentityProviderResponseBody& setIdentityProviderDetail(const GetIdentityProviderResponseBody::IdentityProviderDetail & identityProviderDetail) { DARABONBA_PTR_SET_VALUE(identityProviderDetail_, identityProviderDetail) };
    inline GetIdentityProviderResponseBody& setIdentityProviderDetail(GetIdentityProviderResponseBody::IdentityProviderDetail && identityProviderDetail) { DARABONBA_PTR_SET_RVALUE(identityProviderDetail_, identityProviderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Identity provider Information.
    shared_ptr<GetIdentityProviderResponseBody::IdentityProviderDetail> identityProviderDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
