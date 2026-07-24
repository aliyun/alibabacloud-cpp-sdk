// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEBUILDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEBUILDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineBuildsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineBuildsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineBuildsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListRoutineBuildsResponseBody() = default ;
    ListRoutineBuildsResponseBody(const ListRoutineBuildsResponseBody &) = default ;
    ListRoutineBuildsResponseBody(ListRoutineBuildsResponseBody &&) = default ;
    ListRoutineBuildsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineBuildsResponseBody() = default ;
    ListRoutineBuildsResponseBody& operator=(const ListRoutineBuildsResponseBody &) = default ;
    ListRoutineBuildsResponseBody& operator=(ListRoutineBuildsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetsDirectory, assetsDirectory_);
        DARABONBA_PTR_TO_JSON(Branch, branch_);
        DARABONBA_PTR_TO_JSON(BuildCommand, buildCommand_);
        DARABONBA_PTR_TO_JSON(CommitId, commitId_);
        DARABONBA_PTR_TO_JSON(CommitMessage, commitMessage_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
        DARABONBA_PTR_TO_JSON(GitAccountId, gitAccountId_);
        DARABONBA_PTR_TO_JSON(GitAccountName, gitAccountName_);
        DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
        DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
        DARABONBA_PTR_TO_JSON(NodeVersion, nodeVersion_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
        DARABONBA_PTR_TO_JSON(ProductionBranch, productionBranch_);
        DARABONBA_PTR_TO_JSON(Repository, repository_);
        DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_TO_JSON(RoutineBuildId, routineBuildId_);
        DARABONBA_PTR_TO_JSON(RoutineEntry, routineEntry_);
        DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetsDirectory, assetsDirectory_);
        DARABONBA_PTR_FROM_JSON(Branch, branch_);
        DARABONBA_PTR_FROM_JSON(BuildCommand, buildCommand_);
        DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
        DARABONBA_PTR_FROM_JSON(CommitMessage, commitMessage_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
        DARABONBA_PTR_FROM_JSON(GitAccountId, gitAccountId_);
        DARABONBA_PTR_FROM_JSON(GitAccountName, gitAccountName_);
        DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
        DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
        DARABONBA_PTR_FROM_JSON(NodeVersion, nodeVersion_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
        DARABONBA_PTR_FROM_JSON(ProductionBranch, productionBranch_);
        DARABONBA_PTR_FROM_JSON(Repository, repository_);
        DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_FROM_JSON(RoutineBuildId, routineBuildId_);
        DARABONBA_PTR_FROM_JSON(RoutineEntry, routineEntry_);
        DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetsDirectory_ == nullptr
        && this->branch_ == nullptr && this->buildCommand_ == nullptr && this->commitId_ == nullptr && this->commitMessage_ == nullptr && this->createTime_ == nullptr
        && this->environmentVariables_ == nullptr && this->gitAccountId_ == nullptr && this->gitAccountName_ == nullptr && this->installCommand_ == nullptr && this->isPrivate_ == nullptr
        && this->nodeVersion_ == nullptr && this->pipelineId_ == nullptr && this->pipelineRunId_ == nullptr && this->productionBranch_ == nullptr && this->repository_ == nullptr
        && this->rootDirectory_ == nullptr && this->routineBuildId_ == nullptr && this->routineEntry_ == nullptr && this->routineName_ == nullptr && this->status_ == nullptr
        && this->templateName_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // assetsDirectory Field Functions 
      bool hasAssetsDirectory() const { return this->assetsDirectory_ != nullptr;};
      void deleteAssetsDirectory() { this->assetsDirectory_ = nullptr;};
      inline string getAssetsDirectory() const { DARABONBA_PTR_GET_DEFAULT(assetsDirectory_, "") };
      inline Data& setAssetsDirectory(string assetsDirectory) { DARABONBA_PTR_SET_VALUE(assetsDirectory_, assetsDirectory) };


      // branch Field Functions 
      bool hasBranch() const { return this->branch_ != nullptr;};
      void deleteBranch() { this->branch_ = nullptr;};
      inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
      inline Data& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


      // buildCommand Field Functions 
      bool hasBuildCommand() const { return this->buildCommand_ != nullptr;};
      void deleteBuildCommand() { this->buildCommand_ = nullptr;};
      inline string getBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(buildCommand_, "") };
      inline Data& setBuildCommand(string buildCommand) { DARABONBA_PTR_SET_VALUE(buildCommand_, buildCommand) };


      // commitId Field Functions 
      bool hasCommitId() const { return this->commitId_ != nullptr;};
      void deleteCommitId() { this->commitId_ = nullptr;};
      inline string getCommitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
      inline Data& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


      // commitMessage Field Functions 
      bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
      void deleteCommitMessage() { this->commitMessage_ = nullptr;};
      inline string getCommitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
      inline Data& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // environmentVariables Field Functions 
      bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
      void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
      inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
      inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
      inline Data& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
      inline Data& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


      // gitAccountId Field Functions 
      bool hasGitAccountId() const { return this->gitAccountId_ != nullptr;};
      void deleteGitAccountId() { this->gitAccountId_ = nullptr;};
      inline int64_t getGitAccountId() const { DARABONBA_PTR_GET_DEFAULT(gitAccountId_, 0L) };
      inline Data& setGitAccountId(int64_t gitAccountId) { DARABONBA_PTR_SET_VALUE(gitAccountId_, gitAccountId) };


      // gitAccountName Field Functions 
      bool hasGitAccountName() const { return this->gitAccountName_ != nullptr;};
      void deleteGitAccountName() { this->gitAccountName_ = nullptr;};
      inline string getGitAccountName() const { DARABONBA_PTR_GET_DEFAULT(gitAccountName_, "") };
      inline Data& setGitAccountName(string gitAccountName) { DARABONBA_PTR_SET_VALUE(gitAccountName_, gitAccountName) };


      // installCommand Field Functions 
      bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
      void deleteInstallCommand() { this->installCommand_ = nullptr;};
      inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
      inline Data& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


      // isPrivate Field Functions 
      bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
      void deleteIsPrivate() { this->isPrivate_ = nullptr;};
      inline bool getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
      inline Data& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


      // nodeVersion Field Functions 
      bool hasNodeVersion() const { return this->nodeVersion_ != nullptr;};
      void deleteNodeVersion() { this->nodeVersion_ = nullptr;};
      inline string getNodeVersion() const { DARABONBA_PTR_GET_DEFAULT(nodeVersion_, "") };
      inline Data& setNodeVersion(string nodeVersion) { DARABONBA_PTR_SET_VALUE(nodeVersion_, nodeVersion) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
      inline Data& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // pipelineRunId Field Functions 
      bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
      void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
      inline int64_t getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, 0L) };
      inline Data& setPipelineRunId(int64_t pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


      // productionBranch Field Functions 
      bool hasProductionBranch() const { return this->productionBranch_ != nullptr;};
      void deleteProductionBranch() { this->productionBranch_ = nullptr;};
      inline string getProductionBranch() const { DARABONBA_PTR_GET_DEFAULT(productionBranch_, "") };
      inline Data& setProductionBranch(string productionBranch) { DARABONBA_PTR_SET_VALUE(productionBranch_, productionBranch) };


      // repository Field Functions 
      bool hasRepository() const { return this->repository_ != nullptr;};
      void deleteRepository() { this->repository_ = nullptr;};
      inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
      inline Data& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


      // rootDirectory Field Functions 
      bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
      void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
      inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
      inline Data& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


      // routineBuildId Field Functions 
      bool hasRoutineBuildId() const { return this->routineBuildId_ != nullptr;};
      void deleteRoutineBuildId() { this->routineBuildId_ = nullptr;};
      inline int64_t getRoutineBuildId() const { DARABONBA_PTR_GET_DEFAULT(routineBuildId_, 0L) };
      inline Data& setRoutineBuildId(int64_t routineBuildId) { DARABONBA_PTR_SET_VALUE(routineBuildId_, routineBuildId) };


      // routineEntry Field Functions 
      bool hasRoutineEntry() const { return this->routineEntry_ != nullptr;};
      void deleteRoutineEntry() { this->routineEntry_ = nullptr;};
      inline string getRoutineEntry() const { DARABONBA_PTR_GET_DEFAULT(routineEntry_, "") };
      inline Data& setRoutineEntry(string routineEntry) { DARABONBA_PTR_SET_VALUE(routineEntry_, routineEntry) };


      // routineName Field Functions 
      bool hasRoutineName() const { return this->routineName_ != nullptr;};
      void deleteRoutineName() { this->routineName_ = nullptr;};
      inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
      inline Data& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The static assets directory.
      shared_ptr<string> assetsDirectory_ {};
      // The branch used for the build.
      shared_ptr<string> branch_ {};
      // The build command.
      shared_ptr<string> buildCommand_ {};
      // The ID of the commit.
      shared_ptr<string> commitId_ {};
      // The commit message.
      shared_ptr<string> commitMessage_ {};
      // The creation time, in the ISO 8601 format in UTC. The format is yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> createTime_ {};
      // The environment variables.
      shared_ptr<map<string, string>> environmentVariables_ {};
      // The Git account ID.
      shared_ptr<int64_t> gitAccountId_ {};
      // The Git account name.
      shared_ptr<string> gitAccountName_ {};
      // The install command.
      shared_ptr<string> installCommand_ {};
      // Indicates whether the repository is private. Valid values:
      // 
      // - true: The repository is private.
      // - false: The repository is not private.
      shared_ptr<bool> isPrivate_ {};
      // The Node.js version. Valid values: `22.x`, `20.x`, `18.x`, `16.x`, `14.x`, `12.x`.
      shared_ptr<string> nodeVersion_ {};
      // The Yunxiao pipeline ID.
      shared_ptr<int64_t> pipelineId_ {};
      // The Yunxiao build task ID.
      shared_ptr<int64_t> pipelineRunId_ {};
      // The production branch name.
      shared_ptr<string> productionBranch_ {};
      // The repository name.
      shared_ptr<string> repository_ {};
      // The root directory.
      shared_ptr<string> rootDirectory_ {};
      // The ER build task ID.
      shared_ptr<int64_t> routineBuildId_ {};
      // The ER entry file path.
      shared_ptr<string> routineEntry_ {};
      // The ER name.
      shared_ptr<string> routineName_ {};
      // The status of the build task. Valid values:
      // 
      // - int: initialization
      // - pending: preparing
      // - building: building
      // - succeed: build succeeded
      // - failed: build failed
      // - canceled: canceled
      shared_ptr<string> status_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The modification time, in the ISO 8601 format in UTC. The format is yyyy-MM-ddTHH:mm:ssZ.
      shared_ptr<string> updateTime_ {};
      // The user ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListRoutineBuildsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListRoutineBuildsResponseBody::Data>) };
    inline vector<ListRoutineBuildsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListRoutineBuildsResponseBody::Data>) };
    inline ListRoutineBuildsResponseBody& setData(const vector<ListRoutineBuildsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRoutineBuildsResponseBody& setData(vector<ListRoutineBuildsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline ListRoutineBuildsResponseBody& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineBuildsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineBuildsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRoutineBuildsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline ListRoutineBuildsResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The list of ER build tasks.
    shared_ptr<vector<ListRoutineBuildsResponseBody::Data>> data_ {};
    // The page number, which is the same as the PageIndex request parameter.
    shared_ptr<int64_t> pageIndex_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
