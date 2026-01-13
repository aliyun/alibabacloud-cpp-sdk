// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONCLUSTERSRESPONSEBODY_HPP_
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
  class ListSessionClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionClusters, sessionClusters_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionClusters, sessionClusters_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListSessionClustersResponseBody() = default ;
    ListSessionClustersResponseBody(const ListSessionClustersResponseBody &) = default ;
    ListSessionClustersResponseBody(ListSessionClustersResponseBody &&) = default ;
    ListSessionClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionClustersResponseBody() = default ;
    ListSessionClustersResponseBody& operator=(const ListSessionClustersResponseBody &) = default ;
    ListSessionClustersResponseBody& operator=(ListSessionClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionClusters& obj) { 
        DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_TO_JSON(autoStartConfiguration, autoStartConfiguration_);
        DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_TO_JSON(connectionToken, connectionToken_);
        DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(domainInner, domainInner_);
        DARABONBA_PTR_TO_JSON(draftId, draftId_);
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
      friend void from_json(const Darabonba::Json& j, SessionClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
        DARABONBA_PTR_FROM_JSON(autoStartConfiguration, autoStartConfiguration_);
        DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
        DARABONBA_PTR_FROM_JSON(connectionToken, connectionToken_);
        DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(domainInner, domainInner_);
        DARABONBA_PTR_FROM_JSON(draftId, draftId_);
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
      SessionClusters() = default ;
      SessionClusters(const SessionClusters &) = default ;
      SessionClusters(SessionClusters &&) = default ;
      SessionClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionClusters() = default ;
      SessionClusters& operator=(const SessionClusters &) = default ;
      SessionClusters& operator=(SessionClusters &&) = default ;
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
        && this->domainInner_ == nullptr && this->draftId_ == nullptr && this->extra_ == nullptr && this->fusion_ == nullptr && this->gmtCreate_ == nullptr
        && this->kind_ == nullptr && this->name_ == nullptr && this->publicEndpointEnabled_ == nullptr && this->queueName_ == nullptr && this->releaseVersion_ == nullptr
        && this->sessionClusterId_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->stateChangeReason_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr && this->webUI_ == nullptr && this->workspaceId_ == nullptr; };
      // applicationConfigs Field Functions 
      bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
      void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
      inline const vector<SessionClusters::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<SessionClusters::ApplicationConfigs>) };
      inline vector<SessionClusters::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<SessionClusters::ApplicationConfigs>) };
      inline SessionClusters& setApplicationConfigs(const vector<SessionClusters::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
      inline SessionClusters& setApplicationConfigs(vector<SessionClusters::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


      // autoStartConfiguration Field Functions 
      bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
      void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
      inline const SessionClusters::AutoStartConfiguration & getAutoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, SessionClusters::AutoStartConfiguration) };
      inline SessionClusters::AutoStartConfiguration getAutoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, SessionClusters::AutoStartConfiguration) };
      inline SessionClusters& setAutoStartConfiguration(const SessionClusters::AutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
      inline SessionClusters& setAutoStartConfiguration(SessionClusters::AutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


      // autoStopConfiguration Field Functions 
      bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
      void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
      inline const SessionClusters::AutoStopConfiguration & getAutoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, SessionClusters::AutoStopConfiguration) };
      inline SessionClusters::AutoStopConfiguration getAutoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, SessionClusters::AutoStopConfiguration) };
      inline SessionClusters& setAutoStopConfiguration(const SessionClusters::AutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
      inline SessionClusters& setAutoStopConfiguration(SessionClusters::AutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


      // connectionToken Field Functions 
      bool hasConnectionToken() const { return this->connectionToken_ != nullptr;};
      void deleteConnectionToken() { this->connectionToken_ = nullptr;};
      inline string getConnectionToken() const { DARABONBA_PTR_GET_DEFAULT(connectionToken_, "") };
      inline SessionClusters& setConnectionToken(string connectionToken) { DARABONBA_PTR_SET_VALUE(connectionToken_, connectionToken) };


      // displayReleaseVersion Field Functions 
      bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
      void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
      inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
      inline SessionClusters& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline SessionClusters& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainInner Field Functions 
      bool hasDomainInner() const { return this->domainInner_ != nullptr;};
      void deleteDomainInner() { this->domainInner_ = nullptr;};
      inline string getDomainInner() const { DARABONBA_PTR_GET_DEFAULT(domainInner_, "") };
      inline SessionClusters& setDomainInner(string domainInner) { DARABONBA_PTR_SET_VALUE(domainInner_, domainInner) };


      // draftId Field Functions 
      bool hasDraftId() const { return this->draftId_ != nullptr;};
      void deleteDraftId() { this->draftId_ = nullptr;};
      inline string getDraftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
      inline SessionClusters& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline SessionClusters& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // fusion Field Functions 
      bool hasFusion() const { return this->fusion_ != nullptr;};
      void deleteFusion() { this->fusion_ = nullptr;};
      inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
      inline SessionClusters& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline SessionClusters& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline SessionClusters& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SessionClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publicEndpointEnabled Field Functions 
      bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
      void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
      inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
      inline SessionClusters& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline SessionClusters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // releaseVersion Field Functions 
      bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
      void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
      inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
      inline SessionClusters& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


      // sessionClusterId Field Functions 
      bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
      void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
      inline string getSessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
      inline SessionClusters& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SessionClusters& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SessionClusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateChangeReason Field Functions 
      bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
      void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
      inline const SessionClusters::StateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, SessionClusters::StateChangeReason) };
      inline SessionClusters::StateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, SessionClusters::StateChangeReason) };
      inline SessionClusters& setStateChangeReason(const SessionClusters::StateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
      inline SessionClusters& setStateChangeReason(SessionClusters::StateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SessionClusters& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SessionClusters& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline SessionClusters& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline SessionClusters& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The session configurations, which are equivalent to the configurations of the Spark job.
      shared_ptr<vector<SessionClusters::ApplicationConfigs>> applicationConfigs_ {};
      // The automatic startup configurations.
      shared_ptr<SessionClusters::AutoStartConfiguration> autoStartConfiguration_ {};
      // The configurations of automatic termination.
      shared_ptr<SessionClusters::AutoStopConfiguration> autoStopConfiguration_ {};
      shared_ptr<string> connectionToken_ {};
      // The version of the Spark engine.
      shared_ptr<string> displayReleaseVersion_ {};
      // The public endpoint of the Thrift server.
      shared_ptr<string> domain_ {};
      // The internal endpoint of the Thrift server.
      shared_ptr<string> domainInner_ {};
      // The ID of the job that is associated with the session.
      shared_ptr<string> draftId_ {};
      // The additional metadata of the session.
      shared_ptr<string> extra_ {};
      // Indicates whether the Fusion engine is used for acceleration.
      shared_ptr<bool> fusion_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The session type.
      // 
      // Valid values:
      // 
      // *   NOTEBOOK
      // *   THRIFT
      // *   SQL
      shared_ptr<string> kind_ {};
      // The name of the session.
      shared_ptr<string> name_ {};
      shared_ptr<bool> publicEndpointEnabled_ {};
      // The name of the queue that is used to run the session.
      shared_ptr<string> queueName_ {};
      // The version of EMR Serverless Spark.
      shared_ptr<string> releaseVersion_ {};
      // The session ID.
      shared_ptr<string> sessionClusterId_ {};
      // The start time.
      shared_ptr<int64_t> startTime_ {};
      // The status of the session.
      // 
      // *   Starting
      // *   Running
      // *   Stopping
      // *   Stopped
      // *   Error
      shared_ptr<string> state_ {};
      // The details of the most recent status change of the session.
      shared_ptr<SessionClusters::StateChangeReason> stateChangeReason_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The username.
      shared_ptr<string> userName_ {};
      // The Spark UI of the session.
      shared_ptr<string> webUI_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->sessionClusters_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSessionClustersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSessionClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSessionClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionClusters Field Functions 
    bool hasSessionClusters() const { return this->sessionClusters_ != nullptr;};
    void deleteSessionClusters() { this->sessionClusters_ = nullptr;};
    inline const vector<ListSessionClustersResponseBody::SessionClusters> & getSessionClusters() const { DARABONBA_PTR_GET_CONST(sessionClusters_, vector<ListSessionClustersResponseBody::SessionClusters>) };
    inline vector<ListSessionClustersResponseBody::SessionClusters> getSessionClusters() { DARABONBA_PTR_GET(sessionClusters_, vector<ListSessionClustersResponseBody::SessionClusters>) };
    inline ListSessionClustersResponseBody& setSessionClusters(const vector<ListSessionClustersResponseBody::SessionClusters> & sessionClusters) { DARABONBA_PTR_SET_VALUE(sessionClusters_, sessionClusters) };
    inline ListSessionClustersResponseBody& setSessionClusters(vector<ListSessionClustersResponseBody::SessionClusters> && sessionClusters) { DARABONBA_PTR_SET_RVALUE(sessionClusters_, sessionClusters) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSessionClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sessions.
    shared_ptr<vector<ListSessionClustersResponseBody::SessionClusters>> sessionClusters_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
