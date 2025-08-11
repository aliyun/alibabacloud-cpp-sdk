// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersSecurityContext.hpp>
#include <vector>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestInitContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainers& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_TO_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_TO_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_TO_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
      DARABONBA_PTR_FROM_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
      DARABONBA_PTR_FROM_JSON(InitContainerPorts, initContainerPorts_);
      DARABONBA_PTR_FROM_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    ModifyEciScalingConfigurationRequestInitContainers() = default ;
    ModifyEciScalingConfigurationRequestInitContainers(const ModifyEciScalingConfigurationRequestInitContainers &) = default ;
    ModifyEciScalingConfigurationRequestInitContainers(ModifyEciScalingConfigurationRequestInitContainers &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainers() = default ;
    ModifyEciScalingConfigurationRequestInitContainers& operator=(const ModifyEciScalingConfigurationRequestInitContainers &) = default ;
    ModifyEciScalingConfigurationRequestInitContainers& operator=(ModifyEciScalingConfigurationRequestInitContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityContext_ != nullptr
        && this->args_ != nullptr && this->commands_ != nullptr && this->cpu_ != nullptr && this->gpu_ != nullptr && this->image_ != nullptr
        && this->imagePullPolicy_ != nullptr && this->initContainerEnvironmentVars_ != nullptr && this->initContainerPorts_ != nullptr && this->initContainerVolumeMounts_ != nullptr && this->memory_ != nullptr
        && this->name_ != nullptr && this->workingDir_ != nullptr; };
    // securityContext Field Functions 
    bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
    void deleteSecurityContext() { this->securityContext_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext & securityContext() const { DARABONBA_PTR_GET_CONST(securityContext_, Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext) };
    inline Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext securityContext() { DARABONBA_PTR_GET(securityContext_, Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setSecurityContext(const Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext & securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setSecurityContext(Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext && securityContext) { DARABONBA_PTR_SET_RVALUE(securityContext_, securityContext) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imagePullPolicy Field Functions 
    bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
    void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
    inline string imagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


    // initContainerEnvironmentVars Field Functions 
    bool hasInitContainerEnvironmentVars() const { return this->initContainerEnvironmentVars_ != nullptr;};
    void deleteInitContainerEnvironmentVars() { this->initContainerEnvironmentVars_ = nullptr;};
    inline const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars() const { DARABONBA_PTR_GET_CONST(initContainerEnvironmentVars_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>) };
    inline vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> initContainerEnvironmentVars() { DARABONBA_PTR_GET(initContainerEnvironmentVars_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerEnvironmentVars(const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> & initContainerEnvironmentVars) { DARABONBA_PTR_SET_VALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerEnvironmentVars(vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars> && initContainerEnvironmentVars) { DARABONBA_PTR_SET_RVALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };


    // initContainerPorts Field Functions 
    bool hasInitContainerPorts() const { return this->initContainerPorts_ != nullptr;};
    void deleteInitContainerPorts() { this->initContainerPorts_ = nullptr;};
    inline const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts> & initContainerPorts() const { DARABONBA_PTR_GET_CONST(initContainerPorts_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts>) };
    inline vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts> initContainerPorts() { DARABONBA_PTR_GET(initContainerPorts_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts>) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerPorts(const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts> & initContainerPorts) { DARABONBA_PTR_SET_VALUE(initContainerPorts_, initContainerPorts) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerPorts(vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts> && initContainerPorts) { DARABONBA_PTR_SET_RVALUE(initContainerPorts_, initContainerPorts) };


    // initContainerVolumeMounts Field Functions 
    bool hasInitContainerVolumeMounts() const { return this->initContainerVolumeMounts_ != nullptr;};
    void deleteInitContainerVolumeMounts() { this->initContainerVolumeMounts_ = nullptr;};
    inline const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts() const { DARABONBA_PTR_GET_CONST(initContainerVolumeMounts_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>) };
    inline vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> initContainerVolumeMounts() { DARABONBA_PTR_GET(initContainerVolumeMounts_, vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerVolumeMounts(const vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> & initContainerVolumeMounts) { DARABONBA_PTR_SET_VALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setInitContainerVolumeMounts(vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts> && initContainerVolumeMounts) { DARABONBA_PTR_SET_RVALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline ModifyEciScalingConfigurationRequestInitContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestInitContainersSecurityContext> securityContext_ = nullptr;
    // The container startup arguments.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The commands that you can run to start the init container.
    std::shared_ptr<vector<string>> commands_ = nullptr;
    // The number of vCPUs per init container.
    std::shared_ptr<float> cpu_ = nullptr;
    // The number of GPUs per init container.
    std::shared_ptr<int32_t> gpu_ = nullptr;
    // The image of the init container.
    std::shared_ptr<string> image_ = nullptr;
    // The image pulling policy. Valid values:
    // 
    // *   Always: Image pulling is performed each time instances are created.
    // *   IfNotPresent: Image pulling is performed as needed. On-premises images are preferentially used. If no on-premises images are available, image pulling is performed.
    // *   Never: On-premises images are always used. Image pulling is not performed.
    std::shared_ptr<string> imagePullPolicy_ = nullptr;
    // The environment variables of the init container.
    std::shared_ptr<vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerEnvironmentVars>> initContainerEnvironmentVars_ = nullptr;
    // The ports of the init container.
    std::shared_ptr<vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerPorts>> initContainerPorts_ = nullptr;
    // The volume mounts of the init container.
    std::shared_ptr<vector<Models::ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts>> initContainerVolumeMounts_ = nullptr;
    // The memory size per init container. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The name of the init container.
    std::shared_ptr<string> name_ = nullptr;
    // The working directory.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
