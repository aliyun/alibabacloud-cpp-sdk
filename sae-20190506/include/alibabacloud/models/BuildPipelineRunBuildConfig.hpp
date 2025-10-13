// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINERUNBUILDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINERUNBUILDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TomcatConfig.hpp>
#include <alibabacloud/models/BuildPipelineRunBuildConfigTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineRunBuildConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineRunBuildConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, BuildPipelineRunBuildConfig& obj) { 
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
    BuildPipelineRunBuildConfig() = default ;
    BuildPipelineRunBuildConfig(const BuildPipelineRunBuildConfig &) = default ;
    BuildPipelineRunBuildConfig(BuildPipelineRunBuildConfig &&) = default ;
    BuildPipelineRunBuildConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineRunBuildConfig() = default ;
    BuildPipelineRunBuildConfig& operator=(const BuildPipelineRunBuildConfig &) = default ;
    BuildPipelineRunBuildConfig& operator=(BuildPipelineRunBuildConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beforeBuildCommand_ == nullptr
        && return this->buildType_ == nullptr && return this->dockerfilePath_ == nullptr && return this->runCommand_ == nullptr && return this->runtimeType_ == nullptr && return this->runtimeVersion_ == nullptr
        && return this->tomcatConfig_ == nullptr && return this->trigger_ == nullptr && return this->workingDir_ == nullptr; };
    // beforeBuildCommand Field Functions 
    bool hasBeforeBuildCommand() const { return this->beforeBuildCommand_ != nullptr;};
    void deleteBeforeBuildCommand() { this->beforeBuildCommand_ = nullptr;};
    inline string beforeBuildCommand() const { DARABONBA_PTR_GET_DEFAULT(beforeBuildCommand_, "") };
    inline BuildPipelineRunBuildConfig& setBeforeBuildCommand(string beforeBuildCommand) { DARABONBA_PTR_SET_VALUE(beforeBuildCommand_, beforeBuildCommand) };


    // buildType Field Functions 
    bool hasBuildType() const { return this->buildType_ != nullptr;};
    void deleteBuildType() { this->buildType_ = nullptr;};
    inline string buildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
    inline BuildPipelineRunBuildConfig& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


    // dockerfilePath Field Functions 
    bool hasDockerfilePath() const { return this->dockerfilePath_ != nullptr;};
    void deleteDockerfilePath() { this->dockerfilePath_ = nullptr;};
    inline string dockerfilePath() const { DARABONBA_PTR_GET_DEFAULT(dockerfilePath_, "") };
    inline BuildPipelineRunBuildConfig& setDockerfilePath(string dockerfilePath) { DARABONBA_PTR_SET_VALUE(dockerfilePath_, dockerfilePath) };


    // runCommand Field Functions 
    bool hasRunCommand() const { return this->runCommand_ != nullptr;};
    void deleteRunCommand() { this->runCommand_ = nullptr;};
    inline string runCommand() const { DARABONBA_PTR_GET_DEFAULT(runCommand_, "") };
    inline BuildPipelineRunBuildConfig& setRunCommand(string runCommand) { DARABONBA_PTR_SET_VALUE(runCommand_, runCommand) };


    // runtimeType Field Functions 
    bool hasRuntimeType() const { return this->runtimeType_ != nullptr;};
    void deleteRuntimeType() { this->runtimeType_ = nullptr;};
    inline string runtimeType() const { DARABONBA_PTR_GET_DEFAULT(runtimeType_, "") };
    inline BuildPipelineRunBuildConfig& setRuntimeType(string runtimeType) { DARABONBA_PTR_SET_VALUE(runtimeType_, runtimeType) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline BuildPipelineRunBuildConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // tomcatConfig Field Functions 
    bool hasTomcatConfig() const { return this->tomcatConfig_ != nullptr;};
    void deleteTomcatConfig() { this->tomcatConfig_ = nullptr;};
    inline const Models::TomcatConfig & tomcatConfig() const { DARABONBA_PTR_GET_CONST(tomcatConfig_, Models::TomcatConfig) };
    inline Models::TomcatConfig tomcatConfig() { DARABONBA_PTR_GET(tomcatConfig_, Models::TomcatConfig) };
    inline BuildPipelineRunBuildConfig& setTomcatConfig(const Models::TomcatConfig & tomcatConfig) { DARABONBA_PTR_SET_VALUE(tomcatConfig_, tomcatConfig) };
    inline BuildPipelineRunBuildConfig& setTomcatConfig(Models::TomcatConfig && tomcatConfig) { DARABONBA_PTR_SET_RVALUE(tomcatConfig_, tomcatConfig) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::BuildPipelineRunBuildConfigTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::BuildPipelineRunBuildConfigTrigger) };
    inline Models::BuildPipelineRunBuildConfigTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::BuildPipelineRunBuildConfigTrigger) };
    inline BuildPipelineRunBuildConfig& setTrigger(const Models::BuildPipelineRunBuildConfigTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline BuildPipelineRunBuildConfig& setTrigger(Models::BuildPipelineRunBuildConfigTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline BuildPipelineRunBuildConfig& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    std::shared_ptr<string> beforeBuildCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> buildType_ = nullptr;
    std::shared_ptr<string> dockerfilePath_ = nullptr;
    std::shared_ptr<string> runCommand_ = nullptr;
    std::shared_ptr<string> runtimeType_ = nullptr;
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    std::shared_ptr<Models::TomcatConfig> tomcatConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::BuildPipelineRunBuildConfigTrigger> trigger_ = nullptr;
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
