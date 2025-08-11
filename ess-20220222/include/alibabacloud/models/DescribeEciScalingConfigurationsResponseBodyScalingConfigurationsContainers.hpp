// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts.hpp>
#include <alibabacloud/models/DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& obj) { 
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
      DARABONBA_PTR_TO_JSON(LivenessProbeExecCommands, livenessProbeExecCommands_);
      DARABONBA_PTR_TO_JSON(LivenessProbeFailureThreshold, livenessProbeFailureThreshold_);
      DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetPath, livenessProbeHttpGetPath_);
      DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetPort, livenessProbeHttpGetPort_);
      DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetScheme, livenessProbeHttpGetScheme_);
      DARABONBA_PTR_TO_JSON(LivenessProbeInitialDelaySeconds, livenessProbeInitialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(LivenessProbePeriodSeconds, livenessProbePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(LivenessProbeSuccessThreshold, livenessProbeSuccessThreshold_);
      DARABONBA_PTR_TO_JSON(LivenessProbeTcpSocketPort, livenessProbeTcpSocketPort_);
      DARABONBA_PTR_TO_JSON(LivenessProbeTimeoutSeconds, livenessProbeTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeExecCommands, readinessProbeExecCommands_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeFailureThreshold, readinessProbeFailureThreshold_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetPath, readinessProbeHttpGetPath_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetPort, readinessProbeHttpGetPort_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetScheme, readinessProbeHttpGetScheme_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeInitialDelaySeconds, readinessProbeInitialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(ReadinessProbePeriodSeconds, readinessProbePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeSuccessThreshold, readinessProbeSuccessThreshold_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeTcpSocketPort, readinessProbeTcpSocketPort_);
      DARABONBA_PTR_TO_JSON(ReadinessProbeTimeoutSeconds, readinessProbeTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
      DARABONBA_PTR_TO_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
      DARABONBA_PTR_TO_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
      DARABONBA_PTR_TO_JSON(Stdin, stdin_);
      DARABONBA_PTR_TO_JSON(StdinOnce, stdinOnce_);
      DARABONBA_PTR_TO_JSON(Tty, tty_);
      DARABONBA_PTR_TO_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& obj) { 
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
      DARABONBA_PTR_FROM_JSON(LivenessProbeExecCommands, livenessProbeExecCommands_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeFailureThreshold, livenessProbeFailureThreshold_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetPath, livenessProbeHttpGetPath_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetPort, livenessProbeHttpGetPort_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetScheme, livenessProbeHttpGetScheme_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeInitialDelaySeconds, livenessProbeInitialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(LivenessProbePeriodSeconds, livenessProbePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeSuccessThreshold, livenessProbeSuccessThreshold_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeTcpSocketPort, livenessProbeTcpSocketPort_);
      DARABONBA_PTR_FROM_JSON(LivenessProbeTimeoutSeconds, livenessProbeTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeExecCommands, readinessProbeExecCommands_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeFailureThreshold, readinessProbeFailureThreshold_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetPath, readinessProbeHttpGetPath_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetPort, readinessProbeHttpGetPort_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetScheme, readinessProbeHttpGetScheme_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeInitialDelaySeconds, readinessProbeInitialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbePeriodSeconds, readinessProbePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeSuccessThreshold, readinessProbeSuccessThreshold_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeTcpSocketPort, readinessProbeTcpSocketPort_);
      DARABONBA_PTR_FROM_JSON(ReadinessProbeTimeoutSeconds, readinessProbeTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
      DARABONBA_PTR_FROM_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
      DARABONBA_PTR_FROM_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
      DARABONBA_PTR_FROM_JSON(Stdin, stdin_);
      DARABONBA_PTR_FROM_JSON(StdinOnce, stdinOnce_);
      DARABONBA_PTR_FROM_JSON(Tty, tty_);
      DARABONBA_PTR_FROM_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers(DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers &&) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& operator=(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& operator=(DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->commands_ != nullptr && this->cpu_ != nullptr && this->environmentVars_ != nullptr && this->gpu_ != nullptr && this->image_ != nullptr
        && this->imagePullPolicy_ != nullptr && this->lifecyclePostStartHandlerExecs_ != nullptr && this->lifecyclePostStartHandlerHttpGetHost_ != nullptr && this->lifecyclePostStartHandlerHttpGetPath_ != nullptr && this->lifecyclePostStartHandlerHttpGetPort_ != nullptr
        && this->lifecyclePostStartHandlerHttpGetScheme_ != nullptr && this->lifecyclePostStartHandlerTcpSocketHost_ != nullptr && this->lifecyclePostStartHandlerTcpSocketPort_ != nullptr && this->lifecyclePreStopHandlerExecs_ != nullptr && this->lifecyclePreStopHandlerHttpGetHost_ != nullptr
        && this->lifecyclePreStopHandlerHttpGetPath_ != nullptr && this->lifecyclePreStopHandlerHttpGetPort_ != nullptr && this->lifecyclePreStopHandlerHttpGetScheme_ != nullptr && this->lifecyclePreStopHandlerTcpSocketHost_ != nullptr && this->lifecyclePreStopHandlerTcpSocketPort_ != nullptr
        && this->livenessProbeExecCommands_ != nullptr && this->livenessProbeFailureThreshold_ != nullptr && this->livenessProbeHttpGetPath_ != nullptr && this->livenessProbeHttpGetPort_ != nullptr && this->livenessProbeHttpGetScheme_ != nullptr
        && this->livenessProbeInitialDelaySeconds_ != nullptr && this->livenessProbePeriodSeconds_ != nullptr && this->livenessProbeSuccessThreshold_ != nullptr && this->livenessProbeTcpSocketPort_ != nullptr && this->livenessProbeTimeoutSeconds_ != nullptr
        && this->memory_ != nullptr && this->name_ != nullptr && this->ports_ != nullptr && this->readinessProbeExecCommands_ != nullptr && this->readinessProbeFailureThreshold_ != nullptr
        && this->readinessProbeHttpGetPath_ != nullptr && this->readinessProbeHttpGetPort_ != nullptr && this->readinessProbeHttpGetScheme_ != nullptr && this->readinessProbeInitialDelaySeconds_ != nullptr && this->readinessProbePeriodSeconds_ != nullptr
        && this->readinessProbeSuccessThreshold_ != nullptr && this->readinessProbeTcpSocketPort_ != nullptr && this->readinessProbeTimeoutSeconds_ != nullptr && this->securityContextCapabilityAdds_ != nullptr && this->securityContextReadOnlyRootFilesystem_ != nullptr
        && this->securityContextRunAsUser_ != nullptr && this->stdin_ != nullptr && this->stdinOnce_ != nullptr && this->tty_ != nullptr && this->volumeMounts_ != nullptr
        && this->workingDir_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // environmentVars Field Functions 
    bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
    void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars> & environmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars> environmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setEnvironmentVars(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setEnvironmentVars(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePullPolicy Field Functions 
    bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
    void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
    inline string imagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


    // lifecyclePostStartHandlerExecs Field Functions 
    bool hasLifecyclePostStartHandlerExecs() const { return this->lifecyclePostStartHandlerExecs_ != nullptr;};
    void deleteLifecyclePostStartHandlerExecs() { this->lifecyclePostStartHandlerExecs_ = nullptr;};
    inline const vector<string> & lifecyclePostStartHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePostStartHandlerExecs_, vector<string>) };
    inline vector<string> lifecyclePostStartHandlerExecs() { DARABONBA_PTR_GET(lifecyclePostStartHandlerExecs_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerExecs(const vector<string> & lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerExecs(vector<string> && lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };


    // lifecyclePostStartHandlerHttpGetHost Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetHost() const { return this->lifecyclePostStartHandlerHttpGetHost_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetHost() { this->lifecyclePostStartHandlerHttpGetHost_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetHost_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerHttpGetHost(string lifecyclePostStartHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetHost_, lifecyclePostStartHandlerHttpGetHost) };


    // lifecyclePostStartHandlerHttpGetPath Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetPath() const { return this->lifecyclePostStartHandlerHttpGetPath_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetPath() { this->lifecyclePostStartHandlerHttpGetPath_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPath_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerHttpGetPath(string lifecyclePostStartHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPath_, lifecyclePostStartHandlerHttpGetPath) };


    // lifecyclePostStartHandlerHttpGetPort Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetPort() const { return this->lifecyclePostStartHandlerHttpGetPort_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetPort() { this->lifecyclePostStartHandlerHttpGetPort_ = nullptr;};
    inline int32_t lifecyclePostStartHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerHttpGetPort(int32_t lifecyclePostStartHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPort_, lifecyclePostStartHandlerHttpGetPort) };


    // lifecyclePostStartHandlerHttpGetScheme Field Functions 
    bool hasLifecyclePostStartHandlerHttpGetScheme() const { return this->lifecyclePostStartHandlerHttpGetScheme_ != nullptr;};
    void deleteLifecyclePostStartHandlerHttpGetScheme() { this->lifecyclePostStartHandlerHttpGetScheme_ = nullptr;};
    inline string lifecyclePostStartHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetScheme_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerHttpGetScheme(string lifecyclePostStartHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetScheme_, lifecyclePostStartHandlerHttpGetScheme) };


    // lifecyclePostStartHandlerTcpSocketHost Field Functions 
    bool hasLifecyclePostStartHandlerTcpSocketHost() const { return this->lifecyclePostStartHandlerTcpSocketHost_ != nullptr;};
    void deleteLifecyclePostStartHandlerTcpSocketHost() { this->lifecyclePostStartHandlerTcpSocketHost_ = nullptr;};
    inline string lifecyclePostStartHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketHost_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerTcpSocketHost(string lifecyclePostStartHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketHost_, lifecyclePostStartHandlerTcpSocketHost) };


    // lifecyclePostStartHandlerTcpSocketPort Field Functions 
    bool hasLifecyclePostStartHandlerTcpSocketPort() const { return this->lifecyclePostStartHandlerTcpSocketPort_ != nullptr;};
    void deleteLifecyclePostStartHandlerTcpSocketPort() { this->lifecyclePostStartHandlerTcpSocketPort_ = nullptr;};
    inline int32_t lifecyclePostStartHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePostStartHandlerTcpSocketPort(int32_t lifecyclePostStartHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketPort_, lifecyclePostStartHandlerTcpSocketPort) };


    // lifecyclePreStopHandlerExecs Field Functions 
    bool hasLifecyclePreStopHandlerExecs() const { return this->lifecyclePreStopHandlerExecs_ != nullptr;};
    void deleteLifecyclePreStopHandlerExecs() { this->lifecyclePreStopHandlerExecs_ = nullptr;};
    inline const vector<string> & lifecyclePreStopHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePreStopHandlerExecs_, vector<string>) };
    inline vector<string> lifecyclePreStopHandlerExecs() { DARABONBA_PTR_GET(lifecyclePreStopHandlerExecs_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerExecs(const vector<string> & lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerExecs(vector<string> && lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };


    // lifecyclePreStopHandlerHttpGetHost Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetHost() const { return this->lifecyclePreStopHandlerHttpGetHost_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetHost() { this->lifecyclePreStopHandlerHttpGetHost_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetHost_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerHttpGetHost(string lifecyclePreStopHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetHost_, lifecyclePreStopHandlerHttpGetHost) };


    // lifecyclePreStopHandlerHttpGetPath Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetPath() const { return this->lifecyclePreStopHandlerHttpGetPath_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetPath() { this->lifecyclePreStopHandlerHttpGetPath_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPath_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerHttpGetPath(string lifecyclePreStopHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPath_, lifecyclePreStopHandlerHttpGetPath) };


    // lifecyclePreStopHandlerHttpGetPort Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetPort() const { return this->lifecyclePreStopHandlerHttpGetPort_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetPort() { this->lifecyclePreStopHandlerHttpGetPort_ = nullptr;};
    inline int32_t lifecyclePreStopHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerHttpGetPort(int32_t lifecyclePreStopHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPort_, lifecyclePreStopHandlerHttpGetPort) };


    // lifecyclePreStopHandlerHttpGetScheme Field Functions 
    bool hasLifecyclePreStopHandlerHttpGetScheme() const { return this->lifecyclePreStopHandlerHttpGetScheme_ != nullptr;};
    void deleteLifecyclePreStopHandlerHttpGetScheme() { this->lifecyclePreStopHandlerHttpGetScheme_ = nullptr;};
    inline string lifecyclePreStopHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetScheme_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerHttpGetScheme(string lifecyclePreStopHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetScheme_, lifecyclePreStopHandlerHttpGetScheme) };


    // lifecyclePreStopHandlerTcpSocketHost Field Functions 
    bool hasLifecyclePreStopHandlerTcpSocketHost() const { return this->lifecyclePreStopHandlerTcpSocketHost_ != nullptr;};
    void deleteLifecyclePreStopHandlerTcpSocketHost() { this->lifecyclePreStopHandlerTcpSocketHost_ = nullptr;};
    inline string lifecyclePreStopHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketHost_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerTcpSocketHost(string lifecyclePreStopHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketHost_, lifecyclePreStopHandlerTcpSocketHost) };


    // lifecyclePreStopHandlerTcpSocketPort Field Functions 
    bool hasLifecyclePreStopHandlerTcpSocketPort() const { return this->lifecyclePreStopHandlerTcpSocketPort_ != nullptr;};
    void deleteLifecyclePreStopHandlerTcpSocketPort() { this->lifecyclePreStopHandlerTcpSocketPort_ = nullptr;};
    inline int32_t lifecyclePreStopHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLifecyclePreStopHandlerTcpSocketPort(int32_t lifecyclePreStopHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketPort_, lifecyclePreStopHandlerTcpSocketPort) };


    // livenessProbeExecCommands Field Functions 
    bool hasLivenessProbeExecCommands() const { return this->livenessProbeExecCommands_ != nullptr;};
    void deleteLivenessProbeExecCommands() { this->livenessProbeExecCommands_ = nullptr;};
    inline const vector<string> & livenessProbeExecCommands() const { DARABONBA_PTR_GET_CONST(livenessProbeExecCommands_, vector<string>) };
    inline vector<string> livenessProbeExecCommands() { DARABONBA_PTR_GET(livenessProbeExecCommands_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeExecCommands(const vector<string> & livenessProbeExecCommands) { DARABONBA_PTR_SET_VALUE(livenessProbeExecCommands_, livenessProbeExecCommands) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeExecCommands(vector<string> && livenessProbeExecCommands) { DARABONBA_PTR_SET_RVALUE(livenessProbeExecCommands_, livenessProbeExecCommands) };


    // livenessProbeFailureThreshold Field Functions 
    bool hasLivenessProbeFailureThreshold() const { return this->livenessProbeFailureThreshold_ != nullptr;};
    void deleteLivenessProbeFailureThreshold() { this->livenessProbeFailureThreshold_ = nullptr;};
    inline int32_t livenessProbeFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeFailureThreshold_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeFailureThreshold(int32_t livenessProbeFailureThreshold) { DARABONBA_PTR_SET_VALUE(livenessProbeFailureThreshold_, livenessProbeFailureThreshold) };


    // livenessProbeHttpGetPath Field Functions 
    bool hasLivenessProbeHttpGetPath() const { return this->livenessProbeHttpGetPath_ != nullptr;};
    void deleteLivenessProbeHttpGetPath() { this->livenessProbeHttpGetPath_ = nullptr;};
    inline string livenessProbeHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetPath_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeHttpGetPath(string livenessProbeHttpGetPath) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetPath_, livenessProbeHttpGetPath) };


    // livenessProbeHttpGetPort Field Functions 
    bool hasLivenessProbeHttpGetPort() const { return this->livenessProbeHttpGetPort_ != nullptr;};
    void deleteLivenessProbeHttpGetPort() { this->livenessProbeHttpGetPort_ = nullptr;};
    inline int32_t livenessProbeHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeHttpGetPort(int32_t livenessProbeHttpGetPort) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetPort_, livenessProbeHttpGetPort) };


    // livenessProbeHttpGetScheme Field Functions 
    bool hasLivenessProbeHttpGetScheme() const { return this->livenessProbeHttpGetScheme_ != nullptr;};
    void deleteLivenessProbeHttpGetScheme() { this->livenessProbeHttpGetScheme_ = nullptr;};
    inline string livenessProbeHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetScheme_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeHttpGetScheme(string livenessProbeHttpGetScheme) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetScheme_, livenessProbeHttpGetScheme) };


    // livenessProbeInitialDelaySeconds Field Functions 
    bool hasLivenessProbeInitialDelaySeconds() const { return this->livenessProbeInitialDelaySeconds_ != nullptr;};
    void deleteLivenessProbeInitialDelaySeconds() { this->livenessProbeInitialDelaySeconds_ = nullptr;};
    inline int32_t livenessProbeInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeInitialDelaySeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeInitialDelaySeconds(int32_t livenessProbeInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(livenessProbeInitialDelaySeconds_, livenessProbeInitialDelaySeconds) };


    // livenessProbePeriodSeconds Field Functions 
    bool hasLivenessProbePeriodSeconds() const { return this->livenessProbePeriodSeconds_ != nullptr;};
    void deleteLivenessProbePeriodSeconds() { this->livenessProbePeriodSeconds_ = nullptr;};
    inline int32_t livenessProbePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbePeriodSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbePeriodSeconds(int32_t livenessProbePeriodSeconds) { DARABONBA_PTR_SET_VALUE(livenessProbePeriodSeconds_, livenessProbePeriodSeconds) };


    // livenessProbeSuccessThreshold Field Functions 
    bool hasLivenessProbeSuccessThreshold() const { return this->livenessProbeSuccessThreshold_ != nullptr;};
    void deleteLivenessProbeSuccessThreshold() { this->livenessProbeSuccessThreshold_ = nullptr;};
    inline int32_t livenessProbeSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeSuccessThreshold_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeSuccessThreshold(int32_t livenessProbeSuccessThreshold) { DARABONBA_PTR_SET_VALUE(livenessProbeSuccessThreshold_, livenessProbeSuccessThreshold) };


    // livenessProbeTcpSocketPort Field Functions 
    bool hasLivenessProbeTcpSocketPort() const { return this->livenessProbeTcpSocketPort_ != nullptr;};
    void deleteLivenessProbeTcpSocketPort() { this->livenessProbeTcpSocketPort_ = nullptr;};
    inline int32_t livenessProbeTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeTcpSocketPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeTcpSocketPort(int32_t livenessProbeTcpSocketPort) { DARABONBA_PTR_SET_VALUE(livenessProbeTcpSocketPort_, livenessProbeTcpSocketPort) };


    // livenessProbeTimeoutSeconds Field Functions 
    bool hasLivenessProbeTimeoutSeconds() const { return this->livenessProbeTimeoutSeconds_ != nullptr;};
    void deleteLivenessProbeTimeoutSeconds() { this->livenessProbeTimeoutSeconds_ = nullptr;};
    inline int32_t livenessProbeTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeTimeoutSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setLivenessProbeTimeoutSeconds(int32_t livenessProbeTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(livenessProbeTimeoutSeconds_, livenessProbeTimeoutSeconds) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setPorts(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setPorts(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // readinessProbeExecCommands Field Functions 
    bool hasReadinessProbeExecCommands() const { return this->readinessProbeExecCommands_ != nullptr;};
    void deleteReadinessProbeExecCommands() { this->readinessProbeExecCommands_ = nullptr;};
    inline const vector<string> & readinessProbeExecCommands() const { DARABONBA_PTR_GET_CONST(readinessProbeExecCommands_, vector<string>) };
    inline vector<string> readinessProbeExecCommands() { DARABONBA_PTR_GET(readinessProbeExecCommands_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeExecCommands(const vector<string> & readinessProbeExecCommands) { DARABONBA_PTR_SET_VALUE(readinessProbeExecCommands_, readinessProbeExecCommands) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeExecCommands(vector<string> && readinessProbeExecCommands) { DARABONBA_PTR_SET_RVALUE(readinessProbeExecCommands_, readinessProbeExecCommands) };


    // readinessProbeFailureThreshold Field Functions 
    bool hasReadinessProbeFailureThreshold() const { return this->readinessProbeFailureThreshold_ != nullptr;};
    void deleteReadinessProbeFailureThreshold() { this->readinessProbeFailureThreshold_ = nullptr;};
    inline int32_t readinessProbeFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeFailureThreshold_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeFailureThreshold(int32_t readinessProbeFailureThreshold) { DARABONBA_PTR_SET_VALUE(readinessProbeFailureThreshold_, readinessProbeFailureThreshold) };


    // readinessProbeHttpGetPath Field Functions 
    bool hasReadinessProbeHttpGetPath() const { return this->readinessProbeHttpGetPath_ != nullptr;};
    void deleteReadinessProbeHttpGetPath() { this->readinessProbeHttpGetPath_ = nullptr;};
    inline string readinessProbeHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetPath_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeHttpGetPath(string readinessProbeHttpGetPath) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetPath_, readinessProbeHttpGetPath) };


    // readinessProbeHttpGetPort Field Functions 
    bool hasReadinessProbeHttpGetPort() const { return this->readinessProbeHttpGetPort_ != nullptr;};
    void deleteReadinessProbeHttpGetPort() { this->readinessProbeHttpGetPort_ = nullptr;};
    inline int32_t readinessProbeHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeHttpGetPort(int32_t readinessProbeHttpGetPort) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetPort_, readinessProbeHttpGetPort) };


    // readinessProbeHttpGetScheme Field Functions 
    bool hasReadinessProbeHttpGetScheme() const { return this->readinessProbeHttpGetScheme_ != nullptr;};
    void deleteReadinessProbeHttpGetScheme() { this->readinessProbeHttpGetScheme_ = nullptr;};
    inline string readinessProbeHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetScheme_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeHttpGetScheme(string readinessProbeHttpGetScheme) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetScheme_, readinessProbeHttpGetScheme) };


    // readinessProbeInitialDelaySeconds Field Functions 
    bool hasReadinessProbeInitialDelaySeconds() const { return this->readinessProbeInitialDelaySeconds_ != nullptr;};
    void deleteReadinessProbeInitialDelaySeconds() { this->readinessProbeInitialDelaySeconds_ = nullptr;};
    inline int32_t readinessProbeInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeInitialDelaySeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeInitialDelaySeconds(int32_t readinessProbeInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(readinessProbeInitialDelaySeconds_, readinessProbeInitialDelaySeconds) };


    // readinessProbePeriodSeconds Field Functions 
    bool hasReadinessProbePeriodSeconds() const { return this->readinessProbePeriodSeconds_ != nullptr;};
    void deleteReadinessProbePeriodSeconds() { this->readinessProbePeriodSeconds_ = nullptr;};
    inline int32_t readinessProbePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbePeriodSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbePeriodSeconds(int32_t readinessProbePeriodSeconds) { DARABONBA_PTR_SET_VALUE(readinessProbePeriodSeconds_, readinessProbePeriodSeconds) };


    // readinessProbeSuccessThreshold Field Functions 
    bool hasReadinessProbeSuccessThreshold() const { return this->readinessProbeSuccessThreshold_ != nullptr;};
    void deleteReadinessProbeSuccessThreshold() { this->readinessProbeSuccessThreshold_ = nullptr;};
    inline int32_t readinessProbeSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeSuccessThreshold_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeSuccessThreshold(int32_t readinessProbeSuccessThreshold) { DARABONBA_PTR_SET_VALUE(readinessProbeSuccessThreshold_, readinessProbeSuccessThreshold) };


    // readinessProbeTcpSocketPort Field Functions 
    bool hasReadinessProbeTcpSocketPort() const { return this->readinessProbeTcpSocketPort_ != nullptr;};
    void deleteReadinessProbeTcpSocketPort() { this->readinessProbeTcpSocketPort_ = nullptr;};
    inline int32_t readinessProbeTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeTcpSocketPort_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeTcpSocketPort(int32_t readinessProbeTcpSocketPort) { DARABONBA_PTR_SET_VALUE(readinessProbeTcpSocketPort_, readinessProbeTcpSocketPort) };


    // readinessProbeTimeoutSeconds Field Functions 
    bool hasReadinessProbeTimeoutSeconds() const { return this->readinessProbeTimeoutSeconds_ != nullptr;};
    void deleteReadinessProbeTimeoutSeconds() { this->readinessProbeTimeoutSeconds_ = nullptr;};
    inline int32_t readinessProbeTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeTimeoutSeconds_, 0) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setReadinessProbeTimeoutSeconds(int32_t readinessProbeTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(readinessProbeTimeoutSeconds_, readinessProbeTimeoutSeconds) };


    // securityContextCapabilityAdds Field Functions 
    bool hasSecurityContextCapabilityAdds() const { return this->securityContextCapabilityAdds_ != nullptr;};
    void deleteSecurityContextCapabilityAdds() { this->securityContextCapabilityAdds_ = nullptr;};
    inline const vector<string> & securityContextCapabilityAdds() const { DARABONBA_PTR_GET_CONST(securityContextCapabilityAdds_, vector<string>) };
    inline vector<string> securityContextCapabilityAdds() { DARABONBA_PTR_GET(securityContextCapabilityAdds_, vector<string>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setSecurityContextCapabilityAdds(const vector<string> & securityContextCapabilityAdds) { DARABONBA_PTR_SET_VALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setSecurityContextCapabilityAdds(vector<string> && securityContextCapabilityAdds) { DARABONBA_PTR_SET_RVALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };


    // securityContextReadOnlyRootFilesystem Field Functions 
    bool hasSecurityContextReadOnlyRootFilesystem() const { return this->securityContextReadOnlyRootFilesystem_ != nullptr;};
    void deleteSecurityContextReadOnlyRootFilesystem() { this->securityContextReadOnlyRootFilesystem_ = nullptr;};
    inline bool securityContextReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(securityContextReadOnlyRootFilesystem_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setSecurityContextReadOnlyRootFilesystem(bool securityContextReadOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(securityContextReadOnlyRootFilesystem_, securityContextReadOnlyRootFilesystem) };


    // securityContextRunAsUser Field Functions 
    bool hasSecurityContextRunAsUser() const { return this->securityContextRunAsUser_ != nullptr;};
    void deleteSecurityContextRunAsUser() { this->securityContextRunAsUser_ = nullptr;};
    inline int64_t securityContextRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(securityContextRunAsUser_, 0L) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setSecurityContextRunAsUser(int64_t securityContextRunAsUser) { DARABONBA_PTR_SET_VALUE(securityContextRunAsUser_, securityContextRunAsUser) };


    // stdin Field Functions 
    bool hasStdin() const { return this->stdin_ != nullptr;};
    void deleteStdin() { this->stdin_ = nullptr;};
    inline bool stdin() const { DARABONBA_PTR_GET_DEFAULT(stdin_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setStdin(bool stdin) { DARABONBA_PTR_SET_VALUE(stdin_, stdin) };


    // stdinOnce Field Functions 
    bool hasStdinOnce() const { return this->stdinOnce_ != nullptr;};
    void deleteStdinOnce() { this->stdinOnce_ = nullptr;};
    inline bool stdinOnce() const { DARABONBA_PTR_GET_DEFAULT(stdinOnce_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setStdinOnce(bool stdinOnce) { DARABONBA_PTR_SET_VALUE(stdinOnce_, stdinOnce) };


    // tty Field Functions 
    bool hasTty() const { return this->tty_ != nullptr;};
    void deleteTty() { this->tty_ = nullptr;};
    inline bool tty() const { DARABONBA_PTR_GET_DEFAULT(tty_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setTty(bool tty) { DARABONBA_PTR_SET_VALUE(tty_, tty) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts> & volumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts>) };
    inline vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts> volumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts>) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setVolumeMounts(const vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setVolumeMounts(vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The container startup arguments. You can specify up to 10 arguments.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The container startup commands. You can specify up to 20 commands. Each command can contain up to 256 characters.
    std::shared_ptr<vector<string>> commands_ = nullptr;
    // The number of vCPUs per container.
    std::shared_ptr<float> cpu_ = nullptr;
    // The environment variables.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersEnvironmentVars>> environmentVars_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The container image.
    std::shared_ptr<string> image_ = nullptr;
    // The image pulling policy. Valid values:
    // 
    // *   Always: Each time image pulling is performed.
    // *   IfNotPresent: Image pulling is performed as needed. On-premises images are preferentially used. If no on-premises images are available, image pulling is performed.
    // *   Never: On-premises images are always used. Image pulling is not performed.
    std::shared_ptr<string> imagePullPolicy_ = nullptr;
    // The commands that are run for configuring the postStart callback function by using the CLI within the container.
    std::shared_ptr<vector<string>> lifecyclePostStartHandlerExecs_ = nullptr;
    // The IP address of the host to which HTTP GET requests for configuring the postStart callback function are sent.
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetHost_ = nullptr;
    // The path to which HTTP GET requests for configuring the postStart callback function are sent.
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetPath_ = nullptr;
    // The port over which HTTP GET requests for configuring the postStart callback function are sent.
    std::shared_ptr<int32_t> lifecyclePostStartHandlerHttpGetPort_ = nullptr;
    // The protocol type of the HTTP GET requests that are sent for configuring the postStart callback function.
    std::shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme_ = nullptr;
    // The IP address of the host detected by the TCP sockets used for configuring the postStart callback function.
    std::shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost_ = nullptr;
    // The port detected by the TCP sockets used for configuring the postStart callback function.
    std::shared_ptr<int32_t> lifecyclePostStartHandlerTcpSocketPort_ = nullptr;
    // The commands that are run for configuring the preStop callback function by using the CLI within the container.
    std::shared_ptr<vector<string>> lifecyclePreStopHandlerExecs_ = nullptr;
    // The IP address of the host to which HTTP GET requests for configuring the preStop callback function are sent.
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetHost_ = nullptr;
    // The path to which HTTP GET requests for configuring the preStop callback function are sent.
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetPath_ = nullptr;
    // The port over which HTTP GET requests for configuring the preStop callback function are sent.
    std::shared_ptr<int32_t> lifecyclePreStopHandlerHttpGetPort_ = nullptr;
    // The protocol type of the HTTP Get requests that are sent for configuring the preStop callback function.
    std::shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme_ = nullptr;
    // The IP address of the host detected by the TCP sockets used for configuring the preStop callback function.
    std::shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost_ = nullptr;
    // The port detected by the TCP sockets used for configuring the preStop callback function.
    std::shared_ptr<int32_t> lifecyclePreStopHandlerTcpSocketPort_ = nullptr;
    // The commands that are run in the container when you use the CLI to perform liveness probes.
    std::shared_ptr<vector<string>> livenessProbeExecCommands_ = nullptr;
    // The minimum number of consecutive failures before a successful liveness probe is considered failed.
    // 
    // Default value: 3.
    std::shared_ptr<int32_t> livenessProbeFailureThreshold_ = nullptr;
    // The path to which HTTP GET requests are sent when you use the HTTP GET requests to perform liveness probes.
    std::shared_ptr<string> livenessProbeHttpGetPath_ = nullptr;
    // The port to which HTTP GET requests are sent to perform liveness probes.
    std::shared_ptr<int32_t> livenessProbeHttpGetPort_ = nullptr;
    // The protocol type of HTTP GET requests when you use the HTTP GET requests to perform liveness probes. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> livenessProbeHttpGetScheme_ = nullptr;
    // The number of seconds that elapses from the startup of the container to the start time of a liveness probe.
    std::shared_ptr<int32_t> livenessProbeInitialDelaySeconds_ = nullptr;
    // The interval at which liveness probes are performed. Unit: seconds. Default value: 10. Minimum value: 1.
    std::shared_ptr<int32_t> livenessProbePeriodSeconds_ = nullptr;
    // The minimum number of consecutive successes before a failed liveness probe is considered successful. Default value: 1. Valid value: 1.
    std::shared_ptr<int32_t> livenessProbeSuccessThreshold_ = nullptr;
    // The port detected by TCP sockets when you use the TCP sockets to perform liveness probes.
    std::shared_ptr<int32_t> livenessProbeTcpSocketPort_ = nullptr;
    // The timeout period of a liveness probe. Default value: 1. Minimum value: 1. Unit: seconds.
    std::shared_ptr<int32_t> livenessProbeTimeoutSeconds_ = nullptr;
    // The memory size per container.
    std::shared_ptr<float> memory_ = nullptr;
    // The custom name of the container.
    std::shared_ptr<string> name_ = nullptr;
    // The exposed ports and protocols.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersPorts>> ports_ = nullptr;
    // The commands that are run in the container when you use the CLI to perform readiness probes.
    std::shared_ptr<vector<string>> readinessProbeExecCommands_ = nullptr;
    // The minimum number of consecutive failures before a successful readiness probe is considered failed.
    // 
    // Default value: 3.
    std::shared_ptr<int32_t> readinessProbeFailureThreshold_ = nullptr;
    // The path to which HTTP GET requests are sent when you use the HTTP GET requests to perform readiness probes.
    std::shared_ptr<string> readinessProbeHttpGetPath_ = nullptr;
    // The path to which HTTP GET requests are sent when you use the HTTP GET requests to perform readiness probes.
    std::shared_ptr<int32_t> readinessProbeHttpGetPort_ = nullptr;
    // The protocol type of HTTP GET requests when you use the HTTP requests to perform readiness probes. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> readinessProbeHttpGetScheme_ = nullptr;
    // The number of seconds that elapses from the startup of the container to the start time of a readiness probe.
    std::shared_ptr<int32_t> readinessProbeInitialDelaySeconds_ = nullptr;
    // The interval at which readiness probes are performed. Unit: seconds. Default value: 10. Minimum value: 1.
    std::shared_ptr<int32_t> readinessProbePeriodSeconds_ = nullptr;
    // The minimum number of consecutive successes before a failed readiness probe is considered successful. Default value: 1. Valid value: 1.
    std::shared_ptr<int32_t> readinessProbeSuccessThreshold_ = nullptr;
    // The port detected by TCP sockets when you use the TCP sockets to perform readiness probes.
    std::shared_ptr<int32_t> readinessProbeTcpSocketPort_ = nullptr;
    // The timeout period of a readiness probe. Default value: 1. Minimum value: 1. Unit: seconds.
    std::shared_ptr<int32_t> readinessProbeTimeoutSeconds_ = nullptr;
    // The permissions that are granted to the processes in the container. Valid values: NET_ADMIN and NET_RAW.
    // 
    // >  To use NET_RAW, you must submit a ticket.
    std::shared_ptr<vector<string>> securityContextCapabilityAdds_ = nullptr;
    // Indicates whether the root file system on which the container runs is read-only. Valid value: true.
    std::shared_ptr<bool> securityContextReadOnlyRootFilesystem_ = nullptr;
    // The ID of the user that runs the entry point of the container process.
    std::shared_ptr<int64_t> securityContextRunAsUser_ = nullptr;
    // Indicates whether the container allocates buffer resources to standard input streams when the container is running. If this parameter is not specified, an end-of-file (EOF) error may occur when standard input streams in the container are read. Default value: false.
    std::shared_ptr<bool> stdin_ = nullptr;
    // Indicates whether standard input streams are disconnected after a client is disconnected. If Stdin is set to true, standard input streams remain connected among multiple sessions.
    // 
    // If StdinOnce is set to true, standard input streams are connected after the container is started, and remain idle until a client is connected to receive data. After the client is disconnected, streams are also disconnected, and remain disconnected until the container restarts.
    std::shared_ptr<bool> stdinOnce_ = nullptr;
    // Indicates whether the Interaction feature is enabled. Valid values:
    // 
    // *   true
    // *   false
    // 
    // If the command is a /bin/bash command, the value of this parameter is true.
    // 
    // Default value: false.
    std::shared_ptr<bool> tty_ = nullptr;
    // The mounted volumes.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsContainersVolumeMounts>> volumeMounts_ = nullptr;
    // The working directory.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
