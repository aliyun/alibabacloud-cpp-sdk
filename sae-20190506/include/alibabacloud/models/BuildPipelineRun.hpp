// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUN_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BuildPipelineRunBuildConfig.hpp>
#include <alibabacloud/models/BuildPipelineRunCodeConfig.hpp>
#include <alibabacloud/models/BuildPipelineRunDeployConfig.hpp>
#include <alibabacloud/models/BuildPipelineRunImageConfig.hpp>
#include <alibabacloud/models/BuildPipelineRunPackageConfig.hpp>
#include <vector>
#include <alibabacloud/models/BuildPipelineRunSteps.hpp>
#include <alibabacloud/models/BuildPipelineRunTriggerConfig.hpp>
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
    virtual bool empty() const override { return this->buildConfig_ == nullptr
        && return this->buildDuration_ == nullptr && return this->codeConfig_ == nullptr && return this->createTime_ == nullptr && return this->deployConfig_ == nullptr && return this->deployDuration_ == nullptr
        && return this->endTime_ == nullptr && return this->imageConfig_ == nullptr && return this->packageConfig_ == nullptr && return this->pipelineId_ == nullptr && return this->pipelineRunId_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->steps_ == nullptr && return this->triggerConfig_ == nullptr && return this->versionId_ == nullptr
        && return this->waitDuration_ == nullptr; };
    // buildConfig Field Functions 
    bool hasBuildConfig() const { return this->buildConfig_ != nullptr;};
    void deleteBuildConfig() { this->buildConfig_ = nullptr;};
    inline const BuildPipelineRunBuildConfig & buildConfig() const { DARABONBA_PTR_GET_CONST(buildConfig_, BuildPipelineRunBuildConfig) };
    inline BuildPipelineRunBuildConfig buildConfig() { DARABONBA_PTR_GET(buildConfig_, BuildPipelineRunBuildConfig) };
    inline BuildPipelineRun& setBuildConfig(const BuildPipelineRunBuildConfig & buildConfig) { DARABONBA_PTR_SET_VALUE(buildConfig_, buildConfig) };
    inline BuildPipelineRun& setBuildConfig(BuildPipelineRunBuildConfig && buildConfig) { DARABONBA_PTR_SET_RVALUE(buildConfig_, buildConfig) };


    // buildDuration Field Functions 
    bool hasBuildDuration() const { return this->buildDuration_ != nullptr;};
    void deleteBuildDuration() { this->buildDuration_ = nullptr;};
    inline int64_t buildDuration() const { DARABONBA_PTR_GET_DEFAULT(buildDuration_, 0L) };
    inline BuildPipelineRun& setBuildDuration(int64_t buildDuration) { DARABONBA_PTR_SET_VALUE(buildDuration_, buildDuration) };


    // codeConfig Field Functions 
    bool hasCodeConfig() const { return this->codeConfig_ != nullptr;};
    void deleteCodeConfig() { this->codeConfig_ = nullptr;};
    inline const BuildPipelineRunCodeConfig & codeConfig() const { DARABONBA_PTR_GET_CONST(codeConfig_, BuildPipelineRunCodeConfig) };
    inline BuildPipelineRunCodeConfig codeConfig() { DARABONBA_PTR_GET(codeConfig_, BuildPipelineRunCodeConfig) };
    inline BuildPipelineRun& setCodeConfig(const BuildPipelineRunCodeConfig & codeConfig) { DARABONBA_PTR_SET_VALUE(codeConfig_, codeConfig) };
    inline BuildPipelineRun& setCodeConfig(BuildPipelineRunCodeConfig && codeConfig) { DARABONBA_PTR_SET_RVALUE(codeConfig_, codeConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline BuildPipelineRun& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deployConfig Field Functions 
    bool hasDeployConfig() const { return this->deployConfig_ != nullptr;};
    void deleteDeployConfig() { this->deployConfig_ = nullptr;};
    inline const BuildPipelineRunDeployConfig & deployConfig() const { DARABONBA_PTR_GET_CONST(deployConfig_, BuildPipelineRunDeployConfig) };
    inline BuildPipelineRunDeployConfig deployConfig() { DARABONBA_PTR_GET(deployConfig_, BuildPipelineRunDeployConfig) };
    inline BuildPipelineRun& setDeployConfig(const BuildPipelineRunDeployConfig & deployConfig) { DARABONBA_PTR_SET_VALUE(deployConfig_, deployConfig) };
    inline BuildPipelineRun& setDeployConfig(BuildPipelineRunDeployConfig && deployConfig) { DARABONBA_PTR_SET_RVALUE(deployConfig_, deployConfig) };


    // deployDuration Field Functions 
    bool hasDeployDuration() const { return this->deployDuration_ != nullptr;};
    void deleteDeployDuration() { this->deployDuration_ = nullptr;};
    inline int64_t deployDuration() const { DARABONBA_PTR_GET_DEFAULT(deployDuration_, 0L) };
    inline BuildPipelineRun& setDeployDuration(int64_t deployDuration) { DARABONBA_PTR_SET_VALUE(deployDuration_, deployDuration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline BuildPipelineRun& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const BuildPipelineRunImageConfig & imageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, BuildPipelineRunImageConfig) };
    inline BuildPipelineRunImageConfig imageConfig() { DARABONBA_PTR_GET(imageConfig_, BuildPipelineRunImageConfig) };
    inline BuildPipelineRun& setImageConfig(const BuildPipelineRunImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline BuildPipelineRun& setImageConfig(BuildPipelineRunImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const BuildPipelineRunPackageConfig & packageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, BuildPipelineRunPackageConfig) };
    inline BuildPipelineRunPackageConfig packageConfig() { DARABONBA_PTR_GET(packageConfig_, BuildPipelineRunPackageConfig) };
    inline BuildPipelineRun& setPackageConfig(const BuildPipelineRunPackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline BuildPipelineRun& setPackageConfig(BuildPipelineRunPackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline BuildPipelineRun& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline BuildPipelineRun& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline BuildPipelineRun& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BuildPipelineRun& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<BuildPipelineRunSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<BuildPipelineRunSteps>) };
    inline vector<BuildPipelineRunSteps> steps() { DARABONBA_PTR_GET(steps_, vector<BuildPipelineRunSteps>) };
    inline BuildPipelineRun& setSteps(const vector<BuildPipelineRunSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline BuildPipelineRun& setSteps(vector<BuildPipelineRunSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline const BuildPipelineRunTriggerConfig & triggerConfig() const { DARABONBA_PTR_GET_CONST(triggerConfig_, BuildPipelineRunTriggerConfig) };
    inline BuildPipelineRunTriggerConfig triggerConfig() { DARABONBA_PTR_GET(triggerConfig_, BuildPipelineRunTriggerConfig) };
    inline BuildPipelineRun& setTriggerConfig(const BuildPipelineRunTriggerConfig & triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };
    inline BuildPipelineRun& setTriggerConfig(BuildPipelineRunTriggerConfig && triggerConfig) { DARABONBA_PTR_SET_RVALUE(triggerConfig_, triggerConfig) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline BuildPipelineRun& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // waitDuration Field Functions 
    bool hasWaitDuration() const { return this->waitDuration_ != nullptr;};
    void deleteWaitDuration() { this->waitDuration_ = nullptr;};
    inline int64_t waitDuration() const { DARABONBA_PTR_GET_DEFAULT(waitDuration_, 0L) };
    inline BuildPipelineRun& setWaitDuration(int64_t waitDuration) { DARABONBA_PTR_SET_VALUE(waitDuration_, waitDuration) };


  protected:
    std::shared_ptr<BuildPipelineRunBuildConfig> buildConfig_ = nullptr;
    std::shared_ptr<int64_t> buildDuration_ = nullptr;
    std::shared_ptr<BuildPipelineRunCodeConfig> codeConfig_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<BuildPipelineRunDeployConfig> deployConfig_ = nullptr;
    std::shared_ptr<int64_t> deployDuration_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<BuildPipelineRunImageConfig> imageConfig_ = nullptr;
    std::shared_ptr<BuildPipelineRunPackageConfig> packageConfig_ = nullptr;
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> pipelineRunId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<BuildPipelineRunSteps>> steps_ = nullptr;
    std::shared_ptr<BuildPipelineRunTriggerConfig> triggerConfig_ = nullptr;
    std::shared_ptr<string> versionId_ = nullptr;
    std::shared_ptr<int64_t> waitDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
