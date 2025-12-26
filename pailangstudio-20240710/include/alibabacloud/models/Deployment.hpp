// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentChatHistoryConfig.hpp>
#include <alibabacloud/models/DeploymentContentModerationConfig.hpp>
#include <alibabacloud/models/DeploymentCredentialConfig.hpp>
#include <vector>
#include <alibabacloud/models/DeploymentDataSources.hpp>
#include <alibabacloud/models/DeploymentEcsSpec.hpp>
#include <alibabacloud/models/DeploymentEnvs.hpp>
#include <alibabacloud/models/DeploymentLabels.hpp>
#include <alibabacloud/models/DeploymentUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Deployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_TO_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkDir, workDir_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryConfig, chatHistoryConfig_);
      DARABONBA_PTR_FROM_JSON(ContentModerationConfig, contentModerationConfig_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(DeploymentConfig, deploymentConfig_);
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(DeploymentStages, deploymentStages_);
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(EnableTrace, enableTrace_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceGroup, serviceGroup_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkDir, workDir_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Deployment() = default ;
    Deployment(const Deployment &) = default ;
    Deployment(Deployment &&) = default ;
    Deployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Deployment() = default ;
    Deployment& operator=(const Deployment &) = default ;
    Deployment& operator=(Deployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->chatHistoryConfig_ == nullptr && return this->contentModerationConfig_ == nullptr && return this->creator_ == nullptr && return this->credentialConfig_ == nullptr && return this->dataSources_ == nullptr
        && return this->deploymentConfig_ == nullptr && return this->deploymentId_ == nullptr && return this->deploymentStages_ == nullptr && return this->deploymentStatus_ == nullptr && return this->description_ == nullptr
        && return this->ecsSpec_ == nullptr && return this->enableTrace_ == nullptr && return this->envs_ == nullptr && return this->errorMessage_ == nullptr && return this->gmtCreateTime_ == nullptr
        && return this->gmtModifiedTime_ == nullptr && return this->labels_ == nullptr && return this->operationType_ == nullptr && return this->resourceId_ == nullptr && return this->resourceSnapshotId_ == nullptr
        && return this->resourceType_ == nullptr && return this->serviceGroup_ == nullptr && return this->serviceName_ == nullptr && return this->userVpc_ == nullptr && return this->workDir_ == nullptr
        && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Deployment& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // chatHistoryConfig Field Functions 
    bool hasChatHistoryConfig() const { return this->chatHistoryConfig_ != nullptr;};
    void deleteChatHistoryConfig() { this->chatHistoryConfig_ = nullptr;};
    inline const DeploymentChatHistoryConfig & chatHistoryConfig() const { DARABONBA_PTR_GET_CONST(chatHistoryConfig_, DeploymentChatHistoryConfig) };
    inline DeploymentChatHistoryConfig chatHistoryConfig() { DARABONBA_PTR_GET(chatHistoryConfig_, DeploymentChatHistoryConfig) };
    inline Deployment& setChatHistoryConfig(const DeploymentChatHistoryConfig & chatHistoryConfig) { DARABONBA_PTR_SET_VALUE(chatHistoryConfig_, chatHistoryConfig) };
    inline Deployment& setChatHistoryConfig(DeploymentChatHistoryConfig && chatHistoryConfig) { DARABONBA_PTR_SET_RVALUE(chatHistoryConfig_, chatHistoryConfig) };


    // contentModerationConfig Field Functions 
    bool hasContentModerationConfig() const { return this->contentModerationConfig_ != nullptr;};
    void deleteContentModerationConfig() { this->contentModerationConfig_ = nullptr;};
    inline const DeploymentContentModerationConfig & contentModerationConfig() const { DARABONBA_PTR_GET_CONST(contentModerationConfig_, DeploymentContentModerationConfig) };
    inline DeploymentContentModerationConfig contentModerationConfig() { DARABONBA_PTR_GET(contentModerationConfig_, DeploymentContentModerationConfig) };
    inline Deployment& setContentModerationConfig(const DeploymentContentModerationConfig & contentModerationConfig) { DARABONBA_PTR_SET_VALUE(contentModerationConfig_, contentModerationConfig) };
    inline Deployment& setContentModerationConfig(DeploymentContentModerationConfig && contentModerationConfig) { DARABONBA_PTR_SET_RVALUE(contentModerationConfig_, contentModerationConfig) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Deployment& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const DeploymentCredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, DeploymentCredentialConfig) };
    inline DeploymentCredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, DeploymentCredentialConfig) };
    inline Deployment& setCredentialConfig(const DeploymentCredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline Deployment& setCredentialConfig(DeploymentCredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<DeploymentDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<DeploymentDataSources>) };
    inline vector<DeploymentDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<DeploymentDataSources>) };
    inline Deployment& setDataSources(const vector<DeploymentDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline Deployment& setDataSources(vector<DeploymentDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // deploymentConfig Field Functions 
    bool hasDeploymentConfig() const { return this->deploymentConfig_ != nullptr;};
    void deleteDeploymentConfig() { this->deploymentConfig_ = nullptr;};
    inline string deploymentConfig() const { DARABONBA_PTR_GET_DEFAULT(deploymentConfig_, "") };
    inline Deployment& setDeploymentConfig(string deploymentConfig) { DARABONBA_PTR_SET_VALUE(deploymentConfig_, deploymentConfig) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Deployment& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentStages Field Functions 
    bool hasDeploymentStages() const { return this->deploymentStages_ != nullptr;};
    void deleteDeploymentStages() { this->deploymentStages_ = nullptr;};
    inline string deploymentStages() const { DARABONBA_PTR_GET_DEFAULT(deploymentStages_, "") };
    inline Deployment& setDeploymentStages(string deploymentStages) { DARABONBA_PTR_SET_VALUE(deploymentStages_, deploymentStages) };


    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline string deploymentStatus() const { DARABONBA_PTR_GET_DEFAULT(deploymentStatus_, "") };
    inline Deployment& setDeploymentStatus(string deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Deployment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline const DeploymentEcsSpec & ecsSpec() const { DARABONBA_PTR_GET_CONST(ecsSpec_, DeploymentEcsSpec) };
    inline DeploymentEcsSpec ecsSpec() { DARABONBA_PTR_GET(ecsSpec_, DeploymentEcsSpec) };
    inline Deployment& setEcsSpec(const DeploymentEcsSpec & ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };
    inline Deployment& setEcsSpec(DeploymentEcsSpec && ecsSpec) { DARABONBA_PTR_SET_RVALUE(ecsSpec_, ecsSpec) };


    // enableTrace Field Functions 
    bool hasEnableTrace() const { return this->enableTrace_ != nullptr;};
    void deleteEnableTrace() { this->enableTrace_ = nullptr;};
    inline bool enableTrace() const { DARABONBA_PTR_GET_DEFAULT(enableTrace_, false) };
    inline Deployment& setEnableTrace(bool enableTrace) { DARABONBA_PTR_SET_VALUE(enableTrace_, enableTrace) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<DeploymentEnvs> & envs() const { DARABONBA_PTR_GET_CONST(envs_, vector<DeploymentEnvs>) };
    inline vector<DeploymentEnvs> envs() { DARABONBA_PTR_GET(envs_, vector<DeploymentEnvs>) };
    inline Deployment& setEnvs(const vector<DeploymentEnvs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline Deployment& setEnvs(vector<DeploymentEnvs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline Deployment& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Deployment& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Deployment& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<DeploymentLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<DeploymentLabels>) };
    inline vector<DeploymentLabels> labels() { DARABONBA_PTR_GET(labels_, vector<DeploymentLabels>) };
    inline Deployment& setLabels(const vector<DeploymentLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Deployment& setLabels(vector<DeploymentLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline Deployment& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline Deployment& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSnapshotId Field Functions 
    bool hasResourceSnapshotId() const { return this->resourceSnapshotId_ != nullptr;};
    void deleteResourceSnapshotId() { this->resourceSnapshotId_ = nullptr;};
    inline string resourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(resourceSnapshotId_, "") };
    inline Deployment& setResourceSnapshotId(string resourceSnapshotId) { DARABONBA_PTR_SET_VALUE(resourceSnapshotId_, resourceSnapshotId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Deployment& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceGroup Field Functions 
    bool hasServiceGroup() const { return this->serviceGroup_ != nullptr;};
    void deleteServiceGroup() { this->serviceGroup_ = nullptr;};
    inline string serviceGroup() const { DARABONBA_PTR_GET_DEFAULT(serviceGroup_, "") };
    inline Deployment& setServiceGroup(string serviceGroup) { DARABONBA_PTR_SET_VALUE(serviceGroup_, serviceGroup) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline Deployment& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const DeploymentUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, DeploymentUserVpc) };
    inline DeploymentUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, DeploymentUserVpc) };
    inline Deployment& setUserVpc(const DeploymentUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline Deployment& setUserVpc(DeploymentUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workDir Field Functions 
    bool hasWorkDir() const { return this->workDir_ != nullptr;};
    void deleteWorkDir() { this->workDir_ = nullptr;};
    inline string workDir() const { DARABONBA_PTR_GET_DEFAULT(workDir_, "") };
    inline Deployment& setWorkDir(string workDir) { DARABONBA_PTR_SET_VALUE(workDir_, workDir) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Deployment& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<DeploymentChatHistoryConfig> chatHistoryConfig_ = nullptr;
    std::shared_ptr<DeploymentContentModerationConfig> contentModerationConfig_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<DeploymentCredentialConfig> credentialConfig_ = nullptr;
    std::shared_ptr<vector<DeploymentDataSources>> dataSources_ = nullptr;
    std::shared_ptr<string> deploymentConfig_ = nullptr;
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> deploymentStages_ = nullptr;
    std::shared_ptr<string> deploymentStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<DeploymentEcsSpec> ecsSpec_ = nullptr;
    std::shared_ptr<bool> enableTrace_ = nullptr;
    std::shared_ptr<vector<DeploymentEnvs>> envs_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<vector<DeploymentLabels>> labels_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceSnapshotId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> serviceGroup_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<DeploymentUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workDir_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
