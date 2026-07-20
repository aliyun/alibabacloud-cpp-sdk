// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROUTINEBUILDCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROUTINEBUILDCONFIGURATIONREQUEST_HPP_
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
  class UpdateRoutineBuildConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoutineBuildConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_TO_JSON(BuildBranches, buildBranches_);
      DARABONBA_PTR_TO_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_TO_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_TO_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_TO_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_TO_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_TO_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_TO_JSON(Repository, repository_);
      DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_TO_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoutineBuildConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsDirectory, assetsDirectory_);
      DARABONBA_PTR_FROM_JSON(BuildBranches, buildBranches_);
      DARABONBA_PTR_FROM_JSON(BuildCommand, buildCommand_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVariables, environmentVariables_);
      DARABONBA_PTR_FROM_JSON(GitAccountId, gitAccountId_);
      DARABONBA_PTR_FROM_JSON(InstallCommand, installCommand_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      DARABONBA_PTR_FROM_JSON(NodeVersion, nodeVersion_);
      DARABONBA_PTR_FROM_JSON(ProductionBranch, productionBranch_);
      DARABONBA_PTR_FROM_JSON(Repository, repository_);
      DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
      DARABONBA_PTR_FROM_JSON(RoutineEntry, routineEntry_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
    };
    UpdateRoutineBuildConfigurationRequest() = default ;
    UpdateRoutineBuildConfigurationRequest(const UpdateRoutineBuildConfigurationRequest &) = default ;
    UpdateRoutineBuildConfigurationRequest(UpdateRoutineBuildConfigurationRequest &&) = default ;
    UpdateRoutineBuildConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoutineBuildConfigurationRequest() = default ;
    UpdateRoutineBuildConfigurationRequest& operator=(const UpdateRoutineBuildConfigurationRequest &) = default ;
    UpdateRoutineBuildConfigurationRequest& operator=(UpdateRoutineBuildConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsDirectory_ == nullptr
        && this->buildBranches_ == nullptr && this->buildCommand_ == nullptr && this->environmentVariables_ == nullptr && this->gitAccountId_ == nullptr && this->installCommand_ == nullptr
        && this->isPrivate_ == nullptr && this->nodeVersion_ == nullptr && this->productionBranch_ == nullptr && this->repository_ == nullptr && this->rootDirectory_ == nullptr
        && this->routineEntry_ == nullptr && this->routineName_ == nullptr; };
    // assetsDirectory Field Functions 
    bool hasAssetsDirectory() const { return this->assetsDirectory_ != nullptr;};
    void deleteAssetsDirectory() { this->assetsDirectory_ = nullptr;};
    inline string getAssetsDirectory() const { DARABONBA_PTR_GET_DEFAULT(assetsDirectory_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setAssetsDirectory(string assetsDirectory) { DARABONBA_PTR_SET_VALUE(assetsDirectory_, assetsDirectory) };


    // buildBranches Field Functions 
    bool hasBuildBranches() const { return this->buildBranches_ != nullptr;};
    void deleteBuildBranches() { this->buildBranches_ = nullptr;};
    inline string getBuildBranches() const { DARABONBA_PTR_GET_DEFAULT(buildBranches_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setBuildBranches(string buildBranches) { DARABONBA_PTR_SET_VALUE(buildBranches_, buildBranches) };


    // buildCommand Field Functions 
    bool hasBuildCommand() const { return this->buildCommand_ != nullptr;};
    void deleteBuildCommand() { this->buildCommand_ = nullptr;};
    inline string getBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(buildCommand_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setBuildCommand(string buildCommand) { DARABONBA_PTR_SET_VALUE(buildCommand_, buildCommand) };


    // environmentVariables Field Functions 
    bool hasEnvironmentVariables() const { return this->environmentVariables_ != nullptr;};
    void deleteEnvironmentVariables() { this->environmentVariables_ = nullptr;};
    inline const map<string, string> & getEnvironmentVariables() const { DARABONBA_PTR_GET_CONST(environmentVariables_, map<string, string>) };
    inline map<string, string> getEnvironmentVariables() { DARABONBA_PTR_GET(environmentVariables_, map<string, string>) };
    inline UpdateRoutineBuildConfigurationRequest& setEnvironmentVariables(const map<string, string> & environmentVariables) { DARABONBA_PTR_SET_VALUE(environmentVariables_, environmentVariables) };
    inline UpdateRoutineBuildConfigurationRequest& setEnvironmentVariables(map<string, string> && environmentVariables) { DARABONBA_PTR_SET_RVALUE(environmentVariables_, environmentVariables) };


    // gitAccountId Field Functions 
    bool hasGitAccountId() const { return this->gitAccountId_ != nullptr;};
    void deleteGitAccountId() { this->gitAccountId_ = nullptr;};
    inline int64_t getGitAccountId() const { DARABONBA_PTR_GET_DEFAULT(gitAccountId_, 0L) };
    inline UpdateRoutineBuildConfigurationRequest& setGitAccountId(int64_t gitAccountId) { DARABONBA_PTR_SET_VALUE(gitAccountId_, gitAccountId) };


    // installCommand Field Functions 
    bool hasInstallCommand() const { return this->installCommand_ != nullptr;};
    void deleteInstallCommand() { this->installCommand_ = nullptr;};
    inline string getInstallCommand() const { DARABONBA_PTR_GET_DEFAULT(installCommand_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setInstallCommand(string installCommand) { DARABONBA_PTR_SET_VALUE(installCommand_, installCommand) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline bool getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, false) };
    inline UpdateRoutineBuildConfigurationRequest& setIsPrivate(bool isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    // nodeVersion Field Functions 
    bool hasNodeVersion() const { return this->nodeVersion_ != nullptr;};
    void deleteNodeVersion() { this->nodeVersion_ = nullptr;};
    inline string getNodeVersion() const { DARABONBA_PTR_GET_DEFAULT(nodeVersion_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setNodeVersion(string nodeVersion) { DARABONBA_PTR_SET_VALUE(nodeVersion_, nodeVersion) };


    // productionBranch Field Functions 
    bool hasProductionBranch() const { return this->productionBranch_ != nullptr;};
    void deleteProductionBranch() { this->productionBranch_ = nullptr;};
    inline string getProductionBranch() const { DARABONBA_PTR_GET_DEFAULT(productionBranch_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setProductionBranch(string productionBranch) { DARABONBA_PTR_SET_VALUE(productionBranch_, productionBranch) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // routineEntry Field Functions 
    bool hasRoutineEntry() const { return this->routineEntry_ != nullptr;};
    void deleteRoutineEntry() { this->routineEntry_ = nullptr;};
    inline string getRoutineEntry() const { DARABONBA_PTR_GET_DEFAULT(routineEntry_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setRoutineEntry(string routineEntry) { DARABONBA_PTR_SET_VALUE(routineEntry_, routineEntry) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline UpdateRoutineBuildConfigurationRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


  protected:
    // The static resource directory.
    shared_ptr<string> assetsDirectory_ {};
    // The branches that trigger a build. Set this parameter to * for all branches. To specify multiple branches, separate branch names with commas.
    shared_ptr<string> buildBranches_ {};
    // The build command.
    shared_ptr<string> buildCommand_ {};
    // The environment variables.
    shared_ptr<map<string, string>> environmentVariables_ {};
    // The Git account ID.
    shared_ptr<int64_t> gitAccountId_ {};
    // The install command.
    shared_ptr<string> installCommand_ {};
    // Specifies whether the repository is private. Valid values:
    // - `true`: The repository is private.
    // - `false`: The repository is not private.
    shared_ptr<bool> isPrivate_ {};
    // The Node.js version. Valid values: `22.x`, `20.x`, `18.x`, `16.x`, `14.x`, and `12.x`.
    shared_ptr<string> nodeVersion_ {};
    // The production branch name.
    shared_ptr<string> productionBranch_ {};
    // The repository name.
    shared_ptr<string> repository_ {};
    // The root directory.
    shared_ptr<string> rootDirectory_ {};
    // The path of the ER entry file.
    shared_ptr<string> routineEntry_ {};
    // The ER name.
    // 
    // This parameter is required.
    shared_ptr<string> routineName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
