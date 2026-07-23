// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEBUILDCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEBUILDCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetRoutineBuildConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineBuildConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_TO_JSON(BuildBranches, buildBranches_);
      DARABONBA_PTR_TO_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_TO_JSON(GitAccountType, gitAccountType_);
      DARABONBA_PTR_TO_JSON(GitPlatform, gitPlatform_);
      DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_TO_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_TO_JSON(Repository, repository_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_TO_JSON(RoutineBuildConfigurationId, routineBuildConfigurationId_);
      DARABONBA_PTR_TO_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineBuildConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_FROM_JSON(BuildBranches, buildBranches_);
      DARABONBA_PTR_FROM_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_FROM_JSON(GitAccountType, gitAccountType_);
      DARABONBA_PTR_FROM_JSON(GitPlatform, gitPlatform_);
      DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_FROM_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_FROM_JSON(Repository, repository_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_FROM_JSON(RoutineBuildConfigurationId, routineBuildConfigurationId_);
      DARABONBA_PTR_FROM_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetRoutineBuildConfigurationResponseBody() = default ;
    GetRoutineBuildConfigurationResponseBody(const GetRoutineBuildConfigurationResponseBody &) = default ;
    GetRoutineBuildConfigurationResponseBody(GetRoutineBuildConfigurationResponseBody &&) = default ;
    GetRoutineBuildConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineBuildConfigurationResponseBody() = default ;
    GetRoutineBuildConfigurationResponseBody& operator=(const GetRoutineBuildConfigurationResponseBody &) = default ;
    GetRoutineBuildConfigurationResponseBody& operator=(GetRoutineBuildConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsDirectory_ == nullptr
        && this->buildBranches_ == nullptr && this->buildCommand_ == nullptr && this->createTime_ == nullptr && this->environmentVariables_ == nullptr && this->gitAccountId_ == nullptr
        && this->gitAccountType_ == nullptr && this->gitPlatform_ == nullptr && this->installCommand_ == nullptr && this->isPrivate_ == nullptr && this->nodeVersion_ == nullptr
        && this->productionBranch_ == nullptr && this->repository_ == nullptr && this->requestId_ == nullptr && this->rootDirectory_ == nullptr && this->routineBuildConfigurationId_ == nullptr
        && this->routineEntry_ == nullptr && this->routineName_ == nullptr && this->updateTime_ == nullptr; };
    // assetsDirectory Field Functions 
    bool hasAssetsDirectory() const { return this->assetsDirectory_ != nullptr;};
    void deleteAssetsDirectory() { this->assetsDirectory_ = nullptr;};
    inline string getAssetsDirectory() const { DARABONBA_PTR_GET_DEFAULT(assetsDirectory_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setAssetsDirectory(string assetsDirectory) { DARABONBA_PTR_SET_VALUE(assetsDirectory_, assetsDirectory) };


    // buildBranches Field Functions 
    bool hasBuildBranches() const { return this->buildBranches_ != nullptr;};
    void deleteBuildBranches() { this->buildBranches_ = nullptr;};
    inline string getBuildBranches() const { DARABONBA_PTR_GET_DEFAULT(buildBranches_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setBuildBranches(string buildBranches) { DARABONBA_PTR_SET_VALUE(buildBranches_, buildBranches) };


    // buildCommand Field Functions 
    bool hasBuildCommand() const { return this->buildCommand_ != nullptr;};
    void deleteBuildCommand() { this->buildCommand_ = nullptr;};
    inline string getBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(buildCommand_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setBuildCommand(string buildCommand) { DARABONBA_PTR_SET_VALUE(buildCommand_, buildCommand) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline GetRoutineBuildConfigurationResponseBody& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline GetRoutineBuildConfigurationResponseBody& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gitAccountId Field Functions 
    bool hasGitAccountId() const { return this->gitAccountId_ != nullptr;};
    void deleteGitAccountId() { this->gitAccountId_ = nullptr;};
    inline int64_t getGitAccountId() const { DARABONBA_PTR_GET_DEFAULT(gitAccountId_, 0L) };
    inline GetRoutineBuildConfigurationResponseBody& setGitAccountId(int64_t gitAccountId) { DARABONBA_PTR_SET_VALUE(gitAccountId_, gitAccountId) };


    // gitAccountType Field Functions 
    bool hasGitAccountType() const { return this->gitAccountType_ != nullptr;};
    void deleteGitAccountType() { this->gitAccountType_ = nullptr;};
    inline string getGitAccountType() const { DARABONBA_PTR_GET_DEFAULT(gitAccountType_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setGitAccountType(string gitAccountType) { DARABONBA_PTR_SET_VALUE(gitAccountType_, gitAccountType) };


    // gitPlatform Field Functions 
    bool hasGitPlatform() const { return this->gitPlatform_ != nullptr;};
    void deleteGitPlatform() { this->gitPlatform_ = nullptr;};
    inline string getGitPlatform() const { DARABONBA_PTR_GET_DEFAULT(gitPlatform_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setGitPlatform(string gitPlatform) { DARABONBA_PTR_SET_VALUE(gitPlatform_, gitPlatform) };


    // installCommand Field Functions 
    bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
    void deleteInstallCommand() { this->installCommand_ = nullptr;};
    inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline GetRoutineBuildConfigurationResponseBody& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // nodeVersion Field Functions 
    bool hasNodeVersion() const { return this->nodeVersion_ != nullptr;};
    void deleteNodeVersion() { this->nodeVersion_ = nullptr;};
    inline string getNodeVersion() const { DARABONBA_PTR_GET_DEFAULT(nodeVersion_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setNodeVersion(string nodeVersion) { DARABONBA_PTR_SET_VALUE(nodeVersion_, nodeVersion) };


    // productionBranch Field Functions 
    bool hasProductionBranch() const { return this->productionBranch_ != nullptr;};
    void deleteProductionBranch() { this->productionBranch_ = nullptr;};
    inline string getProductionBranch() const { DARABONBA_PTR_GET_DEFAULT(productionBranch_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setProductionBranch(string productionBranch) { DARABONBA_PTR_SET_VALUE(productionBranch_, productionBranch) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // routineBuildConfigurationId Field Functions 
    bool hasRoutineBuildConfigurationId() const { return this->routineBuildConfigurationId_ != nullptr;};
    void deleteRoutineBuildConfigurationId() { this->routineBuildConfigurationId_ = nullptr;};
    inline int64_t getRoutineBuildConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(routineBuildConfigurationId_, 0L) };
    inline GetRoutineBuildConfigurationResponseBody& setRoutineBuildConfigurationId(int64_t routineBuildConfigurationId) { DARABONBA_PTR_SET_VALUE(routineBuildConfigurationId_, routineBuildConfigurationId) };


    // routineEntry Field Functions 
    bool hasRoutineEntry() const { return this->routineEntry_ != nullptr;};
    void deleteRoutineEntry() { this->routineEntry_ = nullptr;};
    inline string getRoutineEntry() const { DARABONBA_PTR_GET_DEFAULT(routineEntry_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setRoutineEntry(string routineEntry) { DARABONBA_PTR_SET_VALUE(routineEntry_, routineEntry) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetRoutineBuildConfigurationResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The static assets directory.
    shared_ptr<string> assetsDirectory_ {};
    // The branches that trigger builds. A value of * indicates all branches. Multiple specific branches are separated by commas.
    shared_ptr<string> buildBranches_ {};
    // The build command.
    shared_ptr<string> buildCommand_ {};
    // The creation time, in ISO 8601 format using UTC time. Format: yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> createTime_ {};
    // The environment variables.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The Git account ID.
    shared_ptr<int64_t> gitAccountId_ {};
    // The Git account type. Valid values:
    // - User: individual account.
    // - Organization: organization account.
    shared_ptr<string> gitAccountType_ {};
    // The Git platform.
    shared_ptr<string> gitPlatform_ {};
    // The install command.
    shared_ptr<string> installCommand_ {};
    // Indicates whether the repository is private. Valid values:
    // 
    // - true: The repository is private.
    // - false: The repository is not private.
    shared_ptr<bool> isPrivate_ {};
    // The Node.js version.
    shared_ptr<string> nodeVersion_ {};
    // The production branch name.
    shared_ptr<string> productionBranch_ {};
    // The repository name.
    shared_ptr<string> repository_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The root directory.
    shared_ptr<string> rootDirectory_ {};
    // The ER build configuration ID.
    shared_ptr<int64_t> routineBuildConfigurationId_ {};
    // The ER entry file path.
    shared_ptr<string> routineEntry_ {};
    // The ER name.
    shared_ptr<string> routineName_ {};
    // The modification time, in ISO 8601 format using UTC time. Format: yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
