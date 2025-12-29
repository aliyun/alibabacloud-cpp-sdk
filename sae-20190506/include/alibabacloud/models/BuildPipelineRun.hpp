// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUN_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TomcatConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineRun : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineRun& obj) { 
      DARABONBA_PTR_TO_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_TO_JSON(BuildDuration, buildDuration_);
      DARABONBA_PTR_TO_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_TO_JSON(DeployDuration, deployDuration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      DARABONBA_PTR_TO_JSON(WaitDuration, waitDuration_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineRun& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildConfig, buildConfig_);
      DARABONBA_PTR_FROM_JSON(BuildDuration, buildDuration_);
      DARABONBA_PTR_FROM_JSON(CodeConfig, codeConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DeployConfig, deployConfig_);
      DARABONBA_PTR_FROM_JSON(DeployDuration, deployDuration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      DARABONBA_PTR_FROM_JSON(WaitDuration, waitDuration_);
    };
    BuildPipelineRun() = default ;
    BuildPipelineRun(const BuildPipelineRun &) = default ;
    BuildPipelineRun(BuildPipelineRun &&) = default ;
    BuildPipelineRun(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineRun() = default ;
    BuildPipelineRun& operator=(const BuildPipelineRun &) = default ;
    BuildPipelineRun& operator=(BuildPipelineRun &&) = default ;
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
      shared_ptr<string> type_ {};
    };

    class Steps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Steps& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Steps& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Steps() = default ;
      Steps(const Steps &) = default ;
      Steps(Steps &&) = default ;
      Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Steps() = default ;
      Steps& operator=(const Steps &) = default ;
      Steps& operator=(Steps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->duration_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->result_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Steps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Steps& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Steps& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Steps& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Steps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Steps& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Steps& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Steps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> result_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> status_ {};
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
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
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
        DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
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
      class Trigger : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
          DARABONBA_PTR_TO_JSON(BranchName, branchName_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
          DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Trigger() = default ;
        Trigger(const Trigger &) = default ;
        Trigger(Trigger &&) = default ;
        Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Trigger() = default ;
        Trigger& operator=(const Trigger &) = default ;
        Trigger& operator=(Trigger &&) = default ;
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
        inline Trigger& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline Trigger& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> branchName_ {};
        shared_ptr<string> tagName_ {};
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->beforeBuildCommand_ == nullptr
        && this->buildType_ == nullptr && this->dockerfilePath_ == nullptr && this->runCommand_ == nullptr && this->runtimeType_ == nullptr && this->runtimeVersion_ == nullptr
        && this->tomcatConfig_ == nullptr && this->trigger_ == nullptr && this->workingDir_ == nullptr; };
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


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const BuildConfig::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, BuildConfig::Trigger) };
      inline BuildConfig::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, BuildConfig::Trigger) };
      inline BuildConfig& setTrigger(const BuildConfig::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline BuildConfig& setTrigger(BuildConfig::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


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
      // This parameter is required.
      shared_ptr<BuildConfig::Trigger> trigger_ {};
      shared_ptr<string> workingDir_ {};
    };

    virtual bool empty() const override { return this->buildConfig_ == nullptr
        && this->buildDuration_ == nullptr && this->codeConfig_ == nullptr && this->createTime_ == nullptr && this->deployConfig_ == nullptr && this->deployDuration_ == nullptr
        && this->endTime_ == nullptr && this->imageConfig_ == nullptr && this->packageConfig_ == nullptr && this->pipelineId_ == nullptr && this->pipelineRunId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->steps_ == nullptr && this->triggerConfig_ == nullptr && this->versionId_ == nullptr
        && this->waitDuration_ == nullptr; };
    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const BuildPipelineRun::BuildConfig & getBuildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, BuildPipelineRun::BuildConfig) };
    inline BuildPipelineRun::BuildConfig getBuildConfig() { DARABONBA_PTR_GET(buildConfig_, BuildPipelineRun::BuildConfig) };
    inline BuildPipelineRun& setBuildConfig(const BuildPipelineRun::BuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline BuildPipelineRun& setBuildConfig(BuildPipelineRun::BuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // buildDuration Field Functions 
    bool hasBuildDuration() const { return this->buildDuration_ != nullptr;};
    void deleteBuildDuration() { this->buildDuration_ = nullptr;};
    inline int64_t getBuildDuration() const { DARABONBA_PTR_GET_DEFAULT(buildDuration_, 0L) };
    inline BuildPipelineRun& setBuildDuration(int64_t buildDuration) { DARABONBA_PTR_SET_VALUE(buildDuration_, buildDuration) };


    // codeConfig Field Functions 
    bool hasCodeConfig() const { return this->codeConfig_ != nullptr;};
    void deleteCodeConfig() { this->codeConfig_ = nullptr;};
    inline const BuildPipelineRun::CodeConfig & getCodeConfig() const { DARABONBA_PTR_GET_CONST(codeConfig_, BuildPipelineRun::CodeConfig) };
    inline BuildPipelineRun::CodeConfig getCodeConfig() { DARABONBA_PTR_GET(codeConfig_, BuildPipelineRun::CodeConfig) };
    inline BuildPipelineRun& setCodeConfig(const BuildPipelineRun::CodeConfig & codeConfig) { DARABONBA_PTR_SET_VALUE(codeConfig_, codeConfig) };
    inline BuildPipelineRun& setCodeConfig(BuildPipelineRun::CodeConfig && codeConfig) { DARABONBA_PTR_SET_RVALUE(codeConfig_, codeConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline BuildPipelineRun& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deployConfig Field Functions 
    bool hasDeployConfig() const { return this->deployConfig_ != nullptr;};
    void deleteDeployConfig() { this->deployConfig_ = nullptr;};
    inline const BuildPipelineRun::DeployConfig & getDeployConfig() const { DARABONBA_PTR_GET_CONST(deployConfig_, BuildPipelineRun::DeployConfig) };
    inline BuildPipelineRun::DeployConfig getDeployConfig() { DARABONBA_PTR_GET(deployConfig_, BuildPipelineRun::DeployConfig) };
    inline BuildPipelineRun& setDeployConfig(const BuildPipelineRun::DeployConfig & deployConfig) { DARABONBA_PTR_SET_VALUE(deployConfig_, deployConfig) };
    inline BuildPipelineRun& setDeployConfig(BuildPipelineRun::DeployConfig && deployConfig) { DARABONBA_PTR_SET_RVALUE(deployConfig_, deployConfig) };


    // deployDuration Field Functions 
    bool hasDeployDuration() const { return this->deployDuration_ != nullptr;};
    void deleteDeployDuration() { this->deployDuration_ = nullptr;};
    inline int64_t getDeployDuration() const { DARABONBA_PTR_GET_DEFAULT(deployDuration_, 0L) };
    inline BuildPipelineRun& setDeployDuration(int64_t deployDuration) { DARABONBA_PTR_SET_VALUE(deployDuration_, deployDuration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline BuildPipelineRun& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const BuildPipelineRun::ImageConfig & getImageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, BuildPipelineRun::ImageConfig) };
    inline BuildPipelineRun::ImageConfig getImageConfig() { DARABONBA_PTR_GET(imageConfig_, BuildPipelineRun::ImageConfig) };
    inline BuildPipelineRun& setImageConfig(const BuildPipelineRun::ImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline BuildPipelineRun& setImageConfig(BuildPipelineRun::ImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const BuildPipelineRun::PackageConfig & getPackageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, BuildPipelineRun::PackageConfig) };
    inline BuildPipelineRun::PackageConfig getPackageConfig() { DARABONBA_PTR_GET(packageConfig_, BuildPipelineRun::PackageConfig) };
    inline BuildPipelineRun& setPackageConfig(const BuildPipelineRun::PackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline BuildPipelineRun& setPackageConfig(BuildPipelineRun::PackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline BuildPipelineRun& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline BuildPipelineRun& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline BuildPipelineRun& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BuildPipelineRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<BuildPipelineRun::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<BuildPipelineRun::Steps>) };
    inline vector<BuildPipelineRun::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<BuildPipelineRun::Steps>) };
    inline BuildPipelineRun& setSteps(const vector<BuildPipelineRun::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline BuildPipelineRun& setSteps(vector<BuildPipelineRun::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const BuildPipelineRun::TriggerConfig & getTriggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, BuildPipelineRun::TriggerConfig) };
    inline BuildPipelineRun::TriggerConfig getTriggerConfig() { DARABONBA_PTR_GET(triggerConfig_, BuildPipelineRun::TriggerConfig) };
    inline BuildPipelineRun& setTriggerConfig(const BuildPipelineRun::TriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline BuildPipelineRun& setTriggerConfig(BuildPipelineRun::TriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline BuildPipelineRun& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // waitDuration Field Functions 
    bool hasWaitDuration() const { return this->waitDuration_ != nullptr;};
    void deleteWaitDuration() { this->waitDuration_ = nullptr;};
    inline int64_t getWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(waitDuration_, 0L) };
    inline BuildPipelineRun& setWaitDuration(int64_t waitDuration) { DARABONBA_PTR_SET_VALUE(waitDuration_, waitDuration) };


  protected:
    shared_ptr<BuildPipelineRun::BuildConfig> buildConfig_ {};
    shared_ptr<int64_t> buildDuration_ {};
    shared_ptr<BuildPipelineRun::CodeConfig> codeConfig_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<BuildPipelineRun::DeployConfig> deployConfig_ {};
    shared_ptr<int64_t> deployDuration_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<BuildPipelineRun::ImageConfig> imageConfig_ {};
    shared_ptr<BuildPipelineRun::PackageConfig> packageConfig_ {};
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> pipelineRunId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<BuildPipelineRun::Steps>> steps_ {};
    shared_ptr<BuildPipelineRun::TriggerConfig> triggerConfig_ {};
    shared_ptr<string> versionId_ {};
    shared_ptr<int64_t> waitDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
