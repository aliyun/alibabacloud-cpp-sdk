// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersLivenessProbe.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersReadinessProbe.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersSecurityContext.hpp>
#include <vector>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersEnvironmentVars.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersPorts.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestContainersVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestContainers& obj) { 
      DARABONBA_PTR_TO_JSON(LivenessProbe, livenessProbe_);
      DARABONBA_PTR_TO_JSON(ReadinessProbe, readinessProbe_);
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerExecs, lifecyclePostStartHandlerExecs_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetHost, lifecyclePostStartHandlerHttpGetHost_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetPath, lifecyclePostStartHandlerHttpGetPath_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetPort, lifecyclePostStartHandlerHttpGetPort_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetScheme, lifecyclePostStartHandlerHttpGetScheme_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerTcpSocketHost, lifecyclePostStartHandlerTcpSocketHost_);
      DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerTcpSocketPort, lifecyclePostStartHandlerTcpSocketPort_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerExecs, lifecyclePreStopHandlerExecs_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetHost, lifecyclePreStopHandlerHttpGetHost_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetPath, lifecyclePreStopHandlerHttpGetPath_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetPort, lifecyclePreStopHandlerHttpGetPort_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetScheme, lifecyclePreStopHandlerHttpGetScheme_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerTcpSocketHost, lifecyclePreStopHandlerTcpSocketHost_);
      DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerTcpSocketPort, lifecyclePreStopHandlerTcpSocketPort_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(Stdin, stdin_);
      DARABONBA_PTR_TO_JSON(StdinOnce, stdinOnce_);
      DARABONBA_PTR_TO_JSON(Tty, tty_);
      DARABONBA_PTR_TO_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(LivenessProbe, livenessProbe_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbe, readinessProbe_);
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerExecs, lifecyclePostStartHandlerExecs_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetHost, lifecyclePostStartHandlerHttpGetHost_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetPath, lifecyclePostStartHandlerHttpGetPath_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetPort, lifecyclePostStartHandlerHttpGetPort_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetScheme, lifecyclePostStartHandlerHttpGetScheme_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerTcpSocketHost, lifecyclePostStartHandlerTcpSocketHost_);
      DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerTcpSocketPort, lifecyclePostStartHandlerTcpSocketPort_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerExecs, lifecyclePreStopHandlerExecs_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetHost, lifecyclePreStopHandlerHttpGetHost_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetPath, lifecyclePreStopHandlerHttpGetPath_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetPort, lifecyclePreStopHandlerHttpGetPort_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetScheme, lifecyclePreStopHandlerHttpGetScheme_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerTcpSocketHost, lifecyclePreStopHandlerTcpSocketHost_);
      DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerTcpSocketPort, lifecyclePreStopHandlerTcpSocketPort_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(Stdin, stdin_);
      DARABONBA_PTR_FROM_JSON(StdinOnce, stdinOnce_);
      DARABONBA_PTR_FROM_JSON(Tty, tty_);
      DARABONBA_PTR_FROM_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    CreateEciScalingConfigurationRequestContainers() = default ;
    CreateEciScalingConfigurationRequestContainers(const CreateEciScalingConfigurationRequestContainers &) = default ;
    CreateEciScalingConfigurationRequestContainers(CreateEciScalingConfigurationRequestContainers &&) = default ;
    CreateEciScalingConfigurationRequestContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestContainers() = default ;
    CreateEciScalingConfigurationRequestContainers& operator=(const CreateEciScalingConfigurationRequestContainers &) = default ;
    CreateEciScalingConfigurationRequestContainers& operator=(CreateEciScalingConfigurationRequestContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livenessProbe_ != nullptr
        && this->readinessProbe_ != nullptr && this->securityContext_ != nullptr && this->args_ != nullptr && this->commands_ != nullptr && this->cpu_ != nullptr
        && this->environmentVars_ != nullptr && this->gpu_ != nullptr && this->image_ != nullptr && this->imagePullPolicy_ != nullptr && this->lifecyclePostStartHandlerExecs_ != nullptr
        && this->lifecyclePostStartHandlerHttpGetHost_ != nullptr && this->lifecyclePostStartHandlerHttpGetPath_ != nullptr && this->lifecyclePostStartHandlerHttpGetPort_ != nullptr && this->lifecyclePostStartHandlerHttpGetScheme_ != nullptr && this->lifecyclePostStartHandlerTcpSocketHost_ != nullptr
        && this->lifecyclePostStartHandlerTcpSocketPort_ != nullptr && this->lifecyclePreStopHandlerExecs_ != nullptr && this->lifecyclePreStopHandlerHttpGetHost_ != nullptr && this->lifecyclePreStopHandlerHttpGetPath_ != nullptr && this->lifecyclePreStopHandlerHttpGetPort_ != nullptr
        && this->lifecyclePreStopHandlerHttpGetScheme_ != nullptr && this->lifecyclePreStopHandlerTcpSocketHost_ != nullptr && this->lifecyclePreStopHandlerTcpSocketPort_ != nullptr && this->memory_ != nullptr && this->name_ != nullptr
        && this->ports_ != nullptr && this->stdin_ != nullptr && this->stdinOnce_ != nullptr && this->tty_ != nullptr && this->volumeMounts_ != nullptr
        && this->workingDir_ != nullptr; };
    // livenessProbe Field Functions 
    bool hasLivenessProbe() const { return this->livenessProbe_ != nullptr;};
    void deleteLivenessProbe() { this->livenessProbe_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestContainersLivenessProbe & livenessProbe() const { DARABONBA_PTR_GET_CONST(livenessProbe_, Models::CreateEciScalingConfigurationRequestContainersLivenessProbe) };
    inline Models::CreateEciScalingConfigurationRequestContainersLivenessProbe livenessProbe() { DARABONBA_PTR_GET(livenessProbe_, Models::CreateEciScalingConfigurationRequestContainersLivenessProbe) };
    inline CreateEciScalingConfigurationRequestContainers& setLivenessProbe(const Models::CreateEciScalingConfigurationRequestContainersLivenessProbe & livenessProbe) { DARABONBA_PTR_SET_VALUE(livenessProbe_, livenessProbe) };
    inline CreateEciScalingConfigurationRequestContainers& setLivenessProbe(Models::CreateEciScalingConfigurationRequestContainersLivenessProbe && livenessProbe) { DARABONBA_PTR_SET_RVALUE(livenessProbe_, livenessProbe) };


    // readinessProbe Field Functions 
    bool hasReadinessProbe() const { return this->readinessProbe_ != nullptr;};
    void deleteReadinessProbe() { this->readinessProbe_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestContainersReadinessProbe & readinessProbe() const { DARABONBA_PTR_GET_CONST(readinessProbe_, Models::CreateEciScalingConfigurationRequestContainersReadinessProbe) };
    inline Models::CreateEciScalingConfigurationRequestContainersReadinessProbe readinessProbe() { DARABONBA_PTR_GET(readinessProbe_, Models::CreateEciScalingConfigurationRequestContainersReadinessProbe) };
    inline CreateEciScalingConfigurationRequestContainers& setReadinessProbe(const Models::CreateEciScalingConfigurationRequestContainersReadinessProbe & readinessProbe) { DARABONBA_PTR_SET_VALUE(readinessProbe_, readinessProbe) };
    inline CreateEciScalingConfigurationRequestContainers& setReadinessProbe(Models::CreateEciScalingConfigurationRequestContainersReadinessProbe && readinessProbe) { DARABONBA_PTR_SET_RVALUE(readinessProbe_, readinessProbe) };


    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestContainersSecurityContext & securityContext() const { DARABONBA_PTR_GET_CONST(securityContext_, Models::CreateEciScalingConfigurationRequestContainersSecurityContext) };
    inline Models::CreateEciScalingConfigurationRequestContainersSecurityContext securityContext() { DARABONBA_PTR_GET(securityContext_, Models::CreateEciScalingConfigurationRequestContainersSecurityContext) };
    inline CreateEciScalingConfigurationRequestContainers& setSecurityContext(const Models::CreateEciScalingConfigurationRequestContainersSecurityContext & securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };
    inline CreateEciScalingConfigurationRequestContainers& setSecurityContext(Models::CreateEciScalingConfigurationRequestContainersSecurityContext && securityContext) { DARABONBA_PTR_SET_RVALUE(securityContext_, securityContext) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline CreateEciScalingConfigurationRequestContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline CreateEciScalingConfigurationRequestContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateEciScalingConfigurationRequestContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // environmentVars Field Functions 
    bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
    void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars> & environmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars>) };
    inline vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars> environmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars>) };
    inline CreateEciScalingConfigurationRequestContainers& setEnvironmentVars(const vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
    inline CreateEciScalingConfigurationRequestContainers& setEnvironmentVars(vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline CreateEciScalingConfigurationRequestContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePullPolicy Field Functions 
    bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
    void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
    inline string imagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


    // lifecyclePostStartHandlerExecs Field Functions 
    bool hasLifecyclePostStartHandlerExecs() const { return this->lifecyclePostStartHandlerExecs_ != nullptr;};
    void deleteLifecyclePostStartHandlerExecs() { this->lifecyclePostStartHandlerExecs_ = nullptr;};
    inline const vector<string> & lifecyclePostStartHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePostStartHandlerExecs_, vector<string>) };
    inline vector<string> lifecyclePostStartHandlerExecs() { DARABONBA_PTR_GET(lifecyclePostStartHandlerExecs_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerExecs(const vector<string> & lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerExecs(vector<string> && lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };


    // lifecyclePostStartHandlerHttpGetHost Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetHost() const { return this->lifecyclePostStartHandlerHttpGetHost_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetHost() { this->lifecyclePostStartHandlerHttpGetHost_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetHost_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerHttpGetHost(string lifecyclePostStartHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetHost_, lifecyclePostStartHandlerHttpGetHost) };


    // lifecyclePostStartHandlerHttpGetPath Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetPath() const { return this->lifecyclePostStartHandlerHttpGetPath_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetPath() { this->lifecyclePostStartHandlerHttpGetPath_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPath_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerHttpGetPath(string lifecyclePostStartHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPath_, lifecyclePostStartHandlerHttpGetPath) };


    // lifecyclePostStartHandlerHttpGetPort Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetPort() const { return this->lifecyclePostStartHandlerHttpGetPort_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetPort() { this->lifecyclePostStartHandlerHttpGetPort_ = nullptr;};
    inline int32_t lifecyclePostStartHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPort_, 0) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerHttpGetPort(int32_t lifecyclePostStartHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPort_, lifecyclePostStartHandlerHttpGetPort) };


    // lifecyclePostStartHandlerHttpGetScheme Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetScheme() const { return this->lifecyclePostStartHandlerHttpGetScheme_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetScheme() { this->lifecyclePostStartHandlerHttpGetScheme_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetScheme_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerHttpGetScheme(string lifecyclePostStartHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetScheme_, lifecyclePostStartHandlerHttpGetScheme) };


    // lifecyclePostStartHandlerTcpSocketHost Field Functions 
    bool hasLifecyclePostStartHandlerTcpSocketHost() const { return this->lifecyclePostStartHandlerTcpSocketHost_ != nullptr;};
    void deleteLifecyclePostStartHandlerTcpSocketHost() { this->lifecyclePostStartHandlerTcpSocketHost_ = nullptr;};
    inline string lifecyclePostStartHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketHost_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerTcpSocketHost(string lifecyclePostStartHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketHost_, lifecyclePostStartHandlerTcpSocketHost) };


    // lifecyclePostStartHandlerTcpSocketPort Field Functions 
    bool hasLifecyclePostStartHandlerTcpSocketPort() const { return this->lifecyclePostStartHandlerTcpSocketPort_ != nullptr;};
    void deleteLifecyclePostStartHandlerTcpSocketPort() { this->lifecyclePostStartHandlerTcpSocketPort_ = nullptr;};
    inline int32_t lifecyclePostStartHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketPort_, 0) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePostStartHandlerTcpSocketPort(int32_t lifecyclePostStartHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketPort_, lifecyclePostStartHandlerTcpSocketPort) };


    // lifecyclePreStopHandlerExecs Field Functions 
    bool hasLifecyclePreStopHandlerExecs() const { return this->lifecyclePreStopHandlerExecs_ != nullptr;};
    void deleteLifecyclePreStopHandlerExecs() { this->lifecyclePreStopHandlerExecs_ = nullptr;};
    inline const vector<string> & lifecyclePreStopHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePreStopHandlerExecs_, vector<string>) };
    inline vector<string> lifecyclePreStopHandlerExecs() { DARABONBA_PTR_GET(lifecyclePreStopHandlerExecs_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerExecs(const vector<string> & lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerExecs(vector<string> && lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };


    // lifecyclePreStopHandlerHttpGetHost Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetHost() const { return this->lifecyclePreStopHandlerHttpGetHost_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetHost() { this->lifecyclePreStopHandlerHttpGetHost_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetHost_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerHttpGetHost(string lifecyclePreStopHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetHost_, lifecyclePreStopHandlerHttpGetHost) };


    // lifecyclePreStopHandlerHttpGetPath Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetPath() const { return this->lifecyclePreStopHandlerHttpGetPath_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetPath() { this->lifecyclePreStopHandlerHttpGetPath_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPath_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerHttpGetPath(string lifecyclePreStopHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPath_, lifecyclePreStopHandlerHttpGetPath) };


    // lifecyclePreStopHandlerHttpGetPort Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetPort() const { return this->lifecyclePreStopHandlerHttpGetPort_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetPort() { this->lifecyclePreStopHandlerHttpGetPort_ = nullptr;};
    inline int32_t lifecyclePreStopHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPort_, 0) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerHttpGetPort(int32_t lifecyclePreStopHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPort_, lifecyclePreStopHandlerHttpGetPort) };


    // lifecyclePreStopHandlerHttpGetScheme Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetScheme() const { return this->lifecyclePreStopHandlerHttpGetScheme_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetScheme() { this->lifecyclePreStopHandlerHttpGetScheme_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetScheme_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerHttpGetScheme(string lifecyclePreStopHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetScheme_, lifecyclePreStopHandlerHttpGetScheme) };


    // lifecyclePreStopHandlerTcpSocketHost Field Functions 
    bool hasLifecyclePreStopHandlerTcpSocketHost() const { return this->lifecyclePreStopHandlerTcpSocketHost_ != nullptr;};
    void deleteLifecyclePreStopHandlerTcpSocketHost() { this->lifecyclePreStopHandlerTcpSocketHost_ = nullptr;};
    inline string lifecyclePreStopHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketHost_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerTcpSocketHost(string lifecyclePreStopHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketHost_, lifecyclePreStopHandlerTcpSocketHost) };


    // lifecyclePreStopHandlerTcpSocketPort Field Functions 
    bool hasLifecyclePreStopHandlerTcpSocketPort() const { return this->lifecyclePreStopHandlerTcpSocketPort_ != nullptr;};
    void deleteLifecyclePreStopHandlerTcpSocketPort() { this->lifecyclePreStopHandlerTcpSocketPort_ = nullptr;};
    inline int32_t lifecyclePreStopHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketPort_, 0) };
    inline CreateEciScalingConfigurationRequestContainers& setLifecyclePreStopHandlerTcpSocketPort(int32_t lifecyclePreStopHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketPort_, lifecyclePreStopHandlerTcpSocketPort) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline CreateEciScalingConfigurationRequestContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestContainersPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::CreateEciScalingConfigurationRequestContainersPorts>) };
    inline vector<Models::CreateEciScalingConfigurationRequestContainersPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::CreateEciScalingConfigurationRequestContainersPorts>) };
    inline CreateEciScalingConfigurationRequestContainers& setPorts(const vector<Models::CreateEciScalingConfigurationRequestContainersPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline CreateEciScalingConfigurationRequestContainers& setPorts(vector<Models::CreateEciScalingConfigurationRequestContainersPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // stdin Field Functions 
    bool hasStdin() const { return this->stdin_ != nullptr;};
    void deleteStdin() { this->stdin_ = nullptr;};
    inline bool stdin() const { DARABONBA_PTR_GET_DEFAULT(stdin_, false) };
    inline CreateEciScalingConfigurationRequestContainers& setStdin(bool stdin) { DARABONBA_PTR_SET_VALUE(stdin_, stdin) };


    // stdinOnce Field Functions 
    bool hasStdinOnce() const { return this->stdinOnce_ != nullptr;};
    void deleteStdinOnce() { this->stdinOnce_ = nullptr;};
    inline bool stdinOnce() const { DARABONBA_PTR_GET_DEFAULT(stdinOnce_, false) };
    inline CreateEciScalingConfigurationRequestContainers& setStdinOnce(bool stdinOnce) { DARABONBA_PTR_SET_VALUE(stdinOnce_, stdinOnce) };


    // tty Field Functions 
    bool hasTty() const { return this->tty_ != nullptr;};
    void deleteTty() { this->tty_ = nullptr;};
    inline bool tty() const { DARABONBA_PTR_GET_DEFAULT(tty_, false) };
    inline CreateEciScalingConfigurationRequestContainers& setTty(bool tty) { DARABONBA_PTR_SET_VALUE(tty_, tty) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts> & volumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts>) };
    inline vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts> volumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts>) };
    inline CreateEciScalingConfigurationRequestContainers& setVolumeMounts(const vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline CreateEciScalingConfigurationRequestContainers& setVolumeMounts(vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline CreateEciScalingConfigurationRequestContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestContainersLivenessProbe> livenessProbe_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestContainersReadinessProbe> readinessProbe_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestContainersSecurityContext> securityContext_ = nullptr;
    // The startup arguments of the container. You can specify up to 10 arguments.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The commands that you want to run by using the CLI for liveness probing within the container.
    std::shared_ptr<vector<string>> commands_ = nullptr;
    // The number of vCPUs per container.
    std::shared_ptr<float> cpu_ = nullptr;
    // The environment variables.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestContainersEnvironmentVars>> environmentVars_ = nullptr;
    // The number of GPUs per container.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The image in the container.
    std::shared_ptr<string> image_ = nullptr;
    // The image pulling policy. Valid values:
    // 
    // *   Always: Each time instances are created, image pulling is performed.
    // *   IfNotPresent: Image pulling is performed based on your business requirements. On-premises images are used by default. If no on-premises images are available, images are pulled from remote sources.
    // *   Never: Image pulling is not performed. On-premises images are always used. Image pulling is not performed.
    std::shared_ptr<string> imagePullPolicy_ = nullptr;
    // The commands that you want to run by using the CLI to configure the postStart callback function within the container.
    std::shared_ptr<vector<string>> lifecyclePostStartHandlerExecs_ = nullptr;
    // The IP address of the host to which you want to send HTTP GET requests to configure the postStart callback function.
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetHost_ = nullptr;
    // The path to which you want to send HTTP GET requests to configure the postStart callback function.
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetPath_ = nullptr;
    // The port over which you want to send HTTP GET requests to configure the postStart callback function.
    std::shared_ptr<int32_t> lifecyclePostStartHandlerHttpGetPort_ = nullptr;
    // The protocol type of HTTP GET requests that you want to send to configure the postStart callback function. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme_ = nullptr;
    // The IP address of the host detected by the TCP sockets that you want to use to configure the postStart callback function.
    std::shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost_ = nullptr;
    // The port detected by the TCP sockets that you want to use to configure the postStart callback function.
    std::shared_ptr<int32_t> lifecyclePostStartHandlerTcpSocketPort_ = nullptr;
    // The commands that you want to run by using the CLI to configure the preStop callback function within the container.
    std::shared_ptr<vector<string>> lifecyclePreStopHandlerExecs_ = nullptr;
    // The IP address of the host to which you want to send HTTP GET requests to configure the preStop callback function.
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetHost_ = nullptr;
    // The path to which you want to send HTTP GET requests to configure the preStop callback function.
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetPath_ = nullptr;
    // The port over which you want to send HTTP GET requests to configure the preStop callback function.
    std::shared_ptr<int32_t> lifecyclePreStopHandlerHttpGetPort_ = nullptr;
    // The protocol type of the HTTP GET requests that you want to send to configure the preStop callback function. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme_ = nullptr;
    // The IP address of the host detected by the TCP sockets that you want to use to configure the preStop callback function.
    std::shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost_ = nullptr;
    // The port detected by the TCP sockets that you want to use to configure the preStop callback function.
    std::shared_ptr<int32_t> lifecyclePreStopHandlerTcpSocketPort_ = nullptr;
    // The memory size that you want to allocate to the container. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The name of the container image.
    std::shared_ptr<string> name_ = nullptr;
    // The ports.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestContainersPorts>> ports_ = nullptr;
    // Specifies whether the container allocates buffer resources to standard input streams during its active runtime. If you do not specify this parameter, an end-of-file (EOF) error occurs when standard input streams in the container are read.
    // 
    // Default value: false.
    std::shared_ptr<bool> stdin_ = nullptr;
    // Specifies whether standard input streams remain connected during multiple sessions if Stdin is set to true.
    // 
    // If you set StdinOnce to true, standard input streams are connected after the container is started, and remain idle until a client is connected to receive data. After the client is disconnected, streams are also disconnected and remain disconnected until the container is restarted.
    std::shared_ptr<bool> stdinOnce_ = nullptr;
    // Specifies whether to enable interaction. Valid values:
    // 
    // *   true
    // *   false
    // 
    // If the command is a /bin/bash command, set the value to true.
    // 
    // Default value: false.
    std::shared_ptr<bool> tty_ = nullptr;
    // The volume mounts of the container.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestContainersVolumeMounts>> volumeMounts_ = nullptr;
    // The working directory of the container.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
