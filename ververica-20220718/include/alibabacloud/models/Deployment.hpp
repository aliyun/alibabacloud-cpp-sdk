// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Artifact.hpp>
#include <alibabacloud/models/BatchResourceSetting.hpp>
#include <alibabacloud/models/BriefDeploymentTarget.hpp>
#include <alibabacloud/models/JobSummary.hpp>
#include <vector>
#include <alibabacloud/models/LocalVariable.hpp>
#include <alibabacloud/models/Logging.hpp>
#include <alibabacloud/models/StreamingResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Deployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
      DARABONBA_PTR_TO_JSON(artifact, artifact_);
      DARABONBA_PTR_TO_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentHasChanged, deploymentHasChanged_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(deploymentTarget, deploymentTarget_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(executionMode, executionMode_);
      DARABONBA_ANY_TO_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_TO_JSON(jobSummary, jobSummary_);
      DARABONBA_ANY_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(localVariables, localVariables_);
      DARABONBA_PTR_TO_JSON(logging, logging_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(referencedDeploymentDraftId, referencedDeploymentDraftId_);
      DARABONBA_PTR_TO_JSON(streamingResourceSetting, streamingResourceSetting_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
      DARABONBA_PTR_FROM_JSON(artifact, artifact_);
      DARABONBA_PTR_FROM_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentHasChanged, deploymentHasChanged_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(deploymentTarget, deploymentTarget_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(executionMode, executionMode_);
      DARABONBA_ANY_FROM_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_FROM_JSON(jobSummary, jobSummary_);
      DARABONBA_ANY_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(localVariables, localVariables_);
      DARABONBA_PTR_FROM_JSON(logging, logging_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(referencedDeploymentDraftId, referencedDeploymentDraftId_);
      DARABONBA_PTR_FROM_JSON(streamingResourceSetting, streamingResourceSetting_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
    virtual bool empty() const override { return this->artifact_ == nullptr
        && return this->batchResourceSetting_ == nullptr && return this->createdAt_ == nullptr && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->deploymentHasChanged_ == nullptr
        && return this->deploymentId_ == nullptr && return this->deploymentTarget_ == nullptr && return this->description_ == nullptr && return this->engineVersion_ == nullptr && return this->executionMode_ == nullptr
        && return this->flinkConf_ == nullptr && return this->jobSummary_ == nullptr && return this->labels_ == nullptr && return this->localVariables_ == nullptr && return this->logging_ == nullptr
        && return this->modifiedAt_ == nullptr && return this->modifier_ == nullptr && return this->modifierName_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->referencedDeploymentDraftId_ == nullptr && return this->streamingResourceSetting_ == nullptr && return this->workspace_ == nullptr; };
    // artifact Field Functions 
    bool hasArtifact() const { return this->artifact_ != nullptr;};
    void deleteArtifact() { this->artifact_ = nullptr;};
    inline const Artifact & artifact() const { DARABONBA_PTR_GET_CONST(artifact_, Artifact) };
    inline Artifact artifact() { DARABONBA_PTR_GET(artifact_, Artifact) };
    inline Deployment& setArtifact(const Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
    inline Deployment& setArtifact(Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


    // batchResourceSetting Field Functions 
    bool hasBatchResourceSetting() const { return this->batchResourceSetting_ != nullptr;};
    void deleteBatchResourceSetting() { this->batchResourceSetting_ = nullptr;};
    inline const BatchResourceSetting & batchResourceSetting() const { DARABONBA_PTR_GET_CONST(batchResourceSetting_, BatchResourceSetting) };
    inline BatchResourceSetting batchResourceSetting() { DARABONBA_PTR_GET(batchResourceSetting_, BatchResourceSetting) };
    inline Deployment& setBatchResourceSetting(const BatchResourceSetting & batchResourceSetting) { DARABONBA_PTR_SET_VALUE(batchResourceSetting_, batchResourceSetting) };
    inline Deployment& setBatchResourceSetting(BatchResourceSetting && batchResourceSetting) { DARABONBA_PTR_SET_RVALUE(batchResourceSetting_, batchResourceSetting) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Deployment& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Deployment& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline Deployment& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentHasChanged Field Functions 
    bool hasDeploymentHasChanged() const { return this->deploymentHasChanged_ != nullptr;};
    void deleteDeploymentHasChanged() { this->deploymentHasChanged_ = nullptr;};
    inline bool deploymentHasChanged() const { DARABONBA_PTR_GET_DEFAULT(deploymentHasChanged_, false) };
    inline Deployment& setDeploymentHasChanged(bool deploymentHasChanged) { DARABONBA_PTR_SET_VALUE(deploymentHasChanged_, deploymentHasChanged) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Deployment& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentTarget Field Functions 
    bool hasDeploymentTarget() const { return this->deploymentTarget_ != nullptr;};
    void deleteDeploymentTarget() { this->deploymentTarget_ = nullptr;};
    inline const BriefDeploymentTarget & deploymentTarget() const { DARABONBA_PTR_GET_CONST(deploymentTarget_, BriefDeploymentTarget) };
    inline BriefDeploymentTarget deploymentTarget() { DARABONBA_PTR_GET(deploymentTarget_, BriefDeploymentTarget) };
    inline Deployment& setDeploymentTarget(const BriefDeploymentTarget & deploymentTarget) { DARABONBA_PTR_SET_VALUE(deploymentTarget_, deploymentTarget) };
    inline Deployment& setDeploymentTarget(BriefDeploymentTarget && deploymentTarget) { DARABONBA_PTR_SET_RVALUE(deploymentTarget_, deploymentTarget) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Deployment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline Deployment& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline Deployment& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // flinkConf Field Functions 
    bool hasFlinkConf() const { return this->flinkConf_ != nullptr;};
    void deleteFlinkConf() { this->flinkConf_ = nullptr;};
    inline     const Darabonba::Json & flinkConf() const { DARABONBA_GET(flinkConf_) };
    Darabonba::Json & flinkConf() { DARABONBA_GET(flinkConf_) };
    inline Deployment& setFlinkConf(const Darabonba::Json & flinkConf) { DARABONBA_SET_VALUE(flinkConf_, flinkConf) };
    inline Deployment& setFlinkConf(Darabonba::Json & flinkConf) { DARABONBA_SET_RVALUE(flinkConf_, flinkConf) };


    // jobSummary Field Functions 
    bool hasJobSummary() const { return this->jobSummary_ != nullptr;};
    void deleteJobSummary() { this->jobSummary_ = nullptr;};
    inline const JobSummary & jobSummary() const { DARABONBA_PTR_GET_CONST(jobSummary_, JobSummary) };
    inline JobSummary jobSummary() { DARABONBA_PTR_GET(jobSummary_, JobSummary) };
    inline Deployment& setJobSummary(const JobSummary & jobSummary) { DARABONBA_PTR_SET_VALUE(jobSummary_, jobSummary) };
    inline Deployment& setJobSummary(JobSummary && jobSummary) { DARABONBA_PTR_SET_RVALUE(jobSummary_, jobSummary) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline Deployment& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline Deployment& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // localVariables Field Functions 
    bool hasLocalVariables() const { return this->localVariables_ != nullptr;};
    void deleteLocalVariables() { this->localVariables_ = nullptr;};
    inline const vector<LocalVariable> & localVariables() const { DARABONBA_PTR_GET_CONST(localVariables_, vector<LocalVariable>) };
    inline vector<LocalVariable> localVariables() { DARABONBA_PTR_GET(localVariables_, vector<LocalVariable>) };
    inline Deployment& setLocalVariables(const vector<LocalVariable> & localVariables) { DARABONBA_PTR_SET_VALUE(localVariables_, localVariables) };
    inline Deployment& setLocalVariables(vector<LocalVariable> && localVariables) { DARABONBA_PTR_SET_RVALUE(localVariables_, localVariables) };


    // logging Field Functions 
    bool hasLogging() const { return this->logging_ != nullptr;};
    void deleteLogging() { this->logging_ = nullptr;};
    inline const Logging & logging() const { DARABONBA_PTR_GET_CONST(logging_, Logging) };
    inline Logging logging() { DARABONBA_PTR_GET(logging_, Logging) };
    inline Deployment& setLogging(const Logging & logging) { DARABONBA_PTR_SET_VALUE(logging_, logging) };
    inline Deployment& setLogging(Logging && logging) { DARABONBA_PTR_SET_RVALUE(logging_, logging) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline Deployment& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline Deployment& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline Deployment& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Deployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Deployment& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // referencedDeploymentDraftId Field Functions 
    bool hasReferencedDeploymentDraftId() const { return this->referencedDeploymentDraftId_ != nullptr;};
    void deleteReferencedDeploymentDraftId() { this->referencedDeploymentDraftId_ = nullptr;};
    inline string referencedDeploymentDraftId() const { DARABONBA_PTR_GET_DEFAULT(referencedDeploymentDraftId_, "") };
    inline Deployment& setReferencedDeploymentDraftId(string referencedDeploymentDraftId) { DARABONBA_PTR_SET_VALUE(referencedDeploymentDraftId_, referencedDeploymentDraftId) };


    // streamingResourceSetting Field Functions 
    bool hasStreamingResourceSetting() const { return this->streamingResourceSetting_ != nullptr;};
    void deleteStreamingResourceSetting() { this->streamingResourceSetting_ = nullptr;};
    inline const StreamingResourceSetting & streamingResourceSetting() const { DARABONBA_PTR_GET_CONST(streamingResourceSetting_, StreamingResourceSetting) };
    inline StreamingResourceSetting streamingResourceSetting() { DARABONBA_PTR_GET(streamingResourceSetting_, StreamingResourceSetting) };
    inline Deployment& setStreamingResourceSetting(const StreamingResourceSetting & streamingResourceSetting) { DARABONBA_PTR_SET_VALUE(streamingResourceSetting_, streamingResourceSetting) };
    inline Deployment& setStreamingResourceSetting(StreamingResourceSetting && streamingResourceSetting) { DARABONBA_PTR_SET_RVALUE(streamingResourceSetting_, streamingResourceSetting) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline Deployment& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<Artifact> artifact_ = nullptr;
    std::shared_ptr<BatchResourceSetting> batchResourceSetting_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<bool> deploymentHasChanged_ = nullptr;
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<BriefDeploymentTarget> deploymentTarget_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> executionMode_ = nullptr;
    Darabonba::Json flinkConf_ = nullptr;
    std::shared_ptr<JobSummary> jobSummary_ = nullptr;
    Darabonba::Json labels_ = nullptr;
    std::shared_ptr<vector<LocalVariable>> localVariables_ = nullptr;
    std::shared_ptr<Logging> logging_ = nullptr;
    std::shared_ptr<string> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> referencedDeploymentDraftId_ = nullptr;
    std::shared_ptr<StreamingResourceSetting> streamingResourceSetting_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
