// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TomcatConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_TO_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_FROM_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
    };
    BuildPipeline() = default ;
    BuildPipeline(const BuildPipeline &) = default ;
    BuildPipeline(BuildPipeline &&) = default ;
    BuildPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipeline() = default ;
    BuildPipeline& operator=(const BuildPipeline &) = default ;
    BuildPipeline& operator=(BuildPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TriggerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TriggerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TriggerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TriggerConfig() = default ;
      TriggerConfig(const TriggerConfig &) = default ;
      TriggerConfig(TriggerConfig &&) = default ;
      TriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TriggerConfig() = default ;
      TriggerConfig& operator=(const TriggerConfig &) = default ;
      TriggerConfig& operator=(TriggerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->branchName_ == nullptr
        && this->tagName_ == nullptr && this->type_ == nullptr; };
      // branchName Field Functions 
      bool hasBranchName() const { return this->branchName_ != nullptr;};
      void deleteBranchName() { this->branchName_ = nullptr;};
      inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
      inline TriggerConfig& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline TriggerConfig& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TriggerConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> branchName_ {};
      shared_ptr<string> tagName_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class PackageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PackageName, packageName_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
      };
      friend void from_json(const Darabonba::Json& j, PackageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
      };
      PackageConfig() = default ;
      PackageConfig(const PackageConfig &) = default ;
      PackageConfig(PackageConfig &&) = default ;
      PackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageConfig() = default ;
      PackageConfig& operator=(const PackageConfig &) = default ;
      PackageConfig& operator=(PackageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->packageName_ == nullptr
        && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr; };
      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline PackageConfig& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline PackageConfig& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // packageUrl Field Functions 
      bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
      void deletePackageUrl() { this->packageUrl_ = nullptr;};
      inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
      inline PackageConfig& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
      inline PackageConfig& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


    protected:
      shared_ptr<string> packageName_ {};
      shared_ptr<string> packageType_ {};
      shared_ptr<string> packageUrl_ {};
      shared_ptr<string> packageVersion_ {};
    };

    class ImageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Repository, repository_);
      };
      friend void from_json(const Darabonba::Json& j, ImageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Repository, repository_);
      };
      ImageConfig() = default ;
      ImageConfig(const ImageConfig &) = default ;
      ImageConfig(ImageConfig &&) = default ;
      ImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageConfig() = default ;
      ImageConfig& operator=(const ImageConfig &) = default ;
      ImageConfig& operator=(ImageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->namespace_ == nullptr && this->repository_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline ImageConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline ImageConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // repository Field Functions 
      bool hasRepository() const { return this->repository_ != nullptr;};
      void deleteRepository() { this->repository_ = nullptr;};
      inline string getRepository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
      inline ImageConfig& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


    protected:
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> repository_ {};
    };

    class DeployConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AlwaysAllocateCPU, alwaysAllocateCPU_);
        DARABONBA_PTR_TO_JSON(MaximumInstanceCount, maximumInstanceCount_);
        DARABONBA_PTR_TO_JSON(MinimumInstanceCount, minimumInstanceCount_);
        DARABONBA_PTR_TO_JSON(UpdateApplicationInput, updateApplicationInput_);
        DARABONBA_PTR_TO_JSON(UpdateTraffic, updateTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, DeployConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AlwaysAllocateCPU, alwaysAllocateCPU_);
        DARABONBA_PTR_FROM_JSON(MaximumInstanceCount, maximumInstanceCount_);
        DARABONBA_PTR_FROM_JSON(MinimumInstanceCount, minimumInstanceCount_);
        DARABONBA_PTR_FROM_JSON(UpdateApplicationInput, updateApplicationInput_);
        DARABONBA_PTR_FROM_JSON(UpdateTraffic, updateTraffic_);
      };
      DeployConfig() = default ;
      DeployConfig(const DeployConfig &) = default ;
      DeployConfig(DeployConfig &&) = default ;
      DeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployConfig() = default ;
      DeployConfig& operator=(const DeployConfig &) = default ;
      DeployConfig& operator=(DeployConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alwaysAllocateCPU_ == nullptr
        && this->maximumInstanceCount_ == nullptr && this->minimumInstanceCount_ == nullptr && this->updateApplicationInput_ == nullptr && this->updateTraffic_ == nullptr; };
      // alwaysAllocateCPU Field Functions 
      bool hasAlwaysAllocateCPU() const { return this->alwaysAllocateCPU_ != nullptr;};
      void deleteAlwaysAllocateCPU() { this->alwaysAllocateCPU_ = nullptr;};
      inline bool getAlwaysAllocateCPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateCPU_, false) };
      inline DeployConfig& setAlwaysAllocateCPU(bool alwaysAllocateCPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateCPU_, alwaysAllocateCPU) };


      // maximumInstanceCount Field Functions 
      bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
      void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
      inline int32_t getMaximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0) };
      inline DeployConfig& setMaximumInstanceCount(int32_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


      // minimumInstanceCount Field Functions 
      bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
      void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
      inline int32_t getMinimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0) };
      inline DeployConfig& setMinimumInstanceCount(int32_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


      // updateApplicationInput Field Functions 
      bool hasUpdateApplicationInput() const { return this->updateApplicationInput_ != nullptr;};
      void deleteUpdateApplicationInput() { this->updateApplicationInput_ = nullptr;};
      inline string getUpdateApplicationInput() const { DARABONBA_PTR_GET_DEFAULT(updateApplicationInput_, "") };
      inline DeployConfig& setUpdateApplicationInput(string updateApplicationInput) { DARABONBA_PTR_SET_VALUE(updateApplicationInput_, updateApplicationInput) };


      // updateTraffic Field Functions 
      bool hasUpdateTraffic() const { return this->updateTraffic_ != nullptr;};
      void deleteUpdateTraffic() { this->updateTraffic_ = nullptr;};
      inline bool getUpdateTraffic() const { DARABONBA_PTR_GET_DEFAULT(updateTraffic_, false) };
      inline DeployConfig& setUpdateTraffic(bool updateTraffic) { DARABONBA_PTR_SET_VALUE(updateTraffic_, updateTraffic) };


    protected:
      shared_ptr<bool> alwaysAllocateCPU_ {};
      shared_ptr<int32_t> maximumInstanceCount_ {};
      shared_ptr<int32_t> minimumInstanceCount_ {};
      shared_ptr<string> updateApplicationInput_ {};
      shared_ptr<bool> updateTraffic_ {};
    };

    class CodeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CodeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(CommitId, commitId_);
        DARABONBA_PTR_TO_JSON(CommitUrl, commitUrl_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(RepoFullName, repoFullName_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      };
      friend void from_json(const Darabonba::Json& j, CodeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(CommitId, commitId_);
        DARABONBA_PTR_FROM_JSON(CommitUrl, commitUrl_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(RepoFullName, repoFullName_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      };
      CodeConfig() = default ;
      CodeConfig(const CodeConfig &) = default ;
      CodeConfig(CodeConfig &&) = default ;
      CodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CodeConfig() = default ;
      CodeConfig& operator=(const CodeConfig &) = default ;
      CodeConfig& operator=(CodeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->branchName_ == nullptr && this->commitId_ == nullptr && this->commitUrl_ == nullptr && this->organizationId_ == nullptr && this->provider_ == nullptr
        && this->repoFullName_ == nullptr && this->repoId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline CodeConfig& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // branchName Field Functions 
      bool hasBranchName() const { return this->branchName_ != nullptr;};
      void deleteBranchName() { this->branchName_ = nullptr;};
      inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
      inline CodeConfig& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


      // commitId Field Functions 
      bool hasCommitId() const { return this->commitId_ != nullptr;};
      void deleteCommitId() { this->commitId_ = nullptr;};
      inline string getCommitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
      inline CodeConfig& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


      // commitUrl Field Functions 
      bool hasCommitUrl() const { return this->commitUrl_ != nullptr;};
      void deleteCommitUrl() { this->commitUrl_ = nullptr;};
      inline string getCommitUrl() const { DARABONBA_PTR_GET_DEFAULT(commitUrl_, "") };
      inline CodeConfig& setCommitUrl(string commitUrl) { DARABONBA_PTR_SET_VALUE(commitUrl_, commitUrl) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline CodeConfig& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline CodeConfig& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // repoFullName Field Functions 
      bool hasRepoFullName() const { return this->repoFullName_ != nullptr;};
      void deleteRepoFullName() { this->repoFullName_ = nullptr;};
      inline string getRepoFullName() const { DARABONBA_PTR_GET_DEFAULT(repoFullName_, "") };
      inline CodeConfig& setRepoFullName(string repoFullName) { DARABONBA_PTR_SET_VALUE(repoFullName_, repoFullName) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline CodeConfig& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    protected:
      // This parameter is required.
      shared_ptr<string> accountId_ {};
      // This parameter is required.
      shared_ptr<string> branchName_ {};
      shared_ptr<string> commitId_ {};
      shared_ptr<string> commitUrl_ {};
      shared_ptr<string> organizationId_ {};
      // This parameter is required.
      shared_ptr<string> provider_ {};
      // This parameter is required.
      shared_ptr<string> repoFullName_ {};
      // This parameter is required.
      shared_ptr<string> repoId_ {};
    };

    class BuildConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BuildConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BeforeBuildCommand, beforeBuildCommand_);
        DARABONBA_PTR_TO_JSON(BuildType, buildType_);
        DARABONBA_PTR_TO_JSON(DockerfilePath, dockerfilePath_);
        DARABONBA_PTR_TO_JSON(RunCommand, runCommand_);
        DARABONBA_PTR_TO_JSON(RuntimeType, runtimeType_);
        DARABONBA_PTR_TO_JSON(RuntimeVersion, runtimeVersion_);
        DARABONBA_PTR_TO_JSON(TomcatConfig, tomcatConfig_);
        DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      };
      friend void from_json(const Darabonba::Json& j, BuildConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BeforeBuildCommand, beforeBuildCommand_);
        DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
        DARABONBA_PTR_FROM_JSON(DockerfilePath, dockerfilePath_);
        DARABONBA_PTR_FROM_JSON(RunCommand, runCommand_);
        DARABONBA_PTR_FROM_JSON(RuntimeType, runtimeType_);
        DARABONBA_PTR_FROM_JSON(RuntimeVersion, runtimeVersion_);
        DARABONBA_PTR_FROM_JSON(TomcatConfig, tomcatConfig_);
        DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      };
      BuildConfig() = default ;
      BuildConfig(const BuildConfig &) = default ;
      BuildConfig(BuildConfig &&) = default ;
      BuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BuildConfig() = default ;
      BuildConfig& operator=(const BuildConfig &) = default ;
      BuildConfig& operator=(BuildConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beforeBuildCommand_ == nullptr
        && this->buildType_ == nullptr && this->dockerfilePath_ == nullptr && this->runCommand_ == nullptr && this->runtimeType_ == nullptr && this->runtimeVersion_ == nullptr
        && this->tomcatConfig_ == nullptr && this->workingDir_ == nullptr; };
      // beforeBuildCommand Field Functions 
      bool hasBeforeBuildCommand() const { return this->beforeBuildCommand_ != nullptr;};
      void deleteBeforeBuildCommand() { this->beforeBuildCommand_ = nullptr;};
      inline string getBeforeBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(beforeBuildCommand_, "") };
      inline BuildConfig& setBeforeBuildCommand(string beforeBuildCommand) { DARABONBA_PTR_SET_VALUE(beforeBuildCommand_, beforeBuildCommand) };


      // buildType Field Functions 
      bool hasBuildType() const { return this->buildType_ != nullptr;};
      void deleteBuildType() { this->buildType_ = nullptr;};
      inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
      inline BuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


      // dockerfilePath Field Functions 
      bool hasDockerfilePath() const { return this->dockerfilePath_ != nullptr;};
      void deleteDockerfilePath() { this->dockerfilePath_ = nullptr;};
      inline string getDockerfilePath() const { DARABONBA_PTR_GET_DEFAULT(dockerfilePath_, "") };
      inline BuildConfig& setDockerfilePath(string dockerfilePath) { DARABONBA_PTR_SET_VALUE(dockerfilePath_, dockerfilePath) };


      // runCommand Field Functions 
      bool hasRunCommand() const { return this->runCommand_ != nullptr;};
      void deleteRunCommand() { this->runCommand_ = nullptr;};
      inline string getRunCommand() const { DARABONBA_PTR_GET_DEFAULT(runCommand_, "") };
      inline BuildConfig& setRunCommand(string runCommand) { DARABONBA_PTR_SET_VALUE(runCommand_, runCommand) };


      // runtimeType Field Functions 
      bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
      void deleteRuntimeType() { this->runtimeType_ = nullptr;};
      inline string getRuntimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
      inline BuildConfig& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


      // runtimeVersion Field Functions 
      bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
      void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
      inline string getRuntimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
      inline BuildConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


      // tomcatConfig Field Functions 
      bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
      void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
      inline const TomcatConfig & getTomcatConfig() const { DARABONBA_PTR_GET_CONST(tomcatConfig_, TomcatConfig) };
      inline TomcatConfig getTomcatConfig() { DARABONBA_PTR_GET(tomcatConfig_, TomcatConfig) };
      inline BuildConfig& setTomcatConfig(const TomcatConfig & tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };
      inline BuildConfig& setTomcatConfig(TomcatConfig && tomcatConfig) { DARABONBA_PTR_SET_RVALUE(tomcatConfig_, tomcatConfig) };


      // workingDir Field Functions 
      bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
      void deleteWorkingDir() { this->workingDir_ = nullptr;};
      inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
      inline BuildConfig& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    protected:
      shared_ptr<string> beforeBuildCommand_ {};
      // This parameter is required.
      shared_ptr<string> buildType_ {};
      shared_ptr<string> dockerfilePath_ {};
      shared_ptr<string> runCommand_ {};
      shared_ptr<string> runtimeType_ {};
      shared_ptr<string> runtimeVersion_ {};
      shared_ptr<TomcatConfig> tomcatConfig_ {};
      shared_ptr<string> workingDir_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->buildConfig_ == nullptr && this->codeConfig_ == nullptr && this->deployConfig_ == nullptr && this->enabled_ == nullptr
        && this->imageConfig_ == nullptr && this->packageConfig_ == nullptr && this->triggerConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BuildPipeline& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline BuildPipeline& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const BuildPipeline::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, BuildPipeline::BuildConfig) };
    inline BuildPipeline::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, BuildPipeline::BuildConfig) };
    inline BuildPipeline& setBuildConfig(const BuildPipeline::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline BuildPipeline& setBuildConfig(BuildPipeline::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // codeConfig Field Functions 
    bool hasCodeConfig() const { return this->codeConfig_ != nullptr;};
    void deleteCodeConfig() { this->codeConfig_ = nullptr;};
    inline const BuildPipeline::CodeConfig & getCodeConfig() const { DARABONBA_PTR_GET_CONST(codeConfig_, BuildPipeline::CodeConfig) };
    inline BuildPipeline::CodeConfig getCodeConfig() { DARABONBA_PTR_GET(codeConfig_, BuildPipeline::CodeConfig) };
    inline BuildPipeline& setCodeConfig(const BuildPipeline::CodeConfig & codeConfig) { DARABONBA_PTR_SET_VALUE(codeConfig_, codeConfig) };
    inline BuildPipeline& setCodeConfig(BuildPipeline::CodeConfig && codeConfig) { DARABONBA_PTR_SET_RVALUE(codeConfig_, codeConfig) };


    // deployConfig Field Functions 
    bool hasDeployConfig() const { return this->deployConfig_ != nullptr;};
    void deleteDeployConfig() { this->deployConfig_ = nullptr;};
    inline const BuildPipeline::DeployConfig & getDeployConfig() const { DARABONBA_PTR_GET_CONST(deployConfig_, BuildPipeline::DeployConfig) };
    inline BuildPipeline::DeployConfig getDeployConfig() { DARABONBA_PTR_GET(deployConfig_, BuildPipeline::DeployConfig) };
    inline BuildPipeline& setDeployConfig(const BuildPipeline::DeployConfig & deployConfig) { DARABONBA_PTR_SET_VALUE(deployConfig_, deployConfig) };
    inline BuildPipeline& setDeployConfig(BuildPipeline::DeployConfig && deployConfig) { DARABONBA_PTR_SET_RVALUE(deployConfig_, deployConfig) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline BuildPipeline& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const BuildPipeline::ImageConfig & getImageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, BuildPipeline::ImageConfig) };
    inline BuildPipeline::ImageConfig getImageConfig() { DARABONBA_PTR_GET(imageConfig_, BuildPipeline::ImageConfig) };
    inline BuildPipeline& setImageConfig(const BuildPipeline::ImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline BuildPipeline& setImageConfig(BuildPipeline::ImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const BuildPipeline::PackageConfig & getPackageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, BuildPipeline::PackageConfig) };
    inline BuildPipeline::PackageConfig getPackageConfig() { DARABONBA_PTR_GET(packageConfig_, BuildPipeline::PackageConfig) };
    inline BuildPipeline& setPackageConfig(const BuildPipeline::PackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline BuildPipeline& setPackageConfig(BuildPipeline::PackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const BuildPipeline::TriggerConfig & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, BuildPipeline::TriggerConfig) };
    inline BuildPipeline::TriggerConfig getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, BuildPipeline::TriggerConfig) };
    inline BuildPipeline& setTriggerConfig(const BuildPipeline::TriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline BuildPipeline& setTriggerConfig(BuildPipeline::TriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    // This parameter is required.
    shared_ptr<BuildPipeline::BuildConfig> buildConfig_ {};
    // This parameter is required.
    shared_ptr<BuildPipeline::CodeConfig> codeConfig_ {};
    shared_ptr<BuildPipeline::DeployConfig> deployConfig_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<BuildPipeline::ImageConfig> imageConfig_ {};
    shared_ptr<BuildPipeline::PackageConfig> packageConfig_ {};
    // This parameter is required.
    shared_ptr<BuildPipeline::TriggerConfig> triggerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
