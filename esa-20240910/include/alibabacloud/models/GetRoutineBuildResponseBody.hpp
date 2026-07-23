// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEBUILDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEBUILDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineBuildResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineBuildResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_TO_JSON(CommitId, commitId_);
      DARABONBA_PTR_TO_JSON(CommitMessage, commitMessage_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_TO_JSON(Repository, repository_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_TO_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineBuildResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
      DARABONBA_PTR_FROM_JSON(CommitMessage, commitMessage_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_FROM_JSON(Repository, repository_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_FROM_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetRoutineBuildResponseBody() = default ;
    GetRoutineBuildResponseBody(const GetRoutineBuildResponseBody &) = default ;
    GetRoutineBuildResponseBody(GetRoutineBuildResponseBody &&) = default ;
    GetRoutineBuildResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineBuildResponseBody() = default ;
    GetRoutineBuildResponseBody& operator=(const GetRoutineBuildResponseBody &) = default ;
    GetRoutineBuildResponseBody& operator=(GetRoutineBuildResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsDirectory_ == nullptr
        && this->branch_ == nullptr && this->buildCommand_ == nullptr && this->commitId_ == nullptr && this->commitMessage_ == nullptr && this->createTime_ == nullptr
        && this->environmentVariables_ == nullptr && this->gitAccountId_ == nullptr && this->id_ == nullptr && this->installCommand_ == nullptr && this->isPrivate_ == nullptr
        && this->nodeVersion_ == nullptr && this->pipelineId_ == nullptr && this->pipelineRunId_ == nullptr && this->productionBranch_ == nullptr && this->repository_ == nullptr
        && this->requestId_ == nullptr && this->rootDirectory_ == nullptr && this->routineEntry_ == nullptr && this->routineName_ == nullptr && this->status_ == nullptr
        && this->templateName_ == nullptr && this->updateTime_ == nullptr; };
    // assetsDirectory Field Functions 
    bool hasAssetsDirectory() const { return this->assetsDirectory_ != nullptr;};
    void deleteAssetsDirectory() { this->assetsDirectory_ = nullptr;};
    inline string getAssetsDirectory() const { DARABONBA_PTR_GET_DEFAULT(assetsDirectory_, "") };
    inline GetRoutineBuildResponseBody& setAssetsDirectory(string assetsDirectory) { DARABONBA_PTR_SET_VALUE(assetsDirectory_, assetsDirectory) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline GetRoutineBuildResponseBody& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // buildCommand Field Functions 
    bool hasBuildCommand() const { return this->buildCommand_ != nullptr;};
    void deleteBuildCommand() { this->buildCommand_ = nullptr;};
    inline string getBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(buildCommand_, "") };
    inline GetRoutineBuildResponseBody& setBuildCommand(string buildCommand) { DARABONBA_PTR_SET_VALUE(buildCommand_, buildCommand) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string getCommitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline GetRoutineBuildResponseBody& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // commitMessage Field Functions 
    bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
    void deleteCommitMessage() { this->commitMessage_ = nullptr;};
    inline string getCommitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
    inline GetRoutineBuildResponseBody& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineBuildResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline GetRoutineBuildResponseBody& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline GetRoutineBuildResponseBody& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gitAccountId Field Functions 
    bool hasGitAccountId() const { return this->gitAccountId_ != nullptr;};
    void deleteGitAccountId() { this->gitAccountId_ = nullptr;};
    inline int64_t getGitAccountId() const { DARABONBA_PTR_GET_DEFAULT(gitAccountId_, 0L) };
    inline GetRoutineBuildResponseBody& setGitAccountId(int64_t gitAccountId) { DARABONBA_PTR_SET_VALUE(gitAccountId_, gitAccountId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetRoutineBuildResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installCommand Field Functions 
    bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
    void deleteInstallCommand() { this->installCommand_ = nullptr;};
    inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
    inline GetRoutineBuildResponseBody& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline GetRoutineBuildResponseBody& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // nodeVersion Field Functions 
    bool hasNodeVersion() const { return this->nodeVersion_ != nullptr;};
    void deleteNodeVersion() { this->nodeVersion_ = nullptr;};
    inline string getNodeVersion() const { DARABONBA_PTR_GET_DEFAULT(nodeVersion_, "") };
    inline GetRoutineBuildResponseBody& setNodeVersion(string nodeVersion) { DARABONBA_PTR_SET_VALUE(nodeVersion_, nodeVersion) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline GetRoutineBuildResponseBody& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline int64_t getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
    inline GetRoutineBuildResponseBody& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // productionBranch Field Functions 
    bool hasProductionBranch() const { return this->productionBranch_ != nullptr;};
    void deleteProductionBranch() { this->productionBranch_ = nullptr;};
    inline string getProductionBranch() const { DARABONBA_PTR_GET_DEFAULT(productionBranch_, "") };
    inline GetRoutineBuildResponseBody& setProductionBranch(string productionBranch) { DARABONBA_PTR_SET_VALUE(productionBranch_, productionBranch) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline GetRoutineBuildResponseBody& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineBuildResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline GetRoutineBuildResponseBody& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // routineEntry Field Functions 
    bool hasRoutineEntry() const { return this->routineEntry_ != nullptr;};
    void deleteRoutineEntry() { this->routineEntry_ = nullptr;};
    inline string getRoutineEntry() const { DARABONBA_PTR_GET_DEFAULT(routineEntry_, "") };
    inline GetRoutineBuildResponseBody& setRoutineEntry(string routineEntry) { DARABONBA_PTR_SET_VALUE(routineEntry_, routineEntry) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline GetRoutineBuildResponseBody& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRoutineBuildResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetRoutineBuildResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetRoutineBuildResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The static resource directory.
    shared_ptr<string> assetsDirectory_ {};
    // The build branch.
    shared_ptr<string> branch_ {};
    // The build command.
    shared_ptr<string> buildCommand_ {};
    // The commit ID.
    shared_ptr<string> commitId_ {};
    // The commit message.
    shared_ptr<string> commitMessage_ {};
    // The creation time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The environment variables.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The Git account ID.
    shared_ptr<int64_t> gitAccountId_ {};
    // The ID of the ER build task.
    shared_ptr<int64_t> id_ {};
    // The install command.
    shared_ptr<string> installCommand_ {};
    // Indicates whether the repository is private. Valid values:
    // 
    // - true: The repository is private.
    // - false: The repository is not private.
    shared_ptr<bool> isPrivate_ {};
    // The Node.js version. Valid values: `22.x`, `20.x`, `18.x`, `16.x`, `14.x`, `12.x`.
    shared_ptr<string> nodeVersion_ {};
    // The pipeline ID.
    shared_ptr<int64_t> pipelineId_ {};
    // The pipeline run ID.
    shared_ptr<int64_t> pipelineRunId_ {};
    // The production branch name.
    shared_ptr<string> productionBranch_ {};
    // The repository name.
    shared_ptr<string> repository_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The root directory.
    shared_ptr<string> rootDirectory_ {};
    // The ER entry file path.
    shared_ptr<string> routineEntry_ {};
    // The ER name.
    shared_ptr<string> routineName_ {};
    // The status of the build task. Valid values:
    // 
    // - int: init
    // - pending: preparing
    // - building: building
    // - succeed: build succeeded
    // - failed: build failed
    // - canceled: canceled
    shared_ptr<string> status_ {};
    // The template name.
    shared_ptr<string> templateName_ {};
    // The modification time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
