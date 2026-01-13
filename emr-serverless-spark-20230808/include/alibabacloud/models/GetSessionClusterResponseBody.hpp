// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSessionClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionCluster, sessionCluster_);
    };
    friend void from_json(const Darabonba::Json& j, GetSessionClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionCluster, sessionCluster_);
    };
    GetSessionClusterResponseBody() = default ;
    GetSessionClusterResponseBody(const GetSessionClusterResponseBody &) = default ;
    GetSessionClusterResponseBody(GetSessionClusterResponseBody &&) = default ;
    GetSessionClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionClusterResponseBody() = default ;
    GetSessionClusterResponseBody& operator=(const GetSessionClusterResponseBody &) = default ;
    GetSessionClusterResponseBody& operator=(GetSessionClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionCluster : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionCluster& obj) { 
        DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_TO_JSON(autoStartConfiguration, autoStartConfiguration_);
        DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_TO_JSON(connectionToken, connectionToken_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(domainInner, domainInner_);
        DARABONBA_PTR_TO_JSON(draftId, draftId_);
        DARABONBA_PTR_TO_JSON(envId, envId_);
        DARABONBA_PTR_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(fusion, fusion_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(publicEndpointEnabled, publicEndpointEnabled_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_TO_JSON(sessionClusterId, sessionClusterId_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
        DARABONBA_PTR_TO_JSON(webUI, webUI_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, SessionCluster& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_FROM_JSON(autoStartConfiguration, autoStartConfiguration_);
        DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_FROM_JSON(connectionToken, connectionToken_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(domainInner, domainInner_);
        DARABONBA_PTR_FROM_JSON(draftId, draftId_);
        DARABONBA_PTR_FROM_JSON(envId, envId_);
        DARABONBA_PTR_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(fusion, fusion_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(publicEndpointEnabled, publicEndpointEnabled_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
        DARABONBA_PTR_FROM_JSON(sessionClusterId, sessionClusterId_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(stateChangeReason, stateChangeReason_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
        DARABONBA_PTR_FROM_JSON(webUI, webUI_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      SessionCluster() = default ;
      SessionCluster(const SessionCluster &) = default ;
      SessionCluster(SessionCluster &&) = default ;
      SessionCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionCluster() = default ;
      SessionCluster& operator=(const SessionCluster &) = default ;
      SessionCluster& operator=(SessionCluster &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateChangeReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateChangeReason& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, StateChangeReason& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        StateChangeReason() = default ;
        StateChangeReason(const StateChangeReason &) = default ;
        StateChangeReason(StateChangeReason &&) = default ;
        StateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateChangeReason() = default ;
        StateChangeReason& operator=(const StateChangeReason &) = default ;
        StateChangeReason& operator=(StateChangeReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The status change code.
        shared_ptr<string> code_ {};
        // The status change message.
        shared_ptr<string> message_ {};
      };

      class AutoStopConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoStopConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
        };
        friend void from_json(const Darabonba::Json& j, AutoStopConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
        };
        AutoStopConfiguration() = default ;
        AutoStopConfiguration(const AutoStopConfiguration &) = default ;
        AutoStopConfiguration(AutoStopConfiguration &&) = default ;
        AutoStopConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoStopConfiguration() = default ;
        AutoStopConfiguration& operator=(const AutoStopConfiguration &) = default ;
        AutoStopConfiguration& operator=(AutoStopConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->idleTimeoutMinutes_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline AutoStopConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // idleTimeoutMinutes Field Functions 
        bool hasIdleTimeoutMinutes() const { return this->idleTimeoutMinutes_ != nullptr;};
        void deleteIdleTimeoutMinutes() { this->idleTimeoutMinutes_ = nullptr;};
        inline int32_t getIdleTimeoutMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutMinutes_, 0) };
        inline AutoStopConfiguration& setIdleTimeoutMinutes(int32_t idleTimeoutMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeoutMinutes_, idleTimeoutMinutes) };


      protected:
        // Indicates whether automatic termination is enabled.
        // 
        // *   true
        // *   false
        shared_ptr<bool> enable_ {};
        // The idle timeout period. The session is automatically terminated when the idle timeout period is exceeded.
        shared_ptr<int32_t> idleTimeoutMinutes_ {};
      };

      class AutoStartConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoStartConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, AutoStartConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
        };
        AutoStartConfiguration() = default ;
        AutoStartConfiguration(const AutoStartConfiguration &) = default ;
        AutoStartConfiguration(AutoStartConfiguration &&) = default ;
        AutoStartConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoStartConfiguration() = default ;
        AutoStartConfiguration& operator=(const AutoStartConfiguration &) = default ;
        AutoStartConfiguration& operator=(AutoStartConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline AutoStartConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        // Indicates whether automatic startup is enabled.
        // 
        // *   true
        // *   false
        shared_ptr<bool> enable_ {};
      };

      class ApplicationConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
          DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
          DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
        };
        ApplicationConfigs() = default ;
        ApplicationConfigs(const ApplicationConfigs &) = default ;
        ApplicationConfigs(ApplicationConfigs &&) = default ;
        ApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationConfigs() = default ;
        ApplicationConfigs& operator=(const ApplicationConfigs &) = default ;
        ApplicationConfigs& operator=(ApplicationConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configFileName_ == nullptr
        && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr; };
        // configFileName Field Functions 
        bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
        void deleteConfigFileName() { this->configFileName_ = nullptr;};
        inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
        inline ApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


        // configItemKey Field Functions 
        bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
        void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
        inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
        inline ApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


        // configItemValue Field Functions 
        bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
        void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
        inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
        inline ApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


      protected:
        // The name of the configuration file.
        shared_ptr<string> configFileName_ {};
        // The key of the configuration.
        shared_ptr<string> configItemKey_ {};
        // The configuration value.
        shared_ptr<string> configItemValue_ {};
      };

      virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->autoStartConfiguration_ == nullptr && this->autoStopConfiguration_ == nullptr && this->connectionToken_ == nullptr && this->displayReleaseVersion_ == nullptr && this->domain_ == nullptr
        && this->domainInner_ == nullptr && this->draftId_ == nullptr && this->envId_ == nullptr && this->extra_ == nullptr && this->fusion_ == nullptr
        && this->gmtCreate_ == nullptr && this->kind_ == nullptr && this->name_ == nullptr && this->publicEndpointEnabled_ == nullptr && this->queueName_ == nullptr
        && this->releaseVersion_ == nullptr && this->sessionClusterId_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->stateChangeReason_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr && this->webUI_ == nullptr && this->workspaceId_ == nullptr; };
      // applicationConfigs Field Functions 
      bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
      void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
      inline const vector<SessionCluster::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<SessionCluster::ApplicationConfigs>) };
      inline vector<SessionCluster::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<SessionCluster::ApplicationConfigs>) };
      inline SessionCluster& setApplicationConfigs(const vector<SessionCluster::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
      inline SessionCluster& setApplicationConfigs(vector<SessionCluster::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


      // autoStartConfiguration Field Functions 
      bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
      void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
      inline const SessionCluster::AutoStartConfiguration & getAutoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, SessionCluster::AutoStartConfiguration) };
      inline SessionCluster::AutoStartConfiguration getAutoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, SessionCluster::AutoStartConfiguration) };
      inline SessionCluster& setAutoStartConfiguration(const SessionCluster::AutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
      inline SessionCluster& setAutoStartConfiguration(SessionCluster::AutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


      // autoStopConfiguration Field Functions 
      bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
      void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
      inline const SessionCluster::AutoStopConfiguration & getAutoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, SessionCluster::AutoStopConfiguration) };
      inline SessionCluster::AutoStopConfiguration getAutoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, SessionCluster::AutoStopConfiguration) };
      inline SessionCluster& setAutoStopConfiguration(const SessionCluster::AutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
      inline SessionCluster& setAutoStopConfiguration(SessionCluster::AutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


      // connectionToken Field Functions 
      bool hasConnectionToken() const { return this->connectionToken_ != nullptr;};
      void deleteConnectionToken() { this->connectionToken_ = nullptr;};
      inline string getConnectionToken() const { DARABONBA_PTR_GET_DEFAULT(connectionToken_, "") };
      inline SessionCluster& setConnectionToken(string connectionToken) { DARABONBA_PTR_SET_VALUE(connectionToken_, connectionToken) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline SessionCluster& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline SessionCluster& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainInner Field Functions 
      bool hasDomainInner() const { return this->domainInner_ != nullptr;};
      void deleteDomainInner() { this->domainInner_ = nullptr;};
      inline string getDomainInner() const { DARABONBA_PTR_GET_DEFAULT(domainInner_, "") };
      inline SessionCluster& setDomainInner(string domainInner) { DARABONBA_PTR_SET_VALUE(domainInner_, domainInner) };


      // draftId Field Functions 
      bool hasDraftId() const { return this->draftId_ != nullptr;};
      void deleteDraftId() { this->draftId_ = nullptr;};
      inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
      inline SessionCluster& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline SessionCluster& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline SessionCluster& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline SessionCluster& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline SessionCluster& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline SessionCluster& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SessionCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publicEndpointEnabled Field Functions 
      bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
      void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
      inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
      inline SessionCluster& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline SessionCluster& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline SessionCluster& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // sessionClusterId Field Functions 
      bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
      void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
      inline string getSessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
      inline SessionCluster& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SessionCluster& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SessionCluster& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const SessionCluster::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, SessionCluster::StateChangeReason) };
      inline SessionCluster::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, SessionCluster::StateChangeReason) };
      inline SessionCluster& setStateChangeReason(const SessionCluster::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline SessionCluster& setStateChangeReason(SessionCluster::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SessionCluster& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SessionCluster& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline SessionCluster& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline SessionCluster& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The Spark configurations.
      shared_ptr<vector<SessionCluster::ApplicationConfigs>> applicationConfigs_ {};
      // Indicates whether automatic startup is enabled.
      shared_ptr<SessionCluster::AutoStartConfiguration> autoStartConfiguration_ {};
      // Indicates whether automatic termination is enabled.
      shared_ptr<SessionCluster::AutoStopConfiguration> autoStopConfiguration_ {};
      shared_ptr<string> connectionToken_ {};
      // The version of the Spark engine.
      shared_ptr<string> displayReleaseVersion_ {};
      // The domain name to which the Spark UI of the session belongs.
      shared_ptr<string> domain_ {};
      // The internal endpoint.
      shared_ptr<string> domainInner_ {};
      // The ID of the job that is associated with the session.
      shared_ptr<string> draftId_ {};
      // The environment ID.
      shared_ptr<string> envId_ {};
      // The additional metadata of the session.
      shared_ptr<string> extra_ {};
      // Indicates whether the Fusion engine is used for acceleration.
      shared_ptr<bool> fusion_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The type of the job. This parameter is required and cannot be modified after the deployment is created. Valid values:
      // 
      // *   SQLSCRIPT
      // *   JAR
      // *   PYTHON
      shared_ptr<string> kind_ {};
      // The name of the session.
      shared_ptr<string> name_ {};
      shared_ptr<bool> publicEndpointEnabled_ {};
      // The queue name.
      shared_ptr<string> queueName_ {};
      // The version of Serverless Spark.
      shared_ptr<string> releaseVersion_ {};
      // The session ID.
      shared_ptr<string> sessionClusterId_ {};
      // The start time.
      shared_ptr<int64_t> startTime_ {};
      // The job status.
      // 
      // *   Starting
      // *   Running
      // *   Stopping
      // *   Stopped
      // *   Error
      shared_ptr<string> state_ {};
      // The reason of the job status change.
      shared_ptr<SessionCluster::StateChangeReason> stateChangeReason_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The name of the account that is used to create the session.
      shared_ptr<string> userName_ {};
      // The Spark UI of the session.
      shared_ptr<string> webUI_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sessionCluster_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSessionClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionCluster Field Functions 
    bool hasSessionCluster() const { return this->sessionCluster_ != nullptr;};
    void deleteSessionCluster() { this->sessionCluster_ = nullptr;};
    inline const GetSessionClusterResponseBody::SessionCluster & getSessionCluster() const { DARABONBA_PTR_GET_CONST(sessionCluster_, GetSessionClusterResponseBody::SessionCluster) };
    inline GetSessionClusterResponseBody::SessionCluster getSessionCluster() { DARABONBA_PTR_GET(sessionCluster_, GetSessionClusterResponseBody::SessionCluster) };
    inline GetSessionClusterResponseBody& setSessionCluster(const GetSessionClusterResponseBody::SessionCluster & sessionCluster) { DARABONBA_PTR_SET_VALUE(sessionCluster_, sessionCluster) };
    inline GetSessionClusterResponseBody& setSessionCluster(GetSessionClusterResponseBody::SessionCluster && sessionCluster) { DARABONBA_PTR_SET_RVALUE(sessionCluster_, sessionCluster) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session object.
    shared_ptr<GetSessionClusterResponseBody::SessionCluster> sessionCluster_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
