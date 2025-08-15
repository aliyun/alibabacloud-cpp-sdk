// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODYSESSIONCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_GETSESSIONCLUSTERRESPONSEBODYSESSIONCLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSessionClusterResponseBodySessionClusterApplicationConfigs.hpp>
#include <alibabacloud/models/GetSessionClusterResponseBodySessionClusterAutoStartConfiguration.hpp>
#include <alibabacloud/models/GetSessionClusterResponseBodySessionClusterAutoStopConfiguration.hpp>
#include <alibabacloud/models/GetSessionClusterResponseBodySessionClusterStateChangeReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetSessionClusterResponseBodySessionCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSessionClusterResponseBodySessionCluster& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSessionClusterResponseBodySessionCluster& obj) { 
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
    GetSessionClusterResponseBodySessionCluster() = default ;
    GetSessionClusterResponseBodySessionCluster(const GetSessionClusterResponseBodySessionCluster &) = default ;
    GetSessionClusterResponseBodySessionCluster(GetSessionClusterResponseBodySessionCluster &&) = default ;
    GetSessionClusterResponseBodySessionCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSessionClusterResponseBodySessionCluster() = default ;
    GetSessionClusterResponseBodySessionCluster& operator=(const GetSessionClusterResponseBodySessionCluster &) = default ;
    GetSessionClusterResponseBodySessionCluster& operator=(GetSessionClusterResponseBodySessionCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationConfigs_ != nullptr
        && this->autoStartConfiguration_ != nullptr && this->autoStopConfiguration_ != nullptr && this->connectionToken_ != nullptr && this->displayReleaseVersion_ != nullptr && this->domain_ != nullptr
        && this->domainInner_ != nullptr && this->draftId_ != nullptr && this->envId_ != nullptr && this->extra_ != nullptr && this->fusion_ != nullptr
        && this->gmtCreate_ != nullptr && this->kind_ != nullptr && this->name_ != nullptr && this->publicEndpointEnabled_ != nullptr && this->queueName_ != nullptr
        && this->releaseVersion_ != nullptr && this->sessionClusterId_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr && this->stateChangeReason_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr && this->webUI_ != nullptr && this->workspaceId_ != nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs>) };
    inline vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs>) };
    inline GetSessionClusterResponseBodySessionCluster& setApplicationConfigs(const vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline GetSessionClusterResponseBodySessionCluster& setApplicationConfigs(vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // autoStartConfiguration Field Functions 
    bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
    void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
    inline const Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration & autoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration) };
    inline Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration autoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration) };
    inline GetSessionClusterResponseBodySessionCluster& setAutoStartConfiguration(const Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
    inline GetSessionClusterResponseBodySessionCluster& setAutoStartConfiguration(Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


    // autoStopConfiguration Field Functions 
    bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
    void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
    inline const Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration & autoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration) };
    inline Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration autoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration) };
    inline GetSessionClusterResponseBodySessionCluster& setAutoStopConfiguration(const Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
    inline GetSessionClusterResponseBodySessionCluster& setAutoStopConfiguration(Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


    // connectionToken Field Functions 
    bool hasConnectionToken() const { return this->connectionToken_ != nullptr;};
    void deleteConnectionToken() { this->connectionToken_ = nullptr;};
    inline string connectionToken() const { DARABONBA_PTR_GET_DEFAULT(connectionToken_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setConnectionToken(string connectionToken) { DARABONBA_PTR_SET_VALUE(connectionToken_, connectionToken) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainInner Field Functions 
    bool hasDomainInner() const { return this->domainInner_ != nullptr;};
    void deleteDomainInner() { this->domainInner_ = nullptr;};
    inline string domainInner() const { DARABONBA_PTR_GET_DEFAULT(domainInner_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setDomainInner(string domainInner) { DARABONBA_PTR_SET_VALUE(domainInner_, domainInner) };


    // draftId Field Functions 
    bool hasDraftId() const { return this->draftId_ != nullptr;};
    void deleteDraftId() { this->draftId_ = nullptr;};
    inline string draftId() const { DARABONBA_PTR_GET_DEFAULT(draftId_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setDraftId(string draftId) { DARABONBA_PTR_SET_VALUE(draftId_, draftId) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline GetSessionClusterResponseBodySessionCluster& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetSessionClusterResponseBodySessionCluster& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool publicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline GetSessionClusterResponseBodySessionCluster& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // sessionClusterId Field Functions 
    bool hasSessionClusterId() const { return this->sessionClusterId_ != nullptr;};
    void deleteSessionClusterId() { this->sessionClusterId_ = nullptr;};
    inline string sessionClusterId() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterId_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setSessionClusterId(string sessionClusterId) { DARABONBA_PTR_SET_VALUE(sessionClusterId_, sessionClusterId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetSessionClusterResponseBodySessionCluster& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const Models::GetSessionClusterResponseBodySessionClusterStateChangeReason & stateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, Models::GetSessionClusterResponseBodySessionClusterStateChangeReason) };
    inline Models::GetSessionClusterResponseBodySessionClusterStateChangeReason stateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, Models::GetSessionClusterResponseBodySessionClusterStateChangeReason) };
    inline GetSessionClusterResponseBodySessionCluster& setStateChangeReason(const Models::GetSessionClusterResponseBodySessionClusterStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline GetSessionClusterResponseBodySessionCluster& setStateChangeReason(Models::GetSessionClusterResponseBodySessionClusterStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // webUI Field Functions 
    bool hasWebUI() const { return this->webUI_ != nullptr;};
    void deleteWebUI() { this->webUI_ = nullptr;};
    inline string webUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetSessionClusterResponseBodySessionCluster& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The Spark configurations.
    std::shared_ptr<vector<Models::GetSessionClusterResponseBodySessionClusterApplicationConfigs>> applicationConfigs_ = nullptr;
    // Indicates whether automatic startup is enabled.
    std::shared_ptr<Models::GetSessionClusterResponseBodySessionClusterAutoStartConfiguration> autoStartConfiguration_ = nullptr;
    // Indicates whether automatic termination is enabled.
    std::shared_ptr<Models::GetSessionClusterResponseBodySessionClusterAutoStopConfiguration> autoStopConfiguration_ = nullptr;
    std::shared_ptr<string> connectionToken_ = nullptr;
    // The version of the Spark engine.
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    // The domain name to which the Spark UI of the session belongs.
    std::shared_ptr<string> domain_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> domainInner_ = nullptr;
    // The ID of the job that is associated with the session.
    std::shared_ptr<string> draftId_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> envId_ = nullptr;
    // The additional metadata of the session.
    std::shared_ptr<string> extra_ = nullptr;
    // Indicates whether the Fusion engine is used for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The type of the job. This parameter is required and cannot be modified after the deployment is created. Valid values:
    // 
    // *   SQLSCRIPT
    // *   JAR
    // *   PYTHON
    std::shared_ptr<string> kind_ = nullptr;
    // The name of the session.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> publicEndpointEnabled_ = nullptr;
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
    // The version of Serverless Spark.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionClusterId_ = nullptr;
    // The start time.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The job status.
    // 
    // *   Starting
    // *   Running
    // *   Stopping
    // *   Stopped
    // *   Error
    std::shared_ptr<string> state_ = nullptr;
    // The reason of the job status change.
    std::shared_ptr<Models::GetSessionClusterResponseBodySessionClusterStateChangeReason> stateChangeReason_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The name of the account that is used to create the session.
    std::shared_ptr<string> userName_ = nullptr;
    // The Spark UI of the session.
    std::shared_ptr<string> webUI_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
