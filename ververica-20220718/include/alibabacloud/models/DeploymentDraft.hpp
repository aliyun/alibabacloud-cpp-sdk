// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTDRAFT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTDRAFT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Artifact.hpp>
#include <vector>
#include <alibabacloud/models/LocalVariable.hpp>
#include <alibabacloud/models/Lock.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeploymentDraft : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentDraft& obj) { 
      DARABONBA_PTR_TO_JSON(artifact, artifact_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_TO_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(executionMode, executionMode_);
      DARABONBA_ANY_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(localVariables, localVariables_);
      DARABONBA_PTR_TO_JSON(lock, lock_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(referencedDeploymentId, referencedDeploymentId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentDraft& obj) { 
      DARABONBA_PTR_FROM_JSON(artifact, artifact_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentDraftId, deploymentDraftId_);
      DARABONBA_PTR_FROM_JSON(engineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(executionMode, executionMode_);
      DARABONBA_ANY_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(localVariables, localVariables_);
      DARABONBA_PTR_FROM_JSON(lock, lock_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(referencedDeploymentId, referencedDeploymentId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    DeploymentDraft() = default ;
    DeploymentDraft(const DeploymentDraft &) = default ;
    DeploymentDraft(DeploymentDraft &&) = default ;
    DeploymentDraft(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentDraft() = default ;
    DeploymentDraft& operator=(const DeploymentDraft &) = default ;
    DeploymentDraft& operator=(DeploymentDraft &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifact_ == nullptr
        && return this->createdAt_ == nullptr && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->deploymentDraftId_ == nullptr && return this->engineVersion_ == nullptr
        && return this->executionMode_ == nullptr && return this->labels_ == nullptr && return this->localVariables_ == nullptr && return this->lock_ == nullptr && return this->modifiedAt_ == nullptr
        && return this->modifier_ == nullptr && return this->modifierName_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->parentId_ == nullptr
        && return this->referencedDeploymentId_ == nullptr && return this->workspace_ == nullptr; };
    // artifact Field Functions 
    bool hasArtifact() const { return this->artifact_ != nullptr;};
    void deleteArtifact() { this->artifact_ = nullptr;};
    inline const Artifact & artifact() const { DARABONBA_PTR_GET_CONST(artifact_, Artifact) };
    inline Artifact artifact() { DARABONBA_PTR_GET(artifact_, Artifact) };
    inline DeploymentDraft& setArtifact(const Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
    inline DeploymentDraft& setArtifact(Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline DeploymentDraft& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DeploymentDraft& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline DeploymentDraft& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentDraftId Field Functions 
    bool hasDeploymentDraftId() const { return this->deploymentDraftId_ != nullptr;};
    void deleteDeploymentDraftId() { this->deploymentDraftId_ = nullptr;};
    inline string deploymentDraftId() const { DARABONBA_PTR_GET_DEFAULT(deploymentDraftId_, "") };
    inline DeploymentDraft& setDeploymentDraftId(string deploymentDraftId) { DARABONBA_PTR_SET_VALUE(deploymentDraftId_, deploymentDraftId) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DeploymentDraft& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline DeploymentDraft& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline     const Darabonba::Json & labels() const { DARABONBA_GET(labels_) };
    Darabonba::Json & labels() { DARABONBA_GET(labels_) };
    inline DeploymentDraft& setLabels(const Darabonba::Json & labels) { DARABONBA_SET_VALUE(labels_, labels) };
    inline DeploymentDraft& setLabels(Darabonba::Json & labels) { DARABONBA_SET_RVALUE(labels_, labels) };


    // localVariables Field Functions 
    bool hasLocalVariables() const { return this->localVariables_ != nullptr;};
    void deleteLocalVariables() { this->localVariables_ = nullptr;};
    inline const vector<LocalVariable> & localVariables() const { DARABONBA_PTR_GET_CONST(localVariables_, vector<LocalVariable>) };
    inline vector<LocalVariable> localVariables() { DARABONBA_PTR_GET(localVariables_, vector<LocalVariable>) };
    inline DeploymentDraft& setLocalVariables(const vector<LocalVariable> & localVariables) { DARABONBA_PTR_SET_VALUE(localVariables_, localVariables) };
    inline DeploymentDraft& setLocalVariables(vector<LocalVariable> && localVariables) { DARABONBA_PTR_SET_RVALUE(localVariables_, localVariables) };


    // lock Field Functions 
    bool hasLock() const { return this->lock_ != nullptr;};
    void deleteLock() { this->lock_ = nullptr;};
    inline const Lock & lock() const { DARABONBA_PTR_GET_CONST(lock_, Lock) };
    inline Lock lock() { DARABONBA_PTR_GET(lock_, Lock) };
    inline DeploymentDraft& setLock(const Lock & lock) { DARABONBA_PTR_SET_VALUE(lock_, lock) };
    inline DeploymentDraft& setLock(Lock && lock) { DARABONBA_PTR_SET_RVALUE(lock_, lock) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline int64_t modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, 0L) };
    inline DeploymentDraft& setModifiedAt(int64_t modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline DeploymentDraft& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline DeploymentDraft& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeploymentDraft& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeploymentDraft& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DeploymentDraft& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // referencedDeploymentId Field Functions 
    bool hasReferencedDeploymentId() const { return this->referencedDeploymentId_ != nullptr;};
    void deleteReferencedDeploymentId() { this->referencedDeploymentId_ = nullptr;};
    inline string referencedDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(referencedDeploymentId_, "") };
    inline DeploymentDraft& setReferencedDeploymentId(string referencedDeploymentId) { DARABONBA_PTR_SET_VALUE(referencedDeploymentId_, referencedDeploymentId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline DeploymentDraft& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<Artifact> artifact_ = nullptr;
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> deploymentDraftId_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> executionMode_ = nullptr;
    Darabonba::Json labels_ = nullptr;
    std::shared_ptr<vector<LocalVariable>> localVariables_ = nullptr;
    std::shared_ptr<Lock> lock_ = nullptr;
    std::shared_ptr<int64_t> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> referencedDeploymentId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
